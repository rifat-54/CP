#include<bits/stdc++.h>
using namespace std;
int fun(int x){
    // cout<<"called: "<<x<<endl;
    return x++;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int sum=0;

    int n=1000000;

    for (int i = 0; i < n; i++)
    {
        int s=fun(i);
        sum+=s;
    }

    cout<<sum<<endl;
    
 
 
    return 0;
}