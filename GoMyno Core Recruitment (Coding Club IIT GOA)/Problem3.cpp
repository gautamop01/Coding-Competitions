#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std; 

int main() {
    
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
            mini = min(mini, a[i]);
            
        if(a[0] > mini)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    
    }
    return 0;
}
