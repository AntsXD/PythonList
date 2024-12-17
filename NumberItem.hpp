#ifndef NUMBERITEM_HPP
#define NUMBERITEM_HPP


#include "ListItem.hpp"


class NumberItem : public ListItem {
private:
	double number;
public:
	NumberItem(double number = 0): number(number){}
	std::string toString() const override;

	ListItem* copy() const override;

};



#endif