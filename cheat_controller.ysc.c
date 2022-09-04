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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	bLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0xC968670BFACE42D9(34))
	{
		func_113();
	}
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((unk_0x10FAB35428CCC9D7() && func_1(unk_0x4F8644AF03D0E0D6(), 1, 1)) && !Global_1836373) && Global_31959 == 0)
		{
			func_113();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(bool bParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(bLocal_67);
}

void func_3(bool bParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xBC72B5D7A1CBD54D())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(bParam0);
			}
			break;
		
		case 4:
			func_4(bParam0);
			break;
		
		default:
			break;
	}
}

void func_4(bool bParam0)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x98A4EB5D89A0C952(bParam0))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x7239B21A38F536BA(iLocal_68))
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_68, false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_68, false))
					{
						Var0 = { unk_0x3FEF770D40960D5A(iLocal_68, true) };
						fVar1 = unk_0xE83D4F9BA2A38914(iLocal_68);
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), true, false, false, true);
						bVar2 = true;
					}
				}
				unk_0xEA386986E786A54F(&iLocal_68);
			}
			if (!bVar2)
			{
				if (bParam0 == joaat("duster") || bParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), -1.5f, 3.5f, 1f) };
				}
				else if (bParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()) + 90f);
			}
			if (func_18(bParam0, Var0, fVar1))
			{
				iLocal_68 = unk_0xAF35D0D2583051B0(bParam0, Var0, fVar1, false, true, false);
				unk_0x49733E92263139D1(iLocal_68, 5f);
				unk_0xE532F5D78798DAAB(bParam0);
				unk_0x629BFA74418D6239(&iLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0xE532F5D78798DAAB(bParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(bool bParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0x933D6A9EEC1BACD0(&Global_32209, bParam0);
		Global_32212 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

int func_8()
{
	func_9();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_12(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_11(unk_0xD80958FC74E988A6());
			if (func_10(iVar0) && (!func_15(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_10(Global_113386.f_2363.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_84 != 0)
	{
		if (func_15(14) && unk_0x5A859503B0C08678())
		{
			if (unk_0x0C515FAB3FF9EA92(sParam0, "CHEAT_SUPER_JUMP") && unk_0xBC72B5D7A1CBD54D())
			{
				return 0;
			}
			if ((unk_0x0C515FAB3FF9EA92(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false)) && unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_16(char* sParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0x202709F4C58A0424("CHEAT_ACTIVATED");
		unk_0xC63CD5D2920ACBE7(sParam0);
		func_17(unk_0x2ED7843F8F801023(false, true));
		unk_0x6058665D72302D3F(sParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_18(bool bParam0, struct<3> Param1, float fParam2)
{
	struct<3> Var0[9];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0x03E8D3D5F549087A(bParam0, &Var1, &Var2);
	Var3.f_0 = (unk_0x73D57CFFDD12C355((Var2.f_0 - Var1.f_0)) / 2f);
	Var3.f_1 = (unk_0x73D57CFFDD12C355((Var2.f_1 - Var1.f_1)) / 2f);
	Var3.f_2 = (unk_0x73D57CFFDD12C355((Var2.f_2 - Var1.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, -Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[2 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[3 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[4 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, -Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[5 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, -Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[6 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[7 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, Var3.f_0, Var3.f_1, Var3.f_2) };
	Var0[8 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam2, -Var3.f_0, Var3.f_1, Var3.f_2) };
	if (!unk_0xEEA5AC2EDA7C33E8(Param1))
	{
		return 0;
	}
	iVar13 = unk_0x377906D8A31E5586(func_19(unk_0x4F8644AF03D0E0D6()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x377906D8A31E5586(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x377906D8A31E5586(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x377906D8A31E5586(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x377906D8A31E5586(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x377906D8A31E5586(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x377906D8A31E5586(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_20(bool bParam0)
{
	if (unk_0x35B9E0803292B641(bParam0))
	{
		unk_0x963D27A58DF860AC(bParam0);
		if (unk_0x98A4EB5D89A0C952(bParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(char* sParam0)
{
	if (!func_15(14))
	{
		unk_0x202709F4C58A0424("CHEAT_DENIED");
		unk_0xC63CD5D2920ACBE7(sParam0);
		func_17(unk_0x2ED7843F8F801023(false, true));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			unk_0x1D408577D440E81E(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0x202709F4C58A0424("CHEAT_DEACTIVATED");
		unk_0xC63CD5D2920ACBE7(sParam0);
		func_17(unk_0x2ED7843F8F801023(false, true));
	}
}

void func_25()
{
	if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF3A21BCD95725A4A(2, 25))
		{
			if (func_26(unk_0xD80958FC74E988A6()) != joaat("weapon_unarmed") && func_26(unk_0xD80958FC74E988A6()) != joaat("object"))
			{
				unk_0x1D408577D440E81E(fLocal_78);
			}
			else
			{
				unk_0x1D408577D440E81E(1f);
			}
		}
		else
		{
			unk_0x1D408577D440E81E(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

int func_27(bool bParam0)
{
	if (BitTest(Global_32207, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_32208, bParam0);
		func_5(bParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_32208, bParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			unk_0xFE99B66D079CF6BC(2, 37, true);
			unk_0xFE99B66D079CF6BC(2, 19, true);
			if ((((((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28()) || func_34()) || func_33(1)) || unk_0x91AEF906BCA88877(2, 37)) || unk_0x91AEF906BCA88877(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0xFE99B66D079CF6BC(2, 37, true);
			unk_0xFE99B66D079CF6BC(2, 19, true);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			unk_0x1D408577D440E81E(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_34()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			unk_0x1D408577D440E81E(0.6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			unk_0x1D408577D440E81E(0.4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			unk_0x1D408577D440E81E(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"), true, false, true);
			Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			fVar1 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
			unk_0xC906A7DAB05C8D2B(Var0, &fVar2, false, false);
			fVar2 = (fVar2 + 500f);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0.f_0, Var0.f_1, fVar2, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fVar1);
			iLocal_72 = unk_0x9CD27B0045628463();
			unk_0x891B5B39AC6302AF(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				iLocal_72 = unk_0x9CD27B0045628463();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				unk_0xFE99B66D079CF6BC(0, 144, true);
				unk_0xFE99B66D079CF6BC(0, 149, true);
				if (func_8() == 0)
				{
					unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, 0, 0, 0);
				}
				unk_0xD4E8E24955024033(250);
				iLocal_72 = unk_0x9CD27B0045628463();
				func_16("CHEAT_SKYFALL");
				unk_0xC5F0A8EBD3F361CE(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0xFE99B66D079CF6BC(0, 144, true);
			unk_0x6806C51AD12B83B8(2);
			if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
			{
				unk_0xC5F68BE9613E2D18(unk_0xD80958FC74E988A6(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
				if (unk_0x8BAD02F0368D9E14(unk_0xD80958FC74E988A6()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
	}
	unk_0xC5F0A8EBD3F361CE(0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9CD27B0045628463();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x9CD27B0045628463();
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			break;
		
		case 5:
			if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_19(unk_0x4F8644AF03D0E0D6()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x9CD27B0045628463() - iLocal_74);
			if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			unk_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
				unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_41(7, bVar0);
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

void func_41(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x11879CDD803D30F4(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xFF1BED81BFDC0FE0(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(unk_0xD80958FC74E988A6());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(unk_0xD80958FC74E988A6());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	unk_0x487A82C650EB7799(0f);
	unk_0x0225778816FDC28C(0f);
	unk_0xA87E00932DB4D85D(0f);
	unk_0x0EF93E9F3D08C178(true);
	unk_0xC724C701C30B2FE7(0f);
	unk_0x2238E588E588A6D7(true);
	unk_0x12561FCBB62D5B9C(0);
	if (unk_0xB65B60556E2A9225("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDFE8422B3B94E688("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xCA042B6957743895(&Global_44216))
	{
		if (unk_0xB65B60556E2A9225(&Global_44216))
		{
			unk_0xDFE8422B3B94E688(&Global_44216);
		}
	}
	if (unk_0xA7A932170592B50E(Global_44204))
	{
		if (unk_0x6B24BFE83A2BE47B(Global_44204))
		{
			unk_0xD93DB43B82BC0D00(Global_44204, 0f);
			unk_0xBDECF64367884AC3(Global_44204, true);
		}
	}
	if (unk_0xC912AF078AF19212())
	{
		unk_0x1C9D7949FA533490(false);
	}
	if (bParam0)
	{
		if (unk_0xFDF3D97C674AFB66() != -1 || unk_0x459FD2C8D0AB78BC() != -1)
		{
			unk_0x0F07E7745A236711();
		}
		else if (unk_0xD9D2CFFF49FAB35F())
		{
			unk_0x0F07E7745A236711();
		}
	}
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
	StringCopy(&Global_44216, "", 64);
	StringCopy(&Global_44232, "", 16);
	func_47();
}

void func_47()
{
	Global_44203 = 0;
	Global_44204 = 0;
	Global_44205 = 0;
	Global_44206 = 30000;
	Global_44207 = 0f;
	Global_44209 = 0f;
	Global_44208 = 0f;
	Global_44210 = 1f;
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_44203)
	{
		return;
	}
	iVar0 = unk_0x9CD27B0045628463();
	Global_44205 = (iVar0 + iParam0);
	Global_44206 = iParam0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_44203)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x016C090630DF1F89())
	{
		unk_0xFD55E49555E017CF("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xBBC08F6B4CB8FF0A())
	{
		unk_0xDCE214D9ED58F3CF("DRUNK_SHAKE", (fParam3 * Global_44202));
	}
	if (unk_0xA7A932170592B50E(iParam4))
	{
		unk_0x6A25241C340D3822(iParam4, "DRUNK_SHAKE", fParam3);
		Global_44204 = iParam4;
	}
	else
	{
		Global_44204 = 0;
	}
	Global_44203 = 1;
	iVar0 = unk_0x9CD27B0045628463();
	Global_44205 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_44205 = -1;
		}
	}
	Global_44206 = uParam1;
	Global_44207 = fParam2;
	Global_44209 = fParam3;
	Global_44208 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = iParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xD80958FC74E988A6())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_64()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xA66C71C98D5F2CFB(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			unk_0x740E14FAD5842351(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(bool bParam0)
{
	if (BitTest(Global_32208, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x740E14FAD5842351(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"), true, true, true);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x462E0DB9B137DC5F() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), (iVar0 - 1), false);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x462E0DB9B137DC5F() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
			if (iVar0 < unk_0x462E0DB9B137DC5F())
			{
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), iVar0 + 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !unk_0xC6017F6A6CDFA694(func_75())) || !unk_0xB1D200FE26AEF3CB(unk_0x4F8644AF03D0E0D6(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3DACA8DDC6FD4980(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

bool func_75()
{
	return unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6()), 0);
			unk_0x5BA652A0CD14DF2F(unk_0xD80958FC74E988A6(), (unk_0x92659B4CE1863CB3(unk_0x4F8644AF03D0E0D6()) - unk_0x9483AF821605B1D8(unk_0xD80958FC74E988A6())));
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (!unk_0x5F9532F3B5CC2551(iVar0, false))
					{
						unk_0x115722B1B9C14C1C(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0xED712CA327900C8A("EXTRASUNNY");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xED712CA327900C8A("CLEAR");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xED712CA327900C8A("CLOUDS");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xED712CA327900C8A("SMOG");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xED712CA327900C8A("OVERCAST");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xED712CA327900C8A("RAIN");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xED712CA327900C8A("THUNDER");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xED712CA327900C8A("CLEARING");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xED712CA327900C8A("XMAS");
				unk_0xCCC39339BEF76CF5();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_knife"), -1, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_smg"), 300, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_assaultrifle"), 300, true);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_sniperrifle"), 30, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_grenade"), 5, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1.49f);
				unk_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0xC5286FFC176F28A2(unk_0xD80958FC74E988A6()) || (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()) && !unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())))
				{
					unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1.49f);
				}
				else
				{
					unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
				}
				unk_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x5F9532F3B5CC2551(iVar0, false))
				{
					if (unk_0xBB40DD2270B65366(iVar0, -1, false) == unk_0xD80958FC74E988A6())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x5F9532F3B5CC2551(iLocal_69, false))
							{
								if (func_82(1))
								{
									unk_0x222FF6A823D122E2(iLocal_69, true);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x5F9532F3B5CC2551(iLocal_69, false))
							{
								unk_0x222FF6A823D122E2(iLocal_69, false);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x5F9532F3B5CC2551(iLocal_69, false))
			{
				unk_0x222FF6A823D122E2(iLocal_69, false);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				bVar1 = unk_0x9F47B058362C84B5(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x7F6DB52EEFC96DF8(bVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xB50C0B0CEDC6CE84(bVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xDCE4334788AF94EA(bVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x45A9187928F4B9E3(bVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "door_dside_r") != -1 || unk_0xFB71170B7E76ACBA(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "door_dside_r") == -1 || unk_0xFB71170B7E76ACBA(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xB50C0B0CEDC6CE84(bVar1))
					{
						if (unk_0xFB71170B7E76ACBA(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xFB71170B7E76ACBA(iVar0, "seat_dside_r") != -1 || unk_0xFB71170B7E76ACBA(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "seat_dside_r") == -1 || unk_0xFB71170B7E76ACBA(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != bVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x7F6DB52EEFC96DF8(bVar1) && !unk_0xB50C0B0CEDC6CE84(bVar1))
					{
						return 0;
					}
					if (unk_0x9F243D3919F442FE(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0xA6E9C38DB51D7748(iVar0, &uVar3);
					if (!unk_0xCA042B6957743895(sVar4))
					{
						if (unk_0xD24D37CC275948CC(sVar4) == unk_0xD24D37CC275948CC("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_27(23)) || func_27(22)) || func_27(0)) || unk_0xBC72B5D7A1CBD54D())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x57FFF03E423A4C0B(unk_0x4F8644AF03D0E0D6());
			unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 217, true);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_84 != 0) || func_15(14))
	{
		unk_0xFE99B66D079CF6BC(2, 243, true);
	}
	func_110();
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (unk_0x90A09F3A45FED688(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		return;
	}
	if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
	{
		return;
	}
	if (func_34() || unk_0xD9D2CFFF49FAB35F())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_107(988027572, 12) || unk_0x557E43C447E700A8(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || unk_0x557E43C447E700A8(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || unk_0x557E43C447E700A8(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || unk_0x557E43C447E700A8(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || unk_0x557E43C447E700A8(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || unk_0x557E43C447E700A8(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || unk_0x557E43C447E700A8(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || unk_0x557E43C447E700A8(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || unk_0x557E43C447E700A8(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || unk_0x557E43C447E700A8(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || unk_0x557E43C447E700A8(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || unk_0x557E43C447E700A8(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || unk_0x557E43C447E700A8(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || unk_0x557E43C447E700A8(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || unk_0x557E43C447E700A8(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || unk_0x557E43C447E700A8(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || unk_0x557E43C447E700A8(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || unk_0x557E43C447E700A8(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || unk_0x557E43C447E700A8(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || unk_0x557E43C447E700A8(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || unk_0x557E43C447E700A8(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || unk_0x557E43C447E700A8(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || unk_0x557E43C447E700A8(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || unk_0x557E43C447E700A8(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || unk_0x557E43C447E700A8(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || unk_0x557E43C447E700A8(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || unk_0x557E43C447E700A8(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || unk_0x557E43C447E700A8(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || unk_0x557E43C447E700A8(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || unk_0x557E43C447E700A8(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || unk_0x557E43C447E700A8(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || unk_0x557E43C447E700A8(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || unk_0x557E43C447E700A8(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || unk_0x557E43C447E700A8(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xBC72B5D7A1CBD54D())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) || !unk_0x39B5D1B10383F0C8())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), false)) || unk_0x2C83A9DA6BFFC4F9(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_19(unk_0x4F8644AF03D0E0D6()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || unk_0xBC72B5D7A1CBD54D())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()
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

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || unk_0x2C83A9DA6BFFC4F9(joaat("barry1")) > 0) || unk_0x2C83A9DA6BFFC4F9(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		bLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_106(bool bParam0, int iParam1)
{
	if (BitTest(Global_32210, bParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32211)
			{
				unk_0xE80492A9AC099A93(&Global_32210, bParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xE80492A9AC099A93(&Global_32210, bParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return unk_0x071E2A839DE82D90(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0xBE4390CB40B3E627(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!unk_0x5A859503B0C08678() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0x9CD27B0045628463();
	}
	if (iLocal_84 != 0)
	{
		if (!func_15(14))
		{
			if ((unk_0x9CD27B0045628463() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_111()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_113()
{
	unk_0x2587A48BC88DFADF(false);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x1D408577D440E81E(1f);
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
		}
		unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
		unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1f);
	}
	unk_0x740E14FAD5842351(0);
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	unk_0x1090044AD1DA76FA();
}

