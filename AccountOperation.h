#pragma once
#include <string>
#include <iostream>

struct Account
{
	enum Type {CUSTOMER,ENTERPRISE,INVALID};
	long accountID;
	Type type;
	std::string name;
	float balance;
	std::string y_tunnus;
	std::string created;

	friend std::ostream& operator<<(std::ostream& out, const Account& a);

};

Account::Type Ask_Type_Of_Account();
void ask_customer_choice();
void Create_Account(Account::Type type);