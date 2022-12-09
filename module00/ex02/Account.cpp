/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:41:23 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/09 18:49:43 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"


Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts; 
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";closed" << std::endl;
	return;
}

void Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << this->_accountIndex \
	<< ";p_amount:" << this->_amount \
	<< ";deposit:" << deposit;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	
	std::cout \
	<< ";amount:" << this->_amount \
	<< ";nb_deposits:" << this->_nbDeposits \
	<< std::endl;
	return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << this->_accountIndex \
	<< ";p_amount:" << this->_amount;
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout \
		<< ";withdrawal:" << withdrawal \
		<< ";amount:" << this->_amount \
		<< ";nb_withdrawals:" << this->_nbWithdrawals \
		<< std::endl;
		return (true);
	}
	std::cout \
	<< ";withdrawal:refused" << std::endl;
	return (false);
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << this->_accountIndex \
	<< ";amount:" << this->_amount \
	<< ";deposits:" << this->_nbDeposits \
	<< ";withdrawals:" << this->_nbWithdrawals \
	<< std::endl;
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);	
}

void Account::_displayTimestamp( void )
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout \
	<< "accounts:" << Account::getNbAccounts() \
	<< ";total:" << Account::getTotalAmount() \
	<< ";deposits:" << Account::getNbDeposits() \
	<< ";withdrawals:" << Account::getNbWithdrawals() \
	<< std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
