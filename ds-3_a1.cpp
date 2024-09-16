#include <iostream>
using namespace std;
int main() {
    int seating[10][15] = {0}; 
    while (true) 
    {
        int choice, row, seat;
        cout << "\n1. Display Seating\n2. Book a Seat\n3. Exit\nChoose an option: ";
        cin >> choice;
        if (choice == 1) 
        {
            // Display the seating arrangement
            for (int i = 0; i < 10; i++) 
            {
                for (int j = 0; j < 15; j++) 
                {
                    cout << seating[i][j] << " ";
                }
                cout << endl;
            }
        } 
        else if (choice == 2) 
        {
            // Book a seat
            cout << "Enter row (1-10): ";
            cin >> row;
            cout << "Enter seat (1-15): ";
            cin >> seat;
            // Check if the seat is available
            if (seating[row - 1][seat - 1] == 0) 
            {
                seating[row - 1][seat - 1] = 1;  // Mark as occupied
                cout << "Seat booked!\n";
            } 
            else 
            {
                cout << "Seat already occupied!\n";
            }
        } 
        else if (choice == 3) 
        {
            // Exit the program
            break;
        } 
        else 
        {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
