// Generated by commsdsl2tools_qt v6.3.3

#include "Sets.h"

#include "cc_demo1/message/Sets.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo1/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace message
{

namespace
{

static QVariantMap createProps_f1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SetsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "Bit0")
            .add(1U, "Bit1")
            .add(2U, "Bit2")
            .asMap();
}

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SetsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "Bit0")
            .add(15U, "Bit15")
            .asMap();
}

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SetsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "Bit0")
            .add(2U, "Bit2")
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    return props;
}

} // namespace

class SetsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Sets<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        SetsImpl
    >
{
public:
    SetsImpl() = default;
    SetsImpl(const SetsImpl&) = delete;
    SetsImpl(SetsImpl&&) = delete;
    virtual ~SetsImpl() = default;
    SetsImpl& operator=(const SetsImpl&) = default;
    SetsImpl& operator=(SetsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

Sets::MsgIdParamType Sets::doGetId()
{
    return ::cc_demo1::message::Sets<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Sets::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Sets::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Sets::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Sets::resetImpl()
{
    m_pImpl->reset();
}

bool Sets::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Sets*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Sets::MsgIdParamType Sets::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Sets::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Sets::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Sets::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Sets::lengthImpl() const
{
    return m_pImpl->length();
}

bool Sets::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
