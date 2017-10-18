
// Christine Shue - Due Date: April 21, 2016
// Extra Credit

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

unsigned int seed = time(0);
const int NEUTRONS = 10000;

double angle();
double distance();
double random_sign();
double random (unsigned int&seed);

int main()
{
    int thickness =0, escaped;
    double angle_e, angle_d, space_traveled;
    do
    {
	thickness+=1;
	escaped = 0;
        for (int i=1; i <= NEUTRONS; i++)
	{
	    space_traveled = 0.0;
	    angle_e = angle();
	    if(abs(angle_e) < 7*M_PI/18)
	    {
		for (int energy =1; energy <=7; ++energy)
	        {
	            do
	            {
                        angle_d = angle();
		    }   while ((abs(angle_d) < (M_PI/18))&&(abs(angle_d) > (17*M_PI/18)));
		    if (energy > 1)
			space_traveled = space_traveled + distance() * cos(angle_d);
		    else
			space_traveled = space_traveled + distance() * cos(angle_d - angle_e);
		    
		}
		if (space_traveled > thickness)
		    escaped ++;
	    }  
	    else
	        --i;
        }
	cout << "rate = " << double(escaped)/NEUTRONS << endl;
    }   while (double(escaped)/NEUTRONS > 0.02);
    cout << "thickness = " << thickness << " units" << endl;
    return 0;
}
double angle()
{
    return random_sign()*random(seed);
}
double distance()
{
    return 0.6+0.71*random(seed);
}
double random_sign()
{
    if (random(seed) <= 0.5)
	return -1;
    else
	return 1;   
}
double random (unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}

