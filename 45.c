#include <stdio.h>

void main(void)
{
    char str[10][11] = {
        "propagation",
        "performance",
        "probability",
        "property",
        "progress",
        "program",
        "process",
        "problem",
        "perfect",
        "perfume"};
    int cost[10] = {0};
    int notdone = 1;
    char c;
    while (1)
    {
        printf("Please enter 1 letter: %c\n");
        scanf("%c", &c);
        fflush(stdin);
        fflush(stdout);
        if (c == 'p')
        {

            for (int i = 0; i < 10; i++)
            {
                cost[i] = cost[i] + 1;
            }
            break;
        }
    }
    int letter_num = 1;
    for (int i = 1; i < 11; i++)
    {
        while (notdone)
        {
            printf("enter new letter\n");
            scanf("%c", &c);
            fflush(stdin);
            fflush(stdout);
            for(int j = 0 ; j<10 ; j++)
            {
                if(c==str[j][i])
                {
                    cost[j] = cost[j] + 1 ; 
                }
            }
            notdone  = 0 ; 
        }
        notdone = 1 ; 
    }

    int tem = 99 ; 
    int index ; 
    for(int i = 0 ; i<10 ; i++)
    {
        if(cost[i]>tem){
             tem  = cost[i];
             index = i ;
        }

    }
    
}