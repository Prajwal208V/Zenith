/*Leap Year or Not
We all have made fun of our friends who have their birthdays on 29thFebruary.Given birthday year N of your friend, can you tell her if that is leap year or not? 

Input format
The first line constains an integer  T denoting the number of test cases.
Each test case contains one integer N.

Output format
For each test case on a new line, print Yes if the given year is a leap year else print No.

Constraints
1<=T <=10
1<=N<=2500

Time Limit
1 second

Example
Input
2
1900
2012

Output
No
Yes*/

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
      if(N%4==0 && (N%400==0|| N%100!=0))
        cout<<"Yes"<<endl;
      else 
        cout<<"No"<<endl;
      T--;
    }
    
    return 0;
  }
