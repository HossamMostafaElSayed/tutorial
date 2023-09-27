#include "MOTHER.h"
#include <iostream>
#include <iomanip>

using namespace std;


MOTHER::MOTHER()
{
    

}

void MOTHER::MotherData()
{
    cout << "---HELLO WELCOME TO MOTHER INCOME TRACKER---" << endl;
    cout << "---Your are going to be asked for some information---" << endl;


    cout << "Enter you first income: " << endl;
    cin >> income1;
    cout << "Enter you second income: " << endl;
    cin >> income2;
    total_income = income1 + income2;


    cout << "\n---TRANSPORT---" << endl;
    cout << "Enter actual and projected cost for vehiclePayment : " << endl;
    cin >> a_vehicle_payment >> p_vehicle_payment;
    cout << "Enter actual and projected cost for Bus and Taxi fares : " << endl;
    cin >> a_Bus_taxi_fare >> p_Bus_taxi_fare;
    cout << "Enter actual and projected cost for Insurance : " << endl;
    cin >> a_insurance >> p_insurance;
    cout << "Enter actual and projected cost for Licensing : " << endl;
    cin >> a_licensing >> p_licensing;
    cout << "Enter actual and projected cost for Fuel : " << endl;
    cin >> a_fuel >> p_fuel;
    cout << "Enter actual and projected cost for Maintenance : " << endl;
    cin >> a_maintenance >> p_maintenance;
    total_a_transport = a_vehicle_payment + a_Bus_taxi_fare + a_insurance + a_licensing + a_fuel + a_maintenance;
    total_p_transport = p_vehicle_payment + p_Bus_taxi_fare + p_insurance + p_licensing + p_fuel + a_maintenance;
    total_diff_transport = total_p_transport - total_a_transport;


    cout << "\n---FOOD---" << endl;
    cout << "Enter actual and projected cost for Food and Drinks : " << endl;
    cin >> a_food_drink >> p_food_drink;
    cout << "Enter actual and projected cost for Dining out : " << endl;
    cin >> a_dining_out >> p_dining_out;
    total_a_food = a_food_drink + a_dining_out;
    total_p_food = p_food_drink + p_dining_out;
    total_diff_food = total_p_food - total_a_food;


    cout << "\n---Insurance---" << endl;
    cout << "Enter the cost for Health : " << endl;
    cin >> health;
    cout << "Enter the cost for Life : " << endl;
    cin >> life;
    total_insurance = health + life;


    cout << "\n---PETS---" << endl;
    cout << "Enter actual and projected cost for Food : " << endl;
    cin >> a_food >> p_food;
    cout << "Enter actual and projected cost for Medical : " << endl;
    cin >> a_medical >> p_medical;
    cout << "Enter actual and projected cost for Grooming : " << endl;
    cin >> a_grooming >> p_grooming;
    total_a_pets = a_food + a_medical + a_toys + a_grooming;
    total_p_pets = p_food + p_medical + p_toys + p_grooming;
    total_diff_pets = total_p_pets - total_a_pets;


    cout << "\n---PERSONAL CARE---" << endl;
    cout << "Enter actual and projected cost for Medicines : " << endl;
    cin >> a_medicine >> p_medicine;
    cout << "Enter actual and projected cost for Hair and Nails : " << endl;
    cin >> a_hair_nails >> p_hair_nails;
    cout << "Enter actual and projected cost for Clothing : " << endl;
    cin >> a_clothing >> p_clothing;
    cout << "Enter actual and projected cost for Dry cleaning : " << endl;
    cin >> a_dry_cleaning >> p_dry_cleaning;
    cout << "Enter actual and projected cost for Health club : " << endl;
    cin >> a_health_club >> p_health_club;
    cout << "Enter actual and projected cost for Organization fees : " << endl;
    cin >> a_organization_fees >> p_organization_fees;
    total_a_personal_care = a_medicine + a_hair_nails + a_clothing + a_dry_cleaning + a_health_club + a_organization_fees;
    total_p_personal_care = p_medicine + p_hair_nails + p_clothing + p_dry_cleaning + p_health_club + p_organization_fees;
    total_diff_personal_care = total_p_personal_care - total_a_personal_care;


    cout << "\n---ENTERTAINMENT---" << endl;
    cout << "Enter actual and projected cost for Vedios and Cds : " << endl;
    cin >> a_vedios_cds >> p_vedios_cds;
    cout << "Enter actual and projected cost for Cinema : " << endl;
    cin >> a_cinema >> p_cinema;
    cout << "Enter actual and projected cost for Concerts : " << endl;
    cin >> a_concerts >> p_concerts;
    cout << "Enter actual and projected cost for Events : " << endl;
    cin >> a_events >> p_events;
    cout << "Enter actual and projected cost for Live theatre : " << endl;
    cin >> a_theatre >> p_theatre;
    total_a_entertainment = a_vedios_cds + a_cinema + a_concerts + a_events + a_theatre;
    total_p_entertainment = p_vedios_cds + p_cinema + p_concerts + p_events + p_theatre;
    total_diff_entertainment = total_p_entertainment - total_a_entertainment;


    cout << "---LOANS---" << endl;
    cout << "Enter the cost for Personal : " << endl;
    cin >> personal;
    cout << "Enter the cost for Credit card : " << endl;
    cin >> credit_card;
    total_loans = personal + credit_card;


    cout << "\n---TAXES---" << endl;
    cout << "Enter the cost for Income tax: " << endl;
    cin >> income_tax;
    cout << "Enter the cost for Council : " << endl;
    cin >> council_tax;
    cout << "Enter the cost for VAT : " << endl;
    cin >> vat_tax;
    total_taxes = income_tax + council_tax + vat_tax;


    cout << "\n---SAVING & INVESTMENT---" << endl;
    cout << "Enter the cost for Retirment Account : " << endl;
    cin >> retirment_account;
    cout << "Enter the cost for Investment Account  : " << endl;
    cin >> investment_account;
    total_saving = retirment_account + investment_account;


    cout << "\n---DONATIONS---" << endl;
    cout << "Enter the cost for First Charity : " << endl;
    cin >> charity_1;
    cout << "Enter the cost for Second Charity  : " << endl;
    cin >> charity_2;
    total_donation = charity_1 + charity_2;


    //expenses
    a_expenses = total_a_entertainment + total_a_food + total_a_personal_care + total_a_pets + total_a_transport + total_donation + total_loans + total_saving + total_taxes + total_insurance;
    p_expenses = total_p_entertainment + total_p_food + total_p_personal_care + total_p_pets + total_p_transport;
    expenses_diff = p_expenses - a_expenses;


    //balance
    a_balance = total_income - a_expenses;
    p_balance = total_income - p_expenses;
    balance_diff = p_balance - a_expenses;
}

void MOTHER::ExpensesPercnetage()
{
    //calculating the percentage in each category
    transport_percentage = (total_a_transport / a_expenses) * 100;
    food_percentage = (total_a_food / a_expenses) * 100;
    personal_care_percentage = (total_a_personal_care / a_expenses) * 100;
    entertainment_percentage = (total_a_entertainment / a_expenses) * 100;
    loans_percentage = (total_loans / a_expenses) * 100;
    insurance_percentage = (total_insurance / a_expenses) * 100;
    pets_percentage = (total_a_pets / a_expenses) * 100;
    taxes_percentage = (total_taxes / a_expenses) * 100;
    saving_percentage = (total_saving / a_expenses) * 100;
    donation_percentage = (total_donation / a_expenses) * 100;


    //Presenting data

    cout << "---MOTHER'S EXPENSES PERCENTAGE--" << endl;
    cout << "Transportaion Perscentage (%) =" << setprecision(2) << transport_percentage << endl;
    cout << "Insurance Perscentage (%) =" << setprecision(2) << insurance_percentage << endl;
    cout << "Food Perscentage (%) =" << setprecision(2) << food_percentage << endl;
    cout << "Personal care Perscentage (%) =" << setprecision(2) << personal_care_percentage << endl;
    cout << "Entertainment Perscentage (%) =" << setprecision(2) << entertainment_percentage << endl;
    cout << "Loans Perscentage (%) =" << setprecision(2) << loans_percentage << endl;
    cout << "Taxes Perscentage (%) =" << setprecision(2) << taxes_percentage << endl;
    cout << "Saving Perscentage (%) =" << setprecision(2) << saving_percentage << endl;
    cout << "Donation  Perscentage (%) =" << setprecision(2) << donation_percentage << endl;
    cout << "Pets Perscentage (%) =" << setprecision(2) << pets_percentage << endl;
}
