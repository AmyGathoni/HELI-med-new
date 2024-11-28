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
TORCH_API int64_t sparse_dim_default(const at::Tensor & self);
TORCH_API int64_t sparse_dim_sparse(const at::Tensor & self);
TORCH_API int64_t sparse_dim_sparse_csr(const at::Tensor & self);
} // namespace native
} // namespace at
