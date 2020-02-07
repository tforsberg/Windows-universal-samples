﻿//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "pch.h"
#include "Scenario1_SingleFile.xaml.h"

using namespace SDKTemplate;

using namespace concurrency;
using namespace Platform;
using namespace Windows::Storage;
using namespace Windows::Storage::Pickers;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;

Scenario1_SingleFile::Scenario1_SingleFile()
{
    InitializeComponent();
    rootPage = MainPage::Current;
}

void Scenario1_SingleFile::PickAFileButton_Click(Object^ sender, RoutedEventArgs^ e)
{
    // Clear previous returned file name, if it exists, between iterations of this scenario
    OutputTextBlock->Text = "";

    FileOpenPicker^ openPicker = ref new FileOpenPicker();
    openPicker->ViewMode = PickerViewMode::Thumbnail;
    openPicker->SuggestedStartLocation = PickerLocationId::PicturesLibrary;
    openPicker->FileTypeFilter->Append(".jpg");
    openPicker->FileTypeFilter->Append(".jpeg");
    openPicker->FileTypeFilter->Append(".png");

    create_task(openPicker->PickSingleFileAsync()).then([this](StorageFile^ file)
    {
        if (file)
        {
            OutputTextBlock->Text = "Picked photo: " + file->Name;
        }
        else
        {
            OutputTextBlock->Text = "Operation cancelled.";
        }
    });
}
