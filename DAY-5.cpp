//1:- Write a program to Check perfect number. Write a program to Check perfect number. 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << num << " is a Perfect Number.";
    } else {
        cout << num << " is not a Perfect Number.";
    }

    return 0;
}
//2:- Write a program to Check strong number
#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a Strong Number.";
    } else {
        cout << num << " is not a Strong Number.";
    }

    return 0;
}
//3:- Write a program to Print factors of a number
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
//4:- Write a program to Find largest prime factor. 
#include <iostream>
using namespace std;

int main() {
    long long num, largestPrime = -1;

    cout << "Enter a number: ";
    cin >> num;

    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    if (num > 2) {
        largestPrime = num;
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}
