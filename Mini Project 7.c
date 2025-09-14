#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
     char category;
	 printf("Enter the first letter of the book category (F/N/S/H):");
	 scanf("%c", &category)	;//space before %c to ignore whitespace
	 
	 switch(category){
	 	case'F':
	 	case'f':
	 	  printf("Fiction\n");
	 	  break;
	 	case'N':
	 	case'n':
	 	  printf("Non-Fiction\n");
	 	  break;
	 	case'S':
	 	case's':
	 	  printf("Science\n");
	 	  break;
	 	case'H':
	 	case'h':
	 	  printf("History\n");
	 	  break;
	 	default:
	 	  printf("Invalid category.\n");
	 }
	return 0;
}
