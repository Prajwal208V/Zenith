/*
One of the algorithms for array rotation is the reversal algorithm. In this algorithm, subarrays are created and reversed to perform the rotation of the array.
Subarrays are created, rotated individually and then joined together and reversed back to get the rotated array.
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
} 


int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    if(k>n)
      k=k%n;
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr,0, n-1);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<' ';
    }
    cout<<endl;
  }
  return 0;
}
