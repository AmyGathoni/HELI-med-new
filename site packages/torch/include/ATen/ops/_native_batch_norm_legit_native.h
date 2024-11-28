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
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _native_batch_norm_legit_functional(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_cpu_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_cpu(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_cuda_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_cuda(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_mps_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_mps(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _mkldnn_batch_norm_legit(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, at::Tensor & running_mean, at::Tensor & running_var, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_no_stats_cpu(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_no_stats_cpu_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_no_stats_cuda(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_no_stats_cuda_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_no_stats_mps(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _batch_norm_legit_no_stats_mps_out(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _mkldnn_batch_norm_legit_no_stats(const at::Tensor & input, const ::std::optional<at::Tensor> & weight, const ::std::optional<at::Tensor> & bias, bool training, double momentum, double eps);
} // namespace native
} // namespace at
