//Write a program to Check palindrome string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = true;
    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
//Write a program to Count words in a sentence
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int words = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if ((i == 0 && sentence[i] != ' ') ||
            (sentence[i] != ' ' && sentence[i - 1] == ' ')) {
            words++;
        }
    }

    cout << "Number of words = " << words << endl;

    return 0;
}
//Write a program to Character frequency
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character: ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count << endl;

    return 0;
}
//Write a program to Remove spaces from string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }

    cout << "String after removing spaces: " << result << endl;

    return 0;
}