class CfgPatches {
	class BDA_Sounds {
		author = "Black Dagger Development Crew";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMusicClasses {
	class BDA_RCH {
		displayName = "Black Dagger (Reach)";
	};
	class BDA_2 {
		displayName = "Black Dagger (2)";
	};
	class BDA_3 {
		displayName = "Black Dagger (3)";
	};
	class BDA_OTH {
		displayName = "Black Dagger (Other)";
	};
	class BDA_MGS {
		displayName = "Black Dagger (Metal Gear)";
	};
	class BDA_CP2077 {
		displayName = "Black Dagger (Cyberpunk 2077)";
	};
	class BDA_CMS {
		displayName = "Black Dagger (Crimson Storm)";
	};
	class BDA_Jeff {
		displayName = "Black Dagger (Announcer)";
	}
};
class CfgMusic {
	tracks[]={};
	class BDA_MjolnirMix {
		name="Mjolnir Mix";
		sound[]=
		{
			"BDA_SFX\music\data\MjolnirMix.ogg",
			1,
			1
		};
		theme="Halo 2";
		duration="251"; //time in seconds
		musicClass="BDA_2";
	};
	class BDA_WarthogRun {
		name="Warthog Run";
		sound[]=
		{
			"BDA_SFX\music\data\WarthogRun.ogg",
			1,
			1
		};
		theme="Halo 3";
		duration="500";
		musicClass="BDA_3";
	};
	class BDA_Overture {
		name="Overture";
		sound[]=
		{
			"BDA_SFX\music\data\Overture.ogg",
			1,
			1
		};
		theme="Reach";
		duration="287";
		musicClass="BDA_RCH";
	};
	class BDA_WinterContingency {
		name="Winter Contingency";
		sound[]=
		{
			"BDA_SFX\music\data\WinterContingency.ogg",
			1,
			1
		};
		theme="Reach";
		duration="730";
		musicClass="BDA_RCH";
	};
	class BDA_ONI_SwordBase {
		name="ONI: Sword Base";
		sound[]=
		{
			"BDA_SFX\music\data\ONI_SwordBase.ogg",
			1,
			1
		};
		theme="Reach";
		duration="508";
		musicClass="BDA_RCH";
	};
	class BDA_Nightfall {
		name="Nightfall";
		sound[]=
		{
			"BDA_SFX\music\data\Nightfall.ogg",
			1,
			1
		};
		theme="Reach";
		duration="340";
		musicClass="BDA_RCH";
	};
	class BDA_TipOfTheSpear {
		name="Tip of the Spear";
		sound[]=
		{
			"BDA_SFX\music\data\TipOfTheSpear.ogg",
			1,
			1
		};
		theme="Reach";
		duration="365";
		musicClass="BDA_RCH";
	};
	class BDA_LongNightOfSolace {
		name="Long Night of Solace";
		sound[]=
		{
			"BDA_SFX\music\data\LongNightOfSolace.ogg",
			1,
			1
		};
		theme="Reach";
		duration="706";
		musicClass="BDA_RCH";
	};
	class BDA_Exodus {
		name="Exodus";
		sound[]=
		{
			"BDA_SFX\music\data\Exodus.ogg",
			1,
			1
		};
		theme="Reach";
		duration="438";
		musicClass="BDA_RCH";
	};
	class BDA_NewAlexandria {
		name="New Alexandria";
		sound[]=
		{
			"BDA_SFX\music\data\NewAlexandria.ogg",
			1,
			1
		};
		theme="Reach";
		duration="504";
		musicClass="BDA_RCH";
	};
	class BDA_ThePackage {
		name="The Package";
		sound[]=
		{
			"BDA_SFX\music\data\ThePackage.ogg",
			1,
			1
		};
		theme="Reach";
		duration="393";
		musicClass="BDA_RCH";
	};
	class BDA_ThePillarofAutumn {
		name="The Pillar of Autumn";
		sound[]=
		{
			"BDA_SFX\music\data\ThePillarofAutumn.ogg",
			1,
			1
		};
		theme="Reach";
		duration="564";
		musicClass="BDA_RCH";
	};
	class BDA_Epilogue {
		name="Epilogue";
		sound[]=
		{
			"BDA_SFX\music\data\Epilogue.ogg",
			1,
			1
		};
		theme="Reach";
		duration="257";
		musicClass="BDA_RCH";
	};
	class BDA_FromtheVault {
		name="From the Vault";
		sound[]=
		{
			"BDA_SFX\music\data\FromtheVault.ogg",
			1,
			1
		};
		theme="Reach";
		duration="275";
		musicClass="BDA_RCH";
	};
	class BDA_Ashes {
		name="Ashes";
		sound[]=
		{
			"BDA_SFX\music\data\Ashes.ogg",
			1,
			1
		};
		theme="Reach";
		duration="147";
		musicClass="BDA_RCH";
	};
	class BDA_Fortress {
		name="Fortress";
		sound[]=
		{
			"BDA_SFX\music\data\Fortress.ogg",
			1,
			1
		};
		theme="Reach";
		duration="64";
		musicClass="BDA_RCH";
	};
	class BDA_WereNotGoingAnywhere {
		name="We're Not Going Anywhere";
		sound[]=
		{
			"BDA_SFX\music\data\WereNotGoingAnywhere.ogg",
			1,
			1
		};
		theme="Reach";
		duration="67";
		musicClass="BDA_RCH";
	};
	class BDA_AtAnyCost {
		name="At Any Cost";
		sound[]=
		{
			"BDA_SFX\music\data\AtAnyCost.ogg",
			1,
			1
		};
		theme="Reach";
		duration="138";
		musicClass="BDA_RCH";
	};
	class BDA_BothWays_Remix {
		name="Both Ways - Remix";
		sound[]=
		{
			"BDA_SFX\music\data\BothWays_Remix.ogg",
			1,
			1
		};
		theme="Reach";
		duration="130";
		musicClass="BDA_RCH";
	};
	class BDA_WalkingAway {
		name="Walking Away";
		sound[]=
		{
			"BDA_SFX\music\data\WalkingAway.ogg",
			1,
			1
		};
		theme="Reach";
		duration="91";
		musicClass="BDA_RCH";
	};
	class BDA_GhostsAndGlass {
		name="Ghosts and Glass";
		sound[]=
		{
			"BDA_SFX\music\data\GhostsAndGlass.ogg",
			1,
			1
		};
		theme="Reach";
		duration="144";
		musicClass="BDA_RCH";
	};
	class BDA_WeRemember {
		name="We Remember";
		sound[]=
		{
			"BDA_SFX\music\data\WeRemember.ogg",
			1,
			1
		};
		theme="Reach";
		duration="123";
		musicClass="BDA_RCH";
	};
	class BDA_FreeBird {
		name="Free Bird";
		sound[]=
		{
			"BDA_SFX\music\data\FreeBird.ogg",
			1,
			1
		};
		theme="Lynyrd Skynyrd";
		duration="550";
		musicClass="BDA_OTH";
	};
	class BDA_KasamirsPride {
		name="Kasamir's Pride";
		sound[]=
		{
			"BDA_SFX\music\data\KasamirsPride.ogg",
			1,
			1
		};
		theme="Kasamir's Pride";
		duration="247";
		musicClass="BDA_CMS";
	};
	class BDA_117 {
		name="117";
		sound[]=
		{
			"BDA_SFX\music\data\117.ogg",
			1,
			1
		};
		theme="Halo 4 OST - 117";
		duration="728";
		musicClass="BDA_OTH";
	};
	class BDA_Helldiver {
		name="Helldivers OST";
		sound[]={
			"BDA_SFX\music\data\HELLDIVER.ogg",
			1,
			1
		};
		theme="Helldivers OST - A Cup of Liber Tea";
		duration="217";
		musicClass="BDA_OTH";
	};
	class BDA_Impact {
		name="Impact (Arbiter Extended Mix)";
		sound[]=
		{
			"BDA_SFX\music\data\Impact-Arbiter-Extended-Mix-Halo-2.ogg",
			1,
			1
		};
		theme="Halo 2";
		duration="281";
		musicClass="BDA_2";
	};
	class BDA_MGS_VirtuousMission {
		name="Virtuous Mission";
		sound[]=
		{
			"BDA_SFX\music\data\VirtuousMission.ogg",
			1,
			1
		};
		theme="Metal Gear Solid 3: Snake Eater";
		duration="366"; //time in seconds
		musicClass="BDA_MGS";
	};
	class BDA_MGS_WhatAThrill_SnakeEater {
		name="What A Thrill Snake Eater";
		sound[]=
		{
			"BDA_SFX\music\data\WhatAThrill_SnakeEater.ogg",
			1,
			1
		};
		theme="Metal Gear Solid 3: Snake Eater";
		duration="160"; //time in seconds
		musicClass="BDA_MGS";
	};
	class BDA_MGS_WhoAmIReally {
		name="Who Am I Really";
		sound[]=
		{
			"BDA_SFX\music\data\WhoAmIReally.ogg",
			1,
			1
		};
		theme="Metal Gear Solid 2: Subsistence";
		duration="481"; //time in seconds
		musicClass="BDA_MGS";
	};
	class BDA_MGS_YellDeadCell {
		name="Yell - Dead Cell";
		sound[]=
		{
			"BDA_SFX\music\data\YellDeadCell.ogg",
			1,
			1
		};
		theme="Metal Gear Solid 2: Subsistence";
		duration="148"; //time in seconds
		musicClass="BDA_MGS";
	};
	class BDA_TRP {
		name="The Rebel Path";
		sound[]=
		{
			"BDA_SFX\music\data\CP2077\CP2077_TRP.ogg",
			1,
			1
		};
		theme="Cyberpunk 2077";
		duration="251"; //time in seconds
		musicClass="BDA_CP2077";
	};
	class BDA_TRPCello {
		name="The Rebel Path (Cello)";
		sound[]=
		{
			"BDA_SFX\music\data\CP2077\CP2077_TRP_Cello.ogg",
			1,
			1
		};
		theme="Cyberpunk 2077";
		duration="260"; //time in seconds
		musicClass="BDA_CP2077";
	};
	class BDA_ForcePro {
		name="Force Projection";
		sound[]=
		{
			"BDA_SFX\music\data\CP2077\CP2077_ForceProject.ogg",
			1,
			1
		};
		theme="Cyberpunk 2077";
		duration="166"; //time in seconds
		musicClass="BDA_CP2077";
	};
	class BDA_Wushu {
		name="Wushu Dolls";
		sound[]=
		{
			"BDA_SFX\music\data\CP2077\CP2077_WushuDolls.ogg",
			1,
			1
		};
		theme="Cyberpunk 2077";
		duration="141"; //time in seconds
		musicClass="BDA_CP2077";
	};
	class BDA_Juiced {
		name="Juiced Up";
		sound[]=
		{
			"BDA_SFX\music\data\CP2077\CP2077_Juiced.ogg",
			1,
			1
		};
		theme="Cyberpunk 2077";
		duration="126"; //time in seconds
		musicClass="BDA_CP2077";
	};
	class BDA_JS_BasedLib {
		name="Based Liberal";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\BasedLiberal.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="2"; //time in seconds
		musicClass="BDA_Jeff";
	};
	class BDA_JS_MommyMilkers {
		name="Mommy Milkers";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\MommyMilkers.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="2"; //time in seconds
		musicClass="BDA_Jeff";
	};
	class BDA_JS_OJSimpson {
		name="O.J Simpson";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\OJSimpson.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="3"; //time in seconds
		musicClass="BDA_Jeff";
	};
	class BDA_JS_Redditor {
		name="Redditor";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\Redditor.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="2"; //time in seconds
		musicClass="BDA_Jeff";
	};
	class BDA_JS_SocialCreditDeduction {
		name="Social Credit Deducted";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\SocialCreditDeduction.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="5"; //time in seconds
		musicClass="BDA_Jeff";
	};
	class BDA_JS_YourTeamSucks {
		name="Your Team Sucks";
		sound[]=
		{
			"BDA_SFX\music\data\JeffSteezy\YourTeamSucks.ogg",
			1,
			1
		};
		theme="Halo Announcer";
		duration="3"; //time in seconds
		musicClass="BDA_Jeff";
	};

};

class cfgMods {
	author="Rib";
	timepacked="010029012026";
};
