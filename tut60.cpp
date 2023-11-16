#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string st = "Utkarsh is father of Anubhav. ";
    // ofstream out("tut60.txt"); //for writing in a file
    // out << st;

    string st2;
    ifstream in("tut60a.txt");//for reading in a file
    getline(in,st2);
    cout << st2;

    return 0;
}