#include<bits/stdc++.h>
using namespace std;


void printName(int i, int n) {
    if (i > n) {
        return;
    }
    cout << "Hello" << endl;
    printName(i + 1, n);
}

void oneToN(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << " ";
    oneToN(i + 1, n);
}

void nToOne(int i) {
    if (i < 1) {
        return;
    }
    cout << i << " ";
    nToOne(i - 1);
}

int sumToN(int n, int sum) {
    if (n < 1) {
        return sum;
    }
    return sumToN(n - 1, sum + n);

}

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void revArray(int arr[], int left, int right) {
    if (left >= right / 2) {
        return;
    }
    swap(arr[left], arr[right - left - 1]);
    revArray(arr, left + 1, right   );
}

bool checkPalindrome(string s, int i) {
    int n = s.size();
    if (i >= n / 2) {
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        return false;
    }
    return checkPalindrome(s, i + 1);
}

int fibbonacci(int n) {
    // int a = 0;
    // int b = 1;
    // int c = 0;
    // for (int i = 2; i < n; i++) {
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }
    // return c;

    // recursive code

    if (n <= 1) {
        return n;
    }
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // printName(1, 5);
    // cout << endl;
    // oneToN(1, 100);
    // cout << endl;
    // nToOne(100);
    // int arr[5] = {0, 1, 2, 3, 4};
    // revArray(arr, 0, 5);
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }
    cout << checkPalindrome("madam", 0) << endl;
    cout << fibbonacci(9) << endl;
}