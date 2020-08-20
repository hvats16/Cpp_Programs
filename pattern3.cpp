#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++){
          
      for(j=1;j<=n;j++){
          if(j>n-i){
          	cout<<j%n<<" ";
          }
          else{
          	cout<<"  ";
          }
      }
      
        for(j=1;j<i;j++){
              cout<<n-j<<" ";
         }
          cout<<endl;
        
       
	}
	return 0;
}