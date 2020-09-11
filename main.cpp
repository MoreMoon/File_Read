#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *in;
    int ch;

    if ( (in = fopen("test.bin", "rb")) == NULL ) {
        fputs("파일 열기 에러!", stderr);
        exit(1);
    }

    while ( (ch = fgetc(in)) != EOF ) {
        printf("%02X ", ch);
    }

    fclose(in);
    re