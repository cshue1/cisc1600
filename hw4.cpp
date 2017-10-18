
//Christine Shue - Due: March 3
//Homework 4

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{ 
    double sum;
    cout<< fixed << showpoint << setprecision(5);
    cout<< "n" << "\t\t" << "sum" << endl <<endl;
    for(int n = 100; n <= 1000; n += 100)
	{
	    sum = 0;
	    for (double i = 1; i <= n; i++)
	        sum += 1/i;
 	    cout<< setw(4) << n << "\t\t" << setw(8) << sum - log(n) << endl;
	}
    return 0;
}
