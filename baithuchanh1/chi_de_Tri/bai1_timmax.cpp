//bai toan Min_ max : thuat toan chia de tri 
//Chia d�y x[0...n-1] th�nh c�c d�y con: x[0...k] v� x[k+1...n-1].
//T�m max tr�n c�c d�y con l� b�i to�n c�ng dang, nhung co nho hon.
//�e t�m max tr�n c�c d�y con ta tiep tuc chia d�i ch�ng (de quy)
///Qu� tr�nh chia d�i dung lui khi nhun duoc c�c d�y con chi co 1 hoac 2 phan tu

#include<bits/stdc++.h>
using namespace std;

//T�m max trong  day a[dau,..,cuoi] cua mang a[].
int max(int x[], int left, int right){
	if (left == right) 
		return x[left];
	else if (left == (right -1)){
		if (x[left] > x[right]) return x[left];
		else return x[right];
	}
	else{
		int mid = (left + right) / 2;
		int maxLeft = max(x, left, mid);
		int maxRight = max(x, mid + 1, right);
		if (maxLeft > maxRight) return maxLeft;
		else return maxRight;
	}
}

int main()
{
    int a[10]={1,15,20,4,7,9,56,2,5,8};
    int m = max(a,1,8);
    cout<<"phan tu lon nhat trong day la :"<<m<<endl;
    return 0 ;
} 
