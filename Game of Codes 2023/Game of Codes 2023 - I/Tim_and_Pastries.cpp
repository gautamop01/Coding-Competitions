/*During the lockdown, Tim opened up a business selling pastries. Out of all the pastries, his chocolate pastry became the most famous around the town, with huge sales. For making pastries, he first bakes a big rectangular cake, and then divides them into smaller square-shaped pastries of equal sizes.

However, since a few days, his customers started demanding for larger sized pastries. So now, Tim has decided to divide the big rectangular cake into square pastries that could be as large as possible, without any wastage.

Assume that the length and breadth of the cake is 'L' and 'B' respectively. He has to divide this cake into 'N' square-shaped pastries of length 'S'.

Input Format

The first line of the input contains T - the number of test cases.
Each line of the test case contains two integers L and B - seperated by a single space.
Constraints

1 <= T <= 10^3
1 <= L, B <= 10^5
Output Format

For each test case, print the maximum number of pastries that will be formed.

Sample Input 0

1
40 30
Sample Output 0

12
Explanation 0

The maximum length of each pastry will be 10. So, a total 12 pastries can be created from the big cake.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, b;
        cin >> l >> b;
        int n = gcd(l, b);
        cout << (l / n) * (b / n) << endl;
    }
    return 0;
}
//  To prevent any wastage, the maximum side possible can be the gcd of the 2 sides.
//  The answer is (A * B)/(gcd(A,B)^2)
