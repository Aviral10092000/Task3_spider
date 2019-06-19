#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{
	char read_number;	//To read individual digits
	read_number = '0';	//Assigning random value
	int sum = 0,count = 0,sum_store = 0,loop_run = 0,flag = 0;	//Some other variable
	while(1)
	{
		sum = sum + read_number - '0';	//Summing the digits
		read_number = getc(stdin);
		if(read_number=='\n')
		break;
		loop_run++;
		if(loop_run==2)
		{
			flag = 1;
		}
	}
	if(flag==1)
	count++;
	while(sum>9)
	{
		sum_store = sum;	
		sum = 0;
		while(sum_store)
		{
			sum = sum + sum_store%10;
			sum_store = (sum_store - sum_store%10)/10;
		}
		count++;
	}
	cout<<count;
}
