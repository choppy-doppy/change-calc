#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double total;
    double cash;

    cout << "please input total" << endl;

    cin >> total;

    cout << "input cash given" << endl;

    cin >> cash;

    double changeDue = cash - total;

    if (changeDue == 0) {
        cout << "no change due" << endl;
        return 0;
    } else if (changeDue < 0)
        cout << "shotgun" << endl;

    cout << "change due: $" << changeDue << endl;

    double quarterVal = 0.25;
    double dimeVal = 0.10;
    double nickelVal = 0.05;
    // they killed pennies :(

    int quartersDue = changeDue / quarterVal;
    int dimesDue = (changeDue - quarterVal * quartersDue) / dimeVal;
    int nickelsDue = (changeDue - quarterVal * quartersDue - dimeVal * dimesDue) / nickelVal;

    cout <<"Quarters: "<< quartersDue <<" Dimes: "<< dimesDue <<" Nickels: "<< nickelsDue << endl;

    system("pause");
}


