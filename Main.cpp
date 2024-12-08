#include "CheckIn.h"
#include "CheckOut.h"
#include "CheckAllTicket.h"
#include "SearchTicket.h"
#include "DeleteTicket.h"

#include<iostream>
using namespace std;

/*
Define function to use in our program
*/

int main(){
    int options;
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
    cout << "Select: ";
    cin >> options;


    return 0;
}
