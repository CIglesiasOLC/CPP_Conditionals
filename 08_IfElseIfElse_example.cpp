// *************************** CONDITIONALS ***********************************
// Else if - part of IF statements that extends possibilitiesn to cover other
//           scenarios not original under the original IF.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int grade = 0;
    
    if (grade >= 50) {
        cout << "Congratulations! You've passed!" << endl;
    }
    else if (grade < 0) {
        cout << "You've entered an invalid grade." << endl;
    }
    else {
        cout << "Sorry. You've failed!" << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}