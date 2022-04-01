#include <iostream>
#include <cmath>
using namespace std;

void merge(int arr[], int left, int mid, int right){

  int i = left, j = mid + 1, k = left;

  int tempArr[right + 1];

  while (i <= mid && j <= right){

    if (arr[i] < arr[j])
      tempArr[k++] = arr[i++];
    else
      tempArr[k++] = arr[j++];
  }

  while (i <= mid)
    tempArr[k++] = arr[i++];

  while (j <= right)
    tempArr[k++] = arr[j++];

  for (int i = left; i <= right; i++)
    arr[i] = tempArr[i];
}
void IterativeMergeSort(int arr[], int n){
  int phase;

  for (phase = 2; phase <= n; phase *= 2){
    for (int itr = 0; (itr + phase - 1) < n; itr += phase){
      int left = itr;
      int right = itr + phase - 1;
      int mid = (left + right) / 2;
      merge(arr, left, mid, right);
    }
  }
  if (phase / 2 < n)
    merge(arr, 0, phase / 2, n - 1);
}

void print(int arr[], int n){
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main(){
  int arr[] = {1, 7, 6, 8, 0, 9, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  print(arr, n);

  IterativeMergeSort(arr, n);
  print(arr, n);

  return 0;
}