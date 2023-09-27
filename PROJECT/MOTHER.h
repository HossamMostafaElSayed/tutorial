#ifndef _MOTHER_H
#define _MOTHER_H
#include "FAMILY.h"
#include <iostream>

using namespace std;

class MOTHER : public FAMILY
{
public :
    // income

    double income1{ 0 }; //income source 1


    //Transport
    double a_vehicle_payment{ 0 }, a_insurance{ 0 }, a_licensing{ 0 }, a_fuel{ 0 }, a_maintenance{ 0 };
    double p_vehicle_payment{ 0 }, p_insurance{ 0 }, p_licensing{ 0 }, p_fuel{ 0 }, p_maintenance{ 0 };
    double total_a_transport{ 0 };
    double total_p_transport{ 0 };
    double total_diff_transport{ 0 };


    //pets
    double a_food{ 0 }, a_medical{ 0 }, a_toys{ 0 }, a_grooming{ 0 };
    double p_food{ 0 }, p_medical{ 0 }, p_toys{ 0 }, p_grooming{ 0 };
    double total_a_pets{ 0 };
    double total_p_pets{ 0 };
    double total_diff_pets{ 0 };


    //taxes
    double income_tax{ 0 }, council_tax{ 0 }, vat_tax{ 0 };
    double total_taxes{ 0 };


    //saving and investments
    double retirment_account{ 0 }, investment_account{ 0 };
    double total_saving{ 0 };


    //Donation
    double charity_1{ 0 }, charity_2{ 0 };
    double total_donation{ 0 };

    //Expenses in Mother's category percentage
    double taxes_percentage{ 0 };
    double saving_percentage{ 0 };
    double donation_percentage{ 0 };
    double pets_percentage{ 0 };


    //Funtions
    MOTHER();
    void MotherData();
    void ExpensesPercnetage();

};

#endif // _MOTHER_H
