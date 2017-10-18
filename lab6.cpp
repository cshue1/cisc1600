
//Christine Shue - March 9, 2016
//Lab 6

#include<iostream>
#include<iomanip>
#include<cmath>

const int COUNT_TOTAL = 10000;

double random (unsigned int& seed);
double fraction (double f1, double f2, double f3);
using namespace std;

int main()
{
    unsigned int seed;
    double x,y,z,f1,f2,f3,t,min_t,min_x,min_y,min_z;
    cout << fixed << showpoint << setprecision(5);
    min_t = 100;
    for (int i = 0; i <= COUNT_TOTAL; i++)
    {
	f1 = random(seed);
        f2 = random(seed);
        f3 = random(seed);
        x = f1 * fraction(f1,f2,f3);
        y = f2 * fraction(f1,f2,f3);
        z = f3 * fraction(f1,f2,f3);
        t = (sqrt(8*8 + x*x)/3) + (y/5) + (sqrt(6*6 + z*z)/4);
	if (t < min_t)
	{
	    min_t = t;
	    min_x = x;
	    min_y = y;
	    min_z = z;
	}
    }
    
    cout << "t = "<< setw(8)<< min_t << endl;
    cout << "x = "<< setw(8)<< min_x << endl;
    cout << "y = "<< setw(8)<< min_y << endl;
    cout << "z = "<< setw(8)<< min_z << endl;
}

double random (unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed) / double(MODULUS);
}

double fraction (double f1, double f2, double f3)
{
    return 15/(f1+f2+f3);
}
