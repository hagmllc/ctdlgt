//btvn 4. tinh tong 
#include<bits/stdc++.h>
using namespace std;
int Tong(int a[],int n){
    if (n==1)
        return a[0];
    else
        return a[n-1]+Tong(a,n-1);
}
int main(){
	int a[10]={1,3,2,5,4,8,9,7,5,6};
	cout<<"tong la: "<<Tong(a,10);
}
