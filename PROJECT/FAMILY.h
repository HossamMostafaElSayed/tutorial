#ifndef _FAMILY_H
#define _FAMILY_H
#include <iostream>

using namespace std;

class FAMILY
{
public:
    // income
    double income2{ 0 }; //income source 2
    double total_income{0} ;


    // transport
    double a_Bus_taxi_fare{ 0 }, p_Bus_taxi_fare{ 0 };
    double total_a_transport{ 0 };
    double total_p_transport{ 0 };
    double total_diff_transport{ 0 };

    //Food
    double a_food_drink{ 0 }, a_dining_out{ 0 };
    double p_food_drink{ 0 }, p_dining_out{ 0 };
    double total_a_food{ 0 };
    double total_p_food{ 0 };
    double total_diff_food{ 0 };


    //personal care
    double a_medicine{ 0 }, a_hair_nails{ 0 }, a_clothing{ 0 }, a_dry_cleaning{ 0 }, a_health_club{ 0 }, a_organization_fees{ 0 };
    double p_medicine{ 0 }, p_hair_nails{ 0 }, p_clothing{ 0 }, p_dry_cleaning{ 0 }, p_health_club{ 0 }, p_organization_fees{ 0 };
    double total_a_personal_care{ 0 };
    double total_p_personal_care{ 0 };
    double total_diff_personal_care{ 0 };


    // Entertainment
    double a_vedios_cds{ 0 }, a_cinema{ 0 }, a_concerts{ 0 }, a_events{ 0 }, a_theatre{ 0 };
    double p_vedios_cds{ 0 }, p_cinema{ 0 }, p_concerts{ 0 }, p_events{ 0 }, p_theatre{ 0 };
    double total_a_entertainment{ 0 };
    double total_p_entertainment{ 0 };
    double total_diff_entertainment{ 0 };


    //Loans
    double  personal{ 0 }, credit_card{ 0 };
    double  total_loans{ 0 };


    //insurance
    double health{ 0 }, life{ 0 };
    double total_insurance{ 0 };


    //expenses
    double a_expenses{ 0 };
    double p_expenses{ 0 };
    double expenses_diff{ 0 };

    //balance
    double a_balance{ 0 };
    double p_balance{ 0 };
    double balance_diff{ 0 };


    //Each Expenses in comman category percentage
    double transport_percentage{0};
    double food_percentage{ 0 };
    double personal_care_percentage{ 0 };
    double entertainment_percentage{ 0 };
    double loans_percentage{ 0 };
    double insurance_percentage{ 0 };



    //constructor
    FAMILY();
    
};

#endif // _FAMILY_H
