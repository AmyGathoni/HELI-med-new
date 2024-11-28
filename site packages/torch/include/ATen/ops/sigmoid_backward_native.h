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
#include <ATen/ops/sigmoid_backward_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_sigmoid_backward_out : public at::meta::structured_sigmoid_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & output, const at::Tensor & grad_input);
};
struct TORCH_API structured_sigmoid_backward_out_mps : public at::meta::structured_sigmoid_backward {
void impl(const at::Tensor & grad_output, const at::Tensor & output, const at::Tensor & grad_input);
};
} // namespace native
} // namespace at
