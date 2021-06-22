#include <stdio.h>
#include <iostream>
using namespace std; 
int main()
{
	char any[20] = { "asdasd" };
	int any21 = 0;
	int length = strlen(any);
	for (int i = 0; i < length; i++)
	{
		any21 = any[i];
		printf("%d\n", any21);

	}

}
