#include <map>
#include<bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    
    multimap<int, int> gquiz1;
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(6, 10));
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    // for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
    //     cout << '\t' << itr->first << '\t' << itr->second
    //          << '\n';
    // }
    cout << endl;
    gquiz1.insert(pair<int, int>(4, 50));
    gquiz1.insert(pair<int, int>(5, 10));
    // cout << it->first << " " << it->second;
    // cout << endl;
    auto it = gquiz1.equal_range(6);
    for (auto itr = it.first; itr != it.second; itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // auto it1 = gquiz1.find(6);
    // cout << it1->first << " " << it1->second;

}