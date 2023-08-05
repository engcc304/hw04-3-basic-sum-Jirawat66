
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
    int Num1 ;
    int Num2 ;
    int Num3 ;
    int answer ;
    scanf( "%d %d %d" ,&Num1, &Num2, &Num3) ;
    answer = Num1 + Num2 + Num3 ;
    printf( "answer = %d ", answer ) ;

    return 0 ;
}
