#include <iostream>
using namespace std;

int main ()
{
    int s = 8, t = 12, u;

    u = s;
    s = t;
    t = u;

    cout << "Menukarkan dua variable dengan variable sementara " << endl;
    cout << "S: " << s << endl << "T: " << t << endl;


    int k = 14, l = 8;

    k = k+l; //22
    l = k-l; //14
    k = k-l; //8

    cout << "\nMenukarkan dua variable tanpa variable sementara " << endl;
    cout <<  "K: " << k << endl << "L: " << l << endl;

    return 0;
}
