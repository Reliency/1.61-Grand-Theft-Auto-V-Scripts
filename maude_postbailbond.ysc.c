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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (unk_0xC968670BFACE42D9(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(bLocal_42))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0x9CD27B0045628463();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		func_48(1, &uLocal_48);
	}
	while (true)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!func_51(bLocal_42))
			{
				func_56();
			}
			Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			Var1 = { unk_0x3FEF770D40960D5A(bLocal_42, true) };
			if (unk_0xB7A628320EFF8E47(Var0, Var1) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(Var1, Var0, 18000, 1101004800);
					if (func_25(&bLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(Var1, Var0);
						unk_0xD3BD40951412FEF6(func_11());
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (func_5(&bLocal_42, &bLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				
				case 2:
					if (!func_4(bLocal_42, 1805844857) && !unk_0xBBCCE00B381F8482(bLocal_42))
					{
						if (!unk_0x1F0B79228E461EC9(bLocal_42, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (func_51(bLocal_42))
	{
		func_2(&bLocal_42);
		unk_0x22B0D0E37CCB840D(bLocal_42, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
		unk_0x971D38760FBC02EF(bLocal_42, true);
	}
}

void func_2(bool bParam0)
{
	if (func_51(*bParam0))
	{
		unk_0x70A2D1137C8ED7C9(*bParam0, 2, false);
		unk_0x70A2D1137C8ED7C9(*bParam0, 64, false);
		unk_0x70A2D1137C8ED7C9(*bParam0, 128, false);
		unk_0x70A2D1137C8ED7C9(*bParam0, 8, false);
		unk_0x70A2D1137C8ED7C9(*bParam0, 1, false);
		unk_0x70A2D1137C8ED7C9(*bParam0, 32, false);
		unk_0x9F7794730795E019(*bParam0, 5, false);
		unk_0x9F7794730795E019(*bParam0, 17, true);
		unk_0x1913FE4CBF41C463(*bParam0, 118, true);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(bool bParam0, int iParam1)
{
	if (func_51(bParam0))
	{
		if (unk_0x77F1BEB8863288D5(bParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(bParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*bParam0))
	{
		if (unk_0x1F0B79228E461EC9(*bParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x47E4E977581C5B55(*bParam0) || unk_0x2A74E1D5F2F00EEC(*bParam0))
			{
				unk_0xD3BD40951412FEF6(func_11());
				if (unk_0xD031A9162D01088C(func_11()))
				{
					*iParam2 = unk_0x8C18E0F9080ADD73(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xD9A897A4C6C2974F(*iParam2, false);
					unk_0x394B9CD12435C981(*iParam2, false);
					if (func_4(*bParam0, 1785177548))
					{
						unk_0x43D3807C077261E3(*bParam0, -1000f, true);
					}
					unk_0xEEA929141F699854(*bParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1000f, 0);
					unk_0x2208438012482A1A(*bParam0, false, false);
					if (func_8(*bParam1))
					{
						if (unk_0x1F0B79228E461EC9(*bParam1, func_10(), func_7(), 3))
						{
							unk_0x43D3807C077261E3(*bParam1, -16f, false);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xC77720A12FE14A86(*bParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1000f);
					}
					return 1;
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
	return 0;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(struct<3> Param0, struct<3> Param1)
{
	if (func_51(bLocal_42))
	{
		if (!unk_0x9072C8B49907BFAD(bLocal_42))
		{
			if (unk_0xB7A628320EFF8E47(Param1, Param0) < (35f * 35f))
			{
				func_13(&bLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*bParam0))
	{
		bVar0 = unk_0x932C2D096A2C3FFF(*bParam0);
		if (bVar0)
		{
			unk_0x9D64D7405520E3D3(*bParam0, false);
		}
		func_14(*bParam0, bParam1, bParam2, iParam3);
		if (bVar0)
		{
			unk_0x9D64D7405520E3D3(*bParam0, true);
		}
	}
}

void func_14(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x3523634255FC3318(bParam0, bParam1, bParam2, func_15(iParam3), false);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	struct<6> Var0;
	bool bVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		bVar1 = func_21();
		if (unk_0x0C515FAB3FF9EA92(&Var0, bVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_20471 = 0;
	func_18();
}

void func_18()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_19()
{
	Global_20471 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_22616 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

char* func_21()
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return "BB4_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return "BB3_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return "BB2_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_23()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0x7239B21A38F536BA(bLocal_41))
	{
		unk_0x428CA6DBD1094446(bLocal_41, false);
	}
	if (unk_0x7239B21A38F536BA(bLocal_40))
	{
		unk_0x428CA6DBD1094446(bLocal_40, false);
	}
}

int func_25(bool bParam0, bool bParam1)
{
	if (func_51(*bParam0))
	{
		if ((unk_0x605F5A140F202491(*bParam0) || unk_0xDFD5033FDBA0A9C8(*bParam0)) || unk_0x95EB9964FF5C5C65(*bParam0))
		{
			return 1;
		}
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), *bParam0))
			{
				return 1;
			}
			if (unk_0x7239B21A38F536BA(bLocal_39))
			{
				if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_39))
				{
					return 1;
				}
			}
			if (unk_0x7239B21A38F536BA(bLocal_40))
			{
				if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_40))
				{
					return 1;
				}
			}
			if (unk_0x7239B21A38F536BA(bLocal_41))
			{
				if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_41))
				{
					return 1;
				}
			}
		}
		if (unk_0x8507BCB710FA6DC0(*bParam0, 61))
		{
			return 1;
		}
		if (unk_0x47E4E977581C5B55(*bParam0))
		{
			if (unk_0x751B70C3D034E187(*bParam0, unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0))
			{
				return 1;
			}
		}
		if (unk_0x8507BCB710FA6DC0(*bParam0, 51))
		{
			return 1;
		}
		if (func_33(*bParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*bParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(*bParam0, true), 15f))
		{
			return 1;
		}
		if (unk_0x8507BCB710FA6DC0(*bParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0xD80958FC74E988A6()) && func_8(bParam0))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar2, true);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(bParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x65F0C5AE05943EC7(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
					if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(bParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	Var1 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.f_0 = (Var1.f_0 + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_grenade"), fParam1, true) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_molotov"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_28(bParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(bParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x5270A8FBC098C3F8(Var0, Var1, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(bool bParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_29(bParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(bool bParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(Param1 - unk_0x3FEF770D40960D5A(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x0A794A5A57F8DF91(bParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_31(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_32(bool bParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_33(bool bParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0xD80958FC74E988A6()) && func_8(bParam0))
	{
		if (func_42(bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_34(bParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(bool bParam0, float fParam1)
{
	return func_35(bParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

bool func_35(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_41(bParam0, bParam1);
	if (!func_8(bParam0) || !func_8(bParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(bParam0, bParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = bParam0;
		Local_37[iVar2 /*4*/].f_2 = bParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), Var1, bParam1, &(Local_37[iVar2 /*4*/].f_3), bParam0, bParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, struct<3> Param1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_8(bParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_37(bParam2, bParam5) };
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam4, 7);
		return 0;
	}
	iVar4 = unk_0x3D87450E15D98694(*uParam0, &uVar0, &Var1, &uVar2, &bVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x524AC5ECEA15343E(bVar3))
	{
		func_8(bVar3);
		if (unk_0x04A2A40C73395041(bVar3) == bParam2)
		{
			if (bLocal_38)
			{
				unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(bParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x9CD27B0045628463();
			return 1;
		}
		return 0;
	}
	if (unk_0x6AC7003FA6E5575E(bVar3))
	{
		func_8(bVar3);
		if (unk_0x997ABD671D25CA0B(bParam2, false))
		{
			if (unk_0x4B53F92932ADFAC0(bVar3) == unk_0x9A9112A0FE9A4713(bParam2, false))
			{
				if (bLocal_38)
				{
					unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(bParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (bParam1 == 7)
	{
		bVar0 = unk_0xD53343AA4FB7DD28(false, 7);
		bParam1 = bVar0;
	}
	if (bParam1 == 0)
	{
		return unk_0x3FEF770D40960D5A(bParam0, true);
	}
	else if (bParam1 == 1)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (bParam1 == 2)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (bParam1 == 3)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (bParam1 == 4)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (bParam1 == 5)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (bParam1 == 6)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x3FEF770D40960D5A(bParam0, true);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(unk_0x3FEF770D40960D5A(bParam1, true) - unk_0x3FEF770D40960D5A(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x0A794A5A57F8DF91(bParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(bool bParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (unk_0xB7A628320EFF8E47(Param1, Param0) < (fParam3 * fParam3))
			{
				if (unk_0x9CD27B0045628463() - iLocal_43) > (iParam2 + unk_0xD53343AA4FB7DD28(false, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, bLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = unk_0x9CD27B0045628463();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0x9CD27B0045628463();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x933D6A9EEC1BACD0(&Global_20471, false);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

char* func_46()
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return "BB4AUD";
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return "BB3AUD";
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return "BB2AUD";
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(bParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(bParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(bParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(bParam2, true);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x1B5C85C612E5256E(Var0, Var1, false, true, true, true);
		unk_0xEE01041D559983EA(Var0, Var1);
		unk_0xC12321827687FE4D(Var0, Var1, false, true);
		unk_0x46A1E1A299EC4BBA(Var0, Var1, 0);
		unk_0xBF1A602B5BA52FEE(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, true);
		unk_0xA56F01F3765B93A0(2728.333f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
	}
	else
	{
		unk_0x31D16B74C6E29D66(*uParam1, false);
		unk_0x2E05208086BA0651();
		unk_0xC12321827687FE4D(Var0, Var1, true, true);
		unk_0x1EE7063B80FFC77C(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, true);
	}
}

int func_49()
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(bLocal_42))
	{
		if (!unk_0x0A7B270912999B3C(bLocal_42))
		{
			unk_0xAD738C3085FE7E11(bLocal_42, true, false);
		}
		unk_0x9F8AA94D6D97DBF4(bLocal_42, true);
		unk_0xA9C8960E8684C1B5(bLocal_42, 0);
		unk_0x63F58F7C80513AAD(bLocal_42, false);
		unk_0xC80A74AC829DDD92(bLocal_42, joaat("player"));
		unk_0x8E06A6FE76C9EFF4(bLocal_42, false);
		unk_0xE361C5C71C431A4F(bLocal_42, false);
		unk_0x1913FE4CBF41C463(bLocal_42, 118, false);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0xBFA48E2FF417213F(Var0, 10f, joaat("prop_table_03b"), false))
		{
			bLocal_40 = unk_0xE143FA2249364369(Var0, 10f, joaat("prop_table_03b"), true, false, true);
			if (func_8(bLocal_40))
			{
				unk_0x06843DA7060A026B(bLocal_40, 2727.4f, 4145.56f, 43.68f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(bLocal_40, -92.17f);
				unk_0x428CA6DBD1094446(bLocal_40, true);
			}
		}
		if (unk_0xBFA48E2FF417213F(Var0, 10f, joaat("prop_laptop_01a"), false))
		{
			bLocal_41 = unk_0xE143FA2249364369(Var0, 10f, joaat("prop_laptop_01a"), false, false, true);
			if (func_8(bLocal_41))
			{
				if (!unk_0x0A7B270912999B3C(bLocal_41))
				{
					unk_0xAD738C3085FE7E11(bLocal_41, true, false);
				}
				unk_0x06843DA7060A026B(bLocal_41, 2727.686f, 4145.715f, 44.08f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(bLocal_41, 71f);
				unk_0x428CA6DBD1094446(bLocal_41, true);
			}
		}
		if (unk_0xBFA48E2FF417213F(Var0, 10f, joaat("prop_table_03_chr"), false))
		{
			bLocal_39 = unk_0xE143FA2249364369(Var0, 10f, joaat("prop_table_03_chr"), false, false, true);
			if (func_8(bLocal_39))
			{
				if (!unk_0x0A7B270912999B3C(bLocal_39))
				{
					unk_0xAD738C3085FE7E11(bLocal_39, true, false);
				}
				unk_0x06843DA7060A026B(bLocal_39, 2728.35f, 4145.59f, 43.3f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(bLocal_39, -91.28f);
			}
		}
	}
}

int func_51(bool bParam0)
{
	if (func_8(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x9F47B058362C84B5(uVar2[iVar1]) == func_53(62))
				{
					bLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_48);
	if (func_8(bLocal_41))
	{
		unk_0x428CA6DBD1094446(bLocal_41, false);
	}
	func_58(&bLocal_41, 0);
	if (func_8(bLocal_40))
	{
		unk_0x428CA6DBD1094446(bLocal_40, false);
	}
	func_58(&bLocal_40, 0);
	if (func_8(bLocal_39))
	{
		unk_0x428CA6DBD1094446(bLocal_39, false);
		if (unk_0x1F0B79228E461EC9(bLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x28004F88151E03E0(bLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x43D3807C077261E3(bLocal_39, -1000f, true);
		}
		else if (unk_0x1F0B79228E461EC9(bLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x28004F88151E03E0(bLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x43D3807C077261E3(bLocal_39, -1000f, true);
		}
	}
	func_58(&bLocal_39, 0);
	if (func_51(bLocal_42))
	{
		unk_0x971D38760FBC02EF(bLocal_42, true);
		unk_0x1913FE4CBF41C463(bLocal_42, 118, true);
	}
	func_57(&bLocal_42, 1, 0, 1);
	unk_0xF66A602F829E2A06(func_11());
	unk_0x1090044AD1DA76FA();
}

void func_57(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*bParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*bParam0);
			}
			unk_0x971D38760FBC02EF(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*bParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(bParam0);
	}
}

void func_58(bool bParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0xB1632E9A5F988D11(*bParam0))
		{
			unk_0x961AC54BF0613F5D(*bParam0, true, true);
		}
		if (!bParam1)
		{
			unk_0x3AE22DEB5BA5A3E6(bParam0);
		}
		else
		{
			unk_0xADBE4809F19F927A(*bParam0);
		}
	}
}

