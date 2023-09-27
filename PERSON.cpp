#include "PERSON.h"
#include <iomanip>
#include <iostream>
#include <iomanip>

using namespace std;

PERSON::PERSON()
{
    cout << "---HELLO WELCOME TO PERSONAL INCOME TRACKER---" << endl;
    cout << "---Your are going to be asked for some information---" << endl;

    cout << "Enter you first income: " << endl;
    cin >> income1;
    cout << "Enter you second income: " << endl;
    cin >> income2;
    total_income = income1 + income2;

    cout << "\nLet's begin\n ---HOUSING---" << endl;
    cout << "Enter actual and projected cost for Rent : " << endl;
    cin >> a_rent >> p_rent;
    cout << "Enter actual and projected cost for Phone number : " << endl;
    cin >> a_phone_number >> p_phone_number;
    cout << "Enter actual and projected cost for Electricity : " << endl;
    cin >> a_electricity >> p_electricity;
    cout << "Enter actual and projected cost for Gas : " << endl;
    cin >> a_gas >> p_gas;
    cout << "Enter actual and projected cost for Water and Sewer : " << endl;
    cin >> a_water_sewer >> p_water_sewer;
    cout << "Enter actual and projected cost for Cable : " << endl;
    cin >> a_cable >> p_cable;
    cout << "Enter actual and projected cost for Waste removal : " << endl;
    cin >> a_waste_removal >> p_waste_removal;
    cout << "Enter actual and projected cost for Repairs : " << endl;
    cin >> a_repairs >> p_repairs;
    cout << "Enter actual and projected cost for Supplies : " << endl;
    cin >> a_supplies >> p_supplies;
    total_a_housing = a_rent + a_phone_number + a_electricity + a_gas + a_water_sewer + a_cable + a_waste_removal + a_repairs + a_supplies;
    total_p_housing = p_rent + p_phone_number + p_electricity + p_gas + p_water_sewer + p_cable + p_waste_removal + p_repairs + p_supplies;
    total_diff_housing = total_p_housing - total_a_housing;

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

    cout << "\n---Insurance---" << endl;
    cout << "Enter the cost for Home : " << endl;
    cin >> home;
    cout << "Enter the cost for Health : " << endl;
    cin >> health;
    cout << "Enter the cost for Life : " << endl;
    cin >> life;
    total_insurance = health + home + life;

    cout << "\n---FOOD---" << endl;
    cout << "Enter actual and projected cost for Food and Drinks : " << endl;
    cin >> a_food_drink >> p_food_drink;
    cout << "Enter actual and projected cost for Dining out : " << endl;
    cin >> a_dining_out >> p_dining_out;
    total_a_food = a_food_drink + a_dining_out;
    total_p_food = p_food_drink + p_dining_out;
    total_diff_food = total_p_food - total_a_food;

    cout << "\n---PETS---" << endl;
    cout << "Enter actual and projected cost for Food : " << endl;
    cin >> a_food >> p_food;
    cout << "Enter actual and projected cost for Medical : " << endl;
    cin >> a_medical >> p_medical;
    cout << "Enter actual and projected cost for Grooming : " << endl;
    cin >> a_grooming >> p_grooming;
    cout << "Enter actual and projected cost for Toys : " << endl;
    cin >> a_toys >> p_toys;
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
    cout << "Enter the cost for Student : " << endl;
    cin >> student;
    cout << "Enter the cost for Credit card : " << endl;
    cin >> credit_card;
    total_loans = personal + student + credit_card;

    cout << "\n---TAXES---" << endl;
    cout << "Enter the cost for Income tax: " << endl;
    cin >> income_tax;
    cout << "Enter the cost for Council : " << endl;
    cin >> council_tax;
    cout << "Enter the cost for VAT : " << endl;
    cin >> vat_tax;
    total_taxes = income_tax + council_tax + vat_tax;

    cout << "\n---SAVING---" << endl;
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

    cout << "\n---LEGAL---" << endl;
    cout << "Enter actual and projected cost for Lawyer : " << endl;
    cin >> a_lawyer >> p_lawyer;
    cout << "Enter actual and projected cost for Spousal Maintenace Support : " << endl;
    cin >> a_spousal_maintenace_support >> p_spousal_maintenace_support;
    cout << "Enter actual and projected cost for Payments On Lien Judgment : " << endl;
    cin >> a_payments_on_lien_judgment >> p_payments_on_lien_judgment;
    total_a_legal = a_lawyer + a_spousal_maintenace_support + a_payments_on_lien_judgment;
    total_p_legal = p_lawyer + p_spousal_maintenace_support + p_payments_on_lien_judgment;
    total_diff_legal = total_p_legal - total_a_legal;
    
    //expenses
    a_expenses = total_a_housing + total_a_entertainment + total_a_food + total_a_legal + total_a_personal_care + total_a_pets + total_a_transport + total_donation + total_loans + total_saving + total_taxes + total_insurance;
    p_expenses = total_p_housing + total_p_entertainment + total_p_food + total_p_legal + total_p_personal_care + total_p_pets + total_p_transport;
    expenses_diff = p_expenses - a_expenses;
    
    //balance
    a_balance = total_income - a_expenses;
    p_balance = total_income - p_expenses;
    balance_diff = p_balance - a_balance;
    
    //Percentage
    Transport_percentage = (total_a_transport/a_expenses)*100;
    Food_percentage = (total_a_food/a_expenses)*100;
    Pets_percentage = (total_a_pets/a_expenses)*100;
    Legal_percentage = (total_a_legal/a_expenses)*100;
    Personal_care_percentage = (total_a_personal_care/a_expenses)*100;
    Entertainment_percentage = (total_a_entertainment/a_expenses)*100;
    Loans_percentage = (total_loans/a_expenses)*100;
    Taxes_percentage = (total_taxes/a_expenses)*100;
    Insurance_percentage = (total_insurance/a_expenses)*100;
    saving_investments_percentage = (total_saving/a_expenses)*100;
    Donations_percentage = (total_donation/a_expenses)*100;
    
    cout << "TOTAL PROJECTED EXPENSE : " << p_expenses << endl; 
    cout << "TOTAL ACTUAL EXPENSE : " << a_expenses << endl;
    if (expenses_diff < -100){
    cout << "Total Expense Difference : " << expenses_diff << endl;
    cout << "Your assumption was far away from Actual Expenses";
    }
    else cout << "Total Expense Difference : " << expenses_diff << endl;
    cout << endl;
    cout << "Transport percentage (%) = " << setprecision(2) << Transport_percentage << endl;
    cout << "Food_percentage (%) = " << setprecision(2) << Food_percentage << endl;
    cout << "Donations_percentage (%) = " << setprecision(2) << Donations_percentage << endl;
    cout << "saving_investments_percentage (%) = " << setprecision(2) << saving_investments_percentage << endl;
    cout << "Insurance_percentage (%) = " << setprecision(2) << Insurance_percentage << endl;
    cout << "Taxes_percentage (%) = " << setprecision(2) << Taxes_percentage << endl;
    cout << "Loans_percentage (%) = " << setprecision(2) << Loans_percentage << endl;
    cout << "Entertainment_percentage (%) = " << setprecision(2) << Entertainment_percentage << endl;
    cout << "Personal_care_percentage (%) = " << setprecision(2) << Personal_care_percentage << endl;
    cout << "Legal_percentage (%) = " << setprecision(2) << Legal_percentage << endl;
    cout << "Pets_percentage (%) = " << setprecision(2) << Pets_percentage << endl;
    
    cout << "\nActual Balance : " << a_balance << endl;
    cout << "Projected Balance : " << p_balance << endl;
    cout << "Total Balance Difference : " << balance_diff << endl;
};
