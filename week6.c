#include <stdio.h>
void addTen(int *arr, int n){ //รับด้วย pointer or array
    for (int i = 0; i < n; i++){
        printf("addTen in func. [%p] = %d\n",arr + i, *(arr +i));
        *(arr + i) += 10;
    }
}

//Pass by reference
int addTwenty(int *n){ //ส่งมา เดี๋ยวบวกเพิ่มให้
    *n += 20;
    return 1;
}
int main(){
    int number[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++){
        printf("Main before pass ref. [%p] = %d\n",number + i, *(number +i));
    }
    addTen(number, n);
    for (int i = 0; i < n; i++){
        printf("Main after pass ref. [%p] = %d\n",number + i, *(number +i));
    }
    addTwenty(&n);
    addTwenty(&number[4]);
    printf("n = %d\n", n);
    printf("number[4] = %d\n", number[4]);
    int a = 100;
    int *ptr = &a;
    a = 90;
    printf("%d\n", *ptr);
    printf("%p", &*ptr);
}