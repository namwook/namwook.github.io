WPF
===

WPF tutorial: http://www.wpf-tutorial.com/about-wpf/

Getting Started
---------------

-	WPF 코드 예시  

```xml
<Window x:Class="WpfApplication1.MainWindow"
        xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
        xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
        xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
        xmlns:local="clr-namespace:WpfApplication1"
        mc:Ignorable="d"
        Title="MainWindow" Height="350" Width="525">
    <Grid>

    </Grid>
</Window>
```

XAML
----

### XAML이란?

XAML(eXtensible Application Markup Language)은 GUI를 나타내기위한 Microsoft의 변형된 XML입니다. 이전의 WinForms같은 GUI 프레임워크의 gui는 같은 언어로 생성되고 보통 디자이너가 유지해왔지만 XAML은 다른 방법을 사용합니다. html과 같이 GUI를 쉽게 쓰고 편집할 수 있습니다.

### Basic XAML

-	Button을 나타내는 여러가지 방법

```xml
  <Button>A button</Button>
```

```xml
  <Button FontWeight="Bold" Content="A button"></Button>
```

```xml
  <Button>
      <Button.FontWeight>Bold</Button.FontWeight>
      <Button.Content>
          <WrapPanel>
              <TextBlock Foreground="Blue">Multi</TextBlock>
              <TextBlock Foreground="Red">Color</TextBlock>
              <TextBlock>Button</TextBlock>
          </WrapPanel>
      </Button.Content>
  </Button>
```

```xml
  <Button FontWeight="Bold">
      <Button.Content>
          <WrapPanel>
              <TextBlock Foreground="Blue">Multi</TextBlock>
              <TextBlock Foreground="Red">Color</TextBlock>
              <TextBlock>Button</TextBlock>
          </WrapPanel>
      </Button.Content>
  </Button>
```

### Events in XAML

대부분의 현대 UI framework가 event driven 하듯이 WPF도 가능합니다.

```c
<Grid Name="pnlMainGrid" MouseUp="pnlMainGrid_MouseUp" Background="LightBlue"></Grid>
```

Event handler의 이름은 '''<control_name>\_\<event name>''의 형태로 지어집니다. (ex. pnlMainGrid_MouseDown)

#### XAML code에서가 아닌 cs 코드에서 event 구현

pnlMainGrid라는 id를 가진 그리드에 MouseUp event를 등록하기 위해서 MouseButtonEventHandler 객체를 등록합니다.  
MouseButtonEventHandler에 등록된 pnlMainGrid_MouseUp 메소드에서는 MouseUp에 대한 이벤트가 일어났을 때의 동작을 정의합니다.  
예시 코드는 현재 클릭한 지점의 좌표를 보여주는 MessageBox를 띄우는 코드입니다.

```c
public MainWindow()
        {
            InitializeComponent();
            pnlMainGrid.MouseUp += new MouseButtonEventHandler(pnlMainGrid_MouseUp);
        }

        private void pnlMainGrid_MouseUp(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show("you clicked me at " + e.GetPosition(this).ToString());
        }
```
