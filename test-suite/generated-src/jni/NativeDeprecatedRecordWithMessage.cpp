// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#include "NativeDeprecatedRecordWithMessage.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeDeprecatedRecordWithMessage::NativeDeprecatedRecordWithMessage() = default;

NativeDeprecatedRecordWithMessage::~NativeDeprecatedRecordWithMessage() = default;

auto NativeDeprecatedRecordWithMessage::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeDeprecatedRecordWithMessage>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.foo)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.bar)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.baz)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeDeprecatedRecordWithMessage::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeDeprecatedRecordWithMessage>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mFoo)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mBar)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mBaz))};
}

} // namespace djinni_generated
