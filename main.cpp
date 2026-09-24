
#include <iostream>
#include <string>
using namespace std;

// ==================================================
// FUNCTION DECLARATIONS
// ==================================================

void grabCar();
void grabFood();
void grabExpress();
void history();

// ==================================================
// MAIN MENU
// ==================================================

int main()
{
    int choice;

    do
    {
        cout << "\n========================\n";
        cout << "       GRAB SYSTEM\n";
        cout << "========================\n";
        cout << "1. GrabCar\n";
        cout << "2. GrabFood\n";
        cout << "3. GrabExpress\n";
        cout << "4. History\n";
        cout << "5. Exit\n";
        cout << "========================\n";

        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                grabCar();
                break;

            case 2:
                grabFood();
                break;

            case 3:
                grabExpress();
                break;

            case 4:
                history();
                break;

            case 5:
                cout << "\nThank you for using Grab!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}


// ==================================================
// GRABCAR
// ==================================================

void grabCar()
{
}

// ==================================================
// GRABFOOD
// ==================================================
void grabFood()
{
}
// ==================================================
// GRABEXPRESS
// ==================================================

void grabExpress()
{    
}
// ==================================================
// HISTORY VIEWING
// ==================================================
void history()
{
}
