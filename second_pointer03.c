#include <stdio.h>
#include <stdlib.h>


void changeNum(int* i){

    printf("函数中i的地址:%#x\n",i);
    *i=300;

}

//int main(){
//
//
//    int i=100;
//    printf("传入函数的i的地址:%#x\n",&i);
//
//    changeNum(&i);
//
//    printf("修改后的值:%d\n",i);
//
//    //二级指针
//
//    int *p=&i;
//    int **p1=&p;
//    int *p2=100;
//
//    printf("指针作为普通变量:%d\n",p2);
//    printf("i的地址:%#x\n",&i);
//    printf("p的地址:%#x\n",&p);
//    printf("通过p1取得p的地址:%#x\n",p1);
//    printf("通过p1取得i的地址:%#x\n",*p1);
//    printf("通过p1取得i的值:%d\n",**p1);
//
//    //通过p1修改i的值
//    **p1=100;
//    printf("通过p1修改过的i的值:%d\n",i);
//
//    return 0;
//
//}
