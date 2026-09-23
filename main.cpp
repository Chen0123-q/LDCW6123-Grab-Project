#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "=========================\n";
    cout << "       GRAB SYSTEM\n";
    cout << "=========================\n";
    cout << "1. GrabCar\n";
    cout << "2. GrabFood\n";
    cout << "3. GrabExpress\n";
    cout << "4. Exit\n";
    cout << "=========================\n";

    cout << "Choose: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nGrabCar selected!\n";
        cout << "Booking confirmed.\n";
    }
    else if (choice == 2)
    {
        cout << "\nGrabFood selected!\n";
        cout << "Order confirmed.\n";
    }
    else if (choice == 3)
    {
        cout << "\nGrabExpress selected!\n";
        cout << "Delivery confirmed.\n";
    }
    else if (choice == 4)
    {
        cout << "\nThank you for using Grab!\n";
    }
    else
    {
        cout << "\nInvalid choice.\n";
    }

    return 0;
}