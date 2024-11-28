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



#include <ATen/ops/rsqrt_ops.h>

namespace at {


// aten::rsqrt(Tensor self) -> Tensor
inline at::Tensor rsqrt(const at::Tensor & self) {
    return at::_ops::rsqrt::call(self);
}

// aten::rsqrt_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & rsqrt_(at::Tensor & self) {
    return at::_ops::rsqrt_::call(self);
}

// aten::rsqrt.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rsqrt_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::rsqrt_out::call(self, out);
}
// aten::rsqrt.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rsqrt_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::rsqrt_out::call(self, out);
}

}
