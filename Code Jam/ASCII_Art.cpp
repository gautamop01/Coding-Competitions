#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    int t = 1;
    while (t <= T) {
        long long int N;
        cin >> N; 
        
        long long int i = 0;
        char letter = 'A';
        long long int count = 0;
        while (count < N) {
            i++;
            letter = 'A';
            while (letter <= 'Z' && count < N) {
                count += i;
                if (count >= N) {
                    break;
                }
                letter++;
            }
        }
        
        cout << "Case #" << t << ": " << letter << endl;
        
        t++;
    }
    
    return 0;
}
