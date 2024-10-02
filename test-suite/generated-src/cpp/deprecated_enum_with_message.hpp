// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecated.djinni

#pragma once

#include <functional>

namespace testsuite {

/** @deprecated This is a deprecation message */
enum class [[deprecated("This is a deprecation message")]] deprecated_enum_with_message : int {
    FOO = 0,
    /** @deprecated */
    BAR [[deprecated]] = 1,
    /** @deprecated This is a deprecation message */
    BAZ [[deprecated("This is a deprecation message")]] = 2,
};

constexpr const char* to_string(deprecated_enum_with_message e) noexcept {
    constexpr const char* names[] = {
        "foo",
        "bar",
        "baz",
    };
    return names[static_cast<int>(e)];
}

} // namespace testsuite

namespace std {

template <>
struct hash<::testsuite::deprecated_enum_with_message> {
    size_t operator()(::testsuite::deprecated_enum_with_message type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

} // namespace std
