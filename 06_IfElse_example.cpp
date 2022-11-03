// *************************** CONDITIONALS ***********************************
// Else Statement - part of an IF statement that present an alternative execution.
//                  when IF statement fail.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int grade = 45;
    
    if (grade >= 50) {
        cout << "Congratulations! You've passed!" << endl;
    }
    else {
        cout << "Sorry. You've failed!" << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}