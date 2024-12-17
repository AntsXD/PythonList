#ifndef LISTITEN_HPP
#define LISTITEN_HPP

#include <iostream>
#include <String>


class ListItem {
public:
	virtual ~ListItem() {}
	virtual std::string toString() const = 0;
	virtual ListItem* copy() const = 0;
};


std::ostream& operator<<(std::ostream& out, const ListItem& item) ;





#endif
