#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vecti;

	//read console input of numbers and store in a vector
	cout << " Hey!! Please enter 10 numbers: " << endl;
	for(int i = 0, input; i < 10; i++) {
		cin >> input;
		vecti.push_back(input);
	}

	cout << "You entered :" << endl;
	for(int element:vecti) {
		cout << element << "  ";
	}
	return 0;
}
