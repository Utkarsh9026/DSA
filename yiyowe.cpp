// #include <iostream>
// using namespace std;
// int main(int argc, char *argv[])
// {
//     int c = 5;
//     int x, y, z;
//     for (x = 5; x > 0; x--)
//     {
//         for (y = 1; y < x; y++)
//             cout << " ";
//         for (z = c; z > 0; z--)
//             cout << z;
//         c--;
//         cout << "\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
  int r,i,j;
  cout<<"Enter no. of rows: ";
  cin>>r;
  
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
    for(i=r;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
  return 0;
}


