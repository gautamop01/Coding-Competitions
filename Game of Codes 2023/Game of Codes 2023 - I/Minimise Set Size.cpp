#include <bits/stdc++.h>
using namespace std;

int smallest_set(long long num, long long k) {
        if (num == 0){
            return 0;
        } 
        int length = 1;
        int digit = num % 10;
        for (;length <= 10; ++length) {
            if (length * k > num){
                return -1;
            } 
            if (digit == (length * k) % 10){
                break;
            }
        }
        if (length > 10){
            return -1;
        } 
        return length;
    }

int main() {
    long long num, k;
    cin >> num >> k;
    cout << smallest_set(num, k) << endl;
    return 0;
}
