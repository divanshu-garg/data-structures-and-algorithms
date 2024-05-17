#include <iostream>
#include <vector>
using namespace std;

// recursion class 3

bool checkSorted(vector<int> v, int i) {
  if (i == v.size()) {
    return true;
  }

  if (v[i] < v[i - 1]) {
    return false;
  }
  return checkSorted(v, i + 1);
}
void subseq(string s, string output, int i){
    if(i == s.size()){
        cout << output << endl;
        return;
    }

    subseq(s, output ,i+1);
    string temp = output;
    temp.push_back(s[i]);
    subseq(s, temp,i+1);
}
bool binarySearch(vector<int> arr, int i, int j, int target){
    int m = (i+j)/2;

    if(arr[m] == target){
        return true;
    }
    if(i>j){
        return false;
    }

    if(arr[m] > target){
        return binarySearch(arr, i, m-1, target);
    }else{
        return binarySearch(arr, m+1, j, target);
    }
}

int main() {

// #1 see if a given array is sorted in ascending order using recursion
    
  // vector<int> arr = {2, 2, 4, 5, 6};

  // bool sorted = checkSorted(arr, 1);

  // if (sorted) {
  //   cout << "it is sorted" << endl;
  // } else {
  //   cout << "not sorted" << endl;
  // }

// #2 binary search using recursion

    //   vector<int> arr = {2, 2, 4,4,4,5, 6};

    // bool isPresent = binarySearch(arr, 0, arr.size()-1, 5);
    // if(isPresent){
    //     cout << "found the target" << endl;
    // }else{
    //     cout << "not found" << endl;
    // }
    
// #3 print, store or count all subsequences of a string using recursion

    string s = "ababab";
    subseq(s, "", 0);

    
    
  return 0;
}