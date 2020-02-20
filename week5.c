#include <stdio.h>
int main()
{
    int x = 100; //คอมจำ address คนจำ x
    int q = 0144; // ฐานแปด
    int w = 0x64; //ฐานสิบหก
    //printf("x = %d\n", x);
    //printf("Reference of x (Address of x) = %lu\n", &x);
    //printf("Reference of x (Address of x) = %p\n", &x); // %p ได้เลขฐานสิบหก ไปฝึกบวกลบเลขฐานด้วยน้า

    //Start Lab Lecture Week 5 
    //int number[] = {1, 2, 3, 4, 5, 6}; //initializer{} ระบุว่าอาเรย์นี้มีหก
    //int number[100];
    //int number[100] = {1, 2, 3, 4, 5, 6}; //กำหนดค่าเริ่มต้น
    //number[100] = 200;
    //printf("index 1 = %d\n", number[1]);
    //printf("Reference of number[1] = %p\n", &number[1]); //pointer เก็บ address, variable เก็บค่า, เข้าถึง index อื่นได้ เช่น index[1000]; จะแสดงแอดเดรสที่ 1000
    //printf("Reference of number[0] = %p\n", &number[0]);
    //printf("Reference of number = %p\n", number + 1); //ชื่ออาเรย์จะเรียกค่าแอดเดรสของ index ที่ 0 มาแสดง , บวก 1 จะบวกตามขนาดของ data type 
    //int number[] = {1, 2, 3, 4, 5, 6};
    //int *ptr = &x; //ประกาศตัวแปร pointer
    //int *arrPtr;
    //arrPtr = number; //เรียกตัวแปร pointer ไม่ต้องมี * แต่ตอนประกาศตัวแปรต้องมี, 0x00
    //arrPtr += 3; // บวกค่า address ตามขนาดของ data type 
    //*arrPtr += 3; // บวกค่า 4
    //printf("arrPtr = %p, *arrptr = %d\n", arrPtr, *arrPtr);
    /*int number[] = {1, 2, 3, 4, 5, 6};
    for (int *ptr = number; ptr <= &number[5]; ptr++){
        printf("[%p] = %d\n", ptr, *ptr);
    }
    int *ptr2 = number;
    for (int i = 0; i < 6; i++){
        printf("[%p] = %d\n", ptr2 + i, *(ptr2 + i));
    }*/
   /* char input[100];
    int count = 0;
    char c;
    while ( (c = getchar()) != '\n'){
        input[count] = c;
        ++count;
    }
    input[count] = '\0';
    for (char *cPtr = input; *cPtr != '\0'; cPtr++){
        printf("%c\n", *cPtr); */
    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s", &i, &c, s); //ส่งแอดเดรสไป แต่อาเรย์ไม่ต้องใส่ &
    printf("%d--%c--%s", i, c, s);
}
