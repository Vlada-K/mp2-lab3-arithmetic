// реализация пользовательского приложения

#include<iostream>
using namespace std;
#include <string> 
#include"arithmetic.h"






int main()
{
	string input;
	while (true)
	{
		cout << " enter expression: ";
		cin >> input;
		
		if (input == "")
			break;
		arithmetic W(input);
		string output;
		output =W.Process();
		if (output == "")
			cout<< " incorrect expression"<< endl;
		else {
			cout << output << endl;
			double result = W.calculat();
			cout << result << endl;
		}
		
	}
	
	return 0;
}

