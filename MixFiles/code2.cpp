#include <math.h>

#include <iostream>
using namespace std;
int printCount(int queries, int arr[], int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(queries); i++) {
        if (queries % i == 0) {
            int firstMultiple = i;
            int secondMultiple = queries / i;
            for (int j = 0; j < n; j++) {
                if (firstMultiple == secondMultiple) {
                    if (firstMultiple % arr[j] == 0) {
                        count++;
                    }
                } else {
                    if (firstMultiple % arr[j] == 0) {
                        count++;
                    }
                    if (secondMultiple % arr[j] == 0) {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int queries;
    cin >> queries;
    int array[queries];
    for (int i = 0; i < queries; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < queries; i++) {
        printCount(array[i], arr, n);
    }
}