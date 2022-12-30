#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 2, 5, 3, 5, 3};
    // int n = arr.size();
    int suffix[7];
    int k = 1;
    for (int i = 7 - 2; i >= 0; i--)
    {
        suffix[k] = suffix[k] + arr[i];
        k++;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << suffix[i] << endl;
    }
}