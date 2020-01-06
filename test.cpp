#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
	int a[5] = {0, 96, 5, 100, 10};
	sort(a, a+5);
	for(int i=0; i<=100; i++)
	{
		printf("Value searching for: %d, upper_bound in array a: %d, lower_bound in array a: %d\n", i, *upper_bound(a, a+5, i), *lower_bound(a, a+5, i));
		getch();
	}
	return 0;
}