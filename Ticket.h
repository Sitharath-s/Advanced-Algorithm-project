#ifndef Ticket
#define Ticket

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

class Ticket {
private:
    int ticketID;
    std::string licensePlate;
    std::string vehicleType;
    std::string checkInTime;
    std::string checkOutTime;
    bool isStaff;
    int parkingSpot;
    
public:
    // Constructor
    Ticket(int id, const std::string& plate, const std::string& type, bool staff, int spot) 
        : ticketID(id), licensePlate(plate), vehicleType(type), isStaff(staff), parkingSpot(spot) {
        // Write code here
    }

    // Getters and setters
    int getTicketID() const { 
        return ticketID; 
    }
    std::string getLicensePlate() const { 
        return licensePlate; 
    }
    std::string getVehicleType() const {
         return vehicleType;
    }
    std::string getCheckInTime() const {
         return checkInTime; 
    }
    std::string getCheckOutTime() const {
        return checkOutTime; 
    }
    int getParkingSpot() const {
        return parkingSpot; 
    }
    bool getIsStaff() const {
        return isStaff; 
    }

    // Set check-out time
    void setCheckOutTime() {
        //Write code here
    }

    // Display ticket details
    void displayTicket() const {
        std::cout << "Ticket ID: " << ticketID << std::endl;
        std::cout << "License Plate: " << licensePlate << std::endl;
        std::cout << "Vehicle Type: " << vehicleType << std::endl;
        std::cout << "Check-in Time: " << checkInTime;
        std::cout << "Check-out Time: " << checkOutTime << std::endl;
        if (isStaff == false) {
            std::cout << "Payment: Required" << std::endl;
        } else {
            std::cout << "Payment: Free (Staff)" << std::endl;
        }
    }

    // Save ticket to file
    void saveToFile(std::ofstream &outFile) const {
        // Write code here
    }

    // Load ticket from file (for search or checking)
    static Ticket loadFromFile(std::ifstream &inFile) {
        // Write code here
    }
};

#endif
