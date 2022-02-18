/*
Even and Odd elements
Find Even and Odd elements Let's add more mathematics with arrays. You are given an array of size N , containing N integers.
PrepBuddy is asking you to print all the even elements in the first line and all odd elements in the second line.
The array will contain at least one even and one odd element. 

Input Format 
First line contains integer N . Second line contains N space-separated integers.

Output Format
In the first line print space-separated Even elements. 
In the first line print space-separated Odd elements.

Constaints 2<=N<=103 1<=A[i]<=104

Time limit
0.50second

Example
Input
10
5 2 4 3 1 7 6 9 8 10

Output
2 4 6 8 10 
5 3 1 7 9

Sample test case explanation
N=10
Array = [5, 2, 4, 3, 1, 7, 6, 9, 8, 10]
Even elements	= 2, 4, 6, 8, 10
Odd elements	= 5, 3, 1, 7, 9
*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int even_arr[n/2];
    int odd_arr[n/2];
    int eve=0;
    int odd=0;
    while(n--){
      int t;
      cin>>t;
      if((t%2)==0)
        even_arr[eve++]=t;
      else
        odd_arr[odd++]=t;
    }
    eve=sizeof(even_arr)/sizeof(even_arr[0]);
    for(int i=0;i<eve;i++){
      cout<<even_arr[i]<<" ";
    }
    odd=sizeof(odd_arr)/sizeof(odd_arr[0]);
    cout<<endl;
    for(int i=0;i<odd;i++){
      cout<<odd_arr[i]<<" ";
    }
    return 0;
  }
