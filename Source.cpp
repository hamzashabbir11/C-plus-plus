#include<iostream>

#include<string>
using namespace std;
int main()
{
	int  arr1[3][3] = { {},{} };
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << "  ";
		}
		cout << endl;
	}
		
		system("pause");
		return 0;
}