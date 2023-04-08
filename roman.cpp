#include <iostream>
using namespace std;

//How to convert a decimal number (From 1 to 5000) into a Roman numeral.

int main(){

    int number;
    cout << "Enter your number in decimal system: "; cin >> number;
    
    if (number <= 5999){
        int thousands, hundreds, tens, ones;

        ones = number % 10; number /= 10; 
        tens = number % 10; number /= 10;
        hundreds = number % 10; number /= 10;
        thousands = number % 10; number /= 10;

        switch (thousands){
            case 1: cout << "M"; break;
            case 2: cout << "MM"; break;
            case 3: cout << "MMM"; break;
            case 4: cout << "MV̅"; break;
            case 5: cout << "V̅"; break;
        }

        switch (hundreds){
            case 1: cout << "C"; break;
            case 2: cout << "CC"; break;
            case 3: cout << "CCC"; break;
            case 4: cout << "CD"; break;
            case 5: cout << "D"; break;
            case 6: cout << "DC"; break;
            case 7: cout << "DCC"; break;
            case 8: cout << "DCCC"; break;
            case 9: cout << "CM"; break;
        }

        switch (tens){
            case 1: cout << "X"; break;
            case 2: cout << "XX"; break;
            case 3: cout << "XXX"; break;
            case 4: cout << "XL"; break;
            case 5: cout << "L"; break;
            case 6: cout << "LX"; break;
            case 7: cout << "LXX"; break;
            case 8: cout << "LXXX"; break;
            case 9: cout << "XC"; break;
        }
        switch (ones){
            case 1: cout << "I"; break;
            case 2: cout << "II"; break;
            case 3: cout << "III"; break;
            case 4: cout << "IV"; break;
            case 5: cout << "V"; break;
            case 6: cout << "VI"; break;
            case 7: cout << "VII"; break;
            case 8: cout << "VIII"; break;
            case 9: cout << "IX"; break;
        }
    }
    else {
        cout << "The number is out of range. Sorry!" << endl;
    }
    return 0;
}