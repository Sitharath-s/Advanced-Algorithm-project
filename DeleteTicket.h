#ifndef Delete_Ticket
#define Delete_Ticket


#include <iostream>
#include <fstream>
#include "Ticket.h"

void deleteTicket() {
    std::ifstream ticketFile("tickets.txt");
    std::ofstream tempFile("temp_file.txt");
    std::ofstream deletedFile("deleted_ticket_file.txt", std::ios::app);

    std::string searchTerm;
    int choice;

    std::cout << "Delete by:\n1. License Plate\n2. Ticket ID\nEnter your choice: ";
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

    // Write code here

    // Replace the ticket file with the updated one
    std::remove("ticket_file.txt");
    std::rename("temp_file.txt", "ticket_file.txt");
}

#endif // DELETETICKET_H
