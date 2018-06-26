/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 06:25:49 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 08:15:23 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t unixtime = time(NULL);
	struct tm *curr = localtime(&unixtime);

	std::cout << "[" << curr->tm_year + 1900 << curr->tm_mon + 1
		<< curr->tm_mday << "_" << curr->tm_hour << curr->tm_min << curr->tm_sec <<"]";
}

void 	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
		";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" <<
		Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits <<
		";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount <<
		";nb_deposits:" << _nbDeposits << std::endl;
}



bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	Account::_nbAccounts--;
}