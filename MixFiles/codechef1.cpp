#include <bits/stdc++.h>
using namespace std;
void stickBreak(){
    int initialValue, noOfParts;
    cin >> initialValue >> noOfParts;
    if (initialValue % noOfParts == 0) {
        cout << 0 << endl;
        return;
        }
        cout << 1 << endl;
        return;
}
int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases;i++){
        stickBreak();
    }
}