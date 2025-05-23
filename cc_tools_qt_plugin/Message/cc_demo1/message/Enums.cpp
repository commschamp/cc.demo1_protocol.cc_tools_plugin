// Generated by commsdsl2tools_qt v7.1.0

#include "Enums.h"

#include "cc_demo1/message/Enums.h"
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

class EnumsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        ::cc_demo1::message::Enums,
        EnumsImpl
    >
{
public:
    EnumsImpl() = default;
    EnumsImpl(const EnumsImpl&) = default;
    EnumsImpl(EnumsImpl&&) = default;
    virtual ~EnumsImpl() = default;
    EnumsImpl& operator=(const EnumsImpl&) = default;
    EnumsImpl& operator=(EnumsImpl&&) = default;
};

Enums::Enums() : m_pImpl(new EnumsImpl) {}
Enums::~Enums() = default;

Enums& Enums::operator=(const Enums& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Enums& Enums::operator=(Enums&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Enums::nameImpl() const
{
    return m_pImpl->name();
}

bool Enums::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Enums::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Enums::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Enums::resetImpl()
{
    m_pImpl->reset();
}

bool Enums::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Enums*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Enums::isValidImpl() const
{
    return m_pImpl->isValid();
}

Enums::DataSeq Enums::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Enums::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Enums::Ptr Enums::cloneImpl() const
{
    ImplPtr impl(static_cast<EnumsImpl*>(m_pImpl->clone().release()));
    return Ptr(new Enums(std::move(impl)));
}

void Enums::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Enums::DataSeq Enums::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Enums::FieldsList Enums::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Enums::FieldsList Enums::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Enums::Enums(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
