/* $Id$ */

#define DECOMPILED_INCLUDE

#include "../src/global.h"
#include "../src/house.h"
#include "../src/input/input.h"
#include "../src/interrupt.h"
#include "../src/map.h"
#include "../src/os/math.h"
#include "../src/os/strings.h"
#include "../src/patched.h"
#include "../src/pool/house.h"
#include "../src/pool/pool.h"
#include "../src/pool/structure.h"
#include "../src/pool/team.h"
#include "../src/pool/unit.h"
#include "../src/scenario.h"
#include "../src/script.h"
#include "../src/structure.h"
#include "../src/team.h"
#include "../src/tile.h"
#include "../src/tools.h"
#include "../src/unit.h"


#undef DECOMPILED_INCLUDE

extern void overlay(uint16 cs, uint8 force);
extern void emu_GUI_ShowEndStats();
extern void f__B4C1_0000_0022_1807();
extern void emu_Load();
extern void f__B520_0000_0019_6B99();
extern void f__B4CD_0000_0011_95D0();
extern void f__07D4_0000_0027_FA61();
extern void emu_GUI_EditBox();
extern void f__B52A_0000_0019_1617();
extern void f__B4DA_0000_002C_B3C2();
extern void f__253D_0000_0013_38F4();
extern void f__B536_0000_004B_3AF8();
extern void f__B4E0_0000_000F_14AD();
extern void f__B4E6_0000_001A_C6C7();
extern void f__B4E9_0000_0013_DC68();
extern void f__B4ED_0000_0079_AC5D();
extern void f__B4F2_0000_000D_C9F0();
extern void emu_Ini_GetInteger();
extern void f__2B42_0000_0022_1DB2();
extern void f__B480_0000_0018_A09B();
extern void f__B483_0000_0019_F96A();
extern void f__B488_0000_0027_45A9();
extern void f__2BD6_0000_0015_24A9();
extern void f__B48B_0000_001E_7E97();
extern void f__B495_0000_0022_1CF6();
extern void f__07AE_0000_00DF_A32C();
extern void f__B500_0000_0008_FE1F();
extern void emu_GUI_ShowMap();
extern void f__B4AE_0000_0008_049C();
extern void emu_EntryPoint();
extern void f__B4B1_0000_0016_067A();
extern void f__B50B_0000_0029_BDBF();
extern void f__2BF2_0000_0007_42B5();
extern void f__B4B8_0000_001F_3BC3();
extern void f__2598_0000_0017_EB80();
extern void f__B511_0000_000E_B463();
extern void f__251B_0000_001E_7202();
extern void emu_Gameloop_Intro();
extern void f__B53B_0000_0050_FEA6();
extern void f__B4AB_0000_000D_6028();
extern void f__B491_0000_0022_DD43();
extern void f__16BC_0001_0018_AE47();
extern void f__252E_0001_0018_08B3();
extern void f__0FE4_0002_0021_D0A9();
extern void f__2B99_0002_0012_E0C1();
extern void f__2642_0002_005E_87F6();
extern void f__2B4C_0002_0029_64AF();
extern void f__28E4_0002_0017_0B15();
extern void f__2649_0003_0014_67A9();
extern void f__24DA_0004_000E_FD1B();
extern void f__22A6_0004_0003_DA0F();
extern void f__2BB4_0004_0027_DC1D();
extern void emu_Tools_Swapd();
extern void f__1DB6_0004_000B_BFBA();
extern void f__256D_0004_001C_9F23();
extern void emu_Empty1();
extern void f__23E1_0004_0014_2BC0();
extern void f__2427_0004_003B_B2A9();
extern void f__2995_0004_001F_FE17();
extern void f__1FB5_0005_000F_62CC();
extern void emu_Empty2();
extern void f__1A34_0005_001F_38E2();
extern void f__0AEC_0005_0010_9634();
extern void f__259E_0006_0016_858A();
extern void f__2B0E_0006_0049_87B1();
extern void f__2BA5_0006_009C_A3D1();
extern void f__263B_0006_001C_9C72();
extern void f__2BD1_0006_004A_CD10();
extern void emu_Script_General_DisplayText();
extern void f__1319_0008_0010_6124();
extern void f__06F7_0008_0018_D7CD();
extern void f__2618_0008_001B_FAA6();
extern void f__261F_0008_0033_66ED();
extern void f__0F78_0008_002C_AB63();
extern void f__1587_0008_0012_30AE();
extern void f__0C10_0008_0014_19CD();
extern void f__2502_0008_0015_FFBD();
extern void f__10E4_0008_0048_5BD4();
extern void f__1DD2_0008_004C_D4CF();
extern void f__1423_0009_0025_FE5D();
extern void f__28E6_000A_0040_D751();
extern void f__24FD_000A_000B_2043();
extern void f__2BC2_000A_0044_2E0E();
extern void f__15C2_000B_000E_6322();
extern void f__2599_000B_0047_21FD();
extern void f__2605_000C_006D_F8B2();
extern void f__2537_000C_001C_86CB();
extern void f__2BB6_000C_0043_A570();
extern void f__28FD_000C_0007_5DA9();
extern void f__2C17_000C_002F_3016();
extern void emu_GameLoop_Main();
extern void emu_Mouse_CheckButtons();
extern void f__24D0_000D_0039_C17D();
extern void f__2533_000D_001C_74EC();
extern void f__22A3_000D_0010_9291();
extern void emu_String_Load();
extern void f__25C4_000E_0019_12FF();
extern void f__2B1E_000E_003E_B647();
extern void f__151A_000E_0013_5840();
extern void f__1DD7_000E_001C_4593();
extern void f__2BEE_000E_0009_8881();
extern void f__2B6C_000E_0045_C1FE();
extern void f__2521_000F_0022_6D87();
extern void emu_Tools_Swapw();
extern void f__217E_0015_0019_BAFF();
extern void f__2BEE_0017_0028_0D9F();
extern void f__2531_0019_0010_2000();
extern void f__1319_001A_0011_30DD();
extern void f__07C4_001A_0045_DCB4();
extern void f__252E_001B_0018_EA2C();
extern void f__B511_001E_0010_AE09();
extern void f__259E_0021_001A_E253();
extern void f__1FB5_0024_0012_C761();
extern void f__B4E9_0028_0013_DF68();
extern void f__1319_002D_0023_320C();
extern void f__24DA_002D_0010_3EB2();
extern void f__263B_002F_0016_FDB0();
extern void f__2521_0035_0015_AA0F();
extern void f__B4A2_0039_000B_EC51();
extern void f__260F_003A_0014_CA10();
extern void f__28FD_003D_0012_41DC();
extern void f__2618_003F_001B_FAA6();
extern void f__259E_0040_0015_5E4A();
extern void f__16BC_0044_0027_CB92();
extern void f__1FB5_0047_0012_2389();
extern void f__2BB6_004F_0014_AB2C();
extern void f__0AEC_004F_0024_1E6F();
extern void f__B4E9_0050_003F_292A();
extern void f__B4F2_0051_0012_A048();
extern void f__2649_0053_001D_FEB5();
extern void f__260F_0054_0016_0011();
extern void emu_Mouse_EventHandler();
extern void f__B53B_005C_000F_A920();
extern void emu_String_GetString();
extern void f__B4A2_0063_001E_4495();
extern void f__2642_0069_0008_D517();
extern void f__1FB5_006A_0015_A08C();
extern void emu_Config_Read();
extern void f__2B6C_006E_002E_4FBC();
extern void f__1DD7_006F_001C_4403();
extern void f__B4E6_0074_000C_3554();
extern void f__2903_007A_0032_762D();
extern void f__2B99_007B_0019_5737();
extern void f__B4B1_0082_0012_D287();
extern void f__B48B_0088_0029_3A68();
extern void f__0FCB_0088_0016_2DD9();
extern void f__253D_008A_0016_007A();
extern void f__B4BE_008B_0012_DDEE();
extern void f__1FB5_0091_001B_4066();
extern void f__B511_0091_001D_9C25();
extern void f__2AE1_0096_0009_9B4B();
extern void f__B4B1_0098_002A_CE8A();
extern void f__B4F2_009C_002E_D76F();
extern void f__2BA5_00A2_0052_DEE3();
extern void f__B4CD_00A5_0016_24FA();
extern void f__15C2_00AC_0015_2FBF();
extern void f__2B1E_00B0_002A_9AED();
extern void f__259E_00B1_001C_4051();
extern void f__2AE1_00B7_0014_51EF();
extern void f__B48B_00BD_0029_3530();
extern void f__1FB5_00C5_001B_2EE4();
extern void f__2903_00CA_0015_756E();
extern void emu_Mouse_HandleMovement();
extern void emu_Tools_GetSmallestIP();
extern void f__29DA_00D0_0013_E21A();
extern void f__0C10_00D2_000F_D61E();
extern void f__B4E6_00E0_0022_452E();
extern void f__B520_00E3_0028_2188();
extern void f__07AE_00E4_000D_9955();
extern void f__B4AE_00F0_0024_E400();
extern void f__2B0E_00F2_0016_F9EC();
extern void f__B48B_00F2_0005_601A();
extern void f__1FB5_00F3_001B_7009();
extern void f__253D_00FA_0010_873D();
extern void f__2502_00FA_0009_9EB2();
extern void f__B495_00FE_0017_4E8B();
extern void f__07AE_0103_004C_B43B();
extern void f__B4E6_0108_004A_C989();
extern void f__B520_0114_0016_52C9();
extern void f__151A_0114_0022_0B6C();
extern void f__10E4_0117_0015_392D();
extern void f__B4CD_011A_0011_E66F();
extern void emu_Config_Decode();
extern void f__1FB5_0121_001B_0DC1();
extern void f__28E6_0123_000A_333D();
extern void f__0F3F_0125_000D_4868();
extern void f__B48B_0127_000E_E325();
extern void emu_Math_PercentToValue();
extern void f__B536_0129_000A_8178();
extern void f__16C5_012D_0017_71BC();
extern void f__2AE1_0131_0023_99F9();
extern void f__2B6C_0137_0020_C73F();
extern void f__01F7_0138_0019_8DC5();
extern void f__0C10_013D_0016_8C5C();
extern void emu_Mouse_CheckMovement();
extern void f__0EDB_0145_002F_C125();
extern void f__217E_0145_0010_73C0();
extern void f__B536_0148_0060_01F3();
extern void f__B4E0_0151_000D_E28D();
extern void emu_Math_ValueToPercent();
extern void f__B483_0156_0019_AEFE();
extern void f__01F7_0157_0010_1227();
extern void f__2903_0158_001A_2931();
extern void f__2502_0165_0027_41E7();
extern void f__0C10_0168_0014_CEB0();
extern void f__0F3F_0168_0010_C9EF();
extern void f__2B6C_0169_001E_6939();
extern void emu_Empty3();
extern void emu_Exit();
extern void emu_Interrupt_Vector_Store();
extern void f__B4CD_017F_0010_C6FC();
extern void f__0C10_0182_0012_B114();
extern void f__B4ED_0184_0010_CD7E();
extern void f__0EDB_0184_0030_A1C2();
extern void f__2B1E_0189_001B_E6CF();
extern void f__1423_018B_0015_2B74();
extern void f__B4CD_0194_0011_3CAE();
extern void f__151A_0196_0018_AF63();
extern void f__2B6C_0197_00CE_4D32();
extern void f__217E_0198_0015_D478();
extern void f__0F3F_01A1_0018_9631();
extern void f__B4CD_01AA_0010_06F1();
extern void f__1DD7_01AB_0007_96C6();
extern void f__0F78_01B4_0016_23DD();
extern void f__10E4_01B8_0014_5104();
extern void f__217E_01BA_000A_D507();
extern void f__B4CD_01BF_0016_E78F();
extern void emu_Interrupt_Vector_Restore();
extern void f__23E1_01C2_0011_24E8();
extern void f__217E_01C6_0004_16B8();
extern void f__B495_01CB_0016_9CD0();
extern void f__B4B1_01CD_002A_CE8A();
extern void f__B48B_01CE_002B_7574();
extern void f__2AE1_01EA_0020_A570();
extern void f__1DD7_01EB_0013_9C3C();
extern void f__01F7_01ED_0024_A432();
extern void f__16C5_01EF_000D_1984();
extern void f__1FB5_01FA_0010_F89C();
extern void f__16C5_01FE_000D_19C4();
extern void f__0F78_01FF_0010_E2F2();
extern void f__B4E6_0200_0091_FAEA();
extern void f__B4ED_0200_000F_1FF4();
extern void f__217E_020B_0026_BE77();
extern void f__16C5_020D_000D_1A44();
extern void f__B4CA_020F_0017_A939();
extern void f__16C5_021C_003A_2718();
extern void f__B520_0223_000E_38A3();
extern void emu_Mouse_Init();
extern void f__1DD7_022D_0015_1956();
extern void f__01F7_022D_0003_9E5A();
extern void f__01F7_0231_0021_40ED();
extern void f__B520_0235_0016_54C9();
extern void f__253D_023A_0038_2BAE();
extern void f__B48B_0242_0017_581D();
extern void f__0C10_0247_000D_A5E6();
extern void f__1DD7_0248_0014_9236();
extern void f__0EDB_024B_001D_2E46();
extern void f__104B_024D_0012_1DC4();
extern void f__B4C4_0255_0009_A812();
extern void f__217E_0268_0027_C749();
extern void f__B50B_0268_0012_E6D0();
extern void emu_Input_Keyboard_HandleKeys();
extern void emu_Stderr_Write();
extern void f__10E4_0273_0029_DCE5();
extern void emu_Error_Abnormal_Termination();
extern void f__B483_0283_0014_983A();
extern void f__0F78_0285_001C_04DB();
extern void f__0EDB_0288_0020_3D83();
extern void f__B495_0288_001F_5BC7();
extern void f__B53B_0289_001F_95C1();
extern void f__0F3F_028E_0015_1153();
extern void f__217E_0290_000A_9FBE();
extern void f__2B6C_0292_0028_3AD7();
extern void f__2AE1_029F_0014_50E5();
extern void f__217E_02A0_002C_0B5F();
extern void emu_Gameloop_LevelEnd();
extern void f__1319_02AC_0020_C75C();
extern void emu_Print_Error_Overlay();
extern void f__151A_02B0_0011_62B1();
extern void emu_Mouse_CallbackClear();
extern void f__151A_02C8_0016_FA9C();
extern void emu_Empty5();
extern void f__B527_02CB_005E_FFA4();
extern void f__0F78_02D5_0014_4ABC();
extern void emu_Tools_Index_GetStructureOrUnit();
extern void emu_Mouse_InsideRegion();
extern void f__B4DA_02E0_0023_E297();
extern void f__151A_02E8_0010_6B15();
extern void f__0EDB_02EA_001E_F83C();
extern void f__B53B_02ED_0019_AA57();
extern void emu_Drive_Get_Default();
extern void f__07D4_02F8_0055_0679();
extern void f__151A_02FA_0014_26F2();
extern void f__B4E0_0300_001B_4F41();
extern void f__B4DA_0308_0018_F99F();
extern void emu_Drive_Set_Default();
extern void f__B495_030B_001D_B90C();
extern void f__151A_0310_0018_831F();
extern void f__B4C4_0311_0009_BC94();
extern void f__167E_0319_0010_B56F();
extern void emu_Empty4();
extern void f__217E_0320_0049_4A24();
extern void emu_Terminate();
extern void emu_Save_House();
extern void f__0EDB_032B_0031_E91B();
extern void f__23E1_0334_000B_CF65();
extern void f__2649_0336_004C_0948();
extern void f__B4E9_0345_0023_FA52();
extern void f__07D4_034D_001F_FF64();
extern void f__22A6_034F_000C_5E0A();
extern void f__B483_0363_0016_83DF();
extern void emu_Save_Chunk();
extern void emu_Terminate_Normal();
extern void f__0EDB_0386_001D_2E46();
extern void emu_Terminate_Error();
extern void f__B4F2_0387_000F_A3C2();
extern void emu_Save_Unit();
extern void f__B495_0398_0011_7346();
extern void f__B520_039B_001B_4BEB();
extern void f__1DD7_039B_0008_D3BD();
extern void f__B48B_03A4_0005_619A();
extern void f__B4C4_03AA_0009_B4A2();
extern void emu_Tools_MulCSIP_csip();
extern void f__0EDB_03B9_001D_2E46();
extern void f__B495_03B9_0008_D80E();
extern void f__16C5_03C3_002D_24E5();
extern void f__B520_03C7_0017_65D1();
extern void emu_Ini_GetString();
extern void emu_Tools_MemcopyCX();
extern void f__23E1_03DB_000B_CF65();
extern void f__B495_03E4_0014_917E();
extern void emu_Drive_Get_Curdir();
extern void f__B520_03E7_0017_BA36();
extern void f__1319_03E8_0029_75DE();
extern void f__0EDB_03EC_0020_629E();
extern void f__151A_03ED_0014_6217();
extern void f__217E_03ED_000A_D326();
extern void f__1DD7_03FD_000C_8340();
extern void f__06F7_0402_0020_9091();
extern void emu_Date_Get();
extern void f__B520_0407_00A9_43A1();
extern void f__B4CD_0408_001F_C54A();
extern void emu_Time_Get();
extern void emu_Save_Structure();
extern void f__B4E0_041D_0017_C8A5();
extern void f__0EDB_0426_0027_711D();
extern void f__217E_0426_003F_15C8();
extern void emu_Drive_Get_Default_Wrapper();
extern void f__0F78_0435_000E_32E0();
extern void f__151A_043B_0018_36C4();
extern void f__B4C4_043C_0009_1C95();
extern void emu_Drive_Set_Default_Wrapper();
extern void f__B511_0446_0013_E4E5();
extern void f__15C2_044C_0012_C66D();
extern void f__0EDB_0456_0032_B7E5();
extern void f__151A_046F_0017_2508();
extern void f__B483_0470_000E_519D();
extern void f__B495_0471_0014_897E();
extern void f__B52A_0476_0030_9D41();
extern void f__1DD7_0477_000E_5C89();
extern void emu_Input_Keyboard_HandleKeys2();
extern void emu_InGame_Numpad_Move();
extern void emu_Input_Keyboard_Translate();
extern void f__1DD7_048A_0017_3EEB();
extern void f__B4CD_048E_0012_3E9E();
extern void f__06F7_0493_0015_AAB2();
extern void emu_Drive_Get_Free_Space();
extern void emu_Save_Team();
extern void f__22A6_04A5_000F_3B8F();
extern void f__B52A_04AC_0033_548A();
extern void f__0EDB_04AE_0024_408E();
extern void emu_Input_Flags_SetBits();
extern void emu_GUI_SaveLoad_List();
extern void f__2756_04BC_002C_80A5();
extern void emu_Interrupt_Vector_Get();
extern void f__B4CD_04C4_0010_846B();
extern void f__B483_04CB_0015_EBB4();
extern void f__217E_04CB_0020_3089();
extern void emu_Interrupt_Vector_Set();
extern void f__B495_04D7_000E_C317();
extern void f__B4CD_04D9_0011_E9EF();
extern void f__B4C4_04DA_0008_C6B9();
extern void emu_Tools_Divd_Wrapper();
extern void emu_Tools_Divd();
extern void emu_Tools_Divd2();
extern void emu_Input_Flags_ClearBits();
extern void f__1423_04F2_0016_CD6B();
extern void f__22A6_04F8_007A_6E25();
extern void f__217E_04F9_000E_346A();
extern void f__29E8_04FC_0028_0C66();
extern void f__0EDB_050C_001D_2E46();
extern void f__2903_050E_0022_419A();
extern void f__2756_050F_000B_0871();
extern void f__B495_0511_0011_10E0();
extern void f__B50B_0522_0036_7E4C();
extern void f__151A_0526_0028_A3A6();
extern void f__2903_0530_0008_CF42();
extern void f__29E8_0534_000E_6213();
extern void f__B4CD_053B_0010_C4CD();
extern void f__16C5_0543_0034_CA88();
extern void f__2903_0545_0024_06E5();
extern void f__B4C4_054C_0031_FE26();
extern void f__B518_0558_0010_240A();
extern void f__0642_0559_0027_3560();
extern void f__217E_055F_0008_D2BC();
extern void f__B4CD_0566_0010_04C2();
extern void f__2903_0569_000A_C3B0();
extern void f__B50B_0573_0037_8058();
extern void f__B4CD_057B_001A_D066();
extern void f__06F7_057C_001F_E1C7();
extern void f__10E4_057F_0052_2B00();
extern void f__2903_0580_0004_5083();
extern void f__B4C4_0581_003B_B6D9();
extern void f__2903_0584_0015_8493();
extern void f__B503_0586_0017_050A();
extern void emu_Tools_Shld_Wrapper();
extern void f__0EDB_0594_0026_F09C();
extern void f__22A6_0597_0019_A23D();
extern void f__2903_0599_0017_FD2B();
extern void f__B4E0_059B_001B_5C8D();
extern void f__217E_05A9_001A_42B9();
extern void f__B50B_05AA_0030_871C();
extern void f__B4C4_05C0_002F_C3F6();
extern void f__2903_05C8_0018_6BB5();
extern void f__1DD7_05D0_0014_A7A2();
extern void f__B50B_05DA_002E_8785();
extern void f__2903_05E0_000A_A47A();
extern void f__2756_05E6_0038_06ED();
extern void f__2903_05EA_001D_06CA();
extern void emu_Tools_AddCSIP_Wrapper();
extern void emu_Tools_AddCSIP();
extern void f__B4C4_05F3_002C_3269();
extern void f__06F7_0602_0018_CEB0();
extern void f__B50B_0608_002C_0256();
extern void f__2756_0618_0001_6780();
extern void f__2903_061F_0015_4925();
extern void f__2756_0622_0006_823A();
extern void f__217E_0624_0003_DD23();
extern void f__2756_0629_0049_2D48();
extern void f__B520_062C_0030_162A();
extern void f__0FE4_0632_0031_75AA();
extern void f__B4C4_0633_0041_F5FE();
extern void f__B536_0633_000A_6A3F();
extern void f__217E_063C_002A_EC58();
extern void emu_Input_Keyboard_NextKey();
extern void emu_Tools_SubCSIP();
extern void f__2756_066C_0001_6780();
extern void f__10E4_0675_0026_F126();
extern void f__01F7_0675_0020_D684();
extern void f__217E_0677_0009_9C4F();
extern void f__2756_0677_002D_321F();
extern void f__217E_0698_001E_EA6B();
extern void f__2756_069E_0001_6780();
extern void f__B520_06A2_0013_A505();
extern void f__2756_06A9_0015_B76D();
extern void emu_GUI_Save_AskName();
extern void f__217E_06B6_0014_B057();
extern void emu_Device_Get_Info();
extern void f__16C5_06C6_001D_94A6();
extern void f__2756_06C7_0001_6780();
extern void f__01F7_06D1_004A_EF77();
extern void f__2756_06D2_0021_3A37();
extern void f__22A6_06D7_006B_B7D6();
extern void f__217E_06E9_0041_701D();
extern void f__B52A_06F6_0012_197D();
extern void f__2756_06FB_0042_E7A6();
extern void f__06F7_0713_0011_15A5();
extern void f__1DD7_0719_0014_A78C();
extern void f__B4A2_0729_0013_2494();
extern void emu_Save_Main();
extern void f__06F7_072B_0018_F05F();
extern void f__29E8_072F_000F_651A();
extern void f__217E_073A_0003_5D1A();
extern void emu_Input_History_Clear();
extern void f__2756_0746_0079_B2E2();
extern void f__29E8_074D_0066_6E9B();
extern void f__B4CD_0750_0027_7BA5();
extern void f__217E_0758_0003_5D02();
extern void f__B4ED_075D_002B_59B5();
extern void f__0642_075D_0011_C164();
extern void f__217E_0764_0006_1247();
extern void emu_Structure_ConnectWall();
extern void emu_File_Seek();
extern void f__16C5_0788_0018_4AA5();
extern void f__217E_078A_001C_ADD5();
extern void f__22A6_0796_000B_9035();
extern void emu_Tools_MulCSIP_ip();
extern void f__B52A_07A5_0010_C5C7();
extern void f__217E_07A6_000C_1B04();
extern void f__217E_07B2_0018_C2D5();
extern void f__22A6_07B3_0037_50B9();
extern void emu_Tools_Cmpd();
extern void f__B4ED_07B6_0013_1343();
extern void f__0642_07BE_0058_A125();
extern void f__1423_07C5_0016_E9C2();
extern void f__B52A_07CD_003B_4734();
extern void f__B536_07CE_0032_AF6A();
extern void f__2756_07D0_0001_6780();
extern void emu_Tools_Var79E4_Init();
extern void f__2756_07DA_0048_9F5D();
extern void f__B4FC_07E2_0012_911F();
extern void emu_Tools_Var79E4_Update();
extern void f__176C_07F1_001D_3E0E();
extern void emu_Structure_RemoveFogAroundTile();
extern void f__29E8_07FA_0020_177A();
extern void f__0AEC_0809_001D_BEB5();
extern void emu_File_Read();
extern void f__B491_0819_000C_0B7D();
extern void f__2756_081C_0001_6780();
extern void f__2756_0827_0035_3DAA();
extern void f__01F7_083A_0014_CDF5();
extern void f__B4E0_0847_0019_A380();
extern void f__01F7_084E_0011_B741();
extern void f__B52A_0850_0021_2409();
extern void f__B495_0854_0012_008A();
extern void f__B4F2_0855_0013_A7FD();
extern void f__176C_0858_0023_E780();
extern void f__B520_085F_003A_87ED();
extern void f__2756_0863_0001_6780();
extern void f__176C_0882_0014_0C6A();
extern void f__1DD7_088A_0026_5144();
extern void f__B503_088B_000B_B072();
extern void f__B536_088E_0017_56C5();
extern void f__29E8_0897_0016_2028();
extern void f__B4B8_0899_002D_EBA1();
extern void f__B495_089A_0011_B26C();
extern void f__B518_089C_001A_542C();
extern void f__B52A_08B3_001B_1BB9();
extern void f__29E8_08B5_000A_FC14();
extern void f__06F7_08BD_0016_9292();
extern void f__1423_08CD_0012_0004();
extern void f__B503_08DB_0014_ECA4();
extern void f__06F7_08DD_0013_C78B();
extern void f__B520_08E6_0038_85A4();
extern void f__B4CD_08E7_002B_DC75();
extern void f__1DD7_08EE_000E_5C89();
extern void f__217E_08F0_0016_CE0F();
extern void f__1DD7_0901_001E_8420();
extern void f__22A6_0902_004B_01A8();
extern void f__2903_090A_0019_4354();
extern void f__06F7_0913_0013_C78B();
extern void emu_Structure_UpdateMap();
extern void f__22A6_094D_000C_EC7D();
extern void f__06F7_0967_0014_1157();
extern void f__B520_096E_003C_F7E4();
extern void f__29E8_0971_0071_E515();
extern void f__22A6_0975_004B_1096();
extern void f__10E4_09AB_0031_5E8E();
extern void f__B4B8_09B6_0013_F1B4();
extern void f__16C5_09C4_003E_31D6();
extern void f__1FB5_09C7_0018_922D();
extern void f__B4B8_09D0_0012_0D7D();
extern void f__1DD7_09DA_000F_D404();
extern void f__2756_0A05_003D_0C0C();
extern void f__22A6_0A0D_0002_61BE();
extern void f__22A6_0A0F_0008_6943();
extern void f__22A6_0A19_000E_92F3();
extern void emu_Input_History_Add();
extern void f__B4B8_0A1E_001A_E094();
extern void f__16C5_0A20_003A_2375();
extern void f__06F7_0A27_001D_1D75();
extern void f__22A6_0A2D_0019_EA06();
extern void f__B518_0A3E_0008_F439();
extern void f__B491_0A41_0011_85AD();
extern void f__22A6_0A46_0008_6953();
extern void emu_Input_HandleInput();
extern void f__2756_0A4E_0001_6780();
extern void f__22A6_0A50_000E_9CF3();
extern void f__2756_0A59_0023_D969();
extern void f__22A6_0A64_0015_2F31();
extern void f__06F7_0A6C_0016_FA05();
extern void f__2756_0A76_0001_6780();
extern void f__22A6_0A79_002B_D1F0();
extern void f__1DD7_0A7B_001E_4A5A();
extern void f__0972_0A81_0017_2EC7();
extern void f__2756_0A81_0022_9F5C();
extern void f__B4E0_0A86_000E_D3BB();
extern void f__B4DA_0A8E_0025_4AC8();
extern void f__B511_0A8F_000E_EE64();
extern void f__B518_0A91_000C_38F0();
extern void f__B4ED_0AA5_0010_6B85();
extern void f__B4E0_0AAD_002E_796D();
extern void f__B4DA_0AB8_002A_AAB2();
extern void f__217E_0ABA_001A_9AA0();
extern void f__06F7_0AC1_001F_55CB();
extern void f__0642_0AD2_002A_8B98();
extern void f__2649_0ADA_000E_EEB3();
extern void f__06F7_0AE2_0010_0B2F();
extern void f__1FB5_0AEC_001B_A5E4();
extern void f__B4CD_0AFA_0011_D5DB();
extern void f__0972_0AFC_0016_0DC9();
extern void f__B518_0B0D_000E_E283();
extern void f__06F7_0B14_0024_BD9C();
extern void f__B518_0B1D_0014_307D();
extern void f__2756_0B20_0001_6780();
extern void f__B4E0_0B35_0010_5ED9();
extern void f__06F7_0B42_0024_BD9D();
extern void f__1DD7_0B53_0025_36F7();
extern void f__B4E0_0B5D_0005_6F1A();
extern void f__22A6_0B60_006A_2F61();
extern void f__B503_0B68_000D_957E();
extern void f__1A34_0B71_0033_9787();
extern void f__B4E0_0B86_001E_9967();
extern void f__2756_0B8F_0025_D5D8();
extern void f__0C3A_0B93_0034_3B6D();
extern void f__2649_0BAE_001D_25B1();
extern void f__B495_0BB9_0011_11A0();
extern void f__B4B8_0BC1_000C_1630();
extern void f__176C_0BC3_002A_A6DE();
extern void f__2756_0BC4_0001_6780();
extern void f__1423_0BCC_0012_111A();
extern void f__B4ED_0BD4_001B_FFBA();
extern void f__22A6_0BE6_0054_A98E();
extern void f__B503_0BEE_002A_B077();
extern void f__B4ED_0BF4_001B_A3A9();
extern void f__B511_0C06_002A_8725();
extern void f__B511_0C35_002A_C70F();
extern void f__B4CD_0C36_0014_30D0();
extern void f__B491_0C3E_0008_F6B9();
extern void f__B4F2_0C43_0017_56DB();
extern void f__0972_0C5A_0015_E00A();
extern void emu_Structure_IsValidBuildLocation();
extern void f__B511_0C64_002A_C757();
extern void f__22A6_0C69_008C_017F();
extern void f__1423_0C74_0015_3419();
extern void f__B511_0C93_0014_2A98();
extern void f__0AEC_0CA1_0013_A57D();
extern void f__B503_0CB3_001A_FEEE();
extern void f__B4ED_0CB5_0015_3E7D();
extern void f__B4B8_0D23_0010_BA99();
extern void f__217E_0D2C_000B_83A7();
extern void f__01F7_0D2E_0015_C196();
extern void f__22A6_0D31_0015_A4C3();
extern void f__B495_0D3E_000F_31B8();
extern void emu_Input_Keyboard_EventHandler();
extern void f__B491_0D4B_000D_85F6();
extern void f__B4F2_0D52_0029_1FC2();
extern void f__10E4_0D58_004B_FEF5();
extern void f__01F7_0D59_0022_B62B();
extern void f__B4CD_0D74_0020_7CC1();
extern void f__217E_0D90_001F_C453();
extern void f__3EEE_0D9A_0003_4293();
extern void f__1423_0DC3_0029_D1E2();
extern void f__B495_0DC9_0010_C643();
extern void f__3EEE_0DCA_0003_4293();
extern void f__3EEE_0DCE_0003_4293();
extern void f__B4F2_0DE3_001F_AB1C();
extern void f__22A6_0DF8_0022_5FD5();
extern void f__B503_0DFF_0012_112D();
extern void f__B4F2_0E16_0019_86E9();
extern void f__3EEE_0E1A_0003_4293();
extern void f__22A6_0E1A_0008_F4AE();
extern void f__3EEE_0E1E_0003_4293();
extern void f__22A6_0E22_0012_7FC4();
extern void f__3EEE_0E28_0003_4293();
extern void f__B518_0E2D_0023_FBEC();
extern void f__1A34_0E2E_0015_7E65();
extern void f__22A6_0E34_002B_E39A();
extern void f__0C3A_0E35_0013_A551();
extern void f__2756_0E36_0006_85ED();
extern void f__0AEC_0E3E_0013_E57C();
extern void f__B511_0E44_000C_24F5();
extern void f__3EEE_0E46_0003_4293();
extern void f__3EEE_0E4A_0003_4293();
extern void f__1423_0E4F_0010_843C();
extern void f__3EEE_0E6C_0003_4293();
extern void f__3EEE_0E70_0003_4293();
extern void f__3EEE_0E82_0003_4293();
extern void f__3EEE_0E86_0003_4293();
extern void f__0972_0E87_0047_4065();
extern void f__3EEE_0E90_0003_4293();
extern void f__1FB5_0E9C_001B_37D1();
extern void f__3EEE_0EA8_0003_4293();
extern void f__3EEE_0EB0_0003_4293();
extern void f__B518_0EB1_000E_D2F5();
extern void f__3EEE_0EB6_0003_4293();
extern void f__3EEE_0EBA_0003_4293();
extern void f__3EEE_0EC2_0003_4293();
extern void f__3EEE_0EC8_0003_4293();
extern void f__3EEE_0ECE_0003_4293();
extern void f__B4B8_0ECE_000B_BD2E();
extern void f__3EEE_0ED2_0003_4293();
extern void f__217E_0ED2_001F_0CC9();
extern void f__B4B8_0ED9_001E_DC63();
extern void f__22A6_0EDB_000A_151A();
extern void f__B4F2_0EE0_000E_BC8E();
extern void f__1DD7_0EE2_003D_B019();
extern void emu_Tools_StoreSegments();
extern void f__B503_0F0C_0010_028B();
extern void f__10E4_0F1A_0088_7622();
extern void f__B518_0F22_0007_C8B1();
extern void f__B4F2_0F24_000E_BC8E();
extern void f__B495_0F30_0008_857D();
extern void f__1DD7_0F32_000C_96B1();
extern void f__1DD7_0F43_004A_CF07();
extern void f__01F7_0F45_004B_44A0();
extern void f__1A34_0F48_0018_0DB8();
extern void f__B518_0F54_0023_0701();
extern void f__B4F2_0F68_0011_1140();
extern void f__22A6_0F76_002C_45CC();
extern void f__29E8_0F7A_000D_B1AA();
extern void f__B495_0F7A_000B_410C();
extern void f__B4CD_0F8B_0015_1689();
extern void f__176C_0FA2_0013_6D6D();
extern void f__22A6_0FAE_0027_2378();
extern void f__B511_0FB0_0028_02A0();
extern void f__176C_0FD2_001F_B15D();
extern void f__22A6_0FD7_0043_ACF9();
extern void f__0AEC_0FD8_0017_6202();
extern void f__0C3A_1002_0013_651A();
extern void f__0972_1004_0029_E69D();
extern void f__B4CD_1019_0011_089E();
extern void f__22A6_101C_004B_D9F3();
extern void f__B503_1029_000F_8100();
extern void f__1DD7_102C_001E_4902();
extern void f__01F7_103F_0010_4132();
extern void f__176C_105E_0031_8B3F();
extern void f__B4CD_1086_0040_F11C();
extern void f__0AEC_1093_000F_2295();
extern void emu_String_tolower();
extern void f__176C_1098_0021_667D();
extern void emu_Security_Main();
extern void emu_String_toupper();
extern void f__1DD7_10C9_004D_AF4E();
extern void f__B518_10DC_0011_9EE1();
extern void f__22A6_10DD_0023_B468();
extern void f__1A34_10EC_000E_A326();
extern void f__B4CD_10EE_0039_EC73();
extern void emu_File_Delete();
extern void f__B4F2_1100_0019_B3DC();
extern void f__22A6_1102_004C_B069();
extern void f__B4B8_110D_000D_FD5C();
extern void emu_String_Format();
extern void f__01F7_1139_000D_AAB0();
extern void f__B495_1140_0009_13F2();
extern void f__01F7_1146_0023_6860();
extern void emu_String_Format_Callback();
extern void f__0972_114F_0020_EA79();
extern void f__22A6_1158_0069_1890();
extern void f__B503_116F_001B_4CA0();
extern void f__B4B8_116F_0013_15F7();
extern void f__B4CD_1178_000D_B1D5();
extern void f__1A34_117E_001D_E17B();
extern void f__B4F2_1181_000B_D4AD();
extern void f__0AEC_1181_001C_DFE4();
extern void f__B495_119D_0009_53E9();
extern void f__B4F2_11B4_0016_244A();
extern void f__0972_11B9_0020_8DC9();
extern void f__B503_11BE_0016_067A();
extern void f__B518_11C6_0011_1160();
extern void f__B4F2_11CF_0013_5635();
extern void f__1DD7_11E8_000E_E72A();
extern void f__0AEC_11F6_000F_2195();
extern void f__22A6_1200_007B_0356();
extern void f__1FB5_1207_001B_2A6C();
extern void f__0C3A_1216_0013_E56D();
extern void f__0972_121E_0030_5DAA();
extern void f__B4F2_1221_000D_EE32();
extern void f__B503_122D_002D_E562();
extern void f__B495_1230_001B_A160();
extern void f__217E_125B_0001_6180();
extern void f__B495_125B_0011_10C0();
extern void f__217E_125C_0001_6580();
extern void f__B4CD_1269_0019_A3E5();
extern void f__22A6_127B_0036_F8C9();
extern void f__B503_12AC_0013_473F();
extern void f__176C_12CE_0011_A5C5();
extern void f__B503_1302_0013_473F();
extern void f__B4F2_1303_0017_56DB();
extern void f__1A34_1328_0026_C398();
extern void f__0972_133C_0036_0328();
extern void f__B503_1343_003B_6432();
extern void f__176C_1382_0013_AA74();
extern void f__B4CD_1387_002A_D695();
extern void f__B503_13C2_0008_C4BB();
extern void f__176C_13CD_0014_7309();
extern void f__B4F2_13CE_0013_65D7();
extern void f__0C3A_142D_0018_6667();
extern void f__176C_1458_0023_356A();
extern void f__B4CD_14CA_0013_F579();
extern void f__B518_14D4_0013_5ED7();
extern void f__1A34_14E6_001F_FB1E();
extern void f__B518_14F2_003E_977C();
extern void f__0972_1524_0018_014D();
extern void f__B4CD_154C_0015_B7FB();
extern void f__B518_1570_0016_F4CA();
extern void f__1FB5_1574_000F_E31E();
extern void f__07D4_159A_001D_F971();
extern void f__B495_159D_0027_1B29();
extern void f__0972_15A2_0019_AB1E();
extern void f__B518_15A9_0016_F4CA();
extern void f__1FB5_15B5_0015_6A00();
extern void f__1A34_15F4_0026_EDA4();
extern void f__B4CD_160C_0014_FAD7();
extern void f__01F7_160D_001B_4171();
extern void f__07D4_1625_001A_07E5();
extern void f__01F7_1670_003F_2D8D();
extern void f__1A34_167C_0015_AA25();
extern void f__1DD7_1696_0011_A4E3();
extern void f__B4DA_16CB_001D_31CC();
extern void emu_Gameloop_IntroMenu();
extern void f__1FB5_16D5_006A_679B();
extern void f__01F7_16E1_0021_50D4();
extern void f__B4DA_16F8_001A_D84F();
extern void f__01F7_170A_0029_EF04();
extern void f__01F7_1741_001B_9E34();
extern void f__1FB5_175A_000F_6F28();
extern void f__01F7_176A_000D_8D0C();
extern void f__B4DA_176C_000F_12AD();
extern void f__01F7_17CE_0015_8AC2();
extern void f__1FB5_17D7_0018_F3C7();
extern void f__B4CD_17DC_0019_CB46();
extern void f__B495_17E6_002B_0A6D();
extern void f__B4CD_17F7_001D_1CA2();
extern void f__1FB5_17FE_0011_2DA9();
extern void f__B4CD_1816_0033_B55B();
extern void f__01F7_1828_0023_D335();
extern void f__01F7_184B_000A_9146();
extern void f__01F7_1855_0053_AC2D();
extern void f__1A34_1859_0017_DF09();
extern void f__B4DA_1860_0008_857D();
extern void f__B4DA_1893_001C_7AC4();
extern void f__07D4_18BD_0016_68BB();
extern void f__1FB5_18D3_000E_76AC();
extern void f__176C_1932_0029_D0CC();
extern void f__1A34_193F_0013_FA4D();
extern void f__B495_1960_0016_09F7();
extern void f__07D4_196B_0073_56C1();
extern void f__176C_196C_0027_D87A();
extern void f__B495_19B0_0016_09F7();
extern void f__B4DA_19E6_0016_C1CB();
extern void f__B495_1A14_0013_AE3F();
extern void f__B495_1A29_0012_DF2C();
extern void f__01F7_1A33_002B_B2CA();
extern void f__176C_1A40_0020_8DC9();
extern void f__1A34_1A66_0011_34D4();
extern void f__1FB5_1A67_0005_8AB7();
extern void f__1FB5_1A6C_0020_9634();
extern void f__176C_1A9F_0024_813F();
extern void f__01F7_1AA9_0014_FC63();
extern void f__1FB5_1ABA_0031_8318();
extern void f__01F7_1AE8_0010_0EEE();
extern void f__1FB5_1B21_0027_F474();
extern void f__176C_1B45_0022_208C();
extern void f__B4CD_1B5B_0011_08DE();
extern void f__1A34_1B68_0019_AAA0();
extern void f__01F7_1B73_0022_8ADB();
extern void f__0C3A_1B79_0021_8C40();
extern void f__01F7_1BC3_000F_9450();
extern void f__B4CD_1BC4_0013_1AB3();
extern void f__10E4_1BE0_002F_1A76();
extern void f__176C_1C00_003A_E6C7();
extern void f__B4CD_1C1A_001A_9C1B();
extern void f__1DD7_1C3C_0020_9C6E();
extern void f__176C_1C4F_0017_E375();
extern void f__176C_1C6F_001D_2E46();
extern void f__1A34_1CB1_003A_B457();
extern void f__B4CD_1CDA_000C_C72C();
extern void f__176C_1CFE_0021_29C8();
extern void f__01F7_1DE5_0036_9480();
extern void f__01F7_1E5C_000E_B47A();
extern void f__0C3A_1E67_0011_E44A();
extern void f__1A34_1E99_0012_1117();
extern void f__01F7_1EDE_0027_0D8F();
extern void f__10E4_1EF1_0040_01F8();
extern void f__176C_1F21_001C_8C6C();
extern void f__176C_1F51_002F_CE9F();
extern void f__1A34_1F55_0019_98DF();
extern void f__01F7_1FB0_0010_CF18();
extern void f__01F7_1FE1_005F_A74A();
extern void f__1A34_204C_0043_B1ED();
extern void emu_File_IOCtrl();
extern void f__10E4_2099_0012_A216();
extern void f__01F7_20A3_0004_C957();
extern void f__01F7_20B5_0076_64ED();
extern void f__176C_212E_002E_9D89();
extern void f__1A34_2134_001E_3E9A();
extern void f__01F7_2148_0028_6CAC();
extern void emu_Tools_Realloc();
extern void f__01F7_21FA_0012_B06A();
extern void f__0C3A_2207_001D_EDF2();
extern void emu_String_ToInteger();
extern void f__176C_2275_001D_D22D();
extern void f__10E4_2290_0012_78BD();
extern void f__B4B8_2295_0018_A862();
extern void f__176C_22AA_0014_EDA3();
extern void f__176C_22C4_0019_80C9();
extern void f__0C3A_22CD_0029_8F46();
extern void emu_File_GSAttr();
extern void f__1A34_232C_0011_B7DE();
extern void f__176C_23CC_000B_4119();
extern void emu_File_Close_Wrapper();
extern void emu_File_Close();
extern void f__01F7_2412_0011_FC80();
extern void f__0C3A_2433_0042_DBC6();
extern void f__176C_246C_0015_C163();
extern void f__0C3A_247A_0015_EA04();
extern void f__1A34_24FE_002F_672A();
extern void f__176C_2552_0019_4894();
extern void f__01F7_2562_0026_6AD7();
extern void f__176C_25A5_002C_AC04();
extern void emu_Structure_IsUpgradable();
extern void f__01F7_260F_0012_C6FD();
extern void f__176C_2638_0017_CF4B();
extern void f__176C_26CD_0010_041C();
extern void f__176C_26E5_0013_FF24();
extern void f__0C3A_2714_0015_B6F6();
extern void f__01F7_276F_000F_E56B();
extern void f__176C_27A4_0021_7EE9();
extern void f__1A34_27A8_0012_7198();
extern void f__01F7_27FD_0037_E2C0();
extern void f__0C3A_2814_0015_76F0();
extern void f__01F7_286D_0023_9A13();
extern void f__176C_28B1_0024_58C9();
extern void emu_Tools_Memcopy();
extern void emu_String_strncasecmp();
extern void f__176C_291A_0010_8A93();
extern void emu_Tools_Memset_Internal();
extern void f__0C3A_2929_0012_B10B();
extern void emu_Tools_Memset();
extern void f__1A34_2958_0013_3A47();
extern void f__01F7_2966_0015_53C0();
extern void f__176C_29A9_003A_8DEF();
extern void f__01F7_29B8_0016_B3E0();
extern void emu_File_Create();
extern void emu_File_Truncate();
extern void emu_File_Open_Wrapper();
extern void f__1A34_2AAA_000D_A3E6();
extern void f__176C_2AB2_0021_82CD();
extern void f__1A34_2B18_0011_E4D5();
extern void emu_File_Open();
extern void f__176C_2B97_0013_B226();
extern void f__1A34_2BB5_0025_30B8();
extern void emu_String_printf();
extern void f__176C_2BD5_0014_2C56();
extern void f__176C_2C73_0010_BB2A();
extern void f__1A34_2C95_001B_89A2();
extern void emu_String_Format_Callback_2D4A();
extern void f__1A34_2F9E_0016_5A55();
extern void f__01F7_2FA7_002E_FEFD();
extern void f__01F7_2FD5_0018_0AEC();
extern void f__1A34_3014_001B_858E();
extern void f__1A34_3146_0018_6887();
extern void f__01F7_325B_0026_C673();
extern void emu_Unit_FindStructure();
extern void emu_File_Read_Wrapper();
extern void f__01F7_3357_0028_B817();
extern void f__01F7_3474_001A_8B70();
extern void emu_Structure_GetLinkedUnit();
extern void emu_Unit_GetLinkedStructure();
extern void f__1A34_350F_0021_9B04();
extern void f__01F7_352D_0051_5751();
extern void emu_Unit_UntargetMe();
extern void emu_String_Format_Callback_374D();
extern void emu_String_sprintf();
extern void f__1A34_379B_0015_B07B();
extern void emu_String_sprintf_params();
extern void f__01F7_37D0_0021_EE69();
extern void f__01F7_37F8_000B_8F48();
extern void f__01F7_3803_001E_AAD4();
extern void emu_String_strcat();
extern void emu_String_strchr();
extern void emu_String_strcmp();
extern void emu_String_strcpy();
extern void emu_String_strcasecmp();
extern void emu_String_strlen();
extern void emu_String_strncpy();
extern void f__01F7_39F5_0008_F939();
extern void f__01F7_3A41_0011_CC22();
extern void emu_String_strstr();
extern void f__01F7_3AF8_001D_A439();
extern void emu_String_strupr();
extern void f__01F7_3CF9_000C_1201();
extern void f__01F7_4027_0011_8951();
extern void f__01F7_4215_0026_431F();
extern void emu_File_Write_Wrapper();
extern void emu_File_Write();
extern void f__01F7_4481_0003_623C();
extern void f__01F7_4484_0014_5939();
extern void f__176C_7E2C_0030_42B8();
extern void f__176C_7FF0_0021_1C0F();
