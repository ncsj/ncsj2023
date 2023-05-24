#include    <stdio.h>

typedef union _DATA{
    unsigned short  x;
    unsigned char   s[2];
}DATA;

int main(){
    DATA data;


    data.x = 'あ';

    printf("[0] : %x\n",data.s[1]);
    printf("[1] : %x\n",data.s[0]);

    printf("%c",data.x);

    return 0;
}
