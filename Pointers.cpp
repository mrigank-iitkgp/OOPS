#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int *p;
    p = &var;  // p points to the address of the var

    cout << "Value of var : " << var << endl;
    cout << "Value of p : " << *p << endl;

    *p = 20;
    cout << "Value of var after changing value of *p : " << var << endl;
    cout << "Value of p after changing : " << *p << endl;

    var = 25;

    cout << "Value of var after changing the value of var : " << var << endl;
    cout << "Value of p after changing the value of var : " << *p << endl;

    int arr[] = {1 , 3 , 5 , 7};
    p = arr;
    cout << "First value of array : " << *p << endl;
    cout << "Third value of array : " << *(p + 2) << endl;
}