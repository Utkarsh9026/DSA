#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_num;

public:
    void set_num(int a)
    {
        roll_num = a;
    }

    void print_num(void)
    {
        cout << "Your roll number is " << roll_num << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your marks in maths is " << maths << endl;
        cout << "Your marks in physics is " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display()
    {
        total = maths + physics + score;
        print_num();
        print_marks();
        print_score();
        cout << "The total score is " << total << endl;
    }
};

int main()
{
    Result utkarsh;
    utkarsh.set_num(63);
    utkarsh.set_marks(99.99, 100.00);
    utkarsh.set_score(100);
    utkarsh.Display();
    return 0;
}