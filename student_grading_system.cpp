#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> students;
    vector<int> marks;
    string name;
    int mark, n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> mark;
        students.push_back(name);
        marks.push_back(mark);
    }

    cout << "\n--- Report ---\n";
    for (int i = 0; i < n; i++) {
        cout << students[i] << " - Marks: " << marks[i];
        if (marks[i] >= 90) cout << " (A)";
        else if (marks[i] >= 75) cout << " (B)";
        else if (marks[i] >= 60) cout << " (C)";
        else if (marks[i] >= 40) cout << " (D)";
        else cout << " (F)";
        cout << endl;
    }

    return 0;
}
