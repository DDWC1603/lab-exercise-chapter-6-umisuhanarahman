//umi suhana binti abdul rahman
//a17dw2041

//its just an array example
//find the sum of all the value inside the array

#include <iostream>
using namespace std;

int ary[5]={3, 5, 6, 7, 8};

int main()
{
    
    int n, result=0;
	
	for(n=0;n<5;n++)
	{
		result += ary[n];
	}
	cout<<result;
	
	return 0;
	
}
