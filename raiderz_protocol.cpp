C(MC_COMM_REQUEST_ACCOUNT_CHAR_LIST,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Account Char List")
	C(MC_COMM_RESPONSE_ACCOUNT_CHAR_LIST,	MCDT_MACHINE2MACHINE, MCF_S2C, "Response Account Char List")
											P(MPT_BLOB,	"CharInfo")	// Ä³¸¯ÅÍ Á¤º¸

	C(MC_COMM_MOVE_TO_GAME_SERVER,			MCDT_MACHINE2MACHINE, MCF_S2C, "Move to GameServer")
											P(MPT_BLOB,	"LoginGameServerInfo")

	C(MC_COMM_DUPLICATED_PLAYER_LOGIN,		MCDT_MACHINE2MACHINE, MCF_S2C, "Duplicated Player Login")

	C(MC_COMM_START_MOVE_TO_LOGIN_SERVER_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Move To LoginServer")

	C(MC_COMM_START_MOVE_TO_LOGIN_SERVER_RES,	MCDT_MACHINE2MACHINE, MCF_S2C, "Response Move To LoginServer")
												P(MPT_INT,	"nResult")
												P(MPT_UID,	"ConnectionKey")

	C(MC_CHAR_REQUEST_INSERT_CHAR,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Insert Character")
											P(MPT_SINGLE_BLOB,	"TD_INSERT_CHARACTER_INFO")

	C(MC_CHAR_RESPONSE_INSERT_CHAR,			MCDT_MACHINE2MACHINE, MCF_S2C, "Response Insert Character")
											P(MPT_INT,	"nResult")			// °á°ú°ª

	C(MC_CHAR_REQUEST_DELETE_CHAR,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Delete Character")
											P(MPT_CHAR,	"nCharIndex")	// Ä³¸¯ÅÍ ÀÎµ¦½º
	C(MC_CHAR_RESPONSE_DELETE_CHAR,			MCDT_MACHINE2MACHINE, MCF_S2C, "Response Delete Character")
											P(MPT_INT,	"nResult")		// °á°ú°ª
											P(MPT_CHAR, "nCharIndex")	// »èÁ¦ Ä³¸¯ÅÍ ÀÎµ¦½º

	C(MC_CHAR_REQUEST_SEL_MYCHAR,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Sel MyChar")
											P(MPT_INT,	"nCharIndex")	// Ä³¸¯ÅÍ ÀÎµ¦½º

	C(MC_CHAR_RESPONSE_SEL_MYCHAR,			MCDT_MACHINE2MACHINE, MCF_S2C, "Response Sel MyChar")
											P(MPT_INT,	"nResult")		// °á°ú°ª											

	C(MC_CHAR_GAMESTART,					MCDT_MACHINE2MACHINE, MCF_C2S, "Game Start")
											P(MPT_INT,	"nFieldID")		// Ã³À½ ½ÃÀÛÇÏ±â ¿øÇÏ´Â ÇÊµå ID	<- ¼­ºñ½ºµÇ¸é »èÁ¦µÇ¾î¾ß ÇÑ´Ù.
											P(MPT_VEC,	"vPos")			// Ã³À½ ½ÃÀÛÇÏ±â ¿øÇÏ´Â À§Ä¡ <- ¼­ºñ½ºµÇ¸é »èÁ¦µÇ¾î¾ß ÇÑ´Ù.
											
	C(MC_CHAR_MYINFO,						MCDT_MACHINE2MACHINE, MCF_S2C, "My Info")
											P(MPT_SINGLE_BLOB,	"MyInfo")
											P(MPT_BLOB,	"MyInventory")
											P(MPT_BLOB,	"MyEquipment")
											P(MPT_BLOB,	"MyReservedDummySlotInfo")
											P(MPT_BLOB,	"MyTalent")
											P(MPT_BLOB,	"MyQuest")
											P(MPT_BLOB,	"MyPalette")
											P(MPT_BLOB,	"MyFaction")
											P(MPT_BLOB,	"MyRecipe")

	C(MC_CHAR_MYTIMEINFO,					MCDT_MACHINE2MACHINE, MCF_S2C, "My Time Info")
											P(MPT_BLOB,	"MyBuffRemainTime")
											P(MPT_BLOB,	"MyTalentRemainCoolTime")
											P(MPT_FLOAT,"MyAutoRebirthRemainTime")

	C(MC_CHAR_REBIRTH_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Rebirth Req")
											P(MPT_INT,	"nRebirthType")
											

	C(MC_CHAR_REBIRTH_MYPLAYER,				MCDT_MACHINE2MACHINE, MCF_S2C, "Rebirth Char")
											P(MPT_INT,			"nFieldID")
											P(MPT_VEC,			"MyPos")
											P(MPT_SVEC2,		"MyDir")
											P(MPT_SINGLE_BLOB,	"SimpleStatus")


	C(MC_CHAR_REBIRTH_NETPLAYER,			MCDT_MACHINE2MACHINE, MCF_S2C, "Rebirth")
											P(MPT_UID,	"uidEntity")


	C(MC_CHAR_REWARD_EXP,					MCDT_MACHINE2MACHINE, MCF_S2C, "Reward Exp")
											P(MPT_INT,		"RewardExp")
											P(MPT_FLOAT,	"ExpPercent")
											P(MPT_INT,		"PlayerExp")

	C(MC_CHAR_LEVEL_UP,						MCDT_MACHINE2MACHINE, MCF_S2C, "LevelUp")
											P(MPT_UID,		"uidPlayer")
											P(MPT_UCHAR,	"Level")
											P(MPT_USHORT,	"NewHP")
											P(MPT_USHORT,	"NewEN")
											P(MPT_USHORT,	"NewSTA")
											P(MPT_USHORT,	"NewTP")
											P(MPT_USHORT,	"NewStr")
											P(MPT_USHORT,	"NewDex")
											P(MPT_USHORT,	"NewInt")
											P(MPT_USHORT,	"NewChr")
											P(MPT_USHORT,	"NewCon")
											
	C(MC_CHAR_UPDATE_SIMPLE_STATUS,			MCDT_MACHINE2MACHINE, MCF_S2C, "Update Simple Status")
											P(MPT_SINGLE_BLOB,		"SimpleStatus")

	C(MC_CHAR_SAVE_SOULBINDING,				MCDT_MACHINE2MACHINE, MCF_S2C, "SaveSoulBlinding")
											P(MPT_INT,		"nFieldID")

	C(MC_CHAR_SAVE_CHECKPOINT,				MCDT_MACHINE2MACHINE, MCF_S2C, "SaveCheckPoint")
											P(MPT_INT,		"nFieldID")

	C(MC_CHAR_UPDATE_MONEY,					MCDT_MACHINE2MACHINE, MCF_S2C, "Update Money")
											P(MPT_INT,		"nMoney")
	C(MC_CHAR_ENEMY_INFO,					MCDT_MACHINE2MACHINE, MCF_S2C, "Char.EmepyHPInfo")
											P(MPT_BLOB,		"EmepyHPInfo")
	C(MC_CHAR_ENEMY_INFO_CLEAR,				MCDT_MACHINE2MACHINE, MCF_S2C, "Char.EmepyHPInfo")

	C(MC_CHAR_UPDATE_TP,					MCDT_MACHINE2MACHINE, MCF_S2C, "Update TP")
											P(MPT_INT,		"nTP")

	C(MC_CHAR_TIP,							MCDT_MACHINE2MACHINE, MCF_S2C, "TIP")
											P(MPT_WSTR,			"strText")

	C(MC_CHAR_ADD_ENEMYNPC,					MCDT_MACHINE2MACHINE, MCF_S2C, "Add EnemyNPC")
											P(MPT_UID,		"nNPCUID")

	C(MC_CHAR_DEL_ENEMYNPC,					MCDT_MACHINE2MACHINE, MCF_S2C, "Del EnemyNPC")
											P(MPT_UID,		"nNPCUID")	

	C(MC_CHAR_TARGET_INFO_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "TargetInfo Req")
											P(MPT_BLOB,		"vecUIID")

	C(MC_CHAR_TARGET_INFO,					MCDT_MACHINE2MACHINE, MCF_S2C, "TargetInfo")
											P(MPT_BLOB,		"vecTargetInfo")

	C(MC_CHAR_DIE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Die")											

	C(MC_MSG_REQ,							MCDT_MACHINE2MACHINE, MCF_C2S, "Send Msg")
											P(MPT_INT,	"eMsgType")
											P(MPT_WSTR,	"msg")
											P(MPT_BLOB,	"SenderInfo")
											P(MPT_BLOB, "ReceiverInfo")
											P(MPT_INT,	"nAdditional")

	C(MC_MSG_RES,							MCDT_MACHINE2MACHINE, MCF_S2C, "Receive Msg")
											P(MPT_INT,	"eMsgType")
											P(MPT_WSTR,	"msg")
											P(MPT_BLOB,	"SenderInfo")
											P(MPT_BLOB, "ReceiverInfo")
											P(MPT_INT,	"nAdditional")

	C(MC_MSG_CREATE_CHANNEL_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Create Chatting Channel")
											P(MPT_WSTR,	"ChannelName")												

	C(MC_MSG_ENTER_CHANNEL_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Enter Chatting Channel")
											P(MPT_WSTR,	"ChannelName")

	C(MC_MSG_ENTER_CHANNEL,					MCDT_MACHINE2MACHINE, MCF_S2C, "Enter Chatting Channel")
											P(MPT_SINGLE_BLOB,	"TD_CHAT_CHANNEL_INFO")

	C(MC_MSG_LEAVE_CHANNEL_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Leave Chatting Channel")
											P(MPT_UID,	"ChannelUID")

	C(MC_MSG_LEAVE_CHANNEL,					MCDT_MACHINE2MACHINE, MCF_S2C, "Leave Chatting Channel")
											P(MPT_UID,	"ChannelUID")

	C(MC_MSG_KICK_PLAYER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Kick Player")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"TargetPlayerName")

	C(MC_MSG_KICK_PLAYER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Kick Player")
											P(MPT_UID,	"ChannelUID")

	C(MC_MSG_BAN_PLAYER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Ban Player")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"TargetPlayerName")

	C(MC_MSG_BAN_PLAYER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Ban Player")
											P(MPT_UID,	"ChannelUID")									
	
	C(MC_MSG_UNBAN_PLAYER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Unban Player")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"BanedPlayerName")

	C(MC_MSG_UNBAN_PLAYER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Unban Player")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"UnbanedPlayerName")

	C(MC_MSG_CHANGE_HOST_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Change Host")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"TargetPlayerName")

	C(MC_MSG_CHANGE_HOST,					MCDT_MACHINE2MACHINE, MCF_S2C, "Change Host")
											P(MPT_UID,	"ChannelUID")
											P(MPT_WSTR,	"NewHostName")

	C(MC_MSG_ENTER_CHANNEL_PLAYER_INFO,		MCDT_MACHINE2MACHINE, MCF_S2C, "Enter Channel Player Info")
											P(MPT_UID,	"ChatChannelUID");
											P(MPT_WSTR,	"EnterPlayerName");

	C(MC_MSG_LEAVE_CHANNEL_PLAYER_INFO,		MCDT_MACHINE2MACHINE, MCF_S2C, "Leave Channel Player Info")
											P(MPT_UID,	"ChatChannelUID");
											P(MPT_WSTR,	"LeavePlayerName");

	C(MC_MSG_KICK_PLAYER_INFO,				MCDT_MACHINE2MACHINE, MCF_S2C, "Kick Player Info")
											P(MPT_UID,	"ChatChannelUID");
											P(MPT_WSTR,	"KickedPlayerName");

								
											
	C(MC_FIELD_PREPARING_TO_LOAD,			MCDT_MACHINE2MACHINE, MCF_S2C, "Field Preparing To Gate")
											P(MPT_INT,	"DestFieldID")

	C(MC_FIELD_LOADING_COMPLETE,			MCDT_MACHINE2MACHINE, MCF_C2S, "Field Loading Complete")

	C(MC_FIELD_START_GAME,					MCDT_MACHINE2MACHINE, MCF_S2C, "Start Game")

	C(MC_FIELD_CHANGE_FIELD,				MCDT_MACHINE2MACHINE, MCF_S2C, "Change Field")
											P(MPT_INT,	"FieldID")
											P(MPT_INT,	"ChannelID")
											P(MPT_VEC,	"MyPos")
											P(MPT_VEC,	"MyDir")
											P(MPT_INT,	"IntroCutsceneID")

	C(MC_FIELD_PREPARE_CHANGE_CHANNEL_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Prepare Change Channel")
											P(MPT_INT,	"ChannelID")

	C(MC_FIELD_PREPARE_CHANGE_CHANNEL_RES,	MCDT_MACHINE2MACHINE, MCF_S2C, "Response Prepare Change Channel")
											P(MPT_INT,	"nResult")

	C(MC_FIELD_CANCEL_CHANGE_CHANNEL,		MCDT_MACHINE2MACHINE, MCF_C2S, "Cancel Change Channel")
	
	C(MC_FIELD_REQUEST_CHANGE_CHANNEL,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Change Channel")
	
	C(MC_FIELD_REQUEST_CHANNEL_LIST,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Channel List")

	C(MC_FIELD_CHANNEL_LIST,				MCDT_MACHINE2MACHINE, MCF_S2C, "Channel List")
											P(MPT_BLOB,	"ChannelIDs")
											P(MPT_BLOB,	"ChannelStatuses")

	C(MC_FIELD_CANCEL_CHANGE_FIELD,			MCDT_MACHINE2MACHINE, MCF_S2C, "Cancel Change Field")


	C(MC_FIELD_IN_PLAYER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Player Come in")
											P(MPT_SINGLE_BLOB,		"PlayerInfo")	// ÇÃ·¹ÀÌ¾î Á¤º¸
	C(MC_FIELD_OUT_PLAYER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Player Go out")
											P(MPT_USHORT,			"nPlayerUIID")	// ÇÃ·¹ÀÌ¾î UIID
	C(MC_FIELD_IN_NPC,						MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Come in")
											P(MPT_SINGLE_BLOB,		"NPCInfo")	// NPC Á¤º¸
	C(MC_FIELD_OUT_NPC,						MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Go out")
											P(MPT_USHORT,			"nNPCUIID")	// NPC UIID
	C(MC_FIELD_IN_BUFFENTITY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Magicarea Come in")
											P(MPT_SINGLE_BLOB,		"MagicareaInfo")	// NPC Á¤º¸
	C(MC_FIELD_OUT_BUFFENTITY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Magicarea Go out")
											P(MPT_UID,		"uidMagicarea")	// Magicarea UID
	C(MC_FIELD_TRAP_TRIGGERED,				MCDT_MACHINE2MACHINE, MCF_S2C, "Trap Go out")
											P(MPT_UID,		"uidMagicarea")	// Trap UID

	C(MC_FIELD_SECTOR_ENTITY_INFO,			MCDT_MACHINE2MACHINE, MCF_S2C, "Sector Entity Info")
											P(MPT_BLOB,		"PlayerInfo")
											P(MPT_BLOB,		"NPCInfo")
											P(MPT_BLOB,		"BPartInfo")
											P(MPT_BLOB,		"BuffEntityInfo")
											P(MPT_BLOB,		"UseableSensorInfo")
	C(MC_FIELD_SET_TIME,					MCDT_MACHINE2MACHINE, MCF_S2C, "Set Time")
											P(MPT_CHAR,		"nGameTime")	// ½Ã°£´ë
	C(MC_FIELD_SET_WEATHER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Set Weather")
											P(MPT_CHAR,		"nWeatherType")
	C(MC_FIELD_SET_TIME_WEATHER,			MCDT_MACHINE2MACHINE, MCF_S2C, "Set Time and Weather")
											P(MPT_CHAR,		"nTimeType")
											P(MPT_CHAR,		"nWeatherType")
	C(MC_FIELD_WHO_IS_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Who is")
											P(MPT_UID,		"uidObject")
	C(MC_FIELD_WHO_IS_UIID_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Who is")
											P(MPT_USHORT,	"ObjectUIID")

	C(MC_FIELD_PLAYER_EXTRA_INFO_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Extra Player Info")
											P(MPT_UID,		"uidPlayer")
	C(MC_FIELD_IN_BPART,					MCDT_MACHINE2MACHINE, MCF_S2C, "BPart Come in")
											P(MPT_SINGLE_BLOB,		"infoTD")	// NPC Á¤º¸
	C(MC_FIELD_OUT_BPART,					MCDT_MACHINE2MACHINE, MCF_S2C, "BPart Go out")
											P(MPT_USHORT,			"nNPCUIID")	// NPC UIID
											
	C(MC_DYNAMIC_FIELD_ENTER_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Enter To DynamicField")
											P(MPT_INT,		"DynamicFieldKey")
	C(MC_DYNAMIC_FIELD_LEAVE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Leave From DynamicField")

	C(MC_DYNAMIC_FIELD_EXPIRING,			MCDT_MACHINE2MACHINE, MCF_S2C, "DynamicField Expiring")
											P(MPT_UINT,		"nExpiredTime")

	C(MC_DYNAMIC_FIELD_CANCEL_EXPIRE,		MCDT_MACHINE2MACHINE, MCF_S2C, "DynamicField Cancel Expire")


	C(MC_ACTION_FAILED,						MCDT_MACHINE2MACHINE, MCF_S2C, "Action Failed")

	C(MC_ACTION_MOVE_REQ,					MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_C2S, "Request Move")
											P(MPT_SINGLE_BLOB,		"MoveInfo")

	C(MC_ACTION_MOVE,						MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Move")
											P(MPT_USHORT,			"nPlayerUIID")
											P(MPT_SINGLE_BLOB,		"MovingInfo")

	C(MC_ACTION_POS_SYNC_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Pos Sync")
											P(MPT_VEC,		"Position")
	C(MC_ACTION_MOVING_MF_POS_SYNC_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Moving MotionFactor Pos Sync")
											P(MPT_VEC,		"Position")
											
	C(MC_ACTION_ATTACK_CANCEL_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Attack Cancel")
	C(MC_ACTION_ATTACK_CANCEL,				MCDT_MACHINE2MACHINE, MCF_S2C, "Attack Cancel")
											P(MPT_USHORT,		"nPlayerUIID")

	C(MC_ACTION_PREPARE_ATTACK_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request AttackPrepare")
	C(MC_ACTION_PREPARE_ATTACK,				MCDT_MACHINE2MACHINE, MCF_S2C, "Prepare Attack")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_INT,		"nTalentID")

	C(MC_ACTION_GUARD_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Guard")
	C(MC_ACTION_GUARD,						MCDT_MACHINE2MACHINE, MCF_S2C, "Guard")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_SVEC2,	"Dir")
											P(MPT_VEC,		"Pos")
	C(MC_ACTION_GUARD_FAILED,				MCDT_MACHINE2MACHINE, MCF_S2C, "Guard Failed")
											P(MPT_USHORT,	"nEntityUIID")
	C(MC_ACTION_GUARD_RELEASED_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Relased Guard")
	C(MC_ACTION_GUARD_RELEASED,				MCDT_MACHINE2MACHINE, MCF_S2C, "Relased Guard")
											P(MPT_USHORT,	"nEntityUIID")
	C(MC_ACTION_GUARD_DEFENSE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Guard Defense")
											P(MPT_SINGLE_BLOB,		"GuardInfo")
	C(MC_ACTION_GUARD_DEFENSE_PARTIAL,		MCDT_MACHINE2MACHINE, MCF_S2C, "Guard Defense")
											P(MPT_SINGLE_BLOB,		"PartialGuardInfo")
											

	C(MC_ACTION_ATTACK_MELEE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Melee Attacking")
											P(MPT_SINGLE_BLOB,		"AttackInfo")

	//C(MC_ACTION_ATTACK_MELEE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Melee Attack")
	//										P(MPT_BLOB,		"AttackInfo")

	C(MC_ACTION_ATTACK_ARCHERY_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Attack Archery")
											P(MPT_VEC,		"Pos")		// À§Ä¡
											P(MPT_VEC,		"Dir")		// ¹æÇâ
											P(MPT_UID,		"uidTarget")	// ¸ñÇ¥

	C(MC_ACTION_ATTACK_ARCHERY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Attack Archery")
											P(MPT_UID,		"uidEntity")
											P(MPT_INT,		"TalentID")
											P(MPT_VEC,		"Pos")		// À§Ä¡
											P(MPT_VEC,		"Dir")		// ¹æÇâ
											P(MPT_UID,		"uidTarget")	// ¸ñÇ¥

	C(MC_ACTION_ATTACK_ARCHERY_DETAIL_REQ, 	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Attack Archery Detail")
											P(MPT_VEC,		"Pos")		// À§Ä¡
											P(MPT_VEC,		"Dir")		// ¹æÇâ
											P(MPT_UID,		"uidTarget")	// ¸ñÇ¥
											P(MPT_CHAR,		"nCapsuleGroupIndex")	
											P(MPT_CHAR,		"nCapsuleIndex")

	C(MC_ACTION_ATTACK_ARCHERY_DETAIL, 		MCDT_MACHINE2MACHINE, MCF_S2C, "Attack Archery Detail")
											P(MPT_UID,		"uidEntity")
											P(MPT_INT,		"TalentID")
											P(MPT_VEC,		"Pos")		// À§Ä¡
											P(MPT_VEC,		"Dir")		// ¹æÇâ
											P(MPT_UID,		"uidTarget")	// ¸ñÇ¥
											P(MPT_CHAR,		"nCapsuleGroupIndex")	
											P(MPT_CHAR,		"nCapsuleIndex")

	C(MC_ACTION_ATTACK_GUN_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Attack Gun")
											P(MPT_VEC,		"Pos")
											P(MPT_VEC,		"Dir")
											P(MPT_UID,		"uidTarget")	
	C(MC_ACTION_ATTACK_GUN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Attack Gun")
											P(MPT_UID,		"uidPlayer")
											P(MPT_VEC,		"Pos")
											P(MPT_VEC,		"Dir")
											P(MPT_UID,		"uidTarget")
											P(MPT_BOOL,		"bIsHitted")

	C(MC_ACTION_JUMP_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Action")
											P(MPT_VEC,		"Pos")
											P(MPT_VEC,		"Dir")

	C(MC_ACTION_JUMP,						MCDT_MACHINE2MACHINE, MCF_S2C, "Player Action")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_VEC,		"Pos")
											P(MPT_VEC,		"Dir")

	C(MC_ACTION_FALLING_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Action Falling")
											P(MPT_VEC,		"Pos")
											P(MPT_SVEC,		"Dir")

	C(MC_ACTION_FALLING,					MCDT_MACHINE2MACHINE, MCF_S2C, "Player Action Falling")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_VEC,		"Pos")
											P(MPT_SVEC,		"Dir")

	C(MC_ACTION_END_FALLING,				MCDT_MACHINE2MACHINE, MCF_C2S, "Player End Falling")
											P(MPT_BOOL,		"bIsFallenOnWater")	// true-Water, false-Ground
											P(MPT_FLOAT,	"fFallingHeight")

	C(MC_ACTION_FALLING_DAMAGE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Falling Damage")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_INT,		"nFallingDamage")

	C(MC_ACTION_STOP_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Stop")
											P(MPT_VEC,		"Pos")
											P(MPT_SVEC2,	"Dir")
	C(MC_ACTION_STOP,						MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Stop")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_VEC,		"Pos")
											P(MPT_SVEC2,	"Dir")
	C(MC_ACTION_STOP_MOVE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Stop Move")
											P(MPT_VEC,		"Pos")
	C(MC_ACTION_STOP_MOVE,					MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Stop Move")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_VEC,		"Pos")
	C(MC_ACTION_ROTATE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Rotate")
											P(MPT_SVEC2,	"Dir")
	C(MC_ACTION_ROTATE,						MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Rotate")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_SVEC2,	"Dir")

	C(MC_ACTION_CHANGE_STANCE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request ChangeStance")
											P(MPT_CHAR,		"Value")	// 0-Normal, 1-Battle, 2-Fast Normal, 3-Fast Battle
	C(MC_ACTION_CHANGE_STANCE,				MCDT_MACHINE2MACHINE, MCF_S2C, "ChangeStance")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_CHAR,		"Value")	// 0-Normal, 1-Battle, 2-Fast Normal, 3-Fast Battle

	C(MC_ACTION_DIE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Die")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_UID,		"uidKiller")

	C(MC_ACTION_DESPAWN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Despawn")
											P(MPT_USHORT,	"nEntityUIID")

	C(MC_ACTION_SWIM_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Swimming")
											P(MPT_BOOL,		"IsSwimming")

	C(MC_ACTION_CANCEL_NEXT_ATTACK,			MCDT_MACHINE2MACHINE, MCF_S2C, "Cancel Next Attack")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"nParam")

	C(MC_ACTION_STANDUP_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Stand up")

	C(MC_ACTION_STANDUP,					MCDT_MACHINE2MACHINE, MCF_S2C, "Stand up")
											P(MPT_USHORT,		"nEntityUIID")

	C(MC_ACTION_SWITCHING_WEAPON_BEGIN_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Switching Weapon Begin")
	C(MC_ACTION_SWITCHING_WEAPON_BEGIN,		MCDT_MACHINE2MACHINE, MCF_S2C, "Switching Weapon Begin")
											P(MPT_USHORT,		"nEntityUIID")

	C(MC_ACTION_SWITCHING_WEAPON_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Switching Weapon")
											P(MPT_CHAR,		"nWeaponSet")

	C(MC_ACTION_SWITCHING_WEAPON,			MCDT_MACHINE2MACHINE, MCF_S2C, "Switching Weapon")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_CHAR,		"nWeaponSet")

	C(MC_ACTION_SIT_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Sit Req")
	C(MC_ACTION_SIT,						MCDT_MACHINE2MACHINE, MCF_S2C, "Sit")
											P(MPT_USHORT,	"nPlayerUIID")

	C(MC_ACTION_SIT_RISE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Sit Rise Req")
	C(MC_ACTION_SIT_RISE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Sit Rise")
											P(MPT_USHORT,	"nPlayerUIID")

	C(MC_ACTION_HIDE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Hide")
											P(MPT_UID,		"uidActor")
	C(MC_ACTION_AFK_BEGIN,					MCDT_MACHINE2MACHINE, MCF_S2C, "AFK Begin")
											P(MPT_UID,		"uidPlayer")
	C(MC_ACTION_AFK_END,					MCDT_MACHINE2MACHINE, MCF_S2C, "AFK End")
											P(MPT_UID,		"uidPlayer")
	C(MC_ACTION_AFK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "AFK Request")
	C(MC_ACTION_END_COMBAT,					MCDT_MACHINE2MACHINE, MCF_S2C, "End Combat")
											
	C(MC_NPC_MOVE,							MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Move")
											P(MPT_SINGLE_BLOB,		"MoveInfo")

	C(MC_NPC_FACE_TO,						MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "FaceTo")
											P(MPT_USHORT,	"nNPCUIID")
											P(MPT_SVEC2,	"dir")
											P(MPT_VEC,		"pos")

	C(MC_NPC_RUN,							MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Run")
											P(MPT_SINGLE_BLOB,		"MoveInfo")
											
	C(MC_NPC_MOVE_STOP,						MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Stop Move")
											P(MPT_USHORT,	"nNPCUIID")
											P(MPT_VEC,		"pos")

	C(MC_NPC_CHANGE_CAPSULE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Change Capsule")
											P(MPT_UID,		"uidObject")
											P(MPT_CHAR,		"nIndex")

	C(MC_NPC_SAY,							MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Say")
											P(MPT_UID,		"uidSpeaker")
											P(MPT_INT,		"nSpeakerID")
											P(MPT_WSTR,		"strText")
											P(MPT_FLOAT,	"fMaintainTime")

	C(MC_NPC_BALLOON,						MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Balloon")
											P(MPT_UID,		"uidSpeaker")
											P(MPT_INT,		"nSpeakerID")
											P(MPT_WSTR,		"strText")
											P(MPT_FLOAT,	"fMaintainTime")

	C(MC_NPC_SHOUT,							MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Shout")
											P(MPT_UID,		"uidSpeaker")
											P(MPT_INT,		"nSpeakerID")
											P(MPT_WSTR,		"strText")
											P(MPT_FLOAT,	"fMaintainTime")

	C(MC_NPC_NARRATION,						MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Narration")
											P(MPT_WSTR,			"strText")

	C(MC_NPC_SAY_AND_NARRATION,			MCDT_MACHINE2MACHINE, MCF_S2C, "NPC Say and Narration")
											P(MPT_UID,		"uidSpeaker")
											P(MPT_INT,		"nSpeakerID")
											P(MPT_WSTR,		"strText")
											P(MPT_FLOAT,	"fMaintainTime")

	C(MC_NPC_CHANGE_ATTACKABLE,				MCDT_MACHINE2MACHINE, MCF_S2C, "NPC.EanbleCombat")
											P(MPT_UID,		"uidNPC")
											P(MPT_INT,		"nAttackable")
	C(MC_NPC_CHANGE_COMBAT_TARGET,			MCDT_MACHINE2MACHINE, MCF_S2C, "NPC.ChangeCombatTarget")
											P(MPT_UID,		"uidNPC")
											P(MPT_UID,		"uidTarget")
	C(MC_NPC_SPEWUP,						MCDT_MACHINE2MACHINE, MCF_S2C, "NPC.Spewup")
											P(MPT_UID,		"uidNPC")
	C(MC_NPC_SPEWUP_INTERRUPT,				MCDT_MACHINE2MACHINE, MCF_S2C, "NPC.SpewupInterrupt")
											P(MPT_UID,		"uidNPC")	

	C(MC_TRIGGER_TOUCH_SENSOR_ENTER,		MCDT_MACHINE2MACHINE, MCF_C2S, "Trigger.TouchSensorEnter")
											P(MPT_UINT,		"nSensorID")
											P(MPT_VEC,		"vecPos")

	C(MC_TRIGGER_TOUCH_SENSOR_LEAVE,		MCDT_MACHINE2MACHINE, MCF_C2S, "Trigger.TouchSensorLeave")
											P(MPT_UINT,		"nSensorID")
											P(MPT_VEC,		"vecPos")

	C(MC_TRIGGER_SENSOR_INTERACTION_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Trigger.RequestInteraction")
											P(MPT_BLOB,		"vecEnteredSensorID")											

	C(MC_TRIGGER_SENSOR_ERROR_MSG,			MCDT_MACHINE2MACHINE, MCF_S2C, "Trigger.SensorError")																						

	C(MC_TRIGGER_SENSOR_FOLLOW_PARTY_REQ,	MCDT_MACHINE2MACHINE, MCF_S2C, "Trigger.SensorFollowPartyReq")
											P(MPT_WSTR,		"strMemberName")

	C(MC_TRIGGER_SENSOR_FOLLOW_PARTY_RES,	MCDT_MACHINE2MACHINE, MCF_C2S, "Trigger.SensorFollowPartyRes")											

	C(MC_TRIGGER_UPDATE_USABLE_SENSOR,		MCDT_MACHINE2MACHINE, MCF_S2C, "Trigger.UpdateUsableSensor")										
											P(MPT_BLOB,		"UsableSensorInfo")

	C(MC_TRIGGER_SENSOR_DESTINATION_SEL_REQ,MCDT_MACHINE2MACHINE, MCF_S2C, "Trigger.Request Sensor Destination Selection")
											P(MPT_BLOB,		"UsableSensorInfo")

	C(MC_TRIGGER_SENSOR_DESTINATION_SEL,	MCDT_MACHINE2MACHINE, MCF_C2S, "Trigger.Sensor Destination Selection")
											P(MPT_INT,		"Selection")
	
	C(MC_ENTITY_WARP,						MCDT_MACHINE2MACHINE, MCF_S2C, "Warp")
											P(MPT_UID,		"uidEntity")
											P(MPT_VEC,		"vecPos")
											P(MPT_VEC,		"vecDir")

	C(MC_FIELD_REQUEST_FEATURE,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Feature Info")
											P(MPT_UID,		"uidPlayer")

	C(MC_FIELD_FEATURE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Feature Info")
											P(MPT_UID,		"uidPlayer")
											P(MPT_BLOB,		"ItemListInfo")

	C(MC_ITEM_EQUIP_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Equip Item")								
											P(MPT_INT,		"nSlotTypeFrom")
											P(MPT_INT,		"nSlotIDFrom")
											P(MPT_CHAR,		"nSlotIDTo")

	C(MC_ITEM_EQUIP,						MCDT_MACHINE2MACHINE, MCF_S2C, "Equip Item")
											P(MPT_INT,		"nSlotTypeFrom")
											P(MPT_INT,		"nSlotIDFrom")
											P(MPT_CHAR,		"nSlotIDTo")

	C(MC_ITEM_EQUIP_SWAPTOINVEN,			MCDT_MACHINE2MACHINE, MCF_S2C, "Equip Item Swap To Inven")
											P(MPT_INT,		"nEquipSlotIDFrom")
											P(MPT_CHAR,		"nEquipSlotIDTo")
											P(MPT_CHAR,		"nUnequipSlotIDFrom")
											P(MPT_INT,		"nUnequipSlotIDTo")
											

	C(MC_ITEM_UNEQUIP_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Unequip Item")
											P(MPT_CHAR,		"nItemSlot")

	C(MC_ITEM_UNEQUIP,						MCDT_MACHINE2MACHINE, MCF_S2C, "Unequip Item")
											P(MPT_CHAR,		"nItemSlot")
											P(MPT_INT,		"nInvenSlotID")
	
	C(MC_ITEM_USE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Use Item")
											P(MPT_INT,		"nInvenSlotID")

	C(MC_ITEM_USE_FAIL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Use Item Fail")
											P(MPT_INT,		"nInvenSlotID")											
											P(MPT_INT,		"nConditionType")
											P(MPT_BLOB,		"vecParam1")
											P(MPT_BLOB,		"vecParam2")
 
	C(MC_ITEM_TALENT,						MCDT_MACHINE2MACHINE, MCF_S2C, "Use Item")
											P(MPT_INT,		"nAmount")
											P(MPT_INT,		"nInvenSlotID")

	C(MC_ITEM_CHANGE_LOOK_EQUIP_ITEM,		MCDT_MACHINE2MACHINE, MCF_S2C, "Change Look Equip Item")
											P(MPT_INT,		"nSlotTypeFrom")
											P(MPT_INT,		"nSlotIDFrom")
											P(MPT_CHAR,		"nSlotIDTo")

											P(MPT_UID,		"uidPlayer")
											P(MPT_INT,		"nItemID")
											P(MPT_INT,		"nItemColor")
											P(MPT_INT,		"nEnchantBuff")
											
	C(MC_ITEM_CHANGE_LOOK_UNEQUIP_ITEM,		MCDT_MACHINE2MACHINE, MCF_S2C, "Change Look Unequip Item")
											P(MPT_UID,		"uidPlayer")
											P(MPT_CHAR,		"nItemSlot")

	C(MC_ITEM_ADD,							MCDT_MACHINE2MACHINE, MCF_S2C, "Add Item")
											P(MPT_BLOB,		"InsertItem")
											P(MPT_BLOB,		"IncreaseItem")

	C(MC_ITEM_DROP_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Drop Item")
											P(MPT_INT,		"nSlotType")
											P(MPT_INT,		"nSlotID")
											P(MPT_INT,		"nDropQuantity")

	C(MC_ITEM_REMOVE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Remove Item")
											P(MPT_BLOB,		"DeleteItem")
											P(MPT_BLOB,		"DecreaseItem")
	
	C(MC_ITEM_UPDATE_DURABILITY,			MCDT_MACHINE2MACHINE, MCF_S2C, "Change Durability")
											P(MPT_BLOB,		"TD_UPDATE_DURATION")

	C(MC_ITEM_INTERACT_NPC_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request item interact to npc");
											P(MPT_INT,		"nInvenSlotID")
											P(MPT_UID,		"uidNPC")

	C(MC_ITEM_MOVE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Move Item Req")
											P(MPT_INT,		"nFromSlotType")
											P(MPT_INT,		"nFromSlotID")
											P(MPT_INT,		"nFromItemID")
											P(MPT_INT,		"nToSlotType")
											P(MPT_INT,		"nToSlotID")
											P(MPT_INT,		"nToItemID")
											P(MPT_INT,		"nAmount")

	C(MC_ITEM_MOVE,							MCDT_MACHINE2MACHINE, MCF_S2C, "Move Item")
											P(MPT_INT,		"nFromSlotType")
											P(MPT_INT,		"nFromSlotID")
											P(MPT_INT,		"nToSlotType")
											P(MPT_INT,		"nToSlotID")
											P(MPT_INT,		"nAmount")

	C(MC_ITEM_SORT_INVEN_SLOT_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Sort Item Inventory SlotID Req")
	C(MC_ITEM_SORT_INVEN_SLOT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Sort Item Inventory SlotID Res")


	C(MC_ITEM_DYE_PREPARE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Dye Prepare Item")
											P(MPT_INT,		"nTargetSlotType")
											P(MPT_INT,		"nTargetSlotID")
											P(MPT_INT,		"nDyeSlotID")

	C(MC_ITEM_DYE_PREPARECANCEL_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Dye Prepare Cancel Item")


	C(MC_ITEM_DYE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Dye Item")
											P(MPT_INT,		"nTargetSlotType")
											P(MPT_INT,		"nTargetSlotID")
											P(MPT_INT,		"nDyeSlotID")

	C(MC_ITEM_DYE,							MCDT_MACHINE2MACHINE, MCF_S2C, "Dye Item")											
											P(MPT_INT,		"nSlotType")
											P(MPT_INT,		"nSlotID")
											P(MPT_INT,		"nColor")	
											

	C(MC_ACTION_USE_TALENT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Use Talent")
											P(MPT_INT,		"TalentID")
											P(MPT_SVEC,		"CharDir")
											P(MPT_VECTOR,	"CharPos")

	C(MC_ACTION_USE_TALENT,					MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Use Talent")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")
											P(MPT_SVEC,		"CharDir")
											P(MPT_VEC,		"CharPos")

	C(MC_ACTION_ACT_TALENT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Act Spell")
											P(MPT_SVEC,			"Dir")	
											P(MPT_UID,			"TargetUID")
	C(MC_ACTION_ACT_TALENT_WITH_HITCAPSULE_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Act Spell With Hitcapsule")
											P(MPT_SVEC,			"Dir")	
											P(MPT_SINGLE_BLOB,	"TargetInfo")
	C(MC_ACTION_ACT_TALENT_WITH_GROUND_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Request Act Spell With GroundInfo")
											P(MPT_SVEC,			"Dir")	
											P(MPT_VEC,			"GroundPos")

	C(MC_ACTION_ACT_TALENT,					MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Act Talent")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")
											P(MPT_SVEC,		"Dir")

	C(MC_ACTION_ACT_TALENT_WITH_GROUND,		MCDT_MACHINE2MACHINE, MCF_S2C, "Act Talent")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")
											P(MPT_SVEC,		"Dir")
											P(MPT_VEC,		"TargetPos")

	C(MC_ACTION_EXTRA_ACT_TALENT,			MCDT_MACHINE2MACHINE, MCF_S2C, "Extra Act Talent")
											P(MPT_USHORT,	"uidEntity")
											P(MPT_INT,		"TalentID")
											P(MPT_VECTOR,	"Pos")
											P(MPT_SVEC,		"Dir")

	C(MC_ACTION_REQUEST_FAIL_TALENT,		MCDT_MACHINE2MACHINE, MCF_S2C, "Talent Request Failed")
											P(MPT_INT,		"TalentID")

	C(MC_ACTION_CANCEL_TALENT_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Cancel Talent")

	C(MC_ACTION_END_TALENT_COOLDOWN,		MCDT_MACHINE2MACHINE, MCF_S2C, "Talent Cooldown Finish")
											P(MPT_INT,		"TalentID")

	C(MC_ACTION_CANCEL_TALENT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Cancel Talent")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")

	C(MC_ACTION_ACT_TALENT_PROJECTILE,		MCDT_MACHINE2MACHINE, MCF_S2C, "Act Spell(Projectile)")
											P(MPT_UID,		"uidEntity")
											P(MPT_INT,		"TalentID")
											P(MPT_VEC,		"EntityDir")
											P(MPT_VEC,		"TargetPos")
											P(MPT_UID,		"uidTarget")
											P(MPT_CHAR,		"nCapsuleGroupIndex")	
											P(MPT_CHAR,		"nCapsuleIndex")

	C(MC_ACTION_ACT_SPELL_MAGICAREA,		MCDT_MACHINE2MACHINE, MCF_S2C, "Act Spell(MagicArea)")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")
											P(MPT_VEC,		"TargetPos")

	C(MC_ACTION_RECASTING_SPELL,			MCDT_MACHINE2MACHINE, MCF_S2C, "ReCasting Spell")
											P(MPT_USHORT,	"nEntityUIID")
											P(MPT_INT,		"TalentID")
											P(MPT_INT,		"TalentStep")

///////////////

											

	C(MC_ACTION_TALENT_HIT,					MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Hit from Talent")
											P(MPT_SINGLE_BLOB,		"HitInfo")

	C(MC_ACTION_TALENT_HIT_NO_MF,			MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Hit from Talent but no MotionFactor")
											P(MPT_USHORT,	"nVictimUIID")
											P(MPT_USHORT,	"nAttackerUIID")
											P(MPT_INT,		"nTalentID")

	C(MC_ACTION_TALENT_HIT_KNOCKBACK_MF,	MCDT_MACHINE2MACHINE|MCDT_FILTER_CROWDED, MCF_S2C, "Hit from Talent with knockback MotionFactor")
											P(MPT_SINGLE_BLOB,		"HitInfo")
											P(MPT_SINGLE_BLOB,		"KnockbackInfo")

	C(MC_ACTION_BUFF_HIT,					MCDT_MACHINE2MACHINE, MCF_S2C, "Hit from Buff")
											P(MPT_SINGLE_BLOB,		"HitInfo")

	C(MC_ACTION_BUFF_HIT_NO_MF,				MCDT_MACHINE2MACHINE, MCF_S2C, "Hit from Buff but no MotionFactor")
											P(MPT_USHORT,	"nVictimUIID")
											P(MPT_INT,		"nTalentID")

	C(MC_ACTION_TALENT_HIT_MISS,			MCDT_MACHINE2MACHINE, MCF_S2C, "Hit But Miss")
											P(MPT_USHORT,	"nVictimUIID")
											P(MPT_USHORT,	"nAttackerUIID")
											P(MPT_INT,		"nTalentID")

	C(MC_ACTION_TALENT_HEAL,				MCDT_MACHINE2MACHINE, MCF_S2C, "Talent Healing")
											P(MPT_USHORT,	"nUserUIID")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nTalentID")
											P(MPT_INT,		"nAmount")

	C(MC_ACTION_TALENT_DRAIN,				MCDT_MACHINE2MACHINE, MCF_S2C, "Drain")
											P(MPT_INT,		"nTalentID")
											P(MPT_UCHAR,	"nDrainType")
											P(MPT_INT,		"nDrainAmount")
	
	C(MC_ACTION_BREAK_PART,					MCDT_MACHINE2MACHINE, MCF_S2C, "Break Part")
											P(MPT_UID,		"uidOwnerEntity")
											P(MPT_UID,		"uidOpponentEntity")
											P(MPT_CHAR,		"nPartID")

	C(MC_ACTION_BPART_RECOVERY,				MCDT_MACHINE2MACHINE, MCF_S2C, "BreakPart Recovery")
											P(MPT_UID,		"uidOwnerNPC")

	C(MC_ACTION_BREAK_PART_EX,				MCDT_MACHINE2MACHINE, MCF_S2C, "Break Part")
											P(MPT_UID,		"uidOwnerEntity")
											P(MPT_UID,		"uidOpponentEntity")
											P(MPT_CHAR,		"nPartID")
											P(MPT_BLOB,		"infoUsableBParts")

	// Äù½ºÆ®(QUEST) -------------------------------------------------------------------------------
	C(MC_QUEST_GIVE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Give Quest")											
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_GIVE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response Give Quest")
											P(MPT_INT,		"nQuestID")
											P(MPT_UINT,		"nAccepTime")
											P(MPT_UINT,		"nLimitTime")
											P(MPT_VEC,		"vRewardPos")
											P(MPT_BOOL,		"bChallengerQuest")
											
	C(MC_QUEST_UPDATE_OBJECTIVE,			MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Objective Updated")
											P(MPT_SINGLE_BLOB,		"UpdatedObjective")
	C(MC_QUEST_COMPLETE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Complete")
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_INCOMPLETE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Incomplete")
											P(MPT_INT,		"nQuestID")											
	C(MC_QUEST_FAIL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Failure")
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_REWARD_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Reward")
											P(MPT_UID,		"uidNPC")
											P(MPT_INT,		"nQuestID")
											P(MPT_INT,		"nSelectedReward")
	C(MC_QUEST_REWARD,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response Reward")
											P(MPT_UID,		"uidNPC")
											P(MPT_INT,		"nQuestID")										
	C(MC_QUEST_CANCEL_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Cancel")
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_CANCEL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response Cancel")
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_SHOW_ACCPET_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "Show Accept UI")
											P(MPT_INT,		"nQuestID")
	C(MC_QUEST_SHOW_REWARD_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "Show Reward UI")
											P(MPT_INT,		"nQuestID")

	C(MC_QUEST_SHARE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Quest Share")
											P(MPT_INT,		"nQuestID")

	C(MC_QUEST_SHARE_REQ_RELAY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Relay Quest Share Request")
											P(MPT_SINGLE_BLOB,	"result")

	C(MC_QUEST_SHARE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Share")
											P(MPT_BLOB,		"vecResult")

	C(MC_QUEST_SHARE_GIVE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Share Give Quest")
											P(MPT_INT,		"nQuestID")											

	C(MC_QUEST_INTERACT_QOBJECTIVE_BEGIN,	MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Interact Begin")
											P(MPT_UID,		"uidLooter")
											P(MPT_UID,		"uidNPC")

	C(MC_QUEST_INTERACT_QOBJECTIVE_CANCEL_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Quest Interact End Req")

	C(MC_QUEST_INTERACT_QOBJECTIVE_END,		MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Interact End")
											P(MPT_UID,		"uidLooter")										

	C(MC_CHALLENGER_QUEST_LIST,				MCDT_MACHINE2MACHINE, MCF_S2C, "Challenger Quest List")
											P(MPT_BLOB,		"TD_CHALLENGER_QUEST")
	
	C(MC_CHALLENGER_QUEST_COMPLETE,			MCDT_MACHINE2MACHINE, MCF_S2C, "Challenger Quest Complete")

	C(MC_CHALLENGER_QUEST_LIST_REFRESH,		MCDT_MACHINE2MACHINE, MCF_S2C, "Challenger Quest List")
											P(MPT_BLOB,		"TD_CHALLENGER_QUEST")

	// ´ÙÀÌ¾ó·Î±×(DIALOG) -------------------------------------------------------------------------------------------
	C(MC_DIALOG_START,						MCDT_MACHINE2MACHINE, MCF_S2C, "Start Dialog")
											P(MPT_INT,		"nSayTextID")
											P(MPT_BLOB,		"Select")

	C(MC_DIALOG_SELECT_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Select")
											P(MPT_INT,		"nSelectID")

	C(MC_DIALOG_SELECT,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response Select")
											P(MPT_INT,		"nSayTextID")
											P(MPT_BLOB,		"Select")


	// Æ®·¹ÀÌ´×(TRAININIG) -------------------------------------------------------------------------------------------
	C(MC_TRAINING_TRAIN_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Train")
											P(MPT_INT,		"nTalentID")
	C(MC_TRAINING_TRAIN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Train")
											P(MPT_INT,		"nTalentID")
											P(MPT_BOOL,		"bConsumeTP")
	C(MC_TRAINING_UNTRAIN_ALL,				MCDT_MACHINE2MACHINE, MCF_S2C, "Untrain All")
											P(MPT_INT,		"nTotalTP")


	// ¹öÇÁ(BUFF) -------------------------------------------------------------------------------------------
	C(MC_BUFF_GAIN,							MCDT_MACHINE2MACHINE, MCF_S2C, "Gain Buff")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")
											P(MPT_FLOAT,	"fDurationTime")
				
	C(MC_BUFF_LOST_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Lost Buff Req")
											P(MPT_INT,		"nBuffID")

	C(MC_BUFF_LOST,							MCDT_MACHINE2MACHINE, MCF_S2C, "Lost Buff")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")

	C(MC_BUFF_HEAL,							MCDT_MACHINE2MACHINE, MCF_S2C, "Gain Buff HealEffect")
											P(MPT_USHORT,	"nUserUIID")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")
											P(MPT_INT,		"nAmount")

	C(MC_BUFF_INSTANT_EFFECT_GAIN,			MCDT_MACHINE2MACHINE, MCF_S2C, "Gain Buff Instant Effect")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")

	C(MC_TALENT_INSTANT_EFFECT_GAIN,		MCDT_MACHINE2MACHINE, MCF_S2C, "Gain Talent Instant Effect")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nTalentID")

	C(MC_BUFF_STACK_INCREASE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Buff Stack Increase")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")
											P(MPT_FLOAT,	"fDurationTime")

	C(MC_BUFF_STACK_DECREASE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Buff Stack Decrease")
											P(MPT_USHORT,	"nTargetUIID")
											P(MPT_INT,		"nBuffID")

	// Æ®·¹ÀÌµå(TRADE) -------------------------------------------------------------------------------------------
	C(MC_TRADE_START_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Trade Start")										
											P(MPT_UID,		"uidTarPlayer")

	C(MC_TRADE_START_REQ_RELAY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Request Trade Start Route")
											P(MPT_UID,		"uidReqPlayer")

	C(MC_TRADE_START_ACCEPT_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Trade Start Accept")
											P(MPT_BOOL,		"bAccept")
											
	C(MC_TRADE_START,						MCDT_MACHINE2MACHINE, MCF_S2C, "Trade Start")
											P(MPT_UID,		"uidAcceptPlayer")
											P(MPT_INT,		"nAcceptPlayerLevel")
											
	C(MC_TRADE_START_REJECT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Trade Reject")
											
	C(MC_TRADE_PUTUP_ITEM_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Put Up Item")
											P(MPT_SINGLE_BLOB,	"ItemInfo")
	C(MC_TRADE_PUTUP_ITEM,					MCDT_MACHINE2MACHINE, MCF_S2C, "Put Up Item")
											P(MPT_UID,			"uidReqPlayer")
											P(MPT_SINGLE_BLOB,	"ItemInfo")
	C(MC_TRADE_PUTDOWN_ITEM_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Put Down Item")
											P(MPT_SINGLE_BLOB,	"ItemInfo")
	C(MC_TRADE_PUTDOWN_ITEM,				MCDT_MACHINE2MACHINE, MCF_S2C, "Put Down Item")
											P(MPT_UID,			"uidReqPlayer")
											P(MPT_SINGLE_BLOB,	"ItemInfo")

	C(MC_TRADE_PUTUP_MONEY_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Put Up Money")
											P(MPT_INT,		"Money")
	C(MC_TRADE_PUTUP_MONEY,					MCDT_MACHINE2MACHINE, MCF_S2C, "Put Up Money")
											P(MPT_UID,		"uidReqPlayer")
											P(MPT_INT,		"Money")

	C(MC_TRADE_CANCEL_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Trade Cancel")
	C(MC_TRADE_CANCEL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Trade Cancel")

	C(MC_TRADE_CONFIRM_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Trade Confirm")
											
	C(MC_TRADE_CONFIRM,						MCDT_MACHINE2MACHINE, MCF_S2C, "Trade Confirm")
											P(MPT_UID,		"uidReqPlayer")

	C(MC_TRADE_COMPLETE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Trade Complete")											

	// ÆÄÆ¼ ---------------
	C(MC_PARTY_INVITE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Party.RequestInvite")										
											P(MPT_UID,		"uidTargetPlayer")
	C(MC_PARTY_INVITE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Party.Invite")										
											P(MPT_INT,		"RespondMsg")
	C(MC_PARTY_LEAVE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Party.Leave")										
	C(MC_PARTY_KICK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Party.Kick")										
											P(MPT_UID,		"uidPlayer")
	C(MC_PARTY_INVITE_QUESTION,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.Invite Question")										
											P(MPT_UID,		"uidInvitor")
											P(MPT_WSTR,		"strInvitorName")
											P(MPT_BOOL,		"bCombat")
	C(MC_PARTY_INVITE_QUESTION_RESPOND,		MCDT_MACHINE2MACHINE, MCF_C2S, "Party.Invite Question Respond")										
											P(MPT_INT,		"RespondMsg")
	C(MC_PARTY_REFRESH_INFO_ALL,			MCDT_MACHINE2MACHINE, MCF_S2C, "Party.PartyInfoAll")										
											P(MPT_BLOB,		"PartyInfo")
											P(MPT_BLOB,		"MemberInfos")
											P(MPT_BLOB,		"MemberBuffList1")
											P(MPT_BLOB,		"MemberBuffList2")
											P(MPT_BLOB,		"MemberBuffList3")
											P(MPT_BLOB,		"MemberBuffList4")
											P(MPT_BLOB,		"MemberBuffList5")

	C(MC_PARTY_REFRESH_INFO,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.PartyInfo")										
											P(MPT_BLOB,		"MemberInfo")
											P(MPT_BLOB,		"MemberBuffList")
	C(MC_PARTY_NOTIFY_JOIN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Party.Join")										
											P(MPT_UID,		"uidPlayer")
											P(MPT_WSTR,		"strName")
	C(MC_PARTY_NOTIFY_LEAVE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.Leave")										
											P(MPT_UID,		"uidPlayer")
	C(MC_PARTY_INVITE_FOR_ME_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Party.InviteForMe")										
											P(MPT_UID,		"uidParty")
	C(MC_PARTY_INVITE_FOR_ME_QUESTION,		MCDT_MACHINE2MACHINE, MCF_S2C, "Party.InviteForMe-Question")										
											P(MPT_UID,		"uidPlayer")
											P(MPT_WSTR,		"strPlayerName")
											P(MPT_BOOL,		"bCombat")
	C(MC_PARTY_INVITE_FOR_ME_QUESTION_RESPOND,	MCDT_MACHINE2MACHINE, MCF_C2S, "Party.InviteForMe-QuestionRespond")										
											P(MPT_INT,		"RespondMsg")

	C(MC_PARTY_ACCEPT_CANCEL,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.AcceptCancel")
											P(MPT_INT,		"nReason")

	C(MC_PARTY_CHANGE_NAME_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Party.ChangeName Req.")
											P(MPT_WSTR,		"strName")

	C(MC_PARTY_CHANGE_NAME,					MCDT_MACHINE2MACHINE, MCF_S2C, "Party.ChangeName")
											P(MPT_WSTR,		"strName")

	C(MC_PARTY_CHANGE_LEADER_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Party.ChangeLeader Req.")
											P(MPT_UID,		"uidMember")

	C(MC_PARTY_CHANGE_LEADER,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.ChangeLeader")
											P(MPT_UID,		"uidNewLeader")

	C(MC_PARTY_CHANGE_LOOTING_RULE_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Party.ChangeLootingRule Req.")
											P(MPT_CHAR,		"LootingRuleCommon")
											P(MPT_CHAR,		"LootingRuleRare")
											P(MPT_CHAR,		"LootingRuleRareFor")	

	C(MC_PARTY_CHANGE_LOOTING_RULE,			MCDT_MACHINE2MACHINE, MCF_S2C, "Party.ChangeLootingRule")
											P(MPT_CHAR,		"LootingRuleCommon")
											P(MPT_CHAR,		"LootingRuleRare")
											P(MPT_CHAR,		"LootingRuleRareFor")

	C(MC_PARTY_CHANGE_QUESTID_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Party.ChangeQuestID Req.")
											P(MPT_INT,		"QuestID")

	C(MC_PARTY_CHANGE_QUESTID,				MCDT_MACHINE2MACHINE, MCF_S2C, "Party.ChangeQuestID")
											P(MPT_INT,		"QuestID")

	C(MC_PARTY_CHANGE_LEADER_NOTIFY,		MCDT_MACHINE2MACHINE, MCF_S2C, "Party.ChangeLeaderNotify")
											P(MPT_UID,		"uidOldLeader")
											P(MPT_UID,		"uidNewLeader")
											
// NPC TRADE ---------
	C(MC_NPCSHOP_SHOW,						MCDT_MACHINE2MACHINE, MCF_S2C, "See Item")
											P(MPT_BLOB,		"vecBuyableUsableItem")
											P(MPT_BLOB,		"vecBuyableUnusableItem")
											P(MPT_BLOB,		"vecUnBuyableItem")
											P(MPT_FLOAT,	"fBuyMod")
											P(MPT_FLOAT,	"fSellMod")
											P(MPT_BOOL,		"bRepairer")

	C(MC_NPCSHOP_BUY_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Buy")
											P(MPT_INT,		"nItemID")
											P(MPT_USHORT,	"nItemAmount")
	C(MC_NPCSHOP_BUY,						MCDT_MACHINE2MACHINE, MCF_S2C, "Buy")

	C(MC_NPCSHOP_SELL_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Sell")
											P(MPT_INT,		"nInvenSlotID")
											P(MPT_USHORT,	"nItemAmount")
	C(MC_NPCSHOP_SELL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Sell")

	C(MC_NPCSHOP_SELL_VERYCOMMON_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Sell Very Commmon")
	C(MC_NPCSHOP_SELL_VERYCOMMON,			MCDT_MACHINE2MACHINE, MCF_S2C, "Sell Very Commmon")	

	C(MC_NPCSHOP_REPAIR_ONE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Repair One")
											P(MPT_CHAR,		"slotType")
											P(MPT_INT,		"nSlotID")
	C(MC_NPCSHOP_REPAIR_ALL_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Repair All")
	C(MC_NPCSHOP_REPAIR,					MCDT_MACHINE2MACHINE, MCF_S2C, "Repair")
											P(MPT_BLOB,		"vecItemSlotInfo")
	

// LOOT -------------
	C(MC_LOOT_BEGIN_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Start")
											P(MPT_UID,		"uidNPC")

	C(MC_LOOT_BEGIN,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response Start")
											P(MPT_UID,		"uidLooter")
											P(MPT_UID,		"uidNPC")
											P(MPT_FLOAT,	"fLootTime")

	C(MC_LOOT_SEE_ITEM_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request SeeItem")
											P(MPT_UID,		"uidNPC")

	C(MC_LOOT_SEE_ITEM,						MCDT_MACHINE2MACHINE, MCF_S2C, "Response SeeItem")
											P(MPT_BLOB,		"vecTDDropItem")

	C(MC_LOOT_LOOT_ITEM_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request LootItem")
											P(MPT_UID,		"uidNPC")
											P(MPT_BLOB,		"vecItemUID")

	C(MC_LOOT_ROLLRESULT,					MCDT_MACHINE2MACHINE, MCF_S2C, "RollResult")
											P(MPT_BLOB,		"vecTDRollItem")
											P(MPT_BLOB,		"vecTDRollResult")

	C(MC_LOOT_MASTERLOOT_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "MasterLoot UI")
											P(MPT_INT,		"nGameServerID")
											P(MPT_UID,		"uidField")
											P(MPT_UID,		"uidNPC")
											P(MPT_BLOB,		"vecTDMasterLootUI")

	C(MC_LOOT_MASTERLOOT_NOTIFY,			MCDT_MACHINE2MACHINE, MCF_S2C, "MasterLoot Notify")
											P(MPT_BLOB,		"vecTDMasterLootUI")

	C(MC_LOOT_MASTERLOOT_ITEM_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request MasterLoot Item")
											P(MPT_UID,		"uidNPC")
											P(MPT_UID,		"uidDropItem")
											P(MPT_UCHAR,	"nSelectedIndex")
											P(MPT_BOOL,		"bRandom")

	C(MC_LOOT_MASTERLOOT_UI_REMOVE,			MCDT_MACHINE2MACHINE, MCF_S2C, "MasterLoot UI Remove")
											P(MPT_UID,		"uidField")
											P(MPT_UID,		"uidNPC")
	
	C(MC_LOOT_REFRESH_ITEM,					MCDT_MACHINE2MACHINE, MCF_S2C, "Refresh Item")
											P(MPT_BLOB,		"vecTDDropItem")

	C(MC_LOOT_OTHER_GAIN_ITEM,				MCDT_MACHINE2MACHINE, MCF_S2C, "Other Gain Item")
											P(MPT_UID,		"uidPlayer")
											P(MPT_BLOB,		"vecTDOtherGainItem")

	C(MC_LOOT_GETTABLE_ITEM_ADD,			MCDT_MACHINE2MACHINE, MCF_S2C, "GettableItem Add")
											P(MPT_BLOB,		"vecTDGettableItemAdd")

	C(MC_LOOT_END_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request End Looting")
	C(MC_LOOT_END,							MCDT_MACHINE2MACHINE, MCF_S2C, "Response End Looting")
											P(MPT_UID,		"uidGetter")

	C(MC_LOOT_INSERT_LOOTABLE_NPC,			MCDT_MACHINE2MACHINE, MCF_S2C, "Insert Lootable NPC")
											P(MPT_UID,		"uidNPC")
	C(MC_LOOT_REMOVE_LOOTABLE_NPC,			MCDT_MACHINE2MACHINE, MCF_S2C, "Remove Lootable NPC")
											P(MPT_UID,		"uidNPC")

// INTERACTION -------------

	C(MC_INTERACTION_INTERACTION_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Interaction")
											P(MPT_UID,		"uidTarget")
											P(MPT_VEC,		"pos")
											P(MPT_VEC,		"dir")

// NPC INTERACTION -------------
	C(MC_NPCINTERACTION_INTERACTION,		MCDT_MACHINE2MACHINE, MCF_S2C, "Response NPC Interaction")
											P(MPT_UID,		"uidNPC")
											P(MPT_WSTR,		"strOpeningText")
											P(MPT_BLOB,		"InteractionElement")

	C(MC_NPCINTERACTION_IELEMENT_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request NPC IE")
											P(MPT_UID,		"uidTarget")
											P(MPT_INT,		"nIElementID")

	C(MC_NPCINTERACTION_END_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "NPCInteraction End Req")
	C(MC_NPCINTERACTION_END,				MCDT_MACHINE2MACHINE, MCF_S2C, "NPCInteraction End")

	C(MC_NPCINTERACTION_ICON,				MCDT_MACHINE2MACHINE, MCF_S2C, "NPCInteraction ICon")
											P(MPT_BLOB,		"NPCIcon")
											P(MPT_BLOB,		"FarNPCIcon")

	C(MC_NPCINTERACTION_LOOT_START,			MCDT_MACHINE2MACHINE, MCF_S2C, "NPCInteraction Loot Start")
											P(MPT_UID,		"uidLooter")
											P(MPT_UID,		"uidNPC")	

// ¹Ì´Ï¸Ê ----------------
	C(MC_MINIMAP_MARK_POS_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "MiniMap Mark Position")
											P(MPT_VEC,		"Position")

	C(MC_MINIMAP_MARK_POS,					MCDT_MACHINE2MACHINE, MCF_S2C, "Response MiniMap Mark Position")
											P(MPT_VEC,		"Position")
	
// ÇÇ·Îµµ ----------------
	C(MC_FATIGUE_UPDATE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Update Fatigue")
											P(MPT_INT,		"nFatigueType")

// Å©·¡ÇÁÆ® ----------------
	C(MC_CRAFT_SHOW,						MCDT_MACHINE2MACHINE, MCF_S2C, "Show Craft UI")
											P(MPT_BLOB,		"vecRecipeID")
											P(MPT_FLOAT,	"fMakeMod")

	C(MC_CRAFT_MAKE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Make Req")
											P(MPT_INT,		"nRecipeID")
	C(MC_CRAFT_MAKE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Make")
											P(MPT_INT,		"nRecipeID")
	C(MC_CRAFT_RECIPE_INSERT_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Recipe Insert Req")
											P(MPT_INT,		"nRecipeID")
	C(MC_CRAFT_RECIPE_INSERT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Recipe Insert")
											P(MPT_INT,		"nRecipeID")

	C(MC_CRAFT_RECIPE_DELETE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Recipe Delete Req")
											P(MPT_INT,		"nRecipeID")
	C(MC_CRAFT_RECIPE_DELETE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Recipe Delete")
											P(MPT_INT,		"nRecipeID")

// ¿©°ü ----------------
	C(MC_INN_BEGIN_SLEEP,					MCDT_MACHINE2MACHINE, MCF_S2C, "Begin Sleep")
	C(MC_INN_END_SLEEP,						MCDT_MACHINE2MACHINE, MCF_S2C, "End Sleep")

// ±æµå ----------------
	C(MC_GUILD_SHOW_CREATE_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "Show Create UI")
	C(MC_GUILD_SHOW_DESTROY_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "Show Destroy UI")

	C(MC_GUILD_CREATE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Create Req")
											P(MPT_WSTR,		"GuildName")
	C(MC_GUILD_CREATE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Create")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_WSTR,		"GuildName")

	C(MC_GUILD_INVITE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Invite Req")
											P(MPT_UID,		"uidPlayer")
	C(MC_GUILD_INVITE_NOTIFY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Invite Notify")
											P(MPT_UID,		"uidPlayer")
											P(MPT_WSTR,		"GuildName")
	C(MC_GUILD_INVITE_RES,					MCDT_MACHINE2MACHINE, MCF_C2S, "Invite Res")
											P(MPT_BOOL,		"bAccept")

	C(MC_GUILD_INVITE_REJECT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Invite Reject")
											P(MPT_UID,		"uidPlayer")

	C(MC_GUILD_JOIN_ME,						MCDT_MACHINE2MACHINE, MCF_S2C, "Join Me")
											P(MPT_BLOB,		"Guild")
											P(MPT_BLOB,		"GuildMember")
	C(MC_GUILD_JOIN_OTHER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Join Other")
											P(MPT_WSTR,		"Name")
											P(MPT_INT,		"nLevel")
											P(MPT_INT,		"nFieldID")
											P(MPT_INT,		"nChannelID")
	C(MC_GUILD_JOIN_SECTOR,					MCDT_MACHINE2MACHINE, MCF_S2C, "Join Sector")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_WSTR,		"strGuildName")

	C(MC_GUILD_LEAVE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Leave Req")
	C(MC_GUILD_LEAVE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Leave")
											P(MPT_WSTR,		"strName")
	C(MC_GUILD_LEAVE_SECTOR,				MCDT_MACHINE2MACHINE, MCF_S2C, "Leave Sector")
											P(MPT_USHORT,	"nPlayerUIID")

	C(MC_GUILD_DESTROY_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Destroy Req")
	C(MC_GUILD_DESTROY,						MCDT_MACHINE2MACHINE, MCF_S2C, "Destroy")

	C(MC_GUILD_ONLINE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Online")
											P(MPT_WSTR,		"strName")
											P(MPT_INT,		"nFieldID")
											P(MPT_INT,		"nChannelID")
	C(MC_GUILD_OFFLINE,						MCDT_MACHINE2MACHINE, MCF_S2C, "Offline")
											P(MPT_WSTR,		"strName")
	C(MC_GUILD_MOVEFIELD,					MCDT_MACHINE2MACHINE, MCF_S2C, "MoveField")
											P(MPT_WSTR,		"strName")
											P(MPT_INT,		"nFieldID")
											P(MPT_INT,		"nChannelID")											

	C(MC_GUILD_CHANGE_MASTER_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Change Master Req")
											P(MPT_WSTR,		"strNewMasterName")
	C(MC_GUILD_CHANGE_MASTER,				MCDT_MACHINE2MACHINE, MCF_S2C, "Change Master")
											P(MPT_WSTR,		"strOldMasterName")
											P(MPT_WSTR,		"strNewMasterName")

	C(MC_GUILD_INFO,						MCDT_MACHINE2MACHINE, MCF_S2C, "Guild info")
											P(MPT_BLOB,	"Guild")
											P(MPT_BLOB,	"vecGuildMember")
	
	C(MC_GUILD_KICK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Kick Req")
											P(MPT_WSTR,		"strName")

	C(MC_GUILD_KICK,						MCDT_MACHINE2MACHINE, MCF_S2C, "Kick")
											P(MPT_WSTR,		"strName")

	C(MC_GUILD_SHOW_STORAGE_UI,				MCDT_MACHINE2MACHINE, MCF_S2C, "Show Storage UI")
											P(MPT_INT,	"nStorageMoney")
											P(MPT_BLOB,	"vecItem")											

	C(MC_GUILD_DEPOSIT_STORAGEMONEY_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Deposit StorageMoney Req")
											P(MPT_INT,		"nDepositMoney")

	C(MC_GUILD_DEPOSIT_STORAGEMONEY,		MCDT_MACHINE2MACHINE, MCF_S2C, "Deposit StorageMoney")
											P(MPT_WSTR,		"strName")
											P(MPT_INT,		"nDepositMoney")
											P(MPT_INT,		"nStorageMoney")

	C(MC_GUILD_WITHDRAW_STORAGEMONEY_REQ,	MCDT_MACHINE2MACHINE, MCF_C2S, "Deposit StorageMoney Req")
											P(MPT_INT,		"nWithdrawMoney")

	C(MC_GUILD_WITHDRAW_STORAGEMONEY,		MCDT_MACHINE2MACHINE, MCF_S2C, "Deposit StorageMoney")
											P(MPT_WSTR,		"strName")
											P(MPT_INT,		"nWithdrawMoney")
											P(MPT_INT,		"nStorageMoney")

	C(MC_GUILD_MOVE_STORAGEITEM,			MCDT_MACHINE2MACHINE, MCF_S2C, "Move StorageItem Sync")
											P(MPT_WSTR,		"strName")											
											P(MPT_BLOB,		"vecItem")
	
	

// °áÅõ ---------------
	C(MC_DUEL_REQUEST,						MCDT_MACHINE2MACHINE, MCF_C2S, "Duel.Request")										
											P(MPT_UID,		"uidTargetPlayer")
	C(MC_DUEL_QUESTION,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Question")										
											P(MPT_UID,		"uidInvitor")
											P(MPT_WSTR,		"strInvitorName")
											P(MPT_BOOL,		"bCombat")
	C(MC_DUEL_QUESTION_RESPOND,				MCDT_MACHINE2MACHINE, MCF_C2S, "Duel.QuestionRespond")										
											P(MPT_BOOL,		"Answer")
	C(MC_DUEL_CANCEL,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Cancel")										
											P(MPT_UID,		"uidFighter1")	
											P(MPT_UID,		"uidFighter2")	

	C(MC_DUEL_READY,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Ready")										
											P(MPT_UID,		"uidFighter1")	
											P(MPT_UID,		"uidFighter2")	
	C(MC_DUEL_FIGHT,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Fight")										
											P(MPT_UID,		"uidFighter1")	
											P(MPT_UID,		"uidFighter2")	
	C(MC_DUEL_FINISHED,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Finished")										
											P(MPT_UID,		"uidWinner")	
											P(MPT_UID,		"uidLoser")	
	C(MC_DUEL_PARTY_READY,					MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Ready")										
											P(MPT_BLOB,		"uidFighter1")	
											P(MPT_BLOB,		"uidFighter2")	
	C(MC_DUEL_PARTY_FIGHT,					MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Fight")										
											P(MPT_BLOB,		"uidFighters")	
	C(MC_DUEL_PARTY_FINISHED,				MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Finished")										
											P(MPT_INT,		"nWinnerTeam")	
											P(MPT_UID,		"uidWinTeamLeader")
											P(MPT_UID,		"uidLoseTeamLeader")
											P(MPT_INT,		"nWinPlayerCount")
											P(MPT_INT,		"nLosePlayerCount")											
	C(MC_DUEL_PARTY_CANCEL,					MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Cancel")										
											P(MPT_BLOB,		"uidFighters")	
	C(MC_DUEL_DEFEATED,						MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.Defeated")										
											P(MPT_UID,		"uidDefeater")	
	C(MC_DUEL_PARTY_REQUEST,				MCDT_MACHINE2MACHINE, MCF_C2S, "Duel.Request")										
											P(MPT_UID,		"uidTargetPlayer")
	C(MC_DUEL_READY_COUNT,					MCDT_MACHINE2MACHINE, MCF_S2C, "Duel.ReadyCount")
											P(MPT_INT,		"nReadySecond")
											

// Åõ±âÀå ------------------------------	------------------------------------------------------------------
	C(MC_BATTLEARENA_REGISTER_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "BattleArena.RegisterRequest")										
	C(MC_BATTLEARENA_REGISTER,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Register")	
											P(MPT_INT,		"nGameType")
	C(MC_BATTLEARENA_DEREGISTER_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "BattleArena.DeregisterRequest")										
	C(MC_BATTLEARENA_DEREGISTER,			MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Deregister")	
	C(MC_BATTLEARENA_MATCHED,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Matched")	
	C(MC_BATTLEARENA_COUNTING,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Counting")	
											P(MPT_FLOAT,	"fWaitSecond")
	C(MC_BATTLEARENA_GAMESTART,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.GameStart")	
											P(MPT_BLOB,		"EntryInfo")
	C(MC_BATTLEARENA_READY_DEATHMATCH,		MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.ReadyDeathmatch")	
											P(MPT_INT,		"nMaxScore")
	C(MC_BATTLEARENA_REJOIN_DEATHMATCH, 	MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.GameStart")	
											P(MPT_FLOAT,	"fGameElaspedTime")
											P(MPT_INT,		"nMaxScore")
											P(MPT_UID,		"Team")
											P(MPT_UID,		"Team")
											P(MPT_INT,		"nScore")
											P(MPT_INT,		"nScore")
										
	C(MC_BATTLEARENA_SCOREBOARD_DEATHMATCH,	MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.ScoreboardForDeathmatch")	
											P(MPT_FLOAT,	"fWaitSecond")
											P(MPT_UID,		"uidWinnerEntry")
											P(MPT_INT,		"nWinnerScore")
											P(MPT_INT,		"nLoserScore")
											P(MPT_FLOAT,	"fGameElaspedTime")
	C(MC_BATTLEARENA_DEATHMATCH_UPDATE,		MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Update")	
											P(MPT_BLOB,		"ScoreInfo")
	C(MC_BATTLEARENA_FINISHED,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Finished")	
	C(MC_BATTLEARENA_DIE,					MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.Die")	
											P(MPT_UID,		"uidPlayer")
											P(MPT_FLOAT,	"fRespawnTime")
	C(MC_BATTLEARENA_REBIRTH_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "BattleArena.RebirthRequest")	

	C(MC_BATTLEARENA_KILL_INFO,				MCDT_MACHINE2MACHINE, MCF_S2C, "BattleArena.KillInfo")
											P(MPT_UID,		"uidKiller")
											P(MPT_UID,		"uidVictim")
											P(MPT_INT,		"nKillingTalentID")
											

// ÅÅ·±Æ®Æ÷Ä¿½º ---------------										
	C(MC_FOCUS_GAIN,						MCDT_MACHINE2MACHINE, MCF_S2C, "Focus.Gain")
											P(MPT_UID,		"uidActor")
											P(MPT_INT,		"nFocusType")
											P(MPT_FLOAT,	"fDurationTime")
	C(MC_FOCUS_LOST,						MCDT_MACHINE2MACHINE, MCF_S2C, "Focus.Lost")										
											P(MPT_UID,		"uidActor")
											P(MPT_INT,		"nFocusType")
	C(MC_FOCUS_UPDATE_BUBBLE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Focus.UpdateBubble")
											P(MPT_INT,		"nFocusType")
											P(MPT_UCHAR,	"nBubblePercentage")



// ÆÈ·¹Æ® ---------------										
	C(MC_PALETTE_SELECT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Select Req")
											P(MPT_UCHAR,			"nNum")
	C(MC_PALETTE_SELECT,					MCDT_MACHINE2MACHINE, MCF_S2C, "Select")
											P(MPT_UCHAR,			"nNum")
	C(MC_PALETTE_SET_PRIMARY_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Set Primary Req")
											P(MPT_UCHAR,			"nNum")
	C(MC_PALETTE_SET_PRIMARY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Set Primary")
											P(MPT_UCHAR,			"nNum")
	C(MC_PALETTE_SET_SECONDARY_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Set Secondary Req")
											P(MPT_UCHAR,			"nNum")
	C(MC_PALETTE_SET_SECONDARY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Set Secondary")
											P(MPT_UCHAR,			"nNum")

	
	C(MC_PALETTE_PUTUP_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Putup Req")
											P(MPT_UCHAR,			"nNum")
											P(MPT_UCHAR,			"nSlot")
											P(MPT_UCHAR,			"nType")
											P(MPT_INT,				"nItemIDorTalentID")
	C(MC_PALETTE_PUTUP,						MCDT_MACHINE2MACHINE, MCF_S2C, "Putup ")
											P(MPT_UCHAR,			"nNum")
											P(MPT_UCHAR,			"nSlot")
											P(MPT_UCHAR,			"nType")
											P(MPT_INT,				"nItemIDorTalentID")
	C(MC_PALETTE_PUTDOWN_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Putdown Req")
											P(MPT_UCHAR,			"nNum")
											P(MPT_UCHAR,			"nSlot")										
	C(MC_PALETTE_PUTDOWN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Putdown")
											P(MPT_BLOB,			"nNum")
											P(MPT_BLOB,			"nSlot")
	C(MC_PALETTE_CHANGE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Change Req")
											P(MPT_UCHAR,			"nNum1")
											P(MPT_UCHAR,			"nSlot1")
											P(MPT_UCHAR,			"nNum2")
											P(MPT_UCHAR,			"nSlot2")
	C(MC_PALETTE_CHANGE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Change")
											P(MPT_UCHAR,			"nNum1")
											P(MPT_UCHAR,			"nSlot1")
											P(MPT_UCHAR,			"nNum2")
											P(MPT_UCHAR,			"nSlot2")

	C(MC_PALETTE_PUTDOWN_ALLTALENT,			MCDT_MACHINE2MACHINE, MCF_S2C, "PutDown AllTalent")

// ¼Ò¿ï ---------------										
	C(MC_SOUL_DRAIN_ME,						MCDT_MACHINE2MACHINE, MCF_S2C, "Drain Me")
											P(MPT_UID,			"uidNPC")
											P(MPT_CHAR,			"nCharmItemEquipSlotID")
											P(MPT_UCHAR,		"nSoulQuantity")

	C(MC_SOUL_DRAIN_OTHER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Drain Other")
											P(MPT_UID,			"uidNPC")
											P(MPT_UID,			"uidAbsorber")	// Èí¼öÀÚ
											P(MPT_UCHAR,		"nSoulType")
											P(MPT_UCHAR,		"nSoulQuantity")

// ÆÑ¼Ç ---------------
	C(MC_FACTION_INCREASE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Faction Relation UP")
											P(MPT_UCHAR,		"nFactionID")
											P(MPT_USHORT,		"nFactionQuantity")

	C(MC_FACTION_DECREASE,					MCDT_MACHINE2MACHINE, MCF_S2C, "Faction Relation Down")
											P(MPT_UCHAR,		"nFactionID")
											P(MPT_USHORT,		"nFactionQuantity")
	

// ÄÆ¾À ---------------
	C(MC_CUTSCENE_BEGIN_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Cutscene Begin Req")
											P(MPT_INT,		"nCutsceneID")
	C(MC_CUTSCENE_BEGIN_ME,					MCDT_MACHINE2MACHINE, MCF_S2C, "Cutscene Begin Me")
											P(MPT_INT,		"nCutsceneID")
	C(MC_CUTSCENE_BEGIN_OTHER,				MCDT_MACHINE2MACHINE, MCF_S2C, "Cutscene Begin Other")
											P(MPT_UID,		"uidPlayer")

	C(MC_CUTSCENE_END_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Cutscene End Req")
											P(MPT_INT,		"nCutsceneID")
	C(MC_CUTSCENE_END_ME,					MCDT_MACHINE2MACHINE, MCF_S2C, "Cutscene End Me")
											P(MPT_INT,		"nCutsceneID")

	C(MC_CUTSCENE_END_OTHER,				MCDT_MACHINE2MACHINE, MCF_S2C, "Cutscene End Other")
											P(MPT_UID,		"uidPlayer")
// È¯°æ --------------------
	C(MC_ENV_PLAY_BGM,						MCDT_MACHINE2MACHINE, MCF_S2C, "Enviroment Play BGM")
											P(MPT_WSTR,		"strBGM Name")

// ¿ìÆí ----------------
	C(MC_MAIL_MAILBOX_IS_OPENED,			MCDT_MACHINE2MACHINE, MCF_S2C, "Mailbox is opened - interaction response")
											P(MPT_BLOB, "TD_MAIL_MAILBOX_MAIL_INFO Checksum")

	C(MC_MAIL_MAILBOX_IS_CLOSED,			MCDT_MACHINE2MACHINE, MCF_S2C, "Mailbox is closed")

	C(MC_MAIL_POST_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Post Mail Req")
											P(MPT_SINGLE_BLOB,	"TD_MAIL_POST_REQ_INFO")
											P(MPT_WSTR,			"strMailText")

	C(MC_MAIL_POST_RES,						MCDT_MACHINE2MACHINE, MCF_S2C, "Post Mail Res")
											P(MPT_INT,			"nResult")

	C(MC_MAIL_READ_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Read Mail Req")
											P(MPT_UID,	"uidMail")
	
	C(MC_MAIL_READ_RES,						MCDT_MACHINE2MACHINE, MCF_S2C, "Read Mail Res")
											P(MPT_SINGLE_BLOB,	"TD_MAIL_CONTENT_INFO")
											P(MPT_WSTR,			"MailText")
											P(MPT_BLOB,			"Appended Item List(TD_ITEM)")

	C(MC_MAIL_DELETE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Delete Mail Req")
											P(MPT_UID,	"uidMail")

	C(MC_MAIL_DELETE_RES,					MCDT_MACHINE2MACHINE, MCF_S2C, "Delete Mail Res")
											P(MPT_UID,	"uidMail")

	C(MC_MAIL_TAKE_APPENDED_ITEM_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Take Appended Item Req")
											P(MPT_UID,		"uidMail")
											P(MPT_UCHAR,	"MailSlotID")

	C(MC_MAIL_TAKE_APPENDED_ITEM_RES,		MCDT_MACHINE2MACHINE, MCF_S2C, "Take Appended Item Res")
											P(MPT_UID,		"uidMail")
											P(MPT_UCHAR,	"MailSlotID")
											P(MPT_INT,		"NewThumbnailItemID")

	C(MC_MAIL_TAKE_APPENDED_MONEY_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Take Appended Money Req")
											P(MPT_UID,	"uidMail")

	C(MC_MAIL_TAKE_APPENDED_MONEY_RES,		MCDT_MACHINE2MACHINE, MCF_S2C, "Take Appended Money Res")
											P(MPT_UID,	"uidMail")

	C(MC_MAIL_NOTIFY_MAIL,					MCDT_MACHINE2MACHINE, MCF_S2C, "Notify Mail")
											P(MPT_BOOL,	"IsNew")
											P(MPT_BLOB, "TD_MAIL_MAILBOX_MAIL_INFO")

	C(MC_MAIL_APPEND_PUTUP_ITEM_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Req Put Up Item to Mail")
											P(MPT_SINGLE_BLOB,	"TD_MAIL_RESERVE_ITEM")

	C(MC_MAIL_APPEND_PUTUP_ITEM_RES,		MCDT_MACHINE2MACHINE, MCF_S2C, "Res Put Up Item to Mail")
											P(MPT_SINGLE_BLOB,	"TD_MAIL_RESERVE_ITEM")

	C(MC_MAIL_APPEND_PUTDOWN_ITEM_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Req Put Down Item from Mail")
											P(MPT_SINGLE_BLOB,	"TD_MAIL_RESERVE_ITEM")

	C(MC_MAIL_APPEND_PUTDOWN_ITEM_RES,		MCDT_MACHINE2MACHINE, MCF_S2C, "Res Put Down Item from Mail")											
											P(MPT_SINGLE_BLOB,	"TD_MAIL_RESERVE_ITEM")

	C(MC_MAIL_APPEND_RESET_ITEM_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Reset Appended Mail Item")

// °­È­ ----------------
	C(MC_ENCHANT_CHECK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Enchant Request")
											P(MPT_INT,		"nTargetSlotType")
											P(MPT_INT,		"nTargetSlotID")
											P(MPT_INT,		"nEnchantStoneSlotID")
											P(MPT_INT,		"nEnchantAgentSlotID")

	C(MC_ENCHANT_CHECK_RESULT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Enchant Request")
											P(MPT_INT,		"nErrorCode")

	C(MC_ENCHANT_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Enchant Request")
											P(MPT_INT,		"nTargetSlotType")
											P(MPT_INT,		"nTargetSlotID")
											P(MPT_INT,		"nEnchantStoneSlotID")
											P(MPT_INT,		"nEnchantAgentSlotID")
	C(MC_ENCHANT_SUCCESS,					MCDT_MACHINE2MACHINE, MCF_S2C, "Enchant Success")
											P(MPT_BOOL,		"EquipSlot")
											P(MPT_INT,		"nItemSlot")
											P(MPT_CHAR,		"nEnchantSlot")
											P(MPT_INT,		"nEnchantItemID")
	C(MC_ENCHANT_BROKEN,					MCDT_MACHINE2MACHINE, MCF_S2C, "Enchant Broken")
											P(MPT_BOOL,		"EquipSlot")
											P(MPT_INT,		"nItemSlot")
											P(MPT_CHAR,		"nEnchantSlot")
	C(MC_ENCHANT_PREPARE,					MCDT_MACHINE2MACHINE, MCF_C2S, "Enchant Prepare")
	C(MC_ENCHANT_CANCEL,					MCDT_MACHINE2MACHINE, MCF_C2S, "Enchant Cancel")

// ÀÚµ¿ÆÄÆ¼ ---------------
	C(MC_AUTOPARTY_ENQUEUE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Enqueue Request")
											P(MPT_INT,		"nQuestID")
	C(MC_AUTOPARTY_INVITE,					MCDT_MACHINE2MACHINE, MCF_S2C, "AutoParty Invite")
											P(MPT_INT,		"nQuestID")
	C(MC_AUTOPARTY_INVITE_RES,				MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Invite Respond")
											P(MPT_BOOL,		"bYes")
	C(MC_AUTOPARTY_INVITE_FAIL,				MCDT_MACHINE2MACHINE, MCF_S2C, "AutoParty Invite Failed")
											P(MPT_INT,		"nQuestID")
	C(MC_AUTOPARTY_DEQUEUE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Dequeue Request")
											P(MPT_INT,		"nQuestID")
	C(MC_AUTOPARTY_CHECK_SENSOR_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Check Sensor Request")
											P(MPT_INT,		"nQuestID")
	C(MC_AUTOPARTY_CHECK_SENSOR,			MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Check Sensor")
											P(MPT_INT,		"nQuestID")
											P(MPT_INT,		"nAutoPartyState")
	C(MC_AUTOPARTY_CHANGE_STATE_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "AutoParty Change State Request")
											P(MPT_INT,		"nQuestID")
											P(MPT_INT,		"nAutoPartyState")
	C(MC_AUTOPARTY_CHANGE_STATE,			MCDT_MACHINE2MACHINE, MCF_S2C, "AutoParty Change State")
											P(MPT_INT,		"nQuestID")
											P(MPT_INT,		"nAutoPartyState")

// Äù½ºÆ®PVP ---------------
	C(MC_QUESTPVP_TEAMCOUNT,				MCDT_MACHINE2MACHINE, MCF_S2C, "TeamCount")
											P(MPT_INT,		"nTeamOneCount")											
											P(MPT_INT,		"nTeamTwoCount")

	C(MC_QUESTPVP_ENTER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Enter Request")
	C(MC_QUESTPVP_ENTER,					MCDT_MACHINE2MACHINE, MCF_S2C, "Enter")
											P(MPT_USHORT,	"nPlayerUIID")
											P(MPT_INT,		"nTeam")											

	C(MC_QUESTPVP_BEGIN_EVENT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Begin Event")
											P(MPT_INT,		"nQPEventID")

	C(MC_QUESTPVP_END_EVENT,				MCDT_MACHINE2MACHINE, MCF_S2C, "Begin Event")
											P(MPT_INT,		"nQPEventID")
											P(MPT_INT,		"nWinnerTeam")

	C(MC_QUESTPVP_MARK_NPCPOS,				MCDT_MACHINE2MACHINE, MCF_S2C, "Mark NPCPos")
											P(MPT_INT,		"nNPCID")
											P(MPT_VEC,		"vecPos")
	C(MC_QUESTPVP_UNMARK_NPCPOS,			MCDT_MACHINE2MACHINE, MCF_S2C, "Unmark NPCPos")
											P(MPT_INT,		"nNPCID")

// º¸°üÇÔ -----------------
	C(MC_STORAGE_SHOW_UI,					MCDT_MACHINE2MACHINE, MCF_S2C, "Show UI")
											P(MPT_INT,		"nStorageMoney")
											P(MPT_BLOB,		"vecItem")
											P(MPT_BOOL,		"bSerialize")
	C(MC_STORAGE_DEPOSIT_MONEY_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Deposit Money Req")
											P(MPT_INT,		"nMoney")
	C(MC_STORAGE_DEPOSIT_MONEY,				MCDT_MACHINE2MACHINE, MCF_S2C, "Deposit Money")
											P(MPT_INT,		"nMoney")
	C(MC_STORAGE_WITHDRAW_MONEY_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Withdraw Money Req")
											P(MPT_INT,		"nMoney")
	C(MC_STORAGE_WITHDRAW_MONEY,			MCDT_MACHINE2MACHINE, MCF_S2C, "Withdraw Money")
											P(MPT_INT,		"nMoney")
// GM ---------------
	C(MC_GM_REQUEST_SPAWN,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Spawn NPC")
											P(MPT_INT,		"nNPCID")
											P(MPT_INT,		"nCount")
											P(MPT_VEC,		"vSpawnPos")

	C(MC_GM_SPAWN,							MCDT_MACHINE2MACHINE, MCF_ANY, "Spawn NPC")
											P(MPT_BLOB,		"vecNPCUID")
	

	C(MC_GM_REQUEST_DESPAWN,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Despawn NPC")
											P(MPT_FLOAT,	"fRange")

	C(MC_GM_MOVE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Move")
											P(MPT_INT,		"nFieldID")
											P(MPT_VEC,		"Position")
	C(MC_GM_MOVE_TO_PLAYER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Move To Player")
											P(MPT_WSTR,		"PlayerID")
	C(MC_GM_MOVE_TO_MYSPOT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request move to my spot")

	C(MC_GM_REBIRTH_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Rebirth")
											P(MPT_VEC,		"Position")


	C(MC_GM_GOD_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM God Mode")
	C(MC_GM_GOD,							MCDT_MACHINE2MACHINE, MCF_S2C, "GM God Mode")
											P(MPT_BOOL,		"GOD")
	C(MC_GM_GHOST_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Ghost Mode")
	C(MC_GM_GHOST,							MCDT_MACHINE2MACHINE, MCF_S2C, "GM Ghost Mode")
											P(MPT_BOOL,		"Enable")
	C(MC_GM_AI_RUNNING_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request AI Running")
	C(MC_GM_AI_USE_TALENT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Command AI")
											P(MPT_UID,		"uidNPC")
											P(MPT_WSTR,		"Command")
											P(MPT_WSTR,		"Param")

	C(MC_GM_AI_SET_MONITOR_TARGET,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Set Monitor NPC")
											P(MPT_USHORT,		"nNPCUIID")
											
	C(MC_GM_CHANGE_WEATHER_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Change Weather")
											P(MPT_INT,		"nWeather")

	C(MC_GM_CHANGE_TIME_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Change Time")
											P(MPT_INT,		"nTime")

	C(MC_GM_QUEST_GIVE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Give Quest")
											P(MPT_INT,		"nQue stID")

	C(MC_GM_QUEST_FAIL_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Fail Quest")
											P(MPT_INT,		"nQuestID")

	C(MC_GM_ITEM_GIVE_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Give Item")
											P(MPT_INT,		"nItemID")
											P(MPT_INT,		"nQuantity")

	C(MC_GM_CLEAR_INVENTORY_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Clear Inventory")

	C(MC_GM_QUEST_REWARD_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Quest Reward")
											P(MPT_INT,		"nQuestID")

	C(MC_GM_GET_PLAYERUID_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Get PlayerUID")
											P(MPT_WSTR,		"strPlayerID")
	C(MC_GM_GET_PLAYERUID,					MCDT_MACHINE2MACHINE, MCF_S2C, "Response GM Get PlayerUID")
											P(MPT_UID,		"uidPlayerUID")
	C(MC_GM_REPORT_TARGET_ENTITY,			MCDT_MACHINE2MACHINE, MCF_C2S, "Report Target Entity")
											P(MPT_UID,		"uidTarget")

	C(MC_GM_KILL_ENTITY_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Kill Entity")
											P(MPT_USHORT,	"nUIID")

	C(MC_GM_RANGE_KILL_NPC_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Range Kill NPC")
											P(MPT_FLOAT,		"fRange")										
	C(MC_GM_SET_ME_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Set MyInfo")
											P(MPT_WSTR,		"Type")
											P(MPT_WSTR,		"Value")

	C(MC_GM_QUEST_RESET_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Reset DoneQuest")
	C(MC_GM_QUEST_RESET,					MCDT_MACHINE2MACHINE, MCF_S2C, "Reset DoneQuest")

	C(MC_GM_QUEST_RESET_ALL_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Reset AllQuest")

	C(MC_GM_SET_ITEM_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Set ItemInfo")
											P(MPT_WSTR,		"Type")
											P(MPT_INT,		"nInvenSlotID")											
											P(MPT_INT,		"Value")
	C(MC_GM_NPC_AI_RUNNING_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request GM Toggle NPC AI")
											P(MPT_UID,		"uidNPC")

	C(MC_GM_INSERT_BUFF_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Insert Buff Req")
											P(MPT_INT,		"nBuffID")
											P(MPT_FLOAT,	"fDurationTime")
											P(MPT_FLOAT,	"fPeriodTime")
	C(MC_GM_DELETE_BUFF_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Delete Buff Req")										
											P(MPT_INT,		"nBuffID")

	C(MC_GM_RESET_COOLTIME_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Reset CoolTime")

	C(MC_GM_SHOW_ENEMY_UID_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Show Enemy UID Req")

	C(MC_GM_SHOW_ENEMY_UID,					MCDT_MACHINE2MACHINE, MCF_S2C, "Show Enemy UID")
											P(MPT_BLOB,		"uid")

	C(MC_GM_MOVE_TO_NPC_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Move To NPC Req")
											P(MPT_INT,		"nNPCID")
											P(MPT_INT,		"nFieldID")

	C(MC_GM_BREAK_PART_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Break Part Req")
											P(MPT_UID,		"uidNPC")
											P(MPT_UCHAR,	"nBPartID")

	C(MC_GM_RANGE_BREAK_PART_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Range Break Part Req")
											P(MPT_FLOAT,	"fRange")
											
	C(MC_GM_QUEST_COMPLETE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Quest Complete Req")
											P(MPT_INT,		"nQuestID")

	C(MC_GM_QUEST_VAR_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Quest Var Req")
											P(MPT_INT,		"nQuestID")

	C(MC_GM_QUEST_VAR,						MCDT_MACHINE2MACHINE, MCF_S2C, "Quest Var")
											P(MPT_INT,		"nVar")

	C(MC_GM_LOG_CRT_INSERT_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "FailCRT Log Insert Req")
											P(MPT_INT,		"nCRT")

	C(MC_GM_LOG_CRT_DELETE_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "FailCRT Log Delete Req")
											P(MPT_INT,		"nCRT")

	C(MC_GM_LOG_CRT_LIST,					MCDT_MACHINE2MACHINE, MCF_S2C, "FailCRT Log List")
											P(MPT_BLOB,		"CRTList")

	C(MC_GM_QUERY_MULTILOGIN_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "QueryMultiLogin Req")
	C(MC_GM_QUERY_MULTILOGIN,				MCDT_MACHINE2MACHINE, MCF_S2C, "QueryMultiLogin")
											P(MPT_BOOL,		"bMultiLogin")
											

	C(MC_GM_FACTION_INCREASE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Faction Increase")
											P(MPT_UCHAR,		"nFactionID")
											P(MPT_USHORT,		"nQuantity")
											
	C(MC_GM_FACTION_DECREASE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Faction Decrease")
											P(MPT_UCHAR,		"nFactionID")
											P(MPT_USHORT,		"nQuantity")

	C(MC_GM_FACTION_RESET_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Faction Reset")											

	C(MC_GM_SERVER_DUMP_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request Server Dump")
											P(MPT_WSTR,		"Identifier")
	C(MC_GM_SERVER_DUMP_RESP,				MCDT_MACHINE2MACHINE, MCF_S2C, "Response Server Dump")

	C(MC_GM_ENABLE_ICHECK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Interaction Check On")
	C(MC_GM_DISABLE_ICHECK_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Interaction Check Off")

	C(MC_GM_SET_NPC_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Request Set NPCInfo")
											P(MPT_WSTR,		"Type")
											P(MPT_WSTR,		"Value")

	C(MC_GM_DYE_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Dye")
											P(MPT_INT,		"nSlotType")
											P(MPT_INT,		"nSlotID")
											P(MPT_INT,		"nColor")

	C(MC_GM_SUMMON_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Summon")
											P(MPT_WSTR,		"PlayerID")
	C(MC_GM_REGEN_REQ,						MCDT_MACHINE2MACHINE, MCF_C2S, "Request Regen")

	C(MC_GM_DESPAWNBYID_REQ,				MCDT_MACHINE2MACHINE, MCF_C2S, "Request DespawnByID NPC")
											P(MPT_INT,		"nNPCID")
											P(MPT_FLOAT,	"fRange")
											
	C(MC_GM_CHANGE_SERVER_MODE_REQ,			MCDT_MACHINE2MACHINE, MCF_C2S, "Request Change Server Mode")
											P(MPT_INT,		"nServerMode")

	C(MC_GM_CHANGE_SERVER_MODE,				MCDT_MACHINE2MACHINE, MCF_S2C, "Change Server Mode")
											P(MPT_INT,		"nServerMode")

	C(MC_GM_RESET_EXPO_CHARACTERS_REQ,		MCDT_MACHINE2MACHINE, MCF_C2S, "Request Reset Expo Characters")

	// º¸¾È(GameGuard) ------------------------------------------------------------------------------------------
	C(MC_GG_AUTH_REQ,						MCDT_MACHINE2MACHINE, MCF_S2C, "GameGuard Auth Req")
											P(MPT_SINGLE_BLOB,		"Auth Info")
	C(MC_GG_AUTH_RESPOND,					MCDT_MACHINE2MACHINE, MCF_C2S, "GameGuard Auth Respond")
											P(MPT_SINGLE_BLOB,		"Auth Info")
	C(MC_GG_AUTH_ENABLE,					MCDT_MACHINE2MACHINE, MCF_C2S, "GameGuard Auth Enable")
											P(MPT_BOOL,		"bEnable")
	

	// TEST -------------
	C(MC_DEBUG_STRING,						MCDT_MACHINE2MACHINE, MCF_S2C, "DebugString")
											P(MPT_WSTR,		"Key")
											P(MPT_INT,		"Param1")
											P(MPT_WSTR,		"Text")
											P(MPT_BLOB,		"AdditionData")

	C(MC_REQUEST_DEBUG_STRING,				MCDT_MACHINE2MACHINE, MCF_C2S, "RequestDebugString")
											P(MPT_WSTR,		"Key")
											P(MPT_INT,		"Param1")
											P(MPT_WSTR,		"Text")
											P(MPT_BLOB,		"AdditionData")

	C(MC_AI_DEBUG_MESSAGE,					MCDT_MACHINE2MACHINE, MCF_S2C, "AI Debug Message")
											P(MPT_UID,		"uidNPC")
											P(MPT_WSTR,		"Message")

	C(MC_DEBUG_COMBATCALC,					MCDT_MACHINE2MACHINE, MCF_S2C, "Debug CombatCalc")
											P(MPT_WSTR,		"Type")
											P(MPT_WSTR,		"Message")

	C(MC_DEBUG_NPC_NETLOG,					MCDT_MACHINE2MACHINE, MCF_S2C, "Debug NPC NetLog")
											P(MPT_UID,		"uidNPC")
											P(MPT_BLOB,		"LogData")

	C(MC_DEBUG_ECHO_REQ,					MCDT_MACHINE2MACHINE, MCF_C2S, "Debug Echo Req")
											P(MPT_INT,		"nRouteType")
											P(MPT_INT,		"nDataSize")
											P(MPT_BLOB,		"Data")

	C(MC_DEBUG_ECHO,						MCDT_MACHINE2MACHINE, MCF_S2C, "Debug Echo")
											P(MPT_UID,		"uidRequester")
											P(MPT_BLOB,		"Data")

	C(MC_DEBUG_START_COMMAND_PROFILE,		MCDT_MACHINE2MACHINE, MCF_C2S, "StartCommandProfile")
	C(MC_DEBUG_END_COMMAND_PROFILE,			MCDT_MACHINE2MACHINE, MCF_C2S, "EndCommandProfile")
	C(MC_DEBUG_DUMP_COMMAND_PROFILE,		MCDT_MACHINE2MACHINE, MCF_C2S, "DumpCommandProfile")

	// COMMON --------------
	C(MC_TIME_SYNCH,						MCDT_MACHINE2MACHINE, MCF_S2C, "Time Synch")
											P(MPT_UINT,		"nGlobalTime")


MC_COMM_REQUEST_ACCOUNT_CHAR_LIST			= 1011,		///< (C->S) Ä³¸¯ÅÍ ¸®½ºÆ® ¿äÃ»
	MC_COMM_RESPONSE_ACCOUNT_CHAR_LIST			= 1012,		///< (S->C) Ä³¸¯ÅÍ ¸®½ºÆ® ÀÀ´ä
	MC_COMM_MOVE_TO_GAME_SERVER					= 1013,		///< (S->C) °ÔÀÓ¼­¹ö·Î ÀÌµ¿ÇØ¶ó (From LS To GS)
	MC_COMM_DUPLICATED_PLAYER_LOGIN				= 1014,		///< (S->C) ´Ù¸¥ °÷¿¡¼­ Áßº¹À¸·Î ·Î±×ÀÎ
	MC_COMM_START_MOVE_TO_LOGIN_SERVER_REQ		= 1015,		///< (C->S) Ä³¸¯ÅÍ ¼±ÅÃ È­¸éÀ¸·Î ÀÌµ¿ ½ÃÀÛ ¿äÃ»
	MC_COMM_START_MOVE_TO_LOGIN_SERVER_RES		= 1016,		///< (S->C) Ä³¸¯ÅÍ ¼±ÅÃ È­¸éÀ¸·Î ÀÌµ¿ ½ÃÀÛ ÀÀ´ä

// Ä³¸¯ÅÍ °ü¸® --------------------------------------------------------------------------------------
	MC_CHAR_REQUEST_INSERT_CHAR		= 1020,		///< (C->S) Ä³¸¯ÅÍ »ý¼º ¿äÃ»
	MC_CHAR_RESPONSE_INSERT_CHAR,				///< (S->C) Ä³¸¯ÅÍ »ý¼º ÀÀ´ä
	MC_CHAR_REQUEST_DELETE_CHAR,				///< (C->S) Ä³¸¯ÅÍ »èÁ¦ ¿äÃ»
	MC_CHAR_RESPONSE_DELETE_CHAR,				///< (S->C) Ä³¸¯ÅÍ »èÁ¦ ÀÀ´ä

	MC_CHAR_REQUEST_SEL_MYCHAR,					///< (C->S) ³» Ä³¸¯ÅÍ ¼±ÅÃ
	MC_CHAR_RESPONSE_SEL_MYCHAR,				///< (S->C) Ä³¸¯ÅÍ ¼±ÅÃ ÀÀ´ä

	MC_CHAR_GAMESTART,							///< (C->S) °ÔÀÓ ½ÃÀÛÇÏÀÚ

// Ä³¸¯ÅÍ(CHAR) --------------------------------------------------------------------------------------
	MC_CHAR_MYINFO					= 1040,		///< (S->C) ³» Á¤º¸ Àü´Þ
	MC_CHAR_MYTIMEINFO,							///< (S->C) ³» ½Ã°£ Á¤º¸ Àü´Þ (¹öÇÁ ½Ã°£, ÅÅ·±Æ® ÄðÅ¸ÀÓ, ºÎÈ° ´ë±â½Ã°£)
	MC_CHAR_REBIRTH_REQ,						///< (C->S) ºÎÈ° ¿äÃ» [ÃÖÀûÈ­]
	MC_CHAR_REBIRTH_MYPLAYER,					///< (S->C) ºÎÈ° ³»°Ô ¾Ë¸² [ÃÖÀûÈ­]
	MC_CHAR_REBIRTH_NETPLAYER,					///< (S->C) ºÎÈ° ´Ù¸¥ÀÌµé¿¡°Ô ¾Ë¸² [ÃÖÀûÈ­]
	MC_CHAR_REWARD_EXP,							///< (S->C) °æÇèÄ¡ È¹µæ
	MC_CHAR_LEVEL_UP,							///< (S->C) ·¹º§¾÷
	MC_CHAR_UPDATE_SIMPLE_STATUS,				///< (S->C) »óÅÂ(HP, EN)°¡ º¯È­Çß´Ù. [ÃÖÀûÈ­]
	MC_CHAR_SAVE_SOULBINDING,					///< (S->C) ¼Ò¿ï ¹ÙÀÎµù ÀúÀå
	MC_CHAR_SAVE_CHECKPOINT,					///< (S->C) Ã¼Å©Æ÷ÀÎÆ® ÀúÀå
	MC_CHAR_UPDATE_MONEY,						///< (S->C) ½Ç¹ö È¹µæ
	MC_CHAR_ENEMY_INFO,							///< (S->C) ÀûµéÀÇ HP Á¤º¸
	MC_CHAR_ENEMY_INFO_CLEAR,					///< (S->C) ÀûµéÀÌ ¾ø¾îÁü
	MC_CHAR_UPDATE_TP,							///< (S->C) TP º¯°æ
	MC_CHAR_TIP,								///< (S->C) °³ÀÎ¿ë Narration
	MC_CHAR_ADD_ENEMYNPC,						///< (S->C) ¾î±×·Î¸¦ °¡Áø NPC°¡ Ãß°¡µÊ
	MC_CHAR_DEL_ENEMYNPC,						///< (S->C) ¾î±×·Î¸¦ °¡Áø NPC°¡ »èÁ¦µÊ
	MC_CHAR_TARGET_INFO_REQ,					///< (C->S) ·¹ÀÏÀ» ½÷¼­ ¼±ÅÃµÈ ´ë»óÀÇ ÀÎÆ÷ ¿äÃ»
	MC_CHAR_TARGET_INFO,						///< (S->C) ·¹ÀÏÀ» ½÷¼­ ¼±ÅÃµÈ ´ë»óÀÇ ÀÎÆ÷
	MC_CHAR_DIE_REQ,							///< (C->S) ÀÚ»ì ¿äÃ»

// Á¤º¸ ///////////////
	MC_FIELD_IN_PLAYER				= 1115,		///< (S->C) ÇÃ·¹ÀÌ¾î µé¾î¿È [ÃÖÀûÈ­]
	MC_FIELD_OUT_PLAYER				= 1116,		///< (S->C) ÇÃ·¹ÀÌ¾î ³ª°¨ [ÃÖÀûÈ­]
	MC_FIELD_IN_NPC					= 1117,		///< (S->C) NPC µé¾î¿È
	MC_FIELD_OUT_NPC				= 1118,		///< (S->C) NPC ³ª°¨ [ÃÖÀûÈ­]
	MC_FIELD_IN_BUFFENTITY			= 1119,		///< (S->C) ¸¶¹ýÁø »ý±è [ÃÖÀûÈ­]
	MC_FIELD_OUT_BUFFENTITY			= 1120,		///< (S->C) ¸¶¹ýÁø ¾ø¾îÁü [ÃÖÀûÈ­]
	MC_FIELD_TRAP_TRIGGERED			= 1121,		///< (S->C) Æ®·¦ ¹â¾Æ¼­ ¾ø¾îÁü [ÃÖÀûÈ­]
	MC_FIELD_SECTOR_ENTITY_INFO		= 1123,		///< (S->C) ÁÖÀ§ ¿£Æ¼Æ¼ Á¤º¸
	MC_FIELD_SET_TIME				= 1124,		///< (S->C) °ÔÀÓ ½Ã°£ ¼³Á¤ [ÃÖÀûÈ­]
	MC_FIELD_SET_WEATHER			= 1125,		///< (S->C) °ÔÀÓ ³¯¾¾ ¼³Á¤ [ÃÖÀûÈ­]
	MC_FIELD_SET_TIME_WEATHER		= 1126,		///< (S->C) ½Ã°£, ³¯¾¾ ¼³Á¤ [ÃÖÀûÈ­]
	MC_FIELD_WHO_IS_REQ				= 1127,		///< (C->S) ÇØ´ç UID°¡ ´©±¸³Ä (UID)
	MC_FIELD_WHO_IS_UIID_REQ		= 1128,		///< (C->S) ÇØ´ç UID°¡ ´©±¸³Ä (UIID)
	MC_FIELD_PLAYER_EXTRA_INFO_REQ	= 1129,		///< (C->S) ÇÃ·¹ÀÌ¾î Ãß°¡ Á¤º¸ ÁÖ¼¼¿ä
	MC_FIELD_IN_BPART				= 1130,		///< (S->C) BPART µé¾î¿È
	MC_FIELD_OUT_BPART				= 1131,		///< (S->C) BPART ³ª°¨

// Ä¿¹Â´ÏÆ¼ ///////////
	MC_MSG_REQ						= 1200,		///< (C->S) ´ëÈ­ ¹ß½Å
	MC_MSG_RES,									///< (S->C) ´ëÈ­ ¼ö½Å
	
	MC_MSG_CREATE_CHANNEL_REQ,					///< (C->S) Ã¤ÆÃ Ã¤³Î »ý¼º ¿äÃ»	
	MC_MSG_ENTER_CHANNEL_REQ,					///< (C->S) Ã¤ÆÃ Ã¤³Î ÀÔÀå ¿äÃ»
	MC_MSG_ENTER_CHANNEL,						///< (S->C) Ã¤ÆÃ Ã¤³Î ÀÔÀå
	MC_MSG_LEAVE_CHANNEL_REQ,					///< (C->S) Ã¤ÆÃ Ã¤³Î ÅðÀå ¿äÃ»
	MC_MSG_LEAVE_CHANNEL,						///< (S->C) Ã¤ÆÃ Ã¤³Î ÅðÀå
	MC_MSG_KICK_PLAYER_REQ,						///< (C->S) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î kick ¿äÃ»
	MC_MSG_KICK_PLAYER,							///< (S->C) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î kick
	MC_MSG_BAN_PLAYER_REQ,						///< (C->S) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î ban ¿äÃ»
	MC_MSG_BAN_PLAYER,							///< (S->C) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î ban	
	MC_MSG_UNBAN_PLAYER_REQ,					///< (C->S) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î unban ¿äÃ»	
	MC_MSG_UNBAN_PLAYER,						///< (S->C) Ã¤ÆÃ Ã¤³Î ÇÃ·¹ÀÌ¾î unban
	MC_MSG_CHANGE_HOST_REQ,						///< (C->S) Ã¤ÆÃ Ã¤³Î È£½ºÆ® º¯°æ ¿äÃ»
	MC_MSG_CHANGE_HOST,							///< (S->C) Ã¤ÆÃ Ã¤³Î È£½ºÆ® º¯°æ

	MC_MSG_ENTER_CHANNEL_PLAYER_INFO,			///< (S->C) Ã¤ÆÃ Ã¤³Î ÀÔÀåÇÃ·¹ÀÌ¾î Á¤º¸
	MC_MSG_LEAVE_CHANNEL_PLAYER_INFO,			///< (S->C) Ã¤ÆÃ Ã¤³Î ÅðÀåÇÃ·¹ÀÌ¾î Á¤º¸
	MC_MSG_KICK_PLAYER_INFO,					///< (S->C) Ã¤ÆÃ Ã¤³Î °­ÅðÇÃ·¹ÀÌ¾î Á¤º¸

// ÇÊµå ÀÌµ¿(FIELD) ----------------------------------------------------------------------------------
	MC_FIELD_PREPARING_TO_LOAD		= 1331,		///< (S->C) ·Îµù ÁØºñÇØ¶ó
	MC_FIELD_LOADING_COMPLETE		= 1332,		///< (C->S) ·Îµù ¿Ï·á(¾ÆÁ÷ ·Îµù È­¸é)
	MC_FIELD_START_GAME				= 1333,		///< (S->C) °ÔÀÓ ½ÃÀÛ(·ÎµùÈ­¸é¿¡¼­ °ÔÀÓÈ­¸éÀ¸·Î ÀüÈ¯)
	MC_FIELD_CHANGE_FIELD			= 1334,		///< (S->C) ÇÃ·¹ÀÌ¾î ÇÊµå ÀÌµ¿ (°øÀ¯/ÀÎ½ºÅÏ½º °øÅë)
	MC_FIELD_PREPARE_CHANGE_CHANNEL_REQ	= 1335,		///< (C->S) ÇÃ·¹ÀÌ¾î Ã¤³Î º¯°æ ÁØºñ ¿äÃ»
	MC_FIELD_PREPARE_CHANGE_CHANNEL_RES	= 1336,		///< (S->C) ÇÃ·¹ÀÌ¾î Ã¤³Î º¯°æ ÁØºñ ÀÀ´ä
	MC_FIELD_CANCEL_CHANGE_CHANNEL	= 1337,		///< (C->S) ÇÃ·¹ÀÌ¾î Ã¤³Î º¯°æ ÁØºñ ¿äÃ»
	MC_FIELD_REQUEST_CHANGE_CHANNEL	= 1338,		///< (C->S) ÇÃ·¹ÀÌ¾î Ã¤³Î º¯°æ ¿äÃ» (ÁØºñ ÆÐÅ¶ ÈÄ¿¡ 10ÃÊ µÚ¿¡ ³¯·Á¾ß ÇÔ)
	MC_FIELD_REQUEST_CHANNEL_LIST	= 1339,		///< (C->S) ÇÃ·¹ÀÌ¾î Ã¤³Î ¸ñ·Ï ¿äÃ»
	MC_FIELD_CHANNEL_LIST			= 1340,		///< (S->C) ÇÃ·¹ÀÌ¾î Ã¤³Î ¸ñ·Ï
	MC_FIELD_CANCEL_CHANGE_FIELD	= 1341,		///< (S->C) ÇÊµå ÀÌµ¿ Ãë¼Ò

	MC_DYNAMIC_FIELD_ENTER_REQ		= 1350,		///< (C->S) ÇÃ·¹ÀÌ¾î ´ÙÀÌ³ª¹Í ÇÊµå Âü°¡ (°øÀ¯/ÀÎ½ºÅÏ½º °øÅë)
	MC_DYNAMIC_FIELD_LEAVE_REQ		= 1351,		///< (C->S) ÇÃ·¹ÀÌ¾î ´ÙÀÌ³ª¹Í ÇÊµå ³ª°¡±â
	MC_DYNAMIC_FIELD_EXPIRING		= 1352,		///< (S->C) µ¿ÀûÇÊµå ÆÄ±âÁß ¾Ë¸²
	MC_DYNAMIC_FIELD_CANCEL_EXPIRE	= 1353,		///< (S->C) µ¿ÀûÇÊµå ÆÄ±â cancel


// ¾×¼Ç(ACTION) --------------------------------------------------------------------------------------
	MC_ACTION_FAILED				= 1401,		///< (S->C) Å¬¶óÀÌ¾ðÆ®°¡ ¿äÃ»ÇÑ ¾×¼ÇÀÌ ½ÇÆÐµÇ¾ú´Ù.

	MC_ACTION_MOVE_REQ				= 1411,		///< (C->S) ÇÊµå¿¡¼­ ÀÌµ¿ ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_MOVE					= 1412,		///< (S->C) ÀÌµ¿ [ÃÖÀûÈ­]
	MC_ACTION_STOP_REQ				= 1413,		///< (C->S) ÇÊµå¿¡¼­ Á¤Áö ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_STOP					= 1414,		///< (S->C) Á¤Áö [ÃÖÀûÈ­]
	MC_ACTION_STOP_MOVE_REQ			= 1415,		///< (C->S) ÇÃ·¹ÀÌ¾î Á¤Áö ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_STOP_MOVE				= 1416,		///< (S->C) ÇÃ·¹ÀÌ¾î Á¤Áö [ÃÖÀûÈ­]
	MC_ACTION_ROTATE_REQ			= 1417,		///< (C->S) ¹æÇâ º¯°æ ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_ROTATE				= 1418,		///< (S->C) ¹æÇâ º¯°æ [ÃÖÀûÈ­]

	MC_ACTION_CHANGE_STANCE_REQ		= 1419,		///< (C->S) ½ºÅÄ½º º¯°æ [ÃÖÀûÈ­]
	MC_ACTION_CHANGE_STANCE			= 1420,		///< (S->C) ½ºÅÄ½º º¯°æ [ÃÖÀûÈ­]

	MC_ACTION_ATTACK_MELEE_REQ		= 1421,		///< (C->S) ÇÃ·¹ÀÌ¾î °ø°Ý
	MC_ACTION_ATTACK_ARCHERY_REQ	= 1423,		///< (C->S) È°·Î °ø°Ý ¿äÃ»
	MC_ACTION_ATTACK_ARCHERY		= 1424,		///< (S->C) È°·Î °ø°Ý
	MC_ACTION_ATTACK_ARCHERY_DETAIL_REQ	= 1425,		///< (C->S) È°·Î °ø°Ý ¿äÃ»
	MC_ACTION_ATTACK_ARCHERY_DETAIL		= 1426,		///< (S->C) È°·Î °ø°Ý
	MC_ACTION_ATTACK_GUN_REQ		= 1427,		///< (C->S) ÃÑÀ¸·Î °ø°Ý ¿äÃ»
	MC_ACTION_ATTACK_GUN			= 1428,		///< (S->C) ÃÑÀ¸·Î °ø°Ý

	MC_ACTION_ATTACK_CANCEL_REQ		= 1429,		///< (C->S) °ø°Ý Ãë¼Ò [ÃÖÀûÈ­]
	MC_ACTION_ATTACK_CANCEL			= 1430,		///< (S->C) °ø°Ý Ãë¼Ò [ÃÖÀûÈ­]

	MC_ACTION_PREPARE_ATTACK_REQ	= 1431,		///< (C->S) ÇÃ·¹ÀÌ¾î °ø°Ý ÁØºñ (È° ½ÃÀ§ ´ç±â±âµî) [ÃÖÀûÈ­]
	MC_ACTION_PREPARE_ATTACK		= 1432,		///< (S->C) ÇÃ·¹ÀÌ¾î °ø°Ý ÁØºñ [ÃÖÀûÈ­]

	MC_ACTION_GUARD_REQ				= 1433,		///< (C->S) °¡µå ½ÃÀÛ ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_GUARD					= 1434,		///< (S->C) °¡µå ½ÃÀÛ [ÃÖÀûÈ­]
	MC_ACTION_GUARD_FAILED			= 1435,		///< (S->C) °¡µå ½ÇÆÐ
	MC_ACTION_GUARD_RELEASED_REQ	= 1436,		///< (C->S) °¡µå ÇØÁ¦ ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_GUARD_RELEASED		= 1437,		///< (S->C) °¡µå ÇØÁ¦ [ÃÖÀûÈ­]


	MC_ACTION_GUARD_DEFENSE			= 1440,		///< (S->C) ¹æ¾î ¼º°ø [ÃÖÀûÈ­]
	MC_ACTION_GUARD_DEFENSE_PARTIAL	= 1441,		///< (S->C) ¹æ¾î ¼º°ø [ÃÖÀûÈ­]

	MC_ACTION_USE_TALENT_REQ		= 1442,		///< (C->S) ÅÅ·±Æ® »ç¿ë ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_USE_TALENT			= 1443,		///< (S->C) ÅÅ·±Æ® »ç¿ë(Áï½Ã »ç¿ë ÅÅ·±Æ®ÀÏ °æ¿ì ½ÇÁ¦ »ç¿ë, ¾Æ´Ò °æ¿ì ÅÅ·±Æ® ÁØºñ ´Ü°è) [ÃÖÀûÈ­]
	MC_ACTION_ACT_TALENT_REQ		= 1444,		///< (S->C) ÅÅ·±Æ® ½ÇÁ¦ »ç¿ë [ÃÖÀûÈ­]
	MC_ACTION_ACT_TALENT_WITH_HITCAPSULE_REQ = 1445,	///< (S->C) ÅÅ·±Æ® ½ÇÁ¦ »ç¿ë (È÷Æ®Ä¸½¶ Á¤º¸ Æ÷ÇÔ)
	MC_ACTION_ACT_TALENT_WITH_GROUND_REQ	 = 1446,	///< (S->C) ÅÅ·±Æ® ½ÇÁ¦ »ç¿ë (Áö»ó¸ñÇ¥ Á¤º¸ Æ÷ÇÔ)
	MC_ACTION_ACT_TALENT			= 1447,		///< (S->C) ÅÅ·±Æ® ½ÇÁ¦ »ç¿ë ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_ACT_TALENT_WITH_GROUND = 1448,		///< (S->C) ÅÅ·±Æ® ½ÇÁ¦ »ç¿ë ¿äÃ» (¶¥À» ÁöÁ¤) [ÃÖÀûÈ­]
	MC_ACTION_CANCEL_TALENT_REQ		= 1449,		///< (C->S) ÅÅ·±Æ® Ãë¼Ò ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_CANCEL_TALENT			= 1450,		///< (S->C) ÅÅ·±Æ® Ãë¼Ò [ÃÖÀûÈ­]
	MC_ACTION_END_TALENT_COOLDOWN	= 1451,		///< (S->C) Äð´Ù¿î ³¡. ÀÌÁ¦ ÅÅ·±Æ® »ç¿ë °¡´ÉÇÏ´Ù. ÆÄ¶ó¸ÞÅ¸´Â ÅÅ·±Æ® ID [ÃÖÀûÈ­]
	MC_ACTION_EXTRA_ACT_TALENT		= 1452,		///< (S->C) ÅÅ·±Æ® Extra Phase·Î ÀÌµ¿ [ÃÖÀûÈ­]
	MC_ACTION_REQUEST_FAIL_TALENT	= 1453,		///< (S->C) ÅÅ·±Æ® »ç¿ë ¿äÃ» ½ÇÆÐ [ÃÖÀûÈ­]

	MC_ACTION_ACT_TALENT_PROJECTILE	= 1454,		///< (S->C) ¸¶¹ý »ç¿ë2 (ACT_SPELL°ú °°Àº ¿ëµµÀÌÁö¸¸ ÆÄ¶ó¸ÞÅ¸·Î TargetUIDList´ë½Å ¸ñÇ¥ÀÇ À§Ä¡¸¦ »ç¿ëÇÑ´Ù.)
	MC_ACTION_ACT_SPELL_MAGICAREA	= 1455,		///< (S->C) ¸¶¹ý »ç¿ë3 (ACT_SPELL°ú °°Àº ¿ëµµÀÌÁö¸¸ ÆÄ¶ó¸ÞÅ¸·Î TargetUIDList´ë½Å ¸ñÇ¥ÀÇ À§Ä¡¸¦ »ç¿ëÇÑ´Ù.) [ÃÖÀûÈ­]
	MC_ACTION_RECASTING_SPELL		= 1456,		///< (S->C) ¸¶¹ý Ä³½ºÆÃ ½ÃÀÛ (ENÀÌ ºÎÁ·ÇÏ¿© Ä³½ºÆÃÀÌ ¸ØÃá°ÍÀ» Ç¬´Ù.) [ÃÖÀûÈ­]
	
	MC_ACTION_TALENT_HIT				= 1460,		///< (S->C) ÅÅ·±Æ® ¸ÂÀ½(µ¥¹ÌÁö¸¸ ´âÀ» ¶§ ¸í·É¾î »ç¿ë) [ÃÖÀûÈ­]
	MC_ACTION_TALENT_HIT_NO_MF			= 1461,		///< (S->C) ÅÅ·±Æ® ¸ÂÀ½(º¸³»Áà¾ß µÉ °ªÀÌ ¿©·¯°³ÀÏ °æ¿ì) [ÃÖÀûÈ­]
	MC_ACTION_TALENT_HIT_KNOCKBACK_MF	= 1462,		///< (S->C) ÅÅ·±Æ® ¸ÂÀ½(³Ë¹é, ¾²·Î¿ì ¾÷ ¸ð¼ÇÆÑÅÍ) [ÃÖÀûÈ­]
	MC_ACTION_TALENT_HEAL				= 1463,		///< (S->C) ÅÅ·±Æ®·Î È¸º¹

	MC_ACTION_BUFF_HIT				= 1464,		///< (S->C) ¹öÇÁ ¸ÂÀ½(µ¥¹ÌÁö¸¸ ´âÀ» ¶§ ¸í·É¾î »ç¿ë) [ÃÖÀûÈ­]
	MC_ACTION_BUFF_HIT_NO_MF		= 1465,		///< (S->C) ¹öÇÁ ¸ÂÀ½(º¸³»Áà¾ß µÉ °ªÀÌ ¿©·¯°³ÀÏ °æ¿ì) [ÃÖÀûÈ­]
	MC_ACTION_TALENT_HIT_MISS		= 1466,		///< (S->C) ÅÅ·±Æ® È¸ÇÇÇÔ(È¸ÇÇÇßÀ» ¶§) [ÃÖÀûÈ­]
	MC_ACTION_TALENT_DRAIN			= 1467,		///< (S->C) ÅÅ·±Æ®·Î ÀûÀÇ ½ºÅÈÀ» Èí¼öÇÔ [ÃÖÀûÈ­]

	MC_ACTION_BREAK_PART			= 1470,		///< (S->C) NPCÀÇ ºê·¹ÀÌÄ¿ºí ÆÄÃ÷ ÆÄ±«µÊ
	MC_ACTION_BPART_RECOVERY		= 1471,		///< (S->C) NPCÀÇ ºê·¹ÀÌÄ¿ºí º¹±¸
	MC_ACTION_BREAK_PART_EX			= 1472,		///< (S->C) NPCÀÇ ºê·¹ÀÌÄ¿ºí ÆÄÃ÷ ÆÄ±«µÊ (»ç¿ë°¡´ÉÇÑ ÆÄÃ÷ Æ÷ÇÔ)

	MC_ACTION_JUMP_REQ				= 1480,		///< (C->S) Á¡ÇÁ ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_JUMP					= 1481,		///< (S->C) ÇÃ·¹ÀÌ¾î Á¡ÇÁ [ÃÖÀûÈ­]
	MC_ACTION_FALLING_REQ			= 1482,		///< (C->S) ³ª ¶³¾îÁø´Ù [ÃÖÀûÈ­]
	MC_ACTION_FALLING				= 1483,		///< (S->C) ÇÃ·¹ÀÌ¾î ¶³¾îÁü [ÃÖÀûÈ­]
	MC_ACTION_END_FALLING			= 1484,		///< (C->S) ³ª ¶³¾îÁ®¼­ ¶¥¿¡ ´êÀ½ [ÃÖÀûÈ­]
	MC_ACTION_FALLING_DAMAGE		= 1485,		///< (S->C) ³«ÇÏ µ¥¹ÌÁö [ÃÖÀûÈ­]

	MC_ACTION_DIE					= 1490,		///< (S->C) ¿£Æ¼Æ¼ Á×À½	[ÃÖÀûÈ­]
	MC_ACTION_DESPAWN				= 1492,		///< (S->C) ¿£Æ¼Æ¼ ¼Ò¸ê [ÃÖÀûÈ­]

	MC_ACTION_SWIM_REQ				= 1493,		///< (C->S) ¼ö¿µ(or ¼ö¿µ ÇØÁ¦) ¿äÃ» [ÃÖÀûÈ­]

	MC_ACTION_CANCEL_NEXT_ATTACK	= 1500,		///< (S->C) ´ÙÀ½ °ø°ÝÀº Äµ½½ÇÏ¶ó [ÃÖÀûÈ­]

	MC_ACTION_STANDUP_REQ			= 1501,		///< (C->S) ³Ë´Ù¿î¿¡¼­ ±â»ó ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_STANDUP				= 1502,		///< (S->C) ³Ë´Ù¿î¿¡¼­ ±â»ó [ÃÖÀûÈ­]

	MC_ACTION_POS_SYNC_REQ			= 1503,		///< (C->S) MoveReq ÀÌ¿ÜÀÇ À§Ä¡ µ¿±â°¡ ÇÊ¿äÇÏ¸é ÀÌ Ä¿¸Çµå¸¦ »ç¿ëÇÑ´Ù. [ÃÖÀûÈ­]
	MC_ACTION_MOVING_MF_POS_SYNC_REQ  = 1504,	///< (C->S) ¸ð¼Ç ÆÑÅÍ°¡ ³¡³µÀ» ¶§ÀÇ À§Ä¡ µ¿±â ¸ÂÃß±â ¿äÃ» [ÃÖÀûÈ­]

	MC_ACTION_SWITCHING_WEAPON_BEGIN_REQ	= 1510,		///< (C->S) ÁÖ¹«±â/º¸Á¶¹«±â º¯°æ ½ÃÀÛ [ÃÖÀûÈ­]
	MC_ACTION_SWITCHING_WEAPON_BEGIN		= 1511,		///< (S->C) ÁÖ¹«±â/º¸Á¶¹«±â º¯°æ ½ÃÀÛ [ÃÖÀûÈ­]
	MC_ACTION_SWITCHING_WEAPON_REQ	= 1512,		///< (C->S) ÁÖ¹«±â/º¸Á¶¹«±â º¯°æ [ÃÖÀûÈ­]
	MC_ACTION_SWITCHING_WEAPON		= 1513,		///< (S->C) ÁÖ¹«±â/º¸Á¶¹«±â º¯°æ [ÃÖÀûÈ­]

	MC_ACTION_SIT_REQ				= 1514,		///< (C->S) ¾É±â ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_SIT					= 1515,		///< (S->C) ¾É±â [ÃÖÀûÈ­]

	MC_ACTION_SIT_RISE_REQ			= 1516,		///< (C->S) ¼­±â ¿äÃ» [ÃÖÀûÈ­]
	MC_ACTION_SIT_RISE				= 1517,		///< (S->C) ¼­±â [ÃÖÀûÈ­]

	MC_ACTION_HIDE					= 1520,		///< (S->C) Åõ¸íÈ­ - ¼û±â
	MC_ACTION_AFK_BEGIN				= 1521,		///< (S->C) ÀÚ¸®ºñ¿ò ½ÃÀÛ
	MC_ACTION_AFK_END				= 1522,		///< (S->C) ÀÚ¸®ºñ¿ò ³¡
	MC_ACTION_AFK_REQ				= 1523,		///< (C->S) ÀÚ¸®ºñ¿ò ¿äÃ»
	MC_ACTION_END_COMBAT			= 1524,		///< (S->C) ÀüÅõ Á¾·á

	// Æ®¸®°Å Ä¿¸Çµå(TRIGGER) -----------------------------------------------------------------------------
	MC_TRIGGER_TOUCH_SENSOR_ENTER			= 1531,		///< (C->S) ÅÍÄ¡ ¼¾¼­ Áö¿ªÀ¸·Î µé¾î¿È
	MC_TRIGGER_TOUCH_SENSOR_LEAVE			= 1532,		///< (C->S) ÅÍÄ¡ ¼¾¼­ Áö¿ªÀ¸·Î ³ª°¨
	MC_TRIGGER_UPDATE_USABLE_SENSOR			= 1533,		///< (S->C) »ç¿ë°¡´ÉÇÑ ¼¾¼­ Á¤º¸ º¯°æ
	MC_TRIGGER_SENSOR_DESTINATION_SEL_REQ	= 1534,		///< (S->C) ¼¾¼­ÀÇ º¹¼ö ¸ñÀûÁö ¼±ÅÃ ¿äÃ»
	MC_TRIGGER_SENSOR_DESTINATION_SEL		= 1535,		///< (C->S) ¼¾¼­ÀÇ º¹¼ö ¸ñÀûÁö ¼±ÅÃ
	MC_TRIGGER_SENSOR_INTERACTION_REQ		= 1536,		///< (C->S) ¼¾¼­¿¡¼­ ÀÎÅÍ·¢¼Ç ½Ãµµ
	MC_TRIGGER_SENSOR_ERROR_MSG				= 1537,		///< (S->C) ¼¾¼­ ¸ñÀûÁö ¿¡·¯ Åëº¸
	MC_TRIGGER_SENSOR_FOLLOW_PARTY_REQ		= 1538,		///< (S->C) ¼¾¼­¸¦ ÅëÇÑ ÆÄÆ¼¿ø ÀÌµ¿ ½Ã, ¦i¾Æ°¥Áö ¿©ºÎÈ®ÀÎ
	MC_TRIGGER_SENSOR_FOLLOW_PARTY_RES		= 1539,		///< (C->S) ¼¾¼­¸¦ ÅëÇÑ ÆÄÆ¼¿ø ÀÌµ¿ ½Ã, ¦i¾Æ°¥Áö ¿©ºÎ°áÁ¤

// ¸ðµç °³Ã¼ ¸í·É¾î
	MC_ENTITY_WARP					= 1541,		///< (S->C) Entity ¼ø°£ ÀÌµ¿

// NPC Àü¿ë Ä¿¸Çµå(NPC) --------------------------------------------------------------------------------
	MC_NPC_MOVE						= 1601,		///< (S->C) NPC ÀÌµ¿(°È±â) [ÃÖÀûÈ­]
	MC_NPC_FACE_TO					= 1602,		///< (S->C) NPC ¹Ù·Îº¸´Â ¹æÇâ º¯°æ [ÃÖÀûÈ­]
	MC_NPC_RUN						= 1603,		///< (S->C) NPC ÀÌµ¿(´Þ¸®±â) [ÃÖÀûÈ­]
	MC_NPC_MOVE_STOP				= 1604,		///< (S->C) NPC ÀÌµ¿ Á¤Áö [ÃÖÀûÈ­]
	MC_NPC_CHANGE_CAPSULE			= 1609,		///< (S->C) NPCÀÇ Ãæµ¹ Ä¸½¶À» º¯°æ
	MC_NPC_SAY						= 1610,		///< (S->C) NPC ¸»ÇÏ±â
	MC_NPC_BALLOON					= 1611,		///< (S->C) NPC ¸»Ç³¼±
	MC_NPC_SHOUT					= 1612,		///< (S->C) NPC ¿ÜÄ¡±â
	MC_NPC_NARRATION				= 1613,		///< (S->C) ³ª·¹ÀÌ¼Ç
	MC_NPC_SAY_AND_NARRATION		= 1614,		///< (S->C) NPC ¸»Ç³¼±°ú ³ª·¹ÀÌ¼ÇÀ» µ¿½Ã¿¡ ¸»ÇÏ±â
	MC_NPC_CHANGE_ATTACKABLE		= 1615,		///< (S->C) NPC¿¡°Ô °ø°Ý °¡´É ¿©ºÎ º¯°æ
	MC_NPC_ENABLE_INTERACT			= 1616,		///< (S->C) ÀÎÅÍ·¢¼Ç°¡´É ¿©ºÎ º¯°æ
	MC_NPC_CHANGE_COMBAT_TARGET		= 1617,		///< (S->C) ½Î¿ï ¸ñÇ¥ ¾×ÅÍ°¡ º¯°æµÊ
	MC_NPC_SPEWUP					= 1618,		///< (S->C) NPC°¡ ¸ÔÀºÈÄ ¹ñ±â
	MC_NPC_SPEWUP_INTERRUPT			= 1619,		///< (S->C) NPC°¡ ¸ÔÀºÈÄ °ø°ÝÀ» ¹Þ¾Æ ¹ñ±â


// ¾ÆÀÌÅÛ(ITEM) ----------------------------------------------------------------------------------------
	MC_FIELD_REQUEST_FEATURE		= 1701,		///< (C->S) ¿Ü¸ð Á¤º¸ ¿äÃ»
	MC_FIELD_FEATURE				= 1702,		///< (S->C) ¿Ü¸ð Á¤º¸ (ÀåºñÁ¤º¸¸¸)

	MC_ITEM_EQUIP_REQ				= 1703,		///< (C->S) ¾ÆÀÌÅÛ Âø¿ë ¿äÃ»
	MC_ITEM_EQUIP					= 1704,		///< (S->C) ¾ÆÀÌÅÛ Âø¿ë
	MC_ITEM_EQUIP_SWAPTOINVEN		= 1705,		///< (S->C) ÀÎº¥¿¡ ÀÖ´Â ¾ÆÀÌÅÛÀ» Âø¿ëÇÏ¸é¼­ ¹þ°ÜÁø ¾ÆÀÌÅÛÀ» ÀÎº¥À§Ä¡·Î swap

	MC_ITEM_UNEQUIP_REQ				= 1710,		///< (C->S) ¾ÆÀÌÅÛ ÀåÂø ÇØÁ¦ ¿äÃ»
	MC_ITEM_UNEQUIP					= 1711,		///< (S->C) ¾ÆÀÌÅÛ ÀåÂø ÇØÁ¦

	MC_ITEM_CHANGE_LOOK_EQUIP_ITEM	= 1712,		///< (S->C) ¾ÆÀÌÅÛ º¯°æ Á¤º¸ ¾Ë¸²
	MC_ITEM_CHANGE_LOOK_UNEQUIP_ITEM= 1713,		///< (S->C) ¾ÆÀÌÅÛ º¯°æ Á¤º¸ ¾Ë¸²

	MC_ITEM_USE_REQ					= 1714,		///< (C->S) ¾ÆÀÌÅÛ »ç¿ë ¿äÃ»
	MC_ITEM_USE_FAIL				= 1715,		///< (S->C) ¾ÆÀÌÅÛ »ç¿ë ½ÇÆÐ
	MC_ITEM_TALENT					= 1716,		///< (S->C) ¾ÆÀÌÅÛ ÅÅ·±Æ® »ç¿ë Çã¶ô
	
	MC_ITEM_ADD						= 1717,		///< (S->C) ¾ÆÀÌÅÛ È¹µæ
	MC_ITEM_DROP_REQ				= 1718,		///< (C->S) ¾ÆÀÌÅÛ ¹ö¸² ¿äÃ»
	MC_ITEM_REMOVE					= 1719,		///< (S->C)	¾ÆÀÌÅÛ ¹ö¸²	

	MC_ITEM_UPDATE_DURABILITY		= 1722,		///< (S->C)	¾ÆÀÌÅÛ ³»±¸µµ º¯°æ

	MC_ITEM_INTERACT_NPC_REQ		= 1723,		///< (C->S) ¾ÆÀÌÅÛÀÇ ÀÎÅÍ·¢¼Ç ¿äÃ».

	MC_ITEM_MOVE_REQ				= 1726,		///< (C->S) ¾ÆÀÌÅÛ ÀÌµ¿(ÀÌµ¿, ÇÕÄ¡±â, ÂÉ°³±â) ¿äÃ»
	MC_ITEM_MOVE					= 1727,		///< (S->C) ¾ÆÀÌÅÛ ÀÌµ¿

	MC_ITEM_SORT_INVEN_SLOT_REQ		= 1730,		///< (C->S) ¾ÆÀÌÅÛ ÀÎº¥Åä¸® À§Ä¡ Á¤·Ä ¿äÃ»
	MC_ITEM_SORT_INVEN_SLOT			= 1731,		///< (S->C) ¾ÆÀÌÅÛ ÀÎº¥Åä¸® À§Ä¡ Á¤·Ä

	MC_ITEM_DYE_PREPARE_REQ			= 1740,		///< (C->S)	¾ÆÀÌÅÛ ¿°»ö ÁØºñ ¿äÃ»
	MC_ITEM_DYE_PREPARECANCEL_REQ	= 1741,		///< (S->C)	¾ÆÀÌÅÛ ¿°»ö ÁØºñ Ãë¼Ò ¿äÃ»
	MC_ITEM_DYE_REQ					= 1742,		///< (C->S)	¾ÆÀÌÅÛ ¿°»ö ¿äÃ»
	MC_ITEM_DYE						= 1743,		///< (S->C)	¾ÆÀÌÅÛ ¿°»ö	


// Äù½ºÆ®(QUEST) ---------------------------------------------------------------------------------------
	MC_QUEST_GIVE_REQ				= 1801,		///< (C->S) Äù½ºÆ® Á¦°ø ¿äÃ»
	MC_QUEST_GIVE					= 1802,		///< (S->C) Äù½ºÆ® Á¦°ø ÀÀ´ä
	MC_QUEST_UPDATE_OBJECTIVE		= 1803,		///< (S->C) ¿ÀºêÁ§Æ¼ºê ´Þ¼º »óÅÂ º¯°æ ¾Ë¸²
	MC_QUEST_COMPLETE				= 1804,		///< (S->C) ¿ÀºêÁ§Æ¼ºê°¡ ¾ø¾î¼­ Äù½ºÆ®¸¦ ¹ÞÀÚ¸¶ÀÚ ¿Ï·á
	MC_QUEST_INCOMPLETE				= 1805,		///< (S->C) ¿ÀºêÁ§Æ¼ºê°¡ ¾ø¾î¼­ Äù½ºÆ®¸¦ ¹ÞÀÚ¸¶ÀÚ ¿Ï·á
	MC_QUEST_FAIL					= 1806,		///< (S->C) Äù½ºÆ® ½ÇÆÐ
	MC_QUEST_REWARD_REQ				= 1807,		///< (C->S) Äù½ºÆ® º¸»ó ¿äÃ»
	MC_QUEST_REWARD					= 1808,		///< (S->C) Äù½ºÆ® º¸»ó ÀÀ´ä
	MC_QUEST_CANCEL_REQ				= 1809,		///< (C->S) Äù½ºÆ® Ãë¼Ò ¿äÃ»
	MC_QUEST_CANCEL					= 1810,		///< (S->C) Äù½ºÆ® Ãë¼Ò ÀÀ´ä
	MC_QUEST_SHOW_ACCPET_UI			= 1812,		///< (S->C) Äù½ºÆ® ¼ö¶ô UI º¸¿©ÁÖ±â
	MC_QUEST_SHOW_REWARD_UI			= 1813,		///< (S->C) Äù½ºÆ® º¸»ó UI º¸¿©ÁÖ±â
	
	MC_QUEST_SHARE_REQ				= 1814,		///< (C->S) Äù½ºÆ® °øÀ¯ ¿äÃ»
	MC_QUEST_SHARE_REQ_RELAY		= 1815,		///< (S->C) Äù½ºÆ® °øÀ¯ ¿äÃ» Àü´Þ
	MC_QUEST_SHARE					= 1816,		///< (S->C) Äù½ºÆ® °øÀ¯ °á°ú
	MC_QUEST_SHARE_GIVE_REQ			= 1818,		///< (C->S) Äù½ºÆ® °øÀ¯¸¦ ÅëÇÑ Äù½ºÆ® Á¦°ø  ¿äÃ»

	MC_QUEST_INTERACT_QOBJECTIVE_BEGIN	= 1819,		///< (S->C) ÀÎÅÍ·¢¼ÇÀ¸·Î Äù½ºÆ® ¸ñÀû °»½Å ½ÃÀÛ
	MC_QUEST_INTERACT_QOBJECTIVE_CANCEL_REQ	= 1820,	///< (C->S) ÀÎÅÍ·¢¼ÇÀ¸·Î Äù½ºÆ® ¸ñÀû °»½Å Ãë¼Ò ¿äÃ»
	MC_QUEST_INTERACT_QOBJECTIVE_END	= 1821,		///< (S->C) ÀÎÅÍ·¢¼ÇÀ¸·Î Äù½ºÆ® ¸ñÀû °»½Å Á¾·á

	MC_CHALLENGER_QUEST_LIST		= 1822,		///< (S->C) ÀÎÅÍ·¢¼ÇÀ¸·Î Äù½ºÆ® ¸ñÀû °»½Å Á¾·á
	MC_CHALLENGER_QUEST_COMPLETE	= 1823,		///< (S->C) µµÀüÀÚÄù½ºÆ® ¿Ï·á
	MC_CHALLENGER_QUEST_LIST_REFRESH = 1824,	///< (S->C) µµÀüÀÚÄù½ºÆ® ¿Ï·á


// ´ÙÀÌ¾ó·Î±×(DIALOG) -----------------------------------------------------------------------------------
	MC_DIALOG_START					= 1901,		///< (S->C) ´ÙÀÌ¾ó·Î±× ½ÃÀÛ
	MC_DIALOG_SELECT_REQ			= 1902,		///< (C->S) ´ÙÀÌ¾ó·Î±× ºÐ±â ¼±ÅÃ ¿äÃ»
	MC_DIALOG_SELECT				= 1903,		///< (S->C) ´ÙÀÌ¾ó·Î±× ÁøÇà

// Æ®·¹ÀÌ´×(TRAINING)----------------------------------------------------------------------------------------
	MC_TRAINING_TRAIN_REQ	= 2001,		///< (C->S)	ÅÅ·±Æ® ÇÐ½À ¿äÃ»
	MC_TRAINING_TRAIN		= 2002,		///< (S->C)	ÅÅ·±Æ® ÇÐ½À ÀÀ´ä	
	MC_TRAINING_UNTRAIN_ALL	= 2003,		///< (S->C)	¸ðµç ÅÅ·±Æ® ÃÊ±âÈ­
	
// ¹öÇÁ(BUFF) -------------------------------------------------------------------------------------------
	MC_BUFF_GAIN					= 2101,		///< (S->C)	¹öÇÁ È¿°ú ¾òÀ½ [ÃÖÀûÈ­]
	MC_BUFF_LOST_REQ				= 2102,		///< (C->S)	¹öÇÁ È¿°ú ÀÒÀ½ ¿äÃ» [ÃÖÀûÈ­]
	MC_BUFF_LOST					= 2103,		///< (S->C)	¹öÇÁ È¿°ú ÀÒÀ½ [ÃÖÀûÈ­]
	MC_BUFF_HEAL					= 2104,		///< (S->C)	¹öÇÁ È¸º¹È¿°ú

	MC_BUFF_INSTANT_EFFECT_GAIN		= 2105,		///< (S->C) ¹öÇÁÀÇ ÀÎ½ºÅÏÆ® È¿°ú¸¦ ¾òÀ½ [ÃÖÀûÈ­]
	MC_TALENT_INSTANT_EFFECT_GAIN	= 2106,		///< (S->C)	ÅÅ·±Æ®ÀÇ ÀÎ½ºÅÏÆ® È¿°ú¸¦ ¾òÀ½ [ÃÖÀûÈ­]
	MC_BUFF_STACK_INCREASE			= 2107,		///< (S->C) ¹öÇÁ ½ºÅÃ Ãß°¡
	MC_BUFF_STACK_DECREASE			= 2108,		///< (S->C) ¹öÇÁ ½ºÅÃ Á¦°Å

// Æ®·¹ÀÌµå(TRADE) --------------------------------------------------------------------------------------
	MC_TRADE_START_REQ				= 2201,		///< (C->S) °Å·¡ ½ÃÀÛ ¿äÃ»
	MC_TRADE_START_REQ_RELAY		= 2202,		///< (S->C) °Å·¡ ½ÃÀÛ ¿äÃ» Àü´Þ
	MC_TRADE_START_ACCEPT_REQ		= 2203,		///< (C->S) °Å·¡ ½ÃÀÛ ÀÀ´ä ¿äÃ»	
	MC_TRADE_START					= 2204,		///< (S->C) °Å·¡ ½ÃÀÛ ¿äÃ» ÀÀ´ä
	MC_TRADE_START_REJECT			= 2205,		///< (S->C) °Å·¡ ½ÃÀÛ ¿äÃ» °ÅÀý

	MC_TRADE_PUTUP_ITEM_REQ			= 2211,		///< (C->S) °Å·¡Ã¢¿¡ ¾ÆÀÌÅÛ ¿Ã¸®±â¿äÃ»
	MC_TRADE_PUTUP_ITEM				= 2212,		///< (S->C) °Å·¡Ã¢¿¡ ¾ÆÀÌÅÛ ¿Ã¸®±âÀÀ´ä
	MC_TRADE_PUTDOWN_ITEM_REQ		= 2213,		///< (C->S) °Å·¡Ã¢¿¡¼­ ¾ÆÀÌÅÛ ³»¸®±â ¿äÃ»
	MC_TRADE_PUTDOWN_ITEM			= 2214,		///< (S->C) °Å·¡Ã¢¿¡¼­ ¾ÆÀÌÅÛ ³»¸®±â ÀÀ´ä

	MC_TRADE_PUTUP_MONEY_REQ		= 2221,		///< (C->S) °Å·¡Ã¢¿¡ ½Ç¹ö ¿Ã¸®±â ¿äÃ»
	MC_TRADE_PUTUP_MONEY			= 2222,		///< (S->C) °Å·¡Ã¢¿¡ ½Ç¹ö ¿Ã¸®±â ÀÀ´ä ½ÃÀÛ

	MC_TRADE_CANCEL_REQ				= 2231,		///< (C->S) °Å·¡ Ãë¼Ò ¿äÃ»
	MC_TRADE_CANCEL					= 2232,		///< (S->C) °Å·¡ Ãë¼Ò ¿äÃ» ÀÀ´ä
	MC_TRADE_CONFIRM_REQ			= 2233,		///< (C->S) °Å·¡ È®ÀÎ ¿äÃ»
	MC_TRADE_CONFIRM				= 2234,		///< (S->C) °Å·¡ È®ÀÎ ¿äÃ» ÀÀ´ä
	MC_TRADE_COMPLETE				= 2235,		///< (S->C) °Å·¡ ¿Ï·á

// ÆÄÆ¼(PARTY) ------------------------------------------------------------------------------------------
	MC_PARTY_INVITE_REQ					= 2253,		///< (C->S) ÆÄÆ¼ ÃÊ´ë
	MC_PARTY_INVITE						= 2254,		///< (S->C) ÆÄÆ¼ ÃÊ´ë ÀÀ´ä
	MC_PARTY_LEAVE_REQ					= 2255,		///< (C->S) ÆÄÆ¼ ¶°³²
	MC_PARTY_KICK_REQ					= 2257,		///< (C->S) ÆÄÆ¼ Ãß¹æ
	MC_PARTY_INVITE_QUESTION			= 2261,		///< (S->C) ÆÄÆ¼ ÃÊ´ë ¹°À½
	MC_PARTY_INVITE_QUESTION_RESPOND	= 2262,		///< (C->S) ÆÄÆ¼ ÃÊ´ë ¹°À½ ÀÀ´ä
	MC_PARTY_NOTIFY_JOIN				= 2263,		///< (S->C) Âü°¡ ¾Ë¸²
	MC_PARTY_NOTIFY_LEAVE				= 2264,		///< (S->C) ¶°³² ¾Ë¸²
	MC_PARTY_REFRESH_INFO_ALL			= 2265,		///< (S->C) ÆÄÆ¼ÀÇ ¸ðµç Á¤º¸
	MC_PARTY_REFRESH_INFO				= 2266,		///< (S->C) ÆÄÆ¼ Player Á¤º¸
	MC_PARTY_INVITE_FOR_ME_REQ			= 2267,		///< (C->S) ÆÄÆ¼Àå¿¡°Ô °¡ÀÔ ¿äÃ»
	MC_PARTY_INVITE_FOR_ME_QUESTION		= 2268,		///< (S->C) ÆÄÆ¼Àå¿¡°Ô °¡ÀÔ ¿äÃ» ¹°À½
	MC_PARTY_INVITE_FOR_ME_QUESTION_RESPOND	= 2269,	///< (C->S) °¡ÀÔ ¿äÃ» ¹°À½ ÀÀ´ä

	MC_PARTY_ACCEPT_CANCEL				= 2270,		///< (S->C)	°¡ÀÔ ¼ö¶ô ÀÀ´ä Ãë¼Ò

	MC_PARTY_CHANGE_NAME_REQ			= 2273,		///< (C->S) ÆÄÆ¼ ÀÌ¸§ º¯°æ ¿äÃ»
	MC_PARTY_CHANGE_NAME				= 2274,		///< (S->C) ÆÄÆ¼ ÀÌ¸§ º¯°æ
	MC_PARTY_CHANGE_LEADER_REQ			= 2275,		///< (C->S) ÆÄÆ¼Àå º¯°æ ¿äÃ»
	MC_PARTY_CHANGE_LEADER				= 2276,		///< (S->C) ÆÄÆ¼Àå º¯°æ
	MC_PARTY_CHANGE_LOOTING_RULE_REQ	= 2277,		///< (C->S) ÆÄÆ¼ ·çÆÃ·ê º¯°æ ¿äÃ»	[ÃÖÀûÈ­]
	MC_PARTY_CHANGE_LOOTING_RULE		= 2278,		///< (S->C) ÆÄÆ¼ ·çÆÃ·ê º¯°æ		[ÃÖÀûÈ­]
	MC_PARTY_CHANGE_QUESTID_REQ			= 2279,		///< (C->S) ÆÄÆ¼ ¼öÇàÄù½ºÆ® º¯°æ ¿äÃ»
	MC_PARTY_CHANGE_QUESTID				= 2280,		///< (S->C) ÆÄÆ¼ ¼öÇàÄù½ºÆ® º¯°æ
	MC_PARTY_CHANGE_LEADER_NOTIFY		= 2281,		///< (S->C) ÆÄÆ¼Àå º¯°æ ¾Ë¸²


// ¿£ÇÇ¾¾ »óÁ¡(NPC SHOP)
	MC_NPCSHOP_SHOW						= 2351,		///< (S->C) ±¸¸ÅÇÒ¼ö ÀÖ´Â ¾ÆÀÌÅÛ ¸ñ·Ï ÀÀ´ä
	MC_NPCSHOP_BUY_REQ					= 2352,		///< (C->S)	±¸¸Å ¿äÃ»
	MC_NPCSHOP_BUY						= 2353,		///< (S->C)	±¸¸Å ÀÀ´ä
	MC_NPCSHOP_SELL_REQ					= 2354,		///< (C->S)	ÆÇ¸Å ¿äÃ»
	MC_NPCSHOP_SELL						= 2355,		///< (S->C)	ÆÇ¸Å ÀÀ´ä
	MC_NPCSHOP_SELL_VERYCOMMON_REQ		= 2356,		///< (C->S)	¸Å¿ì ÈçÇÔ ¾ÆÀÌÅÛ ÆÇ¸Å ¿äÃ»
	MC_NPCSHOP_SELL_VERYCOMMON			= 2357,		///< (S->C)	¸Å¿ì ÈçÇÔ ¾ÆÀÌÅÛ ÆÇ¸Å ÀÀ´ä
	MC_NPCSHOP_REPAIR_ONE_REQ			= 2358,		///< (C->S)	¼ö¸® ÇÑ°³ ¿äÃ»
	MC_NPCSHOP_REPAIR_ALL_REQ			= 2359,		///< (C->S)	¼ö¸® ¸ðµÎ ¿äÃ»
	MC_NPCSHOP_REPAIR					= 2360,		///< (S->C)	¼ö¸® ÀÀ´ä	

// ·çÆÃ(LOOTING) ----------------------------------------------------------------------------------------	
	MC_LOOT_BEGIN_REQ				= 2401,		///< (C->S) ·çÆÃ ½ÃÀÛ ¿äÃ»
	MC_LOOT_BEGIN					= 2402,		///< (S->C) ·çÆÃ ½ÃÀÛ ÀÀ´ä

	MC_LOOT_SEE_ITEM_REQ			= 2403,		///< (C->S) ¾ÆÀÌÅÛ ¸ñ·Ï ¿äÃ»
	MC_LOOT_SEE_ITEM				= 2404,		///< (S->C) ¾ÆÀÌÅÛ ¸ñ·Ï ÀÀ´ä

	MC_LOOT_LOOT_ITEM_REQ			= 2405,		///< (C->S) Gettable : È¹µæÃ³¸®, Rollable : ÁÖ»çÀ§±¼¸², MasterLootable : UI ¹× NOTIFY Ã³¸®
	MC_LOOT_ROLLRESULT				= 2406,		///< (S->C) ÁÖ»çÀ§ ±¼¸²
	MC_LOOT_MASTERLOOT_UI			= 2407,		///< (S->C) ¸¶½ºÅÍ·í UI
	MC_LOOT_MASTERLOOT_NOTIFY		= 2408,		///< (S->C) ¸¶½ºÅÍ·í °øÁö	
	
	MC_LOOT_MASTERLOOT_ITEM_REQ		= 2410,		///< (C->S) ¾ÆÀÌÅÛ ¸¶½ºÅÍ·í ¿äÃ»
	MC_LOOT_MASTERLOOT_UI_REMOVE	= 2414,		///< (S->C) ¸¶½ºÅÍ·íUI Á¦°Å(½ÃÃ¼°¡ »ç¶óÁ³À»¶§ »ç¿ë)

	MC_LOOT_REFRESH_ITEM			= 2415,		///< (S->C) ·çÆÃ °¡´ÉÇÑ ¾ÆÀÌÅÛ ¸ñ·Ï °»½Å
	MC_LOOT_OTHER_GAIN_ITEM			= 2416,		///< (S->C) ´Ù¸¥ º¸»óÀÚ°¡ ¾ÆÀÌÅÛ È¹µæ

	MC_LOOT_GETTABLE_ITEM_ADD		= 2417,		///< (S->C) È¹µæ °¡´ÉÇÑ ¾ÆÀÌÅÛÀÌ Ãß°¡µÊ(´Ù¸¥ ÇÊµå¿¡ µå¶ø

	MC_LOOT_END_REQ					= 2418,		///< (C->S) ·çÆÃ ¿Ï·á ¿äÃ»
	MC_LOOT_END						= 2419,		///< (S->C) ·çÆÃ ¿Ï·á ÀÀ´ä

	MC_LOOT_INSERT_LOOTABLE_NPC		= 2420,		///< (S->C) ·çÆÃ °¡´ÉÇÏ°Ô µÈ NPC ¸ñ·Ï
	MC_LOOT_REMOVE_LOOTABLE_NPC		= 2421,		///< (S->C) ·çÆÃ ºÒ°¡´ÉÇÏ°Ô µÈ NPC ¸ñ·Ï
	

// ÀÎÅÍ·¢¼Ç(INTERACTION) ----------------------------------------------------------------------------------------
	MC_INTERACTION_INTERACTION_REQ	= 2501,		///< (C->S) ÀÎÅÍ·¢¼Ç ¿äÃ»

// ÀÎÅÍ·¢¼Ç(NPC INTERACTION) ----------------------------------------------------------------------------------------
	MC_NPCINTERACTION_INTERACTION	= 2502,		///< (S->C) ÀÎÅÍ·¢¼Ç ÀÀ´ä
	MC_NPCINTERACTION_IELEMENT_REQ	= 2503,		///< (C->S) ÀÎÅÍ·¢¼Ç ¿¤¸®¸ÕÆ® ¿äÃ»
	MC_NPCINTERACTION_END_REQ		= 2504,		///< (C->S) ÀÎÅÍ·¢¼Ç Á¾·á ¿äÃ»
	MC_NPCINTERACTION_END			= 2505,		///< (S->C) ÀÎÅÍ·¢¼Ç Á¾·á ÀÀ´ä

	MC_NPCINTERACTION_ICON			= 2507,		///< (S->C) NPC ¾ÆÀÌÄÜ ÀÀ´ä
	MC_NPCINTERACTION_LOOT_START	= 2508,		///< (S->C) ÀÎÅÍ·¢¼ÇÀ¸·Î ·çÆÃ ½ÃÀÛ	
	

// ¹Ì´Ï¸Ê, ¿ùµå¸Ê ------------------------------------------------------------------------------------------
	MC_MINIMAP_MARK_POS_REQ			= 2601,		///< (C->S) ¹Ì´Ï¸Ê Å¬¸¯ÁÂÇ¥ ¾Ë¸²
	MC_MINIMAP_MARK_POS				= 2602,		///< (S->C) ¹Ì´Ï¸Ê Å¬¸¯ÁÂÇ¥ ÆÄÆ¼¿øµé¿¡°Ô ¾Ë¸²


// ÇÇ·Îµµ -------------------------------------------------------------------------------------------------
	MC_FATIGUE_UPDATE				= 2701,		///< (S->C) ÇÇ·Îµµ º¯°æ

// Å©·¡ÇÁÆ® -------------------------------------------------------------------------------------------------
	MC_CRAFT_SHOW				= 2801,		///< (S->C) Å©·¡ÇÁÆ® UI º¸¿©ÁÖ±â
	MC_CRAFT_MAKE_REQ			= 2802,		///< (C->S) Å©·¡ÇÁÆÃ ½ÃÀÛ ¿äÃ»
	MC_CRAFT_MAKE				= 2803,		///< (S->C) Å©·¡ÇÁÆÃ ½ÃÀÛ ÀÀ´ä
	MC_CRAFT_RECIPE_INSERT_REQ	= 2804,		///< (C->S) ·¹½ÃÇÇ Ãß°¡ ¿äÃ»
	MC_CRAFT_RECIPE_INSERT		= 2805,		///< (S->C) ·¹½ÃÇÇ Ãß°¡
	MC_CRAFT_RECIPE_DELETE_REQ	= 2806,		///< (C->S) ·¹½ÃÇÇ »èÁ¦ ¿äÃ»
	MC_CRAFT_RECIPE_DELETE		= 2807,		///< (S->C) ·¹½ÃÇÇ »èÁ¦

// ¿©°ü ------------------------------------------------------------------------------------------------
	MC_INN_BEGIN_SLEEP				= 2903,		///< (S->C) ¿©°ü¹æ ÀáÀÚ±â ½ÃÀÛ
	MC_INN_END_SLEEP				= 2904,		///< (C->S) ¿©°ü¹æ ÀáÀÚ±â Á¾·á ¿äÃ»

// ±æµå ------------------------------------------------------------------------------------------------
	MC_GUILD_SHOW_CREATE_UI			= 3001,		///< (S->C) ±æµå »ý¼º UI
	MC_GUILD_SHOW_DESTROY_UI		= 3002,		///< (S->C) ±æµå »ý¼º UI

	MC_GUILD_CREATE_REQ				= 3003,		///< (C->S) ±æµå »ý¼º ¿äÃ»
	MC_GUILD_CREATE					= 3004,		///< (S->C) ±æµå »ý¼º

	MC_GUILD_INVITE_REQ				= 3005,		///< (C->S) ±æµå ÃÊ´ë ¿äÃ»
	MC_GUILD_INVITE_NOTIFY			= 3006,		///< (S->C) ±æµå ÃÊ´ë ¿äÃ» Àü´Þ
	MC_GUILD_INVITE_RES				= 3007,		///< (C->S) ±æµå ÃÊ´ë ÀÀ´ä ¿äÃ»
	MC_GUILD_INVITE_REJECT			= 3008,		///< (S->C) ±æµå ÃÊ´ë °ÅÀý

	MC_GUILD_JOIN_ME				= 3009,		///< (S->C) ³»°¡ ±æµå °¡ÀÔ
	MC_GUILD_JOIN_OTHER				= 3010,		///< (S->C) ´Ù¸¥ »ç¶÷ÀÌ ³»°¡ °¡ÀÔÇÑ ±æµå¿¡ °¡ÀÔ
	MC_GUILD_JOIN_SECTOR			= 3011,		///< (S->C) °°Àº ¼½ÅÍ¿¡ ÀÖ´Â »ç¶÷ÀÌ ³»°¡ °¡ÀÔÇÏÁö ¾ÊÀº ±æµå¿¡ °¡ÀÔ

	MC_GUILD_LEAVE_REQ				= 3012,		///< (C->S) ±æµå Å»Åð ¿äÃ»
	MC_GUILD_LEAVE					= 3013,		///< (S->C) ±æµå Å»Åð
	MC_GUILD_LEAVE_SECTOR			= 3014,		///< (S->C) °°Àº ¼½ÅÍ¿¡ ÀÖ´Â »ç¶÷ÀÌ ³»°¡ °¡ÀÔÇÏÁö ¾ÊÀº ±æµå¿¡¼­ Å»Åð

	MC_GUILD_DESTROY_REQ			= 3015,		///< (C->S) ±æµå ÇØÃ¼ ¿äÃ»
	MC_GUILD_DESTROY				= 3016,		///< (S->C) ±æµå ÇØÃ¼

	MC_GUILD_ONLINE					= 3017,		///< (S->C) ±æµå¿ø Á¢¼Ó
	MC_GUILD_OFFLINE				= 3018,		///< (S->C) ±æµå¿ø Á¾·á
	MC_GUILD_MOVEFIELD				= 3019,		///< (S->C) ±æµå¿ø ÇÊµåÀÌµ¿

	MC_GUILD_CHANGE_MASTER_REQ		= 3020,		///< (C->S) ±æµå ¸¶½ºÅÍ º¯°æ ¿äÃ»
	MC_GUILD_CHANGE_MASTER			= 3021,		///< (S->C) ±æµå ¸¶½ºÅÍ º¯°æ

	MC_GUILD_INFO					= 3022,		///< (S->C) µðºñ¿Í µ¿±âÈ­µÈ ±æµå Á¤º¸ Àü´Þ.

	MC_GUILD_KICK_REQ				= 3023,		///< (C->S) ±æµå °­Åð ¿äÃ»
	MC_GUILD_KICK					= 3024,		///< (S->C) ±æµå °­Åð

	MC_GUILD_SHOW_STORAGE_UI			= 3025,		///< (C->S) ±æµå º¸°üÇÔ UI
	MC_GUILD_DEPOSIT_STORAGEMONEY_REQ	= 3026,		///< (C->S) ±æµå º¸°üÇÔ ÀÔ±Ý ¿äÃ»
	MC_GUILD_DEPOSIT_STORAGEMONEY		= 3027,		///< (S->C) ±æµå º¸°üÇÔ ÀÔ±Ý
	MC_GUILD_WITHDRAW_STORAGEMONEY_REQ	= 3028,		///< (C->S) ±æµå º¸°üÇÔ Ãâ±Ý ¿äÃ»
	MC_GUILD_WITHDRAW_STORAGEMONEY		= 3029,		///< (S->C) ±æµå º¸°üÇÔ Ãâ±Ý
	MC_GUILD_MOVE_STORAGEITEM			= 3030,		///< (S->C) ±æµå º¸°üÇÔ ¾ÆÀÌÅÛ ÀÌµ¿

// °áÅõ ------------------------------------------------------------------------------------------------
	MC_DUEL_REQUEST					= 3101,		///< (C->S) °áÅõ ½ÅÃ»
	MC_DUEL_QUESTION				= 3102,		///< (S->C) °áÅõ ÀÀ´ä¿äÃ»
	MC_DUEL_QUESTION_RESPOND		= 3103,		///< (S->C) °áÅõ ÀÀ´ä
	MC_DUEL_CANCEL					= 3104,		///< (S->C) °áÅõ Ãë¼Ò
	MC_DUEL_READY					= 3105,		///< (S->C) °áÅõ ÁØºñ
	MC_DUEL_FIGHT					= 3106,		///< (S->C) °áÅõ ½ÃÀÛ
	MC_DUEL_FINISHED				= 3107,		///< (S->C) °áÅõ Á¾·á
	MC_DUEL_PARTY_READY				= 3108,		///< (S->C) ÆÄÆ¼ °áÅõ ÁØºñ
	MC_DUEL_PARTY_FIGHT				= 3109,		///< (S->C) ÆÄÆ¼ °áÅõ ½ÃÀÛ
	MC_DUEL_PARTY_CANCEL			= 3110,		///< (S->C) ÆÄÆ¼ °áÅõ Ãë¼Ò
	MC_DUEL_PARTY_FINISHED			= 3111,		///< (S->C) ÆÄÆ¼ °áÅõ Á¾·á
	MC_DUEL_DEFEATED				= 3112,		///< (S->C) °áÅõ ÆÐ¹èÀÚ ¾Ë¸²
	MC_DUEL_PARTY_REQUEST			= 3113,		///< (C->S) ÆÄÆ¼ °áÅõ ½ÅÃ»
	MC_DUEL_READY_COUNT				= 3114,		///< (S->C) °áÅõ ½ÃÀÛ Ä«¿îÆ®´Ù¿î

// Åõ±âÀå ------------------------------------------------------------------------------------------------
	MC_BATTLEARENA_REGISTER_REQ		= 3151,		///< (C->S) Åõ±âÀå ½ÅÃ» ¿äÃ»
	MC_BATTLEARENA_REGISTER			= 3152,		///< (S->C) Åõ±âÀå ½ÅÃ» ÀÀ´ä
	MC_BATTLEARENA_DEREGISTER_REQ	= 3153,		///< (C->S) Åõ±âÀå ½ÅÃ»Ãë¼Ò ¿äÃ»
	MC_BATTLEARENA_DEREGISTER		= 3154,		///< (S->C) Åõ±âÀå ½ÅÃ»Ãë¼Ò ÀÀ´ä
	MC_BATTLEARENA_MATCHED			= 3155,		///< (S->C) Åõ±âÀå ¸ÅÄª ¾Ë¸²
	MC_BATTLEARENA_COUNTING			= 3156,		///< (S->C) Åõ±âÀå °ÔÀÓ½ÃÀÛ Ä«¿îÆÃ ¾Ë¸²
	MC_BATTLEARENA_GAMESTART		= 3157,		///< (S->C) Åõ±âÀå °ÔÀÓ½ÃÀÛ ¾Ë¸²
	MC_BATTLEARENA_READY_DEATHMATCH		= 3158,	///< (S->C) Åõ±âÀå µ¥½º¸ÅÄ¡¿ë ÁØºñ
	MC_BATTLEARENA_SCOREBOARD_DEATHMATCH = 3159,///< (S->C) Åõ±âÀå µ¥½º¸ÅÄ¡¿ë Á¡¼öÆÇ ¾Ë¸²
	MC_BATTLEARENA_REJOIN_DEATHMATCH = 3160,	///< (S->C) Åõ±âÀå µ¥½º¸ÅÄ¡¿ë ÀçÁ¢¼Ó
	MC_BATTLEARENA_DEATHMATCH_UPDATE = 3161,	///< (S->C) Åõ±âÀå µ¥½º¸ÅÄ¡¿ë ¾÷µ¥ÀÌÆ®
	MC_BATTLEARENA_FINISHED			= 3162,		///< (S->C) Åõ±âÀå °ÔÀÓÁ¾·á
	MC_BATTLEARENA_DIE				= 3163,		///< (S->C) Åõ±âÀå Á×À½
	MC_BATTLEARENA_REBIRTH_REQ		= 3164,		///< (C->S) Åõ±âÀå ºÎÈ° ¿äÃ»	
	MC_BATTLEARENA_KILL_INFO		= 3165,		///< (S->C) Åõ±âÀå Å³ Á¤º¸ ¾Ë¸²

// ÅÅ·±Æ®Æ÷Ä¿½º
	MC_FOCUS_GAIN					= 3201,		///< (S->C) ÅÅ·±Æ®Æ÷Ä¿½º¸¦ ¾òÀ½
	MC_FOCUS_LOST					= 3202,		///< (S->C) ÅÅ·±Æ®Æ÷Ä¿½º¸¦ ÀÒÀ½
	MC_FOCUS_UPDATE_BUBBLE			= 3203,		///< (S->C) ÅÅ·±Æ®Æ÷Ä¿½º ¹öºí °¹¼ö °»½Å
	

// ÆÈ·¹Æ®
	MC_PALETTE_SELECT_REQ			= 3301,		///< (C->S) ÆÈ·¹Æ® ¼±ÅÃ ¿äÃ»
	MC_PALETTE_SELECT				= 3302,		///< (S->C) ÆÈ·¹Æ® ¼±ÅÃ
	MC_PALETTE_SET_PRIMARY_REQ		= 3303,		///< (C->S) ÁÖÀåºñ¿¡ ÆÈ·¹Æ® ¼¼ÆÃ ¿äÃ»
	MC_PALETTE_SET_PRIMARY			= 3304,		///< (S->C) ÁÖÀåºñ¿¡ ÆÈ·¹Æ® ¼¼ÆÃ
	MC_PALETTE_SET_SECONDARY_REQ	= 3305,		///< (C->S) º¸Á¶ Àåºñ¿¡ ÆÈ·¹Æ® ¼¼ÆÃ ¿äÃ»
	MC_PALETTE_SET_SECONDARY		= 3306,		///< (S->C) º¸Á¶ Àåºñ¿¡ ÆÈ·¹Æ® ¼¼ÆÃ
	
	MC_PALETTE_PUTUP_REQ			= 3307,		///< (C->S) ÆÈ·¹Æ®¿¡ ¿Ã¸®±â ¿äÃ»
	MC_PALETTE_PUTUP				= 3308,		///< (S->C) ÆÈ·¹Æ®¿¡ ¿Ã¸®±â
	MC_PALETTE_PUTDOWN_REQ			= 3309,		///< (C->S) ÆÈ·¹Æ®¿¡ ³»¸®±â ¿äÃ»
	MC_PALETTE_PUTDOWN				= 3310,		///< (S->C) ÆÈ·¹Æ®¿¡ ³»¸®±â	
	MC_PALETTE_CHANGE_REQ			= 3311,		///< (C->S) ÆÈ·¹Æ®¿¡ ¿Ã·ÁÁø°Í ±³È¯ ¿äÃ»
	MC_PALETTE_CHANGE				= 3312,		///< (S->C) ÆÈ·¹Æ®¿¡ ¿Ã·ÁÁø°Í ±³È¯
	MC_PALETTE_PUTDOWN_ALLTALENT	= 3313,		///< (S->C) ÆÈ·¹Æ®¿¡ ¿Ã·ÁÁø ÅÅ·±Æ® ¸ðµÎ ³»¸®±â

 // ¼Ò¿ï
	MC_SOUL_DRAIN_ME				= 3401,		///< (S->C) ¼Ò¿ï Èí¼ö(º»ÀÎ)
	MC_SOUL_DRAIN_OTHER				= 3402,		///< (S->C) ¼Ò¿ï Èí¼ö(´Ù¸¥ÀÌ)	

// ÆÑ¼Ç
	MC_FACTION_INCREASE				= 3501,		///< (S->C) ÆÑ¼Ç¼öÄ¡°¡ ¿Ã¶ó°¨
	MC_FACTION_DECREASE				= 3502,		///< (S->C) ÆÑ¼Ç¼öÄ¡°¡ ³»·Á°¨

// ÄÆ¾À
	MC_CUTSCENE_BEGIN_REQ			= 3601,		///< (C->S) ÄÆ½Å ½ÃÀÛ ¿äÃ»
	MC_CUTSCENE_BEGIN_ME			= 3602,		///< (S->C) ÄÆ½Å ³»°¡ ½ÃÀÛ
	MC_CUTSCENE_BEGIN_OTHER			= 3603,		///< (S->C) ÄÆ½Å ´Ù¸¥ÀÌ°¡ ½ÃÀÛ
	MC_CUTSCENE_END_REQ				= 3604,		///< (C->S) ÄÆ½Å Á¾·á ¿äÃ»
	MC_CUTSCENE_END_ME				= 3605,		///< (S->C) ÄÆ½Å ³»°¡ Á¾·á
	MC_CUTSCENE_END_OTHER			= 3606,		///< (S->C) ÄÆ½Å ´Ù¸¥ÀÌ°¡ Á¾·á

// È¯°æ
	MC_ENV_PLAY_BGM					= 3700,		///< (S->C) BGM Àç»ý

// ¿ìÆí
	MC_MAIL_MAILBOX_IS_OPENED			= 3800,	///< (S->C) ÆíÁöÇÔ ÀÎÅÍ·º¼Ç ÀÀ´ä (with ÆíÁöÇÔ ¸ñ·Ï)
	MC_MAIL_MAILBOX_IS_CLOSED,					///< (S->C) ÆíÁöÇÔ ÀÎÅÍ·º¼Ç Á¾·á ¾Ë¸²
	MC_MAIL_POST_REQ,							///< (C->S) ÆíÁö ¾²±â ¿äÃ»
	MC_MAIL_POST_RES,							///< (S->C) ÆíÁö ¾²±â ÀÀ´ä
	MC_MAIL_READ_REQ,							///< (C->S) ÆíÁö ÀÐ±â ¿äÃ»
	MC_MAIL_READ_RES,							///< (S->C) ÆíÁö ÀÐ±â ÀÀ´ä
	MC_MAIL_DELETE_REQ,							///< (C->S) ÆíÁö »èÁ¦ ¿äÃ»
	MC_MAIL_DELETE_RES,							///< (S->C) ÆíÁö »èÁ¦ ÀÀ´ä
	MC_MAIL_TAKE_APPENDED_ITEM_REQ,				///< (C->S) Æ¯Á¤ ½½·ÔÀÇ ÆíÁö Ã·ºÎ ¹°Ç° Ãëµæ ¿äÃ»
	MC_MAIL_TAKE_APPENDED_ITEM_RES,				///< (S->C) Æ¯Á¤ ½½·ÔÀÇ ÆíÁö Ã·ºÎ ¹°Ç° Ãëµæ ÀÀ´ä
	MC_MAIL_TAKE_APPENDED_MONEY_REQ,			///< (C->S) Ã·ºÎµÈ µ· Ãëµæ ¿äÃ»
	MC_MAIL_TAKE_APPENDED_MONEY_RES,			///< (S->C) Ã·ºÎµÈ µ· Ãëµæ ÀÀ´ä
	MC_MAIL_NOTIFY_MAIL,						///< (S->C) ÆíÁö Á¤º¸ °»½Å ¾Ë¸² ¾Ë¸²

	MC_MAIL_APPEND_PUTUP_ITEM_REQ,				///< (C->S) ÆíÁö Ã·ºÎ ¾ÆÀÌÅÛ ¿Ã¸®±â ¿äÃ»
	MC_MAIL_APPEND_PUTUP_ITEM_RES,				///< (S->C) ÆíÁö Ã·ºÎ ¾ÆÀÌÅÛ ¿Ã¸®±â ÀÀ´ä
	MC_MAIL_APPEND_PUTDOWN_ITEM_REQ,			///< (C->S) ÆíÁö Ã·ºÎ ¾ÆÀÌÅÛ ³»¸®±â ¿äÃ»
	MC_MAIL_APPEND_PUTDOWN_ITEM_RES,			///< (S->C) ÆíÁö Ã·ºÎ ¾ÆÀÌÅÛ ³»¸®±â ÀÀ´ä	

	MC_MAIL_APPEND_RESET_ITEM_REQ,				///< (C->S)	ÆíÁö Ã·ºÎ ¾ÆÀÌÅÛ ¸ðµÎ ³»¸®±â (or ÆíÁö¾²±â Ãë¼Ò)

// °­È­
	MC_ENCHANT_CHECK_REQ			= 3900,							///< (C->S) °­È­ °¡´É°Ë»ç ¿äÃ»
	MC_ENCHANT_CHECK_RESULT			= 3901,							///< (S->C) °­È­ °¡´É°Ë»ç ÀÀ´ä
	MC_ENCHANT_REQ					= 3902,							///< (C->S) °­È­ ¿äÃ»
	MC_ENCHANT_SUCCESS				= 3903,							///< (S->C) °­È­ ¿Ï·á
	MC_ENCHANT_BROKEN				= 3904,							///< (S->C) °­È­ ½ÇÆÐ
	MC_ENCHANT_PREPARE				= 3905,							///< (C->S) °­È­ ÁØºñ
	MC_ENCHANT_CANCEL				= 3906,							///< (C->S) °­È­ Ãë¼Ò

// ÀÚµ¿ÆÄÆ¼
	MC_AUTOPARTY_ENQUEUE_REQ		= 4000,							///< (C->S) ÀÚµ¿ÆÄÆ¼ Âü¿© ¿äÃ»
	MC_AUTOPARTY_INVITE				= 4001,							///< (S->C) ÀÚµ¿ÆÄÆ¼ °á¼º ¿Ï·á
	MC_AUTOPARTY_INVITE_RES			= 4002,							///< (C->S) ÀÚµ¿ÆÄÆ¼ °á¼º ÀÀ´ä
	MC_AUTOPARTY_INVITE_FAIL		= 4003,							///< (S->C) ÀÚµ¿ÆÄÆ¼ °á¼º ½ÇÆÐ
	MC_AUTOPARTY_DEQUEUE_REQ		= 4004,							///< (C->S) ÀÚµ¿ÆÄÆ¼ ºÒÂü ¿äÃ»
	MC_AUTOPARTY_CHECK_SENSOR_REQ	= 4005,							///< (S->C) ÀÚµ¿ÆÄÆ¼ ¼¾¼­ °Ë»ç ¿äÃ»
	MC_AUTOPARTY_CHECK_SENSOR		= 4006,							///< (C->S) ÀÚµ¿ÆÄÆ¼ ¼¾¼­ °Ë»ç
	MC_AUTOPARTY_CHANGE_STATE_REQ	= 4007,							///< (C->S) ÀÚµ¿ÆÄÆ¼ »óÅÂº¯°æ ¿äÃ»
	MC_AUTOPARTY_CHANGE_STATE		= 4008,							///< (S->C) ÀÚµ¿ÆÄÆ¼ »óÅÂº¯°æ

// Äù½ºÆ®PVP
	MC_QUESTPVP_TEAMCOUNT			= 4100,							///< (S->C) ÆÀÀÎ¿ø¼ö
	MC_QUESTPVP_ENTER_REQ			= 4101,							///< (C->S) QPVPÁö¿ª ÀÔÀå ¿äÃ»
	MC_QUESTPVP_ENTER				= 4102,							///< (S->C) QPVPÁö¿ª ÀÔÀå
	MC_QUESTPVP_BEGIN_EVENT			= 4103,							///< (S->C) QPVP Event ½ÃÀÛ
	MC_QUESTPVP_END_EVENT			= 4104,							///< (S->C) QPVP Event Á¾·á
	MC_QUESTPVP_MARK_NPCPOS			= 4105,							///< (S->C) ¸Ê¿¡ NPCÀÇ ÇöÀçÀ§Ä¡¸¦ Ç¥½Ã
	MC_QUESTPVP_UNMARK_NPCPOS		= 4106,							///< (S->C) ¸Ê¿¡ Ç¥½ÃÇÑ NPCÀÇ À§Ä¡¸¦ Á¦°Å

// º¸°üÇÔ
	MC_STORAGE_SHOW_UI				= 4201,							///< (S->C) º¸°üÇÔ UI(µðºñ¿Í µ¿±âÈ­µÈ º¸°üÇÔ Á¤º¸ Æ÷ÇÔ)
	MC_STORAGE_DEPOSIT_MONEY_REQ	= 4202,							///< (C->S) ÀÔ±Ý ¿äÃ» 
	MC_STORAGE_DEPOSIT_MONEY		= 4203,							///< (S->C) ÀÔ±Ý
	MC_STORAGE_WITHDRAW_MONEY_REQ	= 4204,							///< (C->S) Ãâ±Ý ¿äÃ» 
	MC_STORAGE_WITHDRAW_MONEY		= 4205,							///< (S->C) Ãâ±Ý

// °ü¸®(GM) ------------------------------------------------------------------------------------------
	MC_GM_REQUEST_SPAWN			= 9001,		///< (C->S) NPC ½ºÆù ¿äÃ»
	MC_GM_REQUEST_DESPAWN		= 9002,		///< (C->S) NPC µð½ºÆù ¿äÃ»
	MC_GM_MOVE_REQ					= 9003,		///< (C->S) GM ÀÌµ¿ ¿äÃ»
	MC_GM_MOVE_TO_PLAYER_REQ		= 9004,		///< (C->S) Æ¯Á¤ PC¿¡°Ô·Î ÀÌµ¿ ¿äÃ»
	MC_GM_MOVE_TO_MYSPOT_REQ		= 9005,		///< (C->S) ³» ¿ø À§Ä¡·Î ÀÌµ¿ ¿äÃ»(ÇöÀç´Â Ã³À½ ½ºÆùµÈ °÷)
	MC_GM_REBIRTH_REQ				= 9006,		///< (C->S) GM ºÎÈ° ¿äÃ»
	MC_GM_GOD_REQ					= 9007,		///< (C->S) GM ¹«Àû ¿äÃ»
	MC_GM_CHANGE_WEATHER_REQ		= 9008,		///< (C->S) ³¯¾¾ º¯°æ ¿äÃ»
	MC_GM_CHANGE_TIME_REQ			= 9009,		///< (C->S) ½Ã°£ º¯°æ ¿äÃ»
	MC_GM_QUEST_GIVE_REQ			= 9010,		///< (C->S) Äù½ºÆ® Á¦°øÀ» ¿äÃ»
	MC_GM_ITEM_GIVE_REQ				= 9011,		///< (C->S) ¾ÆÀÌÅÛ Á¦°ø ¿äÃ»
	MC_GM_GOD						= 9012,		///< (S->C) GM ¹«Àû ÀÀ´ä
	MC_GM_AI_RUNNING_REQ			= 9013,		///< (C->S) AI µ¿ÀÛ¾ÈÇÏ°Ô ÇØÁÖ¼¼¿ä.
	MC_GM_AI_USE_TALENT_REQ			= 9014,		///< (C->S) ÇØ´ç NPC¿¡°Ô Æ¯Á¤ ÅÅ·±Æ® »ç¿ëÇÏ¶ó°í ¸í·É
	MC_GM_AI_SET_MONITOR_TARGET		= 9015,		///< (C->S) Å×½ºÆ® ¿ëµµ·Î ¸ð´ÏÅÍ¸µÇÒ Å¸°Ù NPC ¼³Á¤
	MC_GM_GET_PLAYERUID_REQ			= 9016,		///< (C->S) ÇÃ·¹ÀÌ¾î ID·Î UID ¿äÃ»
	MC_GM_GET_PLAYERUID				= 9017,		///< (S->C) ÇÃ·¹ÀÌ¾î ID·Î UID ¿äÃ» ÀÀ´ä
	MC_GM_REPORT_TARGET_ENTITY		= 9020,		///< (C->S) NPC Report
	MC_GM_KILL_ENTITY_REQ			= 9021,		///< (C->S) ¿£ÅÍÆ¼ Á×ÀÌ±â ¿äÃ»
	MC_GM_RANGE_KILL_NPC_REQ		= 9022,		///< (C->S) ¹üÀ§·Î NPC Á×ÀÌ±â ¿äÃ»
	MC_GM_SET_ME_REQ				= 9026,		///< (C->S) ³» Á¤º¸ º¯°æ ¿äÃ»
	MC_GM_QUEST_RESET_REQ			= 9027,		///< (C->S) ¼öÇàÇÑ Äù½ºÆ® ÃÊ±âÈ­ ¿äÃ»
	MC_GM_QUEST_RESET				= 9028,		///< (S->C) ¼öÇàÇÑ Äù½ºÆ® ÃÊ±âÈ­	
	MC_GM_SET_ITEM_REQ				= 9029,		///< (C->S) ¾ÆÀÌÅÛ Á¤º¸ º¯°æ ¿äÃ»
	MC_GM_NPC_AI_RUNNING_REQ		= 9030,		///< (C->S) Æ¯Á¤ NPC AI Åä±Û ¿äÃ»		
	MC_GM_INSERT_BUFF_REQ			= 9035,		///< (C->S)	¹öÇÁ Ãß°¡ ¿äÃ»
	MC_GM_DELETE_BUFF_REQ			= 9036,		///< (C->S)	¹öÇÁ Á¦°Å ¿äÃ»
	MC_GM_RESET_COOLTIME_REQ		= 9037,		///< (C->S)	¹öÇÁ Á¦°Å ¿äÃ»
	MC_GM_SHOW_ENEMY_UID_REQ		= 9038,		///< (C->S)	¾î±×·Î¸¦ °¡Áø NPC UID ¿äÃ»
	MC_GM_SHOW_ENEMY_UID			= 9039,		///< (S->C)	¾î±×·Î¸¦ °¡Áø NPC UID
	MC_GM_MOVE_TO_NPC_REQ			= 9040,		///< (C->S) Æ¯Á¤ NPC¿¡°Ô·Î ÀÌµ¿ ¿äÃ»
	MC_GM_BREAK_PART_REQ			= 9041,		///< (C->S) Æ¯Á¤ NPCÀÇ Æ¯Á¤ bpart ºÎ½Ã±â
	MC_GM_RANGE_BREAK_PART_REQ		= 9042,		///< (C->S) ÁÖº¯ NPCÀÇ ¸ðµç bpart ºÎ½Ã±â
	MC_GM_QUEST_COMPLETE_REQ		= 9043,		///< (C->S) Äù½ºÆ® ¿Ï·á
	MC_GM_QUEST_VAR_REQ				= 9044,		///< (C->S) quest_var ¿äÃ»
	MC_GM_QUEST_VAR					= 9045,		///< (C->S) quest_var
	MC_GM_QUEST_FAIL_REQ			= 9046,		///< (C->S) Äù½ºÆ® ½ÇÆÐ ¿äÃ»
	MC_GM_CLEAR_INVENTORY_REQ		= 9047,		///< (C->S) ÀÎº¥Åä¸® ¾ÆÀÌÅÛ ¸ðµÎ Á¦°Å
	MC_GM_QUEST_REWARD_REQ			= 9048,		///< (C->S) Äù½ºÆ® º¸»ó¹Þ±â

	MC_GM_LOG_CRT_INSERT_REQ		= 9050,		///< (C->S) FailCRT ·Î±× ³²±â±â Ãß°¡
	MC_GM_LOG_CRT_DELETE_REQ		= 9051,		///< (C->S) FailCRT ·Î±× ³²±â±â Á¦°Å
	MC_GM_LOG_CRT_LIST				= 9052,		///< (S->C) FailCRT ·Î±× ³²±â´Â ¸ñ·Ï
	MC_GM_QUERY_MULTILOGIN_REQ		= 9053,		///< (C->S) ¸ÖÆ¼·Î±×ÀÎ ÁúÀÇ ¿äÃ»
	MC_GM_QUERY_MULTILOGIN			= 9054,		///< (S->C) ¸ÖÆ¼·Î±×ÀÎ ÁúÀÇ ÀÀ´ä


	MC_GM_FACTION_INCREASE_REQ		= 9060,		///< (C->S) ÆÑ¼Ç Áõ°¡
	MC_GM_FACTION_DECREASE_REQ		= 9061,		///< (C->S) ÆÑ¼Ç °¨¼Ò
	MC_GM_SERVER_DUMP_REQ			= 9062,		///< (C->S) ¼­¹ö ´ýÇÁ ¿äÃ»
	MC_GM_SERVER_DUMP_RESP			= 9063,		///< (C->S) ¼­¹ö ´ýÇÁ ÀÀ´ä
	MC_GM_GHOST_REQ					= 9064,		///< (C->S) GM °í½ºÆ® ¿äÃ»
	MC_GM_GHOST						= 9065,		///< (S->C) GM °í½ºÆ®

	MC_GM_SPAWN						= 9066,		///< (S->C) GM NPC ½ºÆù Ã³¸® °á°ú
	MC_GM_QUEST_RESET_ALL_REQ		= 9067,		///< (C->S) ¼öÇàÇÑ Äù½ºÆ® ¹× °¡Áö°í ÀÖ´Â Äù½ºÆ® ÃÊ±âÈ­ ¿äÃ»

	MC_GM_ENABLE_ICHECK_REQ			= 9068,		///< (C->S) ÀÎÅÍ·¢¼Ç Ã¼Å© ÄÑ±â
	MC_GM_DISABLE_ICHECK_REQ		= 9069,		///< (C->S) ÀÎÅÍ·¢¼Ç Ã¼Å© ²ô±â



	MC_GM_SET_NPC_REQ				= 9071,		///< (C->S) NPCÀÇ »óÅÂ°ª º¯°æ ¿äÃ»

	MC_GM_DYE_REQ					= 9072,		///< (C->S) ¿°»ö ¿äÃ»

	MC_GM_SUMMON_REQ				= 9073,		///< (S->C) Æ¯Á¤ PC¸¦ ¼ÒÈ¯

	MC_GM_FACTION_RESET_REQ			= 9074,		///< (C->S) ÆÑ¼Ç ÃÊ±âÈ­
	MC_GM_REGEN_REQ					= 9075,		///< (C->S) »ý¸í·Â/Á¤½Å·Â/±â·Â[ÀÚµ¿È¸º¹] Åä±Û ¿äÃ»
	MC_GM_DESPAWNBYID_REQ			= 9076,		///< (C->S) NPCID·Î µð½ºÆù

	MC_GM_CHANGE_SERVER_MODE_REQ	= 9077,		///< (C->S) ¼­¹ö ¸ðµå º¯°æ ¿äÃ»
	MC_GM_CHANGE_SERVER_MODE		= 9078,		///< (S->C) ¼­¹ö ¸ðµå º¯°æ

	MC_GM_RESET_EXPO_CHARACTERS_REQ	= 9079,		///< (C->S) Expo ¿ë Ä³¸¯ÅÍ Reset

// º¸¾È(GameGuard) ------------------------------------------------------------------------------------------
	MC_GG_AUTH_REQ					= 9080,		///< (S->C) ÁÖ±âÀû ÀÎÁõ ¿äÃ»
	MC_GG_AUTH_RESPOND				= 9081,		///< (C->S) ÁÖ±âÀû ÀÎÁõ ÀÀ´ä
	MC_GG_AUTH_ENABLE				= 9082,		///< (C->S) ÀÎÁõ ÄÓÁö ²øÁö ¿©ºÎ

// Å×½ºÆ®(TEST) -----------------------------------------------------------------------------------------
	MC_DEBUG_STRING					= 9103,		///< (S->C) µð¹ö±× ½ºÆ®¸µÀ» Å¬¶óÀÌ¾ðÆ®·Î º¸³»ÁØ´Ù.
	MC_REQUEST_DEBUG_STRING			= 9104,		///< (C->S) µð¹ö±× ½ºÆ®¸µÀ» ¼­¹ö·Î º¸³»ÁØ´Ù.
	MC_AI_DEBUG_MESSAGE				= 9105,		///< (S->C) AI µð¹ö±× Á¤º¸¸¦ Å¬¶óÀÌ¾ðÆ®·Î º¸³»ÁØ´Ù.
	MC_DEBUG_COMBATCALC				= 9106,		///< (S->C) ÀüÅõ °ø½Ä µð¹ö±× Á¤º¸¸¦ Å¬¶óÀÌ¾ðÆ®·Î º¸³»ÁØ´Ù.

	MC_DEBUG_START_COMMAND_PROFILE	= 9107,		///< (C->S) Ä¿¸Çµå ÇÁ·ÎÆÄÀÏ¸µ ½ÃÀÛ
	MC_DEBUG_DUMP_COMMAND_PROFILE	= 9108,		///< (C->S) Ä¿¸Çµå ÇÁ·ÎÆÄÀÏ ´ýÇÁ
	MC_DEBUG_END_COMMAND_PROFILE	= 9109,		///< (C->S) Ä¿¸Çµå ÇÁ·ÎÆÄÀÏ¸µ ³¡

	MC_DEBUG_NPC_NETLOG				= 9110,		///< (S->C) ¼­¹öÀÇ NPC ·Î±ë Á¤º¸¸¦ ¾Ë·ÁÁÖ±â
	
	MC_DEBUG_ECHO_REQ				= 9111,		///< (C->S) ¿¡ÄÚ ¿äÃ»
	MC_DEBUG_ECHO					= 9112,		///< (S->C) ¿¡ÄÚ ÀÀ´ä

// °øÅë(COMMON) -----------------------------------------------------------------------------------------
	MC_TIME_SYNCH					= 9200,		///< (S->C) ¼­¹ö ·ÎÄÃ Å¸ÀÓÀ» Å¬¶ó¿¡°Ô µ¿±âÈ­ ½ÃÅ°±â [ÃÖÀûÈ­]
