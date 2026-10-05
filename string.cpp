#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[10];
    int a;

    // !normally different input are taken by space 
    // cin>>a>>c;

    cin>>a;
    // cin>>c;
    // ! if i get input in next line than i need to skip enter key.
    // getchar();
    cin.ignore();

    cin.getline(c,100);

    cout<<"outpur-> "<<a<<" "<<c;
}