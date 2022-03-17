/* This program takes a number and calculates the approximate square root of it using Bakhshali method
   Author: Noor Eyad Eissa
   ID: 20210499
   Version: 1.0
   Program number: 9
*/

#include <iostream>
using namespace std;

int main() {
    double number, counter = 1, A = 0, B, C, D, final_result;
    cout << "Please enter the number: ";
    cin >> number;
    // this while loop calculates the greatest perfect square number that is less than the number inputted
    while (A < number) {
        A = counter * counter;
        counter += 1;
    }
    // when the number saves in variable A is greater than the number inputted, the loop stops
    B = number - (counter * counter);
    C = B / (2 * counter);
    D = counter + C;
    final_result = D - ((C * C)/(2 * D));
    //  the final result is then calculated the displayed to the user
    cout << "Square root of " << number << " is approximately = " << final_result << endl;
    return 0;
}
