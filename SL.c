#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int display();
int randoms();
int condition(int);
main()
{
	int e,f=0,g=0,h;
	char d,i,pa[100],pb[100];
	
	display();
	
	printf("Player A, enter your name:\t");
	scanf("%s",pa);
	
	printf("Player B, enter your name:\t");
	scanf("%s",pb);
	
	while(f<99&&g<99)
	{
		printf("%s, Roll the die",pa);
		printf("\nPress enter to roll the die:\n");
		scanf("%c",&d);
		
		e=randoms();
		
		printf("The outcome of dice of %s comes out to be %d\n",pa,e);
		f=f+e;
		
		if(f>99)
		{
			printf("Invalid number on dice.\n");
			f=f-e;
		}
		
		if(f==63||f==48||f==50||f==18||f==16||f==9)
		{
			printf("Congrats!%s You have climbed a ladder\n",pa);
		}
				
		if(f==98||f==86||f==74||f==32||f==51)
		{
			printf("Oh no,%s, you have bitten by snake\n",pa);
		}
				
		f=condition(f);
		printf("The final value of %s is %d\n",pa,f);
		if(f==99)
		{
			printf("Congrats! player %s is winner!",pa);
			break;
		}
		
		printf("%s, Roll the die\n",pb);
		printf("Press enter or to roll the die:\n");
		scanf("%c",&i);
		
		h=randoms();
		printf("The outcome of dice of %s comes out to be %d\n",pb,h);
		g=g+h;
		if(g>99)
		{
			printf("Invalid number on dice.\n");
			g=g-h;
		}
		
		if(g==63||g==48||g==50||g==18||g==16||g==9)
		{
			printf("Congrats!%s You have climbed a ladder\n",pb);
			break;
		}
		
		if(g==98||g==86||g==74||g==32)
		{
			printf("Oh no,%s, you have bitten by snake\n",pb);
		}
		
		g=condition(g);
		printf("The final value of %s is %d\n",pb,g);
		
		if(g==99)
		{
			printf("Congrats! %s is winner!",pb);
			break;
		}
	}
	getch();
	return 0;
}
display()
{
	int a;
	printf("\n\n");
	printf("Welcome to snakes & ladders\n");
	printf("\n");
	for(a=99;a>=10;a--)
	{
		printf("%d",a);
		printf("%c%c",32,32);
		if(a%10==0)
		{
			printf("\n\n");
		}
	}
	printf("%c",32);
	
	for(a=00;a<=9;a++)
	{
		printf("%d",a);
		printf("%c%c%c",32,32,32);
	}
	
	printf("\n\n");
	
	printf("Snakes are from:\n");
	printf("Cell 98 - 39\nCell 86 - 51\nCell 74 - 22\nCell 32 - 6\nCell 51 - 2\n");
	
	printf("\nLadders are from:\n");
	printf("Cell 9 - 31\nCell 16 - 45\nCell 18 - 64\nCell 48 - 66\nCell 50 - 93\nCell 63 - 81\n");
	
	printf("\nInitially player A and B both are on 0 position\n");
}
// C program for generating a 
// random number in a given range.   
// Generates and prints 'count' random 
// numbers in range [lower, upper]. 
int randoms() 
{
		 	
	int lower = 1, upper = 6, count = 1,num; 
    // Use current time as  
    // seed for random generator 
    srand(time(0));  
    int i;
	 
    for (i = 0; i < count; i++) 
	{ 
        num = (rand() % (upper - lower + 1)) + lower;  
    }
    
	return(num);
}
int condition(int f)
{
	int k;
	
	for(k=1;k<12;k++)
	{
		if(f==98)
		{
			f=39;
		}
		
		if(f==86)
		{	
			f=51;
		}
		
		if(f==74)
		{			
			f=22;
		}
		
		if(f==32)
		{	
			f=6;
		}
		
		if(f==51)
		{
			f=2;
		}
		
		if(f==9)
		{
			f=31;
		}
		
		if(f==16)
		{
			f=45;
		}
		
		if(f==18)
		{
			f=64;
		}
		
		if(f==48)
		{
			f=66;
		}
		
		if(f==50)
		{
			f=93;
		}
		
		if(f==63)
		{
			f=81;
		}
		
		return(f);
	}
}
