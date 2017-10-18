
//Christine Shue - Due Date: March 31, 2016
//HW 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double random (unsigned int&seed);

int main()
{
    unsigned int seed=time(0);
    double max = 0, min = 25, rand_number;
    cout<<fixed<<showpoint<<setprecision(5);
    for(int i = 0; i <= 1000; ++i)
    {
	rand_number = 25.00001*random(seed);
	if (rand_number < min)
	    min = rand_number;
	if (rand_number > max)
	    max = rand_number;
    }
    cout<< "The smallest number is: "<<setw(13)<<min<<endl;
    cout<< "The largest number is:  "<<setw(13)<<max<<endl;
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
