/*
shopping Cost
Tina is preparing a shopping list containing N items. She knows the quantity and price of each item on the list. 
The shop is offering a 20% discount on the items with a quantity of more than 100 units. Given the quantity and price of each of the N items, 
your task is to calculate how much each item will cost.

Input format 
The first line of the input contains an integer N denoting the number of items 
Each of the next N lines contains two space-separated integers denoting the quantity and price of the item. 

Output format
Print the final cost that Tina has to bear for each item. Print till a single digit after the decimal point. 

Constraints 
1<=N<=10 1<=quantity,price<=103

Time Limit
1second

Example
Input
3
100 120
200 100
50 50

Output
12000.0
16000.0
2500.0

*/

#include <bits/stdc++.h>
#include<iomanip>
  using namespace std;
  
  int main()
  {
    //write your code here
    cout <<fixed<<setprecision(1);
    int t;
    cin>>t;
    while(t){
      float n,p;
      cin>>n>>p;
      if(n>100){
        float per=static_cast<double>(4)/5;
        cout<<n*p*per<<endl;
      } 
      //   cout<<(n*p)*)<<endl;
      // else 
      //   cout<<(n*p)*(static_cast<float>(1)/1)<<endl;
      else{
        float per=1/1;
        cout<<n*p*per<<endl;
      }
      t--;
    }
    
    return 0;
  }
