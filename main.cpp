#include "cMath.h"

int main()
{

    MathmaticalOperations m;

    int temp = 0;
    int temp2 = 0;
    int choice = 0;

    cout << "Give me a number: " << endl;
    cin >> temp;

    cout << "Give me another number: " << endl;
    cin >> temp2;

    cout << "What would you like to do with these numbers? " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cin >> choice;

    if (choice == 1)
    {
        m.add(temp,temp2);
    }

     if (choice == 2)
    {
        m.subtract(temp,temp2);
    }

     if (choice == 3)
    {
        m.multiply(temp,temp2);
    }

     if (choice == 4)
    {
        m.divide(temp,temp2);
    }

    return 0;
}
