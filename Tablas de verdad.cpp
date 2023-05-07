#include <iostream>
#include <windows.h>

using namespace std;
//variables
int proposiciones, sino, p = 0;

void pausarylimpiar()
{
    system("pause");
    system("cls");
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    gotoxy(16, 10); cout << "#####   #####  #######  #     #  #           #  #######  #     #  #####  ######    #####" << endl;
    gotoxy(16, 11); cout << "#    #   ###   #        ##    #   #         #   #        ##    #   ###   #     #  #     #" << endl;
    gotoxy(16, 12); cout << "#    #   ###   #####    # #   #    #       #    #####    # #   #   ###   #     #  #     #" << endl;
    gotoxy(16, 13); cout << "#####    ###   #####    #  #  #     #     #     #####    #  #  #   ###   #     #  #     #" << endl;
    gotoxy(16, 14); cout << "#    #   ###   #        #   # #      #   #      #        #   # #   ###   #     #  #     #" << endl;
    gotoxy(16, 15); cout << "#    #   ###   #        #    ##       # #       #        #    ##   ###   #     #  #     #" << endl;
    gotoxy(16, 16); cout << "#####   #####  #######  #     #        #        #######  #     #  #####  ######    #####" << endl;
    pausarylimpiar();
    cout << "Puede trabajar de 1 a 4 proposiociones" << endl;
    cout << "Con cuantas proposiciones desea trabajar?" << endl;
    cin >> proposiciones;
    pausarylimpiar();
    switch (proposiciones)
    {
    case 1:
        cout << "Trabajara con la proposicion 'p'" << endl;
        cout << "Desea trabajar la porposicion con negacion?" << endl;
        cout << "1 = Si o 2 = No" << endl;
        cin >> sino;
        pausarylimpiar();
        if (sino == 1)
        {
            for (int pp = 1; pp < 2; pp++)
            {
                cout << p << endl;
                cout << p + 1 <<endl;
            }
        }
        else
        {
            cout << p + 1 << endl;
            cout << p << endl;
        }
        break;
    case 2:
        cout << "con que operador logico desea trabajar?" << endl;
        cout << "1. conjuncion" << endl;
        cout << "2. disyuncion inclusiva" << endl;
        cout << "3. disyuncion exclusiva" << endl;
        cout << "4. condicional" << endl;
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }
}