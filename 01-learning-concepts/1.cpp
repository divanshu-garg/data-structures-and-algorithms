#include<iostream>
using namespace std;

int main() {

    // #1

//     int i;
//     int j;
// for (i = 0; i<4; i = i+ 1) {
//     for (j=0; j<4; j= j+1) {
//         cout << "*";
//     }
//     cout << endl;
// }

// #2

// for (int i = 0; i<3; i = i+ 1) {
//     for (int j=0; j<5; j= j+1) {
//         if(i ==1 && (j == 1 || j==2 || j ==3)){
//             cout << " ";
//             continue;
//         }
//         cout << "*";
//     }
//     cout << endl;
// }

// #3

// for (int i = 0; i<6; i = i + 1){
//     if ( i == 0 || i == 5){
//         for (int j = 0; j<5; j = j + 1){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     else{
//         // for (int j = 0; j<5; j = j + 1){
//             cout << "*";
//             for (int k = 0; k<3; k=k+1){
//                 cout << " ";
//             }
//             cout << "*";
//         // }
//         cout << endl;
//     }

// }

// #4

// for (int row = 0; row < 6; row = row + 1){
//     for (int col = 0; col < row + 1; col = col + 1){
//         cout << "*";
//     }
//     cout << endl;
// }

// #5

// for (int row = 6; row > 0; row = row - 1){
//     for (int col = row; col > 0; col = col - 1){
//         cout << "*";
//     }
//     cout << endl;
// }

// #6

// for (int row = 0; row < 5; row = row + 1){
//     for (int col = 0; col <= row; col = col + 1){
//         cout << col + 1;
//     }
//     cout << endl;
// }

// #7

// for (int row = 5; row > 0; row = row - 1){
//     for (int col = 1; col <= row; col = col + 1 ){
//         cout << col;
//     }
//     cout << endl;
// }

// #8

// for ( int row = 0; row < 6; row = row + 1){

// for (int col = 0; col < 2; col = col + 1){
//     for (int space = 6; space > row + 1; space = space - 1){
//         cout << " ";
//     }
//     for ( int star = 0; star < row + 1; star = star + 1){
//         cout << "* ";
//     }
//     cout << endl;
// }

// }

// #9

for (int row = 6; row > 0; row = row - 1){
    for (int space = 6; space > row; space = space - 1){
        cout << " ";
    }
    for (int star = 0; star < row; star = star + 1){
        cout << "* ";
    }
    cout << endl;
}

return 0;
}

