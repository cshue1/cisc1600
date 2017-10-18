
//Christine Shue - Due April 7, 2016
//HW 7

#include <iostream>
#include <iomanip>
#include<cmath>

const int SIZE = 20;

double random(unsigned int&seed);

using namespace std;

int main()
{
    int a[SIZE],max_int=0;
    unsigned int seed(time(0));
    cout << "array a["<<SIZE<<"] = ";
    for (int i=0; i<SIZE; ++i)
    {
        a[i] = int(21*random(seed));
        cout << " " << a[i];
	if (a[i] > max_int)
	    max_int = a[i];
    }
    cout << endl << endl;
    cout << "Position(s) which contain(s) the maximum integer of "<<max_int<<":";
    for(int i=0; i<SIZE; ++i)
        if(a[i] == max_int)
	    cout << " " << i;
    cout << endl;
    return 0;
}

double random(unsigned int&seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed)+ INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
