#include <iostream>

using namespace std;

/**
 * A method that takes in two paramaters: a message which is a string and a double value that will both be printed.  If successful resturn a 0.
 */
int printToUser(string msg, double val)
{
    cout << msg << "\t" << val << endl;
    return 0;
}

int multValsInArr(int arr[], int mult, int cnt)
{
    mult = 10;
    for (int i = 0; i < cnt; i++)
    {
        arr[i] = arr[i] * mult;
        cout << arr[i] << endl;
    }
    return 0;
}

int multValsInArr2(int arr[], int &mult, int cnt)
{
    mult = 10;
    for (int i = 0; i < cnt; i++)
    {
        arr[i] = arr[i] * mult;
        cout << arr[i] << endl;
    }
    return 0;
}

int printArr(int arr[], int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    cout << "Hello, World!" << endl;

    cout << "The command line arguements are: " << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Arguement " << i << " is " << argv[i] << endl;
    }

    int a = 10;
    int b = 23;
    int c = a + b;

    cout << "A is " << a << endl;
    cout << "B is " << b << endl;
    printToUser("A + B = C = ", c);

    // References in C++ (&)
    int &d = a; // Alias
    printToUser("A: ", a);
    printToUser("D: ", d);

    a = 25;
    printToUser("A: ", a);
    printToUser("D: ", d);

    d = 50;
    printToUser("A: ", a);
    printToUser("D: ", d);

    d = c;
    printToUser("A: ", a);
    printToUser("C: ", c);
    printToUser("D: ", d);

    int arr[5] = {1, 2, 3, 4, 5};
    int mult = 5;

    multValsInArr(arr, mult, 5); // Arrays are passed by reference!
    printArr(arr, 5);
    printToUser("mult: ", mult); // Integers, strings, doubles, etc. are all passed by value...the function has it's own copy of the data

    // BUT!  I can pass by reference if I want to!
    // We will modify the method int multValsInArr(int arr[], int mult, int cnt) to be int multValsInArr(int arr[], int &mult, int cnt)
    multValsInArr2(arr, mult, 5);
    printToUser("mult: ", mult);
    return 0;
}