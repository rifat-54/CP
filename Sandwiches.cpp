#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a,b,c;
    cin>>a>>b>>c;

    int d=a/2;
    int t=b+c;

    cout<<min(d,t);
 
 
    return 0;
}