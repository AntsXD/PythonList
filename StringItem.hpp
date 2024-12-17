#ifndef STRINGITEM_HPP
#define STRINGITEM_HPP

#include "ListItem.hpp"

class StringItem : public ListItem {

private:
	std::string nom;
public:
	StringItem(std::string nom = "") : nom(nom){}
	std::string toString() const override;
	StringItem* copy() const override;
};






#endif