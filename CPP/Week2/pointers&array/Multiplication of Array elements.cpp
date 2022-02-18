/*
Multiplication of Array elements
First line contains the value of test case variable T. Then follows T test cases. 
First line contains N representing the size of the array. Second line contains N space-separated integers. 

Output Format 
For each test case T on a new line, print the multiplication.

Constraints
1<=N<=9 1<=A[i]<=10 

Time limit 1 second

Example 
Input 
2 
5 
1 2 3 4 5 
7 
9 8 4 3 1 2 3

Output 
120 
5184 
Sample test case explanation
Test case variable T=2 For T=1 N=5 Array = [1, 2, 3, 4, 5] Multiplication = 1∗2∗3∗4∗5=120 
For T=2 N=7 Array = [9, 8, 4, 3, 1, 2, 3] Multiplication = 9∗8∗4∗3∗1∗2∗3=5184
*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    while(n--){
      int k;
      cin>>k;
      int arr[k];
      for(int i=0;i<k;i++){
        cin>>arr[i];
      }
      int temp=arr[0];
      for(int i=1;i<k;i++){
        temp*=arr[i];
      }
      cout<<temp<<endl;
    }
    return 0;
  }
