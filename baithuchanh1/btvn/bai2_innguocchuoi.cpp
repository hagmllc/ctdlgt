//in nguoc xau ki tu
#include<bits/stdc++.h>
using namespace std;
void daonguoc(char s[],int n,int i)
{
      if(i==(n/2)) return;
      char tg=s[i];
      s[i]=s[n-i-1];
      s[n-i-1]=tg;
      daonguoc(s,n,i+1);
}
int main()
{
      char s[500];
      int n;
      cout<<"nhap chuoi: ";
      gets(s);
      n=strlen(s);
      cout<<"chuoi vua nhap la: "<<s<<endl;
      if(n==0) return 0;
      daonguoc(s,n,0);
      cout<<"Chuoi dao nguoc la: "<<s<<endl;
      return 0;
}
