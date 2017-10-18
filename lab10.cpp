
// Christine Shue - April 27, 2016
// Lab 10

#include <iostream>
#include <iomanip>
#include <cmath>

int get_n(int n);
int sum(int n);
int print_sum(int n);

using namespace std;

int main()
{
    int n,s;
    n = get_n(n);
    s = sum(n);
    print_sum(s);
  
}

int get_n(int n)
{
    do
    {
	cout << "enter a positive number:" << endl;
	cin >> n;
    }while (n < 0);
    return n;
}

int sum(int n)
{
    if (n == 1)
	return 1;
    else
	if ( n == 0)
	return 0;
    else
	return n + sum(n-1);

}

int print_sum(int s)
{
    cout << "sum = " << setw(4) << s << endl;
}
