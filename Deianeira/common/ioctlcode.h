////////////////////////////////////////////////
// ioctlcode.h
//
//////////////////////////////////////////////////////////////////////////

//防止重定义
#ifndef _IOCTLCODE_
#define _IOCTLCODE_

#include <WinIoCtl.h>

//驱动名称
#define DEVICE_NAME  L"\\Device\\devDeianeira"
//连接名称
#define LINK_NAME    L"\\??\\Deianeira"

//unknown
#define  OS_UNKNOWN  0x00049

//2000
#define OS_WINDOWS_2000  0x00050
//XP
#define OS_WINDOWS_XP  0x00051
//2003
#define OS_WINDOWS_2003  0x00052

//vista/2008
#define OS_WINDOWS_VISTA_2008  0x00060
//win7/2008 r2
#define OS_WINDOWS_7_2008R2  0x00061



//进程监控事件对象名称
#define MONITOR_EVENT_NAME_PROCESS	  L"\\BaseNamedObjects\\MonitorEventProcess"

//线程监控事件对象名称
#define MONITOR_EVENT_NAME_THREAD	  L"\\BaseNamedObjects\\MonitorEventThread"

//LoadImage监控事件对象名称
#define MONITOR_EVENT_NAME_LOADIMAGE	  L"\\BaseNamedObjects\\MonitorEventLoadImage"

//FILE监控事件对象名称
#define MONITOR_EVENT_NAME_FILE	  L"\\BaseNamedObjects\\MonitorEventFile"

//REG监控事件对象名称
#define MONITOR_EVENT_NAME_REG	  L"\\BaseNamedObjects\\MonitorEventReg"


//ring3应用程序启动时时，叫内核安装相关钩子
#define  IOCTL_APPLOAD CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x07996, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//ring3应用程序退出时，叫内核清理钩子
#define  IOCTL_APPUNLOAD CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x07997, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//ring3启动时传给给内核的系统版本
#define  IOCTL_GETOSVERSION CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x07998, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//ring3启动时传给给内核的本程序进程ID
#define IOCTL_GETPROCESSID   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x07999, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//开启ssdt自我保护
#define IOCTL_SELFPROTECTION_START_SSDT    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x079991, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//停止ssdt自我保护
#define IOCTL_SELFPROTECTION_STOP_SSDT   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x079992, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//开启shadow自我保护
#define IOCTL_SELFPROTECTION_START_SHADOW    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x079993, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//停止shadow自我保护
#define IOCTL_SELFPROTECTION_STOP_SHADOW   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x079994, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//开启所有自我保护
#define IOCTL_SELFPROTECTION_START_ALL    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08000, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//停止所有自我保护
#define IOCTL_SELFPROTECTION_STOP_ALL   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08001, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//得到SSDT函数地址
#define IOCTL_SSDT_GETFUNCADDR    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08017, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//设置SSDT函数地址
#define IOCTL_SSDT_SETFUNCADDR   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080018, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//得到SSDT表指针
#define IOCTL_SSDT_GET  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080019, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//得到Shadow SSDT函数地址
#define IOCTL_SHADOW_GETFUNCADDR    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080020, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//设置Shadow SSDT函数地址
#define IOCTL_SHADOW_SETFUNCADDR   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080021, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//得到Shadow SSDT原始函数地址
#define IOCTL_SHADOW_GETFUNCADDR_ORI    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080022, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//进程隐藏
#define IOCTL_PROCESS_HIDE    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080023, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//进程挂起
#define IOCTL_PROCESS_SUSPEND    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08002301, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//进程恢复
#define IOCTL_PROCESS_RESUME   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08002302, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//进程强制结束
#define IOCTL_PROCESS_KILL    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080024, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//进程结束
#define IOCTL_PROCESS_KILL2    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080025, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//线程结束
#define IOCTL_PROCESS_KILLTHREAD    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080026, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//卸载模块
#define IOCTL_PROCESS_MODULE_UNLOAD    CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080027, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//获得线程基址
#define IOCTL_PROCESS_THREAD_GETBASEADDR   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080028, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//挂起线程
#define IOCTL_PROCESS_THREAD_SUSPEND   CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080029, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//恢复线程
#define IOCTL_PROCESS_THREAD_RESUME  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080030, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//删除文件
#define IOCTL_FILE_DELETE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080033, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//禁止创建进程
#define IOCTL_MONITOR2_PROCESS_DISABLECREATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080034, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//禁止创建进程
#define IOCTL_MONITOR2_PROCESS_DISABLECREATE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003401, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
////从单向链表里面查找PID
#define IOCTL_MONITOR2_PROCESS_DISABLECREATE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003402, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
////从单向链表里面删除PID
#define IOCTL_MONITOR2_PROCESS_DISABLECREATE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003403, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止创建进程
#define IOCTL_MONITOR2_PROCESS_DISABLECREATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080038, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止进程结束
#define IOCTL_MONITOR2_PROCESS_DISABLETERMINATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080044, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//禁止进程结束2
#define IOCTL_MONITOR2_PROCESS_DISABLETERMINATE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004401, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//从单向链表里面查找PID
#define IOCTL_MONITOR2_PROCESS_DISABLETERMINATE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004402, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//从单向链表里面删除PID
#define IOCTL_MONITOR2_PROCESS_DISABLETERMINATE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004403, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止进程结束
#define IOCTL_MONITOR2_PROCESS_DISABLETERMINATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080045, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//禁止结束线程
#define IOCTL_MONITOR2_THREAD_DISABLETERMINATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080046, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//停止禁止结束线程
#define IOCTL_MONITOR2_THREAD_DISABLETERMINATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080047, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止创建线程
#define IOCTL_MONITOR2_THREAD_DISABLECREATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080035, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//停止禁止创建线程
#define IOCTL_MONITOR2_THREAD_DISABLECREATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080039, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//禁止创建文件
#define IOCTL_MONITOR2_FILE_DISABLECREATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080036, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//禁止创建文件2
#define IOCTL_MONITOR2_FILE_DISABLECREATE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003601, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLECREATE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003602, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLECREATE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003603, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止创建文件
#define IOCTL_MONITOR2_FILE_DISABLECREATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080040, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止删除文件
#define IOCTL_MONITOR2_FILE_DISABLEDELETE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080048, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//禁止删除文件2
#define IOCTL_MONITOR2_FILE_DISABLEDELETE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004801, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLEDELETE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004802, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLEDELETE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004803, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止删除文件
#define IOCTL_MONITOR2_FILE_DISABLEDELETE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080049, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止打开文件
#define IOCTL_MONITOR2_FILE_DISABLEOPEN  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080042, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLEOPEN2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004201, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLEOPEN2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004202, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_FILE_DISABLEOPEN2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08004203, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止打开文件
#define IOCTL_MONITOR2_FILE_DISABLEOPEN_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080043, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//禁止创建注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLECREATE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080037, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLECREATE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003701, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLECREATE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003702, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLECREATE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08003703, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止创建注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLECREATE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080041, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//禁止删除注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLEDELETE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080058, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEDELETE2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08005811, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEDELETE2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08005812, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEDELETE2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08005813, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止删除注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLEDELETE_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080059, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止查询注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLEQUERY  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080060, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEQUERY2  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08006001, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEQUERY2_FINDPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08006002, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//
#define IOCTL_MONITOR2_REG_DISABLEQUERY2_DELETEPID  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x08006003, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//停止禁止查询注册表项（键值）
#define IOCTL_MONITOR2_REG_DISABLEQUERY_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080061, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//禁止加载驱动
#define IOCTL_SYSMODULE_DISABLELOADDRIVER  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080062, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
//停止禁止加载驱动
#define IOCTL_SYSMODULE_DISABLELOADDRIVER_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080063, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//获得模块大小
#define IOCTL_SYSMODULE_GETSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080050, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得驱动模块信息
#define IOCTL_SYSMODULE_GETINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080051, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//获得系统回调大小
#define IOCTL_KERNEL_SYSTEMCALLBACK_GETSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080052, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得系统回调信息
#define IOCTL_KERNEL_SYSTEMCALLBACK_GETINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080053, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//删除系统回调
#define IOCTL_KERNEL_SYSTEMCALLBACK_KILL  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080054, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//获得过滤驱动大小
#define IOCTL_KERNEL_FILTERDRIVER_GETSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080055, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得过滤驱动信息
#define IOCTL_KERNEL_FILTERDRIVER_GETINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080056, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//摘除过滤驱动
#define IOCTL_KERNEL_FILTERDRIVER_KILL  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080057, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//反汇编
#define IOCTL_DISASM  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080064, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//开启监控
#define IOCTL_MONITOR_START  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080065, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//停止监控
#define IOCTL_MONITOR_STOP  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080066, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得监控大小
#define IOCTL_MONITOR_GETSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080067, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得监控信息
#define IOCTL_MONITOR_GETINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080068, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得监控过滤信息
#define IOCTL_MONITOR_GETFILTERINFO_PROCESS  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080069, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得监控过滤信息
#define IOCTL_MONITOR_GETFILTERINFO_PATH  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080070, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//释放监控过滤信息内存
#define IOCTL_MONITOR_FREEFILTERINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080071, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得进程句柄信息大小
#define IOCTL_PROCESS_GETHANDLEINFOSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080072, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得进程句柄信息
#define IOCTL_PROCESS_GETHANDLEINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080073, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得文件句柄信息大小
#define IOCTL_FILE_GETHANDLEINFOSIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080074, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//获得文件句柄信息
#define IOCTL_FILE_GETHANDLEINFO  CTL_CODE(FILE_DEVICE_UNKNOWN, \
	0x080075, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//反汇编
typedef struct _DisasmClientID
{
	//内核函数地址
	ULONG ulStartAddress;
	//大小
	ULONG ulSize;
}DISASM_CLIENT_ID,*PDISASM_CLIENT_ID;


//ssdt恢复钩子时要用的结构体
typedef struct _SSDTClientID
{
	ULONG ulIndex;
	ULONG ulAddress;
}SSDT_CLIENT_ID,*PSSDT_CLIENT_ID;

//shadow恢复钩子时要用的结构体
typedef struct _ShadowSSDTClientID
{
	ULONG ulIndex;
	ULONG ulAddress;
}SHADOW_SSDT_CLIENT_ID,*PSHADOW_SSDT_CLIENT_ID;

//kill thread
typedef struct _KillThreadClientID
{
	//进程ID
	ULONG ulPID;
	//线程ID
	ULONG ulTID;
}KILLTHREAD_CLIENT_ID,*PKILLTHREAD_CLIENT_ID;

//卸载dll时，从ring3传递来的参数
typedef struct _UnloadDllClientID
{
	//进程ID
	ULONG ulPID;
	//模块DLL基址
	ULONG ulBaseAddress;
}UNLOADDLL_CLIENT_ID,*PUNLOADDLL_CLIENT_ID;

//系统回调
typedef struct _SystemCallbackCliengtID
{
	ULONG ulEntryAddress;
	ULONG ulFuncAddress;
}SYSTEM_CALLBACK_CLIENT_ID,*PSYSTEM_CALLBACK_CLIENT_ID;


#endif //_IOCTLCODE_