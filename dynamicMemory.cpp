#include <iostream>
using namespace std;

int main() {
    int *p = new int;  // dynamic memory resreved for the integer

    *p = 10;
    cout << "Tha value of object which p points to : " << *p << endl;

    int *q = p;

    cout << "The value of object which q points to : " << *q << endl;
    cout << "The memory address of p : " << p << endl;
    cout << "The memory address of q : " << q << endl;

    double *arr = new double[500]; // array of size 500 has been created in the heap
    arr[0] = 50;
    cout << "The first element in array : " << arr[0] << endl;

    // delete pointers and freeing up the space
    delete p , q; 
    delete[] arr;
    cout << "The value of p after delete is : " << *p << endl;
    cout << "The address of p after delete is : " << p << endl;

    p = new int(5);
    cout << "The value of object which p points to : " << *p << endl;

}