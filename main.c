#include <stdio.h>
int main() {
	int hour_result, min_result, secs_result, secs;

	printf("Input seconds: ");
	scanf("%d", &secs);
	
	hour_result = (secs/3600); 
	min_result = (secs -(3600*hour_result))/60;
	secs_result = (secs -(3600*hour_result)-(min_result*60));
	
	printf("Hour:Min:Secs - %d:%d:%d\n",hour_result, min_result, secs_result);


    switch(hour_result%2){
        case 0 : 
                printf("We have even number of hours\n");      
                if(hour_result >= 0 && hour_result <= 5)
                    printf("Hours fall within the range 0<=hours<= 5.\n");
                else printf("We have the number of hours to be greater than 5\n");
                break;
        default: 
                printf("We have odd number of hours\n");
                break;
    }
	
	return 0;
}

/*

command to run code on the terminal:  
> gcc main.c -o main && ./main

*/
