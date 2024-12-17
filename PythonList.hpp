#ifndef PYTHONLIST_HPP
#define PYTHONLIST_HPP

#include <vector>
#include "ListItem.hpp"

class PythonList {
private:
	std::vector<ListItem*> list;

public:

	PythonList(){}
	~PythonList();

	void addItem(ListItem* item);
	
	PythonList operator=(PythonList Other);


};








#endif