
//Christine Shue Due Date: April 11, 2016
//HW 8

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

unsigned int seed(time(0));
const double ACC = pow(10,-9);

double f (double x);
double random_sign();
void swap (double&x, double&y);
double random (unsigned int& seed);

int main()
{
    double xr,xl,xmid=1;
    xr = random_sign()*rand()*random(seed);
    do
    {
      	xl = random_sign()*rand()*random(seed);
    }   while ((f(xl)*f(xr)) >= 0);
    if (xl > xr)
	swap(xl,xr);
    do
    {
	if(f(xmid)*f(xr) > 0)
             xr = xmid;
         else
             xl = xmid;
	 xmid = (xr+xl)/2;
    }    while (fabs(f(xmid)) > ACC);
    cout << "zero = " << xmid << endl;
    return 0;
}

double f (double x)
{
    return pow(x,3)-6*pow(x,2)-7*x;
}

double random_sign()
{
    if (random(seed) <= 0.5)
	return -1;
    else
	return 1;
    
}

void swap (double&x,double&y)
{
    double temp;
    temp = x;
    x = y;
    y = temp;
}

double random (unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
