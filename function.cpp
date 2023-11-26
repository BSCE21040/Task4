#include"function.h"

float hexArea;
float hexPeri;
int hexAngle;
int areaSq;
int periSq;

void calcArea(int s)
{
	hexArea = 1.5 * 1.732 * s;
}

void calcPeri(int s)
{
	hexPeri = 6 * s;
}

void calcAngleSum()
{
	int side = 6;
	int a = 120;
	hexAngle = side * a;

}

void displayHex()
{
	cout << "The area of hexagon: " << hexArea << endl;
	cout << "The perimeter of hexagon: " << hexPeri << endl;
	cout << "The sum of angles of hexagon: " << hexAngle << " degrees." << endl;
}

void calcAreaSquare(int l)
{
	l = l + 1;
	areaSq = l * l;
}

void calcPeriSquare(int l)
{
	l = l + 1;
	periSq = 4 * l;
}

void displaySquare()
{
	cout << "The area of square: " << areaSq << endl;
	cout << "The perimeter of square: " << periSq << endl;
}