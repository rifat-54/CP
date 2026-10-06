// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//         char name[1000];
//         int roll;
//         double cgpa;

// };

// int main(){

//     Student a,b;
//     cin.getline(a.name,100);
//     cin>>a.roll>>a.cgpa;
//     getchar();
//     cin.getline(b.name,100);
//     cin>>b.roll>>b.cgpa;

//     cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<" \n";
//     cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<" \n";
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;

    // Student(int r,int c){
    //     roll=r;
    //     cls=c;
    // }
    Student(int roll,int cls){
        this->roll=roll;
        this->cls=cls;
    }

};

Student *fun(){
    Student *b=new Student(53,5);
   
    return b;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
//    Student Rahim(23,4);
//    Student jadu(2,58);

//    cout<<Rahim.roll<<" "<<Rahim.cls<<"\n";
//    cout<<jadu.roll<<" "<<jadu.cls<<"\n";

// int a=&Rahim;

// cout<<&Rahim<<"\n";
// cout<<&jadu<<"\n";

// cout<<a<<"\n";
// cout<<*a->roll<<"\n";

Student *rahim=fun();

cout<<rahim->roll<<" "<<rahim->cls<<"\n";

   
      
    return 0;
}