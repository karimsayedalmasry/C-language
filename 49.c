#include <stdio.h>

void main(void)
{
    char str[] = {"hjbfvbdhbvhgscnvmdbj"};
    int count[21] ={0} ;
    char temp;
   
    int i = 0;
    for (int i = 0; i < 21; i++)
    {
        temp = str[i];
        for (int j = 0; j < 21; j++)
        {
            if (temp == str[j])
            {
                count[i]++;
            }
        }
    }
        for (int j = 0; j < 21; j++)
    {

        printf("%c:%d, ", str[j],count[j]);
    }

}
