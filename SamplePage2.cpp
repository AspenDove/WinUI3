#include "pch.h"
#include "SamplePage2.h"
#if __has_include("SamplePage2.g.cpp")
#include "SamplePage2.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::App4::implementation
{
    int32_t SamplePage2::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void SamplePage2::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void SamplePage2::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        //Button().Content(box_value(L"Clicked"));
    }
}
