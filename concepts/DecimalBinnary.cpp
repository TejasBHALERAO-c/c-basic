#include<iostream>
using namespace std;
//decimal to binnary number
int DecimalToBinnary(int n){
    int ans,r,pos=1;
    while(n>0){
        r=n%2;
        ans=ans+(r*pos);
        n=n/2;
        pos=pos*10;
    }
    return ans;
}
//binnary to decimal number
int BinnaryToDecimal(int n){
    int ans=0,r,pos=1;
    while(n>0){
        r=n%10;
        ans=ans+(r*pos);
        n=n/10;
        pos=pos*2;
    }
    return ans;
}

int main(){
    int a=DecimalToBinnary(5);
    cout<<"decimal to binnary : "<<a<<endl;
    int b=BinnaryToDecimal(101010);
    cout<<"binnary to decimal : "<<b<<endl;
    return 0;
}
