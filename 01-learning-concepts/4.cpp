#include <iostream>
#include<climits>
using namespace std;

// week 3 class 1

bool findkey(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

int main() {

  //  #1 linear search in array
  // int arr[] = {1, 2, 3, 4, 6, 0, 0, 0, 1};

  // int key;
  // cin >> key;

  // if (findkey(arr, sizeof(arr), key)) {
  //   cout << "key present in arr" << endl;
  // } else {
  //   cout << "key not present" << endl;

  // #2 finding 0s and 1s in an array

  // int arr[] = {1,2,3,3,2,2,21,11,1,0,0,0,0,0,1};

  // int numzero = 0;
  // int numone = 0;
  
  // for(int i = 0; i < sizeof(arr); i++){
  //   if(arr[i] == 0){
  //     numzero++;
  //   }
  //   if(arr[i] == 1){
  //     numone++;
  //   }
  // }

  // cout << "Number of zeroes: " << numzero << endl;
  // cout << "Number of ones: " << numone << endl;

  // #3 calculate maximum number in an array

  // int arr[] = {1,2,3,4,45,32,11,1,2};

  // int num_min = INT_MIN;

  // for(int i = 0; i < sizeof(arr); i++){
  //   if(arr[i] > num_min){
  //     num_min = arr[i];
  //   }
  // }

  // cout << num_min << endl;

  // #4 print extremes in an array

  // int arr[] = { 1, 9, 2, 9, 3, 4,5 ,9, 6, 7, 9};

  // int size = 11;

  //   int i = 0;
  //   int j = size - 1;
  // while(true){
  //   if(i > j){
  //     break;
  //   }
  //   if ( i == j){
  //     cout << arr[i] << endl;
  //     break;
  //   }

  //   cout << arr[i] << " ";
  //   cout << arr[j] << " " << endl;

  //   i++;
  //   j--;
    
  // }

  // #5 reverse an array

  int arr[] = {1, 2, 3, 4 ,55, 666, 3221, 11};

  int size = 8;

  int i = 0;
  int j = size - 1;

  while(true){
    if( i > j || i == j){
      break;
    }

    int num = arr[i];

    arr[i] = arr[j];
    arr[j] = num;

    i++;
    j--;
    
  }

  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  
  return 0;
}