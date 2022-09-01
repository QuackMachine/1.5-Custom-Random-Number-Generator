/*
* free range rng fest
*/

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main()
{
    int rng;
    int range1, range2;
    string pause;

    cout << "Enter range1 and range2:\n";
    cin >> range1;
    cin >> range2;

    srand(time(NULL));

    rng = rand() % range2 + range1;             //let range2 goes first

    cout << "rng = " << rng << ".\n\n";

    return main();
}