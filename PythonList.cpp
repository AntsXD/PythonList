#include "PythonList.hpp"

void PythonList::addItem(ListItem* item) {
	list.push_back(item);
}


PythonList::PythonList(const PythonList& other) {
	for (const auto& item : other.list) {
		list.push_back(item->copy());
	}
}

PythonList PythonList::operator+(const PythonList& other) const {
	PythonList Temp;
	for (const auto& item : this->list) {
		Temp.addItem(item->copy());
	}
	for (const auto& item : other.list) {
		Temp.addItem(item->copy());
	}
	return Temp;
}



PythonList::~PythonList() {
	std::cout << "Desctructeur de PythonList appele" << std::endl;
	for (auto item:list) {
		delete item;	
	}
	
}


PythonList& PythonList::operator=(const PythonList& Other) {
	if (this == &Other) {
		return *this;
	}
	for (auto item : list) {
		delete item;
	}
	list.clear();

	for (const auto& item : Other.list) {
		addItem(item->copy());
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, PythonList list) {
	out << "[";
	for (int i = 0; i < list.list.size()-1; ++i) {
		out << *(list.list[i]) << ",";
	}
	out << *(list.list[list.list.size() - 1]) << "]"<<std::endl;
	return out;
}