#include    <stdio.h>

union DATA{
    unsigned int  x;
    unsigned int  y;
};

int main(){
    union DATA data;

    data.x = 100;
    data.y = 123;

    printf("%d , %d\n",data.x,data.y);

    return 0;
}
