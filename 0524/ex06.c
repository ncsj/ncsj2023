#include    <stdio.h>
#include    "data.h"

#define     ON      1
#define     OFF     0

int main(int argc,char *argv[]){
    DATA  data;
    FILE  *fp;
    int  rtc;
    int  loop = ON;

    fp = fopen(argv[1],"rb");
    if(fp != NULL){
        while(loop == ON){
            rtc = fread(&data,sizeof(DATA),1,fp);
            if(rtc < 1){
                loop = OFF;
            }
            else{
                printf("%s %d %d\n",data.s,data.x,data.y);
            }
        }

        fclose(fp);
    }

    return 0;
}
