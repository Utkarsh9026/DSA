#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number" << endl;
    cin >> n;

    //    for(i=1;i<=10;i++)
    //    {
    //        cout<<endl<<n<<"*"<<i<<"="<<n*i;
    //    }
    // do
        // {
        //   cout<<endl<<n<<"*"<<i<<"="<<n*i;
        //   i++;
        // } while (i<=10);

        while (i <= 10)
        {
            cout << endl
                 << n << "*" << i << "=" << n * i;
            i++;
        }
        char c = getchar();
    return 0;
}
