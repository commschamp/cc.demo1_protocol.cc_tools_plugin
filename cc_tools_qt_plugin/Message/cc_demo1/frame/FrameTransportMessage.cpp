// Generated by commsdsl2tools_qt v7.0.0

#include "FrameTransportMessage.h"

#include "cc_tools_qt/ToolsTransportMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/Message.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/frame/FrameProtTransportMessage.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo1
{

namespace frame
{

class FrameTransportMessageImpl : public
    cc_tools_qt::ToolsTransportMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        cc_demo1::frame::FrameProtTransportMessage,
        FrameTransportMessageImpl
    >
{
public:
    FrameTransportMessageImpl() = default;
    FrameTransportMessageImpl(const FrameTransportMessageImpl&) = default;
    FrameTransportMessageImpl(FrameTransportMessageImpl&&) = default;
    virtual ~FrameTransportMessageImpl() = default;
    FrameTransportMessageImpl& operator=(const FrameTransportMessageImpl&) = default;
    FrameTransportMessageImpl& operator=(FrameTransportMessageImpl&&) = default;

protected:
    virtual qlonglong numericIdImpl() const override
    {
        return static_cast<qlonglong>(msg().field_id().getValue());
    }
};

FrameTransportMessage::FrameTransportMessage() : m_pImpl(new FrameTransportMessageImpl) {}
FrameTransportMessage::~FrameTransportMessage() = default;

FrameTransportMessage& FrameTransportMessage::operator=(const FrameTransportMessage& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

FrameTransportMessage& FrameTransportMessage::operator=(FrameTransportMessage&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* FrameTransportMessage::nameImpl() const
{
    return m_pImpl->name();
}

bool FrameTransportMessage::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong FrameTransportMessage::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString FrameTransportMessage::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void FrameTransportMessage::resetImpl()
{
    m_pImpl->reset();
}

bool FrameTransportMessage::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const FrameTransportMessage*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool FrameTransportMessage::isValidImpl() const
{
    return m_pImpl->isValid();
}

FrameTransportMessage::DataSeq FrameTransportMessage::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool FrameTransportMessage::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

FrameTransportMessage::Ptr FrameTransportMessage::cloneImpl() const
{
    ImplPtr impl(static_cast<FrameTransportMessageImpl*>(m_pImpl->clone().release()));
    return Ptr(new FrameTransportMessage(std::move(impl)));
}

void FrameTransportMessage::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

FrameTransportMessage::DataSeq FrameTransportMessage::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

FrameTransportMessage::FieldsList FrameTransportMessage::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

FrameTransportMessage::FieldsList FrameTransportMessage::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

FrameTransportMessage::FrameTransportMessage(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace frame

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin