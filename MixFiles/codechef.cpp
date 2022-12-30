#include <iostream>
using namespace std;
void printPermutaion() {
    int input;
    cin >> input;
    if (input < 4) {
        cout << -1 << endl;
        return;
    }
    if(input == 4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
        return;
    }
    for (int i = 1; i <= input; i += 2) {
        cout << i << " ";
    }
    for (int i = 2; i <= input; i += 2) {
        cout << i << " ";
    }
}
int main() {
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        printPermutaion();
        cout << endl;
    }
    return 0;
}