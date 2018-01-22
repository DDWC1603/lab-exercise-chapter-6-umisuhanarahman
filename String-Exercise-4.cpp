//umi suhana binti abdul rahman
//a17dw2041

//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>
#include<cstring>
using namespace std;

int main()
{

	char lowerToUpper[80];
	int i;

	/*use string copy function here*/
	strcpy(lowerToUpper, "This is a check");
	
	for(i=0;lowerToUpper[i];i++)
	{
    	lowerToUpper[i] = toupper(lowerToUpper[i]);
	}
	cout<<lowerToUpper<<endl;
}
