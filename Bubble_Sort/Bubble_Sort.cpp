using namespace std;
#include<iostream>
int i, n;
void BubbleSort(int num[], int n)
{
	int i, j, temp, flag = 0;
	for (i = 0; i < n - 1; i++)
	{
		flag = 1;
		for (j = 0; j < n - 1 - i; j++)
		{
			flag = 1;
			if (num[j] >= num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int a[20];
	cout << "Enter size of Array : "; cin >> n;
	cout << "Enter elem in Array : " << endl; 
	for (i = 0; i < n; i++)
		cin >> a[i];
	BubbleSort(a, n);
	cout << "After Sorting elem :" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
}