#ifndef _PKT_DEFINE_H
#define _PKT_DEFINE_H

//////////////////////////////////////////////////////////////////////////////////////
// USER Packet Define
//////////////////////////////////////////////////////////////////////////////////////

#define WIZ_LOGIN				0x01	// Account Login
#define WIZ_NEW_CHAR			0x02	// Create Character DB
#define WIZ_DEL_CHAR			0x03	// Delete Character DB
#define WIZ_SEL_CHAR			0x04	// Select Character
#define WIZ_SEL_NATION			0x05	// Select Nation
#define WIZ_MOVE				0x06	// Move ( 1 Second )
#define WIZ_USER_INOUT			0x07	// User Info Insert, delete
#define WIZ_ATTACK				0x08	// General Attack 
#define WIZ_ROTATE				0x09	// Rotate
#define WIZ_NPC_INOUT			0x0A	// Npc Info Insert, delete
#define WIZ_NPC_MOVE			0x0B	// Npc Move ( 1 Second )
#define WIZ_ALLCHAR_INFO_REQ	0x0C	// Account All Character Info Request
#define WIZ_GAMESTART			0x0D	// Request Other User, Npc Info
#define WIZ_MYINFO				0x0E	// User Detail Data Download
#define WIZ_LOGOUT				0x0F	// Request Logout
#define WIZ_CHAT				0x10	// User Chatting..
#define WIZ_DEAD				0x11	// User Dead
#define WIZ_REGENE				0x12	// User	Regeneration
#define WIZ_TIME				0x13	// Game Timer
#define WIZ_WEATHER				0x14	// Game Weather
#define WIZ_REGIONCHANGE		0x15	// Region UserInfo Receive
#define WIZ_REQ_USERIN			0x16	// Client Request UnRegistered User List
#define WIZ_HP_CHANGE			0x17	// Current HP Download
#define WIZ_MSP_CHANGE			0x18	// Current MP Download
#define WIZ_ITEM_LOG			0x19	// Send To Agent for Writing Log
#define WIZ_EXP_CHANGE			0x1A	// Current EXP Download
#define WIZ_LEVEL_CHANGE		0x1B	// Max HP, MP, SP, Weight, Exp Download
#define WIZ_NPC_REGION			0x1C	// Npc Region Change Receive
#define WIZ_REQ_NPCIN			0x1D	// Client Request UnRegistered NPC List
#define WIZ_WARP				0x1E	// User Remote Warp
#define WIZ_ITEM_MOVE			0x1F	// User Item Move
#define WIZ_NPC_EVENT			0x20	// User Click Npc Event
#define WIZ_ITEM_TRADE			0x21	// Item Trade 
#define WIZ_TARGET_HP			0x22	// Attack Result Target HP 
#define WIZ_ITEM_DROP			0x23	// Zone Item Insert
#define WIZ_BUNDLE_OPEN_REQ		0x24	// Zone Item list Request
#define WIZ_TRADE_NPC			0x25	// ITEM Trade start
#define WIZ_ITEM_GET			0x26	// Zone Item Get
#define WIZ_ZONE_CHANGE			0x27	// Zone Change
#define WIZ_POINT_CHANGE		0x28	// Str, Sta, dex, intel, cha, point up down
#define WIZ_STATE_CHANGE		0x29	// User Sitdown or Stand
#define WIZ_LOYALTY_CHANGE		0x2A	// Nation Contribution
#define WIZ_VERSION_CHECK		0x2B	// Client version check 
#define WIZ_CRYPTION			0x2C	// Cryption
#define WIZ_USERLOOK_CHANGE		0x2D	// User Slot Item Resource Change
#define WIZ_NOTICE				0x2E	// Update Notice Alarm 
#define WIZ_PARTY				0x2F	// Party Related Packet
#define WIZ_EXCHANGE			0x30	// Exchange Related Packet
#define WIZ_MAGIC_PROCESS		0x31	// Magic Related Packet
#define WIZ_SKILLPT_CHANGE		0x32	// User changed particular skill point
#define WIZ_OBJECT_EVENT		0x33	// Map Object Event Occur ( ex : Bind Point Setting )
#define WIZ_CLASS_CHANGE		0x34	// 10 level over can change class 
#define WIZ_CHAT_TARGET			0x35	// Select Private Chanting User
#define WIZ_CONCURRENTUSER		0x36	// Current Game User Count
#define WIZ_DATASAVE			0x37	// User GameData DB Save Request
#define WIZ_DURATION			0x38	// Item Durability Change
#define WIZ_TIMENOTIFY			0x39	// Time Adaption Magic Time Notify Packet ( 2 Seconds )
#define WIZ_REPAIR_NPC			0x3A	// Item Trade, Upgrade and Repair
#define WIZ_ITEM_REPAIR			0x3B	// Item Repair Processing
#define WIZ_KNIGHTS_PROCESS		0x3C	// Knights Related Packet..
#define WIZ_ITEM_COUNT_CHANGE   0x3D    // Item cout change.  
#define WIZ_KNIGHTS_LIST		0x3E	// All Knights List Info download
#define WIZ_ITEM_REMOVE			0x3F	// Item Remove from inventory
#define WIZ_OPERATOR			0x40	// Operator Authority Packet
#define WIZ_SPEEDHACK_CHECK		0x41	// Speed Hack Using Check
#define WIZ_COMPRESS_PACKET		0x42	// Data Compressing Packet
#define WIZ_SERVER_CHECK		0x43	// Server Status Check Packet
#define WIZ_CONTINOUS_PACKET	0x44	// Region Data Packet 
#define WIZ_WAREHOUSE			0x45	// Warehouse Open, In, Out
#define WIZ_SERVER_CHANGE		0x46	// When you change the server
#define WIZ_REPORT_BUG			0x47	// Report Bug to the manager
#define WIZ_HOME				0x48    // 'Come back home' by Seo Taeji & Boys
#define WIZ_FRIEND_PROCESS		0x49	// Get the status of your friend
#define WIZ_GOLD_CHANGE			0x4A	// When you get the gold of your enemy.
#define WIZ_WARP_LIST			0x4B	// Warp List by NPC or Object
#define WIZ_VIRTUAL_SERVER		0x4C	// Battle zone Server Info packet	(IP, Port)
#define WIZ_ZONE_CONCURRENT		0x4D	// Battle zone concurrent users request packet
#define WIZ_CORPSE				0x4e	// To have your corpse have an ID on top of it.
#define WIZ_PARTY_BBS			0x4f	// For the party wanted bulletin board service..
#define WIZ_MARKET_BBS			0x50	// For the market bulletin board service...
#define WIZ_KICKOUT				0x51	// Account ID forbid duplicate connection
#define WIZ_CLIENT_EVENT		0x52	// Client Event (for quest)
#define I_DONT_KNOW				0x53	// 클라이언트에서 무슨 에코로 쓰고 있데요.
#define WIZ_WEIGHT_CHANGE		0x54	// Notify change of weight
#define WIZ_SELECT_MSG			0x55	// Select Event Message...
#define WIZ_NPC_SAY				0x56	// Select Event Message...
#define WIZ_BATTLE_EVENT		0x57	// Battle Event Result
#define WIZ_AUTHORITY_CHANGE	0x58	// Authority change 
#define WIZ_EDIT_BOX			0x59	// Activate/Receive info from Input_Box.
#define WIZ_SANTA				0x5A	// Activate motherfucking Santa Claus!!! :(

#define WIZ_ITEM_UPGRADE		0x5B
#define WIZ_ZONEABILITY			0x5E	
#define WIZ_EVENT				0x5F
#define WIZ_ROOM_PACKETPROCESS	0x61 // room system
#define WIZ_ROOM				0x62
#define WIZ_QUEST				0x64
#define WIZ_RECOMMEND_USER		0x67
#define WIZ_MERCHANT			0x68
#define WIZ_MERCHANT_INOUT		0x69
#define WIZ_SHOPPING_MALL		0x6A
#define WIZ_SERVER_INDEX		0x6B
#define WIZ_EFFECT				0x6C
#define WIZ_SIEGE				0x6D
#define WIZ_NAME_CHANGE			0x6E
#define WIZ_WEBPAGE				0x6F
#define WIZ_CAPE				0x70
#define WIZ_PREMIUM				0x71
#define WIZ_HACKTOOL			0x72
#define WIZ_RENTAL				0x73
#define WIZ_CHALLENGE			0x75
#define WIZ_PET					0x76
#define WIZ_CHINA				0x77 // we shouldn't need to worry about this
#define WIZ_KING				0x78
#define WIZ_SKILLDATA			0x79
#define WIZ_PROGRAMCHECK		0x7A
#define WIZ_BIFROST				0x7B
#define WIZ_REPORT				0x7C
#define WIZ_LOGOSSHOUT			0x7D
#define WIZ_RANK				0x80
#define WIZ_STORY				0x81
#define WIZ_MINING				0x86
#define WIZ_HELMET				0x87
#define WIZ_RONARK_HELMET		0x88
#define WIZ_CHANGE_HAIR			0x89 // Changes hair colour/facial features at character selection
#define WIZ_DEATH_LIST			0x90
#define WIZ_CLANPOINTS_BATTLE	0x91 // not sure

#define WIZ_TEST_PACKET			0xff	// Test packet
////////////////////////////////////////////////////////////////
// chat define
////////////////////////////////////////////////////////////////
#define GENERAL_CHAT					0x01
#define PRIVATE_CHAT					0x02
#define PARTY_CHAT						0x03
#define FORCE_CHAT						0x04
#define SHOUT_CHAT						0x05
#define KNIGHTS_CHAT					0x06
#define PUBLIC_CHAT						0x07
#define WAR_SYSTEM_CHAT					0x08
#define PERMANENT_CHAT					0x09
#define END_PERMANENT_CHAT				0x0A
#define REPEAT_CHAT						0x0B
#define END_REPEAT_CHAT					0x0C
#define COMMAND_CHAT					0x0D

////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// weather define
////////////////////////////////////////////////////////////////
#define WEATHER_FINE			0x01
#define WEATHER_RAIN			0x02
#define WEATHER_SNOW			0x03
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Party Related subpacket define
////////////////////////////////////////////////////////////////
#define PARTY_CREATE			0x01	// Party Group Create
#define PARTY_PERMIT			0x02	// Party Insert Permit
#define PARTY_INSERT			0x03	// Party Member Insert
#define PARTY_REMOVE			0x04	// Party Member Remove
#define PARTY_DELETE			0x05	// Party Group Delete
#define PARTY_HPCHANGE			0x06	// Party Member HP change
#define PARTY_LEVELCHANGE		0x07	// Party Member Level change
#define PARTY_CLASSCHANGE		0x08	// Party Member Class Change
#define PARTY_STATUSCHANGE		0x09	// Party Member Status ( disaster, poison ) Change
#define PARTY_REGISTER			0x0A	// Party Message Board Register
#define PARTY_REPORT			0x0B	// Party Request Message Board Messages

////////////////////////////////////////////////////////////////
// Exchange Related subpacket define
////////////////////////////////////////////////////////////////
#define EXCHANGE_REQ			0x01
#define EXCHANGE_AGREE			0x02
#define EXCHANGE_ADD			0x03
#define EXCHANGE_OTHERADD		0x04
#define EXCHANGE_DECIDE			0x05
#define EXCHANGE_OTHERDECIDE	0x06
#define EXCHANGE_DONE			0x07
#define EXCHANGE_CANCEL			0x08

////////////////////////////////////////////////////////////////
// Magic Packet sub define 
////////////////////////////////////////////////////////////////
#define MAGIC_CASTING			0x01
#define MAGIC_FLYING			0x02
#define MAGIC_EFFECTING			0x03
#define MAGIC_FAIL				0x04
#define MAGIC_TYPE3_END			0x05	// For type 3 durational spells.
#define MAGIC_TYPE4_END			0x05	// For type 4 durational spells.
#define MAGIC_CANCEL            0x06    // When you wanna cancel your own Type 4.
					
////////////////////////////////////////////////////////////////
// Knights Packet sub define 
////////////////////////////////////////////////////////////////
enum
{
	KNIGHTS_CREATE			= 0x01, // clan creation
	KNIGHTS_JOIN			= 0x02, // joining a clan
	KNIGHTS_WITHDRAW		= 0x03, // leaving a clan
	KNIGHTS_REMOVE			= 0x04,	// removing a clan member
	KNIGHTS_DESTROY			= 0x05, // disbanding a clan
	KNIGHTS_ADMIT			= 0x06,
	KNIGHTS_REJECT			= 0x07,
	KNIGHTS_PUNISH			= 0x08,
	KNIGHTS_CHIEF			= 0x09,
	KNIGHTS_VICECHIEF		= 0x0A,
	KNIGHTS_OFFICER			= 0x0B,
	KNIGHTS_ALLLIST_REQ		= 0x0C,
	KNIGHTS_MEMBER_REQ		= 0x0D,
	KNIGHTS_CURRENT_REQ		= 0x0E,
	KNIGHTS_STASH			= 0x0F,
	KNIGHTS_MODIFY_FAME		= 0x10,
	KNIGHTS_JOIN_REQ		= 0x11,
	KNIGHTS_LIST_REQ		= 0x12,

	KNIGHTS_CAPE_NPC		= 0x1B,
	KNIGHTS_ALLY_CREATE		= 0x1C,
	KNIGHTS_ALLY_REQ		= 0x1D,
	KNIGHTS_ALLY_INSERT		= 0x1E,
	KNIGHTS_ALLY_REMOVE		= 0x1F,
	KNIGHTS_ALLY_PUNISH		= 0x20,
	KNIGHTS_ALLY_LIST		= 0x22,

	KNIGHTS_MARK_REQ		= 0x23,
	KNIGHTS_MARK_REMOVE		= 0x24,
	KNIGHTS_MARK_REGION_REQ	= 0x25,

	KNIGHTS_UPDATE_GRADE	= 0x30,
	KNIGHTS_TOP10			= 0x41
};

////////////////////////////////////////////////////////////////
// Operator Autority Packet define
////////////////////////////////////////////////////////////////
#define OPERATOR_ARREST			0x01
#define OPERATOR_KILL			0x02
#define OPERATOR_NOTCHAT		0x03
#define OPERATOR_CHAT			0x04

////////////////////////////////////////////////////////////////
// WareHouse Packet sub define
////////////////////////////////////////////////////////////////
#define WAREHOUSE_OPEN			0x01
#define WAREHOUSE_INPUT			0x02
#define WAREHOUSE_OUTPUT		0x03
#define WAREHOUSE_MOVE			0x04
#define WAREHOUSE_INVENMOVE		0x05

#define WAREHOUSE_REQ			0x10

////////////////////////////////////////////////////////////////
// Clan Packet sub define
////////////////////////////////////////////////////////////////
#define CLAN_CREATE				0x01
#define CLAN_JOIN				0x02

////////////////////////////////////////////////////////////////
// Class change define
////////////////////////////////////////////////////////////////
#define CLASS_CHANGE_REQ		0x01
#define CLASS_CHANGE_RESULT		0x02
#define ALL_POINT_CHANGE		0x03
#define ALL_SKILLPT_CHANGE		0x04
#define CHANGE_MONEY_REQ		0x05

////////////////////////////////////////////////////////////////
// Friend subpacket define
////////////////////////////////////////////////////////////////
#define FRIEND_REQUEST			0x01
#define FRIEND_ACCEPT			0x02
#define FRIEND_REPORT			0x03
#define FRIEND_CANCEL			0x04

////////////////////////////////////////////////////////////////
// Party BBS subpacket define
////////////////////////////////////////////////////////////////
#define PARTY_BBS_REGISTER		0x01
#define PARTY_BBS_DELETE		0x02
#define PARTY_BBS_NEEDED		0x03
#define PARTY_BBS_WANTED		0x04

////////////////////////////////////////////////////////////////
// Market BBS primary subpacket define
////////////////////////////////////////////////////////////////
#define MARKET_BBS_REGISTER			0x01
#define MARKET_BBS_DELETE			0x02
#define MARKET_BBS_REPORT			0x03
#define MARKET_BBS_OPEN				0x04
#define MARKET_BBS_REMOTE_PURCHASE	0x05
#define MARKET_BBS_MESSAGE			0x06

////////////////////////////////////////////////////////////////
// Market BBS secondary subpacket define
////////////////////////////////////////////////////////////////
#define MARKET_BBS_BUY			0x01
#define MARKET_BBS_SELL			0x02

////////////////////////////////////////////////////////////////
#define WIZ_LOGIN_INFO			0x50	// define for DBAgent Communication
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Server to Server Communication
////////////////////////////////////////////////////////////////
#define STS_CHAT							0xD0
#define UDP_BATTLE_EVENT_PACKET				0xD1
#define UDP_KNIGHTS_PROCESS					0xD2
#define UDP_BATTLEZONE_CURRENT_USERS		0xD3
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Server to DB Agnent Communication
////////////////////////////////////////////////////////////////
#define DB_COUPON_EVENT			0x10	// coupon event
		#define CHECK_COUPON_EVENT		0x01
		#define UPDATE_COUPON_EVENT		0x02
////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////
// Authority change subpacket define
////////////////////////////////////////////////////////////////
#define COMMAND_AUTHORITY			0x01

enum ShoppingMallOpcodes
{
	STORE_OPEN		= 1,
	STORE_CLOSE		= 2,
	STORE_BUY		= 3,
	STORE_MINI		= 4,
	STORE_PROCESS	= 5,
	STORE_LETTER	= 6
};

enum LetterOpcodes
{
	LETTER_UNREAD		= 1,
	LETTER_LIST			= 2,
	LETTER_HISTORY		= 3,
	LETTER_GET_ITEM		= 4,
	LETTER_READ			= 5,
	LETTER_SEND			= 6,
	LETTER_DELETE		= 7,
	LETTER_ITEM_CHECK	= 8 // ???
};

// Skillbar
enum SkillBarOpcodes
{
	SKILL_DATA_SAVE = 1,
	SKILL_DATA_LOAD = 2
	// NOTE: There's a type "4" in 1.298. 
	// This is actually just used from AUJARD, *not* the client (despite mgame allowing them to).
};

#endif