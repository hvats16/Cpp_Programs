#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> li;
    forward_list<int> li;
    li.push_front(1);
    li.push_front(11);
    li.push_front(111);
    li.push_front(12);
    li.push_front(13);
    li.sort();

    for (auto it = li.begin(); it != li.end();it++)
    {
        cout<<* it<<endl;
    }
}