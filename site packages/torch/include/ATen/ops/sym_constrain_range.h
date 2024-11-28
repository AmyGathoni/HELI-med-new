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



#include <ATen/ops/sym_constrain_range_ops.h>

namespace at {


// aten::sym_constrain_range(Scalar size, *, int? min=None, int? max=None) -> ()
inline void sym_constrain_range(const at::Scalar & size, ::std::optional<int64_t> min=::std::nullopt, ::std::optional<int64_t> max=::std::nullopt) {
    return at::_ops::sym_constrain_range::call(size, min, max);
}

}
