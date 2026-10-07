#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gps;

    Student(int roll,int cls,double gpa){
        this->roll=roll;
        this->cls=cls;
        this->gps=gpa;
    }

};

Student *fun(){
    Student rahim(23,5,3.4);
    Student *p=&rahim;

    // Student rifat(2,3,5);
    // cout<<&rifat<<"\n";
    // cout<<rifat.roll<<" "<<rifat.cls<<" "<<rifat.gps<<"\n";

    // Student *p=new Student(34,6,6.3);
    return p;

}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   Student *a=fun();

   cout<<"address-> "<<&a<<"\n";

   cout<<a->roll<<" "<<a->cls<<" "<<a->gps<<endl;
   
      
    return 0;
}