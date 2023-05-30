#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char line[100],word[100];

    fp = fopen("test3.txt", "r");

    //Gathers up to 100 characters, 
    // or a newline '\n' character is found
    // or end of file is reached
    while (fgets(line, 100, fp))
    {
        sscanf(line,"%s\n",word);
        puts(word);
    }

    fclose(fp);

    return 0;
}