#include "NumberItem.hpp"
#include <sstream>

std::string NumberItem::toString() const {
	std::stringstream ss;
	ss << number;
	return ss.str();
}


NumberItem* NumberItem::copy() const {
	return new NumberItem(*this);

}