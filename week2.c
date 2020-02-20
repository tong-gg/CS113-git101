#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[10];
int main(){
    //printf("Enter Name: ");
   // gets(name);
   //fgets(name, 10, stdin);
   // printf("name = %s\n", name);
   //char number[5];
   //fgets(number, 5, stdin);
   //int i = atoi(number); เปลี่ยน array to integer
   //printf("number = %s, i = %d\n", number);
   //char a = getchar();
   //char b = getchar();
  // puts(name); //รับ char array
  /* int found = 0;
   float isExist = 0.0;
   char isOnline = '\0' สามค่านี้คือ False */
/* fgets(number, 10, stdin);
int i = atoi(number);
if(i >= 0 && i<=10);{
    printf("if = %d", i >= 0 && i<=10); //ทำแบบนี้ไม่ error น้า เพราะค่า boolean เป็น 0 กับ 1 จ้า บรรทัดนี้จะออกเป็น 1
}*/
fgets(number, 5, stdin);
//int i = atoi(number);
//int count = 0;
/* while (count < i){
    printf("%d\n", count);
    count++; // จะส่งตัวแปรไปก่อนแล้วค่อยบวก
    //++count; // บวกก่อนแล้วค่อยส่ง อันนี้จะเร็วกว่า
    /*count++ * count - 5 * ทำอันแรกก่อนเพราะเป็น unary เรียงแบบนี้ (), unary 
}*/
int i = atoi(number);
for (int j = 0; j <= i; j++){
    printf("%d\n", j); 
}
}
