//ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int findMaxOddElement(int* a, const int size, int low) 
{
	int max = low;
	for (int i = 0; i < size; i++) {
		if (a[i] > max && a[i] % 2 == 1)
		{
			max = a[i];
		}
	}
	return max;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 10;
	int a[n];
	int low = -100;
	int high = 100;
	create(a, n, low, high);
	print(a, n);
	int x;
	int maxElementOfArray = findMaxOddElement(a, n, low);
	cout << "max odd number " << maxElementOfArray <<  endl;
	return 0;
}