#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    Address() {}

    void input() {
        cout << "Enter street: ";
        getline(cin, street);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter state: ";
        getline(cin, state);
        cout << "Enter zip code: ";
        getline(cin, zipCode);
    }

    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << endl;
    }
};


class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    Address address; 

public:
   
    Student() {}

 
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter class: ";
        getline(cin, className);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();  n
        address.input();
    }
 Function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }


    void displayinfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.display();
    }
};

int main() {
    Student student;

    
    student.input();

 
    student.displayinfo();
    
    
    
    

    return 0;
}

