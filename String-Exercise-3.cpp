//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)
//HAIQAL ADAM
//A17DW0071
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char strPswd[80];
	
	cout<<"Enter password: ";
	gets(strPswd);
	 
	if(strcmp(strPswd,"password"))
	{	
		cout<<"invalid password "<<endl;
	}
	 
	else cout<<"Logged in "<<endl;

	

	return 0;
}


//updated
//signed by haiqal
