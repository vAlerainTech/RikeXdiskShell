#include<windows.h>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include<bits/stdc++.h>
#include <ShlObj.h>
#include <tchar.h>
#define about OBS-Stikh-System

using namespace std;

/*
  ___  ____ ____       ____  _   _ _    _          ____            _        
 / _ \| __ ) ___|     / ___|| |_(_) | _| |__      / ___| _   _ ___| |_ ___  _ __ ___  
| | | |  _ \___ \ ____\___ \| __| | |/ / '_ \ ____\___ \| | | / __| __/ _ \| '_ ` _ \ 
| |_| | |_) |__) |_____|__) | |_| |   <| | | |_____|__) | |_| \__ \ ||  __/| | | | | |
 \___/|____/____/     |____/ \__|_|_|\_\_| |_|    |____/ \__, |___/\__\___||_| |_| |_|
                                                         |___/             
           
*/

void COLOR_PRINT(const char* s, int color)
{
 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
 printf(s);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
/*0 = 黑色 8 = 灰色
1 = 蓝色 9 = 淡蓝色
2 = 绿色 10 = 淡绿色
3 = 浅绿色 11 = 淡浅绿色
4 = 红色 12 = 淡红色
5 = 紫色 13 = 淡紫色
6 = 黄色 14 = 淡黄色
7 = 白色 15 = 亮白色*/

bool initialization()
{
	COLOR_PRINT("  ___  ____ ____       ____  _   _ _    _          ____            _        \n",1);
	COLOR_PRINT(" / _ \| __ ) ___|     / ___|| |_(_) | _| |__      / ___| _   _ ___| |_ ___  _ __ ___  \n",1);
	COLOR_PRINT("| | | |  _ \___ \ ____\___ \| __| | |/ / '_ \ ____\___ \| | | / __| __/ _ \| '_ ` _ \ \n",1);
	COLOR_PRINT("| |_| | |_) |__) |_____|__) | |_| |   <| | | |_____|__) | |_| \__ \ ||  __/| | | | | |\n",1);
	COLOR_PRINT(" \___/|____/____/     |____/ \__|_|_|\_\_| |_|    |____/ \__, |___/\__\___||_| |_| |_|\n",1);
	COLOR_PRINT("                                                         |___/             \n",1);
	COLOR_PRINT("\n ____  _          _ _  \n",4);
	COLOR_PRINT("/ ___|| |__   ___| | | \n",4);
	COLOR_PRINT("\___ \| '_ \ / _ \ | | \n",4);
	COLOR_PRINT(" ___) | | | |  __/ | | \n",4);
	COLOR_PRINT("|____/|_| |_|\___|_|_| \n",4);
	COLOR_PRINT("[*]正在加载 ",7);
	return true;
}

/* 
 ____  _          _ _ 
/ ___|| |__   ___| | |
\___ \| '_ \ / _ \ | |
 ___) | | | |  __/ | |
|____/|_| |_|\___|_|_|
                      
                */

HWND temp1 = GetForegroundWindow();
HWND temp2;
HWND temp3;
HWND temp4;

int hwnd_to_int(HWND hwnd)
{
	return reinterpret_cast<intptr_t>(hwnd);
}

#define WM_MY_CUSTOM_MESSAGE WM_APP + 1

void Output_input_parsing()
{
    string input;
    COLOR_PRINT("RikeXdisk@System>>>", 2);
    cin >> input;
    cin.ignore(); // 清除输入流中的换行符

    if (input == "SendCloseGen")
    {
        int tempGen;
        cout << "输入所发送关闭窗口的句柄：";
        cin >> tempGen;
        HWND temp__ = reinterpret_cast<HWND>(static_cast<long>(tempGen));

        SendMessage(temp__, WM_CLOSE, 0, 0);

        cout << "发送成功！";
    }
    else if (input == "SendGen")
    {
        string message;
        cout << "请输入要发送的消息：";
        cin.ignore(); // 清除输入流中的换行符
        getline(cin, message);
        int tempGen;
        cout << "输入所发送关闭窗口的句柄：";
        cin >> tempGen;
        // 向窗口发送消息
        HWND hwnd = reinterpret_cast<HWND>(static_cast<long>(tempGen));
        if (hwnd)
        {
            // 将输入的字符串转换成 LPCSTR 类型
            LPCSTR messageStr = message.c_str();

            // 发送自定义消息到窗口
            SendMessage(hwnd, WM_MY_CUSTOM_MESSAGE, 0, (LPARAM)messageStr);

            cout << "消息发送成功！\n" << endl;
        }
        else
        {
            cout << "未找到相应窗口！\n" << endl;
        }
    }
    else if (input == "help")
    {
        cout << "help--\n你可以使用SendCloseGen命令使用句柄来关闭窗口，具有驱动保护的软件以及进行消息hook的软件可能无效。\n你可以使用SendGen来发送自定义消息\n";
    }
}

int main() 
{
	initialization();
	string temp_str = to_string(hwnd_to_int(temp1));
	cout<<"目前鼠标所在窗口句柄"<<temp_str<<endl;
	while(true){
		Output_input_parsing();
		//TODO
	}
	
	return 0;
}
