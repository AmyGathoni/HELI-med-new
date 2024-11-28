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
TORCH_API at::Tensor normal_functional(const at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out(const at::Tensor & self, double mean, double std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & normal_(at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_nested_(at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_sparse_csr_(at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_mps_(at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_meta_(at::Tensor & self, double mean=0, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor normal(const at::Tensor & mean, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out(const at::Tensor & mean, double std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_mps(const at::Tensor & mean, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_mps_out(const at::Tensor & mean, double std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_meta(const at::Tensor & mean, double std=1, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out_meta(const at::Tensor & mean, double std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_mps(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_mps_out(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_meta(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out_meta(double mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_mps(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_mps_out(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal_meta(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & normal_out_meta(const at::Tensor & mean, const at::Tensor & std, ::std::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal(double mean, double std, at::IntArrayRef size, ::std::optional<at::Generator> generator=::std::nullopt, ::std::optional<at::ScalarType> dtype={}, ::std::optional<at::Layout> layout={}, ::std::optional<at::Device> device={}, ::std::optional<bool> pin_memory={});
TORCH_API at::Tensor & normal_out(double mean, double std, at::IntArrayRef size, ::std::optional<at::Generator> generator, at::Tensor & out);
} // namespace native
} // namespace at
