/* Eugene Githinji
bse-01-0056/2025
get the values of mathematical functions
*/

#include <iostream>
using namespace std;

int main() {
    int time, wage;
    double gross_pay, taxes, net_pay;

    cout << "Enter hours worked in a week: ";
    cin >> time;

    cout << "Enter the hourly wage in dollars: ";
    cin >> wage;

    // Calculate gross pay
    if (time > 40) {
        // Overtime: time and a half for hours exceeding 40
        gross_pay = (40 * wage) + ((time - 40) * 1.5 * wage);
    } else {
        // No overtime
        gross_pay = time * wage;
    }

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Output
    cout << "Gross Pay: $" << gross_pay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << net_pay << endl;

    return 0;
}
