#include<bits/stdc++.h>
using namespace std;
long long power(int a, int n){
	if (n == 1)
		return a;
	else{
		long long x = power(a, n/2);
		if (n%2==0) return x*x;
	else return x*x*a;
	}
}
int main(){
	int a,n;
	cout<<"tinh luy thua a mu n: "<<endl;
	cout<<"Nhap a:";cin>>a;
	cout<<"Nhap n:";cin>>n;
	cout<<a<<"^"<<n<<" = "<<power(a,n);
}

