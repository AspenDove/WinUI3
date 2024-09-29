#include "pch.h"
#include "ContentDiaglog.h"
#if __has_include("ContentDiaglog.g.cpp")
#include "ContentDiaglog.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::App4::implementation
{
    int32_t ContentDiaglog::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ContentDiaglog::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void ContentDiaglog::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
