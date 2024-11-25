/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:42:01 by  souaguen         #+#    #+#             */
/*   Updated: 2024/11/20 23:39:37 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

void	displayDate(void)
{
	time_t		now;
	struct tm	*timeinfo;
	char		buffer[20];

	time(&now);
	timeinfo = localtime(&now);
	strftime(buffer, 20, "[%Y%m%e_%H%M%S] ", timeinfo);
	std::cout << buffer;
	return ;
}

Account::Account(int initial_deposit)
{
	(*this)._amount = initial_deposit;
	(*this)._accountIndex = Account::getNbAccounts();
	(*this)._nbDeposits = 0;
	(*this)._nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	displayDate();
	std::cout << "index:" << (*this)._accountIndex << ";";
	std::cout << "amount:" << (*this)._amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account(void)
{
	displayDate();
	std::cout << "index:" << (*this)._accountIndex << ";";
	std::cout << "amount:" << (*this)._amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	displayDate();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	displayDate();
	std::cout << "index:" << (*this)._accountIndex << ";";
	std::cout << "p_amount:" << (*this)._amount << ";";
	std::cout << "deposit:" << deposit << ";";
	(*this)._nbDeposits += 1;
	(*this)._amount += deposit;
	Account::_totalNbDeposits += 1;		
	Account::_totalAmount += deposit;
	std::cout << "amount:" << (*this)._amount << ";";	
	std::cout << "nb_deposits:" << (*this)._nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	displayDate();
	std::cout << "index:" << (*this)._accountIndex << ";";
	std::cout << "p_amount:" << (*this)._amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > (*this)._amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	(*this)._amount -= withdrawal;
	(*this)._nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << (*this)._amount << ";";
	std::cout << "nb_withdrawals:" << (*this)._nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return ((*this)._amount);
}

void	Account::displayStatus(void) const
{
	//index:0;amount:42;deposits:0;withdrawals:0
	displayDate();
	std::cout << "index:" << (*this)._accountIndex << ";";
	std::cout << "amount:" << (*this)._amount << ";";
	std::cout << "deposits:" << (*this)._nbDeposits << ";";
	std::cout << "withdrawals:" << (*this)._nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
