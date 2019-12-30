#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++)
		if (p[i] < 60)
			sum = sum + 400;
	cout << sum;
}
