/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_cloudius_trace_Tracepoint */

#ifndef _Included_com_cloudius_trace_Tracepoint
#define _Included_com_cloudius_trace_Tracepoint
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    doList
 * Signature: ()[J
 */
JNIEXPORT jlongArray JNICALL Java_com_cloudius_trace_Tracepoint_doList
  (JNIEnv *, jclass);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    findByName
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_cloudius_trace_Tracepoint_findByName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    doEnable
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_cloudius_trace_Tracepoint_doEnable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    doGetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_cloudius_trace_Tracepoint_doGetName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    doCreateCounter
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_cloudius_trace_Tracepoint_doCreateCounter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    destroyCounter
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_cloudius_trace_Tracepoint_destroyCounter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_cloudius_trace_Tracepoint
 * Method:    readCounter
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_cloudius_trace_Tracepoint_readCounter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_cloudius_trace_Callstack
 * Method:    collect
 * Signature: (Lcom/cloudius/trace/Tracepoint;IIJ)[Lcom/cloudius/trace/Callstack;
 */
JNIEXPORT jobjectArray JNICALL Java_com_cloudius_trace_Callstack_collect
  (JNIEnv *, jclass, jobject, jint, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
