#include "COMPANY.h"
#include <string>
#include <iostream>

using namespace std;

			void income_statement::set_values() {
				cout<<"Enter the total revenue\n";
				cin>>tot_rev;
				cout<<endl;
				cout<<"Enter the total cost of revenue\n";
				cin>>tot_cost_rev;
				cout<<endl;
				gross_pro=tot_rev-tot_cost_rev;
				do{
					cout<<"What are the expenses of the company\n";
					cin>>expenses;
					cout<<endl;
					add_expenses+=expenses;
					cout<<"Write yes if you want to write another expenses for the company\n";
				    cin>>select;
				    cout<<endl;
				}while(select=="y"||select=="Y"||select=="yes"||select=="YES"||select=="Yes");
				op_income=gross_pro-add_expenses;
				cout<<"How much do you pay for the taxes\n";
				cin>>taxes;
				cout<<endl;
				net_income=op_income-taxes;
			    		arr2[1]=tot_rev;
			    		arr2[2]=tot_cost_rev;
			    		arr2[3]=gross_pro;
			    		arr2[4]=add_expenses;
			    		arr2[5]=op_income;
			    		arr2[6]=net_income;
		}

void income_statement::print(income_statement a,income_statement b,income_statement c,income_statement d){
				cout<<"INCOME STATEMENT:\n\n";
				for(int i=0;i<7;i++) {
					if(i==0){
					cout<<arr1[i]<<"\t"<<"1~3"<<"\t"<<"4~6"<<"\t"<<"7~9"<<"\t"<<"10~12"<<endl<<endl;
					}
					else{
					cout<<arr1[i]<<"\t"<<a.go(i)<<"\t"<<b.go(i)<<"\t"<<c.go(i)<<"\t"<<d.go(i)<<endl; }
				}
		}

void income_statement::setting_data() {
            if (counter==0) {
            for (int i=0; i<10;i++) {
            for (int j=0; j<1; j++) {
                data[i][j]=0;
            } } }
            counter++;
    for (int i=0 ; i<1 ; i++){
        cout<< "Calculating your Current Assets " << "\n\n" ;
    do {
    cout << "please enter a current asset : \n" ;
    cin >> currentassets;
    cout<<endl;
    sumcurrentassets+=currentassets;
    cout << "do you want to enter another current asset ? please enter (Y) or (N) to continue... \n " ;
    cin >> answer;
    cout<<endl;
    }while ((answer=="Yes") ||  (answer=="yes") || (answer=="YES") || (answer=="Y") || (answer=="y") );    
    cout << "calculating your fixed assets" << "\n\n" ;

do {
    cout << "please enter a fixed  asset of the company : \n";
    cin >> fixedassets;
    cout<<endl;
    sumfixedassets+=fixedassets;
    cout << "do you want to enter another fixed asset ? please enter (Y) or (N) to continue... \n ";
    cin >> answer;
        cout << "\n" ;
}while ((answer=="Yes") ||  (answer=="yes") || (answer=="YES") || (answer=="Y") || (answer=="y") );
cout << "calculating your liabilities" << "\n\n" ;
do { 
    cout << "please enter your company's current liablities : \n" ;
    cin >> currentliablities;
    cout<<endl;
    sumcurrentliablities+=currentliablities;
    cout << "do you want to enter another current liability? please enter (Y) or (N) to continue... \n " ;
    cin >> answer;
    cout << "\n" ;
    }while ((answer=="Yes") ||  (answer=="yes") || (answer=="YES") || (answer=="Y") || (answer=="y") );
do{
        cout << "please enter your company's Long Term liablities : \n" ;
        cin >> longlia;
        cout << "\n" ;
        sumlonglia+=longlia;
         cout << "do you want to enter another Long Term liability? please enter (Y) or (N) to continue... \n " ;
    cin >> answer;
    cout << "\n" ;
}while ((answer=="Yes") ||  (answer=="yes") || (answer=="YES") || (answer=="Y") || (answer=="y") );
cout << "please enter your Owner's Capital : \n";
cin >> ownercapital;
cout << "\n" ;
cout << "please enter your Owner's Draw : \n" ;
cin >> ownerdraw;
cout << "\n" ;
    data[1][i]=sumcurrentassets;
    data[2][i]=sumfixedassets;
    data[3][i]=sumcurrentassets+sumfixedassets;
    data[4][i]=sumcurrentliablities;
    data[5][i]=sumlonglia;
    data[6][i]=sumcurrentliablities+sumlonglia;
    data[7][i]=ownercapital;
    data[8][i]=ownerdraw;
    data[9][i]=(ownercapital+arr2[6])-ownerdraw;   
}
}

void income_statement::print_data(income_statement a,income_statement b,income_statement c,income_statement d) {
	cout<<"BALANCE SHEET\n\n";
        for (int i=0; i<10;i++) {
            if (i==0) {
                cout << arr[i] <<"\t"<< "1~3" <<"\t"<<"4~6"<<"\t"<<"7~9"<<"\t"<<"10~12"<<endl<<endl;
            }
            else {
            cout << arr[i] << "\t"; }
            for (int j=0; j<1; j++) {
            if ((i==0)&&(j<=1)) {
                continue;}
            else {
            cout <<a.getvalues(i,j)<< "\t"<<b.getvalues(i,j)<<"\t"<<c.getvalues(i,j)<<"\t"<<d.getvalues(i,j)<<endl; }
            }
        } 
}   

void income_statement::set_cashflow(){
				do{
				cout<<"Enter how much the Depreciation\n";
				cin>>depreciation;
				cout<<endl;
				if(depreciation<0){
					cout<<"The depreciation always positive number\n";
				}
				}while(depreciation<0);
				cout<<"Enter the taxes\n";
				cin>>taxes1;
				cout<<endl;
				cout<<"Enter the account receivable\n";
				cin>>acc_rec;
				cout<<endl;
				cout<<"Enter the prepaid expenses\n";
				cin>>pre_exp;
				cout<<endl;
				cout<<"Enter the suppliers of the inventory\n";
				cin>>sup;
				cout<<endl;
				cout<<"Enter the salaries expenses\n";
				cin>>salaries;
				cout<<endl;
				cout<<"Enter the accured liabilities\n";
				cin>>acc_lia;
				cout<<endl;
				cout<<"Enter the account payable\n";
				cin>>acc_pay;
				cout<<endl;
				net_cash_op=depreciation+taxes+acc_rec+pre_exp+sup+salaries+acc_lia+acc_pay+arr2[6];
				cout<<"Enter the purchased fixed assets\n";
				cin>>fixed_assets;
				cout<<endl;
				cout<<"How much loan did you give to company\n";
				cin>>loan;
				cout<<endl;
				cout<<"Enter the sale fixed assets\n";
				cin>>sale_assets;
				cout<<endl;
				cout<<"how much did you benefit from your collected laon\n";
				cin>>collect_loan;
				cout<<endl;
				net_cash_act=fixed_assets+loan+sale_assets+collect_loan;
				cout<<"How much is the cash at the beginning of the last 3 month\n";
				cin>>cash_beg;
				cout<<endl;
				cash_during=net_cash_op+net_cash_act;
				cash_end=cash_during+cash_beg;
					arr3[2]=arr2[6];
					arr3[3]=depreciation;
					arr3[4]=taxes1;
					arr3[6]=acc_rec;
					arr3[7]=pre_exp;
					arr3[8]=sup;
					arr3[9]=salaries;
					arr3[11]=acc_lia;
					arr3[12]=acc_pay;
					arr3[13]=net_cash_op;
					arr3[15]=fixed_assets;
					arr3[16]=loan;
					arr3[17]=sale_assets;
					arr3[18]=collect_loan;
					arr3[19]=net_cash_act;
					arr3[20]=cash_during;
					arr3[21]=cash_beg;
					arr3[22]=cash_end;
			}

void income_statement::print1(income_statement a,income_statement b,income_statement c,income_statement d){
				cout<<"CASH FLOW:\n\n";
				for(int i=0;i<23;i++){
					cout<<arr4[i]<<"\t";
					if(i==0){
					cout<<"1~3"<<"\t"<<"4~6"<<"\t"<<"7~9"<<"\t"<<"10~12"<<endl<<endl;
					}
					else if(i==1||i==5||i==10||i==14){
						cout<<" "<<"\t"<<" "<<"\t"<<" "<<"\t"<<" "<<endl;;
					}
					else {
					cout<<a.give(i)<<"\t"<<b.give(i)<<"\t"<<c.give(i)<<"\t"<<d.give(i)<<endl; }
				}
			}