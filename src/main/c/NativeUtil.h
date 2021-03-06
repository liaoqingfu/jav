/* DO NOT EDIT THIS FILE - it is machine generated */
#include <JavaVM/jni.h>
/* Header for class bits_jav_util_NativeUtil */

#ifndef _Included_bits_jav_util_NativeUtil
#define _Included_bits_jav_util_NativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bits_jav_util_NativeUtil
 * Method:    copy
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_bits_jav_util_NativeUtil_copy
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     bits_jav_util_NativeUtil
 * Method:    nativeAddress
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_bits_jav_util_NativeUtil_nativeAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bits_jav_util_NativeUtil
 * Method:    nCopyPointerBuffer
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_bits_jav_util_NativeUtil_nCopyPointerBuffer
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     bits_jav_util_NativeUtil
 * Method:    nCopyBufferPointer
 * Signature: (Ljava/nio/ByteBuffer;IIJ)V
 */
JNIEXPORT void JNICALL Java_bits_jav_util_NativeUtil_nCopyBufferPointer
  (JNIEnv *, jclass, jobject, jint, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
