#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API at::Tensor & median_out(const at::Tensor & self, at::Tensor & out);
TORCH_API at::Tensor median_cpu(const at::Tensor & self);
TORCH_API at::Tensor median_cuda(const at::Tensor & self);
TORCH_API at::Tensor median_mps(const at::Tensor & self);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> median(const at::Tensor & self, int64_t dim, bool keepdim=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> median_out_cpu(const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> median_out_cuda(const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> median_out_mps(const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> median(const at::Tensor & self, at::Dimname dim, bool keepdim=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> median_out(const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
} // namespace native
} // namespace at
