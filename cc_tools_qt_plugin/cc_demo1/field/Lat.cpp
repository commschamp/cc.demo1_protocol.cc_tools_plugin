// Generated by commsdsl2tools_qt v6.3.3

#include "Lat.h"

#include "cc_demo1/field/Lat.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo1/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo1
{

namespace field
{

QVariantMap createProps_lat(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo1::field::Lat<cc_tools_qt_plugin::cc_demo1::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .scaledDecimals(7U)
            .asMap();
}

} // namespace field

} // namespace cc_demo1

} // namespace cc_tools_qt_plugin
