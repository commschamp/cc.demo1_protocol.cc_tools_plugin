// Generated by commsdsl2tools_qt v7.1.0

#include "Sets.h"

#include "cc_demo1/message/Sets.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_demo1/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_demo1
{

namespace message
{

class SetsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        ::cc_demo1::message::Sets,
        SetsImpl
    >
{
public:
    SetsImpl() = default;
    SetsImpl(const SetsImpl&) = default;
    SetsImpl(SetsImpl&&) = default;
    virtual ~SetsImpl() = default;
    SetsImpl& operator=(const SetsImpl&) = default;
    SetsImpl& operator=(SetsImpl&&) = default;
};

Sets::Sets() : m_pImpl(new SetsImpl) {}
Sets::~Sets() = default;

Sets& Sets::operator=(const Sets& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Sets& Sets::operator=(Sets&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Sets::nameImpl() const
{
    return m_pImpl->name();
}

bool Sets::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Sets::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Sets::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Sets::resetImpl()
{
    m_pImpl->reset();
}

bool Sets::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Sets*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Sets::isValidImpl() const
{
    return m_pImpl->isValid();
}

Sets::DataSeq Sets::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Sets::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Sets::Ptr Sets::cloneImpl() const
{
    ImplPtr impl(static_cast<SetsImpl*>(m_pImpl->clone().release()));
    return Ptr(new Sets(std::move(impl)));
}

void Sets::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Sets::DataSeq Sets::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Sets::FieldsList Sets::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Sets::FieldsList Sets::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Sets::Sets(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
