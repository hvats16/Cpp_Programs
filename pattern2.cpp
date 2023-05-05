#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; //taking inputs for no.of lines
	int i,j,k=1,l=1;
	for(i=1;i<=n;i++){
		for(j=i;j<=(n-1);j++){
			cout<<"  ";
		}
		for(j=1;j<=k;j++){
          if(j==1 || j==k){
          	cout<<l<<" ";
          }
          else{
          	cout<<"0 ";
          }
		}
		l++;
		k=k+2;
		cout<<endl;
	}
	return 0;
}
