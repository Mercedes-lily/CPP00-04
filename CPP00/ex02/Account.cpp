#include "Account.hpp"
#include <iostream>

int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_nbAccounts = 0;

Account::Account( int initial_deposit) : _amount(initial_deposit)
{
	static int i = 0;
	this->_accountIndex = i;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;
	std::cout << "Timestamp " << "index:" << i << ";amount:" << initial_deposit <<";created" << std::endl;
	i++;
}

Account::~Account( void )
{

}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "Timestamp " << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() <<";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
