#include "DAUGHTER.h"
#include <iostream>
#include <iomanip>

using namespace std;

DAUGHTER::DAUGHTER()
{
}
void DAUGHTER::DaughterData()
{
    cout << "---HELLO WELCOME TO DAUGHTER INCOME TRACKER---" << endl;
    cout << "---Your are going to be asked for some information---" << endl;

    cout << "Enter you income: " << endl;
    cin >> income2;
    total_income = allowance + income2;


    cout << "\n---TRANSPORT---" << endl;
    cout << "Enter actual and projected cost for Bus and Taxi fares : " << endl;
    cin >> a_Bus_taxi_fare >> p_Bus_taxi_fare;
    total_a_transport = a_Bus_taxi_fare;
    total_p_transport = p_Bus_taxi_fare;
    total_diff_transport = total_p_transport - total_a_transport;



    cout << "\n---Insurance---" << endl;
    cout << "Enter the cost for Health : " << endl;
    cin >> health;
    cout << "Enter the cost for Life : " << endl;
    cin >> life;
    total_insurance = health + life;


    cout << "\n---FOOD---" << endl;
    cout << "Enter actual and projected cost for Food and Drinks : " << endl;
    cin >> a_food_drink >> p_food_drink;
    cout << "Enter actual and projected cost for Dining out : " << endl;
    cin >> a_dining_out >> p_dining_out;
    total_a_food = a_food_drink + a_dining_out;
    total_p_food = p_food_drink + p_dining_out;
    total_diff_food = total_p_food - total_a_food;


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



    cout << "---EDUCATION---" << endl;
    cout << "Enter actual and projected cost for Courses : " << endl;
    cin >> a_courses>> p_courses;
    cout << "Enter actual and projected cost for Supplies : " << endl;
    cin >> a_supplies>> p_supplies;
    total_a_Education = a_courses + a_supplies ;
    total_p_Education = p_courses + p_supplies;
    total_diff_Education = total_p_Education - total_a_Education;

    //expenses
    a_expenses = total_a_Education + total_a_entertainment + total_a_food  + total_a_personal_care  + total_a_transport  + total_loans   + total_insurance;
    p_expenses = total_p_Education+  total_p_entertainment + total_p_food  + total_p_personal_care  + total_p_transport;
    expenses_diff = p_expenses - a_expenses;

    //balance
    a_balance = total_income - a_expenses;
    p_balance = total_income - p_expenses;
    balance_diff = p_balance - a_expenses;
}
void DAUGHTER::ExpensesPercnetage()
{
    //calculating the percentage in each category
    transport_percentage = (total_a_transport / a_expenses) * 100;
    food_percentage = (total_a_food / a_expenses) * 100;
    personal_care_percentage = (total_a_personal_care / a_expenses) * 100;
    entertainment_percentage = (total_a_entertainment / a_expenses) * 100;
    loans_percentage = (total_loans / a_expenses) * 100;
    insurance_percentage = (total_insurance / a_expenses) * 100;
    education_percentage = (total_a_Education / a_expenses) * 100;




    //Presenting data

    cout << "---SONS'S EXPENSES PERCENTAGE--" << endl;
    cout << "Transportaion Perscentage (%) =" << setprecision(2) << transport_percentage << endl;
    cout << "Insurance Perscentage (%) =" << setprecision(2) << insurance_percentage << endl;
    cout << "Food Perscentage (%) =" << setprecision(2) << food_percentage << endl;
    cout << "Personal care Perscentage (%) =" << setprecision(2) << personal_care_percentage << endl;
    cout << "Entertainment Perscentage (%) =" << setprecision(2) << entertainment_percentage << endl;
    cout << "Loans Perscentage (%) =" << setprecision(2) << loans_percentage << endl;
    cout << "Education Perscentage (%) =" << setprecision(2) << education_percentage << endl;

}
;

