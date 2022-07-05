#include "layer.h"
#include "linked_list.h"
#include <fstream>

//#define DEBUG //Uncomment this to turn on debug mode

using namespace std;

int main()
{
	//Layer list
	LinkedList<Layer> lList;
	ifstream infile;
	infile.open("layers.txt");
	while (!infile.eof())
		infile >> lList;

	cout << "------ Sorted Layer List ------" << endl;
	lList.printList();
	
	return 0;
}