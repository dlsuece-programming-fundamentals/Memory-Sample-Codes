#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    fp = fopen("test.txt", "w");
    fprintf(fp, "hello no. %i\n", 1);
    fputs("where is no. 2", fp);
    fputc('?', fp);
    fclose(fp);

    printf("Examine the contents of test.txt using Notepad before continuing.\n\n");
    printf("press enter to continue. ");
    getchar();

    fp = fopen("test.txt", "a");
    fputs("\nHow about no. 3?", fp);

    fclose(fp);
}
