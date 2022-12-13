#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main () {
    g1:
    cout << "---------------\n"
         << "moznosti: \n"
         << "1.komparator \n"
         << "2.prohazovac hodnot \n"
         << "3.umocnovac \n"
         << "4.prohazovac v.2 \n"
         << "5.overovac delitelnosti \n"
         << "---------------\n";

    int moznosti;
    cin >> moznosti;
    cout << "\n";
    switch (moznosti) {
        {case 1:
            cout << "KOMPARATOR\n";
            int x;
            int y;
            int z;

            cout << "zadejte prvni cislo\n";
            cin >> x;
            cout << "zadejte druhy cislo\n";
            cin >> y;
            cout << "zadejte treti cislo\n";
            cin >> z;

            if (x>=y && x>=z){
                cout << "nejvetsi cislo je: " << x << "\n";
            }
            if (y>=x && y>=z){
                cout << "nejvetsi cislo je: " << y << "\n";
            }
            if (z>=x && z>=y){
                cout << "nejvetsi cislo je: " << z << "\n";
            }
            Sleep(3500);
            goto g1;}

            {case 2:
                cout << "PROHAZOVAC HODNOT\n";
                int x;
                int y;
                int z;

                cout << "Zadejte prvni cislo\n";
                cin >> x;
                cout << "Zadejte druhe cislo\n";
                cin >> y;

                z = x;
                x = y;
                y = z;

                cout << "prvni cislo je: " << x << "\n";
                cout << "druhy cislo je: " << y << "\n";

                Sleep(3500);
                goto g1;}

            {case 3:
                cout << "UMOCNOVAC\n";
                int cislo;
                int exponent;

                cout << "zadejte cislo\n";
                cin >> cislo;
                cout << "zadejte exponent\n";
                cin >> exponent;

                double vysledek = pow(cislo,exponent);

                cout << "vysledek: " << vysledek << "\n";

                Sleep(3500);
                goto g1;}

            {case 4:
                cout << "PROHAZOVAC V.2\n";
                int x;
                int y;

                cout << "Zadejte prvni cislo\n";
                cin >> x;
                cout << "Zadejte druhe cislo\n";
                cin >> y;

                x=x+y;
                y=x-y;
                x=x-y;

                cout << "prvni cislo je: " << x << "\n";
                cout << "druhy cislo je: " << y << "\n";

                Sleep(3500);
                goto g1;}

            {case 5:
                cout << "OVEROVAC DELITELNOSTI\n";
                int cislo;

                cout << "zadejte cislo\n";
                cin >> cislo;
                if (cislo%2==0 && cislo%5==0){
                    cout << "cislo je delitelne dvema i peti\n";
                }
                else {
                    cout << "cislo neni delitelne dvema i peti\n";
                }
                Sleep(3500);
                goto g1;}



        }



        }