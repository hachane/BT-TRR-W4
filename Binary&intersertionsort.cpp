#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	int dem = 0;
	for (int j = 1; j < n; j++)
	{
		int location;
		int l = 0; 
		int r = j - 1;
		while (l < r)
		{
			int m = l + (r - l)/2;
			if(a[j] >= a[m]) // ... 9 9 9 ...
			{l = m + 1; dem++;}
			else {r = m; dem++;}
			dem++;
		} dem++;
		if (a[j] < a[l]) location = l;
		else location = j;
		dem++;
		int temp = a[j];
		for (int k = j; k > location; k--) a[k] = a[k - 1];
		a[location] = temp;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl << dem;
	return 0;
}
