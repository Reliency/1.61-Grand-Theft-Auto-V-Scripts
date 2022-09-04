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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int* iLocal_28 = NULL;
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_33, "CELL_213", 16);
	StringCopy(&Local_36, "CELL_39", 16);
	StringCopy(&Local_39, "CELL_MP_300", 16);
	StringCopy(&Local_42, "CELL_MP_301", 16);
	StringCopy(&Local_45, "CELL_MP_302", 16);
	unk_0x9243BAC96D64C050();
	func_45(&iLocal_28);
	func_36();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xCA97246103B63917())
		{
			func_34(1);
			func_33();
		}
		if (!Global_20266.f_1 == 9 && Global_20266.f_1 > 3)
		{
			func_3();
			if (Global_20266.f_1 != 8)
			{
				if (func_2())
				{
					func_33();
				}
			}
		}
		if (func_1())
		{
			func_33();
		}
	}
}

int func_1()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_29(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_2725342)
			{
				unk_0x57B192B4D4AD23D5(false);
				func_10(-923087411, func_11(1, 1));
				Global_2725342 = 0;
			}
			else
			{
				unk_0x57B192B4D4AD23D5(true);
				func_10(-382461133, func_11(1, 1));
				Global_2725342 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 30);
	}
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_20203);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
}

int func_7(int iParam0)
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

bool func_8()
{
	return BitTest(Global_1958711, 5);
}

bool func_9()
{
	return BitTest(Global_1958711, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_0 = -1388926377;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0xD53343AA4FB7DD28(false, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7())
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0x41BD2A6B006AF756(bVar1);
		if (func_15(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
				else if (!func_12(bVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_12(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_13(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_14()
{
	return Global_1574918;
}

int func_15(bool bParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	if (!func_23(unk_0x4F8644AF03D0E0D6(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (!func_18())
	{
		return 0;
	}
	return 1;
}

int func_18()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_22())
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	return func_19(120, -1);
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_20(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

bool func_21()
{
	return Global_1575046;
}

bool func_22()
{
	return Global_1575048;
}

bool func_23(bool bParam0, bool bParam1)
{
	if (func_28() != 0)
	{
		return func_27(bParam0) != 0;
	}
	return func_24(bParam0, bParam1, 0);
}

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_25(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[bParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_25(int iParam0)
{
	return func_26(iParam0);
}

var func_26(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_27(bool bParam0)
{
	if (func_15(bParam0, 0, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_1;
	}
	return 0;
}

int func_28()
{
	return Global_31959;
}

int func_29(int* iParam0)
{
	if (!BitTest(*iParam0, 0))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!unk_0x5A859503B0C08678())
	{
		return 0;
	}
	if (!unk_0x580417101DDB492F(2, Global_20235))
	{
		return 0;
	}
	func_30();
	Global_20244 = 1;
	return 1;
}

void func_30()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_20255, true);
		func_31();
	}
}

void func_31()
{
	if (func_32())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

int func_32()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_33()
{
	unk_0x1090044AD1DA76FA();
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_35();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_35()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_36()
{
	if (!Global_20266.f_1 == 7)
	{
		Global_20266.f_1 = 7;
	}
	func_44(Global_20247, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2725342)
		{
			func_43(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
		else
		{
			func_43(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(12), -1f, -1f, &Local_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_43(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(12), -1f, -1f, &Local_45, 0, 0, 0, 0);
	}
	func_44(Global_20247, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_40(&Local_36);
	if (func_16())
	{
		func_37(13, &Local_30, 1, "", 4, &Local_33, &iLocal_28);
	}
	else
	{
		func_37(1, "", 1, "", 4, &Local_33, &iLocal_28);
	}
}

void func_37(bool bParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, int* iParam6)
{
	func_38(2, bParam0, sParam1, 0, iParam6, -1);
	func_38(1, bParam2, sParam3, 1, iParam6, 17);
	func_38(3, bParam4, sParam5, 2, iParam6, -1);
}

void func_38(bool bParam0, bool bParam1, char* sParam2, bool bParam3, int* iParam4, bool bParam5)
{
	if (bParam1 == 1)
	{
		func_43(Global_20247, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(bParam0), 0f, unk_0xBBDA792448DB5A89(bParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xE80492A9AC099A93(iParam4, bParam3);
		func_39(bParam5, 0);
		return;
	}
	if (Global_20254)
	{
		func_43(Global_20247, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(bParam0), 1f, unk_0xBBDA792448DB5A89(bParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x933D6A9EEC1BACD0(iParam4, bParam3);
		func_39(bParam5, 1);
		return;
	}
	func_43(Global_20247, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(bParam0), 1f, unk_0xBBDA792448DB5A89(bParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x933D6A9EEC1BACD0(iParam4, bParam3);
	func_39(bParam5, 1);
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, bParam0);
		return;
	}
	unk_0xE80492A9AC099A93(&Global_8136, bParam0);
}

void func_40(char* sParam0)
{
	func_41(Global_20247, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_41(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_42(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_42(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_42(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_42(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_42(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_42(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_43(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_42(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_42(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_42(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_42(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_42(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_44(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

void func_45(var uParam0)
{
	*uParam0 = 0;
}

