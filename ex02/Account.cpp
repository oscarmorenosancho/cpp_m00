/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:21:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/12 13:22:49 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <iomanip>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:"<< _amount << ";created";
	std::cout << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:";
	std::cout << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:";
	std::cout << BLUE << _amount  << WHITE << ";created";
	std::cout << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:";
	std::cout << BLUE << _amount  << WHITE << ";created";
	std::cout << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << BLUE << _nbAccounts << WHITE;
	std::cout << ";total:";
	std::cout << BLUE << _totalAmount << WHITE;
	std::cout << ";deposits:";
	std::cout << BLUE << _totalNbDeposits << WHITE;
	std::cout << ";withdrawals:";
	std::cout << BLUE << _totalNbWithdrawals << WHITE;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << BLUE << _accountIndex << WHITE;
	std::cout << ";p_amount:";
	std::cout << BLUE << _amount << WHITE;
	std::cout << ";deposit:";
	std::cout << BLUE << deposit << WHITE;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";amount:";
	std::cout << BLUE << _amount << WHITE;
	std::cout << ";nb_deposits:";
	std::cout << BLUE << _nbDeposits << WHITE;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool	posible;

	_displayTimestamp();
	std::cout << "index:";
	std::cout << BLUE << _accountIndex << WHITE;
	std::cout << ";p_amount:";
	std::cout << BLUE << _amount << WHITE;
	std::cout << ";withdrawal:";
	posible = (withdrawal <= _amount);
	if (posible)
	{
		std::cout << BLUE << withdrawal << WHITE;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << ";amount:";
		std::cout << BLUE << _amount << WHITE;
		std::cout << ";nb_withdrawals:";
		std::cout << BLUE << _nbWithdrawals << WHITE;
	}
	else
	{
		std::cout << "refused";
	}
	std::cout << std::endl;
	return (posible);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:";
	std::cout << BLUE << _amount << WHITE;
	std::cout << ";deposits:";
	std::cout << BLUE << _nbDeposits << WHITE;
	std::cout << ";withdrawals:";
	std::cout << BLUE << _nbWithdrawals << WHITE;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::tm* timestamp = std::localtime(&now);
	std::cout << "[";
	std::cout << std::setfill ('0')<< std::setw(4) ;
	std::cout << timestamp->tm_year + 1900;
	std::cout << std::setfill ('0')<< std::setw(2) ;
	std::cout << (timestamp->tm_mon + 1);
	std::cout << std::setfill ('0')<< std::setw(2) ;
	std::cout << (timestamp->tm_mday);
	std::cout << "_";
	std::cout << std::setfill ('0')<< std::setw(2) ;
	std::cout << timestamp->tm_hour;
	std::cout << std::setfill ('0')<< std::setw(2) ;
	std::cout << timestamp->tm_min;
	std::cout << std::setfill ('0')<< std::setw(2) ;
	std::cout << timestamp->tm_sec;
	std::cout << "] ";
}