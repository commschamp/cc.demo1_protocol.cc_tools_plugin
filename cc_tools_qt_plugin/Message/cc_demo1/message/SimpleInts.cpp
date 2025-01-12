// Generated by commsdsl2tools_qt v7.0.0

#include "SimpleInts.h"

#include "cc_demo1/message/SimpleInts.h"
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

class SimpleIntsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_demo1::Message,
        ::cc_demo1::message::SimpleInts,
        SimpleIntsImpl
    >
{
public:
    SimpleIntsImpl() = default;
    SimpleIntsImpl(const SimpleIntsImpl&) = default;
    SimpleIntsImpl(SimpleIntsImpl&&) = default;
    virtual ~SimpleIntsImpl() = default;
    SimpleIntsImpl& operator=(const SimpleIntsImpl&) = default;
    SimpleIntsImpl& operator=(SimpleIntsImpl&&) = default;
};

SimpleInts::SimpleInts() : m_pImpl(new SimpleIntsImpl) {}
SimpleInts::~SimpleInts() = default;

SimpleInts& SimpleInts::operator=(const SimpleInts& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SimpleInts& SimpleInts::operator=(SimpleInts&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SimpleInts::nameImpl() const
{
    return m_pImpl->name();
}

bool SimpleInts::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong SimpleInts::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString SimpleInts::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void SimpleInts::resetImpl()
{
    m_pImpl->reset();
}

bool SimpleInts::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const SimpleInts*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool SimpleInts::isValidImpl() const
{
    return m_pImpl->isValid();
}

SimpleInts::DataSeq SimpleInts::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool SimpleInts::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

SimpleInts::Ptr SimpleInts::cloneImpl() const
{
    ImplPtr impl(static_cast<SimpleIntsImpl*>(m_pImpl->clone().release()));
    return Ptr(new SimpleInts(std::move(impl)));
}

void SimpleInts::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

SimpleInts::DataSeq SimpleInts::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

SimpleInts::FieldsList SimpleInts::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

SimpleInts::FieldsList SimpleInts::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

SimpleInts::SimpleInts(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_demo1

} // namespace Message

} // namespace cc_tools_qt_plugin
