#include <iostream>
#include "CheckIn.h"
#include "CheckOut.h"
#include "SearchTicket.h"
#include "DeleteTicket.h"
#include "CheckAllTicket.h"
using namespace std;


int main() {
    int choice;
    
    cout << "**********************************" << endl;
    cout << "***** Welcome to Vista MAll ******" << endl;
    cout << "**********************************" << endl;
    cout << "**------------------------------**" << endl;
    cout << "**Please select your options    **" << endl;
    cout << "**------------------------------**" << endl;
    cout << "** - Check In (select 1)        **" << endl;
    cout << "** - Check Out (select 2)       **" << endl;
    cout << "** - Check all ticket (select 3)**" << endl;
    cout << "** - Search Ticket (select 4)   **" << endl;
    cout << "** - Delete Ticket (select 5)   **" << endl;
    cout << "** - Exit program (select 6)    **" << endl;
    cout << "**********************************" << endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            checkIn();
            break;
        case 2:
            checkOut();
            break;
        case 3:
            searchTicket();
            break;
        case 4:
            deleteTicket();
            break;
        case 5:
            displayAllTickets();
            break;
        case 6:
            std::cout << "Exiting program..." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice! Please try again." << std::endl;
    }
    
    return 0;
}

