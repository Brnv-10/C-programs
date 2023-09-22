#include<iostream>
#include<string.h>
using namespace std;
class Person{
protected:
char Name[30];
int Age;
long int ContactNo;
public:
Person(){cout<<"\nPerson class constructor invoked";}
 Person(const char *n, int a,long int c){
 cout<<"\nPerson class constructor invoked"; 
 Age=a;
 ContactNo=c;
 strcpy(Name,n);
 }
void display()
 {
 cout<<endl<<"Name :"<<Name<<endl<<"Age :"<<Age<<endl<<"Contact No. :"<<ContactNo;
 }
 ~Person(){ cout<<"\nDesctructor of Person class invoked";
 }
};
class Student:public Person{
private:
 int RollNo;
 char Course[50];
public:
 Student(const char *n,int a,long int c,int r,const char *Course):Person(n,a,c)
 {
 cout<<"\nStudent class constructor invoked";
 RollNo=r;
 strcpy(this->Course,Course);
 }
 void display()
 {
 Person::display();
 cout<<endl<<"Roll No. :"<<RollNo<<endl<<"Course :"<<Course;
 }
 ~Student(){ cout<<"\nDesctructor of Student class invoked";
 }
};
class teacher:public Person{
private:
char department[30];
public:
 teacher(const char *n,int a,long int c,const char *department):Person(n,a,c)
 {
    cout<<"\nteacher class constructer invoked";
    strcpy(this->department,department);

 }
 void display()
 {
    Person::display();
    cout<<endl<<"department is"<<department;
 }
~teacher(){cout<<"\n teacher class destructer is invoked";
   }
 };
 int main()
{
 Student x("abcd",18,9988776655,1,"B.Sc. CSH");
 teacher y("defg",39,2345678992,"  computer sc");
 x.display();
 y.display();
}




