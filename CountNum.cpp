#include <iostream>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{	
	cout << "Please enter a file to open." << endl;

	string fileName;
	cin >> fileName;
		
	ifstream InputFile;	
	int tempVal;
	bool doThis = true;

	InputFile.open(fileName.c_str());
	string binaryString;
	getline(InputFile, binaryString, '\0');	

	InputFile.close();	
	
/*	while(doThis)
	{
	cin >> tempVal;
	if(tempVal == 1)
	{
	binaryString += '1';	
	}

	if(tempVal == 0)
	{
	binaryString += '0';
	}

	if(tempVal == 2)
	{
	doThis = false;
	}

	}
*/

	cout << binaryString;
	
	string newString = "";

	bool keepGoing = true;
	int Number = 0;
	while(keepGoing)	
	{
	if(binaryString.at(Number) == '0' && binaryString.at(Number+1) == '1') 
	{
	if(binaryString.length() == Number + 3)
		{
		cout << "Inside second if. " << endl;
			newString += '0';
			Number += 2;
			
			
		
			keepGoing = false;
			
		}
	else if (binaryString.at(Number+2) == '0')
	{	
		newString += '0';
		Number += 2;
		if(Number == binaryString.length())
		{
		keepGoing = false;
		}
	}
	
	else
	{	
		newString +='1';
		Number += 4;
		if(Number == binaryString.length())
		{
		keepGoing = false;
		}

	}	
	}	


	}

	cout << "Final String: " << newString << endl;
	cout << "Length: " << newString.length() << endl;
return 0;

}
