#include<iostream>
using namespace std;

long int fun(int b , int n){
    if(n==0)
        return 1;
    return b*fun(b,n-1);
}

int main(){
    int b,n;
    cout<<"eneter the base value:";
    cin>>b;
    cout<<endl;
    cout<<"eneter the power value:";
    cin>>n;
    cout<<endl;
    cout<<"O/P: "<<fun(b,n);
    
    return 0;
}