#include <iostream>
#include <climits>
using namespace std;

// week 3 arrays class 3

int main() {

  // row sum print & column sum print

  // int arr[4][4] = {{0, 1, 2, 3}, {2, 3, 4, 5}, {4, 5, 6, 7}, {7, 8, 9, 3}};
  // for (int i = 0; i < 4; i++) {
  //   int sum = 0;
  //   for (int j = 0; j < 4; j++) {
  //     sum += arr[j][i];
  //   }
  //   cout << sum << endl;
  // }

  // Linear Search

  // int arr[4][4] = {{0, 1, 2, 3}, {2, 3, 4, 5}, {4, 5, 6, 7}, {7, 8, 9, 3}};

  // int n;
  // cin >> n;

  // string exists = "false";
  
  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     if(arr[i][j] == n){
  //       exists = "true";
  //     }
  //   }
  // }

  // cout << "exists: " << exists << endl;

  // minimum and maximum number print

  // int arr[4][4] = {{0, 1, 2, 3}, {2, -13, 4, 5}, {4, 5, 6, 7}, {11, 8, 9, 3}};

  // int maxi = INT_MIN;
  // int mini = INT_MAX;


  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     if(arr[i][j] > maxi){
  //       maxi = arr[i][j];
  //     }
  //     if(arr[i][j] < mini){
  //       mini = arr[i][j];
  //     }
  //   }
  // }

  // cout << "Min int: " << mini << endl;
  // cout << "Max int: " << maxi << endl;

  // Transpose of a matrix

  // int arr[4][4] = {{0, 1, 2, 3}, {2, 3, 4, 5}, {4, 5, 6, 7}, {11, 8, 9, 3}};

  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  
  // for (int i = 0; i < 4; i++) {
  //   for (int j = i; j < 4; j++) {
  //     int temporary = arr[i][j];
  //     // cout << arr[i][j] << " ";
  //     arr[i][j] = arr[j][i];
  //     arr[j][i] = temporary;
  //     // cout << arr[i][j] << " ";

  //   }
  // }

  // cout << endl << "after transpose: " << endl << endl;;
  // // arr[0][0] = 4;
  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  

  return 0;
}