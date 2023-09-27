#include "PERSON.h"
#include "COMPANY.h"
#include "FAMILY.h"
#include "FATHER.h"
#include "MOTHER.h"
#include "SON.h"
#include "DAUGHTER.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cout << "---HELLO TO INCOME TRACKER---" << endl;
    cout << "We are going to help you to track your income" << endl;
    cout << "First of all, choose what type of user you are ? " << endl;
    cout << "Person\nFamily\nCompany" << endl;
    cin >> s1;
    for(size_t i { 0 }; i < s1.length(); i++) {
        s1.at(i) = tolower(s1.at(i));
    }

    if(s1 == "person") {
        PERSON();
    } else if(s1 == "family") {
        FATHER f; DAUGHTER d; MOTHER m; SON s;

    //FATHER
    f.FatherData();
   f.ExpensesPercnetage();

   cout << "\n Total projected expenses =" << f.p_expenses << endl;
   cout << "Total actual expenses =" << f.a_expenses << endl;
   cout << "Projected balance =" << f.p_balance << endl;
   cout << "Actual balance =" << f.a_balance << endl;

   //Setting children allowance
    d.allowance = f.daughter_allowance;
    s.allowance = f.son_allowance;

    //MOTHER
    m.MotherData();
    m.ExpensesPercnetage();
    cout << "\n Total projected expenses =" << m.p_expenses << endl;
    cout << "Total actual expenses =" << m.a_expenses << endl;
    cout << "Projected balance =" << m.p_balance << endl;
    cout << "Actual balance =" << m.a_balance << endl;

    //SON 
    s.SonData();
    s.ExpensesPercnetage();
    cout << "\n Total projected expenses =" << s.p_expenses << endl;
    cout << "Total actual expenses =" << s.a_expenses << endl;
    cout << "Projected balance =" << s.p_balance << endl;
    cout << "Actual balance =" << s.a_balance << endl;


    //DAUGHTER
    d.DaughterData();
    d.ExpensesPercnetage();
    cout << "\n Total projected expenses =" <<d.p_expenses << endl;
    cout << "Total actual expenses =" << d.a_expenses << endl;
    cout << "Projected balance =" << d.p_balance << endl;
    cout << "Actual balance =" << d.a_balance << endl;

    }
    else {
        income_statement ob1(1),ob2(21),ob3(21),ob4(21),ob5(213);
	int a=0;
	int c=0;
	int b=0;
	string select;
    /////income statment
	cout<<"First the income statement:\n\n";
	do{
	c++;
	if(c==1){
	cout<<"write your values of the first 3 months:\n\n";
	ob1.set_values();}
	if(c==2){
		cout<<endl;
		cout<<"write your values from 4th to 6th month:\n\n";
		ob2.set_values();
	}
	else if(c==3){
		cout<<endl;
	    cout<<"write your values from 7th to 9th month:\n\n";
		ob3.set_values();
	}	
	else if (c==4) {
		cout<<endl;
	cout<<"write your values of the last 3 months\n\n";
	ob4.set_values();
    }
	if(c>4){
		cout<<endl;
		cout<<"There are 4 seasons in the year\n";
		break;
	}
	cout<<"Do you want to make another income statement\n";
	cin>>select;
    }while(select=="y"||select=="yes"||select=="Y"||select=="Yes"||select=="YES");
	cout<<endl;
	ob5.print(ob1,ob2,ob3,ob4);
	cout<<endl<<endl;
	//balance sheet
    cout<<"secondly the balance sheet:\n\n";
    do{
    	a++;
    	if(a==1){
	    cout<<"write your values of the first 3 months:\n\n";
	    ob1.setting_data();
		}
	    if(a==2){
		cout<<endl;
		cout<<"write your values from 4th to 6th month:\n\n";
		ob2.setting_data();
	}
	else if(a==3){
		cout<<endl;
	    cout<<"write your values from 7th to 9th month:\n\n";
		ob3.setting_data();
	}	
	else if (a==4) {
		cout<<endl;
	cout<<"write your values of the last 3 months\n\n";
	ob4.setting_data();
    }
	if(a>4){
		cout<<endl;
		cout<<"There are 4 seasons in the year\n";
		break;
	}
	cout<<"Do you want to make another balance sheet\n";
	cin>>select;
	}while(select=="y"||select=="yes"||select=="YES"||select=="Yes"||select=="Y");
    cout<<endl;
    ob5.print_data(ob1,ob2,ob3,ob4);
    cout<<endl;
    // cash flow
	cout<<"Finally the cashflow\n\n";
	do{
	b++;
	if(b==1){
		cout<<"write your values of the first 3 months\n\n";
	ob1.set_cashflow();}
	if(b==2){
		cout<<endl;
		cout<<"write your values from 4th to 6th month\n\n";
		ob2.set_cashflow();
	}
	else if(b==3){
		cout<<endl;
		cout<<"write your values from 7th to 9th month\n\n";
		ob3.set_cashflow();
	}	
	else if (b==4) {
		cout<<endl;
		cout<<"write your values of the last 3 months\n\n";
	ob4.set_cashflow();
    }
	if(b>4){
		cout<<endl;
		cout<<"There are 4 seasons in the year\n";
		break;
	}
	cout<<"Do you want to make another cash flow statement\n";
	cin>>select;
    }while(select=="y"||select=="yes"||select=="Y"||select=="Yes"||select=="YES");
	cout<<endl;
	ob5.print1(ob1,ob2,ob3,ob4); 
	cout<<endl<<endl;
    }

    return 0;
}