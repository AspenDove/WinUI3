#include "pch.h"
#include "MainWindow.xaml.h"
#include "BlankPage.h"
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
        myButton().Content(box_value(L"Clicked"));
    }
    void MainWindow::NavView_SelectionChanged5(Controls::NavigationView const& sender,
                                              Controls::NavigationViewSelectionChangedEventArgs const& args)
    {
        if (args.IsSettingsSelected())
        {
            ContentFrame().Navigate(winrt::xaml_typename<App4::BlankPage>());
          /*  winrt::hstring Title = L"Hello";
            winrt::hstring Content = L"Some cool content!";
            winrt::Windows::UI::Popups::MessageDialog dialog(Content, Title);
            dialog.ShowAsync();*/
        }
        else
        {
            //auto selectedItem = args.SelectedItem().as<winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem>();
            //if (selectedItem)
            //{
            //    winrt::hstring selectedItemTag = selectedItem.Tag().as<winrt::hstring>();
            //    sender.Header(winrt::box_value(L"Sample Page " + selectedItemTag.substr(selectedItemTag.size() - 1)));

            //    winrt::hstring pageName = L"App4.SamplePages." + selectedItemTag;
            //    winrt::Windows::UI::Xaml::Interop::TypeName pageType = winrt::get_class_type();

            //    if (pageName == L"App4.SamplePages.home")
            //    {
            //        pageType = xaml_typename<HomePage>();
            //    }
            //    // Add more page types as needed

            //    ContentFrame().Navigate(pageType);
            // }
        }
    }
}
