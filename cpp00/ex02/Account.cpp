/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:22:57 by jhii              #+#    #+#             */
/*   Updated: 2022/07/08 16:22:24 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <functional>
#include <sstream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	std::tm *ltm = localtime(&now);
	std::stringstream	month;
	std::stringstream	day;
	std::stringstream	hour;
	std::stringstream	min;
	std::stringstream	sec;

	month << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
	day << std::setfill('0') << std::setw(2) << ltm->tm_mday;
	hour << std::setfill('0') << std::setw(2) << ltm->tm_hour;
	min << std::setfill('0') << std::setw(2) << ltm->tm_min;;
	sec << std::setfill('0') << std::setw(2) << ltm->tm_sec;;

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year << month.str() << day.str();
	std::cout << "_" << hour.str() << min.str() << sec.str();
	std::cout << "] ";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts = _nbAccounts + 1;
	_totalAmount = _totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits = _nbDeposits + 1;
	std::cout << "nb_deposits:" << _nbDeposits;
	_totalNbDeposits = _totalNbDeposits + 1;
	_totalAmount = _totalAmount + deposit;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused";
		std::cout << std::endl;
		return (false);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount = _amount - withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals = _nbWithdrawals + 1;
		std::cout << "nb_withdrawals:" << _nbWithdrawals;
		_totalNbWithdrawals = _totalNbWithdrawals + 1;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}
