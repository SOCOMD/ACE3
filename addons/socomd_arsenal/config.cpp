////////////////////////////////////////////////////////////////////
//DeRap: ace_socomd_arsenal\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sun Feb 28 17:51:48 2021 : 'file' last modified on Sun Feb 21 19:05:11 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_socomd_arsenal
	{
		name = "ACE3 - Socomd Arsenal";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.98;
		requiredAddons[] = {"ace_common","A3_Ui_F_Data","A3_3DEN","A3_Ui_F_Curator"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"alganthe","mharis001","SynixeBrett"};
		url = "$STR_ace_main_URL";
		version = 3.13;
		versionStr = "3.13";
		versionAr[] = {3,13,4,54};
	};
};
class ScrollBar;
class RscObject;
class RscText;
class RscTextSmall;
class RscTitle;
class RscProgress;
class RscProgressNotFreeze;
class RscPicture;
class RscLadderPicture;
class RscPictureKeepAspect;
class RscHTML;
class RscButton;
class RscShortcutButton;
class RscButtonSmall;
class RscEdit;
class RscCombo;
class RscListBox;
class RscListNBox;
class RscXListBox;
class RscTree;
class RscSlider;
class RscSliderH;
class RscXSliderH;
class RscActiveText;
class RscStructuredText;
class RscControlsGroup;
class RscToolbox;
class RscMapControl;
class RscCheckBox;
class RscFrame;
class ctrlDefault;
class ctrlControlsGroup;
class ctrlDefaultText;
class ctrlDefaultButton;
class RscBackgroundStripeTop;
class RscBackgroundStripeBottom;
class RscIGText;
class RscIGProgress;
class RscListBoxKeys;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoVScrollbars;
class RscLine;
class RscActivePicture;
class RscButtonTextOnly;
class RscShortcutButtonMain;
class RscButtonEditor;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscLoadingText;
class RscIGUIListBox;
class RscIGUIListNBox;
class RscBackground;
class RscBackgroundGUI;
class RscBackgroundGUILeft;
class RscBackgroundGUIRight;
class RscBackgroundGUIBottom;
class RscBackgroundGUITop;
class RscBackgroundGUIDark;
class RscBackgroundLogo;
class RscMapControlEmpty;
class RscVignette;
class CA_Mainback;
class CA_Back;
class CA_Title_Back;
class CA_Black_Back;
class CA_Title;
class CA_Logo;
class CA_Logo_Small;
class CA_RscButton;
class CA_RscButton_dialog;
class CA_Ok;
class CA_Ok_image;
class CA_Ok_image2;
class CA_Ok_text;
class ctrlCheckbox;
class ctrlCheckboxBaseline;
class ctrlStatic;
class ctrlControlsGroupNoScrollbars;
class ctrlStructuredText;
class RscTextMulti;
class RscTreeSearch;
class RscVideo;
class RscVideoKeepAspect;
class RscActivePictureKeepAspect;
class RscEditMulti;
class RscMapSignalBackground;
class RscMapSignalPicture;
class RscMapSignalText;
class RscColorPicker;
class RscInterlacingScreen;
class RscFeedback;
class RscTrafficLight;
class RscButtonSearch;
class RscIGUIText;
class RscOpticsText;
class RscOpticsValue;
class RscIGUIValue;
class RscButtonMenuMain;
class RscButtonTestCentered;
class RscDisplaySingleMission_ChallengeOverviewGroup;
class RscDisplayDebriefing_RscTextMultiline;
class RscDisplayDebriefing_ListGroup;
class RscButtonArsenal;
class RscTextNoShadow;
class RscButtonNoColor;
class RscToolboxButton;
class ctrlStaticPicture;
class ctrlStaticPictureKeepAspect;
class ctrlStaticPictureTile;
class ctrlStaticFrame;
class ctrlStaticLine;
class ctrlStaticMulti;
class ctrlStaticBackground;
class ctrlStaticOverlay;
class ctrlStaticTitle;
class ctrlStaticFooter;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlButton;
class ctrlButtonPicture;
class ctrlButtonPictureKeepAspect;
class ctrlButtonOK;
class ctrlButtonCancel;
class ctrlButtonClose;
class ctrlButtonToolbar;
class ctrlButtonSearch;
class ctrlButtonExpandAll;
class ctrlButtonCollapseAll;
class ctrlButtonFilter;
class ctrlEdit;
class ctrlEditMulti;
class ctrlSliderV;
class ctrlSliderH;
class ctrlCombo;
class ctrlComboToolbar;
class ctrlListbox;
class ctrlToolbox;
class ctrlToolboxPicture;
class ctrlToolboxPictureKeepAspect;
class ctrlCheckboxes;
class ctrlCheckboxesCheckbox;
class ctrlProgress;
class ctrlHTML;
class ctrlActiveText;
class ctrlActivePicture;
class ctrlActivePictureKeepAspect;
class ctrlTree;
class ctrlControlsGroupNoHScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlShortcutButton;
class ctrlShortcutButtonOK;
class ctrlShortcutButtonCancel;
class ctrlShortcutButtonSteam;
class ctrlXListbox;
class ctrlXSliderV;
class ctrlXSliderH;
class ctrlMenu;
class ctrlMenuStrip;
class ctrlMap;
class ctrlMapEmpty;
class ctrlMapMain;
class ctrlListNBox;
class ctrlCheckboxToolbar;
class ace_socomd_arsenal_socomd_display
{
	idd = 1127021;
	enableSimulation = 1;
	onLoad = "['onLoad',_this,""ace_socomd_arsenal_socomd_display""] call ace_socomd_arsenal_fnc_onArsenalOpen";
	onUnload = "['onUnload',_this,""ace_socomd_arsenal_socomd_display""] call ace_socomd_arsenal_fnc_onArsenalClose";
	onKeyDown = "['onKeyDown',_this,""ace_socomd_arsenal_socomd_display""] call ace_socomd_arsenal_fnc_onKeyDown";
	onKeyUp = "ace_socomd_arsenal_shiftState= _this select 2";
	onMouseButtonDown = "['onMouseButtonDown',_this,""ace_socomd_arsenal_socomd_display""] call ace_socomd_arsenal_fnc_onMouseButtonDown";
	onMouseButtonUp = "['onMouseButtonUp',_this,""ace_socomd_arsenal_socomd_display""] call ace_socomd_arsenal_fnc_onMouseButtonUp";
	icon = "\A3\Ui_f\data\Logos\a_64_ca.paa";
	logo = "\A3\Ui_f\data\Logos\arsenal_1024_ca.paa";
	class ControlsBackground
	{
		class blackLeft: ctrlStatic
		{
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneXAbs - safezoneX";
			h = "safezoneH";
		};
		class blackRight: blackLeft
		{
			x = "safezoneX + safezoneW";
		};
		class mouseArea: ctrlStatic
		{
			idc = 0;
			style = 16;
			onMouseMoving = "['onMouseMoving',_this,ace_socomd_arsenal_socomd_display] call ace_socomd_arsenal_fnc_handleMouse";
			onMouseHolding = "['onMouseHolding',_this,ace_socomd_arsenal_socomd_display] call ace_socomd_arsenal_fnc_handleMouse";
			onMouseZChanged = "['onMouseZChanged',_this,ace_socomd_arsenal_socomd_display] call ace_socomd_arsenal_fnc_handleScrollWheel";
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
	};
	class controls
	{
		class ArrowLeft: ctrlButton
		{
			idc = 101;
			text = "-";
			colorBackground[] = {0,0,0,0.8};
			onButtonClick = "[ctrlParent (_this select 0),-1] call ace_socomd_arsenal_fnc_buttonCargo";
			fade = 1;
			enable = 0;
			x = 0.5;
			y = 0.5;
			w = "1 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "1 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class ArrowRight: ArrowLeft
		{
			idc = 102;
			onButtonClick = "[ctrlParent (_this select 0),1] call ace_socomd_arsenal_fnc_buttonCargo";
			text = "+";
		};
		class blockLeftFrame: RscFrame
		{
			idc = 3;
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 14 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 24 * (pixelH * pixelGridNoUIScale * 0.25)";
			colorText[] = {0,0,0,1};
		};
		class blockLeftBackground: ctrlStaticBackground
		{
			idc = 4;
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 14 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 24 * (pixelH * pixelGridNoUIScale * 0.25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class blockRightFrame: blockLeftFrame
		{
			idc = 5;
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 34 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class blockRighttBackground: blockLeftBackground
		{
			idc = 6;
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 34 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class loadIndicator: RscControlsGroupNoScrollbars
		{
			idc = 7;
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safeZoneH + safezoneY - 20 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class loadIndicatorBackground: ctrlStaticBackground
				{
					idc = -1;
					colorBackground[] = {0,0,0,0.5};
					x = 0;
					y = 0;
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class loadIndicatorBar: ctrlProgress
				{
					idc = 701;
					style = 0;
					texture = "#(argb,8,8,3)color(1,1,1,1)";
					colorBar[] = {1,1,1,1};
					colorFrame[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
			};
		};
		class totalWeight: RscControlsGroupNoScrollbars
		{
			idc = 8;
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safeZoneH + safezoneY - 10 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "8 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class totalWeightBackground: ctrlStaticBackground
				{
					idc = -1;
					colorBackground[] = {0,0,0,0.8};
					x = 0;
					y = 0;
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "8 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class totalWeightTitle: RscText
				{
					idc = -1;
					text = "$STR_ace_common_Weight";
					x = 0;
					y = 0;
					w = "30 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "8 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class totalWeightText: RscText
				{
					idc = 801;
					style = 1;
					text = "";
					x = "30 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = 0;
					w = "50 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "8 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
			};
		};
		class message: RscText
		{
			idc = 9;
			fade = 1;
			style = 2;
			shadow = 0;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = "0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2";
			y = "safeZoneH + safezoneY - 25 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "(safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))";
			h = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class menuBar: RscControlsGroupNoScrollbars
		{
			idc = 10;
			x = "0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2";
			y = "safezoneH + safezoneY - 9 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "(safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))";
			h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class buttonHide: ctrlButton
				{
					idc = 1002;
					colorBackground[] = {0,0,0,0.8};
					x = "1 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					y = "0";
					w = "(((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonHideText";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					shortcuts[] = {"0x0E"};
					tooltip = "$STR_ace_socomd_arsenal_buttonHideTooltip";
					onButtonClick = "[ctrlParent (_this select 0)] call ace_socomd_arsenal_fnc_buttonHide";
				};
				class buttonLoadouts: buttonHide
				{
					idc = 1003;
					x = "2 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 1 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					text = "$STR_ace_socomd_arsenal_buttonLoadoutsText";
					tooltip = "$STR_ace_socomd_arsenal_buttonLoadoutsTooltip";
					onButtonClick = "createDialog ""ace_socomd_arsenal_loadoutsDisplay""";
				};
				class buttonExport: buttonHide
				{
					idc = 1004;
					x = "3 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 2 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					text = "$STR_ace_socomd_arsenal_buttonExportText";
					tooltip = "$STR_ace_socomd_arsenal_buttonExportTooltip";
					onButtonClick = "[ctrlParent (_this select 0)] call ace_socomd_arsenal_fnc_buttonExport";
				};
				class buttonImport: buttonHide
				{
					idc = 1005;
					x = "4 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 3 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					text = "$STR_ace_socomd_arsenal_buttonImportText";
					tooltip = "$STR_ace_socomd_arsenal_buttonImportTooltip";
					onButtonClick = "[ctrlParent (_this select 0)] call ace_socomd_arsenal_fnc_buttonImport";
				};
				class buttonClose: ctrlButtonOK
				{
					idc = 1001;
					colorBackground[] = {0,0,0,0.8};
					x = "5 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 4 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					y = "0";
					w = "(((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5)";
					h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonCloseText";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					onButtonClick = "ctrlParent (_this select 0) closeDisplay 1";
				};
			};
		};
		class infoBox: RscControlsGroupNoScrollbars
		{
			idc = 11;
			fade = 1;
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safeZoneH + safezoneY - 14 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "92 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "12 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class infoBackground: ctrlStaticBackground
				{
					idc = 1101;
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0";
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "12 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0,0,0,0.8};
				};
				class infoName: RscText
				{
					idc = 1102;
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0";
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5.5 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class infoAuthor: RscText
				{
					idc = 1103;
					colorText[] = {1,1,1,0.5};
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class DLCBackground: ctrlStaticBackground
				{
					idc = 1104;
					fade = 1;
					x = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0";
					w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "12 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class DLCIcon: RscActivePicture
				{
					idc = 1105;
					enabled = 0;
					fade = 1;
					color[] = {1,1,1,1};
					colorActive[] = {1,1,1,1};
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0";
					w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "12 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
			};
		};
		class statsBox: RscControlsGroupNoScrollbars
		{
			idc = 51;
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "47 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "55 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class statsStaticBackground1: ctrlStaticBackground
				{
					idc = -1;
					x = "0";
					y = "0";
					w = "47 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "55 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0.1,0.1,0.1,0.5};
				};
				class statsStaticBackground2: ctrlStaticBackground
				{
					idc = -1;
					x = "0";
					y = "0";
					w = "47 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0.1,0.1,0.1,0.8};
				};
				class statsTitle1: RscText
				{
					idc = 5101;
					fade = 1;
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "45 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0,0,0,0};
					colorText[] = {0.7,0.7,0.7,1};
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "";
				};
				class statsBackground1: ctrlStaticBackground
				{
					idc = 5102;
					fade = 1;
					x = "1 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "45 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "4 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {1,1,1,0.15};
				};
				class statsBar1: ctrlProgress
				{
					idc = 5103;
					fade = 1;
					style = 0;
					texture = "#(argb,8,8,3)color(1,1,1,1)";
					colorBar[] = {1,1,1,1};
					colorFrame[] = {0,0,0,0};
					x = "1 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "45 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "4 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsText1: RscText
				{
					idc = 5104;
					shadow = 0;
					fade = 1;
					colorShadow[] = {1,1,1,1};
					colorText[] = {0,0,0,1};
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "45 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "4 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "";
				};
				class statsTitle2: statsTitle1
				{
					idc = 5105;
					y = "15 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBackground2: statsBackground1
				{
					idc = 5106;
					y = "20 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBar2: statsBar1
				{
					idc = 5107;
					y = "20 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsText2: statsText1
				{
					idc = 5108;
					y = "20 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsTitle3: statsTitle1
				{
					idc = 5109;
					y = "25 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBackground3: statsBackground1
				{
					idc = 5110;
					y = "30 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBar3: statsBar1
				{
					idc = 5111;
					y = "30 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsText3: statsText1
				{
					idc = 5112;
					y = "30 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsTitle4: statsTitle1
				{
					idc = 5113;
					y = "35 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBackground4: statsBackground1
				{
					idc = 5114;
					y = "40 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBar4: statsBar1
				{
					idc = 5115;
					y = "40 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsText4: statsText1
				{
					idc = 5116;
					y = "40 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsTitle5: statsTitle1
				{
					idc = 5117;
					y = "45 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBackground5: statsBackground1
				{
					idc = 5118;
					y = "50 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class statsBar5: statsBar1
				{
					idc = 5119;
					y = "50 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {1,1,1,0.15};
				};
				class statsText5: statsText1
				{
					idc = 5120;
					y = "50 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
			};
		};
		class statsButton: ctrlButton
		{
			idc = 55;
			style = 2;
			text = ">";
			onButtonClick = "[""ace_socomd_arsenal_statsButton"",[ctrlParent (_this select 0)]]call CBA_fnc_localEvent";
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "6 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class statsPreviousPage: ctrlButton
		{
			idc = 52;
			style = 2;
			text = "<";
			colorBackground[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			onButtonClick = "[""ace_socomd_arsenal_statsChangePage"",[ctrlParent (_this select 0),_this select 0,false]]call CBA_fnc_localEvent";
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "5 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "5.5 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class statsNextPage: statsPreviousPage
		{
			idc = 53;
			text = ">";
			onButtonClick = "[""ace_socomd_arsenal_statsChangePage"",[ctrlParent (_this select 0),_this select 0,true]]call CBA_fnc_localEvent";
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 30 * (pixelW * pixelGridNoUIScale * 0.25)";
		};
		class statsCurrentPage: RscText
		{
			idc = 54;
			style = 2;
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 5 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "25 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
			colorBackground[] = {0,0,0,0};
			shadow = 2;
			sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
			text = "";
		};
		class statsButtonClose: ctrlButtonPicture
		{
			idc = 56;
			colorBackground[] = {0,0,0,0};
			text = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
			onButtonClick = "[""ace_socomd_arsenal_statsButton"",[ctrlParent (_this select 0)]]call CBA_fnc_localEvent";
			x = "(0.5 - (safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 2) + ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 42 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "5 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class mouseBlock: RscText
		{
			idc = 12;
			style = 16;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
		class leftTabContent: RscListBox
		{
			idc = 13;
			colorBackground[] = {0,0,0,0};
			colorSelectBackground[] = {1,1,1,0.5};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorPictureSelected[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorSelect2[] = {1,1,1,1};
			colorPictureRightSelected[] = {1,1,1,1};
			onLBSelChanged = "_this call ace_socomd_arsenal_fnc_onSelChangedLeft";
			onSetFocus = "ace_socomd_arsenal_leftTabFocus= true";
			onKillFocus = "ace_socomd_arsenal_leftTabFocus= false";
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 14 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 24.5 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class rightTabContent: leftTabContent
		{
			idc = 14;
			drawSideArrows = 1;
			disableOverflow = 1;
			onLBSelChanged = "_this call ace_socomd_arsenal_fnc_onSelChangedRight";
			onSetFocus = "ace_socomd_arsenal_rightTabFocus= true";
			onKillFocus = "ace_socomd_arsenal_rightTabFocus= false";
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 28 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class rightTabContentListnBox: RscListNBox
		{
			idc = 15;
			colorBackground[] = {0,0,0,0};
			colorSelectBackground[] = {1,1,1,0.5};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorPictureSelected[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorSelect2[] = {1,1,1,1};
			colorPictureRightSelected[] = {1,1,1,1};
			columns[] = {0.07,0.15,0.75};
			idcLeft = 101;
			idcRIght = 102;
			drawSideArrows = 1;
			disableOverflow = 1;
			onLBSelChanged = "_this call ace_socomd_arsenal_fnc_onSelChangedRightListnBox";
			onSetFocus = "ace_socomd_arsenal_rightTabLnBFocus= true";
			onKillFocus = "ace_socomd_arsenal_rightTabLnBFocus= false";
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 14 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - 34 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class sortLeftTab: RscCombo
		{
			idc = 16;
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "80 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
			onLBSelChanged = "_this call ace_socomd_arsenal_fnc_sortPanel";
			sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class sortRightTab: sortLeftTab
		{
			idc = 17;
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
		};
		class leftSearchbar: ctrlEdit
		{
			idc = 18;
			onSetFocus = "ace_socomd_arsenal_leftSearchbarFocus= true";
			onKillFocus = "ace_socomd_arsenal_leftSearchbarFocus= false";
			onMouseButtonClick = "[ctrlParent (_this select 0),_this select 0,_this select 1] call ace_socomd_arsenal_fnc_clearSearchbar";
			x = "safezoneX + 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "74 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class leftSearchbarButton: ctrlButtonPicture
		{
			idc = 41;
			text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
			colorBackground[] = {0,0,0,0.5};
			onButtonClick = "[ctrlParent (_this select 0),ctrlParent (_this select 0) displayCtrl 18] call ace_socomd_arsenal_fnc_handleSearchbar";
			x = "safezoneX + 87 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 1.8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "6 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class rightSearchbar: leftSearchBar
		{
			idc = 19;
			onSetFocus = "ace_socomd_arsenal_rightSearchbarFocus= true";
			onKillFocus = "ace_socomd_arsenal_rightSearchbarFocus= false";
			x = "safezoneX + safezoneW - 87 * (pixelW * pixelGridNoUIScale * 0.25)";
		};
		class rightSearchbarButton: leftSearchbarButton
		{
			idc = 42;
			onButtonClick = "[ctrlParent (_this select 0),ctrlParent (_this select 0) displayCtrl 19] call ace_socomd_arsenal_fnc_handleSearchbar";
			x = "safezoneX + safezoneW - 93 * (pixelW * pixelGridNoUIScale * 0.25)";
		};
		class tabLeft: RscControlsGroupNoScrollbars
		{
			idc = 20;
			x = "safezoneX + 1 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "200 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class iconBackgroundPrimaryWeapon: ctrlStaticBackground
				{
					idc = 2001;
					fade = 1;
					enable = 0;
					colorBackground[] = {0,0,0,1};
					x = "0";
					y = "0 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonPrimaryWeapon: RscButtonArsenal
				{
					idc = 2002;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa";
					tooltip = "$STR_A3_RscDisplayArsenal_tab_PrimaryWeapon";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_fillLeftPanel";
					colorBackground[] = {0,0,0,0.5};
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "9 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundHandgun: IconBackgroundPrimaryWeapon
				{
					idc = 2003;
					y = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonHandgun: buttonPrimaryWeapon
				{
					idc = 2004;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa";
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Handgun";
					y = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundSecondaryWeapon: IconBackgroundPrimaryWeapon
				{
					idc = 2005;
					y = "20 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonSecondaryWeapon: buttonPrimaryWeapon
				{
					idc = 2006;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_SecondaryWeapon";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\SecondaryWeapon_ca.paa";
					y = "20 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundHeadgear: IconBackgroundPrimaryWeapon
				{
					idc = 2007;
					y = "30 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonHeadgear: buttonPrimaryWeapon
				{
					idc = 2008;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Headgear";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Headgear_ca.paa";
					y = "30 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundUniform: IconBackgroundPrimaryWeapon
				{
					idc = 2009;
					y = "40 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonUniform: buttonPrimaryWeapon
				{
					idc = 2010;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Uniform";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Uniform_ca.paa";
					y = "40 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundVest: IconBackgroundPrimaryWeapon
				{
					idc = 2011;
					y = "50 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonVest: buttonPrimaryWeapon
				{
					idc = 2012;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Vest";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Vest_ca.paa";
					y = "50 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundBackpack: IconBackgroundPrimaryWeapon
				{
					idc = 2013;
					y = "60 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonBackpack: buttonPrimaryWeapon
				{
					idc = 2014;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Backpack";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Backpack_ca.paa";
					y = "60 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundGoggles: IconBackgroundPrimaryWeapon
				{
					idc = 2015;
					y = "70 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonGoggles: buttonPrimaryWeapon
				{
					idc = 2016;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Goggles";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Goggles_ca.paa";
					y = "70 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundNVG: IconBackgroundPrimaryWeapon
				{
					idc = 2017;
					y = "80 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonNVG: buttonPrimaryWeapon
				{
					idc = 2018;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_NVGs";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\NVGs_ca.paa";
					y = "80 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundBinoculars: IconBackgroundPrimaryWeapon
				{
					idc = 2019;
					y = "90 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonBinoculars: buttonPrimaryWeapon
				{
					idc = 2020;
					tooltip = "Grenade Options";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoThrow_ca.paa";
					y = "90 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundMap: IconBackgroundPrimaryWeapon
				{
					idc = 2021;
					y = "100 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonMap: buttonPrimaryWeapon
				{
					idc = 2022;
					tooltip = "Extras";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
					y = "100 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundGPS: IconBackgroundPrimaryWeapon
				{
					idc = 2023;
					y = "110 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonGPS: buttonPrimaryWeapon
				{
					idc = 2024;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_GPS";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\GPS_ca.paa";
					y = "110 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundRadio: IconBackgroundPrimaryWeapon
				{
					idc = 2025;
					y = "120 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonRadio: buttonPrimaryWeapon
				{
					idc = 2026;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Radio";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Radio_ca.paa";
					y = "120 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundCompass: IconBackgroundPrimaryWeapon
				{
					idc = 2028;
					y = "130 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonCompass: buttonPrimaryWeapon
				{
					idc = 2029;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Compass";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Compass_ca.paa";
					y = "130 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundWatch: IconBackgroundPrimaryWeapon
				{
					idc = 2030;
					y = "140 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonWatch: buttonPrimaryWeapon
				{
					idc = 2031;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Watch";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Watch_ca.paa";
					y = "140 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundFace: IconBackgroundPrimaryWeapon
				{
					idc = 2032;
					y = "150 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonFace: buttonPrimaryWeapon
				{
					idc = 2033;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Face";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Face_ca.paa";
					y = "150 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundVoice: IconBackgroundPrimaryWeapon
				{
					idc = 2034;
					y = "160 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonVoice: buttonPrimaryWeapon
				{
					idc = 2035;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Voice";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Voice_ca.paa";
					y = "160 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class iconBackgroundInsigna: IconBackgroundPrimaryWeapon
				{
					idc = 2036;
					y = "170 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonInsigna: buttonPrimaryWeapon
				{
					idc = 2037;
					tooltip = "$STR_A3_RscDisplayArsenal_tab_Insignia";
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Insignia_ca.paa";
					y = "170 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
			};
		};
		class iconBackgroundOptic: ctrlStaticBackground
		{
			idc = 21;
			colorBackground[] = {0,0,0,1};
			fade = 1;
			enable = 0;
			x = "safezoneW + safezoneX - 13 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonOptic: RscButtonArsenal
		{
			idc = 22;
			tooltip = "$STR_A3_RscDisplayArsenal_tab_ItemOptic";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemOptic_ca.paa";
			onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_fillRightPanel";
			colorBackground[] = {0,0,0,0.5};
			x = "safezoneW + safezoneX - 10 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneY + 8 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "9 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundItemAcc: iconBackgroundOptic
		{
			idc = 23;
			y = "safezoneY + 18 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonItemAcc: buttonOptic
		{
			idc = 24;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemAcc_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_ItemAcc";
			y = "safezoneY + 18 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundMuzzle: iconBackgroundOptic
		{
			idc = 25;
			y = "safezoneY + 28 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonMuzzle: buttonOptic
		{
			idc = 26;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemMuzzle_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_ItemMuzzle";
			y = "safezoneY + 28 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundBipod: iconBackgroundOptic
		{
			idc = 27;
			y = "safezoneY + 38 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonBipod: buttonOptic
		{
			idc = 28;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemBipod_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_ItemBipod";
			y = "safezoneY + 38 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundCurrentMag: iconBackgroundOptic
		{
			idc = 3001;
			y = "safezoneY + 48 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonCurrentMag: buttonOptic
		{
			idc = 3002;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
			tooltip = "$STR_ace_socomd_arsenal_buttonCurrentMagTooltip";
			y = "safezoneY + 48 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundCurrentMag2: iconBackgroundOptic
		{
			idc = 3003;
			y = "safezoneY + 58 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonCurrentMag2: buttonOptic
		{
			idc = 3004;
			text = "\z\ace\addons\socomd_arsenal\data\iconSecondaryMuzzle";
			tooltip = "$STR_ace_socomd_arsenal_buttonCurrentMag2Tooltip";
			y = "safezoneY + 58 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundMag: iconBackgroundOptic
		{
			idc = 29;
			y = "safezoneY + 48 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonMag: buttonOptic
		{
			idc = 30;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_CargoMag";
			y = "safezoneY + 48 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundMagALL: iconBackgroundOptic
		{
			idc = 31;
			y = "safezoneY + 58 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonMagALL: buttonOptic
		{
			idc = 32;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMagAll_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_CargoMagAll";
			y = "safezoneY + 58 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundThrow: iconBackgroundOptic
		{
			idc = 33;
			y = "safezoneY + 68 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonThrow: buttonOptic
		{
			idc = 34;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoThrow_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_CargoThrow";
			y = "safezoneY + 68 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundPut: iconBackgroundOptic
		{
			idc = 35;
			y = "safezoneY + 78 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonPut: buttonOptic
		{
			idc = 36;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoPut_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_CargoPut";
			y = "safezoneY + 78 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class iconBackgroundMisc: iconBackgroundOptic
		{
			idc = 37;
			y = "safezoneY + 88 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonMisc: buttonOptic
		{
			idc = 38;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa";
			tooltip = "$STR_A3_RscDisplayArsenal_tab_CargoMisc";
			y = "safezoneY + 88 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
		class buttonRemoveAll: ctrlButtonPicture
		{
			idc = 40;
			text = "\z\ace\addons\socomd_arsenal\data\iconClearContainer.paa";
			tooltip = "$STR_ace_socomd_arsenal_buttonClearContainerTooltip";
			colorBackground[] = {0,0,0,0.5};
			onButtonClick = "ctrlParent (_this select 0) call ace_socomd_arsenal_fnc_buttonClearAll";
			fade = 1;
			enable = 0;
			x = "safezoneW + safezoneX - 11 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safeZoneH + safezoneY - 29 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "9 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
		};
	};
};
class ace_socomd_arsenal_loadoutsDisplay
{
	idd = 1127022;
	onLoad = "['onLoad',_this,""ace_socomd_arsenal_loadoutsDisplay""] call ace_socomd_arsenal_fnc_onLoadoutsOpen";
	onUnload = "['onUnload',_this,""ace_socomd_arsenal_loadoutsDisplay""] call ace_socomd_arsenal_fnc_onLoadoutsClose";
	class controls
	{
		class centerBox: ctrlControlsGroupNoScrollbars
		{
			idc = 3;
			x = "safezoneW + safezoneX - (180 * (pixelW * pixelGridNoUIScale * 0.25))";
			y = "safezoneY + (5 * (pixelH * pixelGridNoUIScale * 0.25))";
			w = "160 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "safezoneH - (34 * (pixelH * pixelGridNoUIScale * 0.25))";
			class controls
			{
				class centerFrame: RscFrame
				{
					idc = -1;
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "160 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "safezoneH - (45 * (pixelH * pixelGridNoUIScale * 0.25))";
					colorText[] = {0,0,0,1};
				};
				class centerBackground: ctrlStaticBackground
				{
					idc = -1;
					x = "0";
					y = "0";
					w = "160 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "safezoneH - (45 * (pixelH * pixelGridNoUIScale * 0.25))";
					colorBackground[] = {0.13,0.13,0.13,0.9};
				};
				class centerTitle: ctrlStaticTitle
				{
					idc = 301;
					style = 2;
					text = "";
					x = "0";
					y = "0";
					w = "160 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class contentPanel: RscListnBox
				{
					idc = 302;
					columns[] = {0,0.05,0.4,0.5,0.6,0.7,0.75,0.8,0.85,0.9};
					drawSideArrows = 0;
					disableOverflow = 1;
					onSetFocus = "ace_socomd_arsenal_loadoutsPanelFocus= true";
					onKillFocus = "ace_socomd_arsenal_loadoutsPanelFocus= false";
					onLBSelChanged = "[ctrlParent (_this select 0),_this select 0,_this select 1] call ace_socomd_arsenal_fnc_onSelChangedLoadouts";
					onLBDblClick = "[ctrlParent (_this select 0),(ctrlParent (_this select 0)) displayCtrl 305] call ace_socomd_arsenal_fnc_buttonLoadoutsLoad";
					x = "0";
					y = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "160 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "safezoneH - (57 * (pixelH * pixelGridNoUIScale * 0.25))";
					sizeEx = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class textTitle: RscText
				{
					idc = -1;
					text = "$STR_DISP_GAME_NAME";
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "safezoneH - (51 * (pixelH * pixelGridNoUIScale * 0.25))";
					w = "15 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0,0,0,0.2};
				};
				class textEditBox: ctrlEdit
				{
					idc = 303;
					x = "15 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "safezoneH - (51 * (pixelH * pixelGridNoUIScale * 0.25))";
					w = "65 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class loadoutsSearchbar: ctrlEdit
				{
					idc = 309;
					onSetFocus = "ace_socomd_arsenal_loadoutsSearchbarFocus= true";
					onKillFocus = "ace_socomd_arsenal_loadoutsSearchbarFocus= false";
					onMouseButtonClick = "[ctrlParent (_this select 0),_this select 0,_this select 1] call ace_socomd_arsenal_fnc_clearSearchbar";
					x = "83 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "safezoneH - (51 * (pixelH * pixelGridNoUIScale * 0.25))";
					w = "72 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "6 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class loadoutsSearchbarButton: ctrlButtonPicture
				{
					idc = -1;
					text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
					colorBackground[] = {0,0,0,0.5};
					onButtonClick = "[ctrlParent (_this select 0),ctrlParent (_this select 0) displayCtrl 309] call ace_socomd_arsenal_fnc_handleLoadoutsSearchbar";
					x = "155 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "safezoneH - (51 * (pixelH * pixelGridNoUIScale * 0.25))";
					w = "5 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
				};
				class buttonSave: ctrlButton
				{
					idc = 304;
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "safezoneH - (44 * (pixelH * pixelGridNoUIScale * 0.25))";
					w = "30 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "10 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonSaveText";
					tooltip = "$STR_ace_socomd_arsenal_buttonSaveTooltip";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_buttonLoadoutsSave";
					colorBackground[] = {0,0,0,0.8};
				};
				class buttonRename: buttonSave
				{
					idc = 308;
					x = "32.5 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonRenameText";
					tooltip = "$STR_ace_socomd_arsenal_buttonRenameTooltip";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_buttonLoadoutsRename";
				};
				class buttonLoad: buttonSave
				{
					idc = 305;
					x = "65 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonLoadText";
					tooltip = "$STR_ace_socomd_arsenal_buttonLoadTooltip";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_buttonLoadoutsLoad";
				};
				class buttonShare: buttonSave
				{
					idc = 306;
					x = "97.5 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonSharePrivateText";
					tooltip = "$STR_ace_socomd_arsenal_buttonShareTooltip";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_buttonLoadoutsShare";
				};
				class buttonDelete: buttonSave
				{
					idc = 307;
					x = "130 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_buttonDeleteText";
					tooltip = "$STR_ace_socomd_arsenal_buttonDeleteTooltip";
					colorBackgroundActive[] = {0.5,0,0,1};
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_buttonLoadoutsDelete";
				};
			};
		};
		class buttonClose: ctrlButton
		{
			idc = -1;
			x = "safezoneW + safezoneX - 32 * (pixelW * pixelGridNoUIScale * 0.25)";
			y = "safezoneH + safezoneY - 9 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "30 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
			sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
			text = "$STR_ace_socomd_arsenal_buttonCloseText";
			shortcuts[] = {"0x01"};
			tooltip = "";
			onButtonClick = "ctrlParent (_this select 0) closeDisplay 2";
		};
		class buttonBar: ctrlControlsGroupNoScrollbars
		{
			idc = -1;
			x = "(safezoneW * 0.5) + safezoneX - (80.5 * (pixelW * pixelGridNoUIScale * 0.25))";
			y = "safezoneH + safezoneY - 9 * (pixelH * pixelGridNoUIScale * 0.25)";
			w = "161 * (pixelW * pixelGridNoUIScale * 0.25)";
			h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
			class controls
			{
				class buttonMyLoadoutsBackground: ctrlStaticBackground
				{
					idc = 401;
					x = "0";
					y = "0";
					w = "52 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
					colorBackground[] = {0,0,0,0.7};
				};
				class buttonMyLoadouts: ctrlButton
				{
					idc = 402;
					colorBackground[] = {0,0,0,0};
					x = "0 * (pixelW * pixelGridNoUIScale * 0.25)";
					y = "0 * (pixelH * pixelGridNoUIScale * 0.25)";
					w = "52 * (pixelW * pixelGridNoUIScale * 0.25)";
					h = "7 * (pixelH * pixelGridNoUIScale * 0.25)";
					sizeEx = "5 * (pixelH * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_tabMyLoadoutsText";
					tooltip = "$STR_ace_socomd_arsenal_tabMyLoadoutsTooltip";
					onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_loadoutsChangeTab";
				};
				class buttonDefaultLoadoutsBackground: buttonMyLoadoutsBackground
				{
					idc = 403;
					x = "54.5 * (pixelW * pixelGridNoUIScale * 0.25)";
				};
				class buttonDefaultLoadouts: buttonMyLoadouts
				{
					idc = 404;
					x = "54.5 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_tabDefaultLoadoutsText";
					tooltip = "$STR_ace_socomd_arsenal_tabDefaultLoadoutsTooltip";
				};
				class buttonSharedLoadoutsBackground: buttonMyLoadoutsBackground
				{
					idc = 405;
					x = "109 * (pixelW * pixelGridNoUIScale * 0.25)";
				};
				class buttonSharedLoadouts: buttonMyLoadouts
				{
					idc = 406;
					x = "109 * (pixelW * pixelGridNoUIScale * 0.25)";
					text = "$STR_ace_socomd_arsenal_tabSharedLoadoutsText";
					tooltip = "$STR_ace_socomd_arsenal_tabSharedLoadoutsTooltip";
				};
			};
		};
	};
};
class ace_socomd_arsenal_customArsenalButton_Button: RscButtonArsenal
{
	x = "safezoneW + safezoneX - 10 * (pixelW * pixelGridNoUIScale * 0.25)";
	y = "safezoneY + 88 * (pixelH * pixelGridNoUIScale * 0.25)";
	w = "9 * (pixelW * pixelGridNoUIScale * 0.25)";
	h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
	text = "\z\ace\addons\socomd_arsenal\data\iconCustom.paa";
	tooltip = "";
	onButtonClick = "[ctrlParent (_this select 0),_this select 0] call ace_socomd_arsenal_fnc_fillRightPanel";
	colorBackground[] = {0,0,0,0.5};
};
class ace_socomd_arsenal_customArsenalButton_Background: ctrlStaticBackground
{
	x = "safezoneW + safezoneX - 13 * (pixelW * pixelGridNoUIScale * 0.25)";
	y = "safezoneY + 88 * (pixelH * pixelGridNoUIScale * 0.25)";
	w = "12 * (pixelW * pixelGridNoUIScale * 0.25)";
	h = "9 * (pixelH * pixelGridNoUIScale * 0.25)";
	colorBackground[] = {0,0,0,1};
	fade = 1;
	enable = 0;
};
class Display3DEN
{
	class ContextMenu: ctrlMenu
	{
		class Items
		{
			class Socomd_Arsenal
			{
				items[] = {"aceSocomdArsenal","virtualArsenal"};
			};
			class virtualArsenal
			{
				text = "BI Virtual Socomd_Arsenal";
				action = "['Socomd_Arsenal'] call bis_fnc_3DENEntityMenu";
				value = 0;
				data = "Socomd_Arsenal";
				opensNewWindow = 1;
			};
			class aceSocomdArsenal: virtualArsenal
			{
				text = "ACE Socomd_Arsenal";
				action = "call ace_socomd_arsenal_fnc_open3DEN";
			};
		};
	};
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Tools
				{
					items[] += {"ace_socomd_arsenal_portVALoadouts"};
				};
				class ace_socomd_arsenal_portVALoadouts
				{
					text = "$STR_ace_socomd_arsenal_portLoadoutsText";
					picture = "\z\ace\addons\common\data\logo_ace3_ca.paa";
					action = "call ace_socomd_arsenal_fnc_portVALoadouts;";
				};
			};
		};
	};
};
class Cfg3DEN
{
	class Mission
	{
		class ace_socomd_arsenal_DummyCategory
		{
			displayName = "Dummy attribute, should never show up";
			class AttributeCategories
			{
				class ACE3_Arsenal
				{
					class Attributes
					{
						class ace_socomd_arsenal_DefaultLoadoutsListAttribute
						{
							property = "ace_socomd_arsenal_DefaultLoadoutsListAttribute";
							value = 0;
							expression = "if (!is3DEN) then {ace_socomd_arsenal_defaultLoadoutsList= _value}";
							defaultValue = "[]";
							validate = "none";
							wikiType = "[[Array]]";
						};
					};
				};
			};
		};
	};
	class Attributes
	{
		class ace_socomd_arsenal_attribute: ctrlControlsGroupNoScrollbars
		{
			idc = -1;
			onLoad = "private _objects = get3DENSelected 'object'; if (count _objects > 1) then {[_this select 0, ((_objects select 0) get3DENAttribute ""ace_socomd_arsenal_attribute"") select 0] call ace_socomd_arsenal_fnc_attributeLoad}";
			x = "0";
			y = "0";
			w = "130 * (pixelW * pixelGrid * 0.5)";
			h = "106.83 * (pixelH * pixelGrid * 0.5)";
			attributeLoad = "[_this,+_value] call ace_socomd_arsenal_fnc_attributeLoad";
			attributeSave = "uiNamespace getVariable [""ace_socomd_arsenal_attributeValue"",[[],0]]";
			class controls
			{
				class ModeTitle: ctrlStatic
				{
					idc = -1;
					text = "$STR_ace_socomd_arsenal_Mode";
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "0";
					w = "125 * (pixelW * pixelGrid * 0.5)";
					h = "5 * (pixelH * pixelGrid * 0.5)";
				};
				class Mode: ctrlToolbox
				{
					idc = 8100;
					onToolBoxSelChanged = "[ctrlParentControlsGroup (_this select 0),_this select 1] call ace_socomd_arsenal_fnc_attributeMode";
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "5 * (pixelH * pixelGrid * 0.5)";
					w = "125 * (pixelW * pixelGrid * 0.5)";
					h = "5 * (pixelH * pixelGrid * 0.5)";
					rows = 1;
					columns = 2;
					strings[] = {"$STR_ace_socomd_arsenal_Whitelist","$STR_ace_socomd_arsenal_Blacklist"};
				};
				class ItemsTitle: ModeTitle
				{
					text = "$STR_ace_socomd_arsenal_Items";
					y = "10 * (pixelH * pixelGrid * 0.5)";
				};
				class Category: ctrlToolboxPictureKeepAspect
				{
					idc = 8101;
					onToolBoxSelChanged = "[ctrlParentControlsGroup (_this select 0),_this select 1] call ace_socomd_arsenal_fnc_attributeCategory";
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "15 * (pixelH * pixelGrid * 0.5)";
					w = "125 * (pixelW * pixelGrid * 0.5)";
					h = "20.83 * (pixelH * pixelGrid * 0.5)";
					rows = 2;
					columns = 12;
					strings[] = {"\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_0_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\SecondaryWeapon_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemOptic_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemAcc_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemMuzzle_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemBipod_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMagAll_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Headgear_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Uniform_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Vest_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Backpack_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Goggles_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\NVGs_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Binoculars_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Map_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Compass_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Radio_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Watch_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\GPS_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoThrow_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoPut_ca.paa","\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"};
				};
				class ListBackground: ctrlStatic
				{
					idc = -1;
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "35.83 * (pixelH * pixelGrid * 0.5)";
					w = "125 * (pixelW * pixelGrid * 0.5)";
					h = "65 * (pixelH * pixelGrid * 0.5)";
					colorBackground[] = {1,1,1,0.1};
				};
				class List: ctrlListNBox
				{
					idc = 8102;
					idcLeft = 8103;
					idcRight = 8104;
					onLBDblClick = "_this call ace_socomd_arsenal_fnc_attributeDblClick";
					onSetFocus = "uiNamespace setVariable [""ace_socomd_arsenal_attributeFocus"",ctrlParentControlsGroup (_this select 0)]";
					onKillFocus = "uiNamespace setVariable [""ace_socomd_arsenal_attributeFocus"",nil]";
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "35.83 * (pixelH * pixelGrid * 0.5)";
					w = "125 * (pixelW * pixelGrid * 0.5)";
					h = "65 * (pixelH * pixelGrid * 0.5)";
					drawSideArrows = 1;
					disableOverflow = 1;
					columns[] = {0.05,0.15,0.85};
				};
				class ArrowLeft: ctrlButton
				{
					idc = 8103;
					onButtonClick = "[ctrlParentControlsGroup (_this select 0),false] call ace_socomd_arsenal_fnc_attributeSelect";
					text = "−";
					font = "RobotoCondensedBold";
					x = "-1";
					y = "-1";
					w = "5 * (pixelW * pixelGrid * 0.5)";
					H = "5 * (pixelH * pixelGrid * 0.5)";
				};
				class ArrowRight: ArrowLeft
				{
					idc = 8104;
					onButtonClick = "[ctrlParentControlsGroup (_this select 0),true] call ace_socomd_arsenal_fnc_attributeSelect";
					text = "∞";
				};
				class SearchButton: ctrlButtonPicture
				{
					idc = 8105;
					onButtonClick = "params ['_searchButton']; private _controlsGroup = ctrlParentControlsGroup _searchButton; private _searchBar = _controlsGroup controlsGroupCtrl 8106; _searchBar ctrlSetText ''; ctrlSetFocus _searchBar; [_controlsGroup] call ace_socomd_arsenal_fnc_attributeAddItems;";
					text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
					x = "5 * (pixelW * pixelGrid * 0.5)";
					y = "101.83 * (pixelH * pixelGrid * 0.5)";
					w = "5 * (pixelW * pixelGrid * 0.5)";
					h = "5 * (pixelH * pixelGrid * 0.5)";
					colorBackground[] = {0,0,0,0.5};
				};
				class SearchBar: ctrlEdit
				{
					idc = 8106;
					onKeyUp = "[ctrlParentControlsGroup (_this select 0)] call ace_socomd_arsenal_fnc_attributeAddItems";
					onMouseButtonClick = "params ['_searchBar','_button']; if (_button != 1) exitWith {}; _searchBar ctrlSetText ''; ctrlSetFocus _searchBar; [ctrlParentControlsGroup _searchBar] call ace_socomd_arsenal_fnc_attributeAddItems;";
					x = "11 * (pixelW * pixelGrid * 0.5)";
					y = "101.83 * (pixelH * pixelGrid * 0.5)";
					w = "40 * (pixelW * pixelGrid * 0.5)";
					h = "5 * (pixelH * pixelGrid * 0.5)";
				};
				class ClearButton: ctrlButton
				{
					idc = 8107;
					onButtonClick = "[ctrlParentControlsGroup (_this select 0)] call ace_socomd_arsenal_fnc_attributeClear";
					text = "$STR_disp_arcmap_clear";
					x = "105 * (pixelW * pixelGrid * 0.5)";
					y = "101.83 * (pixelH * pixelGrid * 0.5)";
					w = "25 * (pixelW * pixelGrid * 0.5)";
					h = "5 * (pixelH * pixelGrid * 0.5)";
					colorBackground[] = {0,0,0,0.6};
				};
				class ExportButton: ClearButton
				{
					idc = 8108;
					onButtonClick = "copyToClipboard str ((uiNamespace getVariable [""ace_socomd_arsenal_attributeValue"",[[],0]]) select 0)";
					text = "$STR_ace_socomd_arsenal_buttonExportText";
					tooltip = "$STR_ace_socomd_arsenal_AttributeExport_Tooltip";
					x = "79 * (pixelW * pixelGrid * 0.5)";
				};
				class ImportButton: ClearButton
				{
					idc = 8109;
					onButtonClick = "[ctrlParentControlsGroup (_this select 0)] call ace_socomd_arsenal_fnc_attributeImport";
					text = "$STR_ace_socomd_arsenal_buttonImportText";
					tooltip = "$STR_ace_socomd_arsenal_AttributeImport_Tooltip";
					x = "53 * (pixelW * pixelGrid * 0.5)";
				};
				class AddCompatible: ctrlButton
				{
					idc = 8110;
					style = 2;
					onButtonClick = "[ctrlParentControlsGroup (_this select 0)] call ace_socomd_arsenal_fnc_attributeAddCompatible";
					text = "$STR_ace_socomd_arsenal_AttributeAddCompatible_DisplayName";
					tooltip = "$STR_ace_socomd_arsenal_AttributeAddCompatible_Tooltip";
					font = "RobotoCondensedLight";
					x = "98.75 * (pixelW * pixelGrid * 0.5)";
					y = "10.5 * (pixelH * pixelGrid * 0.5)";
					w = "31.25 * (pixelW * pixelGrid * 0.5)";
					h = "4 * (pixelH * pixelGrid * 0.5)";
					sizeEx = "4 * (pixelH * pixelGrid * 0.5)";
					colorBackground[] = {0,0,0,0.5};
				};
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			class ace_socomd_arsenal
			{
				displayName = "$STR_ace_socomd_arsenal_Mission";
				collapsed = 1;
				class Attributes
				{
					class ace_socomd_arsenal
					{
						property = "ace_socomd_arsenal_attribute";
						control = "ace_socomd_arsenal_attribute";
						displayName = "$STR_ace_socomd_arsenal_Mission";
						tooltip = "";
						expression = "if (!is3DEN) then {[_this, +_value] call ace_socomd_arsenal_fnc_attributeInit}";
						defaultValue = "[[], 0]";
						condition = "1 - objectControllable";
						wikiType = "[[Array]]";
						validate = "none";
						value = 0;
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_socomd_arsenal
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\socomd_arsenal\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_socomd_arsenal
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\socomd_arsenal\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_socomd_arsenal
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\socomd_arsenal\XEH_postInit.sqf'";
	};
};
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class controls
	{
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			class Controls;
		};
		class GroupTutorials: GroupSingleplayer
		{
			h = "(6 *   1.5) *  (pixelH * pixelGrid * 2)";
			class Controls: Controls
			{
				class Bootcamp;
				class Arsenal;
				class ace_socomd_arsenal_mission: Arsenal
				{
					idc = -1;
					text = "$STR_ace_socomd_arsenal_Mission";
					tooltip = "$STR_ace_socomd_arsenal_Mission_tooltip";
					y = "(3 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick = "playMission ['','\z\ace\addons\socomd_arsenal\missions\arsenal.VR']";
					animTextureNormal = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenu_ca.paa";
					animTextureDisabled = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenu_ca.paa";
					animTextureOver = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenuHover_ca.paa";
					animTextureFocused = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenuHover_ca.paa";
					animTexturePressed = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenu_ca.paa";
					animTextureDefault = "\z\ace\addons\socomd_arsenal\data\buttonMissionMainMenu_ca.paa";
				};
				class FieldManual: Bootcamp
				{
					y = "(4 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
				};
				class CommunityGuides: Bootcamp
				{
					y = "(5 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
				};
			};
		};
	};
};
class ace_socomd_arsenal_sorts
{
	class sortBase
	{
		scope = 1;
		displayName = "";
		tabs[] = {{},{}};
		statement = "";
	};
	class ACE_alphabetically: sortBase
	{
		scope = 2;
		displayName = "$STR_a3_rscdisplayarsenal_sort_alphabet";
		tabs[] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},{0,1,2,3,4,5,6,7}};
		statement = "{}";
	};
	class ACE_mod: sortBase
	{
		scope = 2;
		displayName = "$STR_a3_rscdisplayarsenal_sort_mod";
		tabs[] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},{0,1,2,3,4,5,6,7}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_mod";
	};
	class ACE_mass: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByWeightText";
		tabs[] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},{0,1,2,3,4,5,6,7}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_mass";
	};
	class ACE_load: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByLoadText";
		tabs[] = {{3,4,5},{}};
		statement = "getContainerMaxLoad configName _this";
	};
	class ACE_accuracy: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByAccuracyText";
		tabs[] = {{0,1,2},{}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_accuracy";
	};
	class ACE_rateOfFire: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByRateOfFireText";
		tabs[] = {{0,1,2},{}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_rateOfFire";
	};
	class ACE_scopeMag: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByMagnificationText";
		tabs[] = {{},{0}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_scopeMag";
	};
	class ACE_magCount: sortBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_sortByMagCountText";
		tabs[] = {{},{4}};
		statement = "_this call ace_socomd_arsenal_fnc_sortStatement_magCount";
	};
};
class ace_socomd_arsenal_stats
{
	class statBase
	{
		scope = 1;
		priority = 0;
		stats[] = {};
		displayName = "";
		showBar = 0;
		showText = 0;
		barStatement = "";
		textStatement = "";
		condition = "true";
		tabs[] = {{},{}};
	};
	class ACE_bananaPotassium: statBase
	{
		scope = 2;
		displayName = "$STR_ace_socomd_arsenal_statPotassium";
		showBar = 1;
		barStatement = "1";
		condition = "(configName (_this select 1)) == 'ACE_Banana'";
		tabs[] = {{},{7}};
	};
	class ACE_mass: statBase
	{
		scope = 2;
		displayName = "$STR_a3_rscdisplayarsenal_stat_weight";
		showText = 1;
		textStatement = "[_this select 0,_this select 1] call ace_socomd_arsenal_fnc_statTextStatement_mass";
		tabs[] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},{0,1,2,3,4,5,6,7}};
	};
	class ACE_rateOfFire: statBase
	{
		scope = 2;
		priority = 5;
		stats[] = {"reloadTime"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_rof";
		showBar = 1;
		showText = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[-1.4,0.31],[1,0.01]]] call ace_socomd_arsenal_fnc_statBarStatement_rateOfFIre";
		textStatement = "[(_this select 0) select 0,_this select 1,[[-1.4,0.31],false]] call ace_socomd_arsenal_fnc_statTextStatement_rateOfFire";
		tabs[] = {{0,1},{}};
	};
	class ACE_accuracy: statBase
	{
		scope = 2;
		priority = 4;
		stats[] = {"dispersion"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_dispersion";
		showBar = 1;
		showText = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[-4,-1.7],[1,0.01],true]] call ace_socomd_arsenal_fnc_statBarStatement_accuracy";
		textStatement = "[(_this select 0) select 0,_this select 1,[[-4,-1.7],false]] call ace_socomd_arsenal_fnc_statTextStatement_accuracy";
		tabs[] = {{0,1},{}};
	};
	class ACE_maxZeroing: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"maxZeroing"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_range";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,2500],[0.01,1],false]] call ace_socomd_arsenal_fnc_statBarStatement_default";
		tabs[] = {{0,1,2},{}};
	};
	class ACE_impact: statBase
	{
		scope = 2;
		priority = 2;
		stats[] = {"hit","initSpeed"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_impact";
		showBar = 1;
		barStatement = "[_this select 0,_this select 1,[[0,3.2],[-1,1100],2006]] call ace_socomd_arsenal_fnc_statBarStatement_impact";
		tabs[] = {{0,1,2},{}};
	};
	class ACE_scopeMagnification: statBase
	{
		scope = 2;
		priority = 2;
		displayName = "$STR_ace_socomd_arsenal_statMagnification";
		showText = 1;
		textStatement = "call ace_socomd_arsenal_fnc_statTextStatement_scopeMag";
		tabs[] = {{},{0}};
	};
	class ACE_scopeVisionMode: statBase
	{
		scope = 2;
		priority = 1;
		displayName = "$STR_ace_socomd_arsenal_statVisionMode";
		showText = 1;
		textStatement = "call ace_socomd_arsenal_fnc_statTextStatement_scopeVisionMode";
		tabs[] = {{},{0}};
	};
	class ACE_ballisticProtection: statBase
	{
		scope = 2;
		priority = 5;
		stats[] = {"passthrough"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_passthrough";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,0.63],[0.01,1],false]] call ace_socomd_arsenal_fnc_statBarStatement_default";
		tabs[] = {{3,4,6},{}};
	};
	class ACE_explosiveResistance: statBase
	{
		scope = 2;
		priority = 4;
		stats[] = {"armor"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_armor";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,0.80],[0.01,1],false]] call ace_socomd_arsenal_fnc_statBarStatement_default";
		tabs[] = {{3,4,6},{}};
	};
	class ACE_load: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"maximumLoad"};
		displayName = "$STR_a3_rscdisplayarsenal_stat_load";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,500],[0.01,1],false]] call ace_socomd_arsenal_fnc_statBarStatement_default";
		tabs[] = {{3,4,5},{}};
	};
	class ACE_smokeChemTTL: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"ammo"};
		displayName = "$STR_ace_socomd_arsenal_statTTL";
		showText = 1;
		textStatement = "call ace_socomd_arsenal_fnc_statTextStatement_smokeChemTTL";
		condition = "(configName (_this select 1)) isKindOf ['smokeShell',configFile >> 'CfgMagazines']";
		tabs[] = {{},{5}};
	};
	class ACE_explosionTime: statBase
	{
		scope = 2;
		priority = 3;
		displayName = "$STR_ace_socomd_arsenal_StatExplosionTime";
		showText = 1;
		textStatement = "call ace_socomd_arsenal_fnc_statTextStatement_explosionTime";
		condition = "true";
		tabs[] = {{},{5}};
	};
};
