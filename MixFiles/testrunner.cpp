#include<bits/stdc++.h>
using namespace std;

auto returnValue(double n) {
    return n + 10.40;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << returnValue(11.40) << endl;

}