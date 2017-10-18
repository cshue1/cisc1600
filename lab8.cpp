
//Christine Shue - April 6, 2016
//Lab 8

#include<iostream>
#include<iomanip>

const int SIZE = 15;
unsigned int seed(time(0));

double random(unsigned int&seed);
char assign_array();

using namespace std;

int main()
{
    char a[SIZE],b[SIZE];
    for(int i=0; i<SIZE; ++i)
    {
	a[i] = assign_array();
        b[i] = assign_array();
    }
    cout << "a: ";
    for(int i=0;i<SIZE;++i)
    	cout<<setw(5)<<a[i];
    cout << endl;
    cout << "b: ";
    for(int i=0;i<SIZE;++i)
    	cout<<setw(5)<<b[i];
    cout << endl;
    cout << "   ";
    for (int i=0; i<SIZE;++i)
    	if(a[i] >= b[i])
	    cout<<setw(5)<<"+";
        else
	    cout<<setw(5)<<"-";
    cout << endl;
    return 0;
}

char assign_array()
{
    return char (int(97+26*random(seed)));
}

double random(unsigned int&seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed)+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
