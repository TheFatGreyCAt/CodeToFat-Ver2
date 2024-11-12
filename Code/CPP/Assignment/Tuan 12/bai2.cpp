#include <bits/stdc++.h>
#define db double

using namespace std;

class Person {
    protected:
        string name;
        int age;
        string address;

    public:
        // khoi tao gia tri ban dau
        Person() : name("unknown"), age(0), address("unknown") {}
        // khoi tao ham nhap bien
        Person(string name, int age, string address) : name(name), age(age), address(address) {}
        // ham nhap tu ban phim
        void inPut() {
            cin.ignore();
            cout << "Name : " << '\n'; getline(cin,name);
            cout << "Age : " << '\n'; cin >> age;
            cin.ignore();
            cout << "Address : " << '\n'; getline(cin, address);
        }
        // ham tao sao chep
        Person(Person &p)
        {
            name = p.name;
            age = p.age;
            address = p.address;
        }
        // ham in ra ket qua
        void outPut() {
            cout << "Student name: " << name << '\n';
            cout << "Student age: " << age << '\n';
            cout << "Student address: " << address << '\n';
        }
};

class Student : public Person {
private:
    int studentID;
    db avgMath, avgPhy, avgChe;

public:
    Student() : Person(), studentID(0), avgMath(0), avgPhy(0), avgChe(0) {}
    Student(string name, int age, string address, int studentID, db avgMath, db avgPhy, db avgChe) : Person(name, age, address), studentID(studentID), avgMath(avgMath), avgPhy(avgPhy), avgChe(avgChe) {}

    void inPut() {
        Person::inPut();
        cout << "Student ID : " << '\n';
        cin >> studentID;
        cout << "Mark: Math-Phy-Che" << '\n';
        cin >> avgMath >> avgPhy >> avgChe;
    } 
    // ham tao sao chep
    Student(Student &s)
    {
        studentID = s.studentID;
        avgMath = s.avgMath;
        avgPhy = s.avgPhy;
        avgChe = s.avgChe;
    }
    // solve GPA
    db gpaCal()
    {
        return ((avgMath + avgPhy + avgChe) / 3) * 0.4;
    }
    void outPut() {
        Person::outPut();
        cout << "Student ID : " << studentID << '\n';
        cout << "GPA : " << fixed << setprecision(2) << gpaCal() << '\n';
    }
   
};

void fatcat() {
    int n;
    cin >> n;
    Student ClassA[50];
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << '\n';
        ClassA[i].inPut();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if (ClassA[i].gpaCal() > ClassA[j].gpaCal())
            {
                Student stg = ClassA[i];
                ClassA[i] = ClassA[j];
                ClassA[j] = stg;
            }   
        }
    }
    cout << "List of students sorted by GPA: " << '\n';
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << '\n';
        ClassA[i].outPut();
    }
}

int main() {

    fatcat();
    return 0;
}

