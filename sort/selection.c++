#include <iostream>
using namespace std;

void selectionAsce(int arr[], int n){ // ascending
    int min;
    for (int i = 0; i < n-1; i++){   
        min=i;
        for (int j = i + 1; j < n; j++){
            if(arr[j]< arr[min])
               min=j;
        }
        swap(arr[i],arr[min]);
    }
}

void selectionDes(int arr[], int n){ // descending
    int min;
    for (int i = 0; i < n-1; i++){   
        min=i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] > arr[min])
               min=j;
        }
        swap(arr[i],arr[min]);
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {4, 8, 2, 7, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    selectionDes(arr,n);
    print(arr, n);
    
    return 0;
}