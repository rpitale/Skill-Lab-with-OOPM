#include<iostream>
using namespace std;
class Student {
public:
string name;
int roll_no;
float cgpa;
char div;
string branch;
void getdata()
{
    cout<<"Enter your name:"<<endl;
cin>>name;
cout<<"Enter your roll number:"<<endl;
cin>>roll_no;
cout<<"Enter your CGPA:"<<endl;
cin>>cgpa;
 cout<<"Enter your Division:"<<endl;
cin>>div;
cout<<"Enter your branch:"<<endl;
cin>>branch;
}
void getdata(string n,int r,float c,char d,string b)
{
name=n;
roll_no=r;
cgpa=c;
div=d;
branch=b;
}
void printdata()
{
cout<<"Name of the student: "<<name<<endl;
 cout<<"Roll-no of the student: "<<roll_no<<endl;
cout<<"Cgpa of the student: "<<cgpa<<endl;
cout<<"Division of the student: "<<div<<endl;
cout<<"Branch of the student: "<<branch<<endl;
}
};
 int main ()
{
 Student s1;
 Student s2;
s1.getdata(); 
s1.printdata();
s2.getdata();
s2.printdata();
return 0;
}