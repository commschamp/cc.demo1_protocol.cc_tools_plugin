// Generated by commsdsl2tools_qt v7.0.2

#pragma once

#include <memory>

#include "cc_tools_qt/ToolsFrame.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo1
{

namespace frame
{

class FrameImpl;
class Frame : public cc_tools_qt::ToolsFrame
{
public:
    Frame();
    virtual ~Frame();

protected:
    virtual cc_tools_qt::ToolsMessagesList readDataImpl(const cc_tools_qt::ToolsDataInfo& dataInfo, bool final) override;
    virtual void updateMessageImpl(cc_tools_qt::ToolsMessage& msg) override;
    virtual cc_tools_qt::ToolsMessagePtr createInvalidMessageImpl() override;
    virtual cc_tools_qt::ToolsMessagePtr createRawDataMessageImpl() override;
    virtual cc_tools_qt::ToolsMessagePtr createExtraInfoMessageImpl() override;
    virtual cc_tools_qt::ToolsMessagesList createAllMessagesImpl() override;
    virtual cc_tools_qt::ToolsMessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override;

private:
    std::unique_ptr<FrameImpl> m_pImpl;
};

} // namespace frame

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
