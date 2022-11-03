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
    int variable = 4;
    
    switch(variable) {
        case 1:
            cout << "Statement when case1 has satisfied." << endl;
            break;
        case 2:
            cout << "Statement when case2 has satisfied." << endl;
            break;
        case 3:
            cout << "Statement when case3 has satisfied." << endl;
            break;
        case 4:
            cout << "Statement when case4 has satisfied." << endl;
            break;
        default:
            cout << "Statement when no case has satisfied." << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}