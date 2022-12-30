#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int queries;
    cin >> queries;

    int array[queries];
    for (int i = 0; i < queries; i++)
    {
        cin >> array[queries];
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < queries; i++)
    {
        for (int j = 1; j <= array[queries]; j++)
        {
            if (array[queries] % j == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (j % arr[k] == 0)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
    }
}