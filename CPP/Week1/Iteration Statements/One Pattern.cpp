/*
One Pattern
Print in the output the exact pattern provided below
1
1 1
1 1 1
1 1 1 1
1 1 1 1 1
Input format

A single integer N

Output format

Print the same pattern provided in the problem statement.
Constraints

N=1

Input

1
Output

1
1 1
1 1 1
1 1 1 1
1 1 1 1 1
*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    for(int i=1;i<=5;i++){
      for(int j=1;j<=i;j++){
        cout<<1<<" ";
      }
      cout<<endl;
    }
    return 0;
  }
