#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1 , num2;
	char operator;
	
	printf("Enter first number:");
	scanf("%f", &num1);
	
	printf("Enter an operation(+ , - ,* ,/):");
	scanf("\n%c", &operator);//Note the space before %c
	
	printf("Enter the second number:");
	scanf("%f", &num2);
	
	switch(operator){
		case'+':
		   printf("Result = %.2f\n",num1 + num2);
		   break;
		case '-':
		   printf("Result = %.2f\n",num1 - num2);
		   break;
		case '*':
		   printf("Result = %.2f\n",num1 * num2);
		   break;
		case '/':
		  if(num2 ==0)
		     printf("Error: Cannot divide by zero.\n");
		  else 
		     printf("Result = %.2f\n",num1/num2);
		     break; 
		     defualt:
		      printf("Invalid operator.\n");		  				     
	}		
	return 0;
}
