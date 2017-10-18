//Christine Shue - March 2, 2016
//Lab 5

#include<iostream>
#include<iomanip>
#include<cmath>

const int TOTAL = 10000;
using namespace std;

double random(unsigned int& seed);

int main()
{
    double  x, y;
    int n_c;
    unsigned int seed;
    for(int i=0; i<=TOTAL; ++i)
    {
        x = random(seed);
	y = random(seed);
	if (sqrt(x*x + y*y) <= 1)
	    ++n_c; 
    }
    cout << "pi = " << 4 * double(n_c) / TOTAL <<endl;
}

double random(unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed) + INCREMENT) % MODULUS;
    return double(seed) / double(MODULUS);
}
