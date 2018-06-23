
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    while (1)
    {
        char word[101];
        fgets(word, 101, stdin);
        int i,x,z=0;
        for(i=0;i<=strlen(word);i++)
        {
            x = (int)word[i];
            if(x%2 != 0)
            z = x+z;
        }
        printf("%d\n",z);

    }
return 0;
}
