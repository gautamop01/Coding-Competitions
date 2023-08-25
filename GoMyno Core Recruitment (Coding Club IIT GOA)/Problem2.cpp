#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> solve(int n, vector<long long>& arr) {
    long long max_val = *max_element(arr.begin(), arr.end());
    long long new_val = (max_val != 1) ? 1 : 2;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == max_val) {
            arr[i] = new_val;
            break;
        }
    }

    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<long long> result = solve(n, arr);
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
