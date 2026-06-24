//Write a program to Check string rotation.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Not a rotation";
    }
    else {
        string temp = str1 + str1;

        if (temp.find(str2) != string::npos)
            cout << "String is a rotation";
        else
            cout << "Not a rotation";
    }

    return 0;
}
//Write a program to Compress a string. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << compressed;

    return 0;
}
//Write a program to Find longest word. 
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str, word, longestWord;

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << longestWord.length() << endl;

    return 0;
}
//Write a program to Remove duplicate characters.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            result += str[i];
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}