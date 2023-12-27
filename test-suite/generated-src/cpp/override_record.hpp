// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include <cstdint>
#include <utility>

namespace testsuite {

/** Overridden optional record */
struct OverrideRecord final {
    std::experimental::optional<int32_t> optInt;
    std::experimental::optional<float> optFloat;
    int32_t reqInt;
    std::experimental::optional<double> optDouble;

    OverrideRecord(std::experimental::optional<int32_t> optInt_,
                   std::experimental::optional<float> optFloat_,
                   int32_t reqInt_,
                   std::experimental::optional<double> optDouble_)
    : optInt(std::move(optInt_))
    , optFloat(std::move(optFloat_))
    , reqInt(std::move(reqInt_))
    , optDouble(std::move(optDouble_))
    {}
};

} // namespace testsuite
