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
	std::cout << "Timestamp " << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount() <<";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "Timestamp " << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "Timestamp " << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "Timestamp " << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "Timestamp " << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << std::endl;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << this->_amount << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (0);
	}
}

