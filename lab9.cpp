
//Christine Shue - April 13, 2016
//Lab 9

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const int ROW_SIZE = 5;
const int COL_SIZE = 5;
unsigned int seed(time(0));

void fill_array(int a[][COL_SIZE]);
void print_array(const int a[][COL_SIZE]);
void add_arrays(const int a[][COL_SIZE], const int b[][COL_SIZE],int c[][COL_SIZE]);
double random(unsigned int &seed);

int main()
{
    int a[ROW_SIZE][COL_SIZE], b[ROW_SIZE][COL_SIZE], c[ROW_SIZE][COL_SIZE];
    fill_array(a);
    print_array(a);
    cout << endl << setw(4) <<'+'<< endl << endl;
    fill_array(b);
    print_array(b);
    cout << endl << setw(4) <<'='<< endl << endl;
    add_arrays(a,b,c);
    print_array(c);
    return 0;
}

void fill_array (int a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; ++row)
    	for (int col = 0; col < COL_SIZE; ++col)
	    a[row][col] = int (6*random(seed));
}

void print_array (const int a[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; ++row)
    {
	for (int col = 0; col < COL_SIZE; ++col)
	    cout << setw(4) << a[row][col];
	cout << endl;
    }
}

void add_arrays(const int a[][COL_SIZE], const int b[][COL_SIZE],int c[][COL_SIZE])
{
    for (int row = 0; row < ROW_SIZE; ++row)
    	for (int col = 0; col < COL_SIZE; ++col)
	    c[row][col] = a[row][col] + b[row][col];
}

double random (unsigned int& seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
