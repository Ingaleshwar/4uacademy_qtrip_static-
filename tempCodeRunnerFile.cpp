#include <iostream>

using namespace std;

int main()
{
    size_t size{0};
    double *temp_ptr{nullptr};

    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size]; // allocate the storage on the heap
    cout << temp_ptr << endl;    // use it - allocates address of new double [size]
    *temp_ptr=7;// initializing new double[size]
    cout << *temp_ptr << endl; // if not initialized - then it will through a garbage
    delete[] temp_ptr;           // release it
    cout << *temp_ptr << endl;

    cout << endl;
    return 0;
}