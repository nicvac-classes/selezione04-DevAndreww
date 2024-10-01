#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, num3, max;

    cout << "Inserisci 3 numeri e io ti dirò quello maggiore." << endl;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1>num2)
    {
        if(num1>num3)
        {
            max = num1;
        }
        else
        {
            max = num3;
        }
    }
    else
    {
        if(num2>num3)
        {
            max = num2;
        }
        else
        {
            max = num3;
        }
    }

    cout << "Il numero maggiore è " << max << "." << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md 
