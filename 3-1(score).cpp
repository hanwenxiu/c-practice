// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//
#include<string.h>
#include "stdafx.h"
#include<stdio.h>
#define maxn 105
int main()
{
	char s[maxn]; int n;
	int score=0, count=1;
	int p = 0;
		scanf_s("%s", s);
		n = strlen(s);
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'O')
			{
				if (p)
					count++;
				score = score + count;
				p = 1;
			}
			else
				p = 0;
		}
		printf("%d", score);

}

