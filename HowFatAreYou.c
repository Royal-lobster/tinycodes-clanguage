#include <stdio.h>
#include <stdlib.h>

//function declaration

void YourWeightResult(float, float);

int main()
{
    //variable declaration
    float h, w;
    char hconfirm, wconfirm;
    //welcome text
    printf("-------------------------------------------------------------------------\n");
    printf("  Welcome to the How Fat are You Program!  \n");
    printf("-------------------------------------------------------------------------\n");
    printf(" NOTE: Please enter correct details below \n");
    printf("-------------------------------------------------------------------------\n\n");
    //asking height
height:
    printf("-> What is your Height in centimeters ?\n");
    scanf("%f",&h);
    //conforming height
    printf("Your height is %f cms. is that right? [y/N]...",h);
    scanf(" %c",&hconfirm);
    //if height is true
    if (hconfirm == 'y' || hconfirm == 'Y' )
    {
        //asking weight
weight:
        printf("\n-> Ok! Now whats your Weight in kilograms?\n");
        scanf("%f",&w);
        //conforming weight
        printf("Your weight is %f kgs. is that right? [y/N]...",w);
        scanf(" %c",&wconfirm);
        //if weight is true
        if (wconfirm == 'y' || wconfirm == 'Y' )
        {
    printf("\n------------------------------------------------------------------------\n");
            YourWeightResult(w,h);
    printf("\n------------------------------------------------------------------------\n");
        }
        //if weight is wrong
        else
        {
            printf("\n");
            goto weight;
        }

    }
    //if height is false
    else
    {
        printf("\n");
        goto height;
    }
    return 0;
}

void YourWeightResult(float kg, float cm)
{
    float m, bmi;
    m = cm/100;
    bmi = kg/(m*m);

    if(bmi>=0 && bmi<18.5)
    {
        printf("You are skinny! Eat more!!");
    }
    else if(bmi>=18.5 && bmi<25)
    {
        printf("Great!! You are not fat! Keep it up");
    }
    else if(bmi>=25 && bmi<30)
    {
        printf("You are fat!! try exercising");
    }
    else if(bmi>=30 && bmi<50)
    {
        printf("You are obese! Stop eating too much and try exercising");
    }
    else
    {
        printf("We need to talk...I said to enter details of yours not elephant's");
    }

};
