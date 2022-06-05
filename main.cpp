#include <iostream>
using namespace std;
int main() {
    int n, a, b, c;
    cout << "enter number";
    cin >> n;

    a = n % 10; //yekan
    n = n / 10;
    b = n % 10;//dahegan
    c = n / 10;//sadgan

    switch (c)
    {
        case 1:
            cout << "one hundred ";
            break;

        case 2:
            cout << "tow hundred ";
            break;
        case 3:
            cout << "three hundrerd ";
            break;
        case 4:
            cout << "four hundred ";
            break;
        case 5:
            cout << "five hundred ";
            break;
        case 6:
            cout << "six hundred ";
            break;
        case 7:
            cout << "seven hundred ";
            break;
        case 8:
            cout << "eghit hundred ";
            break;
        case 9:
            cout << "nine hundred ";
            break;
    }
    switch (b)
    {

        case 2:
            cout << "twenty ";
            break;
        case 3:
            cout << "thirty ";
            break;
        case 4:
            cout << "forty ";
            break;
        case 5:
            cout << "fifty ";
            break;
        case 6:
            cout << "sixty ";
            break;
        case 7:
            cout << "seventy ";
            break;
        case 8:
            cout << "eighty ";
            break;
        case 9:
            cout << "ninety ";
            break;

    }

if (b==1)
{

}
    switch (a)
    {
        case 1:
            cout << "one ";
            break;

        case 2:
            cout << "tow ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eghit ";
            break;
        case 9:
            cout << "nine ";
            break;
    }














    return 0;
}
