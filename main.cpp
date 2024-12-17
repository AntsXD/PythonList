#include<iostream>
#include "ListItem.hpp"
#include "NumberItem.hpp"
#include "StringItem.hpp"
#include "PythonList.hpp"



int main() {
	ListItem* pstr = new StringItem("Hello");
	std::cout << "Affichage d'un element string :" << *pstr << std::endl;
	ListItem* pnbr = new NumberItem(5);
	std::cout << "Affichage d'un element nombre :" << *pnbr << std::endl;
	

	ListItem* pstr_copy = pstr->copy();
	std::cout << "Affichage d'un element string apres copy: " << *pstr_copy<< std::endl;
	ListItem* pnbr_copy = pnbr->copy();
	std::cout << "Affichage d'un element string apres copy: " << *pnbr_copy<< std::endl;

	PythonList pyList;

	pyList.addItem(new StringItem("Hello"));
	pyList.addItem(new NumberItem(42));
	pyList.addItem(new StringItem("World"));
	pyList.addItem(new NumberItem(3.14));

	std::cout << "Liste orginale: " << pyList << std::endl;
	PythonList copiedList = pyList;
	std::cout << "Creation d'une liste a partir d'une autre: " << copiedList<< std::endl;
	PythonList assignedList;
	assignedList = pyList;
	std::cout << "Affecter une liste a une liste existante: " <<assignedList << std::endl;

	PythonList list1;
	list1.addItem(new StringItem("Hello"));
	list1.addItem(new NumberItem(42));

	PythonList list2;
	list2.addItem(new StringItem("World"));
	list2.addItem(new NumberItem(3.14));

	PythonList concatenatedList = list1 + list2;


	std::cout << "List 1: " << list1 << std::endl;
	std::cout << "List 2: " << list2 << std::endl;
	std::cout << "Concatenated List: " << concatenatedList << std::endl;

	delete pstr;
	delete pnbr;
	delete pstr_copy;
	delete pnbr_copy;




	return 0;
}