/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:21:30 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/06 01:58:27 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){return _nbAccounts;}
int	Account::getTotalAmount( void ){return _totalAmount;}
int	Account::getNbDeposits( void ){return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ){return _totalNbWithdrawals;}

Account::~Account(){            
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

Account::Account(int initial_deposit){
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbAccounts++;
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex 
                << ";amount:" << _amount
                << ";created" << std::endl;
}

void Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

void Account::_displayTimestamp( void ){

    time_t now = time(NULL);
    struct tm *tim = localtime(&now);

    std::cout << tim->tm_year + 1900;
    ((tim->tm_mon + 1) < 10) ? std::cout << "0" << tim->tm_mon + 1: std::cout << tim->tm_mon + 1;
    ((tim->tm_mday ) < 10) ? std::cout << "0" << tim->tm_mday : std::cout << tim->tm_mday;
    ((tim->tm_hour + 1) < 10) ? std::cout << "_0" << tim->tm_hour: std::cout << "_" << tim->tm_hour;
    ((tim->tm_min + 1) < 10) ? std::cout << "0" << tim->tm_min   : std::cout << tim->tm_min;
    ((tim->tm_sec + 1) < 10) ? std::cout << "0" << tim->tm_sec : std::cout << tim->tm_sec;
}

void Account::displayAccountsInfos( void){
    _displayTimestamp();
    std::cout   << " accounts:" << _nbAccounts
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals
                << std::endl;
}

void Account::makeDeposit(int deposit){
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex 
                << ";p_amount:" << _amount
                << ";deposit:" << deposit
                << ";amount:" << _amount + deposit
                << ";nb_deposits:" << (++_nbDeposits)
                << std::endl;
    _amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout   << " index:" << _accountIndex 
                << ";p_amount:" << _amount;
    if (withdrawal > _amount)
        return (std::cout << ";withdrawal:refused" << std::endl,false);
    std::cout   << ";withdrawal:" << withdrawal
                << ";amount:" << _amount - withdrawal
                << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return (true);
}

int Account::checkAmount()const{
    
    return (_amount < 0);
}
