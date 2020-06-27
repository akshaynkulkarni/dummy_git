#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	string str1;

	cout << "Please enter a string :" << endl;
	cin >> str;
	cout << "You entered: " << str << endl;
	cout << "Length is  : " << str.length() << endl;

        cout << "Please enter two strings for string comparison :" << endl;
        cin >> str >> str1;

	cout << "You entered: " << str << " and " << str1 << endl;

	/* Compare two strings */
	if (str > str1)
		cout << str << " is greater than " << str1 << endl;
	else if (str < str1)
		cout << str1 << " is greater than " << str << endl;
	else
		cout << "Both are equal: " << str << " , " << str1 << endl;

	/* Compare lengths of string */
        if (str.length() > str1.length())
                cout << str << " is greater than " << str1 << " in length " << endl;
        else if (str.length() < str1.length())
                cout << str1 << " is greater than " << str << " in length " << endl;
        else
                cout << "Both are equal in length: " << str << " , " << str1 << endl;

        cout << "Please enter two strings: 1st main string and 2nd string for substring search:" << endl;
        cin >> str >> str1;

        cout << "You entered: " << str << " and " << str1 << endl;
	// We will write this code, once we merge to master branch

	return 0;
}
