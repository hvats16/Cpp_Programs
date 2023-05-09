#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n-1;j++){
           cout<<" ";
		}
		for(j=0;j<=i;j++){
			if(j==0 || j==i ||i==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}