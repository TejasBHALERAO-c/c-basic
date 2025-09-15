#include<iostream>
#include<vector>
using namespace std;
//vector program to follow all basic vector methods
void add(vector<int> &v,int x){//pass by reference '&'
    v.push_back(x);//push back element to vector
}
void display(vector<int> &v){
    for(int n:v){//print directly values without telling index like arrays
        cout<<n<<endl;//we can also access element using index
    }
}
void thirdP(vector<int> &v,int x){//insert elemet at 3rd position 
    v.insert(v.begin()+2,x);//we will insert element at any position using insert() method passby three values
    //vector.begin()+(position-1,value);
}
void Erase2(vector<int> &v){//erase element at 1st position
    v.erase(v.begin());
}
void VDetails(vector<int> &v){
    cout<<"vector size"<<v.size()<<endl;//size of vector 
    cout<<"vector capacity"<<v.capacity();//capacity of vector 
}
void resizeV(vector<int> &v,int x){//if we declare vector size '(3)' after (4) vector automatically increase size default value is 0 
    v.resize(x);//resize use to shrink or increase vector size id declared
}
void VEmpty(vector<int> &v){//it check vector empty or not
    if(v.empty()){
        cout<<"empty vector";
    }
    else{
        cout<<"not empty";
    }
}
void clearV(vector<int> &v){
    v.clear();//delete elements in the vector or we can say it make empty vector
}
void Swap(vector<int> &v,vector<int> &v2){
    v.swap(v2);//swap elements vector1 into vector2 and vise versa
}
int main(){
    vector<int> v;
    int c,n;
    do{
        cout<<"1.insert\t2.display\t3.first/last\t4.insert3rd\t5.erase2nd\6.details\n7resizeV\t8.Empty\t9clear\t10.swap\n11eixit"<<endl;
        cin>>c;
        switch(c){
            case 1:
        {    cout<<"enter number to insert ";
            cin>>n;
            add(v,n);
             break;
        }
        case 2:
        {
            display(v);
            break;
        }case 3:
        {   int s=0;
            cout<<"enter 1=f 2=l";
            cin>>s;
            if(s==1){
               cout<<v.front()<<endl;
            }
            else if(s==2){
               cout<<v.back()<<endl;
            }
            else{
                cout<<"not valid";
                break;
            }
            break;
        }
        case 4:{
            cout<<"enter element to at 3rd position";
            cin>>n;
            thirdP(v,n);
            break;
        }
        case 5:{
            Erase2(v);//always erase 1st element
            break;
        }
        case 6:
        {
        VDetails(v);
        break;
        }
        case 7:{
            cout<<"enter new size";
            cin>>n;
            resizeV(v,n);
            break;
        }
        case 8:{
            VEmpty(v);
            break;
        }
        case 9:
        {
            clearV(v);//delete all elements in the vector
            break;
        }
        case 10:
        {
            vector<int> v2={1,2,3,4,5};//if swaping then always v1 will be 1,2,3,4,5 and reset current value
            Swap(v,v2);
            if(!(v.empty())){
                for(int x:v){
                    cout<<x<<"\t";
                }
                cout<<endl;
            }

            if(!(v2.empty())){
                for(int x:v2){
                   cout<<x<<"\t";
                }
                cout<<endl;
            }
            break;
        }
        case 11:
        {
            cout<<"exiting";
            break;
        }
        }
    }while(c<11);
    return 0;
}
