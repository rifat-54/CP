#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s="Hello Rifat";
    string c="C++";

    s+=c;

    cout<<s<<"\n";
    
    s.append("Programming");
    s.push_back('push_back');  // only one last character add in exting string
    cout<<s<<"\n";
    
s.pop_back();  // remove last one character
    cout<<s<<"\n";

    s="new st ring";
    cout<<s<<endl;
    s.assign("s.assign()iyui");

    cout<<s<<endl;

    s.erase(3,5);
 
    cout<<s<<endl;

    s.replace(0,5,"helloz rifat");

    cout<<s<<endl;
    s.insert(5,"I am coming ");
    cout<<s<<endl;
 
    return 0;
}