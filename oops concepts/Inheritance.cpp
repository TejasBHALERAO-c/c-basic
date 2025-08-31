//exapmle of inheritance
#include<iostream>
#include<string>
using namespace std;
/*Create a base class Person with attributes name and age Derive a class Student with additional attributes rollNo and marks Derive another class Teacher with subject and salary.*/
class Person{//person derived a class student and teacher to pass properties of name and age to get input from student and teacher
public:
    string name;
    int age;
    void get(){
        cout<<"name :";
        cin>>name;
        cout<<"enter age :";
        cin>>age;
    }
};
class Student : public Person{//hierarchial inhertance
public:
    int roll;
    int marks[4];
 
    void getstd(){
        cout<<"student info enter :";
           get();//inheritance get name and age info child class have ability to take qualities of parent class
        cout<<"enter roll number :";
        cin>>roll;
        for(int i=1;i<=3;i++){
        cout<<"enter marks :"<<i <<" :";
        cin>>marks[i];
        }
    }
     void display(){
        cout<<"student name:"<<name<<"\tage:"<<age<<"\t roll number:"<<roll<<endl;
        cout<<"\t c++:"<<marks[1]<<"\t science :"<<marks[2]<<"\t java :"<<marks[3]<<endl;
    }
};
class Teacher : public Person{//hierarchial inheritance
public:
    string sub;
    int sal;
    void gette(){
        cout<<"enter teacher details ";
        get();//calling person get method to name and age <--(inheritance) inherit get method and properties like name and age
        cout<<"enter subjct :";
        cin>>sub;
        cout<<"enter salary :";
        cin>>sal;
    }
    void display(){
        cout<<"teacher name:"<<name<<"\t age:"<<age<<"\t salary:"<<sal<<"\t subject:"<<sub<<endl;        
    }
};
int main(){
    Student s1;
    Teacher t1;
    s1.getstd();//geting student info
    t1.gette();//geting teacher info
    s1.display();t1.display();//display info
    return 0;
}
