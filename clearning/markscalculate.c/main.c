#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,s3,total;
    float per;
    printf("Enter your mask here..\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    total=s1+s2+s3;
    printf("total marks: %d \n",total);
    per=total*100/300;
    printf("student percentage %f \n:",per,"%");

    if(per>=80 && per<100){
        printf("A grade",per,"%");
    }
    else if(per>=60 && per<80){
        printf("B grade",per);
    }
    else{
        printf("C grade %f",per);
    }
    return 0;
}
