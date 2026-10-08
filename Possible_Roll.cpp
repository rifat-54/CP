#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c;
   cin>>a>>b>>c;

   bool ans=false;

   for (int i = 1; i <=a; i++)
   {
        int x=i*b;
        if(x==c){
            ans=true;
        }
   }

   ans?cout<<"YES":cout<<"NO\n";
   
      
    return 0;
}