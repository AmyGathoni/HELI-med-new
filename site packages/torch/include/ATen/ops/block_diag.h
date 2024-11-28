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



#include <ATen/ops/block_diag_ops.h>

namespace at {


// aten::block_diag(Tensor[] tensors) -> Tensor
inline at::Tensor block_diag(at::TensorList tensors) {
    return at::_ops::block_diag::call(tensors);
}

// aten::block_diag.out(Tensor[] tensors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & block_diag_out(at::Tensor & out, at::TensorList tensors) {
    return at::_ops::block_diag_out::call(tensors, out);
}
// aten::block_diag.out(Tensor[] tensors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & block_diag_outf(at::TensorList tensors, at::Tensor & out) {
    return at::_ops::block_diag_out::call(tensors, out);
}

}
