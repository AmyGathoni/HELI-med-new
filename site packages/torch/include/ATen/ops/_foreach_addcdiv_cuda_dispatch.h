#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace cuda {

TORCH_API ::std::vector<at::Tensor> _foreach_addcdiv(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API void _foreach_addcdiv_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API ::std::vector<at::Tensor> _foreach_addcdiv(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API void _foreach_addcdiv_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API ::std::vector<at::Tensor> _foreach_addcdiv(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);
TORCH_API void _foreach_addcdiv_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);

} // namespace cuda
} // namespace at
