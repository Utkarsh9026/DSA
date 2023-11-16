#include<iostream>
using namespace std;

template<class T>
class Harry
{
  public:
  T data;
  Harry(T a)
  {
      data=a;
  }
  void Display();
};

template<class T>
void Harry<T> :: Display()
{
   cout<<"The value of data is "<<data<<endl;
}

int main()
{
    Harry<char> h('c');
    cout<<h.data<<endl;
    h.Display();
    return 0;
}