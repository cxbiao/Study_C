#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


//������
/*
    ��ͬ���͵ı�������һ���ڴ棨�໥���ǣ� �� ʼ��ֻ��һ����Ա���� �� ���ֵ���Ǹ� �� �����ڽ�ʡ�ڴ�
    �������С����Ա�����ĳ�Ա��ռ���ֽ���
*/
 union mValue {

    int i;
    short s;
    long l;
    float f;

};

//������ʾ��
void useUnion(){


    union mValue m;
    m.f=32.4f;
    m.i=100;//���һ�θ�ֵ��Ч
    printf("������:\n%f - %d\n",m.f,m.i);
}

/**
    ö�٣��о����е������
    �޶�ֵ����֤ȡֵ�İ�ȫ��

*/

enum NetStatus {

    NET_SUCCESS,
    NET_ERROR,
    NOT_NET,
    NET_FAILURE

};


void requestHttp(char *url,void(*fun)(enum NetStatus,char *)){


    printf("�����ַ:%s\n",url);
    printf("��������...\n");
    usleep(2000000);
    enum NetStatus status=NET_SUCCESS;
    char *res="����ʲôѽ\n";
    fun(status,res);
}


void callBackHttp(enum NetStatus status,char *res){

    switch(status){

    case NET_SUCCESS:
        printf("��������:\n%s",res);
        break;
    case NET_ERROR:
        printf("�����������\n");
        break;
    case NOT_NET:
        printf("û������\n");
        break;
    case NET_FAILURE:
        printf("��������ʧ��\n");
        break;
    default:
        printf("δ֪����\n");
        break;

    }
}


//ö��ʾ��
void useEnum(){

    //ö����Ԫ�ص�ֵ��int��Ĭ�ϴ�0��ʼ����,Ҳ��������������ֵ
    enum NetStatus status=NET_ERROR;
    printf("ö����Ԫ�ص�ֵ:%d\n",status);

    char *url="http://www.baidu.com";
    requestHttp(url,callBackHttp);
}
//int main(){
//
//
//    useUnion();
//    useEnum();
//    return 0;
//
//}
