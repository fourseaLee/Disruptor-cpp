#pragma once

#include "Disruptor/ClockConfig.h"

#include "ResetEvent.h"


namespace Disruptor
{
namespace Util
{

    class ManualResetEvent : public ResetEvent
    {
    public:
        explicit ManualResetEvent(bool signaled = false);

        bool isSet() const override;

        void set(bool ensureWaitIsTriggered = false) override;
        void reset() override;

        bool waitOne();
        bool wait(ClockConfig::Duration timeDuration) override;
    };

} // namespace Util
} // namespace Disruptor
