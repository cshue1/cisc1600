
// Christine Shue - April 20, 2016
// Quiz 3

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

unsigned int seed = time(0);
const int SIZE = 20;
const int INTEGER = 20;

void populate_array(int a[]);
void print_array(const int a[]);
double random (unsigned int &seed);

int main()
{
    int a[SIZE];
    populate_array(a);
    print_array(a);
}
void populate_array(int a[])
{
    for (int i=0; i < SIZE; ++i)
	a[i] = int(INTEGER * random(seed));
}

void print_array(const int a[])
{
    cout << "a:";
    for (int i=0; i < SIZE; ++i)
	cout << setw(3) << a[i];
    cout << endl << endl;
    for (int i=0; i < SIZE; i+=2)
	cout << setw(3) << a[i] << setw(8) << a[i+1] << endl;
}

double random(unsigned int&seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed)+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
