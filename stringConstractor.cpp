#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a="what you do";
 
    // string s("hello rifat",7);
    string s(a,3);
    // string s(24,'Y');

    sort(s.begin(),s.end());

    cout<<s;
 
 
    return 0;
}