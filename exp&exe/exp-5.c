#include <stdio.h>

void main()
{
    int i, j, n;

    printf("\n========= NUMBER TRIANGLE =========\n");

    printf("\nHow many rows of consecutive numbers? : ");
    scanf("%d",&n);
    printf("\n");
    
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
        
    }
    
    printf("The required pattern is given above\n");
}