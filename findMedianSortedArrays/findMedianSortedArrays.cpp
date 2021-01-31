#include<iostream>
#include<algorithm>
using namespace std;


float function(int num1[], int num2[], int len1, int len2)
{
	int result_length = len1 + len2;
	int* result = new int[result_length+1];
	float result1;
	for (int i = 0; i < len1; i++)
	{
		result[i] = num1[i];
	}
	int k = 0;
	for (int j = len1; j < result_length; j++)
	{
		result[j] = num2[k];
		k++;
	}
	sort(result, result + result_length);
	int i = 0;
	
	if (result_length % 2 == 0)
	{
		result1 = ((float)result[result_length / 2 ] + (float)result[(result_length / 2) - 1]) / 2;
		return result1;
	}
	else
	{
		result1 = (float)result[(result_length - 1) / 2];
		return (result1);
	}
}

int main()
{
	
	int num1[5] = { 1,4,5,67,1 };
	int num2[3] = { 1,3,2 };
	int len1 = 5;
	int len2 = 3;
	//function(num1, num2, len1, len2);
	cout << "归并中位数为：" << function(num1, num2,len1,len2) << endl;
	return 0;

	
}