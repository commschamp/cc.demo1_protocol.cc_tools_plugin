// Generated by commsdsl2tools_qt v6.3.3

#include "Enums.h"

#include "cc_demo1/message/Enums.h"
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
    using Field = ::cc_demo1::message::EnumsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("V0", 0)
            .add("V1", 1)
            .add("V2", 2)
            .asMap();
}

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::EnumsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("V1", -1)
            .add("V2", 5)
            .add("V3", 6)
            .add("V4", 7)
            .asMap();
}

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::EnumsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("V1", 66051L)
            .add("V2", 263430L)
            .asMap();
}

static QVariantMap createProps_f4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::EnumsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F4;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("V1", 0)
            .add("V2", 128)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    props.append(createProps_f4(false));
    return props;
}

} // namespace

class EnumsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Enums<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        EnumsImpl
    >
{
public:
    EnumsImpl() = default;
    EnumsImpl(const EnumsImpl&) = delete;
    EnumsImpl(EnumsImpl&&) = delete;
    virtual ~EnumsImpl() = default;
    EnumsImpl& operator=(const EnumsImpl&) = default;
    EnumsImpl& operator=(EnumsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

Enums::MsgIdParamType Enums::doGetId()
{
    return ::cc_demo1::message::Enums<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Enums::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Enums::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Enums::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Enums::resetImpl()
{
    m_pImpl->reset();
}

bool Enums::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Enums*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Enums::MsgIdParamType Enums::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Enums::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Enums::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Enums::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Enums::lengthImpl() const
{
    return m_pImpl->length();
}

bool Enums::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
