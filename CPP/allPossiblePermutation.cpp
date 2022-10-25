#include <bits/stdc++.h>
using namespace std;
void permutateStr(string arr, int l, int r)
{
	if (l == r)
		cout<<arr<<endl;
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(arr[l], arr[i]);
			permutateStr(arr, l+1, r);
			swap(arr[l], arr[i]);
		}
	}
}

int main()
{
	string string = "HACK";
	int n = string.size();
	permutateStr(string, 0, n-1);
	return 0;
}
