#include "Account.hpp"

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
    // Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
    
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}