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

/*int temp[1000000];
double temp2[1000000];
int search[100000];
int key;*/
int arr[114514];
int search(int a[], int l, int r, int key)
{
	if(l>r) return -1;
	int m=(l+(r-l)/2);
	if(a[m]==key) return m;
	else if(a[m]>key){
		return search(a[],l,m-1,key);
	}
	
	return 0;
}

int main()
{
	
	return 0;
}
