#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setNumber(int);
    void get_roll_Number(void);
};

void Student ::setNumber(int r)
{
    roll_number = r;
}

void Student ::get_roll_Number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(int, int);
    void getMarks(void);
};

void Exam ::setMarks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::getMarks()
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void Display()
    {
        get_roll_Number();
        getMarks();
        cout << "The percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.setNumber(420);
    harry.setMarks(98.0, 98.0);
    harry.Display();
    return 0;
}
