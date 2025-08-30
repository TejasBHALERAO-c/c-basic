/*Design a class Shape with a pure virtual function area() Derive two classes: Circle and Rectangle Implement area() in both classes*/
//abstraction example
#include<iostream>
#include<string>
using namespace std;
class Shape{
public://the virtual keyword is used to declare virtual functions and when we assign = 0 it makes the function a pure virtual function
    virtual void area()=0;// only create bluprint for area function force all child class to implement area method
};
class Circle:public Shape{
public:
    float pi=3.14,ar;
    int r;
   void set(int r){
    this->r=r;
   }
    void area(){//actual area function is created by reference of parent class function
     ar=pi*r*r;
     cout<<"area of circle : "<<ar<<endl;
    }
};
class Rectangle:public Shape{
    public:
    int l,w,ar;
    void set(int l,int w){ 
        this->l=l;
        this->w=w;
    }
    void area(){// actual area function is implimented by reference of parent class function
     ar=l*w;
     cout<<"area of rectangle : "<<ar<<endl;
    }
};
int main(){
    Circle c1;
    Rectangle r1;
    c1.set(2);
    c1.area();//we call function
    r1.set(3,4);
    r1.area();    
}
