#include<stdio.h>

main()
{
	int choice;
	printf("press 1 to print MONDAY\n");
	printf("press 2 to print TUESDAY\n");
	printf("press 3 to print WEDNESDAY\n");
	printf("press 4 to print THRUSDAY\n");
	printf("press 5 to print FRIDAY\n");
	printf("press 6 to print SATURDAY\n");
	printf("press 7 to print SUNDAY\n");
	
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	    case 1:
		       printf("MONDAY");
		       break;
		
		case 2:
		       printf("TUESDAY");
			   break;
			   
	    case 3: 
		       printf("WEDNESDAY");
			   break;
			   
	    case 4:
		       printf("THRUSDAY");
			   break;
			   
	    case 5:
		        printf("FRIDAY");
		        break;
		        
		case 6:
			    printf("SATURDAY");
		        break;
				
	    case 7:
		         printf("SUNDAY");
				 break;
	    default:
		        printf("Enter valid choice...");
    }
}