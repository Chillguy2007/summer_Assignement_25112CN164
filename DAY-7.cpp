//1:-Write a program to Recursive factorial

#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        cout << "Factorial of " << n << " = " << factorial(n);
    }

    return 0;
}
//2-:Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}
//3:-Write a program to Recursive sum of digits
#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfDigits(n);

    return 0;
}
//4:-Write a program to Recursive reverse number
#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0)
{
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;
    cin >> n;

    cout << reverseNum(n);

    return 0;
}