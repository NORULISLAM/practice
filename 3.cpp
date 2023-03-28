#include <iostream>
#include <algorithm>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right, int k){
    int i, j, k_count;

    i = left; 
    j = mid; 
    k_count = 0; 

    while(i <= mid - 1 && j <= right){
        if(arr[i] + arr[j] == k){
            k_count++;
            i++;
            j++;
        }
        else if(arr[i] + arr[j] < k){
            i++;
        }
        else{
            j++;
        }
    }

    while(i <= mid - 1){
        i++;
    }

    while(j <= right){
        j++;
    }

    return k_count;
}

int mergeSort(int arr[], int temp[], int left, int right, int k){
    int mid, count;

    if(right > left){
        mid = (left + right) / 2;
        count = mergeSort(arr, temp, left, mid, k);
        count += mergeSort(arr, temp, mid + 1, right, k);
        count += merge(arr, temp, left, mid + 1, right, k);

        return count;
    }

    return 0;
}

int countPairs(int arr[], int n, int k){
    int temp[n];
    return mergeSort(arr, temp, 0, n - 1, k);
}

int main(){
    int n, k;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> k;

    int pair_count = countPairs(arr, n, k);
    cout << pair_count << endl;

    return 0;
}
