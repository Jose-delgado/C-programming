#include<stdio.h>

int main()
{
	int firstTerm,difference,lastTerm,sum,num_terms;
   float average;
	printf("Enter first term: ");
	scanf("%d", &firstTerm);
   
   printf("Enter common difference: ");
	scanf("%d", &difference);
   
   printf("Enter number of terms: ");
	scanf("%d", &num_terms);

   lastTerm = firstTerm + (num_terms - 1) * difference;

   sum = (num_terms * (firstTerm + lastTerm) / 2);

   average = ((float)sum / (float)num_terms);
      
   printf("\n\nThe last term is %d\n", lastTerm);
   printf("The sum of all the terms is %d\n", sum);
   printf("The average of all the terms is %.1f\n", average);
		
	return 0;

} 
