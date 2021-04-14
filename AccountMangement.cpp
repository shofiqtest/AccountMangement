// AccountMangement.cpp : Defines the entry point for the application.
//
/*
* Steps to create a banking account management application
* Create an interface()
*/
#include<iostream>
#include"AccountOperation.h"


int main() {

	string type;
	type = Ask_Type_Of_Account();
	Create_Account(type);
	ask_customer_choice();

	return 0;

}


