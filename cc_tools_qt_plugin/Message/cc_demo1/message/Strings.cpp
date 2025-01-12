// Generated by commsdsl2tools_qt v7.0.0

#include "Strings.h"

#include "cc_demo1/message/Strings.h"
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

class StringsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        ::cc_demo1::message::Strings,
        StringsImpl
    >
{
public:
    StringsImpl() = default;
    StringsImpl(const StringsImpl&) = default;
    StringsImpl(StringsImpl&&) = default;
    virtual ~StringsImpl() = default;
    StringsImpl& operator=(const StringsImpl&) = default;
    StringsImpl& operator=(StringsImpl&&) = default;
};

Strings::Strings() : m_pImpl(new StringsImpl) {}
Strings::~Strings() = default;

Strings& Strings::operator=(const Strings& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Strings& Strings::operator=(Strings&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Strings::nameImpl() const
{
    return m_pImpl->name();
}

bool Strings::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Strings::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Strings::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Strings::resetImpl()
{
    m_pImpl->reset();
}

bool Strings::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Strings*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Strings::isValidImpl() const
{
    return m_pImpl->isValid();
}

Strings::DataSeq Strings::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Strings::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Strings::Ptr Strings::cloneImpl() const
{
    ImplPtr impl(static_cast<StringsImpl*>(m_pImpl->clone().release()));
    return Ptr(new Strings(std::move(impl)));
}

void Strings::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Strings::DataSeq Strings::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Strings::FieldsList Strings::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Strings::FieldsList Strings::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Strings::Strings(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin