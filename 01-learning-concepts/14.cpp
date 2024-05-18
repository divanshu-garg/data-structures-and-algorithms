#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// recursion continued

int solve(vector<int> arr, int target) {
  if (target == 0) {
    return 0;
  }
  if (target < 0) {
    return INT_MAX;
  }

  int mini = INT_MAX;

  for (auto i : arr) {
    int ans = solve(arr, target - i);
    if (ans != INT_MAX) {
      mini = min(mini, ans + 1);
    }
  }

  return mini;
}
int segments(int n, int x, int y, int z) {
  if (n == 0) {
    return 0;
  }

  if (n < 0) {
    return INT_MIN;
  }

  int a = segments(n - x, x, y, z) + 1;
  int b = segments(n - y, x, y, z) + 1;
  int c = segments(n - z, x, y, z) + 1;

  // int ans = 0;
  int ans = max(a, max(b, c));

  // if(ans >=0){
  return ans;
  // }
}
int rev(int num, int ans) {
  if (num == 0) {
    return ans;
  }
  ans = ans * 10 + num % 10;
  return rev(num / 10, ans);
}
void f(int r, int c) {
  if (r == 0) {
    return;
  }
  if (r == c) {
    f(r - 1, 0);
    cout << endl;
  } else {
    f(r, c + 1);
    cout << "*"
         << " ";
  }
}

void bubble(vector<int> &arr, int r, int c) {
  if (r == 0) {
    return;
  }

  if (r == c + 1) {
    bubble(arr, r - 1, 0);
  } else {
    if (arr[c] > arr[c + 1]) {
      swap(arr[c], arr[c + 1]);
    }
    bubble(arr, r, c + 1);
  }
}
void insertion(vector<int> &arr, int r, int c) {
  if (r == arr.size()) {
    return;
  }
  if (c == -1) {
    insertion(arr, r + 1, r + 1);
  } else {
    if (arr[c] > arr[c + 1]) {
      swap(arr[c], arr[c + 1]);
    }
    insertion(arr, r, c - 1);
  }
}
int sum(vector<int>& arr, int s, int i){
    if(i >= arr.size()){
        return s;
    }
    int a = sum(arr, s, i+1);
    int b = sum(arr, s+arr[i], i+2);

    return max(a,b);
}


int main() {

// #1 infinite values and coin change problem(solve by recursion)

  // vector<int> arr = {2,3,5};
  // int target = 29;

  // int ans = solve(arr,target);

  // cout << ans << endl;

// #2 cut into segments

  // int n = 1;
  // int x = 3;
  // int y = 3;
  // int z = 2;

  // int answer = segments(n, x ,y ,z);
  // if(answer >= 0){
  // cout << answer << endl;
  // }

// #3 reverse a number

  // int num = 1234;
  // cout << rev(num, 0) << endl;

// #4 max sum of non adjacent elements

    //   vector<int> arr{10, 4, 3, 2};

    // int ans = sum(arr, 0, 0);

    // cout << ans << endl;
    
// #5 pattern print

  // f(4,0);

// #6 recursive bubble sort

  // vector<int> arr {10, 2, 3 , 4 ,5, 6 ,1};

  // bubble(arr, 7,0);

  // for(auto i: arr){
  //     cout << i << " ";
  // }

// #7 recursive insertion sort

  vector<int> arr{10, 4, 3, 2, 5, 6, 1};

  insertion(arr, 1, 1);

  for (auto i : arr) {
    cout << i << " ";
  }

  return 0;
}