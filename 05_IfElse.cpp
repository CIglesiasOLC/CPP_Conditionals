// *************************** CONDITIONALS ***********************************
// Else Statement - part of an IF statement that present an alternative execution.
//                  when IF statement fail.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    bool condition = 1; //true
    
    if (condition) {
        cout << "Statement when the condition is TRUE." << endl;
    }
    else {
        cout << "Statement when the condition is FALSE." << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}