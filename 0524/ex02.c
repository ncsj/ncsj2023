#include    <stdio.h>

union DATA{
    unsigned short  x;
    unsigned char   s[2];
};

int main(){
    union DATA data;

    data.x = 0x0041;

    printf("x    : %d\n",data.x);
    printf("s[0] : %x\n",data.s[0]);
    printf("s[1] : %x\n",data.s[1]);

    printf("%c\n",data.s[0]);
    printf("%c\n",data.s[1]);

    printf("%s\n",data.s);

    return 0;
}
