#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_myndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    jstring hello = env->NewStringUTF("123");
    return hello;
}
