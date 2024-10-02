// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#pragma once

#include "deprecated_interface_with_static.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDeprecatedInterfaceWithStatic final : ::djinni::JniInterface<::testsuite::DeprecatedInterfaceWithStatic, NativeDeprecatedInterfaceWithStatic> {
public:
    using CppType = std::shared_ptr<::testsuite::DeprecatedInterfaceWithStatic>;
    using CppOptType = std::shared_ptr<::testsuite::DeprecatedInterfaceWithStatic>;
    using JniType = jobject;

    using Boxed = NativeDeprecatedInterfaceWithStatic;

    ~NativeDeprecatedInterfaceWithStatic();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeDeprecatedInterfaceWithStatic>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeDeprecatedInterfaceWithStatic>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeDeprecatedInterfaceWithStatic();
    friend ::djinni::JniClass<NativeDeprecatedInterfaceWithStatic>;
    friend ::djinni::JniInterface<::testsuite::DeprecatedInterfaceWithStatic, NativeDeprecatedInterfaceWithStatic>;

};

} // namespace djinni_generated
