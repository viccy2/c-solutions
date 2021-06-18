//A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies.
//Write a program that prompts the user to enter:
//The total number of cookies
//The program then outputs:
//The number of boxes and the number of containers to ship the cookies.
//Note that each box must contain the specified number of cookies, and each container must contain the specified number of boxes. 
//If the last box of cookies contains less than the number of specified cookies, you can discard it and output the number of leftover cookies.
//Similarly, if the last container contains less than the number of specified boxes, you can discard it and output the number of leftover boxes.

#include<iostream>
using namespace std;
int main(){
	int Cookies, Box, Container, Box_remainder, Container_num, Container_remainder;
	float Box_num;
	cout<<"Enter number of cookies\n";
	cin>>Cookies;
	Box = Cookies%24;
	Box_num = Cookies/24;
	Container = Box%75;
	Container_num = Box_num/75;
	Box_remainder = 24 - Box;
	Container_remainder = 75 - Container;
	
	
	if(Box!=0){
//		cout<<(float)Container_num;
		cout<<"The Number of Boxes Availabe For Your Cookies =  "<<Box_num <<"\n";
		cout<<"You Need "<< (float)Box_remainder<<" More Cookies To Make an Even / Complete Number of Boxes i.e  "<<Box_num+1<<" Box(es)"<<"\n\n";
	if(Container!=0){
			cout<<"The Number of Available Container for the Boxes of Cookies  = "<<Container_num <<"\n" ;
		    cout<<"You Need "<< (float)75-Box_num<<" More Boxes of Cookies To Make an Even / Complete Number of Boxes for A container i.e  "<<75<<" Boxes" <<"\n\n";
	}	
	}
 
	
	else{
		cout<<"\n";
		cout<<"The Number of Boxes Availabe For Your Cookies = "<<Box_num<<"\n\n";
		cout<<"The Number of Container Available for Your Boxes of Cookies  = "<<Container_num<<"\n";
	}
	
	
}
