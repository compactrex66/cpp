#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int number) {
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    ifstream read("dane4.txt");
    ofstream save("wyniki4.txt");

    string line;
    int numbers[2000];
    int number = 0;
    int i = 0;
    int howManyTwins = 0;
    while(getline(read, line)) {
        for (char digit : line) {
            number = number * 10 + (digit - '0');
        }
        numbers[i] = number;
        number = 0;
        i++;
    }
    for(int i = 0; i < 2000-1; i++) {
        if((isPrime(numbers[i]) && numbers[i+1]) && (numbers[i] - numbers[i+1] == 2 || numbers[i+1] - numbers[i] == 2)) {
            cout<<numbers[i]<<" i "<<numbers[i+1]<<endl;
            save<<numbers[i]<<" i "<<numbers[i+1]<<"\n";
            howManyTwins++;
        }
    }

    cout<<howManyTwins;
    save<<howManyTwins;
    return 0;
}
