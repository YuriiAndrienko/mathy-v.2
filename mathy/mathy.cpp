/*square of the triangle*/
#include<cmath>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    cout << "\n\t\t\t\t\t\t\t\t\t";
    cout << "mathy";
    Sleep(100);
    for (int i = 0; i < 5; i++) {
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");
        system("color 8");
        system("color 9");
    }
    system("cls");
    system("color 7");

    //progress bar
    setlocale(LC_ALL, ".1251");
    setlocale(LC_ALL, ".866");
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
    for (int i = 0; i < 40; i++) {
        Sleep(200);
        cout << char(219);
    }
    char enter;
    system("cls");
    cout << "\n\t\t\t\t\t\t\t\tPress any symbol and enter -> ";
    cin >> enter;
    cout << " a";
    if (enter == enter) {
        system("cls");
    }
    cout << "\n\t\t\t\t\t\t\t\t    We're glad to see you in our program";
    cout << "\n\t\t\t\t\t\tpick any of these formulas(this formulas calculate square of the triangle):\n\n";

    //formulas
    cout << "\t\t\t\t\t\t\t\tFormula 1 -> " << char(251) << "(p*(p-a)*(p-b)*(p-c))\n";
    cout << "\t\t\t\t\t\t\t\tFormula 2 -> S = 1/2*a*b*sinY\n";
    cout << "\t\t\t\t\t\t\t\tFormula 3 -> S = a*b*c/4*R\n";
    cout << "\t\t\t\t\t\t\t\tFormula 4 -> S = p*r\n";
    cout << "\t\t\t\t\t\t\t\tFormula 5 -> S = 1/2*b*h\n\n";
    cout << "\t\t\t\t\tChoose formula (to choose formula enter the number of the formula you want) -> ";
    int chc1;
    cin >> chc1;
    system("cls");

    //solving
    switch (chc1)
    {
    case 1:
        double p1, b1, a1, c1, m1, x1, l1;
        char con1;
        cout << "\n\t\t\t\t\t\t\t\tenter semi - perimeter (cm) -> ";
        cin >> p1;
        cout << "\n\t\t\t\t\t\t\t\tenter side a (cm) -> ";
        cin >> a1;
        cout << "\n\t\t\t\t\t\t\t\tenter side b (cm) -> ";
        cin >> b1;
        cout << "\n\t\t\t\t\t\t\t\tenter side c (cm) -> ";
        cin >> c1;

        m1 = p1 - a1;
        x1 = p1 - b1;
        l1 = p1 - c1;

        double S1;
        S1 = sqrt(p1 * m1 * x1 * l1);
        cout << "\n\t\t\t\t\t\t\t\tsquare of your triangle is = " << S1 << "square centimeters\n";
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con1;
        break;
    case 2:
        cout << "\n\t\t\t\t\t\t\t\tenter angle (in degrees) -> ";
        double a2, b2, Sin2, S2, angle2;
        char con2;
        cin >> angle2;
        cout << "\n\t\t\t\t\t\t\t\tenter side a (cm) -> ";
        cin >> a2;
        cout << "\n\t\t\t\t\t\t\t\tenter side b (cm) -> ";
        cin >> b2;

        Sin2 = sin(angle2 * 3.14159265 / 180);
        S2 = 0.5 * a2 * b2 * Sin2;
        cout << "\n\t\t\t\t\t\t\t\tsquare of your triangle is = " << S2 << "square centimeters\n";
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con2;
        break;
    case 3:
        cout << "\n\t\t\t\t\t\t\t\tenter side a (cm) -> ";
        double S3, a3, b3, c3, R3;
        char con3;
        cin >> a3;
        cout << "\n\t\t\t\t\t\t\t\tenter side b (cm) -> ";
        cin >> b3;
        cout << "\n\t\t\t\t\t\t\t\tenter side c (cm) -> ";
        cin >> c3;
        cout << "\n\t\t\t\t\t\t\t\tEnter the radius of the circumscribed circle (cm) -> ";
        cin >> R3;

        S3 = (a3 * b3 * c3) / (4 * R3);
        cout << "\n\t\t\t\t\t\t\t\tsquare of your triangle is = " << S3 << "square centimeters\n";
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con3;
        break;
    case 4:
        cout << "\n\t\t\t\t\t\t\t\tenter semi - perimeter (cm) -> ";
        double S4, p4, r4;
        char con4;
        cin >> p4;
        cout << "\n\t\t\t\t\t\t\t\tEnter the radius of the circle inscribed in the triangle (cm) -> ";
        cin >> r4;

        S4 = p4 * r4;
        cout << "\n\t\t\t\t\t\t\t\tsquare of your triangle is = " << S4 << "square centimeters\n";
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con4;
        break;
    case 5:
        cout << "\n\t\t\t\t\t\t\t\tEnter the base of the triangle (cm) -> ";
        double a5, h5, S5;
        char con5;
        cin >> a5;
        cout << "\n\t\t\t\t\t\t\t\tEnter the length of the height drawn to this base (cm) -> ";
        cin >> h5;

        S5 = 0.5 * a5 * h5;
        cout << "\n\t\t\t\t\t\t\t\tsquare of your triangle is = " << S5 << "square centimeters\n"; 
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con5;
        break;
    case 6:
        cout << "\n\t\t\t\t\t\t\t\tbye:)";
        break;
    default:
        char con6;
        cout << "\n\t\t\t\t\t\t\t\tyou entered the wrong number please try again...";
        cout << "\n\t\t\t\t\t\t\t\tenter any symbol to continue -> ";
        cin >> con6;
        break;
    }
    system("cls");
    if (chc1 < 6) {
        cout << "\n\t\t\t\t\t\t\t\tbye:)";
        for (int i = 0; i < 5; i++) {
            system("color 1");
            system("color 2");
            system("color 3");
            system("color 4");
            system("color 5");
            system("color 6");
            system("color 7");
            system("color 8");
            system("color 9");
        }
        system("cls");
    }
    system("color 7");
}