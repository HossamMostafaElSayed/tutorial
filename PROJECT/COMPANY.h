#ifndef _COMPANY_H
#define _COMPANY_H
#include <string>
#include <iostream>

using namespace std;

class income_statement{
	private:
		double tot_rev,tot_cost_rev,expenses;
		double op_income,taxes;
		string arr1[7]={"Month:          ","Total Revenue   ","Total Cost Revenue","Gross Profit    ","Total Expenses  ",	"Operating Income",
		"Net Income      "};
		string select;
		double depreciation,taxes1,acc_rec,pre_exp,sup,salaries,acc_lia;
		double acc_pay,net_cash_op,net_cash_act,fixed_assets,loan,sale_assets,collect_loan;
		double cash_beg,cash_during,cash_end;
		double arr3[23]={0};
		string arr4[23]={"Month:                                  ","Operating activities:                   ","Net income                              ","Depreciation                            ",
		"Taxes                                   ","Current assets:                         ","Account receivable                      ",
		"Prepaid expenses                        ","Inventory suppliers                     ","Salaries expenses                       ",
		"Current liabilities:                    ","Accured liabilities                     ","Account payable                         ",
		"Net cash by operating activities        ","Investment activities:                  ","Purchase fixed assets                   ",
		"Loan                                    ","Sale fixed assets                       ","Collected loan                          ",
		"Net cash used for investing activities  ","Net increase in cash during the 3 months","Cash at the beginning of the 3 months   ",
		"Cash at the end of the 3 months         "};
		double net_income,arr2[7]={0},gross_pro,add_expenses=0;
		////////
        string answer , anotherseason ;
        double totalassets=0.0, currentassets, sumcurrentassets=0.0 , fixedassets, sumfixedassets=0,
        currentliablities, sumcurrentliablities=0.0, longlia , sumlonglia=0.0, sumlia=0.0,  ownercapital, 
		ownerdraw, ownerequity, netincome , subtotal;
        double data[10][4]={{0}};
        int counter=1,flag=0;
        string arr[10] = { "Month:               " ,"Current Assets       " ,"Fixed Assets         " ,"Total Assets         " , 
		"Current Liabilities  ", "Long Term Liabilities" ,"Total Liabilities    ","Owner Capital        ","Owner Draw           " , 
		"Owner Equity         " };
		public:
			income_statement(int a){
				if(a==1){
				cout<<"\t\t\t**Welcome to our accounting program**\n\n";
	            cout<<"please be informed that the data you enter is in millions\nfor illusitration when you enter 1 the program considered it as 1 million\n\n";  
			}
		}
			void set_values();
		double go(int j){
			return arr2[j];
		}
			void print(income_statement a,income_statement b,income_statement c,income_statement d);
            /////////////////////////////////////////
void setting_data();
double get_totalcurrentassets() {
    return (sumcurrentassets);
}
double get_totalfixedassets() {
    return (sumfixedassets);
}

double get_totalassets() {
    totalassets=sumcurrentassets+sumfixedassets;
    return (totalassets);
}

double get_currentliabilities() {
    return (sumcurrentliablities);
}

double get_longtermliablities(){
    return(sumlonglia);
}
double get_sumliabilities() {
    sumlia=sumcurrentliablities+sumlonglia;
    return (sumlia);
}
double getvalues(int y,int x){
	return data[y][x];
}
void print_data(income_statement a,income_statement b,income_statement c,income_statement d);
    ////////////////////////////
			void set_cashflow();
			double give(int j){
				return arr3[j];
			}
			void print1(income_statement a,income_statement b,income_statement c,income_statement d);
}; 

#endif // _COMPANY_H
