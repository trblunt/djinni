// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#pragma once

#include <memory>

namespace testsuite {

class OptionalInterface;
struct BaseRecord;
struct MixedRecord;
struct OptionalRecord;

class OptionalTestHelpers {
public:
    virtual ~OptionalTestHelpers() = default;

    static BaseRecord get_base_record();

    static /*not-null*/ std::shared_ptr<OptionalInterface> optional_interface();

    static MixedRecord get_mixed_record();

    static OptionalRecord get_optional_record();

    /** Checks that translation occurs properly */
    static MixedRecord mixed_record_id(const MixedRecord & i);
};

} // namespace testsuite
