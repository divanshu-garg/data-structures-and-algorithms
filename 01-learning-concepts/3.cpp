#include<iostream>
#include<cmath>
#include <vector>
using namespace std;

// Week 2 class

void even_or_odd(){
        // given no is even or odd
    int a;
    cin >> a;

    if(a % 2 == 0){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
}

void area(){
    // display area of a circle

    int r;
    double a;
    cin >> r;

    a = 3.14 * r * r;

    cout << "Area of the circle is: " << a << endl;
}

void factorial(){
    int a;
    cin >> a;

    long long f = 1;

    for ( int i = a; i > 0; i--){
        f= f*i;
    }
    cout << "Factorial of the number is: " << f << endl;
}

void isprime(){
    int a;
    cin >> a;

    string prime = "true";

    for(int i = a - 1; i > 1; i--){
        if(a % i == 0){
            prime = "false";
        }
    }

    cout << a << " is a prime number: " << prime << endl;
}

void printprime(){
    int n;
    cin >> n;

    for ( int i = 2; i < n + 1; i++){
        int isprime = true;
        for ( int j = 2; j < i; j++){
            if(i % j == 0){
                isprime = false;
            }
    }
    if(isprime == true){
        cout << "prime: " << i << endl;
    }
}
}

void convert_temp(){
    float temp, k, f;
    cin >> temp;

    k = temp + 273.15;
    f = (temp*1.80) + + 32.00;

    cout << "Kelvin: " << k << endl;
    cout << "Farhenheit: " << f << endl;

}

void reversenum(){
    vector<int> vec;
    float num;

    cin >> num;

    while(true){
        cout << "loop ran" << endl;
        num = num/10;

        if( num > -0.1 && num < 0.1){
            break;
        }

        int j = int(num);
        int digit = (num-j)*10;
        vec.push_back(digit);
        num = j;

    }
    // cout << vec << endl;
    int reverse = 0;
    for ( int i = vec.size() + 1; i > 0; i--){
    // cout << reverse << endl;
    cout << vec[i] << endl;
        reverse = reverse + (vec[i]*pow(10, ((vec.size()) - i)))    ;
    }

    cout << "hello " << reverse << endl;
}

int main(){
    // area();
    // even_or_odd();
    // factorial();
    // isprime();
    // printprime();
    // convert_temp();
    reversenum();
    cout << "hello";
    return 0;
}

