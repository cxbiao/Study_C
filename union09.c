#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


//联合体
/*
    不同类型的变量共用一段内存（相互覆盖） ， 始终只有一个成员存在 ， 最后赋值的那个 ， 有利于节省内存
    联合体大小：成员中最大的成员所占的字节数
*/
 union mValue {

    int i;
    short s;
    long l;
    float f;

};

//联合体示例
void useUnion(){


    union mValue m;
    m.f=32.4f;
    m.i=100;//最后一次赋值有效
    printf("联合体:\n%f - %d\n",m.f,m.i);
}

/**
    枚举（列举所有的情况）
    限定值，保证取值的安全性

*/

enum NetStatus {

    NET_SUCCESS,
    NET_ERROR,
    NOT_NET,
    NET_FAILURE

};


void requestHttp(char *url,void(*fun)(enum NetStatus,char *)){


    printf("请求地址:%s\n",url);
    printf("请求网络...\n");
    usleep(2000000);
    enum NetStatus status=NET_SUCCESS;
    char *res="这是什么呀\n";
    fun(status,res);
}


void callBackHttp(enum NetStatus status,char *res){

    switch(status){

    case NET_SUCCESS:
        printf("网络数据:\n%s",res);
        break;
    case NET_ERROR:
        printf("请求网络错误\n");
        break;
    case NOT_NET:
        printf("没有网络\n");
        break;
    case NET_FAILURE:
        printf("请求网络失败\n");
        break;
    default:
        printf("未知错误\n");
        break;

    }
}


//枚举示例
void useEnum(){

    //枚举中元素的值是int，默认从0开始递增,也可以自行设置其值
    enum NetStatus status=NET_ERROR;
    printf("枚举中元素的值:%d\n",status);

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
