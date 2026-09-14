#include <iostream>
using namespace std;
const int MAX = 10;

void SelectionSort(int arr[], int MAX){
  for (int i = 0; i<MAX-1; i++){
    int min = i;
    for (int j=i+1; j<MAX; j++){
      if (arr[j]<arr[min])
        min = j;
    }swap(arr[i], arr[min]);
  }
}

void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void printarr(int arr[], int MAX){
  for (int i=0; i<MAX; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[MAX] = {3,4,6,9,2,1,8,7,10,5};
  printarr(arr, MAX);
  SelectionSort(arr, MAX);
  cout<<endl;
  printarr(arr, MAX);

  return 0;
}