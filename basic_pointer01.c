#include <stdio.h>
#include <stdlib.h>


void addpointerAddress(){

  int i=100;
  int *p=&i;

  //ָ��pָ�����i�ĵ�ַ��p��ֵ����i���ڴ��ַ
  //ͨ������p���Ըı�i��ֵ

  printf("i�ĵ�ַ:%x\n",&i);
  printf("p��ֵ:%x\n",p);
  printf("i��ֵ:%d\n",i);
  *p=21;
  printf("i��ֵ:%d\n",i);

}

//int main()
//{
//
//    int i=90;
//    printf("int ��ռ�ֽ�:%d\n",sizeof(int));
//    printf(" i��ֵ:%d\n",i);
//
//    short sh=32;
//    printf("short ��ռ�ֽ�:%d\n",sizeof(short));
//    printf(" sh��ֵ:%d\n",sh);
//
//
//    long l=123532;
//    printf("long ��ռ�ֽ�:%d\n",sizeof(long));
//    printf(" l��ֵ:%ld\n",l);
//
//    float f=32.23;
//    printf("float ��ռ�ֽ�:%d\n",sizeof(float));
//    printf(" f��ֵ:%f\n",f);
//
//
//    double d=32.25626993;
//    printf("double ��ռ�ֽ�:%d\n",sizeof(double));
//    printf(" d��ֵ:%lf\n",d);
//
//    char c='c';
//    printf("char ��ռ�ֽ�:%d\n",sizeof(char));
//    printf(" c��ֵ:%c\n",c);
//
//    //����ַ���
//    printf("�ַ���:%s\n","hello world!�й�");
//
//    //����˽���
//    printf("�˽���:%o\n",10);
//
//    //���ʮ������  %#x���0x %x�����0x
//    printf("ʮ������:%#x\n",11);
//
//    addpointerAddress();
//
//
//
//
//    return 0;
//}



