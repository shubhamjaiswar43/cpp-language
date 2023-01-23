#include <iostream>
#include<cmath>
using namespace std;
struct coordinate
{
    int longitudeDegree;
    int longitudeMinute;
    int longitudeSecond;
    int latitudeDegree;
    int latitudeMinute;
    int latitudeSecond;
};
void set(struct coordinate *a)
{
    cout << "Enter the longitude Degree" << endl;
    cin >> a->longitudeDegree;
    cout << "Enter the longitude Minute" << endl;
    cin >> (a->longitudeMinute);
    cout << "Enter the longitude Second" << endl;
    cin >> (a->longitudeSecond);
    cout << "Enter the latitude Degree" << endl;
    cin >> (a->latitudeDegree);
    cout << "Enter the latitude Minute" << endl;
    cin >> (a->latitudeMinute);
    cout << "Enter the latitude Second" << endl;
    cin >> (a->latitudeSecond);
    cout << endl
         << endl;
}
void print(struct coordinate *a)
{
    cout << "longitude Coordinate:" << (a->longitudeDegree) << "(degree) " << (a->longitudeMinute) << "' " << (a->longitudeSecond) << "\" " << endl;
    cout << "latitude Coordinate:" << (a->latitudeDegree) << "(degree) " << (a->latitudeMinute) << "' " << (a->latitudeSecond) << "\" " << endl;
    cout << endl;
}
int main()
{
    struct coordinate c1;
    struct coordinate c2;

    cout << "Enter the first coordinate" << endl;
    set(&c1);

    cout << "Enter the second coordinate" << endl;
    set(&c2);

    cout << "The first coordinate" << endl;
    print(&c1);

    cout << "The second coordinate" << endl;
    print(&c2);

    return 0;
}