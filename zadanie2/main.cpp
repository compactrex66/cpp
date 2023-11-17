#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>

using namespace std;

//z pliku pobierz 10 liczb naturalnych wiêkszych od 1 wypisz je i obok ka¿dej z nich wypisz jeje rozk³ad na czynniki peirwsze

void rozkladNaCzynnikiPierwsze(int a) {
    int d = 2;
    while(a!=1) {
        if(a % d == 0) {
            cout<<a<<"-->"<<d<<endl;
            a = a/d;
        }
        else {
            d++;
        }
    }
    cout<<"1"<<endl;
    cout<<endl;
}


int main()
{
    fstream plik;
    plik.open("liczby.txt",ios::in);
    int a;

    for(int i=0;i<10;i++) {
        plik>>a;
        rozkladNaCzynnikiPierwsze(a);
    }

    return 0;
}
