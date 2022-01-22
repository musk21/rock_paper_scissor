#include<stdio.h>
#include <stdlib.h> //use to generate random number
#include <time.h>   // used to generae different no each time
int RockPaperScissor(char you,char comp){
// returns 1 if you win,returns -1 if you lose and 0 if draw
// Condition for draw
if (you==comp)
{
    return 0;
}
// Non drawing condition
//Total Condition 
//1 rock paper (rp) & paper rock(pr)
//2 rock scissor(rs) & scissor rock(sr)
//3 paper scissor(ps) & scissor paper(sp)
if (you=='r' && comp=='p')
{
    return -1;
}
else if(you=='p' && comp=='r'){
    return 1;
}
if (you=='r'&& comp=='s')
{
    return 1;
}
else if(you=='s' && comp=='r'){
    return -1;
}
if (you=='p'&& comp=='s')
{
    return -1;
}
else if(you=='s' && comp=='p'){
    return 1;
}
}
int main(){
    char you,comp;
     int number;
    srand(time(0));            //intializing the number
    number = rand() % 100 + 1;
    if (number<33)
    {
         comp='r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
   
    printf("Enter r for rock  p for paper and s for scissor\n ");
    scanf("%c",&you);
    int result=RockPaperScissor(you,comp);
    printf("You choose %c and computer choose %c",you,comp);
    if (result==0)
    {
        printf(" The match is draw \n");
    }
    else if(result==1)
    {
         printf(" You Won \n");
    }
    else{
         printf(" You lose \n");
    }
    return 0;
}