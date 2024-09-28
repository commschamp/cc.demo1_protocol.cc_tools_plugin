// Generated by commsdsl2tools_qt v6.3.4

#include "cc_demo1/MsgId.h"
#include "cc_tools_qt_plugin/cc_demo1/factory/AllMessagesDynMemMsgFactory.h"
#include "cc_tools_qt_plugin/cc_demo1/input/AllMessages.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace factory
{

AllMessagesDynMemMsgFactory::MsgPtr AllMessagesDynMemMsgFactory::createMsg(MsgIdParamType id, unsigned idx, CreateFailureReason* reason) const
{
    auto updateReasonFunc =
        [reason](CreateFailureReason val)
        {
            if (reason != nullptr) {
                *reason = val;
            }
        };

    if (1U <= idx) {
        updateReasonFunc(CreateFailureReason::InvalidId);
        return MsgPtr();
    }

    updateReasonFunc(CreateFailureReason::None);
    switch (id) {
        case ::cc_demo1::MsgId_Ack: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Ack);
        case ::cc_demo1::MsgId_SimpleInts: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::SimpleInts);
        case ::cc_demo1::MsgId_ScaledInts: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::ScaledInts);
        case ::cc_demo1::MsgId_Floats: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Floats);
        case ::cc_demo1::MsgId_Enums: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Enums);
        case ::cc_demo1::MsgId_Sets: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Sets);
        case ::cc_demo1::MsgId_Bitfields: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Bitfields);
        case ::cc_demo1::MsgId_Strings: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Strings);
        case ::cc_demo1::MsgId_Datas: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Datas);
        case ::cc_demo1::MsgId_Lists: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Lists);
        case ::cc_demo1::MsgId_Optionals: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Optionals);
        case ::cc_demo1::MsgId_Variants: return MsgPtr(new cc_tools_qt_plugin::cc_demo1::message::Variants);
        default: break;
    }

    updateReasonFunc(CreateFailureReason::InvalidId);
    return MsgPtr();
}

std::size_t AllMessagesDynMemMsgFactory::msgCount(MsgIdParamType id) const
{
    switch (id)
    {
        case ::cc_demo1::MsgId_Ack: return 1U;
        case ::cc_demo1::MsgId_SimpleInts: return 1U;
        case ::cc_demo1::MsgId_ScaledInts: return 1U;
        case ::cc_demo1::MsgId_Floats: return 1U;
        case ::cc_demo1::MsgId_Enums: return 1U;
        case ::cc_demo1::MsgId_Sets: return 1U;
        case ::cc_demo1::MsgId_Bitfields: return 1U;
        case ::cc_demo1::MsgId_Strings: return 1U;
        case ::cc_demo1::MsgId_Datas: return 1U;
        case ::cc_demo1::MsgId_Lists: return 1U;
        case ::cc_demo1::MsgId_Optionals: return 1U;
        case ::cc_demo1::MsgId_Variants: return 1U;
        default: break;
    }

    return 0U;
}

} // namespace factory

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
