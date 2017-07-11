// The MIT License (MIT)
// 
// Copyright (c) 2016 Northeastern University
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in 
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef CORE_INCLUDE_DNN_WRAPPER_H_ 
#define CORE_INCLUDE_DNN_WRAPPER_H_

#include "common.h"

namespace dnnmark {

template <typename T>
void dnnmarkConvolutionForward(const Handle &handle, RunMode mode, int idx,
                               const void *alpha,
                               const DataTensor &bottom_desc,
                               const void *x,
                               const ConvolutionDesc &conv_desc,
                               const void *w,
                               const ConvAlgo &conv_algo,
                               void *workspace,
                               size_t workspace_in_bytes,
                               const void *beta,
                               const DataTensor &top_desc,
                               void *y);

template <typename T>
void dnnmarkConvolutionDataBackward();

template <typename T>
void dnnmarkConvolutionFilterBackward();

} // namespace dnnmark

#endif // CORE_INCLUDE_DNN_WRAPPER_H_