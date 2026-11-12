#include <stdio.h>

int main(void) {
    /* 課題0401: 入力されたintのデータを+100した結果 */
    int i;
    int result;

    scanf("%d", &i);   // キーボードからiに入力
    result = i + 100;  // iに100を加えてresultへ

    printf("%d", result); // resultを表示
    return 0;
}