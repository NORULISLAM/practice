#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> a >> b;

    // remove elements in the range a to b
    for (int i = a; i <= b; i++) {
        arr[i] = 0; // replace the element with 0
    }

    // print the remaining elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
