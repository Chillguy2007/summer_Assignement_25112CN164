/* Write a program to Write function to find sum
of two numbers*/
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum = " << sum(num1, num2);

    return 0;
}
/* Write a program to Write function to find sum
of two numbers*/#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << "Sum = " << add(num1, num2);

    return 0;
}
/* Write a program to Write function to find
maximum.*/
#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << "Maximum = " << maximum(num1, num2);

    return 0;
}
/* Write a program to Write function to check
prime*/
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
/*Write a program to Write function to find
factorial.*/
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);

    return 0;
}
