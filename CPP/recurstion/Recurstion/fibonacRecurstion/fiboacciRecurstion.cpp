#include<iostream>
using namespace std;

int fun(int n){
    if(n<=1)
        return n;
    return fun(n-2)+fun(n-1);
}

int main(){
    int n;
    cout<<"enter the I/P:";
    cin>>n;
    cout<<"O/p: "<<fun(n)<<endl;
    
    return 0;
}