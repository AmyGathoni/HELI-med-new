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
#include <ATen/ops/eq_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_eq_Scalar_out : public at::meta::structured_eq_Scalar {
void impl(const at::Tensor & self, const at::Scalar & other, const at::Tensor & out);
};
TORCH_API at::Tensor eq_scalar_nested(const at::Tensor & self, const at::Scalar & other);
struct TORCH_API structured_eq_scalar_out_mps : public at::meta::structured_eq_Scalar {
void impl(const at::Tensor & self, const at::Scalar & other, const at::Tensor & out);
};
TORCH_API at::Tensor eq_quantized_cpu(const at::Tensor & self, const at::Scalar & other);
TORCH_API at::Tensor & eq_out_quantized_cpu(const at::Tensor & self, const at::Scalar & other, at::Tensor & out);
struct TORCH_API structured_eq_Tensor_out : public at::meta::structured_eq_Tensor {
void impl(const at::Tensor & self, const at::Tensor & other, const at::Tensor & out);
};
TORCH_API at::Tensor eq_tensor_nested(const at::Tensor & self, const at::Tensor & other);
struct TORCH_API structured_eq_tensor_out_mps : public at::meta::structured_eq_Tensor {
void impl(const at::Tensor & self, const at::Tensor & other, const at::Tensor & out);
};
TORCH_API at::Tensor eq_quantized_cpu(const at::Tensor & self, const at::Tensor & other);
TORCH_API at::Tensor & eq_out_quantized_cpu(const at::Tensor & self, const at::Tensor & other, at::Tensor & out);
} // namespace native
} // namespace at
