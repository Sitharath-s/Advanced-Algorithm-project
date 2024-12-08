#ifndef Search_Ticket
#define Search_Ticket

#include <iostream>
#include <fstream>
#include "Ticket.h"

void searchTicket() {
    std::ifstream ticketFile("tickets.txt");
    std::string searchTerm;
    int choice;

    std::cout << "Search by:\n1. License Plate\n2. Ticket ID\nEnter your choice: ";
    std::cin >> choice;

    std::cout << "Enter search term: ";
    if (choice == 1) {
        std::cin >> searchTerm;
    } else if (choice == 2) {
        std::cin >> searchTerm;
    } else {
        std::cout << "Invalid choice! Returning to menu.\n";
        return;
    }

    //write code here


    
}

#endif // SEARCHTICKET_H
