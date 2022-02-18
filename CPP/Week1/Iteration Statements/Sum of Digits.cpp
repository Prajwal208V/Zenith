/*

Sum of Digits
PrepBuddy gave you a number X and asks you to find the sum of the digits present in the number.

Input format
One integer is provided denoting the value of X.

Output format
Print the sum of digits of X.

Constraints
1<=X<=106

Time Limit
1second

Example
Input
102345

Output
15

Sample test case explanation
Sum of digit =1+0+2+3+4+5=15

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
      temp+=(X%10);
      X/=10;
    }
    cout<<temp;
    return 0;
  }
