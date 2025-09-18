#include<iostream>
#include<vector>
using namespace std;
//pair sum allows only sorted array

void simple(vector<int> v,int n,int t){//always use sorted array or vector //time complexity O(n^2)
    vector<int> v2;
    int sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((v[i]+v[j])==t){
                v2.push_back(i);
                v2.push_back(j);
                cout<<v2[0]<<endl;
                cout<<v2[1];
                break;
            }
        }
        }
}
void Twopointer(vector<int> v,int n,int t){//time complexity O(n)
    int i=0,j=n-1;//pointers start and end
    vector<int> v2;//store indexs sum of tageted value
    int sum=0;
    while(i<j){
         sum=v[i]+v[j];
        if(sum>t){
            j--;
        }
        else if(sum<t){
            i++;
        }
        else if(sum==t){
            v2.push_back(i);
            v2.push_back(j);
            cout<<"point 1: "<<v2[0]<<endl;
            cout<<"point 2: "<<v2[1];
            break;
        }
    }
}
int main(){
    vector<int> v;
    int n=5,x,t=5;
    for(int i=0;i<n;i++){
        cin>>x;
        v.insert(v.begin()+i,x);
    }
    for(int el:v){
        cout<<" "<<el;
    }
    cout<<endl;
     simple(v,n,t);//simple approach 
    cout<<endl;
    Twopointer(v,n,t);//tow pointer approach
    cout<<endl;
    return 0;
}
