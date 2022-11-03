// ***************************** VARIABLES ************************************
// Global Variables - declared outside of the "int main()" function.
//                  - they are usable anywhere and within the code blocks.
// Local Variables  - declared within a specific code block and is accessed
//                    and used only within the said block.
// *****************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

char globalVar[14] = "I'm globalVar";

int main() {
    char localVar[13] = "I'm localVar";
    
    if (true) {
        char subVar[11] = "I'm subVar";
        cout << globalVar << endl;
        cout << localVar << endl;
        cout << subVar << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}