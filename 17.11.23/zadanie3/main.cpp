#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//wylosowaæ 2 liczby ca³kowite z przedzia³u od 10 do 50 w³acznie i dla wylosowanych liczb wyznaczyæ ich nwd

int NWD(int a, int b) {
    while(a!=b) {
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}

int main()
{
    srand(time(NULL));

    int a,b;

    a = rand()%41 + 10;
    b = rand()%41 + 10;

    cout<<"NWD("<<a<<","<<b<<") wynosi: "<<NWD(a,b)<<endl;

    return 0;
}
