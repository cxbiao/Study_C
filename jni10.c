#include <stdio.h>
#include <stdlib.h>


//��ͨ����
void _jni_define_func_reads(){
    printf("read\n");
}

void _jni_define_func_writes(){
    printf("write\n");
}

//����꺯��
#define jni(NAME) _jni_define_func_##NAME();

//ģ��Android��־���,���ľ����滻
#define LOG(LEVEL,...) printf(LEVEL);printf(__VA_ARGS__);
#define LOGI(...) LOG("INFO:",__VA_ARGS__);
#define LOGW(...) LOG("WARN:",__VA_ARGS__);
#define LOGE(...) LOG("ERROR:",__VA_ARGS__)


int main(){

    jni(reads);
    jni(writes);
    LOGI("%s","�Զ�����־������\n");
    LOGE("%s","���Ǵ�����־...\n");
    return 0;
}
