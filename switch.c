#include<stdio.h>
main()
{
	printf("The Menu : \n1. Dosa, Rs 50\n2. Parotta, Rs 60\n3. Chicken Noodles, Rs 70\n4. Veg Friedrice, Rs 65\n5. Chicken Biriyani, Rs 80\n");
	printf("YOUR CHOICE\t");
	int mychoice=0;
	scanf("%d",&mychoice);
	switch(mychoice)
	{
		case 1:
			printf("Food item - Dosa\nPrice - Rs 50");
			break;
		case 2:
			printf("Food item - Parotta\nPrice - Rs 60");
			break;
		case 3:
			printf("Food item - Chicken Noodle\nPrice - Rs 70");
			break;
		case 4:
			printf("Food item - Veg Friedrice\nPrice - Rs 65");
			break;
		case 5:
			printf("Food item - Chicken Biriyani\nPrice - Rs 80");
			break;
		default:
		    printf("INVALID");	
	}
}
