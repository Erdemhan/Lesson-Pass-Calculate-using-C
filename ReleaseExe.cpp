#include <stdio.h>
#include <conio.h>

int main (void){
	
	float mterm,final,av,limit;
	
	printf("Enter your pass limit\n");
	scanf("%f",&limit);
	printf("Enter your note as Midterm,Final\n");
	scanf("%f,%f",&mterm,&final);
	av=mterm*2/5+final*3/5;
	
	if(av>limit,final>limit){
		printf("you have passed the lesson your average note is: %f\n",av);
}
	else{
		printf("You couldn't pass the lesson your avarage note is: %f\n",av);
	}
	
	printf("Press a button for finish..");
	getch();
	return(0);	
}
