/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CarbonProtocolWriter.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>

#include "mcrouter/lib/carbon/test/a/b/gen/BMessages.h"

namespace carbon {
namespace test {

class BaseStruct {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  BaseStruct() = default;
  BaseStruct(const BaseStruct&) = default;
  BaseStruct& operator=(const BaseStruct&) = default;
  BaseStruct(BaseStruct&&) = default;
  BaseStruct& operator=(BaseStruct&&) = default;

  int64_t baseInt64Member() const {
    return baseInt64Member_;
  }
  int64_t& baseInt64Member() {
    return baseInt64Member_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  int64_t baseInt64Member_{0};
};

class SimpleStruct {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  SimpleStruct() = default;
  SimpleStruct(const SimpleStruct&) = default;
  SimpleStruct& operator=(const SimpleStruct&) = default;
  SimpleStruct(SimpleStruct&&) = default;
  SimpleStruct& operator=(SimpleStruct&&) = default;

  BaseStruct& asBaseStruct() {
    return _carbon_basestruct_;
  }
  const BaseStruct& asBaseStruct() const {
    return _carbon_basestruct_;
  }
  int64_t baseInt64Member() const {
    return _carbon_basestruct_.baseInt64Member();
  }
  int64_t& baseInt64Member() {
    return _carbon_basestruct_.baseInt64Member();
  }
  int32_t int32Member() const {
    return int32Member_;
  }
  int32_t& int32Member() {
    return int32Member_;
  }
  const std::string& stringMember() const {
    return stringMember_;
  }
  std::string& stringMember() {
    return stringMember_;
  }
  const test2::util::SimpleEnum& enumMember() const {
    return enumMember_;
  }
  test2::util::SimpleEnum& enumMember() {
    return enumMember_;
  }
  const std::vector<test2::util::SimpleStruct>& vectorMember() const {
    return vectorMember_;
  }
  std::vector<test2::util::SimpleStruct>& vectorMember() {
    return vectorMember_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  BaseStruct _carbon_basestruct_;
  int32_t int32Member_{0};
  std::string stringMember_;
  test2::util::SimpleEnum enumMember_{test2::util::SimpleEnum::Twenty};
  std::vector<test2::util::SimpleStruct> vectorMember_;
};

} // test
} // carbon

#include "BMessages-inl.h"
