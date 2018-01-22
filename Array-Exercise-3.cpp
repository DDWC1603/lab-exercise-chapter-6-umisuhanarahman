//umi suhana binti abdul rahman
//a17dw2041

//dapatkan 10 input dan keluarkan hasil tambahnya.
//hasilkan program anda dengan menggunakan array
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int array[10], sum, x;

    cout<<"Enter the 10 numbers:"<<endl;
    
	for(x=0;x<10;x++)
    {
       cin>>array[x];
       sum=sum+array[x];
    }

    cout<<"the sum of the 10 numbers : "<<sum<<endl;

    return 0;
}
