#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s="hi how are you";
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }

    // cout<<"s -> "<<s<<endl;
    cout<<*s.begin()<<endl;
    cout<<*s.end()<<endl;

    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<" ";
    }

 
 
    return 0;
}