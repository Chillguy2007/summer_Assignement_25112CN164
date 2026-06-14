/*1:-Write a program to Print reverse star pattern.
*****
****
***
**
**/
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
/*2Write a program to Print reverse number
triangle.
12345
1234
123
12
1*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
/*3Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;

        for (int j = 1; j <= i; j++) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
/*4-:Write a program to Print hollow square
pattern.
*****
* *
* *
* *
******/
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
