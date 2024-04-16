#include<iostream>
#include<string>
using namespace std;

// char arrays and strings week 5 class 2

string removeDuplicates(string s){

  // while(true){
  //   bool duplicates = false;
  //   for(int i = 0; i < (str.length() - 2); i++){
  //     if (str[i] == str[i + 1]){
  //       duplicates = true;
  //       str.erase(i,2);
  //     }
  //   }
  //   if(!(duplicates)){
  //     break;
  //   }
  // }

// the above code had many edge cases and higher time complexity
  
  string str = s;
  string ans= "";
  for(int i = 0; i<str.length(); i++){
      if(ans.length() == 0){
        ans.push_back(str[i]);
      }
    else{
      if(str[i] == ans[ans.length() - 1]){
        ans.pop_back();
      }
      else{
        ans.push_back(str[i]);
      }
    }
  }

  return ans;
  
}
string removeSubstr(string str1, string part){
  string str = str1;
  while(str.find(part) != std::string::npos){
      int index = str.find(part);
      str.erase(index, part.length());
  }

  return str;
}
bool checkPalindrome(string s){

  // ## below code is correct but with complexity n square
  
  // for(int i = 0; i < s.length(); i++){
  //   string str = s;
  //   str.erase(i, 1);

  //   int j = 0;
  //   int k = str.length() - 1;
  //   bool isPalindrome = true;
  //   while(j<=k){
  //       if(str[j] != str[k]){
  //           isPalindrome = false;
  //       }
  //       j++;
  //       k--;
  //   }

  //   if(isPalindrome){
  //       return true;
  //   }
  // }

  // return false;


  
}


int main(){

// #1 remove alternating duplicates from an array until there are none left
  
  string str1 = "azxxzy";
  string str = removeDuplicates(str1);
  // cout << str << endl;

// remove all occurences of a substring until there are none left

  string str3 = "daabcbaabcbc";
  string str4 = "abc";

  string newstr = removeSubstr(str3, str4);

  cout << newstr << endl;

  // valid palindrome 2: if after popping at max 1 element from a string it can become a palindrome then return true

  string str5 = "abca";

  int isPalindrome = checkPalindrome(str5);

  cout << "Palidrome valid: " << isPalindrome << endl;

// try the valid palindrome 2 question later. i could not solve a edge case. 

  // Minimum Time Difference
 // Palindromic substring question

  // tried logic for both on leetcode. couldn't solve yet
  
  
    return 0;
}