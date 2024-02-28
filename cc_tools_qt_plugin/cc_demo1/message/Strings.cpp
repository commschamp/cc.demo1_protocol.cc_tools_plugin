// Generated by commsdsl2tools_qt v6.3.0

#include "Strings.h"

#include "cc_demo1/message/Strings.h"
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

static QVariantMap createProps_f4Len(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F4Len;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_f1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F4;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f5(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::StringsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F5;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f4Len(false));
    props.append(createProps_f1(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    props.append(createProps_f4(false));
    props.append(createProps_f5(false));
    return props;
}

} // namespace

class StringsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Strings<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        StringsImpl
    >
{
public:
    StringsImpl() = default;
    StringsImpl(const StringsImpl&) = delete;
    StringsImpl(StringsImpl&&) = delete;
    virtual ~StringsImpl() = default;
    StringsImpl& operator=(const StringsImpl&) = default;
    StringsImpl& operator=(StringsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

Strings::MsgIdParamType Strings::doGetId()
{
    return ::cc_demo1::message::Strings<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Strings::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Strings::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Strings::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Strings::resetImpl()
{
    m_pImpl->reset();
}

bool Strings::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Strings*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Strings::MsgIdParamType Strings::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Strings::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Strings::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Strings::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Strings::lengthImpl() const
{
    return m_pImpl->length();
}

bool Strings::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
