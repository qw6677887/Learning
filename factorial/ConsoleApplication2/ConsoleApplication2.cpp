// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip> 
#include <stdio.h> 
#include<math.h>
#include<cstdlib>
using namespace std;
double factorial(int n);
int main()
{
	int n;
	double y;

	scanf("%d",&n);
	y = factorial(n);
	printf("%f",y);

}
double factorial(int n)
{
	double sum = 1;
	for (int i = 1; i <= n; i++)
	{

		sum *= i;
	}
	return sum;

}
