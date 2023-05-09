/*The frog is currently standing at the pebble marked with “0”.

All the pebbles to the right of it are marked with positive integers 1, 2, 3, and so on, while those to the left are marked with negative integers -1, -2, -3, and so forth.

There is a fly present at the stone marked with an integer "target", and the frog wants to approach it as quietly as possible to avoid startling it. To accomplish this, the frog will leap “i” (starting from i = 1 to i = min_time) times per second, and at each second, it may choose to step “i” paces to the left or right.

Determine the minimum amount of time required to reach the fly (i.e, the min_time).

Input Format

Single integer target

Constraints

-10^9  target  10^9
target != 0
Output Format

Print a single integer min_time

Sample Input 0

2
Sample Output 0

3
Explanation 0

The frog can move 1 pace to the right on its first leap, then 2 paces to the left on its second leap, and finally 3 paces to the right on its third leap to reach the fly at the pebble marked with 2. Therefore, it takes 3 seconds to reach the fly.

On the 1st move, the frog leaps from 0 to 1 (1 step).
On the 2nd move, the frog leaps from 1 to -1 (2 steps).
On the 3rd move, the frog leaps from -1 to 2 (3 steps).
Sample Input 1

3
Sample Output 1

2
Explanation 1

On the 1st move, we step from 0 to 1 (1 step).
On the 2nd move, we step from 1 to 3 (2 steps).*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int testop;
    cin >> testop;

    testop = abs(testop); 

    int sum = 0, i = 1, time = 0;
    while (sum < testop) {
        sum += i;
        i++;
        time++;
    }
    if (sum == testop) {

        cout << time << endl;
    } else {
        int diff = sum - testop;
        if (diff % 2 == 0) {
            cout << time << endl;
        } else {
            cout << time + ((time % 2 == 0) ? 1 : 2) << endl;
        }
    }

    return 0;
}
