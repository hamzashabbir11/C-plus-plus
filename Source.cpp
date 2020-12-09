#include<iostream>
using namespace std;
void main()
{
float total = 0;
float avg;

	int average[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> average[i];
		
		total = total + average[i];
		
		avg = total / 5;
	}
	cout << avg;
	system("pause");
}
