#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char generatecomputerchoice(){
	char charset[]={'r','p','s'};
	srand(time(NULL));
	int idx = rand() % (sizeof(charset));
	return(charset[idx]);	
}
int game(char player,char computer){
 	if((player=='s' && computer=='s')||(player=='r' && computer=='r')||(player=='p' && computer=='p')){
 		return 0;
 	}
 	else if(player=='s' && computer=='r'){
 		return -1;
 	}	
	 else if(player=='s' && computer=='p'){
 		return 1;
 	}
 	else if(player=='p' && computer=='r'){
 		return 1;
 	}
 	else if(player=='p' && computer=='s'){
 		return -1;
 	}
 	else if(player=='r' && computer=='p'){
 		return -1;
 	}
 	else 
 		return 1;
}
int main(){
	char player,computer,choice;
	int result;
	printf("\n___________________________________________________ROCK PAPER SCISSORS__________________________________________________\n");
	printf("\n 					Hey WELCOME to Rock Paper Scissors\n ");
	do{
	printf("\n					Choices are:\n");
	printf("\n							1)ROCK\n");
	printf("\n							2)PAPER\n");
	printf("\n							3)SCISSORS\n");
	printf("\nFor simplicity you can enter r for rock,p for paper and s for scissors\n");
	scanf(" %c",&player);
	computer=generatecomputerchoice();
	result=game(player,computer);
	printf("\nPlayer's choice is %c and Computer's choice is %c\n",player,computer);
	if(result==0){
		printf("\n					****IT'S A DRAW****\n");
	}
	else if(result==-1){
		printf("\n					****COMPUTER WON****\n");
	}
	else{
		printf("\n					****CONGRATS YOU WON****\n");
	}
	printf("\nDo you want to play again?  (y/n):\n");
	scanf(" %c",&choice);
	}while(choice=='y' || choice=='Y');
	
	return 0;
}
