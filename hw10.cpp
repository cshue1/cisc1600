
// Christine Shue - March 14, 2016
// Homework 10

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double determine_direction();
void populate_array(int a[]);
void print_array(const int a[]);
void rotate_array(const int a[], int b[], char direction);
void rotate_right(const int a[],int b[]);
void rotate_left(const int a[],int b[]);
double random(unsigned int &seed);

unsigned int seed(time(0));
const int K = int(1+9*random(seed));
const int SIZE = 20;


int main()
{
    int a[SIZE],b[SIZE];
    char direction;
    populate_array(a);
    cout << setw(2) << "a" << setw(3) << "=";
    print_array(a);
    cout << endl;
    direction = determine_direction();
    cout << direction << K << setw(3) << "=";
    rotate_array(a,b,direction);
    print_array(b);
    return 0;
}
double determine_direction()
{
    if (random(seed) < 0.5)
	return char('r');
    else
	return char('l');
}

void populate_array(int a[])
{
    for (int i=0; i < SIZE; ++i)
	a[i] = int(11* random(seed));
}

void print_array(const int a[])
{
     for (int i=0; i < SIZE; ++i)
	 cout << setw(3) << a[i];
     cout << endl;
}

void rotate_array(const int a[], int b[], char direction)
{
    if (direction == 'r')
	rotate_right(a,b);
    if (direction == 'l')
	rotate_left(a,b);
}

void rotate_right(const int a[], int b[])
{
    int n = 0;
    for (int i = 0; i < SIZE; ++i)
	if (SIZE-K+i < SIZE)
	    b[i] = a[SIZE-K+i];
	else
	{
      	    b[i] = a[n];
	    n++;
	}    
}

void rotate_left(const int a[], int b[])
{
    int n = 0;
    for (int i = 0; i < SIZE; ++i)
    	if (i+K < SIZE)
	    b[i] = a[i+K];
	else
	{
      	    b[i] = a[n];
	    n++;
	}
}

double random(unsigned int&seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed)+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
