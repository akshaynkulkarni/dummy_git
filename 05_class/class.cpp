#include<iostream>
#include"rect.h"
using namespace std;


int main(void)
{
	class rectangle rect;
	cout << "Enter length and breadth " << endl;
	cin >> rect.length >> rect.width;
	cout << "Area is : " << rect.get_area() << endl;
	cout << "Perimeter is : " << rect.get_perimeter() << endl;

	return 0;
}

