// Copyright (C) 2018-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <vector>
#include <memory>

#include <transformations_visibility.hpp>

#include <ngraph/pass/graph_rewrite.hpp>

namespace ngraph {
namespace pass {

#ifdef BUILD_AS_IE_SOURCES
class ConvertNMS5ToLegacyMatcher;
#else
class INFERENCE_ENGINE_API_CLASS(ConvertNMS5ToLegacyMatcher);
#endif

}  // namespace pass
}  // namespace ngraph

/*
 * Description:
 *      Convert NMS-5 directly to inner NMS.
 */


class ngraph::pass::ConvertNMS5ToLegacyMatcher: public ngraph::pass::MatcherPass {
public:
    NGRAPH_RTTI_DECLARATION;
    ConvertNMS5ToLegacyMatcher(bool force_i32_output_type = true);
};

