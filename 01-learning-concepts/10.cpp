#include <iostream>
#include <cstring>
using namespace std;

// Char Arrays Week 5 class 1

int getlength(char name[]) {
  int i = 0;
  while (name[i] != 0) {
    i++;
  }
  return i;
}
int reversestring(char arr[]) {

  int i = 0;
  int j = strlen(arr) - 1;

  while (i <= j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }

  return 0;
}
void replaceSpaces(char arr[]) {
  int j = strlen(arr);

  for (int i = 0; i < j; i++) {
    if (arr[i] == ' ') {
      arr[i] = '@';
    }
  }
}
bool isPalindrome(char arr[]){
  int i = 0;
  int j = strlen(arr) - 1;

  while(i <= j){
    if(arr[i] != arr[j]){
      return false;
    }
    i++;
    j--;
  }

  return true;
}
void convertToUpper(char arr[]){
  int j = strlen(arr);
  for(int i = 0; i<j;i++){
    arr[i] = arr[i] - 'a' + 'A';
  }
}

int main() {

// ## basic of char arrays

  // char arr[100];
  // cin >> arr[2];
  // cin >> arr[49];
  // cin >> arr;

  // cin.getline(arr, 50);

  // cout << int(arr[20]) << endl;

  // #2 print length of string stored in char arr

  // char name[100];
  // cin >> name;

  // int length = getlength(name);

  // cout << length << endl;
  // cout << strlen(name) << endl;

  // #3 reverse a string

  // char name[100];
  // cin >> name;

  // cout << "before: " << name << endl;

  // reversestring(name);

  // cout << "after: " << name << endl;

  // #4 replaces spaces with "@"

  // char arr[100];
  // cin.getline(arr, 50);

  // cout << "before: " << arr << endl;

  // replaceSpaces(arr);

  // cout << "after: " << arr << endl;

 // #5 palindrome

  // char arr[100];
  // cin >> arr;

  // bool palindrome = isPalindrome(arr);

  
  // if(palindrome){
  //   cout << "it is a palindrome" << endl;
  // }
  // else{
  // cout << "it is not a palindrome" << endl;
  // }

 // #6 convert lowercase string to uppercase

  // char arr[100];
  // cin >> arr;

  // cout << "before: " << arr << endl;
  
  // convertToUpper(arr);

  // cout << "After: " << arr << endl;


// ## basics of strings

  string str;
  getline(cin, str);

  cout << str << endl;


  string str2 = "abcd";
  string str3 = "bcda";

  // length and empty function
  
  cout << endl << " str2 length: " << str2.length() << endl;
  cout << "str2 is empty (0-false 1-true): " << str2.empty() << endl;

  // create a substring
  
  cout << "substring of str3: " << str3.substr(1, 2) << endl;
  
  // pushback and popback
  str3.pop_back();
  cout << "pop a from str3: " << str3 << endl;
  str3.push_back('a');
  cout << "pushed a back to str3: " << str3 << endl;
  
  // compare function
  
  cout << "str 2 compared to str 3: " << str2.compare(str3) << endl;

  //## find function

  string sentence = "to kaise hai aap log";
  string target = "z";

  // the below find function will return index of first element in target str if it finds target in sentence. else return a garbage value called string::npos

  if(sentence.find(target) == string::npos){
    cout << "target not found" << endl;
  }else{  
    cout << sentence.find(target);
  }

  // ## replace function

  string str4 = "this is a war";
  string str5 = "game";

// start from index 10 remove 3 characters and replace those 3 with whatever is present in str5
  str4.replace(10,2, str5);
  str4.replace(5,2, "was");

  cout << str4 << endl;


  // ## erase function

  string str7 = "this is an example sentence";
  // in str7 start from index 11 and erase next 7 characters
  str7.erase(11,7);

  cout << str7 << endl;


  
  return 0;
}