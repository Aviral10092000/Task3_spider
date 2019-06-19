#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> prime_number;	//Saves the prime_number
	for(int i = 2;i<=n;i++)
	{
		if(prime_number.size()==0)
		prime_number.push_back(i);
		else
		{
			int flag = 0;
			for(auto it=prime_number.begin();(*it)<=sqrt(i);it++)
			{
				if(i%(*it)==0)
				{
					flag = 1;
					break;
				}
			}
			if(flag==0)
			prime_number.push_back(i);
		}
	}
	int sum = prime_number.size();
	cout<<sum*(sum+1)/2;
}
