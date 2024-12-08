#ifndef Check_in
#define Check_in

#include <iostream>
#include <fstream>
#include "Ticket.h"

void checkIn() {
    std::ofstream ticketFile("tickets.txt", std::ios::app); 

    // Request customer input
    std::string licensePlate, vehicleType;
    int parkingSpot;
    bool isStaff;

    std::cout << "Enter License Plate: ";
    std::cin >> licensePlate;
    std::cout << "Enter Vehicle Type: ";
    std::cin >> vehicleType;
    std::cout << "Enter Parking Spot Number: ";
    std::cin >> parkingSpot;
    std::cout << "Are you a staff member? (1 for Yes, 0 for No): ";
    std::cin >> isStaff;

    // Create a ticket ID 
    // Write code here

    // Create a Ticket object
    Ticket newTicket(ticketID, licensePlate, vehicleType, isStaff, parkingSpot);
    newTicket.save_to_file(ticketFile);

    std::cout << "Ticket Created Successfully!" << std::endl;

    ticketFile.close();
}

#endif // Check_in
