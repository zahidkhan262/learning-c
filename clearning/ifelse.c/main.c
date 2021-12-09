#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,yes=1;

    printf("Enter your age here... to check are you eligible for voting");
    scanf("%d",&age);
    if(age>=18){
        printf("%d Congarate!! You are eligible for voting",age);
        printf("Enter 1 if you have voter id");
        scanf("%d",&yes);
        if(yes==1){
            printf("You can give the vote");
        }
        else{
            printf("You need to make voter Id");
        }

    }else{
        printf("%d Opps! You are not eligible for voting your",age, "below 18");
    }


    return 0;
}
