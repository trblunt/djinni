// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#ifdef __cplusplus
#import "DBDeprecatedRecord+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto DeprecatedRecord::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.foo),
            ::djinni::I32::toCpp(obj.bar),
            ::djinni::I32::toCpp(obj.baz)};
}

auto DeprecatedRecord::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBDeprecatedRecord alloc] initWithFoo:(::djinni::I32::fromCpp(cpp.foo))
                                               bar:(::djinni::I32::fromCpp(cpp.bar))
                                               baz:(::djinni::I32::fromCpp(cpp.baz))];
}

} // namespace djinni_generated
#endif // __cplusplus
