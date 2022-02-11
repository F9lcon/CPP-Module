#include "PhoneBook.hpp"


PhoneBook::PhoneBook( void )
{
	// std::cout << "PhoneBook contructor called" << std::endl;
}
PhoneBook::~PhoneBook( void )
{
	// std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::add_contact( void )
{
	int	i;

	i = 0;
	while (i < 8 && this->_contacts[i].get_contact_index() != -1)
		i++;
	if (i == 8)
		i--;
	this->_contacts[i].set_new_data(i + 1);
}

int	PhoneBook::get_and_handle_input( void )
{
	std::string	input;

	std::cout << YELLOW << "Enter command.. The program only accepts ADD, SEARCH and EXIT"<< RESET << std::endl;
	std::getline(std::cin, input);
	if (input.compare(0, 4, "ADD") == 0)
		this->add_contact();
	if (input.compare(0, 5, "EXIT") == 0)
		return (1);
	if (input.compare(0, 7, "SEARCH") == 0)
		this->search_cmd();
	return (0);
}

void	PhoneBook::search_cmd( void )
{
	int	i;
	int	index_to_show;
	int	need_input;

	i = 0;
	need_input = 1;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i < 8 && this->_contacts[i].get_contact_index() != -1)
	{
		this->_contacts[i].show_contact_for_search();
		i++;
	}
	std::cout << std::endl;
	if (i > 0)
		std::cout << YELLOW << "Enter index to show full contact info"<< RESET << std::endl;
	else
		return ;
	while (need_input)
	{
		std::cin >> index_to_show;
		std::cin.clear();
		std::cin.ignore(10000,'\n');
		if ((index_to_show - 1) > i || index_to_show < 1)
			std::cout << RED << "Index is incorrect, try again" << RESET << std::endl;
		else
			break ;
	}
	this->_contacts[index_to_show - 1].show_full_info();
	
}