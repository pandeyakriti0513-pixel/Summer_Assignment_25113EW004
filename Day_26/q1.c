#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int guess;
int secret_num;
int attempts;

void line(int n){
    int i;
    for(i=0;i<n;i++){
        printf("=");
    }
    printf("\n");
    return;
}

void hard(){
    attempts=5;
    secret_num=rand() %(1000-0+1)+0;
    line(50);
    printf("\n\nHard Mode Activated!\nWelcome to Hard Mode.\nOne number."
        " Few chances. Make every guess count.\n\n\n");
    line(50);
    printf("\n\nThink of a number between 0 and 1000:\n\n\n");
    while(attempts>0){
        scanf("%d",&guess);
        if(guess==secret_num){
            printf("Congratulations!! You are a Number Guessing Genius :)");
            return;
        }
        else if(guess>secret_num){
            printf("Too High !! Bring it down...\nYou have %d guess/es left\n",attempts-1);
        }
        else if(guess<secret_num){
            printf("Too Low !! Aim Higher...\nYou have %d guess/es left\n",attempts-1);
        }
        attempts--;
    }
    printf("GAME OVER :[\nThe number was %d\nBetter LUCK next time...:)",secret_num);
    return;}

void medium(){
    attempts=7;
    secret_num=rand()%(500-0+1)+0;
    line(50);
    printf("\n\nMedium Mode Activated!\nThe stakes are rising. Stay sharp!\n\n\n");
    line(50);
    printf("Think of a number between 0 and 500:\n");
    while(attempts>0){
        scanf("%d",&guess);
        if(guess==secret_num){
            printf("Congratulations!! You are a Number Guessing Genius :)");
            return;
        }
        else if(guess>secret_num){
            printf("Too High !! Bring it down...\nYou have %d guess/es left\n",attempts-1);
        }
        else if(guess<secret_num){
            printf("Too Low !! Aim Higher...\nYou have %d guess/es left\n",attempts-1);
        }
        attempts--;
    }
    printf("GAME OVER :[\nThe number was %d\nBetter LUCK next time...:)",secret_num);
    return;}

void easy(){
    attempts=10;
    secret_num=rand()%(250-0+1)+0;
    line(50);
    printf("\n\nEasy Mode Activated!\nA gentle beginning... every champion starts somewhere.\n\n\n");
    line(50);
    printf("Think of a number between 0 and 250:\n");
    while(attempts>0){
        scanf("%d",&guess);
        if(guess==secret_num){
            printf("Congratulations!! You are a Number Guessing Genius :)");
            return;
        }
        else if(guess>secret_num){
            printf("Too High !! Bring it down...\nYou have %d guess/es left\n",attempts-1);
        }
        else if(guess<secret_num){
            printf("Too Low !! Aim Higher...\nYou have %d guess/es left\n",attempts-1);
        }
        attempts--;
    }
    printf("GAME OVER :[\nThe number was %d\nBetter LUCK next time...:)",secret_num);
    return;}
void restart(){
    main();
    return;
}
int main(){
    int choice;
    line(50);
    srand(time(NULL));
    printf("\nWELCOME TO THE NUMBER GUESSING GAME\n\n");
    line(50);
    printf("\n\nCHOOSE YOUR CHALLENGE\n1:EASY->Plenty of chances\n"
        "2:MEDIUM->A balanced challenge\n3:HARD->Only for the legends\n"
        "Press 1 for easy,2 for medium and 3 for hard\n\n\n");
    line(50);
    scanf("%d",&choice);
    switch(choice){
        case 1: easy();
                break;
        case 2: medium();
                break;
        case 3: hard();
                break;
        default: printf("Wrong input.\n");
                 break;
    }
    line(50);
    printf("\n\nPress 1 to play another round. Press 0 to exit.\n\n\n");
    line(50);
    scanf("%d",&choice);
    if(choice==1){
        restart();
    }
    else{
        printf("GOODBYE!!! See you next time:)");
        return 0;
    }
    return 0;
}
    