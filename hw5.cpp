//Christine Shue - Due: March 10, 2016
//HW 5

#include<iostream>
#include<iomanip>
#include<cmath>

int N_TOTAL = 10000;
double random (unsigned int&seed);
using namespace std;

int main()
{
    double x, y;
    int n_c = 0;
    unsigned int seed;
    for (int n = 0; n <= N_TOTAL; n++)
    {
	x = 2*random(seed);
	y = 8*random(seed);
	if ((x*x*x) >= y)
	    n_c++;
    }
    cout << "The value is : "<< 16 * double(n_c) / double(N_TOTAL)<<endl;
    return 0;
}
double random (unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed) / double(MODULUS);
}
