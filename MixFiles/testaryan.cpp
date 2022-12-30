#include <bits/stdc++.h>
using namespace std;

void pairStar(char input[]) {
    if (input[0] == '\0') {
        return;
    }
    int start = 0;
    pairStar(input + 1);
    if (input[start] == input[start + 1]) {
        int l = strlen(input);
        // Extending the string
        input[l + 1] = '\0';
        int i;
        for (i = l - 1; i >= start + 1; i--) {
            input[i + 1] = input[i];
        }
        input[start + 1] = '*';
    }

    int main() {
        string s = "000000012345";

        int num = stoi(s);
        cout << num;
    }

    void towerOfHanoi(int n, char source, char auxiliary, char destination) {
        // Write your code here
        if (n == 0) return;
        if (n == 1)
            cout << source << ' ' << destination << endl;
        else if (n == 2) {
            cout << source << ' ' << auxiliary << endl;
            cout << source << ' ' << destination << endl;
            cout << auxiliary << ' ' << destination << endl;

        } else {
            towerOfHanoi(n - 1, source, destination, auxiliary);
            cout << source << ' ' << destination << endl;
            towerOfHanoi(n - 1, auxiliary, source, destination);
        }
    }

    bool checkPalindrome(char input[]) {
        static int i = 0;
        int S = strlen(input);
        if (i >= S) return 1;
        if (input[i] != input[S - i - 1]) {
            return 0;
        } else {
            i++;
            checkPalindrome(input);
        }
    }