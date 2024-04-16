#include<iostream>
#include <vector>
using namespace std;

// Searching and Sorting class 2 (week 4)

int sqrt(int n){
  vector <int> arr;

  for(int i = 0; i< n; i++){
    arr.push_back(i);
  }

  for(int num : arr){
    cout << num << endl;
  }

  
  int start = 0;
  int end = n-1;
  int mid = start + ((end - start)/2);


  while(start <= end){
    cout << endl << arr[mid] << endl;

    if(arr[mid] * arr[mid] > n){
      end = mid - 1;
    }
    if(arr[mid] * arr[mid] < n){
      start = mid + 1;
    }
    if(arr[mid] * arr[mid] == n){
      return  arr[mid];
    }
    mid = start + ((end - start)/2);
  }

  return -1;
}
float floatSqrt(int n){
  float start = 0;
  float end = n;
  float mid = start + ((end - start)/2);

  while(true){
    // cout << mid << endl;
    if((n - (mid * mid)) < 0.001 && (n - (mid * mid)) > -0.001){
      return mid;
    }
    if(mid * mid > n){
      end = mid;
    }
    if(mid * mid < n){
      start = mid;
    }
    mid = start + ((end - start)/2);
  }

  return -1;
}
int search2d(int arr[][3], int n, int m, int target){
  int s = 0;
  int size = n*m;
  int e = size - 1;
  int mid = s + ((e-s)/2);

  while(s<=e){
    int i = mid / m;
    int j = mid % m;
    int element = arr[i][j];

    if(element == target){
      return true;
    }
    if(element > target){
      e = mid - 1;
    }
    if(element < target){
      s = mid + 1;
    }
    mid = s + ((e-s)/2);
  }
  return false;
}


int main(){

  //  #1 sqrt of a perfect square number using binary search
  // int n;
  // cin >> n;

  // int root = sqrt(n);

  // cout << "Root: " << root << endl;

  // #2 decimal sqrt of any number using binary search

  // int N;
  // cin >> N;

  // float floatRoot = floatSqrt(N);

  // cout << "Root: " << floatRoot << endl;

  // #3 2D Arrays Binary Search


  int n = 2;
  int m = 3;
  int arr[2][3] = {{1,2,3},{4,5,6}};

  int target = 7;

  bool isPresent = search2d(arr, n, m, target);

  if(isPresent){
    cout << "Present" << endl;
  }
  else{
    cout << "not Present" << endl;

  }

    return 0;
}