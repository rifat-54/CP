#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   int a[n];

   for(int i=0;i<n;i++){
       cin>>a[i];
    }
    
   cout<<a<<endl;

   sort(a,a+n,greater<int>());
   
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
      
    return 0;
}