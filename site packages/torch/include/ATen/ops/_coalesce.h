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



#include <ATen/ops/_coalesce_ops.h>

namespace at {


// aten::_coalesce(Tensor self) -> Tensor
inline at::Tensor _coalesce(const at::Tensor & self) {
    return at::_ops::_coalesce::call(self);
}

// aten::_coalesce.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _coalesce_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::_coalesce_out::call(self, out);
}
// aten::_coalesce.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _coalesce_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::_coalesce_out::call(self, out);
}

}
