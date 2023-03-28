#include <iostream>
#include <vector>

using namespace std;

vector<int> even_generator(vector<int> v) {
    vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
vector<int> nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
nums.push_back(5);
    vector<int> even_nums = even_generator(nums);

    cout << "Original vector: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Even numbers: ";
    for (int i = 0; i < even_nums.size(); i++) {
        cout << even_nums[i] << " ";
    }
    cout << endl;

    return 0;
}
