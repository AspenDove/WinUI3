#include "pch.h"
#include "MainWindow.xaml.h"
#include "BlankPage.h"
#include "SamplePage1.h"
#include "SamplePage2.h"
#include "HomePage.h"
#include "AccountPage.h"

#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App4::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        //myButton().Content(box_value(L"Clicked"));
    }
    void MainWindow::NavView_SelectionChanged5(Controls::NavigationView const& sender,
                                              Controls::NavigationViewSelectionChangedEventArgs const& args)
    {
        if (args.IsSettingsSelected())
        {
            ContentFrame().Navigate(winrt::xaml_typename<App4::BlankPage>());
        }
        else
        {
            auto selectedItem = args.SelectedItem().as<winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem>();
            if (selectedItem)
            {
                winrt::hstring selectedItemTag = selectedItem.Tag().as<winrt::hstring>();
                sender.Header(winrt::box_value(winrt::hstring(L"Page ") + *selectedItemTag.crbegin()));

                winrt::hstring pageName = winrt::hstring(L"App4.Pages.") + *selectedItemTag.crbegin();
                winrt::Windows::UI::Xaml::Interop::TypeName pageType;

                if (*selectedItemTag.crbegin() == L'e') {
                    pageType = xaml_typename<App4::HomePage>();
                }
                else if (*selectedItemTag.crbegin() == L't')
                {
                    pageType = xaml_typename<App4::AccountPage>();
                }
                else if (pageName == L"App4.Pages.1")
                {
                    pageType = xaml_typename<App4::SamplePage1>();
                }
                else if (pageName == L"App4.Pages.2")
                {
                    pageType = xaml_typename<App4::SamplePage2>();
                }
                else {
                    //No corresponding page type found, do nothing
                    return;
                }
                // Add more page types as needed
                ContentFrame().Navigate(pageType);
             }
        }
    }
}
