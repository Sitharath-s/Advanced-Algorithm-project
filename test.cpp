#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to generate a new ticket and store it in the file
void generateTicket() {
    ofstream file("test.txt", ios::app);  // Open file in append mode

    if (!file) {
        cout << "Error opening the file!" << endl;
        return;
    }

    // Generate a new ticket ID (sequential)
    string ticketID;
    ifstream inFile("test.txt");
    int id = 1;
    string line;
    while (getline(inFile, line)) {
        id++;
    }
    ticketID = to_string(id);

    // Get license plate from user
    string licensePlate;
    cout << "Enter License Plate: ";
    cin >> licensePlate;

    // Get current date and time for check-in
    time_t now = time(0);
    tm* ltm = localtime(&now);
    string checkInDate = to_string(1900 + ltm->tm_year) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(ltm->tm_mday) + " " + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min);

    // Placeholder for check-out date (for simplicity, same as check-in date in this case)
    string checkOutDate = checkInDate;

    // Generate a random fee between 5 and 20
    int fee = rand() % 16 + 5;

    // Write ticket details to the file
    file << ticketID << "," << licensePlate << "," << checkInDate << "," << checkOutDate << "," << fee << endl;

    cout << "Ticket Generated!" << endl;
    cout << "Ticket ID: " << ticketID << endl;
    cout << "License Plate: " << licensePlate << endl;
    cout << "Check-In Date: " << checkInDate << endl;
    cout << "Check-Out Date: " << checkOutDate << endl;
    cout << "Fee: " << fee << endl;

    file.close();  // Close the file
}

// Function to search for a ticket by Ticket ID or License Plate
void searchTicket(const string& query, bool searchByTicketID) {
    ifstream file("test.txt");  // Open the file containing ticket data

    if (!file) {
        cout << "Error opening the file!" << endl;
        return;
    }

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string ticketID, licensePlate, checkInDate, checkOutDate, fee;
        
        // Reading data from the file (TicketID, LicensePlate, CheckInDate, CheckOutDate, Fee)
        getline(ss, ticketID, ',');
        getline(ss, licensePlate, ',');
        getline(ss, checkInDate, ',');
        getline(ss, checkOutDate, ',');
        getline(ss, fee, ',');

        // Search by Ticket ID or License Plate
        if ((searchByTicketID && ticketID == query) || (!searchByTicketID && licensePlate == query)) {
            cout << "Ticket Found!" << endl;
            cout << "Ticket ID: " << ticketID << endl;
            cout << "License Plate: " << licensePlate << endl;
            cout << "Check-In Date: " << checkInDate << endl;
            cout << "Check-Out Date: " << checkOutDate << endl;
            cout << "Fee: " << fee << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Ticket not found!" << endl;
    }

    file.close();  // Close the file
}

int main() {
    srand(time(0));  // Seed for random number generation

    int choice;
    string query;

    cout << "1. Generate Ticket" << endl;
    cout << "2. Search Ticket" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Generate a new ticket and store it in the file
        generateTicket();
    } else if (choice == 2) {
        // Search for a ticket by Ticket ID or License Plate
        cout << "Search by: " << endl;
        cout << "1. Ticket ID" << endl;
        cout << "2. License Plate" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter the " << (choice == 1 ? "Ticket ID" : "License Plate") << " to search: ";
        cin >> query;

        if (choice == 1) {
            searchTicket(query, true);  // Search by Ticket ID
        } else if (choice == 2) {
            searchTicket(query, false);  // Search by License Plate
        } else {
            cout << "Invalid choice!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
