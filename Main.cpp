//============================================================================
// Name        : Assignment3.cpp
// Author      : Kareem
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "DLinkedList.cpp"
#include <stack>
#include <iomanip>
#include <string>
#include <algorithm>
//#include <assert.h>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {

	DLinkedList<int> theList; //initialize an empty list int size; //the size of the list to be sorted
	int n;
	char filename[80];
	cout << "Enter an output filename:";
	cin >> filename;
	ofstream out;
	out.open(filename);
	cout << "Enter the size of the list " << endl; cin >> size;
	srand(time(0));
	Node<int> *temp =theList.isFirst();
	for (int i=1; i<=size; i++){
		n = rand() % 100; //generate the elements randomly
		temp = theList.insert(n, temp);
	}
	out << "The original list is:"; theList.display(); //display the generated list theList.sort(); //sort using recursive selection sort out << "The sorted list is:"; theList.display(); //display the sorted list out.close();
	return 0;
}
