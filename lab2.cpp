#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    double catet, gipotenuza;

    cout << "Enter the leg catet: ";
    cin >> catet;
    cout << "Enter the leg gipotenuza: ";
    cin >> gipotenuza;

    if (catet <= 0 || gipotenuza <= 0 || catet >= gipotenuza) {
        cout << "Incorrect data. There must be a catet > 0 і < gipotenuza." << endl;
        return 1;
    }

    double catet2 = sqrt(pow(gipotenuza, 2) - pow(catet, 2));

    double area = (catet * catet2) / 2;

    cout << "The leg second catet: " << catet2 << endl;
    cout << "Area of the triangle: " << area << endl;

    return 0;
}
