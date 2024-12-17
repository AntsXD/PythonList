#include "StringItem.hpp"
#include <sstream>


std::string StringItem::toString() const {
	std::stringstream ss;
	ss << nom;
	return ss.str();
}

ListItem* StringItem::copy() const {
	return new StringItem(*this);
}