#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double T;
    double F;

    // TODO: [Step 1] Input a Celcius degree as a "double" type value
cout << "give temp in c";
cin >> T;
F = (9/5.0) * T + 32;
    // TODO: [Step 2] Convert it to a Fahrenheit degree using the Formula F = (9 / 5.0)* C + 32

    cout << setprecision(2) << fixed;
    // TODO: [Step 3] Print the converted Fahrenheit
cout << F;
    return 0;
}
