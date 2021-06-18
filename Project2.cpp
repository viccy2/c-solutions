//Interest on a credit card’s unpaid balance is calculated using the average daily balance.
//Suppose that netBalance is the balance shown in the bill, payment is the payment made, d1 is the number of days in the billing cycle, 
//and d2 is the number of days payment is made before billing cycle.
//Then, the average daily balance is:
//averageDailyBalance = (netBalance * d1 – payment * d2) / d1
//If the interest rate per month is, say, 0.0152, then the interest on the unpaid balance is:
//interest = averageDailyBalance * 0.0152

#include<iostream>
using namespace std;
int main(){
	//	Declaration of variables
	float netBalance,d1,d2,payment,averageDailyBalance,interest; 
	string input;
	const char* yes = "yes";
	const char* no = "no";
	cout<<"Want to Calculate Interest on a Credit Card ? Enter yes or No\n\n";
	cin>>input;
	cout<<"\n";
		if (input == yes){
					cout<<"Enter Net balance \n";
					cin>>netBalance;
					cout<<"Enter Payment made\n";
					cin>>payment;
					cout<<"Enter number of days in the billing cycle\n";
					cin>>d1;
					cout<<"Enter number of days made before billing cycle\n\n";
					cin>>d2;
					
					averageDailyBalance=(netBalance*d1-payment*d2)/d1;
					cout<<"The Average Daily Balance = "<<averageDailyBalance;
					cout<<"\n\n";
					
					interest = averageDailyBalance*0.0152;
					cout<<"The Interest On The Unpaid Balance = "<<interest;
					
					

		}
		else{
			cout<<"Alright you entered No";
		}
	
	
	
	
	
}
