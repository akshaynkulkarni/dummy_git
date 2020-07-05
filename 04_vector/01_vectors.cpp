#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vecti;

	//read console input of numbers and store in a vector
	cout << "Hey!! Please enter 10 numbers: " << endl;
	for(int i = 0, input; i < 10; i++) {
		cin >> input;
		vecti.push_back(input);
	}

	cout << "Size of the int vector: " << vecti.size() << endl;
	cout << "You entered :" << endl;
	/* Range based for: A C++ 11 feature.
	 * for every element in vecti int vector,
	 * do something with each element once.
	 */
	for(int element:vecti) {
		cout << element << "  ";
	}

	cout << endl;
	/* Index based acessing the vector */
	vecti[5] = 99;
	vecti[7] = 99;
	vecti[8] = 99;
	/* We have to resize the int vector,
	 * if one wants to add elements to array index wise
	 * example: vector.resize(n)
	 * if n > current size, the vector has new elements (initialized to 0) with new size
	 * if n < current size, the elements in the vector is dropped post (n-1) index
	 */
	vecti.resize(15);
	vecti[10] = 55;
	vecti[11] = 100;
	cout << "Modifying elemenst and size " << endl;
	cout << "Size of the int vector resize: " << vecti.size() << endl;
	for (unsigned int i = 0; i < vecti.size(); i++)
		cout << vecti[i] << " ";

	cout << endl;

	vecti.resize(10);

        cout << endl << "Size of the int vector resize: " << vecti.size() << endl;
        for (unsigned int i = 0; i < vecti.size(); i++)
                cout << vecti[i] << " ";

	cout << endl;
	/* Access by iterator (pointer) */
	for (auto i = vecti.begin(); i != vecti.end(); i++)
		cout << *i << " ";

	cout << endl;

	/* Basic functions from Algorithm header
	 * count and sort
	 */
	cout << "Number of 99s in int vector is ";
	cout << count(vecti.begin(), vecti.end(), 99);
	cout << endl;
	cout << "Sorting result: ";
	sort(vecti.begin(), vecti.end());
	        for (auto i = vecti.begin(); i != vecti.end(); i++)
                cout << *i << " ";

        cout << endl;
	return 0;
}
