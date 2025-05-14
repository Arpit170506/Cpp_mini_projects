#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;
    string author;
};

int main() {
    vector<Book> books;
    int choice;
    string title, author;

    while (true) {
        cout << "\n1. Add Book\n2. List Books\n3. Search Book\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            books.push_back({title, author});
        } else if (choice == 2) {
            cout << "\nBooks:\n";
            for (const auto &book : books)
                cout << "Title: " << book.title << ", Author: " << book.author << endl;
        } else if (choice == 3) {
            cout << "Enter title to search: ";
            getline(cin, title);
            bool found = false;
            for (const auto &book : books) {
                if (book.title == title) {
                    cout << "Found: " << book.title << " by " << book.author << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Book not found.\n";
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
