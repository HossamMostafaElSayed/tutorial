#ifndef _SON_H
#define _SON_H
#include <iostream>
#include "FAMILY.h"

using namespace std;


class SON :public FAMILY
{  
public:

	//income
	double allowance{ 1000 };

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



	//Funtions
	SON();
	void SonData();
	void ExpensesPercnetage();

};

#endif // _SON_H
