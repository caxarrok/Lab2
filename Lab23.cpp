

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
typedef unsigned char Uchar;
using namespace std;

void GoToXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	int x_left, y_left;
	cout << "x:";
	cin >> x_left;
	cout << "y:";
	cin >> y_left;
	int width;
	int height;
	cout << "Width:";
	cin >> width;
	cout << "Height:";
	cin >> height;
	system("cls");
	GoToXY(x_left, y_left);
	Uchar Frames[] = { 201, 187, 188, 200, 205, 179 };
	GoToXY(x_left, y_left);
	cout << Frames[0];
	for (int i = 0; i < width; i++) cout << Frames[4];
	cout << Frames[1];

	for (int i = 0; i < height; i++) {
		GoToXY(x_left, ++y_left);
		cout << Frames[5];
		for (int j = 0; j < width; j++) cout << ' ';
		cout << Frames[5];
	}
	GoToXY(x_left, ++y_left);
	cout << Frames[3];
	for (int i = 0; i < width; i++) cout << Frames[4];
	cout << Frames[2] << endl;

	return 0;
}


