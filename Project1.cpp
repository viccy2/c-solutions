// Write a program that prompts the user to enter five test scores and then prints the average test score. 
// Indicate the average test score by printing it to the terminal using the following format:	Your average test score is: X

#include<iostream>
using namespace std;
int main(){
	//	Declaration of float variables
	float Score_1, Score_2, Score_3, Score_4, Score_5,Sum,Result;
	//	Declaration of other variables
	string input;
	const char* yes = "yes";
	const char* no = "no";
	cout<<"A Program To Calculate The Average Test Score\n\n";
	//	For first Test Score
	cout<<"Enter First Test Score :\n";
	cin>>Score_1;
	cout<<"\n";
	cout<<"The First Test Score = "<<Score_1<<"\n\n";
	
	//	For second Test Score
	cout<<"Enter Second Test Score :\n";	
	cin>>Score_2;
	cout<<"\n";
	cout<<"The Second Test Score = "<<Score_2<<"\n\n";
	
	//	For third Test Score
	cout<<"Enter Third Test Score :\n";	
	cin>>Score_3;
	cout<<"\n";
	cout<<"The Third Test Score = "<<Score_3<<"\n\n";
	
	//	For fourth Test Score
	cout<<"Enter Fourth Test Score :\n";	
	cin>>Score_4;
	cout<<"\n";
	cout<<"The Fourth Test Score = "<<Score_4<<"\n\n";
	
	//	For fifth Test Score
	cout<<"Enter Fifth Test Score :\n";	
	cin>>Score_5;
	cout<<"\n";
	cout<<"The Fifth Test Score = "<<Score_5<<"\n\n";
	
	cout<<"Do you want to calculate the Average Test Score ? ";
	cout<<"Enter yes Or no \n\n";
	cin>>input;
	//	The condition Statement
		if (input == yes){
				Sum = Score_1 + Score_2 + Score_3 + Score_4 + Score_5 ;
				Result = Sum/5;
					cout<<"\n\n";
					cout<<"Your average Score is : "<<Result;
					

		}
		else{
				cout<<"Alright you entered No";
		}
}
