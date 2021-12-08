#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, n=5;
    for(i=0; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%c","A"+j-1);
        }
        printf("\n");
    }
      for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%c","A"-1+i);
        }
        printf("\n");
    }
    return 0;
}
