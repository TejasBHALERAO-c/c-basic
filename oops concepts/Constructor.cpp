/*Parameterized Constructor:
Create a class Rectangle with attributes length and breadth Write a parameterized constructor to initialize them Write a function to calculate area In main(), create two objects with different dimensions and display their areas.*/
#include<iostream>
#include<string>
using namespace std;
class Rectangle{
private:
    int length,breadth;
public:
    //non Parameterized coustrutor
    Rectangle(){
        cout<<"non parameterized constructor"<<endl;
    }
    //Parameterized construtor
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    //custom copy constructor
    Rectangle(Rectangle &ob){
        cout<<"custom copy constructor"<<endl;
        this->length=ob.length;
        this->breadth=ob.breadth;
    }

    int area(){//conculating area
        return length*breadth;
    }
};
int main(){
    Rectangle r;//non parameterized constructor calling
    Rectangle r1(3,4);//parameterized constructor calling
    Rectangle r2(5,8);
    cout<<"rectangle 1 : "<<r1.area()<<endl;
    cout<<"rectangle 2 : "<<r2.area()<<endl;
    Rectangle r3(r1);//copy constructor calling
    cout<<"rectangle 3 : "<<r3.area()<<endl;
}
