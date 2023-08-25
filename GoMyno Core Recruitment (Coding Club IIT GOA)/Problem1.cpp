#include <iostream>
using namespace std;

string solve_testcase(const string& s) {
    long long x = 0, y = 0;
    long long candy_x = 1, candy_y = 1;
    
    for (char move : s) {
        if (move == 'L') {
            x -= 1;
        } else if (move == 'R') {
            x += 1;
        } else if (move == 'U') {
            y += 1;
        } else if (move == 'D') {
            y -= 1;
        }
        
        if (x == candy_x && y == candy_y) {
            return "YES";
        }
    }
    
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        string result = solve_testcase(s);
        cout << result << endl;
    }
    
    return 0;
}
