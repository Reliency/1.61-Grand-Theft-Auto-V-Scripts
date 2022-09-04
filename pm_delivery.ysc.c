#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85[2] = { 0, 0 };
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1000;
	var uLocal_104 = 1000;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	bLocal_79 = -1;
	bLocal_91 = "PMDL_OBJ";
	bLocal_92 = "PMDL_LOC";
	bLocal_93 = "PMDL_BCK";
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(3))
	{
		func_142(2);
		func_114();
	}
	iLocal_36 = func_112();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_70)
				{
					func_107();
				}
				else
				{
					func_106();
				}
				if (bLocal_69)
				{
					iLocal_71 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0:
							func_102();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_142(2);
	func_114();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(bLocal_86))
	{
		if (unk_0x4C241E39B23DF959(bLocal_86, false))
		{
			iVar0 = 200;
			iVar1 = (unk_0xEEF059FAD016D209(bLocal_86) - 800);
			if (unk_0x1DBD58820FA61D71(bLocal_86))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_86, (unk_0xEEF059FAD016D209(bLocal_86) - 5), false);
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_5(0, bVar0);
		Global_1649593.f_1177[bVar0] = uParam0;
		Global_1649593.f_1177.f_11[bVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[bVar0] = uParam3;
		Global_1649593.f_1177.f_183[bVar0] = uParam4;
		Global_1649593.f_1177.f_216[bVar0] = uParam5;
		Global_1649593.f_1177.f_227[bVar0 /*3*/] = fParam6;
		Global_1649593.f_1177.f_227[bVar0 /*3*/].f_1 = fParam7;
		Global_1649593.f_1177.f_258[bVar0] = iParam8;
		Global_1649593.f_1177.f_269[bVar0] = uParam9;
		Global_1649593.f_1177.f_312[bVar0] = iParam10;
		Global_1649593.f_1177.f_323[bVar0] = iParam11;
		Global_1649593.f_1177.f_334[bVar0] = iParam12;
		Global_1649593.f_1177.f_345[bVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[bVar0] = iParam14;
		Global_1649593.f_1177.f_367[bVar0] = iParam15;
		Global_1649593.f_1177.f_378[bVar0] = iParam16;
		Global_1649593.f_1177.f_389[bVar0] = iParam17;
		Global_1649593.f_1177.f_400[bVar0] = iParam18;
		Global_1649593.f_1177.f_411[bVar0] = iParam19;
		Global_1649593.f_1177.f_422[bVar0] = iParam20;
		Global_1649593.f_1177.f_433[bVar0] = iParam21;
		Global_1649593.f_1177.f_444[bVar0] = iParam22;
		Global_1649593.f_1177.f_455[bVar0] = iParam23;
		Global_1649593.f_1177.f_466[bVar0] = iParam24;
		Global_1649593.f_1177.f_205[bVar0] = iParam25;
		Global_1649593.f_1177.f_477[bVar0] = iParam26;
		Global_1649593.f_1177.f_488[bVar0] = iParam27;
		Global_1649593.f_1177.f_499[bVar0] = iParam28;
		Global_1649593.f_1177.f_510[bVar0] = iParam29;
		Global_1649593.f_1177.f_521[bVar0] = iParam30;
		Global_1649593.f_1177.f_532[bVar0] = iParam31;
		Global_1649593.f_1177.f_543[bVar0] = iParam32;
		Global_1649593.f_1177.f_554[bVar0] = iParam33;
		Global_1649593.f_1177.f_565[bVar0] = iParam34;
		Global_1649593.f_1177.f_576[bVar0] = iParam35;
		Global_1649593.f_1177.f_587[bVar0] = iParam36;
	}
}

void func_5(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_6(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_74 - unk_0x9CD27B0045628463());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x9CD27B0045628463() >= iLocal_78)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iLocal_75)
	{
		case 0:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 10000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 1:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 9000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 2:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 8000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 3:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 7000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 4:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 6000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 5:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 5000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 6:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 4500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 7:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 4000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 8:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 3500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 9:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 3000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 10:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 2500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 11:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 2000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 12:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 1500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 13:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 1000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 14:
			if (unk_0x9CD27B0045628463() >= (iLocal_74 - 500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 15:
			if (unk_0x9CD27B0045628463() >= iLocal_74)
			{
				unk_0x67C540AA08E4A6F5(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x9CD27B0045628463() >= iLocal_74)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_5(7, bVar0);
		Global_1649593.f_4659[bVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[bVar0] = iParam2;
		Global_1649593.f_4659.f_216[bVar0] = iParam3;
		Global_1649593.f_4659.f_183[bVar0] = iParam4;
		Global_1649593.f_4659.f_194[bVar0] = iParam5;
		Global_1649593.f_4659.f_249[bVar0] = iParam6;
		Global_1649593.f_4659.f_260[bVar0] = iParam7;
		Global_1649593.f_4659.f_205[bVar0] = iParam8;
		Global_1649593.f_4659.f_314[bVar0] = iParam9;
		Global_1649593.f_4659.f_325[bVar0] = iParam10;
		Global_1649593.f_4659.f_357[bVar0] = iParam11;
		Global_1649593.f_4659.f_238[bVar0] = iParam12;
		Global_1649593.f_4659.f_271[bVar0] = iParam13;
		Global_1649593.f_4659.f_368[bVar0] = iParam14;
		Global_1649593.f_4659.f_379[bVar0] = iParam15;
		Global_1649593.f_4659.f_390[bVar0] = iParam16;
		Global_1649593.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_85)
		{
			if (!iLocal_72)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85[iVar0]))
				{
					if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_64, 50f, 50f, 50f, false, true, 0))
					{
						unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 2, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
						unk_0x9B0BB33B04405E7A(unk_0x4F8644AF03D0E0D6(), 0f);
						iLocal_72 = 1;
					}
				}
			}
			else if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85[iVar0]))
				{
					unk_0x22B0D0E37CCB840D(iLocal_85[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_85[iVar0], true);
					unk_0x2595DD4236549CE3(&(iLocal_85[iVar0]));
				}
				if (unk_0x7239B21A38F536BA(bLocal_87))
				{
					unk_0x629BFA74418D6239(&bLocal_87);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&bLocal_39, Local_65, Global_22, 1, bLocal_86, bLocal_92, "", bLocal_93, 1, 0, 1, -1))
	{
		func_19(bLocal_86, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), 2000, 0);
		unk_0x31B927BBC44156CD(bLocal_86, false);
		func_14(&bLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_84)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar1]))
		{
			if (!unk_0xA6DB27D19ECBB7DA(uLocal_89[iVar1]))
			{
				uLocal_89[iVar1] = func_10(iLocal_84[iVar1], 1, 145);
				unk_0xE8854A4326B9E12B(&iLocal_108);
				unk_0x504D54DF3F6F2247(false, false, 0);
				unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x39E72BC99E6360CB(iLocal_108);
				unk_0x5ABA3986D90D8A3B(iLocal_84[iVar1], iLocal_108);
				unk_0x3841422E9C488D8C(&iLocal_108);
				unk_0x971D38760FBC02EF(iLocal_84[iVar1], true);
			}
			if (!unk_0x751B70C3D034E187(iLocal_84[iVar1], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_89[iVar1]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_89[iVar1]));
				}
				unk_0x22B0D0E37CCB840D(iLocal_84[iVar1], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				unk_0x971D38760FBC02EF(iLocal_84[iVar1], true);
				unk_0x2595DD4236549CE3(&(iLocal_84[iVar1]));
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uLocal_89[iVar1]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_89[iVar1]));
		}
		iVar1++;
	}
}

bool func_10(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_11(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_11(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_12(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(bVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(bVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_12(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_12(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()
{
	func_142(1);
	func_114();
}

void func_14(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(bParam0->f_1[bVar0]))
		{
			unk_0x86A652570E5F25DD(&(bParam0->f_1[bVar0]));
		}
		func_17(bVar0, bParam0);
		func_16(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			unk_0xE80492A9AC099A93(&(bParam0->f_13), bVar0);
			unk_0xE80492A9AC099A93(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (unk_0xA6DB27D19ECBB7DA(*bParam0))
	{
		unk_0x86A652570E5F25DD(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[bVar0]))
		{
			unk_0x6373D1349925A70E(bParam0->f_17[bVar0], true);
			unk_0x0EB0585D15254740(bParam0->f_17[bVar0], true);
			if (bParam2)
			{
				unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 32, true);
				unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 305, false);
			}
			unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9BB01E3834671191(bParam0->f_17[bVar0], func_15()) && bParam0->f_17[bVar0] != unk_0xD80958FC74E988A6())
				{
					unk_0xED74007FFB146BC2(bParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(bParam0->f_13, 29))
			{
				unk_0xD75ACCF5E0FB5367(bParam0->f_17[bVar0], false, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), true);
		unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), true);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (bParam2)
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
		}
	}
	bParam0->f_21 = 0;
}

int func_15()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_16(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_5));
	}
}

int func_19(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	if (!bParam6)
	{
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
	}
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 352, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	func_20(bParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(bParam0, fParam1, bParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x36D782F68B309BDA(bParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(bParam0))
			{
				unk_0x81E1552E35DC3839(bParam0, false);
			}
		}
	}
}

bool func_21(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_22(bParam0, Param1, Param2, func_64(), func_64(), bParam3, 5, 0, 0, 0, bParam4, bParam5, func_63(), func_63(), func_63(), func_63(), bParam6, 0, bParam8, bParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_22(bool bParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, bool bParam28)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = iParam7;
	bParam0->f_17[1] = iParam8;
	bParam0->f_17[2] = iParam9;
	bParam0->f_16 = iParam7;
	func_62(bParam0);
	func_61(bParam0);
	func_60();
	if (func_44(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam12, bParam13, bParam14, bParam15, bParam0->f_8, bParam17, bParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_43(bParam12);
		func_43(bParam13);
		func_43(bParam14);
		func_43(bParam15);
		if (unk_0x5A859503B0C08678())
		{
			bVar1 = false;
			if (unk_0x4C241E39B23DF959(bParam10, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false))
				{
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
					if (!BitTest(bParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
					}
					if (BitTest(bParam0->f_13, 23))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 23);
					}
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_41(bParam0, iParam21))
				{
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
					if (!BitTest(bParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
					}
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_43(bParam16);
				func_43(bParam19);
				func_43("MORE_SEATS");
				if (bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						func_43(bParam11);
					}
					if (unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(bParam0);
					}
					if ((!func_37(bParam0, 1) && !func_36(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_32(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(bParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_37(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_32(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
						}
					}
					if (!unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
					{
						if (unk_0xA6DB27D19ECBB7DA(*bParam0))
						{
							unk_0x86A652570E5F25DD(bParam0);
						}
						bParam0->f_5 = func_31(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0xDF735600A4696DAF(bParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_30(bParam0->f_5, bParam0);
						}
					}
					else if (!func_29(Var3, unk_0x586AFE3FF72D996E(bParam0->f_5), 0.1f, 0))
					{
						unk_0xAE2AF67E9D9AF65D(bParam0->f_5, Var3);
						if (bParam27)
						{
							func_30(bParam0->f_5, bParam0);
						}
					}
					if (!func_37(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 2))
						{
							func_34(bParam0, bParam11, 0);
							unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(bParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param2, bParam5, bVar4, iVar5);
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Param3, Param4, bParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									if (!unk_0xA3EE4A07279BB9DB(bParam0->f_17[iVar2], bVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (bParam10 != 0)
								{
									if (!unk_0xA3EE4A07279BB9DB(bParam0->f_17[iVar2], bParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9BB01E3834671191(bParam0->f_17[iVar2], func_15()) || !func_27(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_24(bParam0))
							{
								func_43(bParam11);
								func_43(bParam16);
								func_43(bParam12);
								func_43(bParam13);
								func_43(bParam14);
								func_43(bParam15);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(bParam19);
								func_14(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x7239B21A38F536BA(bParam10))
			{
				if ((bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && (!BitTest(bParam0->f_13, 9) && !BitTest(bParam0->f_13, 22)))
				{
					func_43(bParam16);
					func_43(bParam19);
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						unk_0x86A652570E5F25DD(bParam0);
						func_43(bParam11);
					}
					if ((!func_37(bParam0, 1) && !func_36(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_32(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(bParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_37(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_32(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
						}
					}
					if (unk_0x4C241E39B23DF959(bParam10, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA(*bParam0))
						{
							if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
							{
								unk_0x86A652570E5F25DD(&(bParam0->f_5));
								func_43(bParam11);
							}
							*bParam0 = func_23(bParam10, 0, 0);
							unk_0x9029B2F3DA924928(*bParam0, 2);
							if (!BitTest(bParam0->f_13, 4))
							{
								func_30(*bParam0, bParam0);
							}
						}
						if (!func_37(bParam0, 2))
						{
							if (!BitTest(bParam0->f_13, 3))
							{
								func_34(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (BitTest(bParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(bParam19))
								{
									if (!BitTest(bParam0->f_13, 4))
									{
										func_34(bParam0, bParam19, 0);
										unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
									}
								}
								else if (!BitTest(bParam0->f_13, 4))
								{
									func_34(bParam0, bParam16, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
								if (!BitTest(bParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
									{
										func_32(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
				{
					unk_0x86A652570E5F25DD(&(bParam0->f_5));
					func_43(bParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_37(bParam0, 2))
						{
							if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
							{
								if (!BitTest(bParam0->f_13, 13))
								{
									bVar6 = false;
									bVar7 = false;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[iVar2]))
										{
											bVar6++;
										}
										iVar2++;
									}
									bVar7 = unk_0xD53343AA4FB7DD28(false, bVar6);
									if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[bVar7]))
									{
										func_32(bParam0->f_17[bVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(bParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 13);
								}
							}
							else if (!BitTest(bParam0->f_13, 3))
							{
								func_34(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								if (BitTest(bParam0->f_13, 9))
								{
									func_34(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 3))
						{
							func_34(bParam0, bParam16, 0);
							unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
						}
						else if (BitTest(bParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(bParam19))
							{
								if (!BitTest(bParam0->f_13, 4))
								{
									func_34(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								func_34(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(bParam0->f_13, 0))
		{
			unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
		}
		func_43(bParam11);
		func_43(bParam16);
		func_43(bParam19);
		func_43(bParam16);
		func_43("LOSE_WANTED");
		if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
		{
			unk_0x86A652570E5F25DD(&(bParam0->f_5));
		}
		if (unk_0xA6DB27D19ECBB7DA(*bParam0))
		{
			unk_0x86A652570E5F25DD(bParam0);
		}
	}
	unk_0xE80492A9AC099A93(&(bParam0->f_13), 11);
	unk_0xE80492A9AC099A93(&(bParam0->f_13), 12);
	return 0;
}

bool func_23(bool bParam0, bool bParam1, bool bParam2)
{
	return func_11(bParam0, !bParam1, bParam2);
}

int func_24(bool bParam0)
{
	if (BitTest(bParam0->f_13, 12))
	{
		if (func_26(unk_0xD80958FC74E988A6()))
		{
			if (func_25(1, 0, 1) || BitTest(bParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || BitTest(bParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
	}
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0xBB40DD2270B65366(bVar0, -1, false) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x95EED5A694951F9F(bVar0) < 0.95f || unk_0x95EED5A694951F9F(bVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_26(bool bParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(bool bParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_28(unk_0xD80958FC74E988A6(), bParam0))
			{
				unk_0x4102C7858CFEE4E4(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(bParam0, func_15()))
		{
			unk_0x4102C7858CFEE4E4(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_28(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x826AA586EDB9FEF8(bParam0))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam0, false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bParam1))
				{
					if (unk_0xA808AA1D79230FC2(bParam1, bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(bool bParam0, bool bParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		if (unk_0xA6DB27D19ECBB7DA(bParam1->f_6))
		{
			unk_0x4F7D8A9BFB0B43E9(bParam1->f_6, false);
		}
		unk_0x3DDA37128DD1ACA8(false);
		unk_0x67EEDEA1B9BAFD94();
		bParam1->f_6 = bParam0;
		unk_0x4F7D8A9BFB0B43E9(bParam0, true);
	}
}

bool func_31(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_12(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

void func_32(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_33(iParam2), true);
}

int func_33(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_34(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_35(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_35(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(bParam1, true);
}

int func_36(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0->f_16))
	{
		if (unk_0x9072C8B49907BFAD(bParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_40(bParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
	{
		if (func_39() && !func_38())
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9CD27B0045628463();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_42(bVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xA7C4F2C6E744A550(bParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xF7F203E31F96F6A1(bParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xF7F203E31F96F6A1(bParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_43(bool bParam0)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		unk_0xCF708001E1E536DD(bParam0);
	}
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
		{
			iVar3++;
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					unk_0xD75ACCF5E0FB5367(uParam0->f_17[bVar0], true, -1, 0);
				}
				if (bVar0 == 2)
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
			{
				unk_0xD75ACCF5E0FB5367(uParam0->f_17[bVar0], false, -1, 0);
			}
			if (bVar0 == 2)
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x7239B21A38F536BA(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			bVar15 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, false, iVar16);
			if (unk_0x4C241E39B23DF959(bVar15, false))
			{
				uParam0->f_21 = bVar15;
			}
		}
		if (unk_0x4C241E39B23DF959(uParam0->f_21, false))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470) == 7 && !func_59(uParam0->f_17[bVar0], uParam0->f_21))
									{
										if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], true);
											unk_0xC20E50AA46D09CA8(uParam0->f_17[bVar0], uParam0->f_21, 60000, bVar0, 1f, 1, 0);
											unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					if (!unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]) && !uParam0->f_15)
					{
						unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
					}
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[bVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_15());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(bParam10))
		{
			bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_37(uParam0, 2))
					{
						bVar17 = false;
						bVar18 = false;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
							{
								bVar17++;
							}
							bVar0++;
						}
						bVar18 = unk_0xD53343AA4FB7DD28(false, bVar17);
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar18]))
						{
							func_32(uParam0->f_17[bVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(bParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_37(uParam0, 2))
					{
						bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_55(bVar10, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x4C241E39B23DF959(bParam10, false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bParam10))
			{
				if (unk_0x580417101DDB492F(0, 75))
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[bVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], true);
					}
					else
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], false);
					}
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(bVar10, false))
						{
							if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_54(uParam0->f_17[bVar0]))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar10 != bParam10 && !unk_0x5F9532F3B5CC2551(bVar10, false))
						{
							if (unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], bVar10))
							{
								if (unk_0xCFB0A0D8EDD145A3(bVar10) && !unk_0xB104CD1BABF302E2(bVar10))
								{
									Var19 = { unk_0x3FEF770D40960D5A(bVar10, true) };
									if (Var19.f_2 < -1f)
									{
										unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
					{
						if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
						{
							bVar10 = unk_0x9A9112A0FE9A4713(uParam0->f_17[bVar0], false);
							if (!unk_0x5F9532F3B5CC2551(bVar10, false))
							{
								if (unk_0x4C241E39B23DF959(bParam10, false))
								{
									if (bVar10 != bParam10)
									{
										if (!unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bVar10))
										{
											if (unk_0xD5037BA82E12416F(bVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
									{
										bVar20 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									}
									if (unk_0x4C241E39B23DF959(bVar20, false))
									{
										if (bVar10 != bVar20)
										{
											if (unk_0xD5037BA82E12416F(bVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
					{
						bVar21 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(bVar21))
						{
							if (func_42(bVar21, uParam0, 0))
							{
								if (func_53(bVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
									func_16(bVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(bVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(bVar21) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 2);
								}
								func_52(bVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()) && !func_51(uParam0->f_17[bVar0], bParam10)) && !func_50(uParam0->f_17[bVar0], bParam10))
					{
						if (func_57(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]))
								{
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_15());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								uParam0->f_11 = unk_0x9CD27B0045628463();
								uParam0->f_1[bVar0] = func_23(uParam0->f_17[bVar0], 0, 0);
								unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[bVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
					{
						if (((func_27(uParam0->f_17[bVar0], 1) || func_51(uParam0->f_17[bVar0], bParam10)) || iParam12) || (unk_0x4C241E39B23DF959(bParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
								func_43(uVar12[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_30(uParam0->f_1[bVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x4C241E39B23DF959(bParam10, false))
					{
						if (!unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], bParam10))
						{
							if ((unk_0x751B70C3D034E187(uParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false)))
							{
								if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
								{
									if (!unk_0xA3EE4A07279BB9DB(uParam0->f_17[bVar0], bParam10, false))
									{
										if (!func_27(uParam0->f_17[bVar0], 1))
										{
											if (func_26(uParam0->f_17[bVar0]))
											{
												iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x504D54DF3F6F2247(uParam0->f_17[bVar0], false, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
										}
									}
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7 && !func_59(uParam0->f_17[bVar0], bParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_49(uParam0->f_17[bVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
											}
											unk_0xC20E50AA46D09CA8(uParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											unk_0xBC0ED94165A48BC2(uParam0->f_17[bVar0], false);
										}
									}
									else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false))
									{
										uParam0->f_1[bVar0] = func_23(uParam0->f_17[bVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
									{
										iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_15());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_15()) && !unk_0x28D3FED7190D3A0B(bParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_43(uVar12[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				iVar1++;
			}
			bVar0++;
		}
		if (!func_37(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
						{
							if (func_54(uParam0->f_17[bVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_54(uParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = unk_0x9CD27B0045628463();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_34(uParam0, bParam7, 0);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_48(bVar0, uParam0))
									{
										if (!unk_0xF22B6C47C6EAB066(uVar13[bVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar13[bVar0], ""))
											{
												func_46(uParam0, uVar12[bVar0], uVar13[bVar0], 0);
												func_45(bVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_48(bVar0, uParam0))
										{
											func_34(uParam0, uVar12[bVar0], 0);
											func_45(bVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xE80492A9AC099A93(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_43(uVar12[bVar0]);
				}
				bVar0++;
			}
			func_43("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_45(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_47(bParam1, bParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_47(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x9D77056A530643F6(bParam2, true);
}

int func_48(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(bool bParam0, float fParam1)
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(bParam0, false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(bParam0, false);
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0xD5037BA82E12416F(bVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x9BB01E3834671191(bParam0, func_15()))
		{
			iVar0 = unk_0xF92691AED837A5FC(bParam0);
			if (unk_0x4C241E39B23DF959(bParam1, false))
			{
				if (unk_0x751B70C3D034E187(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == bParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_51(bool bParam0, bool bParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x7239B21A38F536BA(bParam1))
		{
			if (unk_0x4C241E39B23DF959(bParam1, false))
			{
				if (unk_0xA808AA1D79230FC2(bParam0, bParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_52(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		bVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bParam0))
			{
				bVar1 = unk_0x6094AD011A2EA87D(bParam0);
				if (unk_0x4C241E39B23DF959(bVar1, false))
				{
					if (bVar0 == bVar1)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, 20f, 20f, 20f, false, true, 0) && unk_0x751B70C3D034E187(bParam0, bVar1, 20f, 20f, 20f, false, true, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x9F47B058362C84B5(bParam0) == joaat("bus") || unk_0x9F47B058362C84B5(bParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			bVar3 = unk_0xBB40DD2270B65366(bParam0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar3))
			{
				if ((bVar3 == uParam1->f_17[0] || bVar3 == uParam1->f_17[1]) || bVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = unk_0xBB40DD2270B65366(bParam0, true, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar4))
			{
				if ((bVar4 == uParam1->f_17[0] || bVar4 == uParam1->f_17[1]) || bVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = unk_0xBB40DD2270B65366(bParam0, 2, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar5))
			{
				if ((bVar5 == uParam1->f_17[0] || bVar5 == uParam1->f_17[1]) || bVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_56(var uParam0)
{
	bool bVar0;
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_42(bVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, bool bParam1, float fParam2, bool bParam3)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam1))
	{
		if (unk_0x826AA586EDB9FEF8(bParam1))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam1, false);
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0x4C241E39B23DF959(bVar0, false))
				{
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bVar0))
					{
						if (func_56(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				bVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(bVar0))
				{
					if (func_42(bVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(bVar0, false))
						{
							if (func_58(bVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58(bool bParam0)
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		fVar0 = unk_0xD5037BA82E12416F(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam1, false))
		{
			bVar0 = unk_0x6094AD011A2EA87D(bParam0);
			if (bVar0 == bParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_60()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			bVar1 = unk_0xBB40DD2270B65366(bVar0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar1))
			{
				if (bVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(bVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(bVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(bVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 32, false);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 305, true);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 268, true);
					unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
				{
					unk_0x6373D1349925A70E(uParam0->f_17[iVar0], false);
					unk_0x0EB0585D15254740(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
			{
				unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), false);
				unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), false);
			}
		}
	}
}

bool func_63()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_64()
{
	struct<3> Var0;
	
	return Var0;
}

void func_65()
{
	int iVar0;
	
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_86, false))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
		{
			unk_0x86A652570E5F25DD(&bLocal_90);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_74 = (unk_0x2F8B4D1C595B11DB() * ((60 * iLocal_76) + bLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x9CD27B0045628463());
			iLocal_78 = (iLocal_74 - unk_0x2F8B4D1C595B11DB() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_74 = (unk_0x2F8B4D1C595B11DB() * ((60 * iLocal_76) + bLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x9CD27B0045628463());
			iLocal_78 = (iLocal_74 - unk_0x2F8B4D1C595B11DB() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			bLocal_87 = unk_0xAF35D0D2583051B0(bLocal_83, Local_66, bLocal_68, true, true, false);
			iLocal_85[0] = unk_0x7DD959874C1FD534(bLocal_87, 6, bLocal_81, -1, true, true);
			iLocal_85[1] = unk_0x7DD959874C1FD534(bLocal_87, 6, bLocal_81, false, true, true);
			unk_0xF372BC22FCB88606("rghCop", &iLocal_106);
			unk_0xBF25EB89375A37AD(4, iLocal_106, joaat("player"));
			unk_0x9F7794730795E019(iLocal_85[0], 39, true);
			unk_0x9F7794730795E019(iLocal_85[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_85)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_85[iVar0], joaat("weapon_pistol"), -1, false, true);
				unk_0xF29CF591C4BF6CEE(iLocal_85[iVar0], 100f);
				unk_0xC80A74AC829DDD92(iLocal_85[iVar0], iLocal_106);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bLocal_86, false))
	{
		if (func_101() || unk_0x84A2DD9AC37C35C1(iLocal_84[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_84)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar0]))
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_89[iVar0]))
					{
						uLocal_89[iVar0] = func_10(iLocal_84[iVar0], 1, 145);
						unk_0x9F7794730795E019(iLocal_84[iVar0], 1, false);
						unk_0xE8854A4326B9E12B(&iLocal_108);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_108);
						unk_0x5ABA3986D90D8A3B(iLocal_84[iVar0], iLocal_108);
						unk_0x3841422E9C488D8C(&iLocal_108);
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uLocal_89[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_89[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_73)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84[0]))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_84[0], 50f, 50f, 50f, false, true, 0))
				{
					unk_0x9454528DF15D657A(iLocal_84[0], bLocal_86, unk_0xD80958FC74E988A6(), 8, 25f, 786469, -1f, -1f, true);
					iLocal_73 = 1;
				}
			}
		}
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_86, false))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
			{
				unk_0x86A652570E5F25DD(&bLocal_90);
			}
			func_100(&uLocal_94, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x22AC59A870E6A669(bLocal_86, -1, false) || unk_0x84A2DD9AC37C35C1(iLocal_84[0]))
		{
			func_100(&uLocal_94, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84[0]) && !unk_0x5F9532F3B5CC2551(bLocal_86, false))
	{
		if (unk_0xA3EE4A07279BB9DB(iLocal_84[0], bLocal_86, false))
		{
			func_68(&uLocal_94, bLocal_86, 0, 0, 1, 1, 1);
		}
	}
}

void func_68(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_69(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_70(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_70(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_100(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam3;
	if (unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_99(bVar0))
	{
		func_98();
	}
	if (func_97(bParam1) && unk_0x47D6F43D77935C75(bParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(bParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(bParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(bParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(bParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(bParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(bParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(bParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(bParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_92(uParam0, bParam5, bParam7, 0))
			{
				func_88(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(bVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam6)
						{
							if (!func_99(bVar0))
							{
								func_75(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
								{
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(bVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
				{
					if (((unk_0xE659E47AF827484B(bParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam6)
					{
						if (!func_99(bVar0))
						{
							func_75(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_74(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(bParam3))
			{
				if (func_99(bParam3))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_100(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_100(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_100(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_100(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_100(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_100(uParam0, bVar0, 1);
				}
			}
			if (!func_92(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_100(uParam0, bVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_97(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", false, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_76(bool bParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(bParam0) && func_99(bParam0)) || func_99("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_74(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_87(0))
	{
		return 0;
	}
	if (func_86())
	{
		return 0;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	if ((func_85() || func_84(Global_4718592.f_168757)) || func_83())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_82(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_81(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_78(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_78(bool bParam0)
{
	if (bParam0 != func_80())
	{
		if (func_79(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_79(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_79(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5E9564D8246B909A(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	return -1;
}

int func_81(bool bParam0, bool bParam1)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
		{
			switch (bParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xE38E9162A2500646(bParam0, bParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

bool func_82(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x997ABD671D25CA0B(bParam0, bParam1))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam0, bParam1);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				bVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(bVar0));
				if (bVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < bVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!unk_0x22AC59A870E6A669(bVar0, bVar3, false))
					{
						if (unk_0xBB40DD2270B65366(bVar0, bVar3, false) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

var func_83()
{
	return Global_2714762.f_19;
}

bool func_84(int iParam0)
{
	return iParam0 == 51;
}

var func_85()
{
	return Global_2714762.f_18;
}

bool func_86()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_88(var uParam0, bool bParam1, struct<3> Param2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		func_100(uParam0, 0, 0);
	}
	if (func_91(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x524AC5ECEA15343E(bParam1))
		{
			bVar0 = unk_0x04A2A40C73395041(bParam1);
			if (!unk_0x997ABD671D25CA0B(bVar0, false))
			{
				if (unk_0x12534C348C6CB68B(bVar0))
				{
					if (!func_89())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(bVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x189E955A8313E298(bParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", false, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_89()
{
	return func_90(unk_0x4F8644AF03D0E0D6());
}

int func_90(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_91(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_98();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_97(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x6AC7003FA6E5575E(bParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(bParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

bool func_99(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_100(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", false, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_99(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_99(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

int func_101()
{
	if (unk_0x7239B21A38F536BA(bLocal_86))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_86, false))
		{
			if ((((((unk_0xEEF059FAD016D209(bLocal_86) < 300 || unk_0xC45D23BAF168AAB8(bLocal_86) < 200f) || unk_0x28D3FED7190D3A0B(bLocal_86)) || (unk_0xBA291848A0815CA9(bLocal_86, false, false) && unk_0xBA291848A0815CA9(bLocal_86, true, false))) || (unk_0xBA291848A0815CA9(bLocal_86, 4, false) && unk_0xBA291848A0815CA9(bLocal_86, 5, false))) || (unk_0xBA291848A0815CA9(bLocal_86, false, false) && unk_0xBA291848A0815CA9(bLocal_86, 4, false))) || (unk_0xBA291848A0815CA9(bLocal_86, true, false) && unk_0xBA291848A0815CA9(bLocal_86, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102()
{
	bool bVar0;
	int iVar1;
	
	bLocal_86 = func_104(0);
	if (!unk_0x4C241E39B23DF959(bLocal_86, false))
	{
		bLocal_86 = unk_0xAF35D0D2583051B0(bLocal_82, Local_64, bLocal_67, true, true, false);
		bVar0 = true;
		while (bVar0 <= 8)
		{
			unk_0x7EE3A3C5E4A40CC9(bLocal_86, bVar0, true);
			bVar0++;
		}
		if (bLocal_79 != -1)
		{
			unk_0x7EE3A3C5E4A40CC9(bLocal_86, bLocal_79, false);
		}
	}
	unk_0xF7EC25A3EBEEC726(bLocal_86, true);
	bLocal_90 = func_103(bLocal_86, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0xFAEE099C6F890BB8(bLocal_86, false, false, false, false, true, false, false, false);
			unk_0xE65F427EB70AB1ED(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", bLocal_86, false, false, 0);
		}
		func_35(bLocal_91, 7500, 1);
	}
	else
	{
		iLocal_84[0] = unk_0x7DD959874C1FD534(bLocal_86, 26, bLocal_80, -1, true, true);
		iLocal_84[1] = unk_0x7DD959874C1FD534(bLocal_86, 26, bLocal_80, false, true, true);
		unk_0xF372BC22FCB88606("rghCriminal", &iLocal_107);
		unk_0xBF25EB89375A37AD(5, iLocal_107, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_84)
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_84[iVar1], true);
			unk_0xBF0FD6E56C964FCB(iLocal_84[iVar1], joaat("weapon_sawnoffshotgun"), -1, false, true);
			unk_0xC80A74AC829DDD92(iLocal_84[iVar1], iLocal_107);
			iVar1++;
		}
		unk_0x480142959D337D00(iLocal_84[0], bLocal_86, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
	{
		bLocal_88 = unk_0xB6997A7EB3F5C8C0();
	}
	iLocal_38 = 1;
}

bool func_103(bool bParam0, bool bParam1, bool bParam2)
{
	return func_11(bParam0, !bParam1, bParam2);
}

int func_104(int iParam0)
{
	if (unk_0x4C241E39B23DF959(Global_112096.f_222[iParam0], false))
	{
		unk_0xAD738C3085FE7E11(Global_112096.f_222[iParam0], true, true);
		return Global_112096.f_222[iParam0];
	}
	return 0;
}

int func_105()
{
	if (unk_0x7239B21A38F536BA(bLocal_86))
	{
		if (unk_0x4C241E39B23DF959(bLocal_86, false))
		{
			if (!unk_0x751B70C3D034E187(bLocal_86, unk_0xD80958FC74E988A6(), 300f, 300f, 300f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_84[0]))
	{
		if (unk_0xA6DB27D19ECBB7DA(uLocal_89[0]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_89[0]));
		}
	}
	return 0;
}

void func_106()
{
	unk_0x963D27A58DF860AC(bLocal_82);
	unk_0x71A78003C8E71424("PMDL", false);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x963D27A58DF860AC(bLocal_81);
		unk_0x963D27A58DF860AC(bLocal_83);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x963D27A58DF860AC(bLocal_80);
	}
	unk_0x0FC2D89AC25A5814(joaat("benson"), true);
	unk_0x0FC2D89AC25A5814(joaat("pony2"), true);
	if (unk_0x98A4EB5D89A0C952(bLocal_82) && unk_0x02245FE4BED318B8(false))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x98A4EB5D89A0C952(bLocal_81) && unk_0x98A4EB5D89A0C952(bLocal_83))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x98A4EB5D89A0C952(bLocal_80))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x2F844A8B08D76685("Deliveries", false, -1))
			{
				bLocal_69 = true;
			}
		}
		else
		{
			bLocal_69 = true;
		}
	}
}

void func_107()
{
	float fVar0;
	
	Local_64 = { func_109(func_111(), iLocal_36) };
	bLocal_67 = func_108(func_111(), iLocal_36);
	if (iLocal_36 > 6)
	{
		bLocal_91 = "PMDL_TRUCK";
		bLocal_92 = "PMDL_BTIM";
		bLocal_93 = "PMDL_BCKT";
		bLocal_82 = joaat("benson");
		bLocal_79 = 2;
	}
	if (func_111() == 10)
	{
		Local_65 = { -1161.213f, -1567.068f, 3.4234f };
		bLocal_82 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_76 = 2;
			bLocal_77 = 15;
			bLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_76 = 1;
			bLocal_77 = 30;
			bLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_76 = 1;
			bLocal_77 = 30;
			bLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			Local_66 = { -3121.261f, 1152.92f, 19.4047f };
			bLocal_68 = 176.4887f;
			bLocal_83 = joaat("police4");
			bLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4)
		{
			Local_66 = { 1543.145f, 2184.371f, 77.8114f };
			bLocal_68 = 45.3499f;
			bLocal_83 = joaat("police4");
			bLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			bLocal_80 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_111() == 14)
	{
		Local_65 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0xF1B760881820C952(Local_64, Local_65, true);
		bLocal_77 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 13)
	{
		Local_65 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0xF1B760881820C952(Local_64, Local_65, true);
		bLocal_77 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 12)
	{
		Local_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0xF1B760881820C952(Local_64, Local_65, true);
		bLocal_77 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_111() == 11)
	{
		Local_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0xF1B760881820C952(Local_64, Local_65, true);
		bLocal_77 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_75 = 0;
	iLocal_70 = 1;
}

float func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 11:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return func_110(iParam0);
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_111()
{
	return Global_112096.f_20;
}

int func_112()
{
	return func_113(Global_112096.f_20, Global_112096.f_29);
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_114()
{
	unk_0x0FC2D89AC25A5814(joaat("benson"), false);
	unk_0x0FC2D89AC25A5814(joaat("pony2"), false);
	unk_0x7A2D8AD0A9EB9C3F();
	if (iLocal_71)
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_88, false))
		{
			func_115(bLocal_88, 0, 145);
		}
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		func_100(&uLocal_94, 0, 0);
	}
	unk_0x1090044AD1DA76FA();
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	
	if (iParam1 == 0)
	{
		bVar1 = unk_0xA6E9C38DB51D7748(bParam0, &uVar0);
		if (!unk_0xCA042B6957743895(bVar1))
		{
			if (unk_0xD24D37CC275948CC(bVar1) == unk_0xD24D37CC275948CC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_116(bParam0, iParam2);
	return 1;
}

void func_116(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_122(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = unk_0xBB40DD2270B65366(bParam0, -1, false);
		if (!unk_0x7239B21A38F536BA(bVar0))
		{
			bVar0 = unk_0x83F969AA1EE2A664(bParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(bVar0) && !unk_0x84A2DD9AC37C35C1(bVar0))
		{
			if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = bParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_117(bParam0, &(Global_113386.f_32749.f_5510));
}

void func_117(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_121(uParam1);
		uParam1->f_66 = unk_0x9F47B058362C84B5(bParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(bParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(bParam0);
		unk_0xA19435F193E081AC(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x0EE21293DAD47C95(bParam0);
		uParam1->f_67 = unk_0x2BB9230590DA5E8A(bParam0);
		uParam1->f_69 = unk_0xB3ED1BFB4BE636DC(bParam0);
		uParam1->f_70 = unk_0x25BC98A59C2EA962(bParam0);
		unk_0x8389CD56CA8072DC(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7619EEE8C886757F(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8C4B92553E4766A5(bParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 28);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 29);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 30);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			uParam1->f_68 = unk_0xF8C397922FC03F41(bParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_66))
		{
			if (unk_0x4198AB0022B15F87(bParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(bParam0))
				{
					case 3:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 10);
		}
		if (unk_0xF095C0405307B21B(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 13);
			unk_0xB64CF2CCA9D95F52(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x910A32E7AAD2656C(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 12);
		}
		func_119(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_118(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 11);
		}
		if (unk_0x05661B80A8C9165F(bParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(bParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 27);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_119(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < *uParam1)
	{
		bVar1 = bVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			(*uParam1)[bVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				(*uParam1)[bVar0] = 1;
			}
		}
		else if (bVar1 == 22)
		{
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*bParam0))
				{
					case 255:
						(*uParam1)[bVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[bVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[bVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[bVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[bVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[bVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[bVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[bVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[bVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[bVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[bVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[bVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[bVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[bVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[bVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[bVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[bVar0] = unk_0x772960298DA26FDB(*bParam0, bVar0) + 1;
			if (bVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
			else if (bVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_121(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_122(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_140(bParam0, 0, 0)) || func_140(bParam0, 1, 0)) || func_140(bParam0, 2, 0)) || func_139(bParam0) != 145) || func_138(bParam0)) || func_137(bParam0)) || func_136(bParam0)) || func_135(bParam0)) || !func_123(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_137(bParam0))
		{
		}
		if (func_137(bParam0))
		{
		}
		if (func_140(bParam0, 0, 0))
		{
		}
		if (func_140(bParam0, 1, 0))
		{
		}
		if (func_140(bParam0, 2, 0))
		{
		}
		if (func_139(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_123(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_124(bParam0, 0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)) || unk_0xDCE4334788AF94EA(bParam0)) || unk_0xAB935175B22E822B(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_124(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(bParam0))
	{
		return 0;
	}
	if (((((bParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7()) || (bParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (bParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || bParam0 == joaat("blimp2")) || (bParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7()))
	{
		if (!func_134())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("blimp"))
	{
		if ((((!func_133() && !func_132()) && !func_131()) && !func_130()) && !func_134())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_129() || unk_0x48AF36444B965238()) || func_128())
		{
		}
		else if (!func_131())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_127(bParam0))
		{
			return 0;
		}
	}
	if (!func_125(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_125(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_126())
	{
		return 1;
	}
	unk_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (bParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBD4D7EAF8A30F637(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_126()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_127(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	bVar1 = unk_0x9A73240B49945C76();
	if (bParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && bVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && bVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("virgo3") || bParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && bVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && bVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && bVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && bVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && bVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && bVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && bVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && bVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && bVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && bVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && bVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && bVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && bVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && bVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && bVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && bVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && bVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && bVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && bVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && bVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && bVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && bVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && bVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && bVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && bVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && bVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && bVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && bVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && bVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && bVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && bVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && bVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && bVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && bVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && bVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && bVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && bVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && bVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && bVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && bVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && bVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && bVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && bVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && bVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && bVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && bVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && bVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && bVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && bVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && bVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && bVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && bVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && bVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && bVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && bVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && bVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && bVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && bVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && bVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && bVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && bVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && bVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && bVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && bVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && bVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && bVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && bVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && bVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && bVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && bVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && bVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && bVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && bVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && bVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && bVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && bVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && bVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && bVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && bVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && bVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && bVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && bVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && bVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && bVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && bVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && bVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && bVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && bVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && bVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && bVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && bVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && bVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && bVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && bVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && bVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && bVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && bVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && bVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && bVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && bVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && bVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && bVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && bVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && bVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && bVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && bVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && bVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && bVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && bVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && bVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && bVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && bVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && bVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && bVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && bVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && bVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && bVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && bVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && bVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && bVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && bVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && bVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && bVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && bVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && bVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && bVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && bVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && bVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && bVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && bVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && bVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && bVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && bVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && bVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && bVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && bVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && bVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && bVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && bVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && bVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && bVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && bVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && bVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && bVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && bVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && bVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && bVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && bVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && bVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && bVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && bVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && bVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && bVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && bVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && bVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && bVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && bVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && bVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && bVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && bVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("monster3"))
	{
	}
	else if (bParam0 == joaat("cerberus"))
	{
	}
	else if (bParam0 == joaat("cerberus2"))
	{
	}
	else if (bParam0 == joaat("cerberus3"))
	{
	}
	else if (bParam0 == joaat("brutus"))
	{
	}
	else if (bParam0 == joaat("brutus2"))
	{
	}
	else if (bParam0 == joaat("brutus3"))
	{
	}
	else if (bParam0 == joaat("scarab"))
	{
	}
	else if (bParam0 == joaat("scarab2"))
	{
	}
	else if (bParam0 == joaat("scarab3"))
	{
	}
	else if (bParam0 == joaat("imperator"))
	{
	}
	else if (bParam0 == joaat("imperator2"))
	{
	}
	else if (bParam0 == joaat("imperator3"))
	{
	}
	else if (bParam0 == joaat("zr380"))
	{
	}
	else if (bParam0 == joaat("zr3802"))
	{
	}
	else if (bParam0 == joaat("zr3803"))
	{
	}
	else if (bParam0 == joaat("impaler"))
	{
	}
	else if (bParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && bVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && bVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && bVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && bVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && bVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && bVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && bVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && bVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && bVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && bVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && bVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && bVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && bVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && bVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && bVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && bVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && bVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && bVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && bVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && bVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && bVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && bVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && bVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && bVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && bVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && bVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && bVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && bVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && bVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && bVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && bVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && bVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && bVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && bVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && bVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && bVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && bVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && bVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && bVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && bVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && bVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && bVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && bVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && bVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && bVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && bVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && bVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && bVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && bVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && bVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && bVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && bVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && bVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && bVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && bVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && bVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && bVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && bVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && bVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && bVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && bVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && bVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && bVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && bVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && bVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && bVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && bVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && bVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && bVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && bVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && bVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && bVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && bVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && bVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && bVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && bVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && bVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && bVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && bVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && bVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && bVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && bVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && bVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && bVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && bVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && bVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && bVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && bVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && bVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && bVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && bVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && bVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && bVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && bVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && bVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && bVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && bVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && bVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && bVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && bVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && bVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && bVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && bVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && bVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && bVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && bVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && bVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && bVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && bVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && bVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && bVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && bVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && bVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && bVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && bVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && bVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && bVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && bVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && bVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && bVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && bVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && bVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && bVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && bVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && bVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && bVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && bVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && bVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && bVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && bVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && bVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && bVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && bVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && bVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && bVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && bVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && bVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && bVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_128()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_129()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_130()
{
	return 0;
}

int func_131()
{
	return 1;
}

int func_132()
{
	return 1;
}

int func_133()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	bool bVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &bVar0, -1);
				unk_0x933D6A9EEC1BACD0(&bVar0, 2);
				unk_0x933D6A9EEC1BACD0(&bVar0, 4);
				unk_0x933D6A9EEC1BACD0(&bVar0, 6);
				unk_0x933D6A9EEC1BACD0(&Global_25, 2);
				unk_0x933D6A9EEC1BACD0(&Global_25, 4);
				unk_0x933D6A9EEC1BACD0(&Global_25, 6);
				unk_0xB3271D7AB655B441(joaat("sp_unlock_exclus_content"), bVar0, true);
				if (unk_0x5AA3BEFA29F03AD4())
				{
					bVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&bVar0, false);
					unk_0xDAC073C7901F9E15(bVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (BitTest(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_124(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_136(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == bParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_97772[iVar0]) && unk_0x4C241E39B23DF959(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == bParam0 && unk_0x9F47B058362C84B5(Global_97772[iVar0]) == unk_0x9F47B058362C84B5(bParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_138(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_77137.f_484[24]))
	{
		if (bParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_140(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_141(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_142(int iParam0)
{
	Global_112096.f_22 = iParam0;
}

