// GoogleDeveloperTutorial.cpp : Defines the entry point for the console application.
// Juan Erencia Guerrero (Juan.erencia.guerrero@gmail.com)
// Description: a program that prints the immortal saying "hello world"

#include "stdafx.h"
#include <iostream>
using namespace std;


double square( double x )
{
	return x*x;
}

// Prints the sqare in screen
void print_square( double x )
{
	cout << "the square of " << x << " is " << square( x ) << "\n";
}

// Main method
int main() {
	cout << "Insert a number to compute the square value: " << endl;
	double x;
	cin >> x;
	print_square( x );

	cin >> x;
	return 0;
}

