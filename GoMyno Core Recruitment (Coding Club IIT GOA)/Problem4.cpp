#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,c=0;
    cin>>n;
    
    while(n--)
    {
        int x;
        string s;
        cin>>x>>s;
        for(int i=0;i<x;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if(s[i]==s[j]&&i+1!=j)
                {
                    if(s[i+1]==s[j+1])
                    {
                        c++;
                        break;
                    }
                }
            }
            if(c>0)
            {
                break;
            }
        }
        if(c>0)
            {
                cout<<"YES"<<endl;
            }
        else
            {
                cout<<"NO"<<endl;
            }
        c=0;
    }
}
           
