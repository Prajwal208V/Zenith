#include<iostream>
using namespace std;

int fun(int n){
    if(n==1 || n==0)
        return 1;
    return n*fun(n-1);
}

int main(){
    int n;
    cout<<"enter the I/O: ";
    cin>>n;
    cout<<"O/P: "<<fun(n)<<endl;

    return 0;
}