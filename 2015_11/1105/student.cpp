#include <cstring>
#include <iostream>
using namespace std;

class Student
{
public:
	static int count;
private:
    int num;
    char name[20];
public:
    Student();
    Student(int n, char *str);
    ~Student();
    void print();
};

int Student::count = 10;
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
    
    cout<<Student::count<<endl<<"函数将结束\n";

    return 0;
}





