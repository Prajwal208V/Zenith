/*
Favourite Number
Among all the digits from 0−9, PrepBuddy likes number 5. He has lots of numbers and wants you to find out the number of times 5 occurred in each number. 

Input format 
The first line contains an integer T denoting the number of test cases. 
Each of the next T lines contains a single integer N . 

Output format 
For each test case print, the number of times 5 occurred in N on a new line 

Constraints
1<=T<=10
1<=N<=106

Example
Input
3
12345
345654
55555

Output
1
2
5


Note - Do not use any inbuilt function for solving this question.
Sample test case explanation
12345 -    contains 5 only one time
345654 -    contains 5 two times
55555  -    contains 5 five times

*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T){
      int N;
      cin>>N;
      int count=0;
      while(N){
        if(N%10==5)
          count++;
        N/=10;
      }
      cout<<count<<endl;
      T--;
    }
    
    return 0;
  }





