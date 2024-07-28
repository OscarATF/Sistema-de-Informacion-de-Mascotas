#include "menu.h"
#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Imprimir texto grande
    cout << "\t\t*       *    *****   *****   *****   ****    ***    *   *   *****   ****    ***    *****\n";
    cout << "\t\t *     *     *         *     *       *   *    *     **  *   *   *   *   *    *     *   *\n";
    cout << "\t\t  *   *      *****     *     *****   ****     *     * * *   *****   ****     *     *****\n";
    cout << "\t\t   * *       *         *     *       *  *     *     *   *   *   *   *  *     *     *   *\n";
    cout << "\t\t    *        *****     *     *****   *   *   ***    *   *   *   *   *   *   ***    *   *\n";
    
    // Espacio entre texto y huella
    cout << endl;
    SetConsoleTextAttribute(hConsole,6);
    // Imprimir huella de perro
    cout << "\t\t\t\t\t........................................\n";
    cout << "\t\t\t\t\t............   .........    ............\n";
    cout << "\t\t\t\t\t..........       .....        ..........\n";
    cout << "\t\t\t\t\t.........         ...          .........\n";
    cout << "\t\t\t\t\t.........         ...          .........\n";
    cout << "\t\t\t\t\t.........         ...          .........\n";
    cout << "\t\t\t\t\t..........       .....        ..........\n";
    cout << "\t\t\t\t\t...     .........................    ...\n";
    cout << "\t\t\t\t\t..      ........................      ..\n";
    cout << "\t\t\t\t\t..      .......          .......      ..\n";
    cout << "\t\t\t\t\t..      ....                ....      ..\n";
    cout << "\t\t\t\t\t..........                    ..........\n";
    cout << "\t\t\t\t\t.........                      .........\n";
    cout << "\t\t\t\t\t........                       .........\n";
    cout << "\t\t\t\t\t........                       .........\n";
    cout << "\t\t\t\t\t........       .........       .........\n";
    cout << "\t\t\t\t\t........................................\n";
    cout << "\t\t\t\t\t........................................\n";
    cout<<endl<<endl<<endl;
    SetConsoleTextAttribute(hConsole,7);
    system("pause");
    
    Menu();
    return 0;
}
