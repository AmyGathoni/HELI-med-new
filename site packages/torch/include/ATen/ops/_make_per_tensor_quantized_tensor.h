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



#include <ATen/ops/_make_per_tensor_quantized_tensor_ops.h>

namespace at {


// aten::_make_per_tensor_quantized_tensor(Tensor self, float scale, int zero_point) -> Tensor
inline at::Tensor _make_per_tensor_quantized_tensor(const at::Tensor & self, double scale, int64_t zero_point) {
    return at::_ops::_make_per_tensor_quantized_tensor::call(self, scale, zero_point);
}

// aten::_make_per_tensor_quantized_tensor.out(Tensor self, float scale, int zero_point, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _make_per_tensor_quantized_tensor_out(at::Tensor & out, const at::Tensor & self, double scale, int64_t zero_point) {
    return at::_ops::_make_per_tensor_quantized_tensor_out::call(self, scale, zero_point, out);
}
// aten::_make_per_tensor_quantized_tensor.out(Tensor self, float scale, int zero_point, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _make_per_tensor_quantized_tensor_outf(const at::Tensor & self, double scale, int64_t zero_point, at::Tensor & out) {
    return at::_ops::_make_per_tensor_quantized_tensor_out::call(self, scale, zero_point, out);
}

}
