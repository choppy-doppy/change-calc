#include <iostream>
#include <cmath>

using namespace std;

int main () {
    float total;
    float cash;

    cout << "please input total" << endl;

    cin >> total;

    cout << "input cash given" << endl;

    cin >> cash;

    float changeDue = cash - total;

    cout << "change due: $" << changeDue << endl;

    float quarterVal = 0.25;
    float dimeVal = 0.10;
    float nickelVal = 0.05;
    // they killed pennies :(

    float quarterDue = changeDue / quarterVal;
    float dimeDue = changeDue / dimeVal;
    float nickelDue = changeDue / nickelVal;
    

}