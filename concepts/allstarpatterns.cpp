//all star patterns using function
#include<iostream>
using namespace std;

void pattern1(int n){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n) {
        for(int i=1;i<=n;i++){
            for(int s=n;s>=i;s--){
                cout<<" ";
            }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}  
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n){
 for(int i=1;i<=n;i++){
    for(int s=1;s<=i;s++){
        cout<<" ";
    }
    for(int j=n;j>=i;j--){
        cout<<"*";
    }
    cout<<endl;
 }
}
void number1(int n){
  int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<x;
            x++;
        }
        cout<<endl;
    }
}
void number2(int n){
  int x=1;
    for(int i=1;i<=n;i++){
        for(int s=n;s>=i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" "<<x;
            x++;
        }
        cout<<endl;
    }
}
void number3(int n){
  int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }

}
void number4(int n){
    for(int i=1;i<=n;i++){
        for(int s=n;s>=i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void piramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=n;s>=i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}
void piramid1(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        for(int s=0;s<=(n-i-1);s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void revercepiramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=i;s++){
            cout<<" ";
        }
        for(int j=n;j>=i;j--){
            cout<<" *";
        }
        cout<<endl;
    }
}
void hollowdiamond(int n){
    for(int i=0;i<=n;i++){
        for(int s=n;s>=i;s--){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    for(int i=0;i<=n-1;i++){
        for(int s=0;s<=i+1;s++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-1){
        for(int j=0;j<=2*(n-i)-4;j++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
}
void ButterFlyPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int s=n;s>=i;s--){
            cout<<" ";
        }
        for(int s=n;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int s=1;s<=i;s++){
            cout<<" ";
        }
        for(int s=1;s<=i+1;s++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=4;
        cout<<"star pattern"<<endl;

    pattern1(n);
    pattern2(n);
    cout<<"--------------------------"<<endl;
    pattern3(n);
    pattern4(n);
    cout<<"--------------------------"<<endl;
        cout<<"number pattern"<<endl;

    number1(n);
    number2(n);
    number3(n);
    number4(n);
    cout<<"---------------------------"<<endl;
        cout<<"piramid pattern"<<endl;

    piramid(n);
    piramid1(n);
    cout<<"----------------------------"<<endl;
    revercepiramid(n);
    cout<<"----------------------------"<<endl;
        cout<<"hollow Diamond pattern"<<endl;

    hollowdiamond(n);
    cout<<"-----------------------------"<<endl;
    cout<<"ButterFly pattern"<<endl;
    ButterFlyPattern(n);
    return 0;
}
