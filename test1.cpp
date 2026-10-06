#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()            // এবার ফাংশনটি একটি পয়েন্টার রিটার্ন করবে, পয়েন্টার এর টাইপ Student* তাই ফাংশনের রিটার্ন টাইপও Student*
{
    Student rahim(342, 5, 4.99);    // কন্সট্রাক্টর কল করে অবজেক্ট ডিক্লেয়ার করা হয়েছে। 
    Student *p = &rahim;          // একটি পয়েন্টার নিয়ে তাতে অবজেক্ট এর এড্রেস রেখে দেওয়া হয়েছে। যেহেতু পয়েন্টার একটি Student ক্লাসের অবজেক্টকে পয়েন্ট করছে তাই পয়েন্টার এর ডাটা টাইপ হচ্ছে Student*  
    return p;                    // পয়েন্টার রিটার্ন করা হচ্ছে। 
}
int main()
{
    Student *ans = fun();      // ফাংশন কল করে ফাংশন থেকে রিটার্ন আসা পয়েন্টার আরেকটি পয়েন্টারে স্টোর করে রাখা হচ্ছে। 
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;   // সেই পয়েন্টার কে ডিরেফারেন্স করে ( এক্ষেত্রে শর্টকাটে এরো সাইন ব্যাবহার করা হয়েছে ) তার ভেলু প্রিন্ট করা হচ্ছে। 
    return 0;
}