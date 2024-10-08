// Generated by commsdsl2tools_qt v6.3.4

#include "Ack.h"

#include "cc_demo1/message/Ack.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo1/field/MsgId.h"
#include "cc_tools_qt_plugin/cc_demo1/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::AckFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_demo1::field::createProps_msgId(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId(false));
    return props;
}

} // namespace

class AckImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Ack<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        AckImpl
    >
{
public:
    AckImpl() = default;
    AckImpl(const AckImpl&) = delete;
    AckImpl(AckImpl&&) = delete;
    virtual ~AckImpl() = default;
    AckImpl& operator=(const AckImpl&) = default;
    AckImpl& operator=(AckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Ack::Ack() : m_pImpl(new AckImpl) {}
Ack::~Ack() = default;

Ack& Ack::operator=(const Ack& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Ack& Ack::operator=(Ack&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Ack::MsgIdParamType Ack::doGetId()
{
    return ::cc_demo1::message::Ack<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Ack::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Ack::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Ack::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Ack::resetImpl()
{
    m_pImpl->reset();
}

bool Ack::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Ack*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Ack::MsgIdParamType Ack::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Ack::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Ack::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Ack::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Ack::lengthImpl() const
{
    return m_pImpl->length();
}

bool Ack::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
