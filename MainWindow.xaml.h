#pragma once

#include "MainWindow.g.h"

namespace winrt::App4::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

        void NavView_SelectionChanged5(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender,
            winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args);

        //winrt::Microsoft::UI::Xaml::Controls::Frame ContentFrame() { return m_contentFrame; }

    private:
        //winrt::Microsoft::UI::Xaml::Controls::Frame m_contentFrame{ nullptr };

    };
}

namespace winrt::App4::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
