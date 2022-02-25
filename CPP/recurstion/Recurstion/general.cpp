#include<iostream>
using namespace std;

void fun(int n){
    if(n<=0)
     return;
    // cout<<n<<" "; //<- example for tail recurstion
    fun(n-1);
    cout<<n*2<<" ";  //<- example for head recurstion
}
int fun2(int n){
    int x=1;
    if(n==0)
        return 0;
    return fun2(n-1)*x;
}

int main(){
    int i=5;
    // fun(i);
    cout<<"O/P: "<<fun2(i)<<endl;
    return 0;
}