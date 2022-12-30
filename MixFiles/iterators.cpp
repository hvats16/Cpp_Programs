#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,
                     3,
                     4,
                     5,
                     6,
                     7,
                     8};

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
    }

    // vector<int>::iterator it;
    // it = v.begin();
    // for (it = v.begin(); it < v.end(); ++it){
    //     cout << *it << " ";
    // }

    vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it1;
    for (it1 = vp.begin(); it1 < vp.end();it1++){
        cout << it1->first<< " " << (*it1).second;
        cout << endl;
    }
    for(int value:v){
        cout << value << " ";
    }
    cout << endl;

    for (auto i = v.begin(); i < v.end();i++){
        cout << *i << " ";
    }

        return 0;
}