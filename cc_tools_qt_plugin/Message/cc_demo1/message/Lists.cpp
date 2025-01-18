// Generated by commsdsl2tools_qt v7.0.2

#include "Lists.h"

#include "cc_demo1/message/Lists.h"
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

class ListsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        ::cc_demo1::message::Lists,
        ListsImpl
    >
{
public:
    ListsImpl() = default;
    ListsImpl(const ListsImpl&) = default;
    ListsImpl(ListsImpl&&) = default;
    virtual ~ListsImpl() = default;
    ListsImpl& operator=(const ListsImpl&) = default;
    ListsImpl& operator=(ListsImpl&&) = default;
};

Lists::Lists() : m_pImpl(new ListsImpl) {}
Lists::~Lists() = default;

Lists& Lists::operator=(const Lists& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Lists& Lists::operator=(Lists&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Lists::nameImpl() const
{
    return m_pImpl->name();
}

bool Lists::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Lists::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Lists::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Lists::resetImpl()
{
    m_pImpl->reset();
}

bool Lists::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Lists*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Lists::isValidImpl() const
{
    return m_pImpl->isValid();
}

Lists::DataSeq Lists::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Lists::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Lists::Ptr Lists::cloneImpl() const
{
    ImplPtr impl(static_cast<ListsImpl*>(m_pImpl->clone().release()));
    return Ptr(new Lists(std::move(impl)));
}

void Lists::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Lists::DataSeq Lists::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Lists::FieldsList Lists::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Lists::FieldsList Lists::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Lists::Lists(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
