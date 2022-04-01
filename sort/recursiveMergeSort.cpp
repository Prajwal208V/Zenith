#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1=mid-left+1, n2=right-mid, i,j,k;
    int left_arr[n1], right_arr[n2];
    
    for(i=0; i<n1; i++)
       left_arr[i]=arr[left+i];
    
    for(i=0; i<n2; i++)
       right_arr[i]=arr[mid+i+1];

    i=0; j=0; k=left;

    while(i<n1 && j<n2){
        if(left_arr[i] < right_arr[j])
          arr[k++]=left_arr[i++];
        
        else
          arr[k++]=right_arr[j++];
    }
    
    while(i<n1)
      arr[k++]=left_arr[i++];
    
    while(j<n2)
      arr[k++]=right_arr[j++];
 
} 

void mergeSort(int arr[], int left, int right){

   if(left<right){
      int mid=(left+right)/2;
      mergeSort(arr, left, mid);
      mergeSort(arr, mid+1, right);
      merge(arr,left, mid ,right);
   }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[]={1, 7, 6, 8, 0, 9, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    
    mergeSort(arr, 0, n-1);
    print(arr, n);

    return 0;
}