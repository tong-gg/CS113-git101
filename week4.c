#include <stdio.h>
#include <stdlib.h>
int x = 1000; //ตัวแปร Global อยู่ตรงนี้น้า
int addTen(int x) //Function Prototype, function  signature
{   
    x += 10;    //Function Body
    return x;
}
int addTwenty(); //เดี๋ยวจะมีฟังก์ชันตัวนึงนะ รีเทิร์นเป็น int นะ แต่รอก่อนนะ เด๊่ยวมาแป๊บนึง
//หรือจะประกาศ global ตรงนี้ก็ได้ เพราะบรรทัดเรียกใช้อยู่ข้างล่าง
int main(){ // Local Scope เริ่มตั้งแต่เปิดปีกกาจนถึงปีกกาปิด ฟังก์ชันอื่นเอาไปใช้ไม่ได้ ถ้าหาใน Local ไม่เจอ จะไป encloser คือ Global
    int x = 90;
    int y = addTen(x); //ส่ง x เข้าไปในฟังก์ชัน addTen 
    printf("addTen in main = %d\n", y);
    printf("addTwenty in main = %d", addTwenty());
}
int addTwenty()
{
    x += 20;
    return x;
}
/* การทำงานของ memory รันโปรแกรมแล้วจะเรียก global มาก่อน  
memory แต่ละช่องคือ 1 byte เมื่อประกาศตัวแปร int จะเข้าไปจองพื้นที่ใน memory 4 byte
default ของ global คือ 0 
ต้องกำหนดค่าเริ่มต้นให้ local เสมอ ไม่งั้นได้เลขแปลกๆ มาน้า เพราะเวลาปิดโปรแกรม โปรแกรมจะไม่เคลียร์เมมให้ จะมีตัวเลขค้างอยู่ */
/* int fac(int i){
    if (i == 1){
        return 1;
    }
    return i*fac(i-1);
} */