#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    /* char a[] = "patipan30!@#$";
    int count_digit = 0, count_alpha = 0;
    //int count = 0;
    /* for (int i = 0; a[i] != '\0'; i++)
        if (isalnum(a[i])){ //นับว่ามี alphanumeric ทั้งหมดกี่ตัว (ตัวเลขและอักขระ)
            count++;
        }
    printf("No. of alphanumeric in string: %d", count); */
    /* for (int i = 0; a[i] != '\0'; i++){
        if (isdigit(a[i])){ //นับตัวเลขในสตริง
            count_digit++;
        }
        if (isalpha(a[i])){ //นับอักขระในสตริง
            count_alpha++;
        }
    }
    printf("Digit: %d\n", count_digit);
    printf("Alpha: %d\n", count_alpha); */

    /* char str1[] = "Hello, world";
    char str2[] = "String copy";
    char str3[] = "String is ready to replace";
    char str4[] = "To str 1";
    char str5[] = "Str4 is already to str1";
    printf("--Before function--\n");
    printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
    printf("--------------\n");
    strcpy(str1, str4); //str1 จะถูกแทนที่ด้วย str 4
    strcpy(str3, "str3 is replaced"); //str3 จะถูกแทนที่ด้วยสตริงคำว่า str3 is replaced;
    strcpy(str4, str5);
    printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4); */

    /* char count_string[] = "Kasetsart University";
    printf("Length of the srting: %d", strlen(count_string)); //นับอักขระว่ามีกี่ตัวรวมช่องว่างด้วยนะ */

    /* char first_name[20] = "Patipan";
    char last_name[20] = "Boonsimma";
    strcat(first_name, last_name); //ต่อสตริงจาก last_nane -> first_name
    printf("%s", first_name); */
    char str_a[] = "Patipan"; // strcmp compare string ว่าเท่ากันหรือไม่ ถ้าเท่ากันจะรีเทิร์น 0 ออกมา 
    char str_b[] = "Patipan";
    if (strcmp(str_a, str_b) == 0){
        printf("string is equal");
    }
    else{
        printf("string is not equal");
    }
}
