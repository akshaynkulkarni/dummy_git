#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vecti;
	vector<string> vectstr;

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
	cout << endl;

	// read strings
	cout << "Enter 3 strings: " << endl;
	for(int i = 0; i<3; i++) {
		string input;
		cin >> input;
		vectstr.push_back(input);
	}

	cout << "You entered :" << endl;
	for(string element:vectstr) {
		cout << element << " ";
	}
	cout << endl;

	for(unsigned int i = 0; i < vectstr.size(); i++)
		cout << vectstr[i] + " ";
	cout << endl;

	for(auto i = vectstr.begin(); i != vectstr.end(); i++)
		cout << *i + " ";
	cout << endl;

	// Count a given char and sort
	cout << "Number of 'b' in the string vector is: ";
	cout << count(vectstr[0].begin(), vectstr[0].end(), 'b');
	cout << endl;

	sort(vectstr.begin(), vectstr.end());
        cout << "sorted result:" << endl;
	for(string element:vectstr) {
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
