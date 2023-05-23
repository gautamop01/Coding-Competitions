#include<bits/stdc++.h>
using namespace std;

bool checkpal(string s)
{
    string p = s;
    reverse(p.begin(), p.end());

    if(s == p)
        return true;
    else
        return false;
}

void solution()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n == 2)
    {
        if(checkpal(s))
            cout << "Yes\n";
        else
            cout << "No\n";

        return;
    }

    if(s[0] == 'A' && s[n - 1] == 'A')
    {
        string modified = s;
        for(int i = 1; i <= n - 2; i++)
            modified[i] = 'B';

        if(checkpal(modified))
        {
            cout << "Yes\n";
            return;
        }
    }

    for(int i = 0; i < n/2; i++)
    {
        if(s[i] == 'B')
        {
            cout << "Yes\n";
            return;
        }
        else if(s[i] != s[n - i - 1])
        {
            cout << "No\n";
            return;
        }
    }

    if(checkpal(s))
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}
