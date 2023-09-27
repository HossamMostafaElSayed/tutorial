#ifndef _DAUGHTER_H
#define _DAUGHTER_H
#include <iostream>
#include "FAMILY.h"

using namespace std;

class DAUGHTER :public FAMILY
{
public:
	//income
	double allowance{ 0 };

	// Education
	double a_courses{ 0 }, a_supplies{ 0 };
	double p_courses{ 0 }, p_supplies{ 0 };
	double total_a_Education{ 0 };
	double total_p_Education{ 0 };
	double total_diff_Education{ 0 };


	// loans
	double student{ 0 };


	//Expenses in Son's category percentage
	double education_percentage{ 0 };


	//Functions
	DAUGHTER();
	void DaughterData();
	void ExpensesPercnetage();

};


#endif // _DAUGHTER_H
