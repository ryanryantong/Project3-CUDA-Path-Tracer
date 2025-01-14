#pragma once

#include "common.h"
#include "../src/sceneStructs.h"

namespace StreamCompaction {
    namespace Efficient {
        StreamCompaction::Common::PerformanceTimer& timer();

        void scan(int n, int *odata, const int *idata);

        int compact(int n, PathSegment*odata, const PathSegment*idata);
    }
}
