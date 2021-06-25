//dem so lan xuat hien cua phan tu x trong day
#include<bits/stdc++.h>
using namespace std;
int dem(int a[],int i, int x)
{
    if(i==(-1)) return 0;
    else
    {
        if(a[i] == x) return 1 + dem(a, i-1,x);
        else return dem(a, i-1,x);
    }
}
int main(){
	int a[10] = {7,2,7,6,7,2,7,7,4,5};
	int x;
	cout<<"Nhap gia tri x: ";cin>>x;
	cout<<dem(a,10,x);
}
