#include    <stdio.h>
#include    <time.h>

int main(){
    time_t  now;
    int  size;
    struct tm  *cur;
    const char *wdays[] = {"San","Mon","Tue","Wed","Thu","Fri","Sat"};

    size = sizeof(time_t);
    printf("size of time_t : %d bytes\n",size);

    /* 現在の時刻を取得 1970.1.1 00:00:00からの経過時間（秒） */
    now = time(NULL);

    /* 現在の日時をtm構造体の形式で取得 */
    cur = localtime(&now);

    /* 日付を表示 */
    printf("%d/%d/%d(%s)\n",
            cur->tm_year+1900,cur->tm_mon+1,cur->tm_mday,
            wdays[cur->tm_wday]);

    /* 時刻を表示 */
    printf("%02d:%02d:%02d\n",cur->tm_hour,cur->tm_min,cur->tm_sec);

    return 0;
}
