#include <cstring>
#include <iostream>
using namespace std;

class Student
{
private:
    int num;
    char name[20];
public:
    Student();
    Student(int n, char *str);
    ~Student();
    void print();
};

Student::Student() {}
Student::~Student()
{
	cout<<"bye"<<endl;
}
Student::Student(int n, char *str): num(n)
{
    strcpy(this->name, str);
}

void Student::print()
{
    cout << "num=" << this->num << "name=" << name << endl;
}

int main()
{
    Student s(14, "x");
    // s.num = 13;

    s.print();

    return 0;
}





