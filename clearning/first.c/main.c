#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, n=5;
    for(i=0; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d","i"+j-1);
        }
        printf("\n");
    }
    return 0;
}
