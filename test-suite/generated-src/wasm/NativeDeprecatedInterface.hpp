// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#pragma once

#include "deprecated_interface.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeDeprecatedInterface : ::djinni::JsInterface<::testsuite::DeprecatedInterface, NativeDeprecatedInterface> {
    using CppType = std::shared_ptr<::testsuite::DeprecatedInterface>;
    using CppOptType = std::shared_ptr<::testsuite::DeprecatedInterface>;
    using JsType = em::val;
    using Boxed = NativeDeprecatedInterface;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        ::djinni::checkForNull(c.get(), "NativeDeprecatedInterface::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static int32_t foo(const CppType& self);
    static int32_t bar(const CppType& self);

    static void staticInitializeConstants();
};

} // namespace djinni_generated
