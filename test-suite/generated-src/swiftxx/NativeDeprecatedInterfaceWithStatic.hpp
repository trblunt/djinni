// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#pragma once

#include "deprecated_interface_with_static.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

using NativeDeprecatedInterfaceWithStatic = djinni::swift::Interface<::testsuite::DeprecatedInterfaceWithStatic>;

djinni::swift::AnyValue DeprecatedInterfaceWithStatic_foo(const djinni::swift::ParameterList* params);
djinni::swift::AnyValue DeprecatedInterfaceWithStatic_bar(const djinni::swift::ParameterList* params);

class DeprecatedInterfaceWithStaticSwiftProxy: public ::testsuite::DeprecatedInterfaceWithStatic, public djinni::swift::ProtocolWrapper {
public:
    DeprecatedInterfaceWithStaticSwiftProxy(void* instance, djinni::swift::DispatchFunc dispatcher): ProtocolWrapper(instance, dispatcher) {}
    static djinni::swift::AnyValue make(void* instance, djinni::swift::DispatchFunc dispatcher);
};

} // namespace djinni_generated
