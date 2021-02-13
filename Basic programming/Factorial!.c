#include <stdio.h>

int main(){
	int num,i,f=1;
	scanf("%d", &num);              			// Reading input from STDIN

	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;  // Writing output to STDOUT
}
