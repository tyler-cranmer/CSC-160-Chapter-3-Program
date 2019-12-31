// CSC 160 Chapter 3 Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program takes in the amount of tickets sold and their associated amounts. Calculates the total number of tickets sold and total sale amount of the tickets. 
//Sends the data to a second file for storage and then outputs the results.

// header files 
#include <fstream> 
#include <iostream>
#include <iomanip> 

using namespace std; // allows to use cout, endl without prefix std: :

int main() // Main Program
{
	ofstream outFile; // declare output file stream variable

	int box_tickets_sold = 5750; // declare variables
	int sideline_tickets_sold = 28000;
	int premium_tickets_sold = 35750;
	int general_ticket_sold = 18750;

	double box_amount = 250.00;
	double sideline_amount = 100.00;
	double premium_amount = 50.00;
	double general_amount = 25.00;

	outFile.open("outText.txt"); // associate file stream variables with output sources

	// total tickets sold and total sale calculations
	int totalTicketsSold = box_tickets_sold + sideline_tickets_sold + premium_tickets_sold + general_ticket_sold;
	double totalSale = (box_tickets_sold * box_amount) + (sideline_tickets_sold * sideline_amount) + (premium_tickets_sold * premium_amount) + (general_ticket_sold * general_amount);

	cout << fixed << showpoint << setprecision(2); // set manipulator floating-point output to two decimal places
	cout << "Number of tickets sold = " << totalTicketsSold << endl; // output to file
	cout << "Sale amount = $" << totalSale << endl; //output to file

	outFile.close(); //close file
	return 0;
}
