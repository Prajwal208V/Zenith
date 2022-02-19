#include <iostream>
using namespace std;

int BinarySearch(int arr[], int left, int right, int x){
   if(right >= left){
     int mid=left+(right-left)/2;
     if(x==arr[mid])
        return mid;
     if(arr[mid]>x)
        return BinarySearch(arr,left,mid-1,x);
     else
        return BinarySearch(arr,mid+1,right,x);
   }
   return -1;
}

int main(){
    int arr[]={2, 3, 4, 10, 40 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=40;
    cout<<"Index at: "<<BinarySearch(arr,0,n-1,x);
    return 0;
}
