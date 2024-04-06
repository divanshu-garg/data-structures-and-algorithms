#include <iostream>
#include <vector>
using namespace std;

// arrays class 2

int main() {

  //  # find unique element

  // int arr[] = {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
  // int size = 11;

  // for (int i = 0; i < size; i++) {
  //   bool unique = true;
  //   for (int j = 0; j < sizeof(arr); j++) {
  //     if (i != j && arr[i] == arr[j]) {
  //       unique = false;
  //     }
  //   }

  //   if (unique == true) {
  //     cout << "unique: " << arr[i] << " " << endl;
  //   }
  // }

  // #2 union of two arrays (assuming no duplicates)

  // int arr1[] = {1, 3, 5, 7, 9};
  // int arr2[] = {2, 4, 6, 8};

  // int size1 = 5;
  // int size2 = 4;

  // vector <int> crr;

  // for(int i = 0; i < size1; i++){
  //   crr.push_back(arr1[i]);
  // }

  // for(int i = 0; i < size2; i++){
  //   crr.push_back(arr2[i]);
  // }

  // for (int i = 0; i < crr.size(); i++){
  //   cout << crr[i] << " ";
  // }

  // #3 intersection of 2 arrays

  // int arr1[] = {1, 3, 5, 7, 9};
  // int arr2[] = {2, 4, 3,3,3, 0, 5, 6, 8};

  // int size1 = 5;
  // int size2 = 9;

  // vector <int> crr;

  // for(int i = 0; i < size1; i++){
  //   for(int j = 0; j < size2; j++){
  //     if(arr1[i] == arr2[j]){
  //       crr.push_back(arr1[i]);
  //     }
  // }

  // }

  // for (int i = 0; i < crr.size(); i++){
  //   cout << crr[i] << " ";
  // }

  // #4 Pair Sum

  // int arr[] = {2, 4, 7,1,3, 0, 5, 6, 8};
  // int size2 = 9;

  // int sum;
  // cin >> sum;

  // for ( int i = 0; i < size2; i++){
  //   for ( int j = i+1; j < size2; j++){
  //     if(arr[i] + arr[j] == sum){
        // cout << arr[i] << ", " << arr[j] << endl;
  //     }
  //   }

  // }

  // #5 triplet sum

  // int arr[] = {20, 40, 70,10,30, 50, 15, 46, 80};
  // int size = 9;

  // int sum;
  // cin >> sum;

  // for(int k = 0; k < size; k++){
  //   int sum2 = sum - arr[k];
  //     for(int i = k + 1; i < size; i++){
  //       for(int j = i + 1; j < size; j++){
  //         if(arr[i] + arr[j] == sum2){
  //           cout << arr[k] << ", " << arr[i] << ", " << arr[j] << endl;
  //         }
  //       }
  //     }
  // }

// #6 Sort 0's and 1's (Dutch national flag problem)

  // int arr[] = {0,1,0,1,1,1,0,1,1,0,0,0,0,1,1,0,1,1,0,0,1}; 
  // int size = 21;
  // int i,j;
  // i = 0;
  // j = size - 1;

  
  // while(!(i > j || i == j)){
  //   if(arr[i] == 1 && arr[j] == 0){
  //     swap(arr[i], arr[j]);
  //   }
  //   if(arr[i] == 0){
  //     i++;
  //   }
  //   if(arr[j] == 1){
  //     j--;
  //   }
  // }

  // for(int k = 0; k< size; k++){
  //   cout << arr[k] << ", ";
  // }
  
  
  cout << endl << "executed" << endl;
  return 0;
}