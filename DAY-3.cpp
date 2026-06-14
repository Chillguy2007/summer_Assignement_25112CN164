//1:-Write a program to Check whether a number is prime.
#include<iostream>
using namespace std;

int main(){
    int number,i;
    cout<<"Give the number you want to test "<<endl;
    cin>>number;
    int p=0;
    if (number>2) {
    for (i=2;number%i==0; i++)
    {
        p=p+1;
        break;
    }
    if (p>0)
    {
        cout<<"The number is not a prime"<<endl;
    }
    else
    {
       cout<<"The number is prime"<<endl;
    }
    
}
else if (number==2)
{
    cout<<"The number is a prime "<<endl;
}
else
{
    cout<<"The number is not a prime"<<endl;
}

}
//2:-Write a program to Print prime numbers in a range.
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        if (num < 2)
            continue;

        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }
}
//3:- Write a program to Find GCD of two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD = " << a << endl;

}  
//4:- Write a program to Find LCM of two numbers.  
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    // Find GCD
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm << endl;

    return 0;
}
