#include <bits/stdc++.h>
using namespace std;

void temp(int (&arr)[5]){
    for(int i=0;i<5;i++){
        arr[i] = arr[i] + 5;
    }
}
void foo(int (&myArray)[100])
{
    for(int i=0;i<5;i++){
        myArray[i] = myArray[i] + 5;
    }
}

int main()
{

    // int a[100] = {10,20,30,40,50};
    // foo(a);
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }
    int a[5] = {10,20,30,40,50};
    temp(a);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }  
    return 0;
}