#include <jni.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif
extern void hs_init(int * argc, char ** argv[]);
extern char* hello(void);
#ifdef __cplusplus
}
#endif

extern "C"
JNIEXPORT void
JNICALL
Java_com_zw3rk_helloworld_MainActivity_initHS(
        JNIEnv *env,
        jobject /* this */) {
    hs_init(NULL, NULL);
    return;
}

extern "C"
JNIEXPORT jstring
JNICALL
Java_com_zw3rk_helloworld_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    return env->NewStringUTF(hello());
}
