#include <iostream>
#include <algorithm>
using namespace std;

int findMissingNumber(int arr[], int n){
    int sum = (n * (n + 1)) / 2; 
    int arr_sum = 0; 
    for(int i = 0; i < n - 1; i++){
        arr_sum += arr[i];
    }

    return sum - arr_sum; 
}

int main(){
    int n;
    cin >> n;

    int arr[n - 1];
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }

    int missing_number = findMissingNumber(arr, n);
    cout << missing_number << endl;

    return 0;
}
