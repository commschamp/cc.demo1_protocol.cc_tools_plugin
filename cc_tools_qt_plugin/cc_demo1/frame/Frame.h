// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include "cc_demo1/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_demo1/Message.h"
#include "cc_tools_qt_plugin/cc_demo1/Version.h"
#include "cc_tools_qt_plugin/cc_demo1/input/AllMessages.h"
#include "cc_tools_qt_plugin/cc_demo1/options/MsgFactoryFrameOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace frame
{

using Frame =
    ::cc_demo1::frame::Frame<
        cc_tools_qt_plugin::cc_demo1::Message,
        cc_tools_qt_plugin::cc_demo1::input::AllMessages,
        cc_tools_qt_plugin::cc_demo1::options::MsgFactoryFrameOptions
    >;

} // namespace frame

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
