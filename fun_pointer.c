#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


//���庯��ָ������
typedef void(*callback)(char *);

int add(int num1,int num2){

    return num1+num2;
}

int minus(int num1,int num2){

    return num1-num2;
}


void showMsg(int(*fun)(int,int),int a,int b){

    int r=fun(a,b);
    printf("�������=%d\n",r);

}

//ģ����������ص�
void requestNet(char *url,callback call){

    printf("�����ַ:%s,������������...\n",url);

    //linux΢��Ϊ��λ��Ҫ��linux��������Ч
    usleep(2000000);

    char *str="�����������������,�仨��������ˮ,��ˮ�������仨\n";
    call(str);

}


//�ص�����
void netCallBack(char *str){

    printf("��������ص�\n");
    printf("���󵽵�����:%s\n",str);
}

//int main(){
//
//
//    //����ָ�붨��,����ֵ(����ָ������)(��������)=��������
//    int(* fun1)(int ,int )=add;
//    int(* fun2)(int ,int )=minus;
//
//    showMsg(fun1,10,10);
//    showMsg(minus,20,1);
//
//    char* url = "www.zhuyongit.com";
//    requestNet(url,netCallBack);
//
//
//
//    return 0;
//}
