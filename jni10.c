#include <stdio.h>
#include <stdlib.h>


//普通函数
void _jni_define_func_reads(){
    printf("read\n");
}

void _jni_define_func_writes(){
    printf("write\n");
}

//定义宏函数
#define jni(NAME) _jni_define_func_##NAME();

//模拟Android日志输出,核心就是替换
#define LOG(LEVEL,...) printf(LEVEL);printf(__VA_ARGS__);
#define LOGI(...) LOG("INFO:",__VA_ARGS__);
#define LOGW(...) LOG("WARN:",__VA_ARGS__);
#define LOGE(...) LOG("ERROR:",__VA_ARGS__)


int main(){

    jni(reads);
    jni(writes);
    LOGI("%s","自定义日志。。。\n");
    LOGE("%s","我是错误日志...\n");
    return 0;
}
