// Generated by commsdsl2tools_qt v7.0.0

#pragma once

#include "cc_demo1/Message.h"
#include "cc_tools_qt/ToolsMessage.h"
#include "cc_tools_qt/ToolsProtMsgInterface.h"
#include "cc_tools_qt_plugin/cc_demo1/Version.h"
#include "cc_tools_qt_plugin/cc_demo1/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo1
{

class Message : public cc_tools_qt::ToolsMessage
{
public:
    using ProtInterface = cc_tools_qt::ToolsProtMsgInterface<::cc_demo1::Message>;
    using ProtOptions = cc_tools_qt_plugin::cc_demo1::options::DefaultOptions;
    Message();
    virtual ~Message() noexcept;
};

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
