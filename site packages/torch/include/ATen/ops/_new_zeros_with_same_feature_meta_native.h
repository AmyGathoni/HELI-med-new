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
TORCH_API at::Tensor _new_zeros_with_same_feature_meta(const at::Tensor & self, const at::Tensor & other, int64_t self_num_batch_dims=0);
TORCH_API at::Tensor & _new_zeros_with_same_feature_meta_out(const at::Tensor & self, const at::Tensor & other, int64_t self_num_batch_dims, at::Tensor & out);
} // namespace native
} // namespace at
