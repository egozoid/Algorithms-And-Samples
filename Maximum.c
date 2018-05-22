#include<stdio.h>
#include<limits.h>
//#include<conio.h>


int GetMax (int a, int b)
{
	int Bits[2] = {a,b};
	return Bits[((a-b) >> ((sizeof(int) * 7))) & 0x1];
}

void main()
{
	printf("Result = %d .\n", GetMax(7,0));
	//exit(1);
}


