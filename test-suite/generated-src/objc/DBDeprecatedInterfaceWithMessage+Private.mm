// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#ifdef __cplusplus
#import "DBDeprecatedInterfaceWithMessage+Private.h"
#import "DBDeprecatedInterfaceWithMessage.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBDeprecatedInterfaceWithMessageCppProxy : NSObject<DBDeprecatedInterfaceWithMessage>

- (id)initWithCpp:(const std::shared_ptr<::testsuite::DeprecatedInterfaceWithMessage>&)cppRef;

@end

@implementation DBDeprecatedInterfaceWithMessageCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::testsuite::DeprecatedInterfaceWithMessage>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::testsuite::DeprecatedInterfaceWithMessage>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (int32_t)foo {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->foo();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)bar {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->bar();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}


namespace djinni_generated {

class DeprecatedInterfaceWithMessage::ObjcProxy final
: public ::testsuite::DeprecatedInterfaceWithMessage
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::DeprecatedInterfaceWithMessage;
public:
    using ObjcProxyBase::ObjcProxyBase;
    int32_t foo() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() foo];
            return ::djinni::I32::toCpp(objcpp_result_);
        }
    }
    int32_t bar() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() bar];
            return ::djinni::I32::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto DeprecatedInterfaceWithMessage::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[DBDeprecatedInterfaceWithMessageCppProxy class]]) {
        return ((DBDeprecatedInterfaceWithMessageCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto DeprecatedInterfaceWithMessage::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<DBDeprecatedInterfaceWithMessageCppProxy>(cpp);
}

} // namespace djinni_generated

@end
#endif // __cplusplus
