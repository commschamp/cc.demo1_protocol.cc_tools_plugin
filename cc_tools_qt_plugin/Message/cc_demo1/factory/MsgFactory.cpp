// Generated by commsdsl2tools_qt v7.0.0

#include "MsgFactory.h"

#include "cc_tools_qt_plugin/Message/cc_demo1/message/Ack.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Bitfields.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Datas.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Enums.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Floats.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Lists.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Optionals.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/ScaledInts.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Sets.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/SimpleInts.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Strings.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/message/Variants.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo1
{

namespace factory
{

MsgFactory::MsgFactory() = default;
MsgFactory::~MsgFactory() = default;

MsgFactory::MessagesListInternal MsgFactory::createAllMessagesImpl()
{
    return
        MessagesListInternal{
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Ack),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::SimpleInts),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::ScaledInts),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Floats),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Enums),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Sets),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Bitfields),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Strings),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Datas),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Lists),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Optionals),
            cc_tools_qt::ToolsMessagePtr(new cc_tools_qt_plugin::Message::cc_demo1::message::Variants)
        };
}

} // namespace factory

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
