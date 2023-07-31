#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>
#include "Apartments.h"

int nR,nA;
apartment a[100];
rent r[100];
using namespace std;

void setcolor(int text, int backG=0){
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(color,(WORD)((backG << 4)| text));
}

int mouse(){


    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD InputRecord;
    DWORD Events;
    COORD coord;


    DWORD prev_mode;
    GetConsoleMode(hin, &prev_mode);
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS | (prev_mode & ~ENABLE_QUICK_EDIT_MODE));

    SetConsoleMode(hin, ENABLE_MOUSE_INPUT);

    while (true)
    {
        ReadConsoleInput(hin, &InputRecord, 1, &Events);
        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
            coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;
            //cout << "left - X" << coord.X << ", Y = " << coord.Y << endl;

            if(coord.X>=45 and coord.X<=72 and coord.Y==2){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 1;


            }else if(coord.X>=46 and coord.X<=71 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 2;

            }else if(coord.X>=37 and coord.X<=80 and coord.Y==4){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 3;

            }else if(coord.X>=38 and coord.X<=79 and coord.Y==5){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 4;

            }else if(coord.X>=25 and coord.X<=93 and coord.Y==6){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 5;


            }else if(coord.X>=25 and coord.X<=93 and coord.Y==7){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 6;

            }else if(coord.X>=22 and coord.X<=96 and coord.Y==8){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 7;

            }else if(coord.X>=22 and coord.X<=96 and coord.Y==9){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 8;

            }else if(coord.X>=17 and coord.X<=101 and coord.Y==10){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 9;


            }else if(coord.X>=24 and coord.X<=93 and coord.Y==11){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 10;

            }else if(coord.X>=35 and coord.X<=81 and coord.Y==12){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 11;

            }else if(coord.X>=28 and coord.X<=89 and coord.Y==13){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 12;

            }else if(coord.X>=53 and coord.X<=63 and coord.Y==14){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 13;

            }

        }       else if (InputRecord.Event.MouseEvent.dwButtonState == RIGHTMOST_BUTTON_PRESSED) // ������ ������
return 0;


    }

    return 0;

}

int swredA(){


    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD InputRecord;
    DWORD Events;
    COORD coord;


    DWORD prev_mode;
    GetConsoleMode(hin, &prev_mode);
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS | (prev_mode & ~ENABLE_QUICK_EDIT_MODE));

    SetConsoleMode(hin, ENABLE_MOUSE_INPUT);

    while (true)
    {
        ReadConsoleInput(hin, &InputRecord, 1, &Events);

        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED){
            coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
            coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;
           // cout << "left - X" << coord.X << ", Y = " << coord.Y << endl;

            if(coord.X>=7 and coord.X<=17 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 1;


            }else if(coord.X>=20 and coord.X<=30 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 2;

            }else if(coord.X>=33 and coord.X<=55 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 3;

            }else if(coord.X>=58 and coord.X<=67 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 4;

            }else if(coord.X>=70 and coord.X<=79 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 5;


            }else if(coord.X>=79 and coord.X<=88 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 6;

            }else if(coord.X>=82 and coord.X<=90 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 7;

            }else if(coord.X>=93 and coord.X<=104 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 0;

            }

        }else if (InputRecord.Event.MouseEvent.dwButtonState == RIGHTMOST_BUTTON_PRESSED)
return 0;

    }

    return 0;

}

int swredR(){


    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD InputRecord;
    DWORD Events;
    COORD coord;


    DWORD prev_mode;
    GetConsoleMode(hin, &prev_mode);
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS | (prev_mode & ~ENABLE_QUICK_EDIT_MODE));

    SetConsoleMode(hin, ENABLE_MOUSE_INPUT);

    while (true)
    {
        ReadConsoleInput(hin, &InputRecord, 1, &Events);

        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
            coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;
            //cout << "left - X" << coord.X << ", Y = " << coord.Y << endl;

            if(coord.X>5 and coord.X<=17 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 1;


            }else if(coord.X>=20 and coord.X<=28 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 2;

            }else if(coord.X>=31 and coord.X<=40 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 3;

            }else if(coord.X>=43 and coord.X<=53 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 4;

            }else if(coord.X>=56 and coord.X<=64 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 5;


            }else if(coord.X>=67 and coord.X<=83 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 6;

            }else if(coord.X>=86 and coord.X<=94 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 7;

            }else if(coord.X>=97 and coord.X<=108 and coord.Y==3){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 0;

            }

        }else if (InputRecord.Event.MouseEvent.dwButtonState == RIGHTMOST_BUTTON_PRESSED)
return 0;

    }

    return 0;

}

int swopenFile(){


    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD InputRecord;
    DWORD Events;
    COORD coord;


    DWORD prev_mode;
    GetConsoleMode(hin, &prev_mode);
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS | (prev_mode & ~ENABLE_QUICK_EDIT_MODE));

    SetConsoleMode(hin, ENABLE_MOUSE_INPUT);

    while (true)
    {
        ReadConsoleInput(hin, &InputRecord, 1, &Events);

        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
            coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;
            //cout << "left - X" << coord.X << ", Y = " << coord.Y << endl;

            if(coord.X>60 and coord.X<=67 and coord.Y==2){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 1;


            }else if(coord.X>=71 and coord.X<=79 and coord.Y==2){
                prev_mode = 487;
                SetConsoleMode(hin,prev_mode);
                return 0;

            }

        }else if (InputRecord.Event.MouseEvent.dwButtonState == RIGHTMOST_BUTTON_PRESSED)
return 0;

    }

    return 0;

}

void  menu(){
    setlocale(LC_ALL, "Russian");
    setcolor(14,0);
    cout<<"\n\n";
    cout<<internal<<setw(73)<<"<< ���������� � ��������� >>"<<endl;
    cout<<setw(72)<<"<< ���������� �� ������ >>"<<endl;
    cout<<setw(81)<<"<< ���������� ���������� � ����� �������� >>"<<endl;
    cout<<setw(80)<<"<< ���������� ���������� � ����� ������ >>"<<endl;
     cout<<setw(94)<<"<< �������� ���������� � ��������, ��� ������� ������ � ���������� >>"<<endl;
     cout<<setw(94)<<"<< �������� ���������� �� ������, ��� ������� ������ � ����������  >>"<<endl;
     cout<<setw(97)<<"<< �������������� ���������� � ��������, ��� ������� ������ � ���������� >>"<<endl;
     cout<<setw(97)<<"<< �������������� ���������� �� ������, ��� ������� ������ � ����������  >>"<<endl;
     cout<<setw(102)<<"<< �������� ���������� �����, ����������� ���������� �� �������,���� ������� ����� >>"<<endl;
     cout<<setw(94)<<"<< ������ ��������� ������� � ������� ����������� ���������� ������ >>"<<endl;
     cout<<setw(82)<<"<< ��������, ������������ ���������� ������� >>"<<endl;
     cout<<setw(90)<<"<< ������� ���� ���� ������� � ��������� ����������� ������ >>"<<endl;
     setcolor(12,0);
     cout<<setw(64)<<"<< ����� >>"<<endl;
     setcolor(14,0);
}

void readA(){
    ifstream f("Apartment.txt");
    if(f){
    if(f.peek()!=EOF){
    int i=0;
    while(!f.eof()){
        f>>a[i].Kod>>a[i].Raion >> a[i].Adres >>  a[i].Kkomnat>>a[i].Etaj >> a[i].Price;
        i++;
    }
    nA=i-1;
    f.close();
    }else{
        setcolor(12,0);
cout <<"���� � ����������� � ��������� ������."<< endl;
}
    }else{
        setcolor(12,0);
cout <<"���� � ����������� � ��������� �� ������."<< endl;
}
setcolor(14,0);

}

void readR(){
    ifstream g("Rent.txt");
    int i=0;
    if(g){
    if(g.peek()!=EOF){
    while(!g.eof()){
        g>>r[i].Kod>>r[i].Fam >> r[i].Name >>  r[i].Day>>r[i].Month >> r[i].Year >> r[i].SrokA;
        i++;
    }
    nR=i-1;
    g.close();
    }else{
        setcolor(12,0);
         cout <<"���� � ����������� �� ������ ������."<< endl;
    }
    }else{
        setcolor(12,0);
         cout <<"���� � ����������� �� ������ �� ������."<< endl;
}
setcolor(14,0);

}

void showA(){
setcolor(0,15);

    cout<<endl<<"     ���   " <<"       �����     " <<  "              �����    "<< "          ���-�� " <<  "  ���� "<<"    ����    "<<endl;
 cout<<"  ��������                                                   ������                    "<<endl;


   for(int i=0;i<nA;i++){
    if(i%2==0) setcolor(0,8);
   else setcolor(0,7);
 cout <<left<<"     "<<setw(11)<<a[i].Kod <<setw(19)<< a[i].Raion <<setw(28) <<a[i].Adres <<setw(8)<<a[i].Kkomnat <<setw(8)<<a[i].Etaj <<a[i].Price<<endl;
   }
   setcolor(14,0);
}

void showR(){
    setcolor(0,19);
        cout<<endl<<" ��� ��������   " <<"   �������    " <<  "      ���     "<< "     ���� ������" <<  "    ���� ������ "<<endl;

    for(int i=0;i<nR;i++){
            if(i%2==0) setcolor(0,7);
            else setcolor(7,1);
 cout <<left<<"      "<<setw(12)<<r[i].Kod  <<setw(15)<< r[i].Fam <<setw(16) <<r[i].Name <<setw(2)<< r[i].Day<<"/"<<setw(2)<<r[i].Month<<"/"<<setw(14)<<r[i].Year<< setw(5)<<r[i].SrokA<<endl;
}

setcolor(14,0);
}

void addA(){
    apartment ap;
    int pos;
bool flag;
    cout<<"������� ��� ��������:";

do{
    cin>>ap.Kod;
    flag=1;
    for(int i=0;i<nA;i++)
        if(ap.Kod==a[i].Kod) flag=0;


    if(flag==0){
            setcolor(12,0);
    cout<<"������! �������� � ����� ������� ��� ����������! ���������� ��� ���! "<<endl;
      setcolor(14,0);
cout<<"������� ��� ��������:";

}else if(ap.Kod<1) {
    setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
    cout<<"������� ��� ��������:";
}
}while(ap.Kod<1 or flag==0);

    cout<<"������� �����:";
    cin>>ap.Raion;

    cout<<"������� �����:";
    cin>>ap.Adres;


    cout<<"������� ���������� ������:";
    do{
    cin>>ap.Kkomnat;
    if(ap.Kkomnat<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ���������� ������:";
}
}while(ap.Kkomnat<1);


    cout<<"������� ����:";
       do{
    cin>>ap.Etaj;
    if(ap.Etaj<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(ap.Etaj<1);

    cout<<"������� ����:";
           do{
    cin>>ap.Price;
    if(ap.Price<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(ap.Price<1);

    cout<<"������� �������(��� ������� ������� ���������� ��������� � ����� �����):";
           do{
    cin>>pos;
    if(pos<1 ){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� �������(��� ������� ������� ���������� ��������� � ����� �����): ";
}
}while(pos<1);

setcolor(10,0);
cout <<"\n���������� � ����� �������� ���������.\n";
setcolor(14,0);

    pos--;
    if(pos>nA) pos=nA;
    for(int i=nA; i>pos; i--)
        a[i]=a[i-1];
    a[pos]=ap;
    nA++;
    rewriteInfoA();
}

void rewriteInfoA(){
    ofstream f("Apartment.txt");
    for(int i=0; i<nA; i++)
       f << a[i].Kod <<" "<< a[i].Raion <<" "<< a[i].Adres<<" " <<  a[i].Kkomnat<<" "<<a[i].Etaj<< " " << a[i].Price<< endl;
    f.close();
}

void addR(){
    rent rt;
    int pos;

        cout<<"������� ��� ��������:";
    do{
    cin>>rt.Kod;
    if(rt.Kod<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ��� ��������:";
}
}while(rt.Kod<1);

    cout<<"������� ������� ����������:";
    cin>>rt.Fam;


    cout<<"������� ��� ����������:";
    cin>>rt.Name;

    cout<<"������� ���� ������:";

        do{
    cin>>rt.Day;
    if(rt.Day<1 or rt.Day>31){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ���� ������:";
}
}while(rt.Day<1 or rt.Day>31);


    cout<<"������� ����� ������:";
        do{
    cin>>rt.Month;
    if(rt.Month<1 or rt.Month>12){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����� ������:";
}
}while(rt.Month<1 or rt.Month>12);


    cout<<"������� ��� ������:";

        do{
    cin>>rt.Year;
    if(rt.Year<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ��� ������:";
}
}while(rt.Year<1 );


     cout<<"������� ���� ������:";
            do{
    cin>>rt.SrokA;
    if(rt.SrokA<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ���� ������:";
}
}while(rt.SrokA<1 );


        cout<<"������� �������(��� ������� ������� ���������� ��������� � ����� �����): ";
           do{
    cin>>pos;
    if(pos<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� �������(��� ������� ������� ���������� ��������� � ����� �����): ";
}
}while(pos<1);
setcolor(10,0);
cout <<"\n���������� �� ����� ������ ���������.\n";
setcolor(14,0);
    pos--;
    if(pos>nR) pos=nR;
    for(int i=nR; i>pos; i--)
        r[i]=r[i-1];
    r[pos]=rt;
    nR++;
    rewriteInfoR();
}

void rewriteInfoR(){
    ofstream f("Rent.txt");
    for(int i=0; i<nR; i++)
       f << r[i].Kod <<" "<< r[i].Fam <<" "<< r[i].Name<<" " <<  r[i].Day <<" "<< r[i].Month <<" "<< r[i].Year <<" "<< r[i].SrokA<< endl;
    f.close();
}

void deleteInfoA(){
    int k,p;
   cout<<"\n������� ��� �������� ��� ��������:";

           do{
    cin>> k;
    if(k<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"\n������� ��� �������� ��� ��������:";
}
}while(k<1);

   for(int i=0; i<nA; i++)
  if(k== a[i].Kod)  {
    for(int j=i; j<nA; j++) a[j]=a[j+1];
        nA--;
    i--;
    p++;
}
if(p==0){
        setcolor(12,0);
cout << "\n��� �������� �� ������.\n";
setcolor(14,0);
}

else {
setcolor(10,0);
cout << "���������� � �������� ��� ������� " << k <<" �������.\n\n";
setcolor(14,0);
for(int i=0;i<nR;i++)
    if(k==r[i].Kod){
        for(int j=i; j<nA; j++) r[j]=r[j+1];
        nR--;
        i--;
    }


rewriteInfoA();
rewriteInfoR();
}

}

void deleteInfoR(){
    int pn;
      cout<<"\n������� ���������� ����� ������ ��� ��������:";

           do{
    cin>> pn;
    if(pn<1){
        setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
setcolor(14,0);
cout<<"\n������� ���������� ����� ������ ��� ��������:";
}
}while(pn<1);
pn--;

if(pn>nR) {
        setcolor(12,0);
    cout << "\n���������� ����� ������ �� ������.\n";
setcolor(14,0);
}else{
   for(int i=pn; i<nR-1; i++)
        r[i]=r[i+1];
        nR--;

setcolor(10,0);
cout << "���������� �� ������ ��� ���������� ������� " << pn+1 <<" �������.\n";
setcolor(14,0);
rewriteInfoR();
}


}

void RedactA(){
    int k,p;
       cout <<"������� ��� �������� ��� ��������������: ";

           do{
    cin>> k;

    if(k<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout <<"������� ��� �������� ��� ��������������: ";
}
}while(k<1);

system("CLS");
for(int i=0;i<nA;i++)
  if(k == a[i].Kod) p=i;
  if(p!=0){
  setcolor(15,0);
    cout <<"\n��� �� ������ ��������?\n\n";
     setcolor(14,0);

cout <<"       << ����� >>" << "  << ����� >>" << "  << ���������� ������ >>"
 << "  << ���� >>" << "  << ���� >>"<<"  << �� >>";
 setcolor(12,0);
 cout<< "  << ������ >>"<<endl;
 setcolor(14,0);


int v=swredA();

bool flag;

 switch(v){

    case 1:{
cout<<"������� �����:";
    cin>> a[p].Raion;

    rewriteInfoA();
        break;
}


     case 2:{
             cout<<"������� �����:";
    cin>> a[p].Adres;

    rewriteInfoA();
        break;
    }
     case 3:{

         cout<<"������� ���������� ������:";
                     do{
    cin>> a[p].Kkomnat;
    if(a[p].Kkomnat<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���������� ������:";
}
}while(a[p].Kkomnat<1);

    rewriteInfoA();
        break;
    }

    case 4:{
            cout<<"������� ����:";
    do{
    cin>> a[p].Etaj;
    if(a[p].Etaj<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(a[p].Etaj<1);


    rewriteInfoA();
        break;
    }

     case 5:{
        cout<<"������� ����:";
            do{
    cin>> a[p].Price;
    if(a[p].Price<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(a[p].Price<1);

    rewriteInfoA();
        break;
    }
    case 6:{

cout<<"������� �����:";
    cin>> a[p].Raion;

             cout<<"������� �����:";
    cin>> a[p].Adres;


         cout<<"������� ���������� ������:";
                     do{
    cin>> a[p].Kkomnat;
    if(a[p].Kkomnat<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���������� ������:";
}
}while(a[p].Kkomnat<1);


            cout<<"������� ����:";
    do{
    cin>> a[p].Etaj;
    if(a[p].Etaj<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(a[p].Etaj<1);



        cout<<"������� ����:";
            do{
    cin>> a[p].Price;
    if(a[p].Price<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout<<"������� ����:";
}
}while(a[p].Price<1);

rewriteInfoA();
break;
    }
        case 0:{
        setcolor(12,0);
    cout << "\n������.\n";
    setcolor(14,0);
        break;
    }
}
if(v!=0){
    setcolor(10,0);
    cout <<"\n������ ��������\n";
    setcolor(14,0);
}
  }else{
  setcolor(12,0);
  cout<<"��� �������� �� ������.\n";
  setcolor(14,0);
  }
}

void RedactR(){
    int k;
        cout <<"������� ���������� ����� ������ ��� ��������������: ";
           do{
    cin>> k;
    if(k<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout <<"������� ���������� ����� ������ ��� ��������������: ";
}
}while(k<1);

k--;
system("CLS");
 setcolor(15,0);
    cout <<"\n��� �� ������ ��������?\n\n";
     setcolor(14,0);

    cout <<"     << ������� >>" <<"  << ��� >>" << "  << ���� >>" << "  << ����� >>"
 << "  << ��� >>" << "  << ���� ������ >>"<<"  << �� >>";
 setcolor(12,0);
 cout<< "  << ������ >>"<<endl;
 setcolor(14,0);


int v=swredR();


 switch(v){
    case 1:{
        cout<<"������� ������� ����������:";
    cin>>r[k].Fam;
    rewriteInfoR();
        break;
    }
    case 2:{
            cout<<"������� ��� ����������:";
    cin>>r[k].Name;
    rewriteInfoR();
        break;
    }
     case 3:{
             cout<<"������� ���� ������:";
                  do{
    cin>>r[k].Day;
    if(r[k].Day<1 or r[k].Day>31){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���� ������:";
}
}while(r[k].Day<1 or r[k].Day>31);

    rewriteInfoR();
        break;
    }
     case 4:{
         cout<<"������� ����� ������:";
    do{
    cin>>r[k].Month;
    if(r[k].Month<1 or r[k].Month>12){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ����� ������:";
}
}while(r[k].Month<1 or r[k].Month>12);

    rewriteInfoR();
        break;
    }
    case 5:{
            cout<<"������� ��� ������:";
                do{
    cin>>r[k].Year;
    if(r[k].Year<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ��� ������:";
}
}while(r[k].Year<1);

    rewriteInfoR();
        break;
    }
     case 6:{
        cout<<"������� ���� ������:";
    do{
    cin>>r[k].SrokA;
    if(r[k].SrokA<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���� ������:";
}
}while(r[k].SrokA<1);

    rewriteInfoR();
        break;
    }
    case 7:{
        cout<<"������� ������� ����������:";
    cin>>r[k].Fam;

            cout<<"������� ��� ����������:";
    cin>>r[k].Name;

             cout<<"������� ���� ������:";
                  do{
    cin>>r[k].Day;
    if(r[k].Day<1 or r[k].Day>31){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���� ������:";
}
}while(r[k].Day<1 or r[k].Day>31);

         cout<<"������� ����� ������:";
    do{
    cin>>r[k].Month;
    if(r[k].Month<1 or r[k].Month>12){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ����� ������:";
}
}while(r[k].Month<1 or r[k].Month>12);

            cout<<"������� ��� ������:";
                do{
    cin>>r[k].Year;
    if(r[k].Year<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ��� ������:";
}
}while(r[k].Year<1);

        cout<<"������� ���� ������:";
    do{
    cin>>r[k].SrokA;
    if(r[k].SrokA<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
 cout<<"������� ���� ������:";
}
}while(r[k].SrokA<1);

    rewriteInfoR();
        break;
    }

    case 0:{
setcolor(12,0);
    cout << "\n������.\n";
    setcolor(14,0);
    }
    }
    if(v!=0){
    setcolor(10,0);
    cout <<"\n������ ��������\n";
    setcolor(14,0);
}
}

void Srok(){
int date[3];
cout <<"������� ����(1-31): ";
do{
cin >> date[0];

if(date[0]<1 or date[0]>31){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout <<"������� ����(1-31): ";
}
}while(date[0]<1 or date[0]>31);

cout <<"������� �����(1-12): ";
do{
cin >> date[1];

if(date[1]<1 or date[1]>12){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout <<"������� �����(1-31): ";
}
}while(date[1]<1 or date[1]>12);

cout <<"������� ���(>1): ";
do{

cin >> date[2];

if(date[2]<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(14,0);
cout <<"������� ���(>1): ";
}
}while(date[2]<1);

ofstream f("Expire.txt");


for(int i=0;i<nR;i++){
    if(date[2] > r[i].Year + r[i].SrokA)
f <<r[i].Kod  <<" "<< r[i].Fam <<" "<<r[i].Name << " "<<r[i].Day<<" "<<r[i].Month<<" "<<r[i].Year<< " "<<r[i].SrokA<<endl;
else if(date[2] == r[i].Year + r[i].SrokA and date[1] > r[i].Month)
f <<r[i].Kod  <<" "<< r[i].Fam <<" "<<r[i].Name << " "<<r[i].Day<<" "<<r[i].Month<<" "<<r[i].Year<< " "<<r[i].SrokA<<endl;
else if(date[2] == r[i].Year + r[i].SrokA and date[1] == r[i].Month and date[0] > r[i].Day )
f <<r[i].Kod  <<" "<< r[i].Fam <<" "<<r[i].Name << " "<<r[i].Day<<" "<<r[i].Month<<" "<<r[i].Year<< " "<<r[i].SrokA<<endl;
}
system("CLS");
setcolor(10,0);
cout << "���� ������."<<endl;
setcolor(14,0);
cout<<internal<<setw(175)<< "������� ������� ����?";
setcolor(10,0);
cout << "     << �� >>";
setcolor(12,0);
cout<< "   << ��� >>"<<endl;
setcolor(14,0);

int ch=swopenFile();

if(ch==1){
    ShellExecute(NULL, "open", "Expire.txt", NULL, NULL, SW_SHOWNORMAL);
setcolor(10,0);
cout << "�������� �����... " <<endl;
setcolor(14,0);
}else{
    setcolor(12,0);
cout<<"�������� �����..."<<endl;
setcolor(14,0);
}

f.close();
}

void Sapartments(){
rent *m=new rent[nR];

 ifstream g("Expire.txt");
    int nS=0;
    if(g){
    if(g.peek()!=EOF){
    while(!g.eof()){
        g>>m[nS].Kod>>m[nS].Fam >> m[nS].Name >>  m[nS].Day>>m[nS].Month >> m[nS].Year >> m[nS].SrokA;
        nS++;
    }
    nS--;
    g.close();

    apartment *s= new apartment[nA];

    for(int i=0;i<nS;i++) s[i].Kod = m[i].Kod;

 for(int i=0;i<nS;i++)
    for(int j=0;j<nA;j++)
    if(s[i].Kod == a[j].Kod) s[i]=a[j];


            for(int i=1; i<nS; i++){
       int j = i;
        while (s[j].Kkomnat<s[j-1].Kkomnat and j>0){
               swap(s[j],s[j-1]);
                j--;
            }
    }

    for(int i=1; i<nS; i++){
       int j = i;
        while (s[j].Kkomnat==s[j-1].Kkomnat and s[j].Price< s[j-1].Price and j>0){
               swap(s[j],s[j-1]);
                j--;
            }
    }

    setcolor(0,15);

    cout<<endl<<"     ���   " <<"       �����     " <<  "              �����    "<< "          ���-�� " <<  "  ���� "<<"    ����    "<<endl;
 cout<<"  ��������                                                   ������                    "<<endl;

   for(int i=0;i<nS;i++){
    if(i%2==0) setcolor(0,8);
   else setcolor(0,7);
   if(s[i].Kod==s[i+1].Kod)i++;
 else cout <<left<<"     "<<setw(11)<<s[i].Kod <<setw(19)<< s[i].Raion <<setw(28) <<s[i].Adres <<setw(8)<<s[i].Kkomnat <<setw(8)<<s[i].Etaj <<s[i].Price<<endl;
   }
   setcolor(14,0);
    }else{
            setcolor(12,0);
        cout <<"��� ��������� �������."<< endl;
setcolor(14,0);
    }
    }else {
        setcolor(12,0);
        cout <<"��� ����� � ���������� ����������."<< endl;
setcolor(14,0);
    }

}

void Spros(){
rent *m=r;
int k;
            for(int i=1; i<nR; i++){
       int j = i;
        while (m[j].Kod<m[j-1].Kod and j>0){
               swap(m[j],m[j-1]);
                j--;
            }
    }
    int max=0,pos;
    for(int i=0;i<nR;i++){
            k=0;
        for(int j=0;j<nR;j++)
               if(m[i].Kod == m[j].Kod) k++;

        if(max<k){
            max=k;
        pos=i;
        }
    }
    for(int i=0;i<nA;i++)
        if(m[pos].Kod==a[i].Kod){
        setcolor(0,15);

    cout<<endl<<"     ���   " <<"       �����     " <<  "              �����    "<< "          ���-�� " <<  "  ���� "<<"    ����    "<<endl;
 cout<<"  ��������                                                   ������                    "<<endl;

    setcolor(0,8);
 cout <<left<<"     "<<setw(11)<<a[i].Kod <<setw(19)<< a[i].Raion <<setw(28) <<a[i].Adres <<setw(8)<<a[i].Kkomnat <<setw(8)<<a[i].Etaj <<a[i].Price<<endl;
   setcolor(14,0);

        }
}

void Srprice(){

    int kkomnat,k;
    float Srsum;
    int max=0;
    for(int i=0;i<nA;i++)
        if(max<a[i].Kkomnat)max=a[i].Kkomnat;

      setcolor(10,0);
    cout<<"\n������� ���������� ������ ��������: ";
do{
    cin>> kkomnat;
    if(kkomnat<1){
            setcolor(12,0);
    cout<<"������! ���������� ��� ���! "<<endl;
    setcolor(10,0);
cout<<"������� ���������� ������ ��������: ";
}
}while(kkomnat<1);

setcolor(14,0);

    for(int i=0;i<nA;i++)
        if(a[i].Kkomnat== kkomnat){
                Srsum+=a[i].Price;
        k++;
        }
    Srsum/=k;
    setcolor(15,0);
    cout<< "\n������� ���� ���� " << kkomnat <<"-��������� �������: " <<Srsum<< endl;
    setcolor(14,0);
}

