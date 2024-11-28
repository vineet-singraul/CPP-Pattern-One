#include <iostream>
using namespace std;

int main()
{

    for (int table = 2; table <= 10; table++)
    {
        cout << "Table of " << table << ":" << endl;

        for (int i = 1; i <= 10; i++)
        {
            cout << table << " x " << i << " = " << table * i << endl;
        }

        cout << endl;
    }

    return 0;
}
