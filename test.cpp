#include <iostream>

using namespace std;

bool test(char a[][2], int n)
{
    /*
    for (int i = 0; i < 3; i++)
    {
        if (a[i][n] == ' ')
        {
            return true;
        }
    }
    return false;
    */
    int i = 0;

    while (true)
    {
        if (a[i][n] == ' ')
        {
            return true;
            break;
        }
        else
        {
            return false;
        }
        i++;
    }
}

int main()
{
    char array[3][2] = {' '};

    array[0][0] = 'a';
    array[1][0] = 'b';

    cout << array[2][0] << endl;

    if (array[2][0] == ' ')
    {
        cout << "okay" << endl;
    }

    bool a = test(array, 0);

    if (a == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}