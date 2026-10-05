#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    char grade;
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Excelent\n";
        break;
        case 'B':
        cout<<"Good\n";
        break;
        case 'C':
        cout<<"simple\n";
        break;
        
        default:
        cout<<"very bad";
    }
   
   
      
    return 0;
}