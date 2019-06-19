#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> brick;
	int grow_stone[n];
	for(int i = 0;i<m;i++)
	{
		int x;
		cin>>x;
		if(i<m-n)
		brick.push_back(x);
		if(i>=m-n)
		grow_stone[i-m+n] = x;
	}
	sort(brick.begin(),brick.end());
	while(brick.size())
	{
		int *min_value = min_element(grow_stone,grow_stone+n);
		*min_value = *min_value + brick.back();
		brick.pop_back();
	}
	sort(grow_stone,grow_stone+n);
	cout<<grow_stone[0];
}
