#include <iostream>
#include "Tank.h"
using namespace std;
int main()
{
    bool maincycle = true;
    int choise;
    int number;
    float x, y, speed, range, azimut;
    cout << "Initialize tank with: Number" << endl;
    cin >> number;
    cout << "X cordinate" << endl;
    cin >> x;
    cout << "Y cordinate" << endl;
    cin >> y;
    Tank t64(number,x,y);
    while (maincycle)
    {
        cout << endl << "Chose Order. 1 - Go to Point at speed. 2 - Shoot at range and azimut. 3 - Reload. 4 - Make smokescreen. 5 - Exit." << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "X cordinate in meters" << endl;
            cin >> x;
            cout << "Y cordinate in meters" << endl;
            cin >> y;
            cout << "Speed" << endl;
            cin >> speed;
            cout << "Ordering tank " << number << " to go to cordinates " << x << " " << y  << "at the speed of " << speed << " kmph" << endl << endl;
            t64.GoToPoint(x, y, speed);
            break;
        case 2:
            cout << "Range in meters" << endl;
            cin >> range;
            cout << "Azimut in degrees" << endl;
            cin >> azimut;
            cout << "Ordering tank " << number << " to shoot at " << range << " meters at the azimut of " << azimut << " degrees" << endl << endl;
            t64.ShootAt(range, azimut);
            break;
        case 3:
            cout << "Ordering tank " << number << " to reload " << endl << endl;
            t64.Reload();
            break;
        case 4:
            cout << "Azimut in degrees" << endl << endl;
            cin >> azimut;
            cout << "Ordering tank " << number << " to make smokescreen at " << azimut << " degree azimut" << endl << endl;
            t64.ShootSmoke(azimut);
            break;
        case 5:
            maincycle = false;
            break;
        default:
            cout << "Undefined order" << endl << endl;
            break;
        }
    }

}

