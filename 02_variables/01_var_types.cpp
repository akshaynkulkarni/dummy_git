# include <iostream>

using namespace std;

int main()
{
	char a;
	int b;
	float c;
	double d;

	cout << "Enter char a, int b, float c, double d :" << endl;
	cin >> a >> b >> c >> d;

	cout << "You entered: " << endl << a << " " << b << " " << c << " " << d << endl;

	cout << "Size on my machine:" << endl;
	cout << "1. char a: " << sizeof(a) << endl;
	cout << "2. int b: " << sizeof(b) << endl;
	cout << "3. float c: " << sizeof(c) << endl;
	cout << "4. double: " << sizeof(d) << endl;

	return 0;
}
