//Write a program to Create library management system.
#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Book ID: ";
            cin >> books[count].id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            cout << "Enter Author Name: ";
            getline(cin, books[count].author);

            books[count].issued = false;
            count++;

            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nBook List:\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "ID: " << books[i].id << endl;
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Status: ";
                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                }
            }
            break;

        case 3: {
            int searchId;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++) {
                if (books[i].id == searchId) {
                    cout << "\nBook Found!\n";
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Status: ";
                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 4: {
            int issueId;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> issueId;

            for (int i = 0; i < count; i++) {
                if (books[i].id == issueId) {
                    found = true;
                    if (!books[i].issued) {
                        books[i].issued = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is Already Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 5: {
            int returnId;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> returnId;

            for (int i = 0; i < count; i++) {
                if (books[i].id == returnId) {
                    found = true;
                    if (books[i].issued) {
                        books[i].issued = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book was not Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 6:
            cout << "Thank You for Using Library Management System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
//Write a program to Create bank account system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int accountNumber;
    double balance = 0;
    int choice;
    double amount;

    cout << "===== CREATE BANK ACCOUNT =====\n";
    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited Successfully!\n";
            } else {
                cout << "Invalid Amount!\n";
            }
            break;

        case 2:
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (amount <= balance && amount > 0) {
                balance -= amount;
                cout << "Withdrawal Successful!\n";
            } else {
                cout << "Insufficient Balance or Invalid Amount!\n";
            }
            break;

        case 3:
            cout << "\n===== ACCOUNT DETAILS =====\n";
            cout << "Account Holder: " << name << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 4:
            cout << "Thank You for Using Bank Account System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
//Write a program to Create ticket booking system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Booking Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Your Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Number of Tickets: ";
            cin >> seats;

            if (seats <= (totalSeats - bookedSeats) && seats > 0) {
                bookedSeats += seats;
                cout << "Ticket Booked Successfully!\n";
            } else {
                cout << "Not Enough Seats Available!\n";
            }
            break;

        case 2:
            cout << "Enter Number of Tickets to Cancel: ";
            cin >> seats;

            if (seats > 0 && seats <= bookedSeats) {
                bookedSeats -= seats;
                cout << "Ticket Cancelled Successfully!\n";
            } else {
                cout << "Invalid Number of Tickets!\n";
            }
            break;

        case 3:
            cout << "\n===== BOOKING DETAILS =====\n";
            cout << "Customer Name : " << name << endl;
            cout << "Booked Tickets: " << bookedSeats << endl;
            cout << "Available Seats: " << totalSeats - bookedSeats << endl;
            break;

        case 4:
            cout << "Thank You for Using Ticket Booking System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
//Write a program to Create contact management system.
#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, contacts[count].name);

            cout << "Enter Phone Number: ";
            getline(cin, contacts[count].phone);

            count++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Contacts Available!\n";
            } else {
                cout << "\n----- Contact List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nContact " << i + 1 << endl;
                    cout << "Name : " << contacts[i].name << endl;
                    cout << "Phone: " << contacts[i].phone << endl;
                }
            }
            break;

        case 3: {
            string searchName;
            bool found = false;

            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < count; i++) {
                if (contacts[i].name == searchName) {
                    cout << "\nContact Found!\n";
                    cout << "Name : " << contacts[i].name << endl;
                    cout << "Phone: " << contacts[i].phone << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 4: {
            string deleteName;
            bool found = false;

            cin.ignore();
            cout << "Enter Name to Delete: ";
            getline(cin, deleteName);

            for (int i = 0; i < count; i++) {
                if (contacts[i].name == deleteName) {
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "Contact Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 5:
            cout << "Thank You for Using Contact Management System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}


