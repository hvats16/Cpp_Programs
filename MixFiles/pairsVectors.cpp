#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p[3];
    p[0] = {1, 2};
    p[1] = {2, 3};
    p[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second;
        cout << endl;
    }

    vector<int> v;
    int size;
    cin >> size;
    for (int i = 0; i < size;i++){
        v.push_back(i);
    }
    for (int i = 0; i < size;i++){
        cout << v[i] << endl;
    }

}