#include "PythonList.hpp"

void PythonList::addItem(ListItem* item) {
	list.push_back(item);
}


PythonList::~PythonList() {
	for (int i = 0; i < list.size(); ++i) {
		delete list[i];
		list[i] = nullptr;
	}
}


PythonList PythonList::operator=(PythonList Other) {
	for (int i = 0; i < Other.list.size(); ++i) {
		addItem(Other.list[i]->copy());

	}
}