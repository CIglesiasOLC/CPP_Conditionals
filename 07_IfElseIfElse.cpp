// *************************** CONDITIONALS ***********************************
// Else if - part of IF statements that extends possibilities to cover other
//           scenarios not under the original IF.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;


int main() {
    bool condition1 = 1; //true
    bool condition2 = 1; //true
    
    if (condition1) {
        cout << "Statement when the condition1 is TRUE." << endl;
    }
    else if (condition2){
        cout << "Statement when the condition1 is FALSE and condition2 is TRUE." << endl;
    }
    else {
        cout << "Statement when the condition1 and condition2 are FALSE." << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}


/* ALTERNATIVE, but if else if else is more readable.
    if (condition1) {
        cout << "Statement when the condition1 is TRUE." << endl;
    }
    else {
        if (condition2){
            cout << "Statement when the condition1 is FALSE and condition2 is TRUE." << endl;
        }
        else {
            cout << "Statement when the condition1 and condition2 are FALSE." << endl;
        }
    }
*/