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
TORCH_API at::Tensor istft(const at::Tensor & self, int64_t n_fft, ::std::optional<int64_t> hop_length=::std::nullopt, ::std::optional<int64_t> win_length=::std::nullopt, const ::std::optional<at::Tensor> & window={}, bool center=true, bool normalized=false, ::std::optional<bool> onesided=::std::nullopt, ::std::optional<int64_t> length=::std::nullopt, bool return_complex=false);
} // namespace native
} // namespace at
