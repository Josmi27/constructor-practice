#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int age;
        char gender;
    
    public:
        Student();
        void setAge(int);
        void setGender(char);
        int getAge() const {
            return gender;
        }
        char getGender() const {
            return gender;
        }
};

Student::Student() {
    age = 0;
    gender = ' ';
}

void Student::setAge(int a) {
    age = a;
}

void Student::setGender(char g) {
    gender = g;
}

int main() {
    Student user;
    int a;
    char g;
    cout << "Enter your age: ";
    cin >> a;

    cout << "Enter your gender: ";
    cin >> g;

    user.setAge(a);
    user.setGender(g);

    cout << "The age of the student is: " << user.getAge() << endl;

    cout << "The gender of the student is: " << user.getGender() << endl;

    return 0;
}
