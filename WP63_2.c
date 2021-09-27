#include<stdio.h>
int main()
{
    FILE *fp ;
    char in[100] ;
    printf("Input : ");
    scanf("%[^\n]", in);
    fp = fopen(in, "r");
    if(fp == (FILE *)NULL) 
    {
        printf("There is no such file."); 
        return 0;
    }

    char out[100];
    printf("Output: ");
    scanf(" %[^\n]", out); 
    FILE *outFile = fopen(out, "w");
    
    char ch;
    while ((ch = fgetc(fp)) != EOF)//EOF is End Of File
    {
        fprintf(outFile, "%c", ch);
    }
    
    _fcloseall();
    return 0;
}