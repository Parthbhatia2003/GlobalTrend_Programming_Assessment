#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}

int main()
{

	int n = 687;
	cout << "The sum of the digits of a given number is: "<<getSum(n);
	return 0;
}

