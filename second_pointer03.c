#include <stdio.h>
#include <stdlib.h>


void changeNum(int* i){

    printf("������i�ĵ�ַ:%#x\n",i);
    *i=300;

}

//int main(){
//
//
//    int i=100;
//    printf("���뺯����i�ĵ�ַ:%#x\n",&i);
//
//    changeNum(&i);
//
//    printf("�޸ĺ��ֵ:%d\n",i);
//
//    //����ָ��
//
//    int *p=&i;
//    int **p1=&p;
//    int *p2=100;
//
//    printf("ָ����Ϊ��ͨ����:%d\n",p2);
//    printf("i�ĵ�ַ:%#x\n",&i);
//    printf("p�ĵ�ַ:%#x\n",&p);
//    printf("ͨ��p1ȡ��p�ĵ�ַ:%#x\n",p1);
//    printf("ͨ��p1ȡ��i�ĵ�ַ:%#x\n",*p1);
//    printf("ͨ��p1ȡ��i��ֵ:%d\n",**p1);
//
//    //ͨ��p1�޸�i��ֵ
//    **p1=100;
//    printf("ͨ��p1�޸Ĺ���i��ֵ:%d\n",i);
//
//    return 0;
//
//}
