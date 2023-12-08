#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int n;

void selectionSort(int tab[]) {
    int temp;
    int min;
    for(int i = 0; i < n-1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(tab[min] > tab[j]) {
                min = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}

int main()
{
    srand(time(NULL));

    n = 10;

    int tab[n];
    for(int i = 0; i < n; i++) {
        tab[i] = rand()%10;
        cout<<tab[i]<<" ";
    }

    cout<<endl;
    selectionSort(tab);

    for(int i = 0; i < n; i++) {
        cout<<tab[i]<<" ";
    }
    return 0;
}
