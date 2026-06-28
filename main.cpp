#include <bits/stdc++.h>
using namespace std;

class Students {

    public :
    int rollNo;
    string name;
    int age;
    float cgpa;

    void input(){
        cout<<"\nEnter Roll no: ";
        cin >> rollNo;

        cout<<"\nEnter name:";
        getline(cin , name);

        cout <<"\nEnter age:";
        cin >> age;

        cout<<"\nEnter CGPA";
        cin >> cgpa;
    }

    void display(){
        cout << "\n--------------\n";
        
        cout << "Roll No : "<< rollNo << endl;

        cout << "Name : " << name << endl;

        cout << "Age : " << age <<endl;

        cout <<"CGPA : " << cgpa << endl;

    }
};


void addStudent( vector<Student>& students){

    Student s;

    s.input();
    students.push_back(s);

    cout<<"\n--Student Added--\n";
}