// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#pragma once

#include "deprecated_interface_with_message.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeDeprecatedInterfaceWithMessage : ::djinni::JsInterface<::testsuite::DeprecatedInterfaceWithMessage, NativeDeprecatedInterfaceWithMessage> {
    using CppType = std::shared_ptr<::testsuite::DeprecatedInterfaceWithMessage>;
    using CppOptType = std::shared_ptr<::testsuite::DeprecatedInterfaceWithMessage>;
    using JsType = em::val;
    using Boxed = NativeDeprecatedInterfaceWithMessage;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        ::djinni::checkForNull(c.get(), "NativeDeprecatedInterfaceWithMessage::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static int32_t foo(const CppType& self);
    static int32_t bar(const CppType& self);

    static void staticInitializeConstants();
};

} // namespace djinni_generated
