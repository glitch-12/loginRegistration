#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
	int c;
	cout<<"\t\t\t----------------------\n\n\n";
	cout<<"\t\t\t      welcome to login page      \n\n\n";
	cout<<"\t\t\t_____________MENU___________\n\n\n";
	cout<<"\t Press 1 to LOGIN"<<endl;
	cout<<"\t Press 2 to REGISTRATION"<<endl;
	cout<<"\t Press 3 for Forgot Password"<<endl;
	cout<<"\t Press 4 to Exit"<<endl;
	cout<<"\n\t\t ENTER YOUR CHOICE : ";
	cin>>c;
	cout<<endl;
	switch(c)
	{
		case 1:
			login();
			break;
		case 2:
			registration();
			break;
		case 3:
			forgot();
			break;
		case 4:
			cout<<"\t\t\nTerminated\n";
		default:
			system("cls");
			cout<<"\t\nINVALID CHOICE";
			main();
	}
	
}	
	void login(){
		int count;
		string  userid, password,id, pass;
		system("cls");
		cout<<"\t\t\t Enter the Username and Password"<<endl;
		cout<<"\t\t\tUSERNAME : ";
		cin>>userid;
			cout<<"\t\t\tPASSWORD : ";
			cin>>password;
			ifstream input("record.txt");
			while(input>>id>>pass){
				if(id==userid 
				&&pass==password){
					count=1;
				system("cls");	
				}}
				input.close();
			  if(count==1){
			  	cout<<userid<<"\nLOGIN SUCCESSFULL\n";
			  	main();
			  }
			  else{
			  	cout<<"\nLOGIN ERROR \nInvalid username or password";
			  }
				
			
	}
	
	
	
void registration(){
	string ruserid , rpassword, rid , rpass;
	system("cls");
	cout<<"\t\t\tEnter the Username : ";
	cin>>ruserid;
	cout<<"\t\t\tEnter the password : ";
	cin>>rpassword;
	ofstream f1("records.txt" , ios::app);
	f1<<ruserid<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\t\t\nREGISTRATION SUCCESSFULL!!\n";
	main();
}	
	
void forgot(){
	int option;
	system("cls");
	cout<<"\t\tforgot  password ?\n";
	cout<<"\t\tPress 1 to search your id by username"<<endl;
	cout<<"\nPress 2 to go back to main menu"<<endl;
	cout<<"\tEnter your choice : ";
	cin>>option;
	switch(option){
		case 1:{
				int count=0;
		string suserid,sid,spass;
		cout<<"\t\nEnter your username : ";
		cin>>suserid;
		ifstream f2("records.txt");
		while(f2>>sid>>spass){
			if(sid==suserid){
				count=1;
			}
		}
		f2.close();
		if(count==1){
			cout<<"\n\nAccount found : \n";
			cout<<"\n\n Your password is : "<<spass;
			main();
		}
		else 
		cout<<"Account not found ";
	
	break;
			
		}
	
	case 2:
		main();
		
	default:
		cout<<"INVALID INPUT";
}
	
	
	
	
	
	
	
	
	
	
}

	

