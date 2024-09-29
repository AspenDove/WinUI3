﻿#pragma once

#include "ContentDiaglog.g.h"

namespace winrt::App4::implementation
{
    struct ContentDiaglog : ContentDiaglogT<ContentDiaglog>
    {
        ContentDiaglog() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::App4::factory_implementation
{
    struct ContentDiaglog : ContentDiaglogT<ContentDiaglog, implementation::ContentDiaglog>
    {
    };
}
