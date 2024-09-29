#include "pch.h"
#include "SamplePage1.h"
#if __has_include("SamplePage1.g.cpp")
#include "SamplePage1.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::App4::implementation
{
    int32_t SamplePage1::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void SamplePage1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void SamplePage1::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        //Button().Content(box_value(L"Clicked"));
    }
}
