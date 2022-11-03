// *************************** NESTING OF CONDITIONALS *********************************** //
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    string gender = "hjxfhjfd";
    short mood = 2; //1: happy, 2: sad; 3: angry

    if (gender == "male") {
        if (mood == 1) {
            cout << "He is happy." << endl;
        }
        else if (mood >= 2) {
            cout << "He is sad." << endl;
        }
        else if (mood == 3) {
            cout << "He is angry." << endl;
        }
        else {
            cout << "His emotion cannot be recognized." << endl;
        }
    }
    else if (gender == "female") {
        switch(mood) {
            case 1:
                cout << "She is happy." << endl;
                break;
            case 2:
                cout << "She is sad." << endl;
                break;
            case 3:
                cout << "She is angry." << endl;
                break;
            default:
                cout << "Her emotion cannot be recognized." << endl;
        }
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}