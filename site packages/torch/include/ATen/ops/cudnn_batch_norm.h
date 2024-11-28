#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>



#include <ATen/ops/cudnn_batch_norm_ops.h>

namespace at {


// aten::cudnn_batch_norm(Tensor input, Tensor weight, Tensor? bias, Tensor? running_mean, Tensor? running_var, bool training, float exponential_average_factor, float epsilon) -> (Tensor, Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> cudnn_batch_norm(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, const ::std::optional<at::Tensor> & running_mean, const ::std::optional<at::Tensor> & running_var, bool training, double exponential_average_factor, double epsilon) {
    return at::_ops::cudnn_batch_norm::call(input, weight, bias, running_mean, running_var, training, exponential_average_factor, epsilon);
}

// aten::cudnn_batch_norm.out(Tensor input, Tensor weight, Tensor? bias, Tensor? running_mean, Tensor? running_var, bool training, float exponential_average_factor, float epsilon, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> cudnn_batch_norm_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, const ::std::optional<at::Tensor> & running_mean, const ::std::optional<at::Tensor> & running_var, bool training, double exponential_average_factor, double epsilon) {
    return at::_ops::cudnn_batch_norm_out::call(input, weight, bias, running_mean, running_var, training, exponential_average_factor, epsilon, out0, out1, out2, out3);
}
// aten::cudnn_batch_norm.out(Tensor input, Tensor weight, Tensor? bias, Tensor? running_mean, Tensor? running_var, bool training, float exponential_average_factor, float epsilon, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> cudnn_batch_norm_outf(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, const ::std::optional<at::Tensor> & running_mean, const ::std::optional<at::Tensor> & running_var, bool training, double exponential_average_factor, double epsilon, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3) {
    return at::_ops::cudnn_batch_norm_out::call(input, weight, bias, running_mean, running_var, training, exponential_average_factor, epsilon, out0, out1, out2, out3);
}

}
