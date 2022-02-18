/*You are provided with this table containing a character and its value. Given one of this character as input you need to print it's corresponding value.
| P or p 	- PrepBytes      	|
| Z or z 	- Zenith         	|
| E or e 	- Expert Coder   	|
| D or d 	- Data Structure 	|

Input format
A single character

Output format
For each test case print the corresponding value of the given character.

Time Limit
1
 second

Example
Input
e

Output
Expert Coder*/

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    char a;
    cin>>a;
    string str;
    if(a=='p'||a=='P')
      str="PrepBytes";
    else if(a=='z'||a=='Z')
      str="Zenith";
    else if(a=='e'||a=='E')
      str="Expert Coder";
    else
      str="Data Structure";
    cout<<str;
      
    return 0;
  }
