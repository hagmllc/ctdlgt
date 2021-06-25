//bai 1 phan 1.1
#include<bits/stdc++.h>
using namespace std;
long long fibonaci(int n){
	if (n==1 || n==2){
		return 1;
	}
	else {
		return fibonaci(n-1) + fibonaci(n-2);
	}
}
int main(){
	//tim va hien thi so thu n
	int a,n;
	cout<<"Nhap so n:";
	cin>>a;
	cout<<"So fibonaci thu "<<a<<" la: "<<fibonaci(a)<<endl;
	//hien thi day n so fibonaci
	cout<<"nhap so luong day: ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cout<<fibonaci(i)<<"\t";
	}
	return 0;
}

