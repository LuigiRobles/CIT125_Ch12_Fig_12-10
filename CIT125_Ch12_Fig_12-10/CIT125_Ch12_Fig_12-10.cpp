// CIT125 Intro To C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.12 Figure 12-10 Pay rate
// Wilson Company Program
// Display pay rate according to code entered by user

#include <iostream>
using namespace std;

int main()
{
	//declare and initialize array
	int codesAndRates[4][2] = { {3,8},
								{6,14},
								{7,18},
								{9,20} };

	//declare and initialize variables
	int payCode = 0;
	int row = 0;

	//get pay code
	cout << "Pay code (3, 6, 7, or 9). " << endl;
	cout << "Enter a negative number to end: ";
	cin >> payCode; //input for paycode

	while (payCode >= 0) //while loop
	{
		//search each row in the array, looking 
		//for the pay code in the first column
		//continue the search while there are
		//array elements to search and the pay
		//code has not been found
		row = 0;
		while (row <= 3
			&& codesAndRates[row][0] != payCode)
			row += 1;
		//end while

		//if the pay code was found, display the
		//pay code and the pay rate stored in the
		//same row as the pay code but in the 
		//second column of the array 
		if (row <= 3)
			cout << "Pay rate for pay code "
			<< payCode << ": $"
			<< codesAndRates[row][1]
			<< endl << endl;
		else
			cout << "Invalid pay code" << endl << endl;
		//end if

		//get pay code 
		cout << "Pay code (3, 6, 7, or 9). " << endl;
		cout << "Enter a negative numbert to end: ";
		cin >> payCode;
	}   //end while
	return 0;
}  //end of main function

