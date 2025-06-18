#pragma once
#include <iostream>
using namespace std;
struct computer
{
	char name[100]; // Computer name
	int ram = 0; // RAM
	float price = 0; // Price

	void showinfo() 
	{
		cout << "Name: " << name << endl; // Display computer name
		cout << "RAM: " << ram << endl; // Display RAM
		cout << "Price: " << price << endl; // Display price
	}
};