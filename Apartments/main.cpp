#include <iostream>
#include <conio.h>
#include "Apartments.h"
#include <windows.h>
using namespace std;

void setcolor(int text, int backG=0);

int main()
{
    int ch;
    do{
    menu();

    readA();
    readR();
    ch = mouse();
    switch(ch){
    case 1:{
        showA();
        system("pause");
        system("CLS");
        break;
    }
    case 2:{
        showR();
        system("pause");
        system("CLS");
        break;
    }
     case 3:{
         addA();
        system("pause");
        system("CLS");
        break;
    }
     case 4:{
         addR();
        system("pause");
        system("CLS");
        break;
    }
    case 5:{
        deleteInfoA();
        system("pause");
        system("CLS");
        break;
    }
     case 6:{
         deleteInfoR();
        system("pause");
        system("CLS");
        break;
    }
    case 7:{
        RedactA();
        system("pause");
        system("CLS");
        break;
    }
    case 8:{
        RedactR();
        system("pause");
        system("CLS");
        break;
    }
    case 9:{
        Srok();
        system("pause");
        system("CLS");
        break;
    }
    case 10:{
        Sapartments();
        system("pause");
        system("CLS");
        break;
    }
    case 11:{
        Spros();
        system("pause");
        system("CLS");
        break;
    }
    case 12:{
        Srprice();
        system("pause");
        system("CLS");
        break;
    }
    case 13: {
        setcolor(12,0);
     cout << "Выход...";
     setcolor(14,0);
     break;
    }default: system("CLS");
    }
    }while(ch!=13);
    return 0;
}

