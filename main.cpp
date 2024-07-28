#include "menu.h"
#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Imprimir texto grande
    cout << "\t\tV       V    EEEEE   TTTTT   EEEEE   RRRR    III    N   N   AAAAA   RRRR    III    AAAAA\n";
    cout << "\t\t V     V     E         T     E       R   R    I     NN  N   A   A   R   R    I     A   A\n";
    cout << "\t\t  V   V      EEEE      T     EEEE    RRRR     I     N N N   AAAAA   RRRR     I     AAAAA\n";
    cout << "\t\t   V V       E         T     E       R  R     I     N   N   A   A   R  R     I     A   A\n";
    cout << "\t\t    V        EEEEE     T     EEEEE   R   R   III    N   N   A   A   R   R   III    A   A\n";
    
    // Espacio entre texto y huella
    cout << endl;
    SetConsoleTextAttribute(hConsole,6);
    // Imprimir huella de perro
    cout << "\t\t\t\t\tNNNNNNNNNNKxlccxXNNNNNX0d::d0XNNNNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNNNXx;.   .;kXNXKo'    .l0NNNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNNXx.       .d0Oc        ;0NNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNN0;         ;l,.         oXNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNNO'         ';..         cXNNNNNNN\n";
    cout << "\t\t\t\t\tNNNXXXNK:         :dc.        .dXXXXXNNN\n";
    cout << "\t\t\t\t\tNKo;'';dx,       ,OX0o.      .cOd;'';o0N\n";
    cout << "\t\t\t\t\t0:      :ko,...,o0NNNXkc....:x0c      :0\n";
    cout << "\t\t\t\t\td.      .xNX0kxollc::coodxOKXNx.      .d\n";
    cout << "\t\t\t\t\td.      .xKkc'.          .,d0Nx.      .d\n";
    cout << "\t\t\t\t\t0:      cx:.                .dOc      c0\n";
    cout << "\t\t\t\t\tNKd:,':do'                    :kx:,':dKN\n";
    cout << "\t\t\t\t\tNNNNXXXd.                      :0NXXXNNN\n";
    cout << "\t\t\t\t\tNNNNNN0,                       .dNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNO'                       .oNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNKc       .;coodl;.       ,ONNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNNKd,..':x0XNNNNNN0xc,..'cONNNNNNNN\n";
    cout << "\t\t\t\t\tNNNNNNNNNX00KNNNNNNNNNNNNNK0OKXNNNNNNNNN\n";
    cout<<endl<<endl<<endl;
    SetConsoleTextAttribute(hConsole,7);
    system("pause");
    
    Menu();
    return 0;
}
