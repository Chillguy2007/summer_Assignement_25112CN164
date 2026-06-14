/* Write a program to Write function for
palindrome*/
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reverse = 0;

    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
/*Write a program to Write function for
Armstrong*/
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
/* Write a program to Write function for
Fibonacci.
    */
   #include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;
    cout << "Enter the position: ";
    cin >> n;

    cout << "Fibonacci term = " << fibonacci(n);

    return 0;
}
/* Write a program to Write function for perfect
number.*/
#include <iostream>
using namespace std;

bool isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num))
        cout << num << " is a Perfect Number.";
    else
        cout << num << " is not a Perfect Number.";

    return 0;
}