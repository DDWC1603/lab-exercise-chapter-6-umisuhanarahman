//umi suhana binti abdul rahman
//a17dw2041

//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include<cstring>
using namespace std;

int main()
{

	char strPswd[80];

	cout<<"Enter password: ";
	//get the strPswd
    cin>>strPswd;
	//make an if else that check the password(strPswd)
	if(strcmp(strPswd,"password"))
	{
		cout<<"invalid password "<<endl;
	}
	//(string compare function (strPswd,"Check")) 
	else
	{
		cout<<"Logged in "<<endl;
	}	
	
	return 0;

}
