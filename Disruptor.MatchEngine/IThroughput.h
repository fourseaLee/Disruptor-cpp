#pragma once

#include <cstdint>

#include "Stopwatch.h"


namespace Disruptor
{
namespace Engine
{

    class IThroughput
    {
    public:
        virtual ~IThroughput() = default;

        virtual std::int64_t run(Stopwatch& stopwatch) = 0;

        virtual std::int32_t requiredProcessorCount() const = 0;
    };

} // namespace Engine
} // namespace Disruptor
