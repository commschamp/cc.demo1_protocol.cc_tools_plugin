// Generated by commsdsl2tools_qt v6.3.0

#include "Datas.h"

#include "cc_demo1/message/Datas.h"
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

static QVariantMap createProps_f3Len(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::DatasFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3Len;
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
    using Field = ::cc_demo1::message::DatasFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::DatasFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::DatasFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_f4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::message::DatasFields<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::F4;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f3Len(false));
    props.append(createProps_f1(false));
    props.append(createProps_f2(false));
    props.append(createProps_f3(false));
    props.append(createProps_f4(false));
    return props;
}

} // namespace

class DatasImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_demo1::message::Datas<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>,
        DatasImpl
    >
{
public:
    DatasImpl() = default;
    DatasImpl(const DatasImpl&) = delete;
    DatasImpl(DatasImpl&&) = delete;
    virtual ~DatasImpl() = default;
    DatasImpl& operator=(const DatasImpl&) = default;
    DatasImpl& operator=(DatasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Datas::Datas() : m_pImpl(new DatasImpl) {}
Datas::~Datas() = default;

Datas& Datas::operator=(const Datas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Datas& Datas::operator=(Datas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Datas::MsgIdParamType Datas::doGetId()
{
    return ::cc_demo1::message::Datas<cc_tools_qt_plugin::cc_demo1::Message, cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>::doGetId();
}

const char* Datas::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Datas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Datas::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Datas::resetImpl()
{
    m_pImpl->reset();
}

bool Datas::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Datas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Datas::MsgIdParamType Datas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Datas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Datas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Datas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Datas::lengthImpl() const
{
    return m_pImpl->length();
}

bool Datas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
