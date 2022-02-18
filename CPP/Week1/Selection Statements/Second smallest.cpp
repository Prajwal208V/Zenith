/*
Second Smallest
You are given  3 distinct integer numbers  X, Y and Z. Task is to print the second smallest number among the three provided numbers.

Input format
Input contains 
3
 distinct integers 
X,Y and Z.

Output format
Print the second smallest integer.

Time Limit
1second

Constraints
1<=X,Y,Z<=100

Example
Input
10
42 
15

Output
15

*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if((X>Y && X<Z) || (X>Z && X<Y))
      cout<<X<<endl;
    else if((Y>X && Y<Z) || (Y>Z && Y<X))
      cout<<Y<<endl;
    else 
      cout<<Z<<endl;
    return 0;
  }
