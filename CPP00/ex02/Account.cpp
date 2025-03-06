/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:21:30 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 03:49:16 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <string.h>
#include <iostream>
#include <stdlib.h>

Account::~Account( void ){};

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){return _nbAccounts;}
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}

Account::Account(int initial_deposit ):_nbDeposits(0){
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbAccounts++;
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";amount:" << _amount
                << ";created" << std::endl;
}

void Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout   << " accounts:" << _nbAccounts
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals
                << std::endl;
}

void Account::_displayTimestamp( void ){
    time_t _time = time(NULL);
	struct tm * __time = localtime(&_time);
	
	std::cout	<< "[" <<(__time->tm_year + 1900);
	(__time->tm_mon > 10) ? (std::cout << __time->tm_mon) : (std::cout << "0" << __time->tm_mon);
	(__time->tm_mday > 10) ? (std::cout << __time->tm_mday) : (std::cout << "0" << __time->tm_mday);
	std::cout << "_";
	(__time->tm_hour > 10) ? (std::cout << __time->tm_hour) : (std::cout << "0" << __time->tm_hour);
	(__time->tm_min > 10) ? (std::cout << __time->tm_min) : (std::cout << "0" << __time->tm_min);
	(__time->tm_sec > 10) ? (std::cout << __time->tm_sec) : (std::cout << "0" << __time->tm_sec);
	std::cout << "]";
}

void Account::displayStatus( void )const{
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits 
                << ";withdrawals:" << _nbWithdrawals
                <<  std::endl;
}


void Account::makeDeposit(int deposit){
    
}
