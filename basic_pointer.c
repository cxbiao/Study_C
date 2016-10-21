#include <stdio.h>
#include <stdlib.h>


void addpointerAddress(){

  int i=100;
  int *p=&i;

  //指针p指向变量i的地址，p的值即是i的内存地址
  //通过操作p可以改变i的值

  printf("i的地址:%x\n",&i);
  printf("p的值:%x\n",p);
  printf("i的值:%d\n",i);
  *p=21;
  printf("i的值:%d\n",i);

}

//int main()
//{
//
//    int i=90;
//    printf("int 所占字节:%d\n",sizeof(int));
//    printf(" i的值:%d\n",i);
//
//    short sh=32;
//    printf("short 所占字节:%d\n",sizeof(short));
//    printf(" sh的值:%d\n",sh);
//
//
//    long l=123532;
//    printf("long 所占字节:%d\n",sizeof(long));
//    printf(" l的值:%ld\n",l);
//
//    float f=32.23;
//    printf("float 所占字节:%d\n",sizeof(float));
//    printf(" f的值:%f\n",f);
//
//
//    double d=32.25626993;
//    printf("double 所占字节:%d\n",sizeof(double));
//    printf(" d的值:%lf\n",d);
//
//    char c='c';
//    printf("char 所占字节:%d\n",sizeof(char));
//    printf(" c的值:%c\n",c);
//
//    //输出字符串
//    printf("字符串:%s\n","hello world!中国");
//
//    //输出八进制
//    printf("八进制:%o\n",10);
//
//    //输出十六进制  %#x会带0x %x不会带0x
//    printf("十六进制:%#x\n",11);
//
//    addpointerAddress();
//
//
//
//
//    return 0;
//}



