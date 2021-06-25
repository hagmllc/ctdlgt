//bai3_ucln
//neu b = 0 thi ucln(a,b)=a;
//con lai thi ucln(a,b) = ucln(b,a%b)
#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	if (b==0){
		return a;
	}
	else return ucln(b,a%b);
}
int main(){
	int a,b;
	cout<<"Nhap so thu nhat: ";cin>>a;
	cout<<"Nhap so thu hai: ";cin>>b;
	cout<<"ucln("<<a<<","<<b<<")="<<ucln(a,b);
	return 0;
}
