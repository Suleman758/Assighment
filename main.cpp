#include <iostream>
using namespace std;

int main() {
    int num;
    int age;
    char x ;
    int year;


    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter a character: ";
    cin >> x;
    cout << "Enter a year: ";
    cin >> year;


    if ( num > 0) {
        cout << num << " is positive " << endl;
    }
    if ( num < 0 ) {
        cout << num << " is negative " << endl;
    }
    if ( num == 0) {
        cout << " Zero "<< endl;
    }
    if (num % 2 == 0) {
        cout << num << " is even " << endl;
    }
    if (num % 2 != 0) {
        cout << num << " is odd " << endl;
    }
    if (num > 10 ) {
        cout << num << " is greater than 10 " << endl;
    }
    if (num < 20 ) {
        cout << num << " is less than 20 " << endl;
    }
    if ( age > 18) {
        cout << "You area an Adult " << endl;
    }
    if ( age < 18 ) {
        cout << "You are a Minor " << endl;
    }
    if ( 1<num && num<100) {
        cout<< num << " is between 1 and 100 " << endl;
    }
    if ( num % 3 == 0) {
        cout<< num << " is a Multiple of 3 " << endl;
    }
    if ( num % 5 == 0) {
        cout<< num << " is a Multiple of 5 " << endl;
    }
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'  || x == 'u') {
        cout << x << " is a Vowel " << endl;
    }
    if ( x != 'a' || x != 'e' || x != 'i' || x != 'o' || x != 'u') {
        cout << x << " is a Consonant " << endl;
    }
    if ( num > 100 ) {
        cout << num << " is greater than 100 " << endl;
    }
    if ( num < 50 ) {
        cout << num << " is less than 50 " << endl;
    }
    if ( year % 4 == 0) {
        cout << year << " is a leap year " << endl;
    }
    if ( x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9') {
        cout<< x << " is a Digit " << endl;
    }


    return 0;
}
