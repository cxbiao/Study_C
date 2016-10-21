#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符数组
void charArray(){

    //字符数组,可以修改
    char c[15]={'y','e','s','m','a','n'};
    //字符数组可以直接作为字符串输出
    printf("%s\n",c);

    //修改
    c[0]='a';
    printf("修改字符:%s\n",c);
}

//字符指针
void charPointer(){

    //内存连续排列,不可修改
    char *s="Nerver give up";
    printf("内存地址:%#x\n",s);

    //截取字符
    s+=6;
    while(*s){
        printf("%c",*s);
        s++;
    }

}

//拼接函数
void spliceString(){

    //合并后存储字符的容器
    char dest[40]={'h','e','h','e',' '};
    char *c1="Never give up ";
    char *c2="I believe you! ";

    //会清除字符数组原有的数据
    //strcpy(dest,c1);
    strcat(dest,c1);
    strcat(dest,c2);

    printf("\n拼接字符串:\n%s\n",dest);
}


//查找单个字符
void searchChar(){


    char *str="I wanna dont kiss you";
    char *p=strchr(str,'d');
    if(p){
        printf("索引位置:%d\n",p-str);
        printf("打印: ");
        str+=p-str;
        while(*str){
            printf("%c",*str);
            str++;
        }
         printf("\n");
    }else{

        printf("没有找到\n");
    }
}


//查找字符串
void searchChars(){


    char *str="落花有意流水无情";
    char *p=strstr(str,"流");
    if(p){
        printf("索引位置:%d\n",p-str);
        printf("打印: ");
        str+=p-str;
        if(*str){
            printf("%s-----%s\n",str,p);

        }
         printf("\n");
    }else{

        printf("没有找到\n");
    }
}


//字符转换
void strToInt(){


    char *p="123";
    int toInt=atoi(p);
    int res=toInt+123;
    printf("字符转换int数据:%d\n",res);

    char str[10];
    sprintf(str,"%d",res);
    printf("int转换为字符串:%s\n",str);

}

//int main(){
//
//
//    charArray();
//    charPointer();
//    spliceString();
//    searchChar();
//    searchChars();
//    strToInt();
//    return 0;
//}
