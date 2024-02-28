// Generated by commsdsl2tools_qt v6.3.0

#include "SimpleInts.h"

#include "cc_demo1/message/SimpleInts.h"
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
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .addSpecial("S1", 1)
            .asMap();
}

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F4;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f5(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F5;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f6(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F6;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .addSpecial("S1", 0xffffffffLL)
            .asMap();
}

static QVariantMap createProps_f7(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F7;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f8(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F8;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f9(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F9;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f10(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::SimpleIntsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F10;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    props.append(createProps_f4(false));
    props.append(createProps_f5(false));
    props.append(createProps_f6(false));
    props.append(createProps_f7(false));
    props.append(createProps_f8(false));
    props.append(createProps_f9(false));
    props.append(createProps_f10(false));
    return props;
}

} // namespace

class SimpleIntsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::SimpleInts<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        SimpleIntsImpl
    >
{
public:
    SimpleIntsImpl() = default;
    SimpleIntsImpl(const SimpleIntsImpl&) = delete;
    SimpleIntsImpl(SimpleIntsImpl&&) = delete;
    virtual ~SimpleIntsImpl() = default;
    SimpleIntsImpl& operator=(const SimpleIntsImpl&) = default;
    SimpleIntsImpl& operator=(SimpleIntsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

SimpleInts::MsgIdParamType SimpleInts::doGetId()
{
    return ::cc_demo1::message::SimpleInts<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* SimpleInts::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& SimpleInts::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SimpleInts::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void SimpleInts::resetImpl()
{
    m_pImpl->reset();
}

bool SimpleInts::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const SimpleInts*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SimpleInts::MsgIdParamType SimpleInts::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SimpleInts::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SimpleInts::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SimpleInts::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SimpleInts::lengthImpl() const
{
    return m_pImpl->length();
}

bool SimpleInts::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin