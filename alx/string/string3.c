#include <stdio.h>

int main()

{
        char str[15] = "vincent abukuse";
	

        for(int n=0; str[n]; n++)

        {

        printf("character of str[%d]=%c\n",n,str[n]); // remember *(str+n) and in ptr *(ptr+n)  will still work //

        }

        return(0);
}


