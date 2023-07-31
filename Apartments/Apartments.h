#ifndef APARTMENTS_H_INCLUDED
#define APARTMENTS_H_INCLUDED

struct apartment{
    int Kod;
    char Raion[20];
    char Adres[20];
    int Kkomnat;
    int Etaj;
    int Price;
};
extern int nA;
extern apartment a[100];

struct rent{
     int Kod;
    char Fam[20];
    char Name[20];
    int Day;
    int Month;
    int Year;
    int SrokA;
};
extern int nR;
extern rent r[100];


void menu();
void readA();
void readR();
void showA();
void showR();
void addA();
void rewriteInfoA();
void addR();
void rewriteInfoR();
void deleteInfoA();
void deleteInfoR();
void RedactA();
void RedactR();
void Srok();
void Spros();
void Sapartments();
int mouse();

void Srprice();


#endif // APARTMENTS_H_INCLUDED
