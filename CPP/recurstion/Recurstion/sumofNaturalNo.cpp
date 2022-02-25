#include<iostream>
using namespace std;

int fun(int n){
   if(n==1)
    return 1;
   return n+fun(n-1);
}

int main(){
    int n;
    cout<<"enter the I/P:";
    cin>>n;
    cout<<"O/P:"<<fun(n)<<endl;
}