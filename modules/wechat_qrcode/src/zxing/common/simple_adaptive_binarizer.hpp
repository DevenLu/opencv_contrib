// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Tencent is pleased to support the open source community by making WeChat QRCode available.
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.

/*
 *  simple_adaptive_binarizer.hpp
 *  zxing
 *
 *  Copyright 2010 ZXing authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ZXING_COMMON_SIMPLEADAPTIVEBINARIZER_HPP__
#define __ZXING_COMMON_SIMPLEADAPTIVEBINARIZER_HPP__

#include "zxing/binarizer.hpp"
#include "zxing/common/array.hpp"
#include "zxing/common/bitarray.hpp"
#include "zxing/common/bitmatrix.hpp"
#include "zxing/common/global_histogram_binarizer.hpp"

#ifndef USE_GOOGLE_CODE
#define USE_GOOGLE_CODE 0
#endif

namespace zxing {

class SimpleAdaptiveBinarizer : public GlobalHistogramBinarizer {
private:
    ArrayRef<char> luminances;
    // ArrayRef<int> buckets;
public:
    explicit SimpleAdaptiveBinarizer(Ref<LuminanceSource> source);
    virtual ~SimpleAdaptiveBinarizer();

    virtual Ref<BitArray> getBlackRow(int y, Ref<BitArray> row, ErrorHandler &err_handler);
    virtual Ref<BitMatrix> getBlackMatrix(ErrorHandler &err_handler);
    // static int estimateBlackPoint(ArrayRef<int> const& buckets);
    // static int estimateBlackPoint2(ArrayRef<int> const& buckets);
    Ref<Binarizer> createBinarizer(Ref<LuminanceSource> source);

private:
    int binarizeImage0(ErrorHandler &err_handler);
    int qrBinarize(const unsigned char *_img, unsigned char *_dst, int _width, int _height);
    // void initArrays(int luminanceSize);
    bool filtered;
};

}  // namespace zxing

#endif  // __ZXING_COMMON_SIMPLEADAPTIVEBINARIZER_HPP__
