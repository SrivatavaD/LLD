#include <iostream>
using namespace std;

int man()
{

    // Below codes are of pointers
    //     int number = 50;
    //     cout << "Printng address of number : " << &number << endl;
    //     int *ptr = &number;

    //     cout << number << endl;
    //     cout<< &number << endl;
    //     cout<< ptr << endl;
    //     cout<<*ptr<<endl;
    //    ( *ptr)++;
    //    cout<<number<<endl;

    // Now dynamic memory

    // Dyanimc memory
    // int *ptr = new int;
    // cout << *ptr;

    // //ab mere ko need ko nhi hai
    // delete ptr;

    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;

    cout << a << endl;
    cout << &a << endl;
    // cout << *a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ctr << endl;
    cout << &ctr << endl;
    cout << *ctr << endl;
    cout << **ctr << endl;
    cout << dtr << endl;
    cout << &dtr << endl;
    cout << *dtr << endl;
    cout << *dtr << endl;
    cout << **dtr << endl;
    cout << ***dtr << endl;

    return 0;
}