/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:59:05 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 15:21:01 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;
	//static functions and variables accessed using the class name
	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );//displays information about the total number of accounts,
	// total amount, total number of deposits, and total number of withdrawals.

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:
	//static variables
	static int	_nbAccounts;//keeps track of the total number of accounts created
	static int	_totalAmount;//total amount of money held in all accounts.
	static int	_totalNbDeposits;// total number of deposits made across all accounts.
	static int	_totalNbWithdrawals;//total number of withdrawals made across all accounts.

	static void	_displayTimestamp( void );
	//instance variables
	int				_accountIndex;//unique index of the account.
	int				_amount;//current amount of money in the account.
	int				_nbDeposits;// number of deposits made for a specific account.
	int				_nbWithdrawals;// number of withdrawals made for a specific account.

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
