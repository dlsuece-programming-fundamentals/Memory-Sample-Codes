#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100], c;
    int x;

    fp = fopen("test.txt", "r");

    do
    {
        // read a character
        c = fgetc(fp);
        printf("c=%c\n", c);

    } while (c != EOF);


    fclose(fp);

    return 0;
}
