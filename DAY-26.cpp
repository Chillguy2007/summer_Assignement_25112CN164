//Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main()
{
    srand(time(0));          // Seed the random number generator
    int secret = rand() % 100 + 1;   // Random number between 1 and 100

    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secret)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < secret)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != secret);

    return 0;
}
//Write a program to Create voting eligibility system.
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else if (age >= 0)
    {
        cout << "You are not eligible to vote." << endl;
    }
    else
    {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}
//Write a program to Create ATM simulation
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 10000.0, amount;

    do
    {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                    cout << "Updated Balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0)
                {
                    cout << "Invalid amount!" << endl;
                }
                else if (amount > balance)
                {
                    cout << "Insufficient Balance!" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
//Write a program to Create quiz application
#include <iostream>
using namespace std;

int main()
{
    int answer, score = 0;

    cout << "===== Welcome to the Quiz Application =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. Python\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 360\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 4
    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 5
    cout << "\n5. Which symbol is used to end a C++ statement?\n";
    cout << "1. .\n2. ;\n3. :\n4. ,\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Final Score
    cout << "\n===== Quiz Completed =====" << endl;
    cout << "Your Score: " << score << " out of 5" << endl;

    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}
