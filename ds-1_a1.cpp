#include <iostream>
using namespace std;
const int MAX_BOOKS = 100;
int main() 
{
    int copies[MAX_BOOKS] = {10};  
    int currentSize = 1;           
    cout << "Initial copies: ";
    for (int i = 0; i < currentSize; ++i) 
    {
        cout << copies[i] << " ";
    }
    cout << endl;
    if (currentSize < MAX_BOOKS) 
    {
        copies[currentSize] = 5;
        ++currentSize;
    }
    cout << "After adding a new book with 5 copies: ";
    for (int i = 0; i < currentSize; ++i) 
    {
        cout << copies[i] << " ";
    }
    cout << endl;
    if (currentSize > 0 && copies[0] > 0) 
    {
        --copies[0];
    }
    cout << "After borrowing a book at index 0: ";
    for (int i = 0; i < currentSize; ++i) 
    {
        cout << copies[i] << " ";
    }
    cout << endl;
    if (currentSize > 0) 
    {
        ++copies[0];
    }
    cout << "After returning a book at index 0: ";
    for (int i = 0; i < currentSize; ++i) 
    {
        cout << copies[i] << " ";
    }
    cout << endl;

    return 0;
}
