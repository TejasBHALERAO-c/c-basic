/*Create a base class Animal with a function speak() Derive classes Dog and Cat which override speak() In main(), create objects of Dog and Cat using a Animal* pointer and call speak().*/
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    virtual void speak(){//virtual function of polymorphism (runtime polymorphism)
        cout<<"animal iss speaking";
    }
};
class Cat : public Animal{
    public:
    void speak(){//function overriding
        cout<<"cat : meow"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak() {//function overriding
        cout<<"dog : boo boo"<<endl;
    }
};
int main(){//when initailization perform during runtime this is called runtime polymorphism
    Animal* a;//pointer to declare Animal class instance(object) store address of animal
    Cat c;//cat object 
    Dog d;//dog object
    a=&c;//store cat object address
    a->speak();//calling speak method of cat (->)this is use to access value of adress {[speak()]-&c} same as pointer
    a=&d;//same as cat desricption
    a->speak();//same as cat description
    return 0;
}
