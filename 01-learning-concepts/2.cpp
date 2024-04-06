#include<iostream>
using namespace std;

// Homework from week 1

int main(){

// #1 perimeter of a triangle

    // int side_a,side_b,side_c;
    // cin >> side_a;
    // cin >> side_b;
    // cin >> side_c;

    // cout << side_a + side_b + side_c;

// #2 simple interest

    // int principal, percent, interest;

    // cout << "Enter the principal amount: " << endl;
    // cin >> principal;

    // cout << "Enter the interest percent: " << endl;
    // cin >> percent;

    // interest = (percent * principal / 100);

    // cout << "Net interest accumulated is: " << interest; 

    // #3 Counting from N to 1

    // int n;

    // cin >> n;

    // cout << "Counting from " << n << "to 1 is: " << endl;

    // for ( int i = n; i > 0; i = i - 1){
    //     cout << i << endl;
    // }

    // #4 Factorial of Number

    // int number;
    // long long factorial = 1;
    // cin >> number;

    // cout << "Number: " << number << endl;

    // for (int i = number; i > 0; i = i - 1){
    //     factorial = factorial * i;
    //     // cout << "i: " << i << endl;
    // }

    // cout << factorial;

    // #5 check if a number is prime or not

    // int num;
    // cin >> num;

    // bool isprime = true;
    // for(int i = num - 1; i > 1; i--){
    //     if (num % i == 0){
    //         isprime = false;
    //     }
    // }
    // if (isprime){
    //         cout << "It is a prime number" << endl;
    // }
    // else{
    //         cout << "not a prime number" << endl;
    // }

// #6 check it a triangle is valid or not

    // int a,b,c;

    // cin >> a;
    // cin >> b;    
    // cin >> c;

    // if((a + b > c) && (a + c > b) && (b + c > a)){
    //     cout << "It is a valid triangle" << endl;
    // }
    // else{
    //     cout << "It is not a valid triangle" << endl;
    // }

    // #7 print only even numbers from 1 to N

    // int n;
    // cin >> n;

    // for(int i = 2; i <=n; i = i + 2){
    //     cout << i << endl;
    // }

    // #8 print maximum of three numbers

    // int a,b,c;
    // cin >> a;
    // cin >> b;
    // cin >> c;

    // if (a > b && a > c){
    //     cout << a << endl;
    // }    
    // else if (b > c){
    //     cout << b << endl;
    // }
    // else{
    //     cout << c << endl;
    // }

    // #9 Hollow half pyramid

    // int num;
    // cin >> num;

    // for (int row = num; row > 0; row = row - 1){
    //     if (row == num || row == 1){
    //         for(int j = row;  j > 0; j = j - 1){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     else{
    //             cout << "*";
    //             for(int j = row -2; j > 0; j = j - 1){
    //                 cout << " ";
    //             }
    //             cout << "*";
    //             cout << endl;
    //     }
    // }

    // #10 hollow full pyraamid

    // int spaces, ini_columns;

    // ini_columns = 5;
    // spaces = 6;

    // for ( int row = 0; row < 6; row++){
    //     int columns = ini_columns + row + 1;
    //     spaces--;
    //     for( int j = spaces; j > 0; j--){
    //         cout << " ";
    //         columns--;
    //     }

    //     if (columns == 1 || columns == 11){
    //         for ( int stars = columns; stars > 0; stars--){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     else{
    //         cout << "*";
    //         columns--;
    //         for ( int middle_space = columns - 1; middle_space > 0; middle_space--){
    //         cout << " ";
    //     }
    //         cout << "*" << endl;
    // }
    // }
    cout << "hello" << endl;
    return 0;
}