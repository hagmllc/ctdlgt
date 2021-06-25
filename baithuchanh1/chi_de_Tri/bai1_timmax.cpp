//bai toan Min_ max : thuat toan chia de tri 
//Chia dãy x[0...n-1] thành các dãy con: x[0...k] và x[k+1...n-1].
//Tìm max trên các dãy con là bài toán cùng dang, nhung co nho hon.
//Ðe tìm max trên các dãy con ta tiep tuc chia dôi chúng (de quy)
///Quá trình chia dôi dung lui khi nhun duoc các dãy con chi co 1 hoac 2 phan tu

#include<bits/stdc++.h>
using namespace std;

//Tìm max trong  day a[dau,..,cuoi] cua mang a[].
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
