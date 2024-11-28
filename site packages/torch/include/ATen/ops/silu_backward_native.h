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
#include <ATen/ops/silu_backward_meta.h>

namespace at {
namespace native {
TORCH_API at::Tensor math_silu_backward(const at::Tensor & grad_output, const at::Tensor & self);
struct TORCH_API structured_silu_backward_out : public at::meta::structured_silu_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & grad_input);
};
TORCH_API at::Tensor silu_backward_nested(const at::Tensor & grad_output, const at::Tensor & self);
struct TORCH_API structured_silu_backward_out_mps : public at::meta::structured_silu_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & grad_input);
};
} // namespace native
} // namespace at
