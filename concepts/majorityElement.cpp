#include<iostream>
#include<vector>
using namespace std;
//majority elements
void bruteforce(vector<int> v,int n){//1 2 2 1 1 1
    int ans=0;
    for(int i=0;i<n;i++){
         int f=0;
        for(int j=0;j<n;j++){
            if(v[i]==v[j]){
                f=f+1;
            }
        }
         if(f>n/2){
                cout<<"frequency "<<f<<endl;
                ans=v[i];
                cout<<"ans is "<<ans;
                break;
         }
    }
}
void optimize(vector<int> v,int n){
    int f=0,ans,k=0;
//     vector<int> v2;
//    for(int i=0;i<n;i++){
//     for(int j=1;j<n;j++){
//         if(v[i]<v[j]){
//             v2[k]=v[i];
//             k++;
//         }
//         else if(v[i]>v[j]){
//             v2[k]=v[j];
//             k++;
//         }
//     }
//    }
//   for(int i=0;i<n;i++){
//     cout<<v2[i];
//   }
   for(int i=1;i<=n;i++){
    if(v[i]==v[i-1]){
        f++;
    }
    else{
        f=1;
        ans=v[i];
    }
    if(f>2){
   cout<<"\n"<<f<<endl;
   cout<<ans;
    }
   }
}
void moores(vector<int> v,int n){
    int f=0,ans=0;
    for(int i=0;i<n;i++){
        if(f==0){
            ans=v[i];
        }
        if(ans==v[i]){
            f++;
        }
        else{
            f--;
        }
    }
    cout<<"answer is ::"<<ans<<endl;
    cout<<"frequency is ::"<<f<<endl;
}

int main(){
    vector<int> v;
    int n=6,x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.insert(v.begin()+i,x);
    }
     bruteforce(v,n);
    optimize(v,n);//only retrurn if frequency is >2 is <2 then not print any value
    cout<<endl;
    moores(v,n);//retrun only answer without frequency 
    return 0;
}