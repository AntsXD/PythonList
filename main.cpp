#include "StringItem.hpp"
#include "NumberItem.hpp"

#include "PythonList.hpp"

using std::cout;
using std::endl;

int main() {
    // partie 1
    ListItem* pstr = new StringItem("Hello");
    cout << "Affichage d'un element string :" << *pstr << endl;
    ListItem* pnbr = new NumberItem(5);
    cout << "Affichage d'un element nombre :" << *pnbr << endl;

    // partie 2
    ListItem* pstr_copy = pstr->copy();
    cout << "Affichage d'un element string apres copy: " << *pstr_copy << endl;
    ListItem* pnbr_copy = pnbr->copy();
    cout << "Affichage d'un element string apres copy: " << *pnbr_copy << endl;
    delete pstr;
    delete pnbr;
    delete pstr_copy;
    delete pnbr_copy;

    // partie 3
    PythonList pyList;

    pyList.addItem(new StringItem("Hello"));
    pyList.addItem(new NumberItem(42));
    pyList.addItem(new StringItem("World"));
    pyList.addItem(new NumberItem(3.14));

    cout << "Liste orginale: " << pyList << endl;
    PythonList copiedList = pyList;
    cout << "Creation d'une liste a partir d'une autre: " << copiedList << endl;
    PythonList assignedList;
    assignedList = pyList;
    cout << "Affecter une liste a une liste existante: " << assignedList << endl;
    // bonus
    PythonList list1;
    list1.addItem(new StringItem("Hello"));
    list1.addItem(new NumberItem(42));

    PythonList list2;
    list2.addItem(new StringItem("World"));
    list2.addItem(new NumberItem(3.14));


    PythonList concatenatedList = list1 + list2;

    cout << "List 1: " << list1 << endl;
    cout << "List 2: " << list2 << endl;
    cout << "Concatenated List: " << concatenatedList << endl;

    return 0;

}