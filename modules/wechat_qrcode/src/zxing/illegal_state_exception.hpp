// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Tencent is pleased to support the open source community by making WeChat QRCode available.
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Modified from ZXing. Copyright ZXing authors.
// Licensed under the Apache License, Version 2.0 (the "License").

#ifndef __ZXING_ILLEGAL_STATE_EXCEPTION_HPP__
#define __ZXING_ILLEGAL_STATE_EXCEPTION_HPP__

#include "zxing/reader_exception.hpp"

namespace zxing {

class IllegalStateException : public ReaderException {
public:
    IllegalStateException() throw() {}
    explicit IllegalStateException(const char *msg) throw() : ReaderException(msg) {}
    ~IllegalStateException() throw() {}
};

}  // namespace zxing

#endif  // __ZXING_ILLEGAL_STATE_EXCEPTION_HPP__
