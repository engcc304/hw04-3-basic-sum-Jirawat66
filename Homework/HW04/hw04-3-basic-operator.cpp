
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main() {
    int num1 ;
    int num2 ;
    int num3 ;
    int answer ;
    scanf("%d %d %d" , num1, num2, num3) ;
    answer = num1 + num2 +num3 ;
    printf("answer = %d ", answer ) ;

return 0 ;
}
