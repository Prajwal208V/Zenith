#include <iostream>
using namespace std;


void insertAsce(int arr[],int n) { //ascending
    int j,temp;
    for(int i=1; i<n; i++){
        temp=arr[i];
        j=i;

        while(arr[j-1] > temp && j>=1 ){
          arr[j]=arr[j-1];
          j--;
        }
        arr[j]=temp;
    }
}

void insertDes(int arr[],int n) { //descending
    int j,temp;
    for(int i=1; i<n; i++){
        temp=arr[i];
        j=i;

        while(arr[j-1] < temp && j>=1 ){
          arr[j]=arr[j-1];
          j--;
        }
        arr[j]=temp;
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1, 7, 6, 8, 0, 9, 4, 5};
    int n =sizeof(arr)/sizeof(arr[0]);
    print(arr, n);

    insertAsce(arr,n);
    print(arr, n);

    insertDes(arr,n);
    print(arr, n);

    return 0;
}