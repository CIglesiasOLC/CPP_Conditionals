// *************************** CONDITIONALS ***********************************
// Switch Statements - compares one specific variable against a set of defined
//                     constants or values.
// Case Statements - part of a SWITCH statement which defines the constant where
//                   the variable-under-parameter is being compared.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int month_in_number = 13;
    
    switch(month_in_number) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid month in number" << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}