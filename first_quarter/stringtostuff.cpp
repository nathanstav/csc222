#include <iostream>
#include <string>
using namespace std;

string stringtoupper(string x) {
    string toreturn = "";
    for (int i = 0; i < x.length(); i++) {
        if (x[i] > 96)
            x[i] = x[i] - 32;

        toreturn += x[i];

    }

    return toreturn;
}

string stringtolower(string x) {
    string toreturn = "";
    for (int i = 0; i < x.length(); i++) {
        if (x[i] < 96)
            x[i] = x[i] + 32;

        toreturn += x[i];
    }

    return toreturn;
}


int main() {

    string lowerorupper;
    cout << "Uppercase or lowercase? (U/L):" << endl;
    cin >> lowerorupper;
    if (stringtoupper(lowerorupper) == "U") {
        string upper;
        cout << "Enter a string to convert to uppercase:" << endl;
        cin >> upper;
        cout << stringtoupper(upper) << endl;
    }

    else if (stringtoupper(lowerorupper) == "L") {
        string lower;
        cout << "Enter a string to convert to lowercase:" << endl;
        cin >> lower;
        cout << stringtolower(lower) << endl;
    }

    else {
        cout << "Invalid input. You were supposed to enter U or L." << endl;
    }

    return 0;    
}
