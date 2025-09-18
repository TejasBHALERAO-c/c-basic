#include<iostream>
#include<vector>
using namespace std;
//maximum subarray of sum
//brute force approach
int maxSum(vector<int> v,int size){
    int m=INT_MIN;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum=sum+v[j];
            m=max(sum,m);
        }
    }
    return m;
}
//kadane's algorithm 
int maxSum2(vector<int> v,int size){
    int sum,m=INT_MIN;
//    for(int val:v){
//     sum=sum+val;
//     m=max(sum,m);
//      if(sum<0){
//           sum=0;
//      }
//    }
// |^ the upper commented code is also run properly 
    for(int i=0;i<size;i++){
         sum = sum + v[i];
        m=max(sum,m);
        if(sum<0){
            sum=0;
        }
    }
    return m;
}
int main(){
    vector<int> v;
    int arr[5],n=5,x;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" number ";
        cin>>x;
        v.insert(v.begin()+i,x);
    }
    for(int el:v){
        cout<<el;
    }
    //maximum of subarray
    cout<<"maximum posible subaarays"<<endl;
    int st=0,ed=n;
    for(st;st<=n;st++){
        for(ed=st;ed<=n;ed++){
            for(int i=st;i<ed;i++){
                cout<<v[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }
    //maximum sum of subarray 
    //also try some negative values it gets maximum subaaray sum
    int sum=0;
    sum=maxSum(v,n);//time complexity O(n2)
    cout<<"sum using brute force approch "<<sum<<endl;
    sum=maxSum2(v,n);//time complexity O(n)
    cout<<"sum using kadane's algorithm "<<sum;

}
