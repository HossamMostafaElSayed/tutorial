#ifndef _FATHER_H
#define _FATHER_H
#include "FAMILY.h"
#include <iostream>

using namespace std;

class FATHER :public FAMILY
{
    public:
    // income
    double income1{ 0 }; //income source 1
    


    // Housing
    double a_rent{ 0 }, a_phone_number{ 0 }, a_electricity{ 0 }, a_gas{ 0 }, a_water_sewer{ 0 }, a_cable{ 0 }, a_waste_removal{ 0 }, a_repairs{ 0 }, a_supplies{ 0 };
    double p_rent{ 0 }, p_phone_number{ 0 }, p_electricity{ 0 }, p_gas{ 0 }, p_water_sewer{ 0 }, p_cable{ 0 }, p_waste_removal{ 0 }, p_repairs{ 0 }, p_supplies{ 0 };
    double total_a_housing{ 0 };
    double total_p_housing{ 0 };
    double total_diff_housing{ 0 };

    //Transport
    double a_vehicle_payment{ 0 }, a_insurance{ 0 }, a_licensing{ 0 }, a_fuel{ 0 }, a_maintenance{ 0 };
    double p_vehicle_payment{ 0 }, p_insurance{ 0 }, p_licensing{ 0 }, p_fuel{ 0 }, p_maintenance{ 0 };
    double total_a_transport{ 0 };
    double total_p_transport{ 0 };
    double total_diff_transport{ 0 };


    //legal
    double a_lawyer{ 0 }, a_spousal_maintenace_support{ 0 }, a_payments_on_lien_judgment{ 0 };
    double p_lawyer{ 0 }, p_spousal_maintenace_support{ 0 }, p_payments_on_lien_judgment{ 0 };
    double total_a_legal{ 0 };
    double total_p_legal{ 0 };
    double total_diff_legal{ 0 };


    //taxes
    double income_tax{ 0 }, council_tax{ 0 }, vat_tax{ 0 };
    double total_taxes{ 0 };

    //insurance
    double home{ 0 };


    //saving and investments
    double retirment_account{ 0 }, investment_account{ 0 };
    double total_saving{ 0 };

    //Donation
    double charity_1{ 0 }, charity_2{ 0 };
    double total_donation{ 0 };


    // Children allowance
    double son_allowance{ 0 }, daughter_allowance{ 0 };
    double total_allowance{ 0 };


    //Expenses in Father's category percentage
    double housing_percentage{ 0 };
    double legal_percentage{ 0 };
    double taxes_percentage{ 0 };
    double saving_percentage{ 0 };
    double donation_percentage{ 0 };
    double allowance_percentage{ 0 };

    //Funtions
    FATHER();
    void FatherData();
    void ExpensesPercnetage();

};

#endif // _FATHER_H
