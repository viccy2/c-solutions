//(Apartment problem) A real estate office handles, say, 50 apartment units. When the rent is, say, $600 per month, all the units are occupied.
//However, for each, say, $40 increase in rent, one unit becomes vacant. Moreover, each occupied unit requires an average of $27 per month for maintenance.
//How many units should be rented to maximize the profit?
//Instructions
//Write a program that prompts the user to enter:
//The total number of units.
//The rent to occupy all the units.
//Amount to maintain a rented unit.
//The increase in rent that results in a vacant unit.
//The program then outputs:
//The number of units to be rented to maximize the profit
//The maximum profit
//Since your program handles currency, make sure to use a data type that can store decimals with a decimal precision of 2.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int unit;
	double rent, maintenance, increase;
	cout<<"Enter the total number of unit: ";
	cin>>unit;
	cout<<"rent to occupy units? ";
	cin>>rent;
	cout<<"Amount to maintain a rented unit: ";
	cin>>maintenance;
	cout<<"increase in rent? ";
	cin>>increase;
	
	double monthly_income = unit*rent; // monthly income without maintenance
	double new_monthly_income = monthly_income;
	double n_monthly_income = monthly_income - (unit*maintenance); //monthly income after removing maintenance fee
	
	// The goal is to ensure that the caretaker/house owner makes as much as
	// the initial monthly income without maintenance fee.
	cout<<"|unit|"<<"\t"<<"|maintenance fee|"<<'\t'<<"|monthly income with maintenance charge|"<<'\n';
	cout<<unit<<"\t\t"<<maintenance<<"\t\t\t"<<n_monthly_income<<'\n';
	while (n_monthly_income <= monthly_income){
		rent += increase;
		--unit;
		new_monthly_income = unit*rent;
		n_monthly_income = (new_monthly_income - (unit*maintenance));
		cout<<unit<<"\t\t"<<maintenance<<"\t\t\t"<<n_monthly_income<<'\n';
	}
	
	cout<<"Total number of unit to be rented to maximize profit: "
		<<unit<<'\n';
	cout<<"Maximum profit: "<<setprecision(2)<<fixed<<n_monthly_income<<'\n';
	
	return 0;
	
}
