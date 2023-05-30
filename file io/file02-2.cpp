#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100], c;
    int x;

    fp = fopen("test.txt", "r");
    printf("Name\t\tChar\tASCII\n");
    do
    {
        // read a character
        c = fgetc(fp);
        printf("c\t=\t%c\t%d\n", c, c);

    } while (c != EOF);


    fclose(fp);

    return 0;
}
