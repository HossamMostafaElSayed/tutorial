#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class PERSON
{
public:
    // income and expenses
    double income1{0}, income2{0};
    double total_income ;
    
    // Housing
    double a_rent{0}, a_phone_number{0}, a_electricity{0}, a_gas{0}, a_water_sewer{0}, a_cable{0}, a_waste_removal{0}, a_repairs{0}, a_supplies{0};
    double p_rent{0}, p_phone_number{0}, p_electricity{0}, p_gas{0}, p_water_sewer{0}, p_cable{0}, p_waste_removal{0}, p_repairs{0}, p_supplies{0};
    double total_a_housing{0} ;
    double total_p_housing{0} ;
    double total_diff_housing{0}; 
    
    //Transport
    double a_vehicle_payment{0}, a_Bus_taxi_fare{0}, a_insurance{0}, a_licensing{0}, a_fuel{0}, a_maintenance{0};
    double p_vehicle_payment{0}, p_Bus_taxi_fare{0}, p_insurance{0}, p_licensing{0}, p_fuel{0}, p_maintenance{0};
    double total_a_transport{0};
    double total_p_transport{0} ;
    double total_diff_transport{0} ;
    
    //Food
    double a_food_drink{0}, a_dining_out{0};
    double p_food_drink{0}, p_dining_out{0};
    double total_a_food{0} ;
    double total_p_food {0};
    double total_diff_food{0} ;
    
    //pets
    double a_food{0}, a_medical{0}, a_toys{0}, a_grooming{0};
    double p_food{0}, p_medical{0}, p_toys{0}, p_grooming{0};
    double total_a_pets {0};
    double total_p_pets {0};
    double total_diff_pets{0} ;
    
    //personal care
    double a_medicine{0}, a_hair_nails{0}, a_clothing{0}, a_dry_cleaning{0}, a_health_club{0}, a_organization_fees{0};
    double p_medicine{0}, p_hair_nails{0}, p_clothing{0}, p_dry_cleaning{0}, p_health_club{0}, p_organization_fees{0};
    double total_a_personal_care{0} ;
    double total_p_personal_care {0};
    double total_diff_personal_care{0} ;
    
    // Entertainment
    double a_vedios_cds{0}, a_cinema{0}, a_concerts{0}, a_events{0}, a_theatre{0};
    double p_vedios_cds{0}, p_cinema{0}, p_concerts{0}, p_events{0}, p_theatre{0};
    double total_a_entertainment {0};
    double total_p_entertainment {0};
    double total_diff_entertainment{0} ;
    
    //legal
    double a_lawyer{0},a_spousal_maintenace_support{0},a_payments_on_lien_judgment{0};
    double p_lawyer{0},p_spousal_maintenace_support{0},p_payments_on_lien_judgment{0};
    double total_a_legal {0};
    double total_p_legal{0} ;
    double total_diff_legal{0} ;
    
    //Loans
    double  personal{0},student{0},credit_card{0};
    double  total_loans {0};
    
    
    //taxes
    double income_tax{0},council_tax{0},vat_tax{0};
    double total_taxes {0};
    
    //insurance
    double health{0},home{0},life{0};
    double total_insurance{0} ;
    
    
    //saving and investments
    double retirment_account{0},investment_account{0};
    double total_saving {0};
    
    //Donation
    double charity_1{0},charity_2{0};
    double total_donation{0} ;
    
    //expenses
    double a_expenses {0};
    double p_expenses {0};
    double expenses_diff {0};
    
    //balance
    double a_balance {0};
    double p_balance {0};
    double balance_diff {0};
    
    //Percentage
    double Transport_percentage{0};
    double Food_percentage{ 0 };
    double Pets_percentage{ 0 };
    double Legal_percentage{ 0 };
    double Personal_care_percentage{ 0 };
    double Entertainment_percentage{ 0 };
    double Loans_percentage{ 0 };
    double Taxes_percentage{ 0 };
    double Insurance_percentage{ 0 };
    double saving_investments_percentage{ 0 };
    double Donations_percentage{ 0 };
    
    
    //Constructor
    PERSON();
};

#endif // PERSON_H
