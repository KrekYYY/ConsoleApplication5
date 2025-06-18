#include <iostream>
#include "computer.h"

int main()
{
	int n = 5;
	computer* arr = new computer[n]{
		{"Asus", 8, 15'000},
		{"Dell", 16, 25'000},
		{"HP", 32, 50'000},
		{"Lenovo", 16, 30'000},
		{"Acer", 8, 20'000}
	};
}