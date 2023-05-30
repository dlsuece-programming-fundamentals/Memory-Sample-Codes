#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getDelimitedItem(char *line, char **token_arr)
{

    char *token, *prev_token, *next_token;
    const char delim[3] = ",\n";

    token = strtok(line, delim);

    int i=0;
    while(token != NULL) {
        strcpy(token_arr[i],token);

        token = strtok(NULL, delim);
        i++;
    }
    return i;
}

int main(void)
{
    FILE *fp;
    char line[100],**items;
    int total;

    // Up to 10 items per line, each item has a max of 256 chars!
    //  In other words, four lines below is similar to
    //       char token_arr[10][256];
    items = (char **)malloc(10 * sizeof(char *));
    int j = 0;
    for (j = 0; j < 10; j++)
    {
        items[j] = (char *)malloc(256 * sizeof(char));
    }


    fp = fopen("test5.txt", "r");

    //Gathers up to 100 characters, 
    // or a newline '\n' character is found
    // or end of file is reached
    while (fgets(line, 100, fp))
    {
        total = getDelimitedItem(line,items);

        int k=0;
        for (k=0;k<total;k++) {
            printf("%-20s\t",items[k]);
        }
        putchar('\n');
    }

    fclose(fp);

    return 0;
}