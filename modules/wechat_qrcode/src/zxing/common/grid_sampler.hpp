// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Tencent is pleased to support the open source community by making WeChat QRCode available.
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.

/*
 *  grid_sampler.hpp
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
#ifndef __ZXING_COMMON_GRID_SAMPLER_HPP__
#define __ZXING_COMMON_GRID_SAMPLER_HPP__

#include "zxing/common/bitmatrix.hpp"
#include "zxing/common/bytematrix.hpp"
#include "zxing/common/counted.hpp"
#include "zxing/common/perspective_transform.hpp"

namespace zxing {
class GridSampler {
private:
    static GridSampler gridSampler;
    GridSampler();

public:
    Ref<BitMatrix> sampleGrid(Ref<BitMatrix> image, int dimension,
                              Ref<PerspectiveTransform> transform, ErrorHandler &err_handler);
    static int checkAndNudgePoints(int width, int height, vector<float> &points,
                                   ErrorHandler &err_handler);
    static GridSampler &getInstance();
};
}  // namespace zxing

#endif  // __ZXING_COMMON_GRID_SAMPLER_HPP__
