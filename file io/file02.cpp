#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100], c;
    int x;

    fp = fopen("test.txt", "r");

    // read a string up 100 characters max
    fgets(s, 100, fp);
    printf("s=%s\n", s);

    // read a string value
    fscanf(fp, "%s", s);
    printf("s=%s\n", s);

    // read a string value and integer value
    fscanf(fp, "%s %i", s, &x);
    printf("s=%s\n", s);
    printf("x is %i\n", x);

    // read a string up to 10 characters max
    fgets(s, 10, fp);
    printf("s is %s\n", s);

    // read a character
    c = fgetc(fp);
    printf("c=%c\n", c);

    fclose(fp);
}
