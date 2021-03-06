
// Christine Shue - Due Date: April 28, 2016
// Homework 11 TEMP

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void fill_array(char a[]);
void print_array(const char a[]);
void rotate_array(char a[], int pos);
void swap (char &a, char &b);
void rotate_array_one_right(char a[]);
void rotate_array_one_left(char a[]);
double random(unsigned int&seed);

unsigned int seed = time(0);
const int SIZE = 20;

int main()
{
    char a[SIZE];
    int pos;
    fill_array(a);
    print_array(a);
    do
    {
	cout << "Enter number of positions to move: " << endl;
	cin >> pos;
	rotate_array(a,pos);
	print_array(a);
    }   while (pos != 0);
    //print_array(a);
    return 0;
}

void fill_array(char a[])
{
    for (int i = 0; i < SIZE; i++)
	a[i] = char(int(97 + 26*random(seed)));
}

void print_array(const char a[])
{
    cout << "a: ";
    for (int i = 0; i < SIZE; i++)
	cout << setw(3) << a[i];
    cout << endl;
}

void rotate_array(char a[], int pos)
{
    int k = abs(pos);
    if (k < SIZE)
        if (pos != 0)
	    if (pos < 0)
	    {
		cout << "rotating " << k << " position(s) left: " << endl;
		for (int i = 0; i < SIZE-k; ++i)
		    rotate_array_one_right(a);
	    }
            else
	    {
		cout << "rotating " << k << " position(s) right: " << endl;
		for (int i = 0; i < k; ++i)
		    rotate_array_one_right(a);
	    }
        else
	    cout << "no rotation required" << endl;	    
}

void swap (char &a, char &b)
{
    char temp = a;
    a = b;
    b= temp;
}

void rotate_array_one_right(char a[])
{
    for (int i = SIZE-1; i > 0; --i)
	swap(a[i], a[i-1]);
}

void rotate_array_one_left(char a[])
{
    for (int i = 0; i < SIZE-1; ++i)
	swap(a[i], a[i+1]);
}

double random(unsigned int&seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed)+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
