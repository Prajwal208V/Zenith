#include <iostream>
using namespace std;

void mergeFun(int arr1[], int arr2 [], int result_arr[], int n1, int n2){
    int i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(arr1[i]<= arr2[j])
           result_arr[k++]= arr1[i++];
        else
           result_arr[k++]= arr2[j++];
    }
    while(j<n2)
        result_arr[k++]= arr2[j++];
    while(i<n1)
        result_arr[k++]= arr1[i++];
}

void singleMerge(int arr[],int right,int mid,int left){
     int result_arr[left+1];
     int i=right,j=mid,k=right;

     while(i<mid && j<=left){
         if(arr[i]<=arr[j])
           result_arr[k++]= arr[i++];
         else 
           result_arr[k++]=arr[j++];
     }
     while(i<mid)
       result_arr[k++]= arr[i++];

     while(j<=left)
       result_arr[k++]=arr[j++];
     
     for(int i=0;i<left+1;i++)
        arr[i]=result_arr[i];
     
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    //for merging two sorted arrays
    int arr1[]={3, 9, 10, 18, 23};
    int arr2[]={5, 12, 15, 20, 21, 25};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int result_arr[n1+n2];
    mergeFun(arr1,arr2,result_arr,n1, n2);
    print(result_arr,n1+n2);
    
    //for single array merging
    int arr3[]={3, 9, 10, 18, 23, 5, 12, 15, 20, 21, 25};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    int mid=(n3-1)/2;
    singleMerge(arr3,0,mid,n3-1);
    print(arr3,n3);
   
    //two way merging {using this technique to make merg sort}
    return 0;
}