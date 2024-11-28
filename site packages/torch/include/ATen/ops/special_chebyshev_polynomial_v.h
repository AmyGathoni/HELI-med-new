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



#include <ATen/ops/special_chebyshev_polynomial_v_ops.h>

namespace at {


// aten::special_chebyshev_polynomial_v(Tensor x, Tensor n) -> Tensor
inline at::Tensor special_chebyshev_polynomial_v(const at::Tensor & x, const at::Tensor & n) {
    return at::_ops::special_chebyshev_polynomial_v::call(x, n);
}

// aten::special_chebyshev_polynomial_v.x_scalar(Scalar x, Tensor n) -> Tensor
inline at::Tensor special_chebyshev_polynomial_v(const at::Scalar & x, const at::Tensor & n) {
    return at::_ops::special_chebyshev_polynomial_v_x_scalar::call(x, n);
}

// aten::special_chebyshev_polynomial_v.n_scalar(Tensor x, Scalar n) -> Tensor
inline at::Tensor special_chebyshev_polynomial_v(const at::Tensor & x, const at::Scalar & n) {
    return at::_ops::special_chebyshev_polynomial_v_n_scalar::call(x, n);
}

// aten::special_chebyshev_polynomial_v.out(Tensor x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_out(at::Tensor & out, const at::Tensor & x, const at::Tensor & n) {
    return at::_ops::special_chebyshev_polynomial_v_out::call(x, n, out);
}
// aten::special_chebyshev_polynomial_v.out(Tensor x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_outf(const at::Tensor & x, const at::Tensor & n, at::Tensor & out) {
    return at::_ops::special_chebyshev_polynomial_v_out::call(x, n, out);
}

// aten::special_chebyshev_polynomial_v.x_scalar_out(Scalar x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_out(at::Tensor & out, const at::Scalar & x, const at::Tensor & n) {
    return at::_ops::special_chebyshev_polynomial_v_x_scalar_out::call(x, n, out);
}
// aten::special_chebyshev_polynomial_v.x_scalar_out(Scalar x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_outf(const at::Scalar & x, const at::Tensor & n, at::Tensor & out) {
    return at::_ops::special_chebyshev_polynomial_v_x_scalar_out::call(x, n, out);
}

// aten::special_chebyshev_polynomial_v.n_scalar_out(Tensor x, Scalar n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_out(at::Tensor & out, const at::Tensor & x, const at::Scalar & n) {
    return at::_ops::special_chebyshev_polynomial_v_n_scalar_out::call(x, n, out);
}
// aten::special_chebyshev_polynomial_v.n_scalar_out(Tensor x, Scalar n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_chebyshev_polynomial_v_outf(const at::Tensor & x, const at::Scalar & n, at::Tensor & out) {
    return at::_ops::special_chebyshev_polynomial_v_n_scalar_out::call(x, n, out);
}

}
