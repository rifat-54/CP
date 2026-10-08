#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s="hello world";

    cout<<"size: "<<s.size()<<endl;
    
    cout<<"max size: "<<s.max_size()<<"\n";
    
    cout<<"capacity: "<<s.capacity()<<"\n";
    
    cout<<"clearing now...\n";
    s.clear();

    cout<<"size: "<<s.size()<<endl;

    cout<<"empty: "<<s.empty()<<"\n";

    cout<<"resizeing now...\n";
    s.resize(19);

    cout<<"size: "<<s.size()<<endl;

    cout<<"\n===============================================\n\n";

    s="Hello Rifat";
    cout<<"s[7]: "<<s[7]<<"\n";
    cout<<"s.at(7): "<<s.at(7)<<"\n";
    cout<<"s.back() "<<s.back()<<"\n";
    cout<<"s.front() "<<s.front()<<"\n";
 
    return 0;
}