#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int min,max,num;
    min = 1;
    max = 16;
    num = max-min+1;

    int i,k,array[num];

    srand((unsigned int)time(NULL));

    for(i=0; i<num; i++)
    {
        do
        {
            array[i] = rand()%max + min;
            for(k=0; k<i; k++)
            {
                if(array[i] == array[k])
                {
                    break;
                }
            }
        } while (i != k);
    }

    for(i=0; i<num; i++)
    {
        if(i<num-1)
        {
            printf("%d,", array[i]);
        }
        else
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}