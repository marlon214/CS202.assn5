#include "layer.h"
#include "linked_list.h"
#include <fstream>

//#define DEBUG //Uncomment this to turn on debug mode

using namespace std;

int main()
{
	//Float list
	LinkedList<double> dList;

	dList.insertSorted(4.0);
	#ifdef DEBUG
	cout << "After inserting first thing:" << endl;
	dList.printList();
	#endif
	dList.insertSorted(6.0);
	dList.insertSorted(-2.7);
	#ifdef DEBUG
	cout << "After inserting a new head:" << endl;
	dList.printList();
	#endif
	dList.insertSorted(5.0);
	dList.insertSorted(5.2);

	cout << "------ Sorted Float List ------" << endl;

	dList.printList();

	cout << "------ Removing some floats ------" << endl;
	dList.deleteItem(4.0);
	#ifdef DEBUG
	dList.printList();
	#endif
	dList.deleteItem(-2.7);

	dList.printList();

return 0;
}