
// Christine Shue - April 9, 2016
// FINAL EXAMINATION

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double sum(int n);

int main()
{
    int n;
    cout << fixed << showpoint << setprecision(5);
    do
    {
	cout << "Enter n: " << endl;
	cin >> n;
    }   while (n < 0);
    
    cout << sum(n) << endl;
    return 0;
}

double sum(int n)
{
    if (n == 1)
	return 1;
    else
	return  (1/double(n*n)) + sum(n-1);
}

