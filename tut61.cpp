#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("tut60.txt");
    string name;
    cout << "Enter your name " << endl;
    cin >> name;
    //writing to a file
    out << "My name is:" + name;
    out.close();

    ifstream in("tut60.txt");
    string content;
    //reading to a file
    getline(in,content);
    cout << "The content of this file is \n"
         << content;
    in.close();
    return 0;
}