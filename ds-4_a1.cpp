#include <iostream>
using namespace std;
const int MAX_ORDERS = 1000;
int findOrderID(int orders[], int size, int searchID)
{
    for (int i = 0; i < size; ++i) 
    {
        if (orders[i] == searchID) 
        {
            return i;  
        }
    }
    return -1; 
}

int main() 
{
    int orders[MAX_ORDERS] = {101, 102, 103, 104, 105};  
    int size = 5;
    int searchID;
    cout << "Enter the order ID to search: ";
    cin >> searchID;
    int position = findOrderID(orders, size, searchID);
    if (position == -1) 
    {
        cout << "Order ID not found.\n";
    } 
    else 
    {
        cout << "Order ID found at position: " << position + 1 << endl;
    }

    return 0;
}

