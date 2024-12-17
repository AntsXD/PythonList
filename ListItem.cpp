#include "ListItem.hpp"


std::ostream& operator<<(std::ostream& out, const ListItem& item) {
	out << item.toString();
	return out;
}
