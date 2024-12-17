#include<iostream>
#include "ListItem.hpp"
#include "NumberItem.hpp"
#include "StringItem.hpp"



int main() {
	ListItem* pstr = new StringItem("Hello");
	std::cout << "Affichage d'un element string :" << *pstr << std::endl;
	ListItem* pnbr = new NumberItem(5);
	std::cout << "Affichage d'un element nombre :" << *pnbr << std::endl;
	

	ListItem* pstr_copy = pstr->copy();
	std::cout << "Affichage d'un element string apres copy: " << *pstr_copy<< std::endl;
	ListItem* pnbr_copy = pnbr->copy();
	std::cout << "Affichage d'un element string apres copy: " << *pnbr_copy<< std::endl;


	delete pstr;
	delete pnbr;
	delete pstr_copy;
	delete pnbr_copy;




	return 0;
}