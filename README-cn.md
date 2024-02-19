# RikeXdiskShell

这是一个简单的模拟终端，我了解了Windows窗口消息的编写

这个项目有一些错误，但我真的不想修复它们。在测试了SendCloseGen功能后，它可以用于在没有驱动程序和钩子的情况下对抗程序。

# 一些解释

您可以参考此项目，但请不要将其用于关闭防病毒软件或类似目的。您也可以自己参考代码来学习Windows窗口消息。

#以下是演示界面

![image](https://github.com/WhiteFoxLinux/RikeXdiskShell/blob/main/Resources%20you%20don't%20need./1.png)

```cpp

RikeXdisk@System>>>help

```

您可以获得该软件的帮助

帮助

* 你可以使用SendCloseGen命令使用句柄来关闭窗口，具有驱动保护的软件以及进行消息钩的软件可能无效。

* 你可以使用SendGen来发送自定义消息

![image](https://github.com/WhiteFoxLinux/RikeXdiskShell/blob/main/Resources%20you%20don't%20need./2.png)
