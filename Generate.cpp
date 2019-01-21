/*************
 * Description: Generates a DO file that simulates an N64 module.
 * **********/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
	
string Time(int newTime)
{
	string tempString = string("") + std::to_string(newTime) + string("us");
	return tempString; 
}

int main()
{
	string Input;
	int time = 100;
	ofstream WriteFile;
	
	WriteFile.open("./blankFile.txt", std::ios::out | std::ios::trunc);

	cout << "Please enter unencoded binary." << endl;
	cin >> Input;
	

	cout << "took the input." << endl;			
	for(int i = Input.length(); i > 0; i--)
	{
		
		time += 4;
		if(Input.at(i - 1) == '1')
		{
			WriteFile << "0 " + Time(time) + ", " + "1 " + Time(time + 1) + ", " + "1 " + Time(time 			+ 2) + ", " + "1 " + Time(time + 3) + ", ";
		}
		else if(Input.at(i - 1) == '0')
		{
					
			WriteFile << "0 " + Time(time) + ", " + "0 " + Time(time + 1) + ", " + "0 " + Time(time 			+ 2) + ", " + "1 " + Time(time + 3) + ", ";
		}
	}

	WriteFile.close();
	
	return 0;
}






