#ifndef PYTHONLIST_HPP
#define PYTHONLIST_HPP

#include <vector>
#include "ListItem.hpp"

class PythonList {
private:
	std::vector<ListItem*> list;

	friend std::ostream& operator<<(std::ostream&, PythonList list);

public:
	
	PythonList(){}
	PythonList(const PythonList& other);
	~PythonList();

	void addItem(ListItem* item);
	
	PythonList& operator=(const PythonList& Other);

	PythonList operator+(const PythonList&) const;
	
};

std::ostream& operator<<(std::ostream&, PythonList list);







#endif