#include"rect.h"

using namespace std;

float rectangle::get_area(void)
{
	rectangle::calc_area();
	return area;
}

float rectangle::get_perimeter(void)
{
	rectangle::calc_perimeter();
	return perimeter;
}
rectangle::rectangle(void) {
	length = 0;
	width = 0;
	area = 0;
	perimeter = 0;
}

void rectangle::calc_area(void){
	area = length * width;
}

void rectangle::calc_perimeter(void) {
	perimeter = 2 * length + 2 * width;
}
