#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


//定义函数指针类型
typedef void(*callback)(char *);

int add(int num1,int num2){

    return num1+num2;
}

int minus(int num1,int num2){

    return num1-num2;
}


void showMsg(int(*fun)(int,int),int a,int b){

    int r=fun(a,b);
    printf("计算完成=%d\n",r);

}

//模拟网络请求回调
void requestNet(char *url,callback call){

    printf("请求地址:%s,正在请求网络...\n",url);

    //linux微秒为单位，要在linux环境才有效
    usleep(2000000);

    char *str="我是请求的网络数据,落花有意随流水,流水无情恋落花\n";
    call(str);

}


//回调函数
void netCallBack(char *str){

    printf("网络请求回调\n");
    printf("请求到的数据:%s\n",str);
}

//int main(){
//
//
//    //函数指针定义,返回值(函数指针名称)(函数参数)=函数名称
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
