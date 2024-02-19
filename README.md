# RikeXdiskShell
This is a simple simulation terminal that I learned about Windows window message writing

[中文readme](https://github.com/WhiteFoxLinux/RikeXdiskShell/blob/main/README-cn.md)

This project has some bugs, but I don't really want to fix them. After testing the SendCloseGen function, it can be used to combat programs without drivers and hooks.

# Some explanations
You can refer to this project, but please do not use it for closing antivirus software or similar purposes. You can also refer to the code yourself to learn Windows window messages.

# The following is the demonstration interface
![image](https://github.com/WhiteFoxLinux/RikeXdiskShell/blob/main/Resources%20you%20don't%20need./1.png)
```cpp
RikeXdisk@System>>>help
```

You can obtain the software

`help--`
* 你可以使用SendCloseGen命令使用句柄来关闭窗口，具有驱动保护的软件以及进行消息hook的软件可能无效。
* 你可以使用SendGen来发送自定义消息

![image](https://github.com/WhiteFoxLinux/RikeXdiskShell/blob/main/Resources%20you%20don't%20need./2.png)
