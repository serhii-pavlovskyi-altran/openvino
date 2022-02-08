// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "kernel_base_opencl.h"

namespace kernel_selector {

struct experimental_detectron_prior_grid_generator_params: public base_params {
    experimental_detectron_prior_grid_generator_params() :
        base_params { KernelType::EXPERIMENTAL_DETECTRON_PRIOR_GRID_GENERATOR } {
    }
    bool flatten = false;
    int64_t layer_height = 0;
    int64_t layer_width = 0;
    int64_t number_of_priors = 0;
    float step_x = 0;
    float step_y = 0;
};

struct experimental_detectron_prior_grid_generator_optional_params: optional_params {
    experimental_detectron_prior_grid_generator_optional_params() :
        optional_params { KernelType::EXPERIMENTAL_DETECTRON_PRIOR_GRID_GENERATOR } {
    }
};

class ExperimentalDetectronPriorGridGeneratorKernelRef: public KernelBaseOpenCL {
    KernelsData GetKernelsData(const Params &params, const optional_params &options) const override;
    KernelsPriority GetKernelsPriority(const Params &params, const optional_params &options) const override;
    ParamsKey GetSupportedKey() const override;
    bool Validate(const Params &p, const optional_params &o) const override;
    JitConstants GetJitConstants(const experimental_detectron_prior_grid_generator_params& params) const;
public:
    ExperimentalDetectronPriorGridGeneratorKernelRef() :
        KernelBaseOpenCL { "experimental_detectron_prior_grid_generator_ref" } {
    }
};

}  // namespace kernel_selector
