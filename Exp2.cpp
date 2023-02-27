#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string roll_no;
        string name;
        string subject;
        int max_marks;
        int min_marks;
        int marks_obtained;
    
    public:
        Student() {
            cout << "Enter Roll No.: ";
            getline(cin, roll_no);
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Subject: ";
            getline(cin, subject);
            max_marks = 100;
            min_marks = 0;
            marks_obtained = 0;
        }

        void set_marks() {
            cout << "Enter Marks Obtained: ";
            cin >> marks_obtained;
        }

        double get_percentage() {
            return ((double)(marks_obtained - min_marks) / (double)(max_marks - min_marks)) * 100.0;
        }

        void display_result() {
            cout << "Roll No.: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Marks Obtained: " << marks_obtained << endl;
            cout << "Percentage: " << get_percentage() << "%" << endl;
        }
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter details for Student " << i+1 << endl;
        students[i].set_marks();
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].display_result();
        cout << endl;
    }

    return 0;
}
