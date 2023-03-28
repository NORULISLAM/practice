#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    int left = 0, right = n - 1;
    bool found = false;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            found = true;
            break;
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if (found) {
        int i = left, j = right;
        while (i < n && arr[i] == k) {
            i++;
        }
        while (j >= 0 && arr[j] == k) {
            j--;
        }
        if (i - j > 2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
