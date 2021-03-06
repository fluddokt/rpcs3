#pragma once

enum
{
	CELL_SYSUTIL_ERROR_TYPE   = 0x8002b101,
	CELL_SYSUTIL_ERROR_VALUE  = 0x8002b102,
	CELL_SYSUTIL_ERROR_SIZE   = 0x8002b103,
	CELL_SYSUTIL_ERROR_NUM    = 0x8002b104,
	CELL_SYSUTIL_ERROR_BUSY   = 0x8002b105,
	CELL_SYSUTIL_ERROR_STATUS = 0x8002b106,
	CELL_SYSUTIL_ERROR_MEMORY = 0x8002b107,
};

// Parameter IDs
enum
{
	// Integers
	CELL_SYSUTIL_SYSTEMPARAM_ID_LANG                            = 0x0111,
	CELL_SYSUTIL_SYSTEMPARAM_ID_ENTER_BUTTON_ASSIGN             = 0x0112,
	CELL_SYSUTIL_SYSTEMPARAM_ID_DATE_FORMAT                     = 0x0114,
	CELL_SYSUTIL_SYSTEMPARAM_ID_TIME_FORMAT                     = 0x0115,
	CELL_SYSUTIL_SYSTEMPARAM_ID_TIMEZONE                        = 0x0116,
	CELL_SYSUTIL_SYSTEMPARAM_ID_SUMMERTIME                      = 0x0117,
	CELL_SYSUTIL_SYSTEMPARAM_ID_GAME_PARENTAL_LEVEL             = 0x0121,
	CELL_SYSUTIL_SYSTEMPARAM_ID_GAME_PARENTAL_LEVEL0_RESTRICT   = 0x0123,
	CELL_SYSUTIL_SYSTEMPARAM_ID_CURRENT_USER_HAS_NP_ACCOUNT     = 0x0141,
	CELL_SYSUTIL_SYSTEMPARAM_ID_CAMERA_PLFREQ                   = 0x0151,
	CELL_SYSUTIL_SYSTEMPARAM_ID_PAD_RUMBLE                      = 0x0152,
	CELL_SYSUTIL_SYSTEMPARAM_ID_KEYBOARD_TYPE                   = 0x0153,
	CELL_SYSUTIL_SYSTEMPARAM_ID_JAPANESE_KEYBOARD_ENTRY_METHOD  = 0x0154,
	CELL_SYSUTIL_SYSTEMPARAM_ID_CHINESE_KEYBOARD_ENTRY_METHOD   = 0x0155,
	CELL_SYSUTIL_SYSTEMPARAM_ID_PAD_AUTOOFF                     = 0x0156,

	// Strings
	CELL_SYSUTIL_SYSTEMPARAM_ID_NICKNAME                        = 0x113,
	CELL_SYSUTIL_SYSTEMPARAM_ID_CURRENT_USERNAME                = 0x131,
};

enum
{
	CELL_SYSUTIL_LANG_JAPANESE       = 0,
	CELL_SYSUTIL_LANG_ENGLISH_US     = 1,
	CELL_SYSUTIL_LANG_FRENCH         = 2,
	CELL_SYSUTIL_LANG_SPANISH        = 3,
	CELL_SYSUTIL_LANG_GERMAN         = 4,
	CELL_SYSUTIL_LANG_ITALIAN        = 5,
	CELL_SYSUTIL_LANG_DUTCH          = 6,
	CELL_SYSUTIL_LANG_PORTUGUESE_PT  = 7,
	CELL_SYSUTIL_LANG_RUSSIAN        = 8,
	CELL_SYSUTIL_LANG_KOREAN         = 9,
	CELL_SYSUTIL_LANG_CHINESE_T      = 10,
	CELL_SYSUTIL_LANG_CHINESE_S      = 11,
	CELL_SYSUTIL_LANG_FINNISH        = 12,
	CELL_SYSUTIL_LANG_SWEDISH        = 13,
	CELL_SYSUTIL_LANG_DANISH         = 14,
	CELL_SYSUTIL_LANG_NORWEGIAN      = 15,
	CELL_SYSUTIL_LANG_POLISH         = 16,
	CELL_SYSUTIL_LANG_PORTUGUESE_BR  = 17,
	CELL_SYSUTIL_LANG_ENGLISH_GB     = 18,
};

enum
{
	CELL_SYSUTIL_ENTER_BUTTON_ASSIGN_CIRCLE = 0,
	CELL_SYSUTIL_ENTER_BUTTON_ASSIGN_CROSS  = 1,
};

enum
{
	CELL_SYSUTIL_DATE_FMT_YYYYMMDD = 0,
	CELL_SYSUTIL_DATE_FMT_DDMMYYYY = 1,
	CELL_SYSUTIL_DATE_FMT_MMDDYYYY = 2,
};

enum
{
	CELL_SYSUTIL_TIME_FMT_CLOCK12 = 0,
	CELL_SYSUTIL_TIME_FMT_CLOCK24 = 1,
};

enum
{
	CELL_SYSUTIL_GAME_PARENTAL_OFF      = 0,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL01  = 1,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL02  = 2,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL03  = 3,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL04  = 4,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL05  = 5,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL06  = 6,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL07  = 7,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL08  = 8,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL09  = 9,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL10  = 10,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL11  = 11,
};

enum
{
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL0_RESTRICT_OFF  = 0,
	CELL_SYSUTIL_GAME_PARENTAL_LEVEL0_RESTRICT_ON   = 1,
};

enum
{
	CELL_SYSUTIL_CAMERA_PLFREQ_DISABLED       = 0,
	CELL_SYSUTIL_CAMERA_PLFREQ_50HZ           = 1,
	CELL_SYSUTIL_CAMERA_PLFREQ_60HZ           = 2,
	CELL_SYSUTIL_CAMERA_PLFREQ_DEVCIE_DEPEND  = 4,
};

enum
{
	CELL_SYSUTIL_PAD_RUMBLE_OFF  = 0,
	CELL_SYSUTIL_PAD_RUMBLE_ON   = 1,
};

enum
{
	CELL_SYSCACHE_RET_OK_CLEARED      = 0,
	CELL_SYSCACHE_RET_OK_RELAYED      = 1, 

	CELL_SYSCACHE_ID_SIZE             = 32,	
	CELL_SYSCACHE_PATH_MAX            = 1055,

	CELL_SYSCACHE_ERROR_ACCESS_ERROR  = 0x8002bc01, // I don't think we need this
	CELL_SYSCACHE_ERROR_INTERNAL      = 0x8002bc02, // Not really useful, if we run out of HDD space sys_fs should handle that

	CELL_SYSCACHE_ERROR_PARAM         = 0x8002bc03,
	CELL_SYSCACHE_ERROR_NOTMOUNTED    = 0x8002bc04, // We don't really need to simulate the mounting, so this is probably useless
};

// cellSysutil: cellHddGame
enum
{
	// Return Codes
	CELL_HDDGAME_RET_CANCEL            = 1,
	CELL_HDDGAME_ERROR_CBRESULT        = 0x8002ba01,
	CELL_HDDGAME_ERROR_ACCESS_ERROR    = 0x8002ba02,
	CELL_HDDGAME_ERROR_INTERNAL        = 0x8002ba03,
	CELL_HDDGAME_ERROR_PARAM           = 0x8002ba04,
	CELL_HDDGAME_ERROR_NOSPACE         = 0x8002ba05,
	CELL_HDDGAME_ERROR_BROKEN          = 0x8002ba06,
	CELL_HDDGAME_ERROR_FAILURE         = 0x8002ba07,

	// Callback Result
	CELL_HDDGAME_CBRESULT_OK_CANCEL    = 1,
	CELL_HDDGAME_CBRESULT_OK           = 0,
	CELL_HDDGAME_CBRESULT_ERR_NOSPACE  = -1,
	CELL_HDDGAME_CBRESULT_ERR_BROKEN   = -3,
	CELL_HDDGAME_CBRESULT_ERR_NODATA   = -4,
	CELL_HDDGAME_CBRESULT_ERR_INVALID  = -5,

	// Character Strings
	CELL_HDDGAME_INVALIDMSG_MAX        = 256,
	CELL_HDDGAME_PATH_MAX              = 1055,
	CELL_HDDGAME_SYSP_TITLE_SIZE       = 128,
	CELL_HDDGAME_SYSP_TITLEID_SIZE     = 10,
	CELL_HDDGAME_SYSP_VERSION_SIZE     = 6,
	CELL_HDDGAME_SYSP_SYSTEMVER_SIZE   = 8,

	// HDD Directory exists
	CELL_HDDGAME_ISNEWDATA_EXIST       = 0,
	CELL_HDDGAME_ISNEWDATA_NODIR       = 1,

	// Languages
	CELL_HDDGAME_SYSP_LANGUAGE_NUM     = 20,

	// Stat Get
	CELL_HDDGAME_SIZEKB_NOTCALC        = -1,
};

struct CellHddGameSystemFileParam
{
	char title[CELL_HDDGAME_SYSP_TITLE_SIZE];
	char titleLang[CELL_HDDGAME_SYSP_LANGUAGE_NUM][CELL_HDDGAME_SYSP_TITLE_SIZE];
	char titleId[CELL_HDDGAME_SYSP_TITLEID_SIZE];
	u8 reserved0[2];
	char dataVersion[CELL_HDDGAME_SYSP_VERSION_SIZE];
	u8 reserved1[2];
	be_t<u32> attribute;
	be_t<u32> parentalLevel;
	be_t<u32> resolution;
	be_t<u32> soundFormat;
	u8 reserved2[256];
};

struct CellHddGameStatGet
{
	be_t<s32> hddFreeSizeKB;
	be_t<u32> isNewData;
	u8 contentInfoPath[CELL_HDDGAME_PATH_MAX];
	u8 hddGamePath[CELL_HDDGAME_PATH_MAX];
	u8 reserved0[2];
	be_t<u64> st_atime__;
	be_t<u64> st_mtime__;
	be_t<u64> st_ctime__;
	CellHddGameSystemFileParam getParam;
	be_t<s32> sizeKB;
	be_t<s32> sysSizeKB;
	u8 reserved1[68];
};

struct CellHddGameStatSet
{
	vm::bptr<CellHddGameSystemFileParam> setParam;
	be_t<u32> reserved_addr;  // void*
};

struct CellHddGameCBResult
{
	be_t<u32> result;
	be_t<s32> errNeedSizeKB;
	be_t<u32> invalidMsg_addr;  // char*
	be_t<u32> reserved_addr;  // void*
};

typedef s32 CellWebBrowserId;
typedef void* CellWebBrowserClientSession;
typedef void(*CellWebBrowserCallback)(s32 cb_type, vm::ptr<CellWebBrowserClientSession>, vm::ptr<void> usrdata);
typedef void(*CellWebComponentCallback)(CellWebBrowserId, s32 cb_type, vm::ptr<CellWebBrowserClientSession>, vm::ptr<void> usrdata);
typedef void(*CellWebBrowserSystemCallback)(s32 cb_type, vm::ptr<void> usrdata);

typedef void(*CellWebBrowserMIMETypeCallback)(vm::ptr<const char> mimetype, vm::ptr<const char> url, vm::ptr<void> usrdata);
typedef void(*CellWebBrowserErrorCallback)(s32 err_type, vm::ptr<void> usrdata);
typedef void(*CellWebBrowserStatusCallback)(s32 err_type, vm::ptr<void> usrdata);
typedef void(*CellWebBrowserNotify)(vm::ptr<const char> message, vm::ptr<void> usrdata);
typedef void(*CellWebBrowserUsrdata)(vm::ptr<void> usrdata);

struct CellWebBrowserMimeSet
{
	vm::bptr<const char> const type;
	vm::bptr<const char> const directory;
};

struct CellWebBrowserPos
{
	be_t<s32> x;
	be_t<s32> y;
};

struct CellWebBrowserSize
{
	be_t<s32> width;
	be_t<s32> height;
};

struct CellWebBrowserRect
{
	CellWebBrowserPos pos;
	CellWebBrowserSize size;
};

struct CellWebBrowserConfig
{
	be_t<s32> version;
	be_t<s32> heap_size;
	vm::bptr<const CellWebBrowserMimeSet> mimesets;
	be_t<s32> mimeset_num;
	be_t<s32> functions;
	be_t<s32> tab_count;
	vm::bptr<CellWebBrowserCallback> exit_cb;
	vm::bptr<CellWebBrowserCallback> download_cb;
	vm::bptr<CellWebBrowserCallback> navigated_cb;
};

struct CellWebBrowserConfig2
{
	be_t<s32> version;
	be_t<s32> heap_size;
	be_t<s32> functions;
	be_t<s32> tab_count;
	be_t<s32> size_mode;
	be_t<s32> view_restriction;
	vm::bptr<CellWebBrowserMIMETypeCallback> unknown_mimetype_cb;
	vm::bptr<CellWebBrowserErrorCallback> error_cb;
	vm::bptr<CellWebBrowserStatusCallback> status_error_cb;
	vm::bptr<CellWebBrowserNotify> notify_cb;
	vm::bptr<CellWebBrowserCallback> request_cb;
	CellWebBrowserRect rect;
	be_t<float> resolution_factor;
	be_t<s32> magic_number_;
};

