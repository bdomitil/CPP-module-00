#include "contact.hpp"

class phonebook 
{
private :
	contact	_contacts[8];
	int _cont_num;
public :
	void search_contact();
	void add_contact ();
	void increase_cont_num();
	phonebook(){_cont_num = 0;};

};