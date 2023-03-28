#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &arr, int val) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == val) {
            return true;
        }
        else if (arr[mid] > val) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return false;
}

string isSubset(vector<int> &arr1, vector<int> &arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    for (int i = 0; i < arr1.size(); i++) {
        if (!binarySearch(arr2, arr1[i])) {
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    cout << isSubset(arr1, arr2) << endl;
    
    return 0;
}
