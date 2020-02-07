//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario5_TriggerCFU.g.h"
#include "MainPage.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario5_TriggerCFU : Scenario5_TriggerCFUT<Scenario5_TriggerCFU>
    {
        Scenario5_TriggerCFU();
        fire_and_forget CreateFileButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        fire_and_forget WriteToFileButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        fire_and_forget WriteToFileWithExplicitCFUButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        fire_and_forget PickAFileButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        void SaveToFutureAccessListButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        fire_and_forget GetFileFromFutureAccessListButton_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

    private:
        SDKTemplate::MainPage rootPage{ MainPage::Current() };

        Windows::Storage::StorageFile m_afterWriteFile{ nullptr };
        Windows::Storage::StorageFile m_beforeReadFile{ nullptr };
        hstring m_faToken;

        void UpdateButtons();
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario5_TriggerCFU : Scenario5_TriggerCFUT<Scenario5_TriggerCFU, implementation::Scenario5_TriggerCFU>
    {
    };
}
