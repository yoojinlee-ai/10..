#include <stdio.h>

void main(void) {
    FILE *fp;
    int c;

    fp = fopen("sample.txt", "r");  
    if (fp == NULL) {                
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    while ((c = fgetc(fp)) != EOF)   
        putchar(c);                  

    fclose(fp);                      
}

