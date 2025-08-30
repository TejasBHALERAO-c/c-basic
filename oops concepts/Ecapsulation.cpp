#include<iostream>
#include <string>
using namespace std;
/* Example question of encapsulation
Create a class BankAccount that has private members: accountNumber, balance. Provide public functions to:deposit money withdraw money (only if balance is sufficient) display balance*/
class BankAccount{
public:
    string accountNumber;
    double balance;
    double money;
    double deposit(double money){
        this->money=money;
        balance=balance+money;
        cout <<"deposited :"<<money <<endl;
        return balance;
    }
    double withdraw(double money){
        this->money=money;
        if(balance==0){
            cout<<"insufficient balance" <<endl;
        }else{
        balance=balance-money;
        }
        return balance;
    }
};
int main(){
    BankAccount b1;
    double b=0;
    b1.accountNumber="544874344";
    b1.balance=20000;
    b=b1.deposit(3000);
    cout<<b<<endl;
    b=b1.withdraw(23000);
    cout<<"balance: "<<b<<endl;
    b=b1.withdraw(500);
    cout<<"balance: "<<b<<endl;
    return 0;
}
