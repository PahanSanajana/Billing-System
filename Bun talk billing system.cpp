#include <iostream>
using namespace std;

int main()
{
    int x=3;
    int num1;
    double sum=0;
    string username;
    string password;
    string feedback;
    string feedback2;
     // Define strings to represent different food items and their prices
    string A="Fishbun = 450.00LKR";
    string B="Eggbun = 350.00LKR";
    string C="Chickenbun = 500.00LKR";
    string items;
    
     // Prompt the user to enter their username and password
    cout<<"Please Enter username : ";
    cin>>username;
    cout<<"Please Enter password : ";
    cin>>password;
    
    // Check if the entered username is "sanjana" and password is "sanjana123"
    if(username == "sanjana"){
        if(password == "sanjana123"){
            cout<<"login successful !"<<endl;
            
            // Prompt the user to select a food item (A, B, or C) and update the total cost accordingly
            cout<<"Select the food item you need\nif u need a "+A+" enter A\nif u need a "+B+" enter B\nif u need a "+C+" enter C"<<endl;
        	    cin>>items;
				if(items == "A")
            	{
            	sum=sum+450;
				}
				else  if (items == "B")
				{
				sum=sum+350;
				}
				else  if (items == "C")
				{
				sum=sum+500;
				}
				// Prompt the user if they want to add more items
            	cout<<"do you need more items \nIf so Enter 1"<<endl;
            	cin>>num1;
            	sum=sum;
            // Loop to allow the user to add more items if they entered 1
			while(num1==1)
			{
				cout<<"Enter the item code -"<<endl;
        	    cin>>items;
				if(items == "A")
            	{
            	sum=sum+450;
				}
				else  if (items == "B")
				{
				sum=sum+350;
				}
				else  if (items == "C")
				{
				sum=sum+500;
				}
            	cout<<"do you need more items \nIf so Enter 1"<<endl;
            	cin>>num1;
				sum=sum;		
			}
			 // Display the total cost
		 cout<<"Your total is Rs. " <<sum<<endl;
		 // Ask the user for feedback and provide an option to request help  or logout
		cout << "If you have faced any errors, \nyou can get support from our service \nif you need it. Please type Help. \nIf you want to logout, type Logout." << endl;
    cin >> feedback;
     // If the user requests help, ask for more details and provide a response
    if (feedback == "Help")
    {
        cout << "Sorry for the distraction you have \nface with our system Sir/Miss \nyou can type what is the issue \nthat you face on this system" << endl;
        cin >> feedback2;
        cout << "Thanks for your feedback we will work on it. Have a great day...." << endl;
    }
    else if (feedback == "Logout")
    {
        cout << "Logout successful, Thank You For Using Bun talk. Goodbye!" << endl;
        return 0; // Exit the program
    }
    else
    {
        cout << "Invalid input. Please enter either 'Help' or 'Logout'." << endl;
    }     
        }
        else{
            cout<<"Invalide Password !"<<endl;
        }
    }
    else{
        cout<<"Invalide Username !"<<endl;
    }
    
    
    return 0;
}

