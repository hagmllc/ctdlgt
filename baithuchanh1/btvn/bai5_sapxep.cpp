//bai 5. sap xep
#include<bits/stdc++.h>
using namespace std;
    int partition(int arr[], int low, int high) 
    { 
        int pivot = arr[high];  
        int i = (low-1);  
        for (int j=low; j<high; j++) 
        {  
            if (arr[j] <= pivot) 
            { 
                i++; 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
        int temp = arr[i+1]; 
        arr[i+1] = arr[high]; 
        arr[high] = temp; 
        return i+1; 
    } 

    void sort(int arr[], int low, int high) 
    { 
        if (low < high) 
        { 
            int pi = partition(arr, low, high); 
            sort(arr, low, pi-1); 
            sort(arr, pi+1, high); 
        } 
    } 
    int main(){
    	int a[15]={1,3,8,2,6,9,4,10,58,12,6,5,96,152,7};
    	for (int i=0; i<15; i++){
    		cout<<a[i]<<" ";
    		}
    	sort(a,0,14);
    	cout<<"\nSap xep theo chieu tang dan la: "<<endl;
    	for (int i=0; i<15; i++){
    		cout<<a[i]<<" ";
    		}
    	
    	return 0;
	}
