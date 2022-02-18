/*
Reverse the number
PrepBuddy gave you a number X and asks you to reverse that number and print it. 

 Input format
 One integer is provided denoting the value of X . 
 Note - The given number doesn't have leading or ending zero's. 
 
 Output format Print the reverse of X .
 Constraints 1<=X<=106 
 Time Limit 1 second 
 
 Example
 Input
 102345

  Output
  543201

Note - Do not use any inbuilt function for solving this question.
*/

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X;
    cin>>X;
    int temp=0;
    while(X){
      temp=(temp*10)+(X%10);
      X/=10;
    }
    cout<<temp;
    return 0;
  }
