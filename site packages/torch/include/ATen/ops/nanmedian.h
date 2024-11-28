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



#include <ATen/ops/nanmedian_ops.h>

namespace at {


// aten::nanmedian(Tensor self) -> Tensor
inline at::Tensor nanmedian(const at::Tensor & self) {
    return at::_ops::nanmedian::call(self);
}

// aten::nanmedian.dim(Tensor self, int dim, bool keepdim=False) -> (Tensor values, Tensor indices)
inline ::std::tuple<at::Tensor,at::Tensor> nanmedian(const at::Tensor & self, int64_t dim, bool keepdim=false) {
    return at::_ops::nanmedian_dim::call(self, dim, keepdim);
}

// aten::nanmedian.dim_values(Tensor self, int dim, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> nanmedian_out(at::Tensor & values, at::Tensor & indices, const at::Tensor & self, int64_t dim, bool keepdim=false) {
    return at::_ops::nanmedian_dim_values::call(self, dim, keepdim, values, indices);
}
// aten::nanmedian.dim_values(Tensor self, int dim, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> nanmedian_outf(const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
    return at::_ops::nanmedian_dim_values::call(self, dim, keepdim, values, indices);
}

// aten::nanmedian.names_dim(Tensor self, Dimname dim, bool keepdim=False) -> (Tensor values, Tensor indices)
inline ::std::tuple<at::Tensor,at::Tensor> nanmedian(const at::Tensor & self, at::Dimname dim, bool keepdim=false) {
    return at::_ops::nanmedian_names_dim::call(self, dim, keepdim);
}

// aten::nanmedian.names_dim_values(Tensor self, Dimname dim, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> nanmedian_out(at::Tensor & values, at::Tensor & indices, const at::Tensor & self, at::Dimname dim, bool keepdim=false) {
    return at::_ops::nanmedian_names_dim_values::call(self, dim, keepdim, values, indices);
}
// aten::nanmedian.names_dim_values(Tensor self, Dimname dim, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> nanmedian_outf(const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
    return at::_ops::nanmedian_names_dim_values::call(self, dim, keepdim, values, indices);
}

// aten::nanmedian.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & nanmedian_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::nanmedian_out::call(self, out);
}
// aten::nanmedian.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & nanmedian_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::nanmedian_out::call(self, out);
}

}
