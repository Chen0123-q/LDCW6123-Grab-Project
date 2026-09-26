
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
    string pickup;
    string destination;
    string carType;
    string promo;

    double distance;
    double baseFare = 5.00;
    double ratePerKm = 0.00;
    double surcharge = 0.00;
    double discount = 0.00;
    double fare;
    double total;

    int carChoice;
    int confirm;
    char peak;

    cout << "\n========================\n";
    cout << "       GRABCAR\n";
    cout << "========================\n";

    // Get pickup location
    cout << "Enter pickup location: ";
    cin.ignore();
    getline(cin, pickup);

    // Get destination
    cout << "Enter destination: ";
    getline(cin, destination);

    // Get distance
    cout << "Enter distance (km): ";
    cin >> distance;

    // Select car type
    cout << "\nSelect car type:\n";
    cout << "1. GrabCar\n";
    cout << "2. GrabCar 6\n";
    cout << "3. Premium\n";
    cout << "Choose: ";
    cin >> carChoice;

    // Determine car type and rate
    if (carChoice == 1)
    {
        carType = "GrabCar";
        ratePerKm = 1.50;
    }
    else if (carChoice == 2)
    {
        carType = "GrabCar 6";
        ratePerKm = 2.00;
    }
    else if (carChoice == 3)
    {
        carType = "Premium";
        ratePerKm = 3.00;
    }
    else
    {
        cout << "\nInvalid car type.\n";
        return;
    }

    // Peak hour
    cout << "\nIs this a peak-hour booking? (Y/N): ";
    cin >> peak;

    if (peak == 'Y' || peak == 'y')
    {
        surcharge = (baseFare + (distance * ratePerKm)) * 0.20;
    }

    // Calculate fare
    fare = baseFare + (distance * ratePerKm) + surcharge;

    // Promo code
    cout << "\nEnter promo code (or enter NONE): ";
    cin >> promo;

    if (promo == "GRAB10")
    {
        discount = 10.00;

        if (discount > fare)
        {
            discount = fare;
        }

        cout << "Promo code applied!\n";
    }
    else if (promo != "NONE")
    {
        cout << "Invalid promo code.\n";
    }

    // Calculate final total
    total = fare - discount;

    // Display booking summary
    cout << "\n========================\n";
    cout << "      BOOKING SUMMARY\n";
    cout << "========================\n";

    cout << "Pickup: " << pickup << endl;
    cout << "Destination: " << destination << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Car type: " << carType << endl;
    cout << "Base fare: RM " << baseFare << endl;
    cout << "Peak surcharge: RM " << surcharge << endl;
    cout << "Discount: RM " << discount << endl;

    cout << "------------------------\n";
    cout << "TOTAL: RM " << total << endl;

    // Confirm booking
    cout << "\n1. Confirm Booking\n";
    cout << "2. Cancel\n";
    cout << "Choose: ";
    cin >> confirm;

    if (confirm == 1)
    {
        cout << "\nGrabCar booking confirmed!\n";
        cout << "Estimated arrival time: 5-10 minutes.\n";
    }
    else
    {
        cout << "\nGrabCar booking cancelled.\n";
    }
}


// ==================================================
// GRABFOOD
// ==================================================

void grabFood()
{
    
    cout << "\n========================\n";
    cout << "       GRABFOOD\n";
    cout << "========================\n";

    cout << "GrabFood module is being developed.\n";
}


// ==================================================
// GRABEXPRESS
// ==================================================

void grabExpress()
{
    string pickup;
    string destination;
    string packageType;
    string deliveryType;
    string promo;

    double distance;
    double distanceFee;
    double packageFee = 0.00;
    double deliveryFee = 0.00;
    double discount = 0.00;
    double subtotal;
    double total;

    int packageChoice;
    int deliveryChoice;
    int confirm;


    cout << "\n========================\n";
    cout << "      GRABEXPRESS\n";
    cout << "========================\n";

    // Get pickup location
    cout << "Enter pickup location: ";
    cin.ignore();
    getline(cin, pickup);

    // Get destination
    cout << "Enter destination: ";
    getline(cin, destination);

    // Get delivery distance
    cout << "Enter delivery distance (km): ";
    cin >> distance;

    // Calculate distance fee
    distanceFee = distance * 1.00;

    // Select package type
    cout << "\nSelect package type:\n";
    cout << "1. Document\n";
    cout << "2. Small Parcel\n";
    cout << "3. Large Parcel\n";
    cout << "Choose: ";
    cin >> packageChoice;

    // Determine package type and fee
    if (packageChoice == 1)
    {
        packageType = "Document";
        packageFee = 2.00;
    }
    else if (packageChoice == 2)
    {
        packageType = "Small Parcel";
        packageFee = 3.00;
    }
    else if (packageChoice == 3)
    {
        packageType = "Large Parcel";
        packageFee = 6.00;
    }
    else
    {
        cout << "\nInvalid package type.\n";
        return;
    }

    // Select delivery speed
    cout << "\nSelect delivery speed:\n";
    cout << "1. Standard\n";
    cout << "2. Express\n";
    cout << "Choose: ";
    cin >> deliveryChoice;

    if (deliveryChoice == 1)
    {
        deliveryType = "Standard";
        deliveryFee = 0.00;
    }
    else if (deliveryChoice == 2)
    {
        deliveryType = "Express";
        deliveryFee = 5.00;
    }
    else
    {
        cout << "\nInvalid delivery option.\n";
        return;
    }

    // Calculate subtotal
    subtotal = 5.00 + distanceFee + packageFee + deliveryFee;

    // Promo code
    cout << "\nEnter promo code (or enter NONE): ";
    cin >> promo;

    if (promo == "GRAB10")
    {
        discount = 10.00;

        if (discount > subtotal)
        {
            discount = subtotal;
        }

        cout << "Promo code applied!\n";
    }
    else if (promo != "NONE")
    {
        cout << "Invalid promo code.\n";
    }

    // Calculate final total
    total = subtotal - discount;

    // Display delivery summary
    cout << "\n========================\n";
    cout << "     DELIVERY SUMMARY\n";
    cout << "========================\n";

    cout << "Pickup: " << pickup << endl;
    cout << "Destination: " << destination << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Package: " << packageType << endl;
    cout << "Delivery speed: " << deliveryType << endl;
    cout << "Distance fee: RM " << distanceFee << endl;
    cout << "Package fee: RM " << packageFee << endl;
    cout << "Express fee: RM " << deliveryFee << endl;
    cout << "Discount: RM " << discount << endl;

    cout << "------------------------\n";
    cout << "TOTAL: RM " << total << endl;

    // Confirm delivery
    cout << "\n1. Confirm Delivery\n";
    cout << "2. Cancel\n";
    cout << "Choose: ";
    cin >> confirm;

    if (confirm == 1)
    {
        cout << "\nGrabExpress delivery confirmed!\n";
        cout << "Estimated delivery time: 30-60 minutes.\n";
    }
    else
    {
        cout << "\nGrabExpress delivery cancelled.\n";
    }
}


// ==================================================
// HISTORY
// ==================================================

void history()
{
    // Teammate will add History code here

    cout << "\n========================\n";
    cout << "        HISTORY\n";
    cout << "========================\n";

    cout << "History module is being developed.\n";
}

