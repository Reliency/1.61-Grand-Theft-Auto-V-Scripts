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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0xC968670BFACE42D9(2) || unk_0x95AB8B5C992C7B58())
	{
		unk_0x1090044AD1DA76FA();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	int iVar1;
	
	while (!func_9(&iLocal_20))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_20))
	{
		if (!Global_96936)
		{
			unk_0xAD738C3085FE7E11(iLocal_20, true, true);
			if (unk_0x77F1BEB8863288D5(iLocal_20, 1435919172) != 7)
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_20);
			}
			Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
			unk_0x9F8AA94D6D97DBF4(iLocal_20, true);
			unk_0xE8854A4326B9E12B(&iVar1);
			if (!unk_0x997ABD671D25CA0B(iLocal_20, false))
			{
				if (!unk_0x4859F1FC66A6278E(iLocal_20, 0) && !unk_0x997ABD671D25CA0B(iLocal_20, false))
				{
					unk_0x1DDA930A0AC38571(0, Var0, 6000);
				}
			}
			unk_0x6FA46612594F7973(0, Var0, 6000, 0, 2);
			unk_0x39E72BC99E6360CB(iVar1);
			unk_0x5ABA3986D90D8A3B(iLocal_20, iVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xB16FCE9DDC7BA182())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x7239B21A38F536BA(iLocal_20))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_20))
		{
			unk_0x971D38760FBC02EF(iLocal_20, true);
		}
		unk_0x2595DD4236549CE3(&iLocal_20);
	}
	Global_96936 = 0;
	unk_0x1090044AD1DA76FA();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9CD27B0045628463() + 1000;
	while (unk_0x9CD27B0045628463() < iVar0 && !unk_0xB16FCE9DDC7BA182())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xD80958FC74E988A6()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0xD80958FC74E988A6()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0xD80958FC74E988A6()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_4(iParam3), false);
}

int func_4(int iParam0)
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

int func_5(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97810[iLocal_18]) && !unk_0x84A2DD9AC37C35C1(Global_97810[iLocal_18]))
		{
			if (Global_97810[iLocal_18] != unk_0xD80958FC74E988A6())
			{
				if (!unk_0x0A7B270912999B3C(Global_97810[iLocal_18]))
				{
					if (unk_0x997ABD671D25CA0B(Global_97810[iLocal_18], false) || !unk_0xB346476EF1A64897(Global_97810[iLocal_18]))
					{
						if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(Global_97810[iLocal_18], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), true) < 10f)
						{
							iLocal_19 = func_5(Global_97810[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xFCDFF7B72D23A1AC(Global_97810[iLocal_18], unk_0xD80958FC74E988A6(), 17))
									{
										if (unk_0x997ABD671D25CA0B(Global_97810[iLocal_18], false))
										{
											iVar0 = unk_0x9A9112A0FE9A4713(Global_97810[iLocal_18], false);
										}
										if ((unk_0x7239B21A38F536BA(iVar0) && unk_0x4C241E39B23DF959(iVar0, false)) || !unk_0x7239B21A38F536BA(iVar0))
										{
											*uParam0 = Global_97810[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_6(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_5(unk_0xD80958FC74E988A6());
			if (func_8(iVar0) && (!func_12(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_8(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_12(int iParam0)
{
	return Global_43052 == iParam0;
}

