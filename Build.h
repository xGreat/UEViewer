#define DO_GUARD		1
#define RENDERING		1
#define PROFILE			1

//#define PRIVATE_BUILD	1

// Support for other games

// Turn on/off different engine versions support
#define UNREAL1			1
#define UNREAL25		1
#define UNREAL3			1

// UE2 (supported by default)
#define UT2				1
//#define PARIAH			1		// not supported, because of major serializer incompatibility
#define SPLINTER_CELL	1
#define LINEAGE2		1
#define SWRC			1		// Star Wars: Republic Commando
#define LOCO			1		// Land of Chaos Online

// requires UNREAL1
#define DEUS_EX			1
#define RUNE			1

// requires UNREAL25
#define TRIBES3			1
///#define RAGNAROK2		1
#define EXTEEL			1

// UE2X
#define UC2				1

// requires UNREAL3
#define XBOX360			1		// XBox360 resources
#define BIOSHOCK		1		//!! requires UNREAL3 and TRIBES3
#define ARMYOF2			1		// Army of Two
#define MASSEFF			1		// Mass Effect
#define MEDGE			1		// Mirror's Edge
#define TLR				1		// The Last Remnant
//#define TUROK			1		incomplete??
#define XMEN			1		// XMen: Wolverine
#define MCARTA			1		// Magna Carta 2
#define BATMAN			1		// Batman: Arkham Asylum
#define CRIMECRAFT		1		// Crime Craft
#define AVA				1		// AVA Online
#define FRONTLINES		1		// Frontlines: Fuel of War
#define BLOODONSAND		1		// 50 Cent: Blood on the Sand
#define BORDERLANDS		1		// Borderlands
#define DARKVOID		1		// Dark Void
///#define HUXLEY			1
//#define USE_XDK			1		// use some proprietary code for XBox360 support

// Midway UE3 games -- make common define ??
#define A51				1		// Blacksite: Area 51
#define WHEELMAN		1		//?? incomplete
#define MKVSDC			1		// Mortal Kombat vs. DC Universe
#define STRANGLE		1		// Stranglehold
#define TNA_IMPACT		1		// TNA iMPACT!

#define SPECIAL_TAGS	1		// games with different PACKAGE_FILE_TAG: Killing Floor, Nurien

// some private games
#if PRIVATE_BUILD
#	define RAGNAROK2	1
#	define HUXLEY		1
#endif