#ifndef Check_Out
#define Check_Out

#include <iostream>
#include <fstream>
#include <string>
#include "Ticket.h"

void checkOut() {
    std::ifstream ticketFile("tickets.txt");
    std::ofstream tempFile("temp_file.txt");

    int ticketID;
    std::cout << "Enter Ticket ID for Check-out: ";
    std::cin >> ticketID;

    // Write code here

    // Replace old ticket file with updated file
    std::remove("ticket_file.txt");
    std::rename("temp_file.txt", "ticket_file.txt");
}

#endif // Check_Out
