#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    getline(cin,s);
    cout<<s<<endl;

    stringstream ss;
    ss<<s;

    // cout<<"string stream-> "<<ss<<endl;
    string word;

    int ctn=0;

    while(ss>>word){     //! here every time assign a new value in word from stream.
        cout<<word<<endl;
        ctn++;
    }

    cout<<word.size()<<endl;   // last assign value size
    cout<<"count_> "<<ctn<<endl;
    cout<<word<<endl;   // ! here can see the last assigned value

 
 
    return 0;
}