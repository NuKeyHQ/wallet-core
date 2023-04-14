// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "rust/bindgen/WalletCoreRSBindgen.h"
#include "gtest/gtest.h"

TEST(RustBindgen, MoveParseFunctionArgument) {
    using namespace TW;
    std::string arg = "10000000";
    auto str_result = Rust::parse_function_argument_to_bcs(arg.c_str());
    ASSERT_EQ(str_result.code, Rust::OK_CODE);
    ASSERT_EQ(std::string(str_result.result), "8096980000000000");
    Rust::free_string(str_result.result);
}