WPF
===

WPF tutorial: http://www.wpf-tutorial.com/about-wpf/

a WPF application
-----------------

### The Window

처음 WPF application을 생성하면 Window classs를 먼저 보게됩니다. 이 class는 window의 root가 되며 표준 border, tile bar, 최대/최소/닫기 버튼을 제공합니다. WPF window는 window element를 가지는 root와 .cs file로 이뤄진 XAML의 결합입니다.

MainWindow.xaml

```xml
<Window x:Class="WpfApplication1.MainWindow"
        xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
        xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
        xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
        xmlns:local="clr-namespace:WpfApplication1"
        mc:Ignorable="d"
        Title="Sample" Height="300" Width="300">
</Window>

```

MainWindow.xaml.cs

```c
using System.Collections.Generic;
using System.Linq;
using System.Text;
/// more using statements...

namespace WpfApplication1
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }
    }
}
```

### 중요한 Window 속성

WPF Window class는 컨트롤을 look을 설정하거나 동작을 정의하는 다양한 attribute를 가집니다.

-	Icon  
	window의 Icon을 정의합니다.
-	ResizeMode  
	사용자가 window를 resize할수있을지를 설정합니다. 기본값은 CanResize입니다.
-	ShowInTaskbar  
	기본값은 true이지만 false로 설정하면 window는 window taskbar에 나타나지 않습니다.
-	SizeToContent  
	내용에 따라 자동으로 window size를 맞출지를 결정합니다. 기본값은 자동으로 사이즈를 바꿀 수 없는 Manual입니다. 다른 option으로는 Width, Height와 WidthAndHeight가 있습니다. 이 가각은 window size를 수직, 수평 또는 수직수평하게 자동적으로 size가 맞춰지게 됩니다.
-	Topmost  
	default값은 false이지만 true로 설정하면 window는 최소화가 되더라도 항상 다른 window의 위에 위치하게 됩니다.
-	WindowStartupLocation  
	window의 포지션을 초기화하는 Control입니다. option으로 Manual(default), CenterOwner, CenterScreen이 있습니다.
-	WindowState  
	window의 상태를 초기화하는 Control 입니다. attribute는 Normal, Maximized, Minimized의 속성값을 가질 수 있습니다. 기본값은 Normal입니다.

이밖에도 다양한 속성이 존재합니다.
