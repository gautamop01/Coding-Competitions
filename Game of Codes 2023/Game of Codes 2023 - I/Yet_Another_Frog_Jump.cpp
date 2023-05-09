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
