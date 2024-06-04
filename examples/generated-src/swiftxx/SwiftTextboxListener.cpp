// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#include "SwiftTextboxListener.hpp"  // my header
#include "SwiftItemList.hpp"

namespace djinni_generated {

djinni::swift::AnyValue TextboxListenerSwiftProxy::make(void* instance, djinni::swift::DispatchFunc dispatcher) {
    return {std::make_shared<TextboxListenerSwiftProxy>(instance, dispatcher)};
}
void TextboxListenerSwiftProxy::update(const ::textsort::ItemList & items) {
    djinni::swift::ParameterList params;
    params.addValue(::djinni_generated::SwiftItemList::fromCpp(items));
    callProtocol(0, &params);
}

} // namespace djinni_generated
