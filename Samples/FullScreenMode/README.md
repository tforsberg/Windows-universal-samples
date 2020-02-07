---
page_type: sample
languages:
- csharp
- cpp
- cppcx
- cppwinrt
products:
- windows
- windows-uwp
urlFragment: FullScreenMode
extendedZipContent:
- path: SharedContent
  target: SharedContent
- path: LICENSE
  target: LICENSE
description: "Shows how to use full screen mode so that your app can fill the entire screen."
---

<!---
  category: ControlsLayoutAndText
  samplefwlink: http://go.microsoft.com/fwlink/p/?LinkId=620546
--->

# Full screen mode sample

Shows how to use full screen mode so that your app can fill the entire screen.

> **Note:** This sample is part of a large collection of UWP feature samples. 
> You can download this sample as a standalone ZIP file
> [from docs.microsoft.com](https://docs.microsoft.com/samples/microsoft/windows-universal-samples/fullscreenmode/),
> or you can download the entire collection as a single
> [ZIP file](https://github.com/Microsoft/Windows-universal-samples/archive/master.zip), but be 
> sure to unzip everything to access shared dependencies. For more info on working with the ZIP file, 
> the samples collection, and GitHub, see [Get the UWP samples from GitHub](https://aka.ms/ovu2uq). 
> For more samples, see the [Samples portal](https://aka.ms/winsamples) on the Windows Dev Center. 

The sample shows the following techniques:

- Entering and exiting full screen mode.
- Responding to changes in full screen mode.
- Launching in full screen mode.

**Note** Although the sample will compile and run, the level of functionality will depend on which build of Windows you are running and what device you are running it on.

**Note** The Windows universal samples require Visual Studio to build and Windows 10 to execute.
 
To obtain information about Windows 10 development, go to the [Windows Dev Center](http://go.microsoft.com/fwlink/?LinkID=532421)

To obtain information about Microsoft Visual Studio and the tools for developing Windows apps, go to [Visual Studio](http://go.microsoft.com/fwlink/?LinkID=532422)

## Related topics

### Reference

[ApplicationView class](https://msdn.microsoft.com/library/windows/apps/windows.ui.viewmanagement.applicationview.aspx)  

### Related samples

* [FullScreenMode sample](/archived/FullScreenMode/) for JavaScript (archived)

## System requirements

* Windows 10

## Build the sample

1. If you download the samples ZIP, be sure to unzip the entire archive, not just the folder with the sample you want to build. 
2. Start Microsoft Visual Studio and select **File** \> **Open** \> **Project/Solution**.
3. Starting in the folder where you unzipped the samples, go to the Samples subfolder, then the subfolder for this specific sample, then the subfolder for your preferred language (C++, C#, or JavaScript). Double-click the Visual Studio Solution (.sln) file.
4. Press Ctrl+Shift+B, or select **Build** \> **Build Solution**.

## Run the sample

The next steps depend on whether you just want to deploy the sample or you want to both deploy and run it.

### Deploying the sample

- Select Build > Deploy Solution. 

### Deploying and running the sample

- To debug the sample and then run it, press F5 or select Debug >  Start Debugging. To run the sample without debugging, press Ctrl+F5 or select Debug > Start Without Debugging. 
