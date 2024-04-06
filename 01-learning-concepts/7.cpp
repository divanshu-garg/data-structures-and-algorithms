#include<iostream>
#include <algorithm>
using namespace std;

// Searching and Sorting class 1 (week 4)

int BinarySearch(int brr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + ((end - start) / 2);

  while(start <= end){
    // cout << "mid; " << mid << endl;
    if(brr[mid] == target){
      return mid;
    }
    else if(brr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
    mid = start + ((end - start) / 2);
  }

  return -1;
}


// below one is the first code i wrote for first occurence . it has many issues

int first_index_0(int brr[], int size, int target){
  // cout << "inside function: " << endl;
  int start = 0;
  int end = size;
  int mid = start + ((end - start) / 2);

  int first_index = -1;
  // cout << "inside 2 function: " << endl;
  while(BinarySearch(brr, end, target) != -1){

    int index = BinarySearch(brr, end, target);
    first_index = index;
    end = index;
    mid = start + ((end - start) / 2);

    // cout << "looping: " << index << endl;
  }
  // cout << "insid 3 " << endl;

  return first_index;
}


// below is more optimised code i wrote

int first_index_1(int brr[], int size, int target){
  int firstIndex = -1;
  while(BinarySearch(brr, size, target) != -1){
    firstIndex = BinarySearch(brr, size, target);
    size = firstIndex;
  }
  return firstIndex;
}

// below is the best code for this

int first_index(int brr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + ((end - start) / 2);
  int index = -1;

  while(start <= end){
    if(brr[mid] == target){
      index = mid;
      end = mid - 1;
    }
    else if(brr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }

    mid = start + ((end - start) / 2);
  }

  return index;  
}

// last occurence

int last_index(int brr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + ((end -start) / 2);

  int index = -1;

  while(start <= end){
    if(brr[mid] == target){
      start = mid + 1;
      index = mid;
    }
    else if(brr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
    mid = start + ((end -start) / 2);
  }

  return index;
}

// total occurence

int total_occurence(int brr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + ((end - start) / 2);
  int count = 0;
  
  while(start <= end){
    if(brr[mid] < target){
      start = mid + 1;
    }
    if(brr[mid] > target){
      end = mid - 1;
    }
    if(brr[end] == target){
      count++;
      end--;
    }
    if(brr[start] == target){
      count++;
      start++;
    }
    // cout << mid << start << end << endl;
    mid = start + ((end - start) / 2);
  }

  return count;
}

// missing element in sorted array of 1 to N

int missing_element(int brr[], int size){
  cout << "reached here: " << endl;
  int start = 0;
  int end = size - 1;
  int mid = start + ((end - start) / 2);
  int missing = -1;

  while(start <= end){
    cout << "inside loop: " << start << mid << end << endl;
    if(brr[mid] - mid > 1){
      end = mid;
    }
    if(brr[mid] - mid == 1){
      start = mid + 1;
    }
    if(brr[start] - start == 1){
      start++;
    }
    if(brr[start] - start > 1){
      return start + 1;
    }
    mid = start + ((end - start) / 2);
  }

  return missing;
}

int main(){

  //  #1 binary search algorithm write yourself
  
  // int arr[] = {2, 3, 5, 6, 7, 9 , 11, 13};
  // int target = 13;
  // int size = 8;
  
  // int indexofTarget = BinarySearch(arr, size, target);
  
  // cout << "executed: " << indexofTarget << endl;

  // #2 first occurence

  // int arr[] = {2, 3, 3, 6, 6, 6, 6, 6, 6, 8, 8, 11, 11 , 11, 11};
  // int target = 3;
  // int size = 15;
  
  // int firstOccurence = first_index(arr, size, target);
  // cout << "first index: " << firstOccurence << endl;

  // #3 last occurence

  // int arr[] = {2, 3, 3, 6, 6, 6, 6, 6, 6, 8, 8, 11, 11 , 11, 11};
  // int target = 2;
  // int size = 15;

  // int last_occurence = last_index(arr, size, target);
  // cout << "last index: " << last_occurence << endl;

  // #4 total number of occurences

  // int crr[] = {0,1,2,4,5,6, 6,6,6};
  // int size = 9;
  // int target = 6;
 
  // int count = total_occurence(crr, size, target);
  // cout << "total count: " << count << endl;

  // #5 missing element

  int crr[] = {1,2,3,5,6,7,8};
  int size = 7;
  // int target = 6;

  cout << "code here;" << endl;
  int element = missing_element(crr, size);
  cout << "missing: " << element << endl;

  // #6 Peak Element in a Mountain Array

  // try again later
  
  return 0;
}