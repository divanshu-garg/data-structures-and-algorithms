#include<iostream>
#include<climits>
using namespace std;


// Searching and Sorting class 3 Week 4

int nearlySortedSearch(int arr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + ((end - start) / 2);

  while(start<end){
    // for(int i = start; i < end + 1; i++){
    //   cout << arr[i] << " ";
    // }
    // cout << endl;
    
    if(arr[mid - 1] == target){
      return mid - 1;
    }
    else if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid + 1] == target){
      return mid + 1;
    }
    if(arr[mid - 1] && arr[mid] < target){
      start = mid;
  }
    else if( arr[mid] && arr[mid + 1] > target){
      end = mid;
    }
    mid = start + ((end - start) / 2);
  }
  return -1;
}
int divideNums(int dividend, int divisor){
  int s = -1 * dividend;
  int e = dividend;
  int m = s + (e-s)/2;

  int ans = 0;
  
  while(s<=e){
    if( dividend == (m*divisor)){
      return m;
    }
    if(m*divisor > dividend){
      e = m - 1;
    }
    if(m*divisor < dividend){
      s = m + 1;
      ans = m;
    }
    m = s + (e-s)/2;
  }
  return ans;
}
int findOdd(int arr[], int size){
  int s = 0;
  int e = size - 1;
  int mid = s + ((e - s) / 2);

  int ans = 0;

  while(s<=e){
    if(mid % 2 == 0 && arr[mid] == arr[mid + 1]){
      s = mid + 2;
    }
    else if(mid % 2 == 1 && arr[mid] == arr[mid - 1]){
        s = mid + 1;
      }
    else{
      ans = arr[mid];
      e = mid - 1;
    }
    mid = s + ((e - s) / 2);
  }

  return ans;
  
}
int findPivot(int arr[], int size){
  int s = 0;
  int e = size - 1;
  int mid = s + ((e - s) / 2);
  int ans = 0;

  while(s<=e){
    // cout << "end: " << arr[e] << endl;
    if((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1])){
      return arr[mid];
    }
    if(arr[mid] < arr[e]){
      e = mid - 1;
    }
      // critical to add else not just if. because value of e got updated just above
    else if(arr[mid] > arr[e]){
      ans = arr[mid];
      s = mid + 1;
    }
    mid = s + ((e - s) / 2);
  }

  return ans;
  
}

int main(){

// #1 nearly sorted array
  
  // int arr[] = {10,3,40,20,50,80,70};
  // int size = 7;
  // int target = 70;
  
  // int index = nearlySortedSearch(arr, size, target);

  // cout << "Index is: " << index << endl;

// #2 divide 2 numbers using binary search
  
  // int dividend = 22;
  // int divisor = -7;

  // int quotient = divideNums(dividend, divisor);

  // cout << "divided successfully by: " << quotient << endl;


  // #3 find the odd occuring element in an array

  // int arr[] = {1,1,2,2,3,3,4,4,3,3,600,600,4,4,9};
  // int size = 15;

  // int oddElement = findOdd(arr, size);

  // cout << "Odd element is: " << oddElement << endl;

// #4 Pivot element
  
  int arr[] = {9,10,11,1,2,3,4,5,6};
  int size = 9;

  int pivot = findPivot(arr, size);

  cout << "Pivot element is: " << pivot << endl;


    return 0;
}