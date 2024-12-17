#ifndef NUMBERITEM_HPP
#define NUMBERITEM_HPP


#include "ListItem.hpp"


class NumberItem : public ListItem {
private:
	int number;
public:
	NumberItem(int number = 0): number(number){}
	std::string toString() const override;

	NumberItem* copy() const override;

};



#endif