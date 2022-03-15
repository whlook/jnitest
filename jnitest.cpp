#include <fstream>
#include <iostream>
#include "jni.h"
#include <sstream>

#include <pthread.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>

#include "com_test_MyTest.h"

JNIEXPORT jstring JNICALL Java_com_test_MyTest_info
  (JNIEnv *env, jobject instance)
{
        char info[16];
	snprintf(info,16,"infoinfoinfo");
        return env->NewStringUTF(info);
}

