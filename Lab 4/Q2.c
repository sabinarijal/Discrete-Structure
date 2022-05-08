#include<stdio.h>
int fibonacci(int num);
int main(){
	int n,c;
	printf("enter a number:");
	scanf("%d",&n);
	for(c=0;c<n;c++){
 printf("%d\n",fibonacci(c));}
 return 0;
	
}
int fibonacci(int num)
{
	if (num<=1){
	return num;}
	else{
		return (fibonacci(num-1)+fibonacci(num-2));
	}
}
