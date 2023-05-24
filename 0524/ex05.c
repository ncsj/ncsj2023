#include    <stdio.h>
#include    <stdlib.h>
#include    "data.h"

int main(int argc,char *argv[]){
    int  length;
    DATA  *dp;
    int  i;

    FILE  *fp;

    fp = fopen(argv[1],"wb");
    if(fp != NULL){
        printf("length : ");
        scanf("%d",&length);

        printf("size of DATA : %ld\n",sizeof(DATA));

        /* メモリーの確保 */
        dp = (DATA *)malloc(sizeof(DATA) * length);

        for(i=0;i<length;i++){
            sprintf((dp+i)->s,"data-%02d",i);
            (dp+i)->x = 100 + i;
            (dp+i)->y = 200 + i;

            printf("%s %d %d\n",(dp+i)->s,(dp+i)->x,(dp+i)->y);
        }

        /**
        for(i=0;i<length;i++){
            fwrite((dp+i),sizeof(DATA),1,fp);
        }
        **/
        fwrite(dp,sizeof(DATA),length,fp);

        /* メモリーの解放 */
        free(dp);

        fclose(fp);
    }

    return 0;
}
