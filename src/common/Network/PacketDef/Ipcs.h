#ifndef _CORE_NETWORK_PACKETS_IPCS_H
#define _CORE_NETWORK_PACKETS_IPCS_H

#include <stdint.h>

namespace Sapphire::Network::Packets {

////////////////////////////////////////////////////////////////////////////////
/// Lobby Connection IPC Codes
/**
 * Server IPC Lobby Type Codes.
 */
enum ServerLobbyIpcType :
  uint16_t
{
  LobbyError = 0x0002,
  LobbyServiceAccountList = 0x000C,
  LobbyCharList = 0x000D,
  LobbyCharCreate = 0x000E,
  LobbyEnterWorld = 0x000F,
  LobbyServerList = 0x0015,
  LobbyRetainerList = 0x0017,

};

/**
 * Client IPC Lobby Type Codes.
 */
enum ClientLobbyIpcType :
  uint16_t
{
  ReqCharList = 0x0003, ReqEnterWorld = 0x0004, ClientVersionInfo = 0x0005,

  ReqCharDelete = 0x000A, ReqCharCreate = 0x000B,
};

////////////////////////////////////////////////////////////////////////////////
/// Zone Connection IPC Codes
/**
 * Server IPC Zone Type Codes.
 */
enum ServerZoneIpcType :
  uint16_t
{
  Ping = 0x00D5,                  // updated 6.35 KR
  Init = 0x0138,                  // updated 6.35 KR

  ActorFreeSpawn = 0x027F,        // updated 6.35 KR

  InitZone = 0x01C8,              // updated 6.35 KR
  PrepareZoning = 0x01AF,         // updated 6.35 KR

  EffectResult = 0x00A6,          // updated 6.35 KR
  EffectResultBasic = 0x019A,     // updated 6.35 KR

  ActorControl = 0x0129,          // updated 6.35 KR
  ActorControlTarget = 0x0180,    // updated 6.35 KR
  ActorControlSelf = 0x029D,      // updated 6.35 KR
  ActorCast = 0x0163,             // updated 6.35 KR
  ActorSetPos = 0x0368,           // updated 6.35 KR
  ActorMove = 0x0144,             // updated 6.35 KR
  ActorGauge = 0x00CC,            // updated 6.35 KR

  /*!
   * @brief Used when resting
   */
  UpdateHpMpTp = 0x0222,          // updated 6.35 KR
  UpdateClassInfo = 0x02C8,       // updated 6.35 KR

  ///////////////////////////////////////////////////

  ChatBanned = 0xF06B,
  Playtime = 0x00FD,              // updated 6.35 KR
  Logout = 0x0087,                // updated 6.35 KR
  CFNotify = 0x009B,              // updated 6.35 KR
  CFMemberStatus = 0x0079,
  CFDutyInfo = 0x00F8,            // updated 6.35 KR
  CFPlayerInNeed = 0xF07F,
  CFPreferredRole = 0x0304,       // updated 6.35 KR
  CFCancel = 0x0080,              // updated 6.35 KR
  SocialRequestError = 0xF0AD,

  CFRegistered = 0x0272,          // updated 6.35 KR
  SocialRequestResponse = 0x011C, // updated 6.35 KR
  SocialMessage = 0x010E,         // updated 6.35 KR
  SocialMessage2 = 0x039D,        // updated 6.35 KR
  CancelAllianceForming = 0xF0C6, // updated 4.2

  LogMessage = 0x026D,            // updated 6.35 KR

  Chat = 0x025B,                  // updated 6.35 KR
  PartyChat = 0x0065,

  WorldVisitList = 0xF0FE,        // added 4.5

  SocialList = 0x013F,            // updated 6.35 KR

  ExamineSearchInfo = 0x006A,     // updated 6.35 KR
  UpdateSearchInfo = 0x0309,      // updated 6.35 KR
  InitSearchInfo = 0x01DC,        // updated 6.35 KR
  ExamineSearchComment = 0x015E,  // updated 6.35 KR

  ServerNoticeShort = 0x0157,     // updated 6.35 KR
  ServerNotice = 0x037F,          // updated 6.35 KR
  SystemLogMessage = 0x00AC,      // updated 6.35 KR
  SetOnlineStatus = 0x01A8,       // updated 6.35 KR

  CountdownInitiate = 0x02A0,     // updated 6.35 KR
  CountdownCancel = 0x020B,       // updated 6.35 KR

  PlayerAddedToBlacklist = 0x021E,     // updated 6.35 KR
  PlayerRemovedFromBlacklist = 0x0172, // updated 6.35 KR
  BlackList = 0x0236,                  // updated 6.35 KR

  LinkshellList = 0x2f0,            // updated 6.45
  CrossWorldLinkshellList = 0x0386, // updated 6.35 KR
  FellowshipList = 0x0239,          // updated 6.35 KR

  MailDeleteRequest = 0x01E0,       // updated 6.35 KR

  // 12D - 137 - constant gap between 4.5x -> 5.0
  ReqMoogleMailList = 0xF138,      // updated 5.0
  ReqMoogleMailLetter = 0xF139,    // updated 5.0
  MailLetterNotification = 0x013A, // updated 5.0

  MarketTaxRates = 0x01F8, // updated 5.35h

  MarketBoardSearchResult = 0x023C,       // updated 6.35 KR
  MarketBoardItemListingCount = 0x0125,   // updated 6.35 KR
  MarketBoardItemListingHistory = 0x014C, // updated 6.35 KR
  MarketBoardItemListing = 0x0380,        // updated 6.35 KR
  MarketBoardPurchase = 0x03BC,           // updated 6.35 KR
  ItemMarketBoardInfo = 0x038C,           // updated 6.35 KR

  CharaFreeCompanyTag = 0x013B,     // updated 4.5
  FreeCompanyBoardMsg = 0x03DB,     // updated 5.58h
  FreeCompanyInfo = 0x01D8,         // updated 6.35 KR
  FreeCompanyDialog = 0x023E,       // updated 6.35 KR
  ExamineFreeCompanyInfo = 0x00C3,  // updated 6.35 KR

  FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

  StatusEffectList = 0x0097,        // updated 6.35 KR
  EurekaStatusEffectList = 0x02D0,  // updated 6.35 KR
  BossStatusEffectList = 0x03A1,    // updated 6.35 KR
  StatusEffectList2 = 0x01B2,       // updated 6.35 KR
  StatusEffectList3 = 0x03B3,       // updated 6.35 KR
  Effect = 0x0096,                  // updated 6.35 KR
  AoeEffect8 = 0x019B,              // updated 6.35 KR
  AoeEffect16 = 0x01C3,             // updated 6.35 KR
  AoeEffect24 = 0x008C,             // updated 6.35 KR
  AoeEffect32 = 0x02F7,             // updated 6.35 KR
  PersistantEffect = 0xee,          // updated 6.45

  PlaceFieldMarker = 0x027A,        // updated 6.35 KR
  PlaceFieldMarkerPreset = 0x0206,  // updated 6.35 KR

  GCAffiliation = 0x03E5,         // updated 6.35 KR

  PlayerSpawn = 0x006F,           // updated 6.35 KR
  NpcSpawn = 0x03D5,              // updated 6.35 KR
  NpcSpawn2 = 0x0312,             // updated 6.35 KR

  SomeCustomiseChangePacketProbably = 0x00CD, // added 5.18

  PartyList = 0x36d,              // updated 6.45
  PartyMessage = 0x00AE,          // updated 6.35 KR
  HateRank = 0x8f,                // updated 6.45
  HateList = 0xe3,                // updated 6.45
  ObjectSpawn = 0x0203,           // updated 6.35 KR
  ObjectDespawn = 0x02E3,         // updated 6.35 KR
  SilentSetClassJob = 0xF18E,     // updated 5.0 - seems to be the case, not sure if it's actually used for anything
  PlayerSetup = 0x0367,           // updated 6.35 KR
  PlayerStats = 0x03B1,           // updated 6.35 KR
  ActorOwner = 0x2c5,             // updated 6.45
  PlayerStateFlags = 0x0114,      // updated 6.35 KR
  PlayerClassInfo = 0x0296,       // updated 6.35 KR
  PlayerUpdateLook = 0x0231,      // updated 6.35 KR
  CharaVisualEffect = 0x023F,     // updated 6.35 KR

  ModelEquip = 0x0195,            // updated 6.35 KR
  Examine = 0x0331,               // updated 6.35 KR
  CharaNameReq = 0x0130,          // updated 6.35 KR

  // nb: see #565 on github
  UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
  RetainerSaleHistory = 0x03C3,         // updated 6.35 KR
  RetainerInformation = 0x00FE,         // updated 6.35 KR

  SetLevelSync = 0x1186,          // not updated for 4.4, not sure what it is anymore

  ItemInfo = 0x0258,                   // updated 6.35 KR
  ContainerInfo = 0x011B,              // updated 6.35 KR
  InventoryTransactionFinish = 0x02E4, // updated 6.35 KR
  InventoryTransaction = 0x0276,       // updated 6.35 KR
  CurrencyCrystalInfo = 0x0384,        // updated 6.35 KR

  InventoryActionAck = 0x012B,    // updated 6.35 KR
  UpdateInventorySlot = 0x027D,   // updated 6.35 KR

  HuntingLogEntry = 0x0101,       // updated 6.35 KR

  EventPlay = 0x0291,             // updated 6.35 KR
  EventPlay4 = 0x0170,            // updated 6.35 KR
  EventPlay8 = 0x0350,            // updated 6.35 KR
  EventPlay16 = 0x02E2,           // updated 6.35 KR
  EventPlay32 = 0x0110,           // updated 6.35 KR
  EventPlay64 = 0x02D7,           // updated 6.35 KR
  EventPlay128 = 0x02EE,          // updated 6.35 KR
  EventPlay255 = 0x02C2,          // updated 6.35 KR
  EventStart = 0x014B,            // updated 6.35 KR
  EventFinish = 0x0240,           // updated 6.35 KR

  EventContinue = 0x01EF,         // updated 6.35 KR

  EventLinkshell = 0x1169,

  QuestActiveList = 0x012F,       // updated 6.35 KR
  QuestUpdate = 0x0076,           // updated 6.35 KR
  QuestCompleteList = 0x0282,     // updated 6.35 KR

  QuestFinish = 0x01CF,           // updated 6.35 KR
  MSQTrackerComplete = 0x00F9,    // updated 6.35 KR
  MSQTrackerProgress = 0xF1CD,    // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

  QuestMessage = 0x0220,          // updated 5.58h

  QuestTracker = 0x0307,          // updated 6.35 KR

  Mount = 0x02EB,                 // updated 6.35 KR

  DirectorVars = 0x01FA,          // updated 6.35 KR
  SomeDirectorUnk1 = 0x0084,      // updated 5.18
  SomeDirectorUnk2 = 0xF0C1,      // updated 5.18
  SomeDirectorUnk4 = 0x03DD,      // updated 5.58h
  SomeDirectorUnk8 = 0x028A,      // updated 5.18
  SomeDirectorUnk16 = 0x028C,     // updated 5.18
  DirectorPopUp = 0x03DF,         // updated 5.58h
  DirectorPopUp4 = 0x019B,        // updated 5.58h
  DirectorPopUp8 = 0x0271,        // updated 5.58h

  CFAvailableContents = 0xF1FD,   // updated 4.2

  WeatherChange = 0x00CD,         // updated 6.35 KR
  PlayerTitleList = 0x03CA,       // updated 6.35 KR
  Discovery = 0x02DF,             // updated 6.35 KR

  EorzeaTimeOffset = 0x03A5,      // updated 6.35 KR

  EquipDisplayFlags = 0x00D8,     // updated 6.35 KR

  MiniCactpotInit = 0x0286,       // added 5.31
  ShopMessage = 0x0287,           // updated 5.58h
  LootMessage = 0x018F,           // updated 6.35 KR
  ResultDialog = 0x0333,          // updated 6.35 KR
  DesynthResult = 0x032F,         // updated 6.35 KR

  /// Housing //////////////////////////////////////

  LandSetInitialize = 0x007B,             // updated 6.35 KR
  LandUpdate = 0x020F,                    // updated 6.35 KR
  LandAvailability = 0x01A9,              // updated 6.35 KR
  YardObjectSpawn = 0x0250,               // updated 6.35 KR
  HousingIndoorInitialize = 0x00DC,       // updated 6.35 KR
  LandPriceUpdate = 0x01E5,               // updated 6.35 KR
  LandInfoSign = 0x011A,                  // updated 6.35 KR
  LandRename = 0x0166,                    // updated 6.35 KR
  HousingEstateGreeting = 0x0198,         // updated 6.35 KR
  HousingUpdateLandFlagsSlot = 0x00E1,    // updated 6.35 KR
  HousingLandFlags = 0x020D,              // updated 6.35 KR
  HousingShowEstateGuestAccess = 0x00D7,  // updated 6.35 KR

  HousingObjectInitialize = 0x03B6,       // updated 6.35 KR
  HousingInternalObjectSpawn = 0x0092,    // updated 6.35 KR

  HousingWardInfo = 0x029A,               // updated 6.35 KR
  HousingObjectMove = 0x0221,             // updated 6.35 KR
  HousingObjectDye = 0x0140,              // updated 6.35 KR

  SharedEstateSettingsResponse = 0x039C,  // updated 6.35 KR

  LandUpdateHouseName = 0x0249,           // updated 6.35 KR
  LandSetMap = 0x0216,                    // updated 6.35 KR

  CeremonySetActorAppearance = 0x0152,    // updated 6.35 KR

  //////////////////////////////////////////////////

  DuelChallenge = 0x0277, // 4.2; this is responsible for opening the ui
  PerformNote = 0x2a8,    // updated 6.45

  DutyGauge = 0x02E5, // updated 5.58h

  // daily quest info -> without them sent,  login will take longer...
  DailyQuests = 0x01CC,           // updated 6.35 KR
  DailyQuestRepeatFlags = 0x028A, // updated 6.35 KR

  MapUpdate = 0x0373,             // updated 6.35 KR
  MapUpdate4 = 0x02B6,            // updated 6.35 KR
  MapUpdate8 = 0x0112,            // updated 6.35 KR
  MapUpdate16 = 0x01C7,           // updated 6.35 KR
  MapUpdate32 = 0x00BD,           // updated 6.35 KR
  MapUpdate64 = 0x02EA,           // updated 6.35 KR
  MapUpdate128 = 0x0300,          // updated 6.35 KR

  /// Doman Mahjong //////////////////////////////////////
  MahjongOpenGui = 0x02A4,       // only available in mahjong instance
  MahjongNextRound = 0x02BD,     // initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
  MahjongPlayerAction = 0x02BE,  // tsumo(as in drawing a tile) called chi/pon/kan/riichi
  MahjongEndRoundTsumo = 0x02BF, // called tsumo
  MahjongEndRoundRon = 0x2C0,    // called ron or double ron (waiting for action must be flagged from discard packet to call)
  MahjongTileDiscard = 0x02C1,   // giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
  MahjongPlayersInfo = 0xF2C2,   // actor id, name, rating and stuff..
  // 2C3 and 2C4 are currently unknown
  MahjongEndRoundDraw = 0x02C5, // self explanatory
  MahjongEndGame = 0x02C6,      // finished oorasu(all-last) round; shows a result screen.

  /// Airship & Submarine //////////////////////////////////////
  AirshipTimers = 0x0314,               // updated 6.35 KR
  AirshipStatus = 0x009D,               // updated 6.35 KR
  AirshipStatusList = 0x01D5,           // updated 6.35 KR
  AirshipExplorationResult = 0x00E2,    // updated 6.35 KR

  SubmarineTimers = 0x0283,             // updated 6.35 KR
  SubmarineProgressionStatus = 0x014A,  // updated 6.35 KR
  SubmarineStatusList = 0x0146,         // updated 6.35 KR
  SubmarineExplorationResult = 0x0292,  // updated 6.35 KR

  EnvironmentControl = 0x01B3,          // updated 6.35 KR
  RSVData = 0x01CA,                     // updated 6.35 KR
  IslandWorkshopSupplyDemand = 0x0396,  // updated 6.35 KR
};

/**
 * Client IPC Zone Type Codes.
 */
enum ClientZoneIpcType :
  uint16_t
{
  PingHandler = 0x3bc, // updated 6.45
  InitHandler = 0x372, // updated 6.45

  FinishLoadingHandler = 0x3bd, // updated 6.45

  CFCommenceHandler = 0x0381, // updated 5.58h

  CFCancelHandler = 0x02B2,    // updated 5.58h
  CFRegisterDuty = 0x01BD,     // updated 5.58h
  CFRegisterRoulette = 0x037A, // updated 5.58h
  PlayTimeHandler = 0x02B7,    // updated 5.58h
  LogoutHandler = 0x2b3,       // updated 6.45
  CancelLogout = 0x01e3,       // updated 6.31h
  CFDutyInfoHandler = 0xF078,  // updated 4.2

  SocialReqSendHandler = 0x00D7,  // updated 5.58h
  SocialResponseHandler = 0x023B, // updated 5.58h
  CreateCrossWorldLS = 0x9999,    // updated 5.58h

  ChatHandler = 0x00C0, // updated 6.35 KR
  PartyChatHandler = 0x0065, PartySetLeaderHandler = 0x036C,  // updated 5.58h
  LeavePartyHandler = 0x019D,      // updated 5.58h
  KickPartyMemberHandler = 0x0262, // updated 5.58h
  DisbandPartyHandler = 0x0276,    // updated 5.58h

  SocialListHandler = 0x206,               // updated 6.40
  SetSearchInfoHandler = 0x0244,           // updated 6.35 KR
  ReqSearchInfoHandler = 0x03b0,           // updated 6.31h
  ReqExamineSearchCommentHandler = 0x00E7, // updated 5.0

  ReqRemovePlayerFromBlacklist = 0x00B4, // updated 5.58h
  BlackListHandler = 0x204,              // updated 6.45
  PlayerSearchHandler = 0x037D,          // updated 5.58h

  LinkshellListHandler = 0x03B6, // updated 5.58h

  MarketBoardRequestItemListingInfo = 0x00F4, // updated 5.58h
  MarketBoardRequestItemListings = 0x0122,    // updated 5.58h
  MarketBoardSearch = 0x0082,                 // updated 5.58h
  MarketBoardPurchaseHandler = 0x039D,        // updated 6.35 KR

  ReqExamineFcInfo = 0xF37B, // updated 5.58h (prepended F. Conflicts with FinishLoadingHandler 6.38)

  FcInfoReqHandler = 0x9999, // unknown

  FreeCompanyUpdateShortMessageHandler = 0x0123, // added 5.0

  ReqMarketWishList = 0x00C3, // updated 5.58h

  ReqJoinNoviceNetwork = 0x0129, // updated 4.2

  ReqCountdownInitiate = 0x03e1, // updated 6.31h
  ReqCountdownCancel = 0x023a,   // updated 6.31h

  ZoneLineHandler = 0x251,   // updated 6.45
  ClientTrigger = 0x02F6,    // updated 6.35 KR
  DiscoveryHandler = 0x038B, // updated 5.58h

  SkillHandler = 0x1eb,   // updated 6.45
  GMCommand1 = 0xf5,      // updated 6.45
  GMCommand2 = 0x2ea,     // updated 6.45
  AoESkillHandler = 0x78, // updated 6.45

  UpdatePositionHandler = 0x038A, // updated 6.35 KR

  InventoryModifyHandler = 0x01A5, // updated 6.35 KR

  InventoryEquipRecommendedItems = 0x01C9, // updated 5.58h

  ReqPlaceHousingItem = 0x02D4, // updated 5.58h
  BuildPresetHandler = 0x0223,  // updated 5.58h

  TalkEventHandler = 0x1f6,         // updated 6.45
  EmoteEventHandler = 0x00B0,       // updated 5.58h
  WithinRangeEventHandler = 0x36e,  // updated 6.45
  OutOfRangeEventHandler = 0x2dd,   // updated 6.45
  EnterTeriEventHandler = 0x165,    // updated 6.45
  ShopEventHandler = 0x0384,        // updated 5.58h
  ReturnEventHandler = 0xa1,        // updated 6.45
  TradeReturnEventHandler = 0x2fa,  // updated 6.45
  TradeReturnEventHandler2 = 0x1e1, // updated 6.45
  EventYield2Handler = 0x021D,      // updated 5.58h
  EventYield16Handler = 0x0207,     // updated 5.58h

  LinkshellEventHandler = 0x9999,  // unknown
  LinkshellEventHandler1 = 0x9999, // unknown

  ReqEquipDisplayFlagsChange = 0x03BC, // updated 6.30h

  LandRenameHandler = 0x028E,           // updated 5.58h
  HousingUpdateHouseGreeting = 0x0343,  // updated 5.58h
  HousingUpdateObjectPosition = 0x9999, // unknown
  HousingEditExterior = 0x027B,         // updated 5.58h
  HousingEditInterior = 0x02E3,         // updated 5.58h

  SetSharedEstateSettings = 0x00D2, // updated 5.58h

  UpdatePositionInstance = 0x02FB, // updated 6.35 KR

  PerformNoteHandler = 0x0243, // updated 5.58h

  WorldInteractionHandler = 0x0274, // updated 5.58h
  Dive = 0x018C,                    // updated 6.30h
};

////////////////////////////////////////////////////////////////////////////////
/// Chat Connection IPC Codes
/**
 * Server IPC Chat Type Codes.
 */
enum ServerChatIpcType :
  uint16_t
{
  Tell = 0x0064,              // updated for sb
  PublicContentTell = 0xF0FB, // added 4.5, this is used when receiving a /tell in PublicContent instances such as Eureka or Bozja (prepended F conflicts with TradeReturnEventHandler 6.38)
  TellErrNotFound = 0x0066,

  FreeCompanyEvent = 0x012C, // added 5.0
};

/**
 * Client IPC Chat Type Codes.
 */
enum ClientChatIpcType :
  uint16_t
{
  TellReq = 0x0064,
  PublicContentTellReq = 0x0326, // updated 5.35 hotfix, this is used when sending a /tell in PublicContent instances such as Eureka or Bozja
};

}

#endif /*_CORE_NETWORK_PACKETS_IPCS_H*/
