//dem so chu so cua mot so nguyen duong
#include<bits/stdc++.h>
using namespace std;
int demchuso(int n){
  	if (n<10) {
    return 1;
  	}
  	else {
    	return 1+ demchuso(n/10);
  	}
}
int main(){
	int n=158456;
	cout<<"so chu so cua "<<n<<" la: "<<demchuso(n)<<endl;
}
