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



#include <ATen/ops/_embedding_bag_ops.h>

namespace at {


// aten::_embedding_bag(Tensor weight, Tensor indices, Tensor offsets, bool scale_grad_by_freq=False, int mode=0, bool sparse=False, Tensor? per_sample_weights=None, bool include_last_offset=False, int padding_idx=-1) -> (Tensor, Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> _embedding_bag(const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq=false, int64_t mode=0, bool sparse=false, const ::std::optional<at::Tensor> & per_sample_weights={}, bool include_last_offset=false, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag::call(weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx);
}

// aten::_embedding_bag.out(Tensor weight, Tensor indices, Tensor offsets, bool scale_grad_by_freq=False, int mode=0, bool sparse=False, Tensor? per_sample_weights=None, bool include_last_offset=False, int padding_idx=-1, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _embedding_bag_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq=false, int64_t mode=0, bool sparse=false, const ::std::optional<at::Tensor> & per_sample_weights={}, bool include_last_offset=false, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag_out::call(weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx, out0, out1, out2, out3);
}
// aten::_embedding_bag.out(Tensor weight, Tensor indices, Tensor offsets, bool scale_grad_by_freq=False, int mode=0, bool sparse=False, Tensor? per_sample_weights=None, bool include_last_offset=False, int padding_idx=-1, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _embedding_bag_outf(const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const ::std::optional<at::Tensor> & per_sample_weights, bool include_last_offset, int64_t padding_idx, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3) {
    return at::_ops::_embedding_bag_out::call(weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx, out0, out1, out2, out3);
}

}
