#include <iostream>
#include <conio.h>
#include "algorhythms/eng2noki.cpp"
#include "algorhythms/noki2eng.cpp"


using namespace std;

int main(){
    system("cls");
    cout << "** Nokicode Translator **\n    *  By Kodenith  *" << endl;
    cout << "1. Nokicode to English\n2. English to Nokicode\n3. Exit" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    system("cls");
    if(choice == 3){
        return 0;
    }
    cout << "-Translation-" << endl;
    switch (choice){
        case 1:
            cout << noki2eng() << endl << endl;
            cout << "Press any key to continue...";
            getch();
            main();
            break;
        case 2:
            cout << eng2noki() << endl << endl;
            cout << "Press any key to continue...";
            getch();
            main();
            break;
        default:
            main();
            break;
    };
};