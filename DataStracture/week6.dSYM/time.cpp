#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int distinctCount = unique(a.begin(), a.end()) - a.begin();
    cout << distinctCount << endl;
    return 0;
}
