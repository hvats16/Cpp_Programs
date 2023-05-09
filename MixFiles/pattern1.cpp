#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,k=1;
	for(i=1;i<=n;i++){
		for(j=i;j<=(n-1);j++){
			cout<<"  ";
		}
		for(j=1;j<=k;j++){
             cout<<j<<" ";
		}
		k=k+2;
        cout<<endl;
	}
	return 0;
}