#include <iostream>
using namespace std;

// typedef struct employee
// {
//     int eId;
//     char favchar;
//     int salary;
// } em;

union money
{
  int rice;
  int pounds;
  char car;
}; 

int main()
{   cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"------------------------Program by Utkarsh -------------------------"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    // struct employee Anubhavbeta;
    // Anubhavbeta.eId = 11;
    // Anubhavbeta.favchar='P';
    // Anubhavbeta.salary = 1000000;

    union money m1;
    m1.rice=56;
    m1.pounds=90;
    m1.car='C';

    cout <<"The value of m1 is "<<m1.rice << endl;
    cout <<"The value of m1 is "<< m1.pounds << endl;
    // cout <<"The value of m1 is "<<m1.car << endl;
    

    return 0;
}