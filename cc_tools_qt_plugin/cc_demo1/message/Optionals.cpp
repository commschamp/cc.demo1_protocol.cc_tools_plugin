// Generated by commsdsl2tools_qt v6.3.0

#include "Optionals.h"

#include "cc_demo1/message/Optionals.h"
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

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::OptionalsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "F2Exists")
            .add(1U, "F3Missing")
            .asMap();
}

struct F2Members
{
    static QVariantMap createProps_f2(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_demo1::message::OptionalsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2Members::F2;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct F2Members

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::OptionalsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(F2Members::createProps_f2(serHidden))
            .asMap();
}

struct F3Members
{
    static QVariantMap createProps_f3(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_demo1::message::OptionalsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3Members::F3;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct F3Members

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::OptionalsFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(F3Members::createProps_f3(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    return props;
}

} // namespace

class OptionalsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Optionals<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        OptionalsImpl
    >
{
public:
    OptionalsImpl() = default;
    OptionalsImpl(const OptionalsImpl&) = delete;
    OptionalsImpl(OptionalsImpl&&) = delete;
    virtual ~OptionalsImpl() = default;
    OptionalsImpl& operator=(const OptionalsImpl&) = default;
    OptionalsImpl& operator=(OptionalsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Optionals::Optionals() : m_pImpl(new OptionalsImpl) {}
Optionals::~Optionals() = default;

Optionals& Optionals::operator=(const Optionals& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Optionals& Optionals::operator=(Optionals&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Optionals::MsgIdParamType Optionals::doGetId()
{
    return ::cc_demo1::message::Optionals<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Optionals::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Optionals::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Optionals::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Optionals::resetImpl()
{
    m_pImpl->reset();
}

bool Optionals::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Optionals*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Optionals::MsgIdParamType Optionals::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Optionals::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Optionals::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Optionals::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Optionals::lengthImpl() const
{
    return m_pImpl->length();
}

bool Optionals::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin