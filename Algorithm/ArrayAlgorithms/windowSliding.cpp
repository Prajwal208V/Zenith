#include <iostream>
using namespace std;

/*Maximum sum of K consecutive elements of array
1.basic approach (Brute force approach) using nested loop
2.window sliding approach
*/

//> Brute force approach
int BaiscAprch(int arr[],int n,int k){
    int max_sum=INT_MIN;
    for(int i=0;i+k-1<n;i++){ //<- 1. prep approach
    //for(int i=0;i<n;i++){<- 1. my approach
        int j=i;
        int sum=0;
        for(;j< i+k; j++){
            sum+=arr[j];
        }
        max_sum=max(max_sum,sum);
        /* if(j==n)
            break;/// <- 2.  my approach
        */
   }
   return max_sum;
}


//> window sliding approach
int windowSlid(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max_sum=sum;
    int j=0;
    for(int i=k;i<n;i++){
        sum-=arr[j++];
        sum+=arr[i];
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}

int main(){
    int arr[]={4,5,1,3,2,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int max_sum;
    //max_sum=BaiscAprch(arr,n,k); 
    max_sum=windowSlid(arr,n,k);
    cout<<max_sum<<endl;
    return 0;
}

/*this brute approach
  > no of operation the outer  loop takes
    i+k-1 < n
        i< n-k+1 --times
  > no of operation the inner loop takes
    (n-k+1)*k  --times

 if n=10000
    k=5000
    (n-k+1)*k
    (10000-5000+1)*5000
    5001*5000
    25005000 operations

 if n=10^6
    25*10^6 operations
    so we can't get result because time limit exit if T= 1sec

 we can reduce no of operations by using "window sliding approach"

*/















