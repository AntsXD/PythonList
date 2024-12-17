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

std::ostream& operator<<(std::ostream& out, PythonList list) {
	out << "[";
	for (int i = 0; i < list.list.size()-1; ++i) {
		out << list.list[i] << ",";
	}
	out << list.list[list.list.size() - 1] << "]";
	return out;
}