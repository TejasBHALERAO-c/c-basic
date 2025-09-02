#include<iostream>
using namespace std;
//taking input pass by reference(direct passing array not duplicating array like other datatypes when passing array into function)
void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"enter "<<i+1<<" array ";
        cin>>arr[i];
    }
}
//display output
void output(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"array "<<i+1 <<" :"<<arr[i]<<endl;
    }
}
//linear search targeted item search at each position of array [0][1][2]..[n] {index}
int linear(int arr[],int size,int item){
    for(int i=0;i<size;i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}
//binnary serach should be executed only if array is assending order it serach targeted item at mid position----mid----
int binaryserach(int arr[],int size,int item){
    int s=0,e=size-1;
    while(s<=e){
         int mid = s + (e - s) / 2; 
    if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]<=item){
            s=mid+1;
        }
        else if(arr[mid]>=item)
        {
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int size,ch;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    do{
    cout<<"\n menu \n 1.input \n 2.output \n 3.linear search \n 4.binnary search \n 5.exit"<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
             input(arr,size);
            break;
        }
        case 2:{
              output(arr,size);
              break;
          }
          case 3:{
            int item;
            cout<<"\nenter number to search :";
            cin>>item;
            int ans=linear(arr,size,item);
            cout<<"\n (linear search) item at position :"<<ans+1;
                break;
            }
            case 4:{
             int it;
            cout<<"\nenter number to search :";
            cin>>it;
            int ans2=binaryserach(arr,size,it);
            cout<<"\n (binnary search) item at position :"<<ans2+1;
            break;
            }
            case 5:{
                cout<<"exiting"<<endl;
                break;
            }
        }
    }while(ch<5);
    return 0;
}
