/*
Perfect Number and Divisors
Have you heard of Perfect numbers? If not let me tell you what is it, Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.
Now, given an integer N,write a program to print true if it is a perfect number or false if it is not a perfect number.

Input format
The first line contains the number of test cases T. 
Each test case contains an integer N is provided.

Output format
For each test case on a new line, print true or false depending on N

Constraints
1<=T<=10
1<=N<=100

Time Limit
1second

Example
Input
2
28
96
*/

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    cout<<boolalpha;
    int n;
    cin>>n;
    while(n--){
      int num;
      cin>>num;
      int count=0;
      for(int i=1;i<num;i++){
        if(num%i==0)
          count+=i;
      }
      if(count==num)
        cout<<true<<endl;
      else
        cout<<false<<endl;
    }
    return 0;
  }
Output
true
false
*/
