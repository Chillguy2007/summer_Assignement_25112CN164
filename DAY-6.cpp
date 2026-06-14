//1:- Write a program to Convert decimal to binary
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int decimal;
    
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    cout << "Binary equivalent: " << bitset<16>(decimal) << endl;

    return 0;
}
//2:- Write a program to Convert binary to decimal
// C++ Program to Convert Binary to Decimal
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    cout << "Decimal = " << decimal << endl;

    return 0;
}
//3:-Write a program to Count set bits in a number
// C++ Program to Count Set Bits in a Number
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count += n % 2;  // Add 1 if last bit is set
        n /= 2;
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}
//4:- Write a program to Find x^n without pow()
// C++ Program to Find x^n without using pow()
#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}