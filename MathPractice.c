#include <stdio.h>
#include <stdlib.h>

//colours
void Boldblue () {
  printf("\033[1;34m");
}
void red () {
  printf("\033[1;31m");
}

void yellow () {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}

//function declaration
void Addpractice(int);
void Subpractice(int);
void Mulpractice(int);

//global variables
    int globalscore = 0;
    int globalscoreTotal = 0;

int main()
{
    int an, sn, mn;
    red();
    printf("--------------------------------------------------------\n");
    yellow();
    printf("          Welcome to math practice program!        \n");
    red();
    printf("--------------------------------------------------------\n");
    Boldblue();
    printf("\nInstruction: ");
    reset();
    printf("Answer the math problems for improving\n");
    printf("your math skills & solving speed try to answer quick\n");
    printf("\n                --------####--------                  \n");
    //how many questions of add
    printf("How many addition questions do you want to solve?...");
    scanf("%d",&an);
    Addpractice(an);
    //how many questions of  sub
    printf("\nHow many subtaction questions do you want to solve?...");
    scanf("%d",&sn);
    Subpractice(sn);
    //how many questions of  mul
    printf("\nHow many multiply questions do you want to solve?...");
    scanf("%d",&mn);
    Mulpractice(mn);
    system("clear");
    //print global score
    printf("\n             <<<<--------@@@@-------->>>>               \n");
    printf(  "           Your Total Score is %d Out of %d             ", globalscore, globalscoreTotal );
    printf("\n             <<<<--------@@@@-------->>>>               \n");


    return 0;
}

void Addpractice(n){

//addition
//variable declaration
int a, b, i, sol, ans, score;
score = 0;
printf("\n---------------------(1) ADDITION----------------------\n");
//loop of addition questions
for(i=1; i<=n; i++){
//question setter
a = random()%100 + 1;
b = random()%100 + 1;
sol = a + b;
//printing question and taking user solution
printf("%d) %d + %d = ",i, a, b);
scanf("%d",&ans);
printf("\n");
//condition to update the score
if(ans == sol){
score++;
globalscore++;
}
}
globalscoreTotal += n;
//end of asking addition questions
printf("\n------------------------####--------------------------\n");
printf("                              Your Addition Score = %d", score);
printf("\n------------------------####--------------------------\n");

}

void Subpractice(n){

//subtraction
//variable declaration
int a, b, i, sol, ans, score;
score = 0;
printf("\n-------------------(2) SUBTRACTION---------------------\n");
//loop of addition questions
for(i=1; i<=n; i++){
//question setter
a = random()%100 + 1;
b = random()%100 + 1;
sol = a - b;
//printing question and taking user solution
printf("%d) %d - %d = ", i, a, b);
scanf("%d",&ans);
printf("\n");
//condition to update the score
if(ans == sol){
score++;
globalscore++;
}
}
globalscoreTotal += n;
//end of asking subtraction questions
printf("\n------------------------####--------------------------\n");
printf("                           Your Subtaction Score = %d", score);
printf("\n------------------------####--------------------------\n");

}

void Mulpractice(n){

//subtraction
//variable declaration
int a, b, i, sol, ans, score;
score = 0;
printf("\n------------------(3) MULTIPLICATION-------------------\n");
//loop of addition questions
for(i=1; i<=n; i++){
//question setter
a = rand() % 10;
b = random()%20 + 1;
sol = a * b;
//printing question and taking user solution
printf("%d) %d x %d = ", i, a, b);
scanf("%d",&ans);
printf("\n");
//condition to update the score
if(ans == sol){
score++;
globalscore++;
}
}
globalscoreTotal += n;
//end of asking subtraction questions
printf("\n------------------------####--------------------------\n");
printf("                       Your Multiplication Score = %d", score);
printf("\n------------------------####--------------------------\n");

}
