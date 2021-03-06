
// Christine Shue - Due Date: April 28, 2016
// Homework 11

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void fill_array(char a[],int n );//RECURSIVE
void print_array(const char a[], int n);//RECURSIVE
void rotate_array(char a[], int k, int n);//RECURSIVE
void swap (char &a, char &b);
void rotate_array_one(char a[],int n);//RECURSIVE
double random(unsigned int&seed);

unsigned int seed = time(0);
const int SIZE = 20;

int main()
{
    char a[SIZE];
    int pos,k;
    fill_array(a,0);
    cout << "a : ";
    print_array(a,0);
    cout << endl;
    do
    {
	cout << "Enter number of positions to move: " << endl;
	cin >> pos;
	k = abs(pos);
	if (k < SIZE)
	    if (pos != 0)
		{
		    if (pos < 0)
		    {
		        cout << "rotating " << k << " position(s) left: " << endl;
			rotate_array(a,k,-SIZE+2*k);
		    }
		    else
		    {
		        cout << "rotating " << k << " position(s) right: " << endl;
			rotate_array(a,k,0);
		    }
		    cout << "a : ";
		    print_array(a,0);
		    cout << endl;
		}
	    else
		cout << "no rotation required" << endl;	  

    }   while (pos != 0);
    return 0;
}

void fill_array(char a[],int n)
{
    if (n < SIZE)
    {
	a[n] = char(int(97+26*random(seed)));
	fill_array(a,n+1);
    }
}

void print_array(const char a[],int n)
{
    if (n < SIZE)
    {
	cout << setw(3) << a[n];
	print_array(a,n+1);
    }
}

void rotate_array(char a[], int k, int n)
{
    if( n < k)
    {
	rotate_array_one(a,SIZE-1);
	rotate_array(a,k,n+1);
    }
 
}

void swap (char &a, char &b)
{
    char temp = a;
    a = b;
    b= temp;
}

void rotate_array_one(char a[],int n)
{
    if (n > 0)
    {
	swap (a[n], a[n-1]);
	rotate_array_one(a, n-1);
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
