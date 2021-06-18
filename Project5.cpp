// During the tax season, every Friday, the J&J accounting firm provides assistance to people who prepare their own tax returns. Their charges are as follows:
//If a person has low income (<= 25,000) and the consulting time is less than or equal to 30 minutes, 
//there are no charges; otherwise, the service charges are 40% of the regular hourly rate for the time over 30 minutes.
//For others, if the consulting time is less than or equal to 20 minutes, there are no service charges; otherwise, 
//service charges are 70% of the regular hourly rate for the time over 20 minutes. (For example, suppose that a person has low income and spent 1 hour and 15 minutes, and the hourly rate is $70.00. Then the billing amount is 70.00 X.40 X (45/60) = $21.00.)
//Instructions :
//Write a program that prompts the user to enter yearly income, the hourly rate, the total consulting time. The program should output the billing amount. 
//Your program must contain a function that takes as input the hourly rate, the total consulting time, and a value indicating whether the person has low income. 
//The function should return the billing amount. Your program may prompt the user to enter the consulting time in minutes.


#include<iostream>
#include<iomanip>
using namespace std;
double billingAmount(double hourlyRate, int yearlyIncome, int consultingTime);
int main(){
	double hourlyRate;
	int consultingTime, yearlyIncome;
	cout<< fixed << showpoint << setprecision(2);
	cout<<"To Calculate The Billing Amount : \n\n";
	cout<<"Enter the Yearly Income \n";
	cin>>yearlyIncome;
	cout<<"\n";
	
//	FOR LOWINCOME
	cout<<"Enter the Hourly Rate \n";
	cin>>hourlyRate;
	cout<<"\n";
	
	cout<<"Enter the Consulting Time in minutes\n";
	cin>>consultingTime;
	cout<<"\n";
	
	cout<<"The total Billing Amount = $ ";
	cout<<billingAmount( hourlyRate, yearlyIncome, consultingTime)<<".";
	cout<<"\n";
	
	return 0;
	
}
double billingAmount(double hourlyRate, int yearlyIncome, int consultingTime){
	if (yearlyIncome<=25000){
		if(consultingTime<=30){
		cout<<"have low income";	
			}
			else{
				return hourlyRate * ((double) (consultingTime - 30)/60) * 0.4;
			}
	}
	else{
		if(consultingTime<=20){
			return 0 ;
		}
		else{
			return hourlyRate * ((double) (consultingTime - 20)/60) * 0.7;
		}
	}
	
	
	
	
	
	
	
	
}
