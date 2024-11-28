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
#include <ATen/ops/upsample_nearest1d_meta.h>

namespace at {
namespace native {
TORCH_API at::Tensor upsample_nearest1d(const at::Tensor & input, at::OptionalIntArrayRef output_size, ::std::optional<at::ArrayRef<double>> scale_factors);
struct TORCH_API structured_upsample_nearest1d_out_cpu : public at::meta::structured_upsample_nearest1d {
void impl(const at::Tensor & self, at::ArrayRef<int64_t> output_size, ::std::optional<double> scales, const at::Tensor & out);
};
struct TORCH_API structured_upsample_nearest1d_out_cuda : public at::meta::structured_upsample_nearest1d {
void impl(const at::Tensor & self, at::ArrayRef<int64_t> output_size, ::std::optional<double> scales, const at::Tensor & out);
};
struct TORCH_API structured_upsample_nearest1d_out_mps : public at::meta::structured_upsample_nearest1d {
void impl(const at::Tensor & self, at::ArrayRef<int64_t> output_size, ::std::optional<double> scales, const at::Tensor & out);
};
} // namespace native
} // namespace at
