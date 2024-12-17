#ifndef STRINGITEM_HPP
#define STRINGITEM_HPP

#include "ListItem.hpp"

class StringItem : public ListItem {

private:
	std::string nom;
public:
	StringItem(std::string nom = "") : nom(nom){}
	std::string toString() const override;
	ListItem* copy() const override;
};






#endif