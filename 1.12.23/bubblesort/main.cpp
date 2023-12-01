#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int n;

void bubblesort(int tab[]) {
    int temp;
    for(int k = 1; k < n; k++) {
        for(int i = 0; i < n-k; i++) {
            if(tab[i] > tab[i+1]) {
               temp = tab[i];
               tab[i] = tab[i+1];
               tab[i+1] = temp;
            }
        }
    }
}

int main()
{
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    cout << endl;

    int tab[n];

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        tab[i] = rand()% 100 + 1;
        cout<<tab[i]<<" ";
    }

    bubblesort(tab);

    cout<<endl;

    ofstream zapis("array.txt");

    for(int i = 0; i < n; i++) {
        cout<<tab[i]<<" ";
        zapis<<tab[i]<<" ";
    }

    return 0;
}
