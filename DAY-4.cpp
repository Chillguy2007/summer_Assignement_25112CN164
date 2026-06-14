//1:- Write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
//2:- Write a program to Find nth Fibonacci term
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 1) {
        cout << "The 1st Fibonacci term is: " << a;
    }
    else if (n == 2) {
        cout << "The 2nd Fibonacci term is: " << b;
    }
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "The " << n << "th Fibonacci term is: " << b;
    }

    return 0;
}
//3:- Write a program to Check Armstrong number
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}
//4:- Write a program to Print Armstrong numbers in a range.
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int temp = num;
        int sum = 0, rem;

        while (temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}