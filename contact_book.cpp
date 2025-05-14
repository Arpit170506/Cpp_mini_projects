#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;
    Contact c;
    string searchName;

    while (true) {
        cout << "\n1. Add Contact\n2. View Contacts\n3. Search Contact\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter name: ";
            getline(cin, c.name);
            cout << "Enter phone: ";
            getline(cin, c.phone);
            contacts.push_back(c);
        } else if (choice == 2) {
            cout << "\nContacts:\n";
            for (const auto &con : contacts)
                cout << con.name << " - " << con.phone << endl;
        } else if (choice == 3) {
            cout << "Enter name to search: ";
            getline(cin, searchName);
            bool found = false;
            for (const auto &con : contacts) {
                if (con.name == searchName) {
                    cout << "Found: " << con.name << " - " << con.phone << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Contact not found.\n";
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
