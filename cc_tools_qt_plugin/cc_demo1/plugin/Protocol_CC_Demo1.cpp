// Generated by commsdsl2tools_qt v7.0.0

#include "Protocol_CC_Demo1.h"

#include "cc_tools_qt_plugin/Message/cc_demo1/frame/Frame.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace plugin
{

Protocol_CC_Demo1::Protocol_CC_Demo1() :
    Base(std::make_unique<cc_tools_qt_plugin::Message::cc_demo1::frame::Frame>())
{
}

Protocol_CC_Demo1::~Protocol_CC_Demo1() = default;

const QString& Protocol_CC_Demo1::nameImpl() const
{
        static const QString Str("CC Demo1");
        return Str;
}

} // namespace plugin

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
