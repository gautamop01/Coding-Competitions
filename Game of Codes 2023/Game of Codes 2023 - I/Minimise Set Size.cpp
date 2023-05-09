/*You are given 2 numbers num and k. Return the size of the smallest set of positive integers (each having unit digit as k) such that sum of those numbers is equal to num.

Note: Set may contain same number multiple times. Set with size 0 has sum 0.

Input Format

2 space separated integers num and k

Output Format

Return the integer, minimum size of set or return -1 if no such set is possible

Sample Input 0

58 9
Sample Output 0

2
Explanation 0

One valid set is [9, 49]. Another valid set is [19, 39]. It can be proved that 2 is the minimum size.

Sample Input 1

37 2
Sample Output 1

-1
Explanation 1

No valid set can be formed since it is not possible to form numbers that add up to 37 with 2 as the units digit.*/
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
