#include <iostream>
#include <string>
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
            cout << "Name : " << '\n';
            getline(cin,name);
            cout << "Age : " << '\n';
            cin >> age;
            cin.ignore();
            cout << "Address : " << '\n';
            getline(cin, address);
        }
        // ham tao sao chep
        Person(Person &x)
        {
            name = x.name;
            age = x.age;
            address = x.address;
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
    Student() : studentID(730000000), avgMath(0), avgPhy(0), avgChe(0) {}
    Student(string name, int age, int studentID, db avgMath, db avgPhy, db avgChe) : studentID(studentID), avgMath(avgMath), avgPhy(avgPhy), avgChe(avgChe) {
        this -> studentID = studentID;
        this -> avgMath = avgMath
    }
    // tim cach ke thua tu person
    void inPut() {
        cout << "Student ID : " << '\n';
        cin >> studentID;
        cout << "Mark: Math-Phy-Che" << '\n';
        cin >> avgMath >> avgPhy >> avgChe;
    }
    Student(Student &y)
    {
        studentID = y.studentID;
        avgMath = y.avgMath;
        avgPhy = y.avgPhy;
        avgChe = y.avgChe;
    }
    int gpaCal(db avgMath, db avgPhy, db avgChe)
    {
        return (avgMath + avgPhy + avgChe) / 3;
    }
    void outPut() {
        Person::outPut();
        cout << "Student ID : " << studentID << '\n';
        cout << "GPA : " << gpaCal(avgMath,avgPhy,avgChe) << '\n';
    }
   
};

void fatcat() {
    Person perA;
    perA.inPut();
    perA.outPut();
    cout << '\n';
    Person perB("minh", 19, "Ha Noi");
    perB.outPut();
}

int main() {

    fatcat();
    return 0;
}

