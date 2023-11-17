#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>

using namespace std;
// narysuj figure zlozona z punktow, ktorych wspolzedne spelniaja nastepujace warunki
//punktow nalezacych do tej figury ma byc 500

//z pliku pobierz 10 liczb naturalnych wiêkszych od 1 wypisz je i obok ka¿dej z nich wypisz jeje rozk³ad na czynniki peirwsze

int main()
{

ofstream save("coordinates.xls");
float x,y;
int points = 0;
srand(time(NULL));
while (points <= 500){
    x = ((float) rand()/RAND_MAX * 2);
    y = ((float) rand()/RAND_MAX * 2);
    if(x*x + y*y >= 4) {
        save<<x<<"\t"<<y<<endl;
        points++;
    }
}

save.close();

return 0;

}
