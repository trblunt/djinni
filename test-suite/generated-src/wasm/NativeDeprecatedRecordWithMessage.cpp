// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#include "NativeDeprecatedRecordWithMessage.hpp"  // my header

namespace djinni_generated {

auto NativeDeprecatedRecordWithMessage::toCpp(const JsType& j) -> CppType {
    return {::djinni::I32::Boxed::toCpp(j["foo"]),
            ::djinni::I32::Boxed::toCpp(j["bar"]),
            ::djinni::I32::Boxed::toCpp(j["baz"])};
}
auto NativeDeprecatedRecordWithMessage::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("foo", ::djinni::I32::Boxed::fromCpp(c.foo));
    js.set("bar", ::djinni::I32::Boxed::fromCpp(c.bar));
    js.set("baz", ::djinni::I32::Boxed::fromCpp(c.baz));
    return js;
}

} // namespace djinni_generated
