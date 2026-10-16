#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // string s=" hi hello world";
    // cout<<s<<endl;

    // // s.erase(4,30);
    // s.replace(3,8,"RG");

    string s;
    getline(cin,s);

    stringstream ss;

    ss<<s;

    string word;
    while (ss>>word)
    {
        cout<<word<<"\n";
    }
    
    cout<<"lst : "<<word;

    // cout<<s<<endl;

 
 
    return 0;
}