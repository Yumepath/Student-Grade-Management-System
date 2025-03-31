#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int score1, score2, score3;
    int average;
    string grade;
};

// Function to determine grade based on average score
string getGrade(int avg) {
    if (avg >= 90) return "A+ (Outstanding)";
    else if (avg >= 85) return "A (Excellent)";
    else if (avg >= 80) return "B+ (Very Good)";
    else if (avg >= 75) return "B (Good)";
    else if (avg >= 70) return "C+ (Satisfactory)";
    else if (avg >= 60) return "C (Average)";
    else if (avg >= 50) return "D (Needs Improvement)";
    else return "F (Fail)";
}

// Function to safely get input
int getValidInput(string prompt) {
    int num;
    while (true) {
        cout << prompt;
        cin >> num;
        
        if (cin.fail() || num < 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid positive number.\n";
        } else {
            return num;
        }
    }
}

int main() {
    vector <Student> students;
    char choice;

    do {
        Student s;
        
        cout << "\nEnter Student's Name: ";
        cin >> s.name;

        s.score1 = getValidInput("Enter first score: ");
        s.score2 = getValidInput("Enter second score: ");
        s.score3 = getValidInput("Enter third score: ");
        
        s.average = (s.score1 + s.score2 + s.score3) / 3;
        s.grade = getGrade(s.average);

        students.push_back(s);

        cout << "\nWould you like to enter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display results for all students
    cout << "\n========= STUDENT RESULTS =========\n";
    cout << "Name\t\tAverage\t\tGrade\n";
    cout << "------------------------------------\n";
    for (const auto &s : students) {
        cout << s.name << "\t\t" << s.average << "\t\t" << s.grade << endl;
    }
    cout << "====================================\n";

    return 0;
}
