#include<bits/stdc++.h>
using namespace std;

int *fun(){
    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"local fun_> "<<a<<endl;
    return a;
}

int *dinamicfun(){
    int *a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    cout<<"local fun_> "<<a<<endl;

    return a;
    
}


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
//    int *p=fun();

    int *p=dinamicfun();

   cout<<"man fun_> "<<p<<endl;

   for (int i = 0; i < 5; i++)
   {
    cout<<p[i]<<" ";
   }
   
   delete []p;
   cout<<"\nafter delete\n";

    for (int i = 0; i < 5; i++)
   {
       cout<<p[i]<<" ";
   }
    return 0;
}