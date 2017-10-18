
// Christine Shue - Due Date: April 14, 2016
// HW 9

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const int SIZE = 15;
unsigned int seed(time(0));

void fill_array(char a[]);
void print_array(const char a[]);
void compare_array(const char a[], const char b[], char c[]);
char assign_array();
double random(unsigned int&seed);

int main()
{
    char a[SIZE],b[SIZE],c[SIZE];
    fill_array(a);
    cout << "a[" << SIZE << "]: ";
    print_array(a);
    fill_array(b);
    cout << "b[" << SIZE << "]: ";
    print_array(b);
    compare_array(a,b,c);
    cout << "c[" << SIZE << "]: ";
    print_array(c);
    return 0;
}

void fill_array(char a[])
{
    for (int i=0; i < SIZE; ++i)
	a[i] = assign_array();
}

void print_array(const char a[])
{
    for (int i=0; i < SIZE; ++i)
	cout << setw(4) << a[i];
    cout << endl;
}
void compare_array(const char a[], const char b[], char c[])
{
    for (int i=0; i < SIZE; ++i)
	if(a[i] >= b[i])
	    c[i] = '+';
        else
	    c[i] = '-';
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
