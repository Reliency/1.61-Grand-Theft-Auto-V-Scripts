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
	char* sLocal_20 = NULL;
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
	struct<114> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	sLocal_20 = "NULL";
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
	func_93();
	while (true)
	{
		if (func_85())
		{
			func_82();
			return;
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_46)
	{
		bLocal_46 = func_81(&Local_45);
		return;
	}
	func_2(&Local_45);
}

int func_2(bool bParam0)
{
	if (!func_80(bParam0))
	{
		return 1;
	}
	if (func_15(bParam0))
	{
		return 1;
	}
	func_3(bParam0);
	return 0;
}

int func_3(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_12(bParam0);
	if (bVar0)
	{
		if (!func_6(bParam0))
		{
			return 0;
		}
	}
	func_5(bParam0);
	if (!bVar0)
	{
		func_4(bParam0);
	}
	return 1;
}

void func_4(bool bParam0)
{
	if (bParam0->f_111 == 0)
	{
		return;
	}
	Call_Loc(bParam0->f_111);
}

void func_5(bool bParam0)
{
	if (bParam0->f_112 == 0)
	{
		return;
	}
	Call_Loc(bParam0->f_112);
}

int func_6(bool bParam0)
{
	if (!func_81(bParam0))
	{
		return 0;
	}
	if (!func_11(bParam0))
	{
		return 0;
	}
	func_9(bParam0, 0);
	func_7(bParam0, 1);
	return 1;
}

void func_7(bool bParam0, bool bParam1)
{
	func_8(bParam0, bParam1);
}

void func_8(bool bParam0, bool bParam1)
{
	unk_0xE80492A9AC099A93(bParam0, bParam1);
}

void func_9(bool bParam0, bool bParam1)
{
	func_10(bParam0, bParam1);
}

void func_10(bool bParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(bParam0, bParam1);
}

int func_11(bool bParam0)
{
	if (bParam0->f_107 == 0)
	{
		return 1;
	}
	Stack.Push(bParam0);
	Call_Loc(bParam0->f_107);
	return StackVal;
}

bool func_12(bool bParam0)
{
	return (func_13(bParam0, 1) || !func_13(bParam0, 0));
}

bool func_13(bool bParam0, int iParam1)
{
	return func_14(bParam0, iParam1);
}

bool func_14(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_15(bool bParam0)
{
	func_77(bParam0);
	func_72();
	if (func_53(bParam0))
	{
		return 0;
	}
	if (!func_13(bParam0, 1))
	{
		func_47(bParam0);
	}
	func_43(bParam0);
	if (func_13(bParam0, 2))
	{
		func_16(bParam0, 0);
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_7(bParam0, 2);
	}
	func_39(bParam0);
	func_7(bParam0, 3);
	func_35(bParam0);
	func_18(bParam0, 0);
	func_17(bParam0);
}

void func_17(bool bParam0)
{
	if (bParam0->f_113 == 0)
	{
		return;
	}
	Call_Loc(bParam0->f_113);
}

int func_18(bool bParam0, int iParam1)
{
	struct<33> Var0;
	
	if (!func_30(bParam0, iParam1))
	{
		return 0;
	}
	bParam0->f_1 = iParam1;
	Var0 = { func_29(bParam0) };
	unk_0x213AEB2B90CBA7AC(&(bParam0->f_72), &Var0, 33);
	if (!func_28(&(bParam0->f_6), iParam1, &(bParam0->f_72)))
	{
		return 0;
	}
	if (!func_27(&(bParam0->f_72)) && func_26(&(bParam0->f_72)))
	{
		func_25(bParam0, bParam0->f_1);
		func_24(&(bParam0->f_72));
	}
	else
	{
		func_25(bParam0, -1);
	}
	func_19(bParam0, &(bParam0->f_72));
	return 1;
}

void func_19(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (func_14(bParam0, 3))
	{
		func_22(bParam0, func_23(uParam1));
		return;
	}
	iVar0 = func_21(uParam1);
	if (iVar0 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(bParam0->f_1);
		Call_Loc(iVar0);
		return;
	}
	bVar1 = func_20(uParam1);
	if (unk_0xCA042B6957743895(bVar1))
	{
		return;
	}
	func_22(bParam0, bVar1);
}

var func_20(var uParam0)
{
	return uParam0->f_4;
}

var func_21(var uParam0)
{
	return uParam0->f_11;
}

void func_22(var uParam0, bool bParam1)
{
	if (uParam0->f_108 == 0)
	{
		return;
	}
	Stack.Push(bParam1);
	Call_Loc(uParam0->f_108);
}

var func_23(var uParam0)
{
	return uParam0->f_5;
}

int func_24(var uParam0)
{
	if (uParam0->f_17 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_17);
	return StackVal;
}

void func_25(var uParam0, int iParam1)
{
	if (uParam0->f_109 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_109);
}

int func_26(var uParam0)
{
	if (uParam0->f_15 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_15);
	return StackVal;
}

int func_27(var uParam0)
{
	if (uParam0->f_14 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_14);
	return StackVal;
}

int func_28(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_9 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_9);
	switch (StackVal)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 0;
		
		default:
	}
	return 0;
}

struct<33> func_29(var uParam0)
{
	struct<33> Var0;
	
	if (uParam0->f_105 != 0)
	{
		Call_Loc(uParam0->f_105);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	}
	Var0.f_8 = -1;
	return Var0;
}

int func_30(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31(&(bParam0->f_6));
	if (unk_0xA571D46727E2B718(2))
	{
		iVar0 = -1;
	}
	if (iParam1 < iVar0 || iParam1 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	return func_32((func_33(uParam0) - 1), 0);
}

int func_32(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_33(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	
	iVar0 = func_34(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam0->f_8 == -1)
	{
		uParam0->f_8 = 0;
		Var1.f_8 = -1;
		iVar2 = -1;
		while (iVar2 != 2)
		{
			Stack.Push(uParam0->f_8);
			Stack.Push(&Var1);
			Call_Loc(iVar0);
			iVar2 = StackVal;
			if (iVar2 != 2)
			{
				uParam0->f_8++;
			}
		}
	}
	return uParam0->f_8;
}

int func_34(var* uParam0)
{
	return uParam0->f_9;
}

void func_35(bool bParam0)
{
	func_36(bParam0, &(bParam0->f_39), 1, 1);
}

void func_36(bool bParam0, var* uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	unk_0x213AEB2B90CBA7AC(&(bParam0->f_6), uParam1, 33);
	if (bParam3)
	{
		func_38(&(bParam0->f_6));
	}
	if (bParam2)
	{
		iVar0 = func_37(&(bParam0->f_6));
		func_18(bParam0, iVar0);
		func_77(bParam0);
	}
	func_9(bParam0, 1);
}

var func_37(var uParam0)
{
	return uParam0->f_6;
}

void func_38(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_21);
}

void func_39(bool bParam0)
{
	if (func_13(bParam0, 5) && func_42(&(bParam0->f_72)))
	{
		func_40(&(bParam0->f_72), 3, "");
	}
	func_7(bParam0, 5);
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
	bParam0->f_5 = 0;
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_41(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Stack.Push(bParam2);
	Call_Loc(iVar0);
}

int func_41(var uParam0)
{
	return uParam0->f_32;
}

bool func_42(var uParam0)
{
	return func_41(uParam0) != 0;
}

void func_43(bool bParam0)
{
	func_45(bParam0);
	if (func_44(&(bParam0->f_72)))
	{
		func_19(bParam0, &(bParam0->f_72));
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_12;
}

void func_45(bool bParam0)
{
	if (func_46(&(bParam0->f_72)))
	{
		func_9(bParam0, 1);
	}
}

int func_46(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_22);
	return StackVal;
}

void func_47(bool bParam0)
{
	if (!func_52(&(bParam0->f_72)))
	{
		if (func_50(&(bParam0->f_6), bParam0))
		{
			func_9(bParam0, 1);
		}
	}
	if (func_48(&(bParam0->f_72), bParam0))
	{
		func_9(bParam0, 1);
	}
}

int func_48(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(bParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_49(var uParam0)
{
	return uParam0->f_28;
}

int func_50(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_51(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_51(var uParam0)
{
	return uParam0->f_31;
}

bool func_52(var uParam0)
{
	return uParam0->f_29;
}

int func_53(bool bParam0)
{
	if (func_13(bParam0, 3))
	{
		func_63(bParam0);
		return 1;
	}
	if (func_13(bParam0, 5))
	{
		func_54(bParam0);
		return 1;
	}
	return 0;
}

void func_54(bool bParam0)
{
	if (!func_42(&(bParam0->f_72)))
	{
		func_7(bParam0, 5);
		return;
	}
	if (!func_55(&(bParam0->f_3), &(bParam0->f_4), &(bParam0->f_5), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0))
	{
		return;
	}
	func_40(&(bParam0->f_72), bParam0->f_3, unk_0x8362B09B91893647());
	func_39(bParam0);
	func_9(bParam0, 1);
}

int func_55(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, bool bParam33, bool bParam34)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x797AC7CB535BA28F() || unk_0xB16FCE9DDC7BA182())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_62())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*iParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_62())
						{
							bVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						bVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						bVar4 = "FMMC_KEY_TIP5";
						if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						bVar4 = "FMMC_KEY_TIP6";
						if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						bVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						bVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						bVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						bVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_62())
				{
					bVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					bVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xF6201B4DAF662A9D() || func_61())
				{
					bVar5 = bVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						bVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						bVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						bVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						bVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						bVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						bVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x48AF36444B965238())
				{
					iVar7 = 6;
				}
				else if (unk_0x2BDD44CC428A7EAE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						bVar4 = "LINE_NUMBER";
					}
					else
					{
						bVar4 = "WEB_SEARCH";
					}
				}
				if (unk_0xCA042B6957743895(bParam5))
				{
					unk_0x00DC833F2568DBF6(iVar7, bVar4, bVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0x00DC833F2568DBF6(iVar7, bVar4, bVar5, bParam5, bParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x48AF36444B965238())
				{
					iVar8 = 6;
				}
				else if (unk_0x2BDD44CC428A7EAE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xF6201B4DAF662A9D() || func_61())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_T0_M19";
					}
					if (unk_0x2BDD44CC428A7EAE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_60())
					{
						iVar9 = 64;
					}
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(&(Global_4718592.f_116531)))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, &(Global_4718592.f_116531), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					bVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(&(Global_4718592.f_169373)))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, &(Global_4718592.f_169373), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						bVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(&(Global_4718592.f_169373)))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, &(Global_4718592.f_169373), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "DMC_HTM_EH";
					}
					else
					{
						bVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x3ED1438C1F5C6612(2);
					Var10 = { Global_4718592.f_169405[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_169486[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (unk_0xCA042B6957743895(&Var10))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						bVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					unk_0x3ED1438C1F5C6612(2);
					unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_CDM_T";
					}
					else
					{
						bVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					unk_0x3ED1438C1F5C6612(2);
					unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xCA042B6957743895(bParam33))
					{
						bVar4 = bParam33;
					}
					iVar9 = 63;
					unk_0x3ED1438C1F5C6612(2);
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0x2BDD44CC428A7EAE() == 0)
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_TIPT";
						}
						else if (*iParam1 == -3)
						{
							bVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_ALTT";
						}
						else if (*iParam1 == -3)
						{
							bVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							bVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0xF6201B4DAF662A9D() || func_61())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_T0_M36";
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0xF22B6C47C6EAB066(&(Global_4718592.f_116682[iVar11 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_116682[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					unk_0xCA78CFA0366592FE(iVar8, bVar4, bVar5, &(Global_4718592.f_116682[0 /*16*/]), &(Global_4718592.f_116682[1 /*16*/]), &(Global_4718592.f_116682[2 /*16*/]), &(Global_4718592.f_116682[3 /*16*/]), &(Global_4718592.f_116682[4 /*16*/]), &(Global_4718592.f_116682[5 /*16*/]), &(Global_4718592.f_116682[6 /*16*/]), &(Global_4718592.f_116682[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0xF6201B4DAF662A9D() || func_61())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_SMS3";
					}
					if (unk_0xCA042B6957743895(&(Global_4718592.f_93381[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", 126);
					}
					else
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							if (unk_0xF22B6C47C6EAB066(&(Global_4718592.f_93381[iParam16 /*43*/].f_6[iVar12 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_93381[iParam16 /*43*/].f_6[iVar12 /*16*/]), "", 64);
							}
							iVar12++;
						}
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, &(Global_4718592.f_93381[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_93381[iParam16 /*43*/].f_6[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_62())
						{
							if (*iParam1 == 0)
							{
								bVar4 = "CELL_EMASH_SOD";
							}
							else if (*iParam1 == -1)
							{
								bVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								bVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*iParam1 == 0)
						{
							bVar4 = "CELL_EMAIL_SOD";
						}
						else if (*iParam1 == -1)
						{
							bVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							bVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0xF6201B4DAF662A9D() || func_61())
						{
							bVar5 = bVar4;
							bVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_62())
					{
						if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xF6201B4DAF662A9D() || func_61())
						{
							bVar5 = bVar4;
							bVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0xF6201B4DAF662A9D())
						{
							bVar5 = bVar4;
							bVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0x00DC833F2568DBF6(iVar8, bVar4, bVar5, bParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					iVar9 = 16;
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIPTNF";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (func_61())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*iParam1 == -1)
					{
						bVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*iParam1 == -2)
					{
						bVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					iVar9 = 15;
					if (*iParam1 == 0)
					{
						bVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*iParam1 == -1)
					{
						bVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*iParam1 == -2)
					{
						bVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						bVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0xF6201B4DAF662A9D())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0x3ED1438C1F5C6612(64);
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0xF6201B4DAF662A9D() || func_61())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						bVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						bVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						bVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						bVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*iParam1 == 0)
					{
						if (iParam18 == 2)
						{
							bVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						bVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0xCA042B6957743895(bParam5))
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x00DC833F2568DBF6(0, bVar4, bVar5, bParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0x2BDD44CC428A7EAE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_62())
							{
								if (*iParam1 == 0)
								{
									bVar4 = "CELL_EMASH_BOD";
								}
								else if (*iParam1 == -1)
								{
									bVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									bVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*iParam1 == 0)
							{
								bVar4 = "CELL_EMAIL_BOD";
							}
							else if (*iParam1 == -1)
							{
								bVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								bVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_TIP3";
						}
						else if (*iParam1 == -1)
						{
							bVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_62())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*iParam1 == 0)
							{
								bVar4 = "CELL_EMASH_BOD";
							}
							else if (*iParam1 == -1)
							{
								bVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								bVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_62())
						{
							if (*iParam1 == 0)
							{
								bVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*iParam1 == -1)
							{
								bVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								bVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*iParam1 == 0)
						{
							bVar4 = "FMMC_KEY_TIPS";
						}
						else if (*iParam1 == -1)
						{
							bVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							bVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0xF6201B4DAF662A9D() || func_61())
					{
						bVar5 = bVar4;
						bVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							bVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar13 = 0;
					while (iVar13 <= 7)
					{
						if (unk_0xF22B6C47C6EAB066(&(Global_4718592.f_116553[iVar13 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_116553[iVar13 /*16*/]), "", 64);
						}
						iVar13++;
					}
					if (!unk_0xCA042B6957743895(bParam33))
					{
						bVar4 = bParam33;
					}
					if (bParam11)
					{
						unk_0xCA78CFA0366592FE(iVar8, bVar4, bVar5, bParam5, bParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCA78CFA0366592FE(iVar8, bVar4, bVar5, &(Global_4718592.f_116553[0 /*16*/]), &(Global_4718592.f_116553[1 /*16*/]), &(Global_4718592.f_116553[2 /*16*/]), &(Global_4718592.f_116553[3 /*16*/]), &(Global_4718592.f_116553[4 /*16*/]), &(Global_4718592.f_116553[5 /*16*/]), &(Global_4718592.f_116553[6 /*16*/]), &(Global_4718592.f_116553[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1922008, "", 64);
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x0CF2B696BBF945AE();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*iParam1 = 0;
					return 0;
				
				case 2:
					*iParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xCA042B6957743895(&Global_1922008))
						{
							StringCopy(&Global_1922008, unk_0x8362B09B91893647(), 64);
							if (unk_0xCA042B6957743895(&Global_1922008))
							{
								*iParam1 = 0;
								return 1;
							}
							iVar1 = unk_0xF030907CCBB8A9FD(unk_0x8362B09B91893647());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xCA042B6957743895(&Global_1922008))
									{
										if (unk_0x0C515FAB3FF9EA92(" ", unk_0x169BD9382084C8C0(&Global_1922008, 0, 1)))
										{
											iVar2 = unk_0xF030907CCBB8A9FD(&Global_1922008);
											StringCopy(&Global_1922008, unk_0x169BD9382084C8C0(&Global_1922008, 1, iVar2), 64);
										}
									}
									else
									{
										*iParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_60())
					{
						*iParam1 = 0;
						return 1;
					}
					if (unk_0x1753344C770358AE(*iParam1))
					{
						if (!unk_0x82E4A58BABC15AE7(*iParam1))
						{
							unk_0x10D373323E5B9C0D();
							iVar0 = unk_0x930DE22F07B1CCE3(*iParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1922008, unk_0x8362B09B91893647(), 64);
										iVar1 = unk_0xF030907CCBB8A9FD(&Global_1922008);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xCA042B6957743895(&Global_1922008))
												{
													if (unk_0x0C515FAB3FF9EA92(" ", unk_0x169BD9382084C8C0(&Global_1922008, iVar3, iVar3 + 1)))
													{
														*iParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*iParam1 != -3)
									{
										*iParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*iParam1 = 0;
									func_59(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) == 0)
							{
								unk_0x10D373323E5B9C0D();
								*iParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0xEB2BF817463DFA28(&Global_1922008, iParam1);
						}
						else
						{
							unk_0x75632C5ECD7ED843(&Global_1922008, iParam1);
						}
					}
					else if (unk_0xCA042B6957743895(unk_0x8362B09B91893647()))
					{
						*iParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x10D373323E5B9C0D();
						return 0;
					}
					else if (bParam22)
					{
						unk_0xEB2BF817463DFA28(unk_0x8362B09B91893647(), iParam1);
					}
					else
					{
						unk_0x75632C5ECD7ED843(unk_0x8362B09B91893647(), iParam1);
					}
					if (func_61())
					{
						if ((!unk_0x1077788E268557C2() || func_57() == 0) || func_56() == 1)
						{
							*iParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xABA17D7CE615ADBF("ERROR_CHECKYACHTNAME");
						unk_0xBD12F8228410D9B4(1);
					}
					else if (bParam29)
					{
						unk_0xABA17D7CE615ADBF("ERROR_CHECKVEHICLENAME");
						unk_0xBD12F8228410D9B4(1);
					}
					else
					{
						unk_0xABA17D7CE615ADBF("ERROR_CHECKPROFANITY");
						unk_0xBD12F8228410D9B4(1);
					}
					if (!unk_0x1753344C770358AE(*iParam1))
					{
						if (!unk_0xCA042B6957743895(&Global_1922008))
						{
							*iParam1 = -1;
						}
						else
						{
							*iParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x10D373323E5B9C0D();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_56()
{
	if (!func_57())
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (func_58())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_58()
{
	return Global_2725911;
}

void func_59(int iParam0)
{
	Global_2725911 = iParam0;
}

bool func_60()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

bool func_61()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_62()
{
	if ((((unk_0x2BDD44CC428A7EAE() == 7 || unk_0x2BDD44CC428A7EAE() == 8) || unk_0x2BDD44CC428A7EAE() == 9) || unk_0x2BDD44CC428A7EAE() == 10) || unk_0x2BDD44CC428A7EAE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_63(bool bParam0)
{
	if (unk_0x50F940259D3841E6(2, 176) || (unk_0xA571D46727E2B718(2) && unk_0x50F940259D3841E6(2, 237)))
	{
		func_64(bParam0, 1, 1);
		return;
	}
	if (unk_0x50F940259D3841E6(2, 177))
	{
		func_7(bParam0, 3);
		func_9(bParam0, 1);
	}
}

int func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_70(bParam0))
	{
		return 0;
	}
	if (!func_69(&(bParam0->f_72)))
	{
		return 0;
	}
	func_18(bParam0, bParam0->f_1);
	if (!func_68(bParam0))
	{
		return 1;
	}
	if (!func_67(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		func_65(bParam0);
	}
	if (func_14(&(bParam0->f_72.f_7), 1))
	{
		func_9(bParam0, 2);
	}
	if (func_34(&(bParam0->f_72)) == 0)
	{
		return 0;
	}
	func_36(bParam0, &(bParam0->f_72), 1, bParam2);
	if (func_14(&(bParam0->f_72.f_7), 2))
	{
		func_64(bParam0, 1, 1);
	}
	func_9(bParam0, 1);
	return 1;
}

void func_65(bool bParam0)
{
	func_66(&(bParam0->f_72));
}

void func_66(var uParam0)
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_19);
}

int func_67(bool bParam0)
{
	if (!func_13(bParam0, 5) && func_42(&(bParam0->f_72)))
	{
		func_9(bParam0, 5);
		return 0;
	}
	func_7(bParam0, 5);
	return 1;
}

int func_68(bool bParam0)
{
	if (!func_13(bParam0, 3) && !unk_0xCA042B6957743895(func_23(&(bParam0->f_72))))
	{
		func_9(bParam0, 3);
		func_9(bParam0, 1);
		return 0;
	}
	func_7(bParam0, 3);
	return 1;
}

int func_69(var uParam0)
{
	if (uParam0->f_13 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_13);
	return StackVal;
}

bool func_70(var uParam0)
{
	return func_71(&(uParam0->f_72));
}

int func_71(var uParam0)
{
	if (uParam0->f_26 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_26);
	return StackVal;
}

void func_72()
{
	func_76();
	func_75();
	func_74();
	func_73();
}

void func_73()
{
	unk_0xFE99B66D079CF6BC(0, 167, true);
	unk_0xFE99B66D079CF6BC(0, 166, true);
	unk_0xFE99B66D079CF6BC(0, 168, true);
	unk_0xFE99B66D079CF6BC(0, 169, true);
	unk_0xFE99B66D079CF6BC(0, 19, true);
}

void func_74()
{
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 85, true);
	unk_0xFE99B66D079CF6BC(0, 0, true);
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 137, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
}

void func_75()
{
	unk_0xFE99B66D079CF6BC(0, 140, true);
	unk_0xFE99B66D079CF6BC(0, 141, true);
	unk_0xFE99B66D079CF6BC(0, 143, true);
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xFE99B66D079CF6BC(0, 51, true);
	unk_0xFE99B66D079CF6BC(0, 45, true);
	unk_0xFE99B66D079CF6BC(0, 55, true);
	unk_0xFE99B66D079CF6BC(0, 21, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 0, true);
}

void func_76()
{
	unk_0xFE99B66D079CF6BC(0, 37, true);
	unk_0xFE99B66D079CF6BC(0, 157, true);
	unk_0xFE99B66D079CF6BC(0, 158, true);
	unk_0xFE99B66D079CF6BC(0, 159, true);
	unk_0xFE99B66D079CF6BC(0, 160, true);
	unk_0xFE99B66D079CF6BC(0, 161, true);
	unk_0xFE99B66D079CF6BC(0, 162, true);
	unk_0xFE99B66D079CF6BC(0, 163, true);
	unk_0xFE99B66D079CF6BC(0, 164, true);
	unk_0xFE99B66D079CF6BC(0, 165, true);
	unk_0xFE99B66D079CF6BC(0, 14, true);
	unk_0xFE99B66D079CF6BC(0, 15, true);
	unk_0xFE99B66D079CF6BC(0, 53, true);
	unk_0xFE99B66D079CF6BC(0, 54, true);
}

void func_77(var uParam0)
{
	if (func_27(&(uParam0->f_72)) || !func_26(&(uParam0->f_72)))
	{
		func_78(uParam0, 1);
	}
}

void func_78(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	
	iVar1 = bParam0->f_1;
	iVar2 = func_33(&(bParam0->f_6));
	Var3.f_8 = -1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var3 = { func_29(bParam0) };
		iVar1 = (iVar1 + iParam1);
		iVar1 = func_79(iVar1, iVar2);
		if (!func_28(&(bParam0->f_6), iVar1, &Var3))
		{
			return;
		}
		if (!func_27(&Var3) && func_26(&Var3))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_18(bParam0, iVar1);
}

int func_79(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

bool func_80(var uParam0)
{
	return !func_13(uParam0, 2);
}

int func_81(bool bParam0)
{
	if (bParam0->f_106 == 0)
	{
		return 1;
	}
	Call_Loc(bParam0->f_106);
	return StackVal;
}

void func_82()
{
	func_83(&Local_45);
	unk_0x1090044AD1DA76FA();
}

void func_83(bool bParam0)
{
	func_84(bParam0);
	func_7(bParam0, 0);
	func_7(bParam0, 1);
}

void func_84(var uParam0)
{
	if (uParam0->f_110 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_110);
}

int func_85()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_92())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (func_90(159))
	{
		if (!func_89())
		{
			return 1;
		}
	}
	if (func_90(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_86() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_86()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	switch (func_88())
	{
		case 0:
			return func_87();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_87()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_88()
{
	return Global_31959;
}

bool func_89()
{
	return Global_2714762.f_698;
}

int func_90(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_91()
{
	return Global_2725403;
}

bool func_92()
{
	return Global_2714762.f_693;
}

void func_93()
{
	struct<9> Var0;
	
	unk_0x9243BAC96D64C050();
	Var0.f_8 = -1;
	func_245(&Var0);
	Local_45 = { func_104(&Var0, 0) };
	iLocal_47 = 34543;
	iLocal_48 = 8028;
}

void func_94(var uParam0)
{
	func_103(uParam0, "TUT_ROOT_M1T", 0);
	func_102(uParam0, "TUT_ROOT_M1", 0);
	func_100(uParam0, "TUT_ROOT_M1_D", 0);
	func_95(uParam0, 0, 8106, 2);
}

void func_95(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam1;
	uParam0->f_9 = iParam2;
	uParam0->f_8 = iParam3;
}

int func_96(int iParam0, var uParam1)
{
	func_99(uParam1, iLocal_48);
	switch (iParam0)
	{
		case 0:
			func_98(uParam1);
			return 0;
		
		case 1:
			func_97(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_97(var uParam0)
{
	func_102(uParam0, "TUT_SUB_M2", 0);
	func_100(uParam0, "TUT_SUB_M2_D", 0);
}

void func_98(var uParam0)
{
	func_102(uParam0, "TUT_SUB_M2", 0);
	func_100(uParam0, "TUT_SUB_M2_D", 0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

void func_100(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_4 = sParam1;
	func_101(uParam0, 6, bParam2);
}

void func_101(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_10(&(uParam0->f_7), bParam1);
	}
	else
	{
		func_8(&(uParam0->f_7), bParam1);
	}
}

void func_102(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_3 = sParam1;
	func_101(uParam0, 5, bParam2);
}

void func_103(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = sParam1;
	func_101(uParam0, 3, bParam2);
}

struct<114> func_104(var* uParam0, int iParam1)
{
	struct<114> Var0;
	
	Var0.f_6.f_8 = -1;
	Var0.f_39.f_8 = -1;
	Var0.f_72.f_8 = -1;
	func_223(&Var0, 33364);
	func_192(&Var0, 18535);
	func_189(&Var0, 18171);
	func_186(&Var0, 18040);
	func_117(&Var0, 10695);
	func_113(&Var0, 10258);
	func_107(&Var0, 8584);
	func_106(&Var0, uParam0);
	func_105(&Var0, uParam0, iParam1, 0);
	return Var0;
}

void func_105(bool bParam0, var* uParam1, int iParam2, bool bParam3)
{
	func_36(bParam0, uParam1, 0, bParam3);
	func_18(bParam0, iParam2);
	if (func_34(uParam1) == 0)
	{
		return;
	}
	if (func_14(&(bParam0->f_72.f_7), 2))
	{
		func_64(bParam0, 0, 1);
	}
}

void func_106(var uParam0, var* uParam1)
{
	unk_0x213AEB2B90CBA7AC(&(uParam0->f_39), uParam1, 33);
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_110 = iParam1;
}

void func_108()
{
	func_112(1, 0);
	func_109(1, -1);
}

void func_109(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_111(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x450930E616475D0D(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_110(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_110(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_111(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	bVar1 = unk_0xD24D37CC275948CC(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == bVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = bVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_106 = iParam1;
}

bool func_114()
{
	return func_115(0, -1, 1);
}

bool func_115(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_111(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xDFA2EF8E04127DD5("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x0145F696AAAAD2E4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_116(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_116(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_117(var uParam0, int iParam1)
{
	uParam0->f_105 = iParam1;
}

struct<33> func_118()
{
	struct<33> Var0;
	
	Var0.f_8 = -1;
	func_169(&Var0, 14060);
	func_122(&Var0, 11013, 0);
	func_119(&Var0, 10762);
	return Var0;
}

void func_119(var uParam0, int iParam1)
{
	uParam0->f_27 = iParam1;
}

int func_120(var uParam0)
{
	func_121(202, "PIM_CEXI", -1);
	if (func_69(uParam0))
	{
		func_121(201, "PIM_CSEL", -1);
	}
	return 1;
}

void func_121(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_122(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_28 = iParam1;
	func_123(uParam0, iParam2);
}

void func_123(var uParam0, var uParam1)
{
	uParam0->f_29 = uParam1;
}

bool func_124(bool bParam0, var uParam1)
{
	func_149(bParam0);
	return func_125(bParam0) != 0;
}

int func_125(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_144(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_140(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_133(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_127(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_126(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_126(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 176);
	if (unk_0x50F940259D3841E6(2, 176) && func_69(&(bParam0->f_72)))
	{
		func_64(bParam0, 1, 1);
		return 2;
	}
	return 0;
}

int func_127(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 174);
	unk_0xEDE476E5EE29EDB1(2, 175);
	if (unk_0x580417101DDB492F(2, 174))
	{
		func_131(bParam0);
		return 9;
	}
	if (unk_0x580417101DDB492F(2, 175))
	{
		func_128(bParam0);
		return 10;
	}
	return 0;
}

void func_128(bool bParam0)
{
	if (!func_70(bParam0))
	{
		return;
	}
	if (!func_69(&(bParam0->f_72)))
	{
		return;
	}
	func_130(&(bParam0->f_72));
	func_129(&(bParam0->f_72));
	func_9(bParam0, 1);
}

void func_129(var uParam0)
{
	if (uParam0->f_24 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_24);
}

void func_130(var uParam0)
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_23);
}

void func_131(bool bParam0)
{
	if (!func_70(bParam0))
	{
		return;
	}
	if (!func_69(&(bParam0->f_72)))
	{
		return;
	}
	func_130(&(bParam0->f_72));
	func_132(&(bParam0->f_72));
	func_9(bParam0, 1);
}

void func_132(var uParam0)
{
	if (uParam0->f_25 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_25);
}

int func_133(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 177);
	if (unk_0x50F940259D3841E6(2, 177))
	{
		func_134(bParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_134(bool bParam0, bool bParam1, bool bParam2)
{
	struct<33> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (bParam2)
	{
		func_139(&(bParam0->f_72));
	}
	Var0 = { func_29(bParam0) };
	if (!func_137(bParam0, &Var0))
	{
		func_9(bParam0, 2);
		return;
	}
	iVar1 = func_136(&(bParam0->f_6));
	bVar2 = func_14(&(bParam0->f_6.f_7), 2);
	if (func_13(bParam0, 4))
	{
		iVar1 = 0;
	}
	iVar3 = func_135(&(bParam0->f_6));
	func_36(bParam0, &Var0, 0, 1);
	if (func_30(bParam0, iVar1))
	{
		if (iVar3 != 0)
		{
			Call_Loc(iVar3);
		}
		func_18(bParam0, iVar1);
	}
	else
	{
		func_18(bParam0, 0);
		func_24(&(bParam0->f_72));
	}
	if (bVar2 && !bParam1)
	{
		func_134(bParam0, 0, 1);
	}
	else if (func_14(&(bParam0->f_72.f_7), 2) && !bParam1)
	{
		func_64(bParam0, 1, 1);
		func_18(bParam0, iVar1);
	}
	func_9(bParam0, 1);
}

var func_135(var uParam0)
{
	return uParam0->f_17;
}

var func_136(var uParam0)
{
	return *uParam0;
}

bool func_137(var uParam0, var uParam1)
{
	return func_138(&(uParam0->f_6), uParam1);
}

int func_138(var uParam0, var uParam1)
{
	if (uParam0->f_10 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_10);
	return 1;
}

void func_139(var uParam0)
{
	if (uParam0->f_20 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_20);
}

int func_140(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 172);
	unk_0xEDE476E5EE29EDB1(2, 173);
	if (unk_0x580417101DDB492F(2, 172))
	{
		func_141(bParam0, -1);
		return 5;
	}
	if (unk_0x580417101DDB492F(2, 173))
	{
		func_141(bParam0, 1);
		return 6;
	}
	return 0;
}

int func_141(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_143(bParam0);
	if (iVar0 <= 1)
	{
		return 0;
	}
	if (func_142(&(bParam0->f_72)))
	{
		func_9(bParam0, 1);
	}
	func_78(bParam0, iParam1);
	if (func_24(&(bParam0->f_72)))
	{
		func_9(bParam0, 1);
	}
	return 1;
}

int func_142(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_18);
	return StackVal;
}

int func_143(var uParam0)
{
	return func_33(&(uParam0->f_6));
}

int func_144(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 205);
	unk_0xEDE476E5EE29EDB1(2, 206);
	if (unk_0x580417101DDB492F(2, 205))
	{
		if (func_145(bParam0, -1))
		{
			return 3;
		}
		return 0;
	}
	if (unk_0x580417101DDB492F(2, 206))
	{
		if (func_145(bParam0, 1))
		{
			return 4;
		}
		return 0;
	}
	return 0;
}

int func_145(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_14(&(bParam0->f_6.f_7), 2))
	{
		return 0;
	}
	bVar0 = func_14(&(bParam0->f_6.f_7), 7);
	if (bVar0)
	{
		iVar1 = func_147(bParam0);
		iVar2 = func_146(bParam0);
		if ((iParam1 < 0 && iVar1 <= 0) || (iParam1 > 0 && iVar1 >= iVar2))
		{
			return 0;
		}
	}
	func_134(bParam0, 1, 1);
	func_141(bParam0, iParam1);
	func_64(bParam0, 1, 1);
	return 1;
}

int func_146(var uParam0)
{
	struct<33> Var0;
	
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	Var0 = { func_29(uParam0) };
	if (!func_138(&(uParam0->f_6), &Var0))
	{
		return 0;
	}
	return func_31(&Var0);
}

int func_147(var uParam0)
{
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	return func_148(uParam0);
}

var func_148(var uParam0)
{
	return func_136(&(uParam0->f_6));
}

void func_149(bool bParam0)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return;
	}
	unk_0xEDE476E5EE29EDB1(2, 239);
	unk_0xEDE476E5EE29EDB1(2, 240);
	func_165(0, 0, 0, 1);
	func_164();
	func_161(bParam0);
	func_157(bParam0);
	func_151(bParam0);
	func_150(bParam0);
}

void func_150(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 238);
	if (unk_0x580417101DDB492F(2, 238))
	{
		func_134(bParam0, 0, 1);
	}
}

void func_151(bool bParam0)
{
	bool bVar0;
	
	unk_0xEDE476E5EE29EDB1(2, 241);
	unk_0xEDE476E5EE29EDB1(2, 242);
	bVar0 = func_156();
	if (func_154() || (unk_0x91AEF906BCA88877(2, 241) && bVar0))
	{
		func_141(bParam0, -1);
		return;
	}
	if (func_152() || (unk_0x91AEF906BCA88877(2, 242) && bVar0))
	{
		func_141(bParam0, 1);
		return;
	}
}

bool func_152()
{
	return (unk_0x50F940259D3841E6(2, 237) && func_153());
}

bool func_153()
{
	return Global_4539961 == -3;
}

bool func_154()
{
	return (unk_0x50F940259D3841E6(2, 237) && func_155());
}

bool func_155()
{
	return Global_4539961 == -2;
}

bool func_156()
{
	return Global_4539961 > -1;
}

void func_157(bool bParam0)
{
	unk_0xEDE476E5EE29EDB1(2, 237);
	unk_0x351220255D64C155(2, 176, true);
	if (!unk_0x50F940259D3841E6(2, 237))
	{
		return;
	}
	if (!func_160())
	{
		func_9(bParam0, 2);
		return;
	}
	if (func_159(bParam0))
	{
		func_64(bParam0, 1, 1);
	}
	else
	{
		func_158(bParam0);
	}
}

void func_158(bool bParam0)
{
	func_18(bParam0, Global_4539961);
}

bool func_159(bool bParam0)
{
	return Global_4539961 == bParam0->f_1;
}

bool func_160()
{
	return ((func_156() || func_153()) || func_155());
}

void func_161(bool bParam0)
{
	int iVar0;
	
	if (!func_156())
	{
		return;
	}
	if (!func_163())
	{
		return;
	}
	if (!func_159(bParam0))
	{
		return;
	}
	iVar0 = func_162(0.045f);
	if (iVar0 > 0)
	{
		func_128(bParam0);
	}
	else if (iVar0 < 0)
	{
		func_131(bParam0);
	}
	else if (iVar0 == -999)
	{
		func_64(bParam0, 1, 1);
	}
}

int func_162(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_23149);
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4539955 >= fVar0 && Global_4539955 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4539955 >= fVar0 && Global_4539955 < fVar4)
	{
		return -1;
	}
	if (Global_4539955 >= fVar4 && Global_4539955 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (unk_0xA571D46727E2B718(2))
	{
		return unk_0x91AEF906BCA88877(2, 237);
	}
	return 0;
}

void func_164()
{
	unk_0xAAE7CE1D63167423();
	unk_0x8DB8CFFD58B62552(1);
}

void func_165(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	fVar6 = (0.034722f / 2f);
	bVar13 = -1;
	if (!unk_0xA571D46727E2B718(2))
	{
		Global_4539961 = -1;
		return;
	}
	unk_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	func_168();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_167(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_167(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		bVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			bVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		bVar10 = (32 + (iVar11 - (iVar12 * bVar13)));
		if (bParam3)
		{
			if (!bParam1 || bVar13 != 0)
			{
				unk_0xB8A850F20A067EB6(76, 84);
				unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_166(fVar4, (fVar5 + (IntToFloat(bVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
				unk_0xE3A3DB414A373DAB();
			}
		}
		Global_4539961 = Global_23150.f_8429[bVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_166(float fParam0, float fParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, bParam4, bParam5, bParam6, bParam7, false);
}

void func_167(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		bVar3 = 48;
	}
	else
	{
		bVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_166(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_166(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_168()
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = unk_0x11E65974A982637C(2, 239);
	Global_4539956 = unk_0x11E65974A982637C(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_169(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

void func_170(var uParam0, int iParam1)
{
	func_171(iParam1, func_185(uParam0), 0, 1, 0, 0, 0);
}

void func_171(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), bParam1, 24);
	if (!unk_0xCA042B6957743895(bParam1) && !unk_0xAC09CA973C564252(bParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_184(Global_23150.f_5609, 1);
	}
	else
	{
		func_184(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_181(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_173(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_172(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_172(bool bParam0)
{
	if (!unk_0xAC09CA973C564252(bParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

int func_173(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_180(iParam0), 64);
	StringCopy(&cVar1, func_177(iParam0, bParam1), 64);
	if (unk_0xD24D37CC275948CC(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_175(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x35736EE65BD00C11(&cVar0, &cVar1) };
		fVar6 = (func_174(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x30CF4BDA4FCB1905() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_174(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_175(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x888D57E407E63624(iParam1, iParam2);
		return;
	}
	unk_0x873C9F3104101DD3(iParam1, iParam2);
	bVar0 = unk_0xBBDA792448DB5A89(*iParam1);
	bVar1 = unk_0xBBDA792448DB5A89(*iParam2);
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (func_176(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = unk_0xF2DB717A73826179((bVar1 * fVar2));
		*iParam2 = unk_0xF2DB717A73826179(bVar1);
		return;
	}
	*fParam3 = ((bVar0 / bVar1) / fVar2);
	*iParam1 = unk_0xF2DB717A73826179((bVar0 / *fParam3));
	*iParam2 = unk_0xF2DB717A73826179((bVar1 / *fParam3));
}

bool func_176(bool bParam0, bool bParam1)
{
	return (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1)) > 3.5f;
}

var func_177(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_179(unk_0x4F8644AF03D0E0D6()) };
			if (unk_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_178(&uVar1);
			}
		}
		else
		{
			return func_178(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_178(var uParam0)
{
	return uParam0;
}

struct<13> func_179(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

char* func_180(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_179(unk_0x4F8644AF03D0E0D6()) };
			unk_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_178(&uVar0);
		}
		else
		{
			return func_178(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_181(bool bParam0)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		if (unk_0xD24D37CC275948CC(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_182(0, 1, 0, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(bParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_183(Global_23150.f_6402[iParam4], &bVar0, &bVar1, &bVar2);
			if ((bVar0 < 20 && bVar1 < 20) && bVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
				}
			}
			else if ((bVar0 > 230 && bVar1 > 230) && bVar2 > 230)
			{
				if (bParam0)
				{
					bVar0 = false;
					bVar1 = false;
					bVar2 = false;
				}
			}
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7C9C91AB74A0360F(14, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
			else
			{
				unk_0x7C9C91AB74A0360F(12, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
		else
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(false, false, false, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	else
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0x4E096588B13FFECA(1);
	if (bParam5)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(4);
	}
	else if (bParam6)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(6);
	}
	else
	{
		unk_0x66E0276CC5F6B9DA(0);
	}
	unk_0x63145D9C883A1A70(0f, 1f);
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_183(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_184(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam0) / 32f));
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
}

bool func_185(var uParam0)
{
	return uParam0->f_3;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

void func_187(char* sParam0)
{
	func_188(sParam0, 0, 0);
}

void func_188(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = unk_0x9CD27B0045628463();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_189(var uParam0, int iParam1)
{
	uParam0->f_109 = iParam1;
}

void func_190(var uParam0)
{
	func_191(uParam0, 1, 1);
}

void func_191(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = uParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_192(var uParam0, int iParam1)
{
	uParam0->f_112 = iParam1;
}

void func_193()
{
	func_194(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}

void func_194(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	char cVar73[16];
	bool bVar74;
	bool bVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_111(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_220(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_173(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_175(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_171(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_180(29), 64);
					StringCopy(&cVar62, func_177(29, 1), 64);
					if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_166(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					bVar1 = Global_23150.f_8774;
					bVar2 = Global_23150.f_8775;
					bVar3 = Global_23150.f_8776;
					bVar4 = Global_23150.f_8777;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				func_166(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) != 0)
				{
					func_219();
					unk_0x25FBB336DF1804CB(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x03B504CF259931BC(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0xE7DCB5B874BCD96E(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCD015E5BB0D96A57((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_219();
					func_217((((Global_23147 + fParam5) - 0.00390625f) - func_218("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_219();
						func_217((((Global_23147 + fParam5) - 0.00390625f) - func_218("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				bVar1 = Global_23150.f_8784;
				bVar2 = Global_23150.f_8785;
				bVar3 = Global_23150.f_8786;
				bVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					bVar1 = Global_23150.f_8789;
					bVar2 = Global_23150.f_8790;
					bVar3 = Global_23150.f_8791;
					bVar4 = Global_23150.f_8792;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 204;
				}
				func_166(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				Var38 = { unk_0x35736EE65BD00C11("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(true, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_173(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_216(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_166(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_216(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_173(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_215(Global_23150.f_5159, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_5159), func_177(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_173(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_216(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_166(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_216(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_173(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_215(Global_4539885.f_67, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_180(Global_4539885.f_67), func_177(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_207(iVar58, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xB8A850F20A067EB6(76, 84);
			unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					bVar68 = 255;
					bVar69 = 255;
					bVar70 = 255;
					bVar71 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x7C9C91AB74A0360F(Global_23150.f_8799, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					else
					{
						unk_0x7C9C91AB74A0360F(true, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, bVar68, bVar69, bVar70, bVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											unk_0x54CE8AC98E120CAB(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x85F061DA64ED2F67(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_173(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(26), func_177(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(27), func_177(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_206(bVar32);
										}
										unk_0x25FBB336DF1804CB(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_173(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_173(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_215(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[(iVar22 + iVar28)]), func_177(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[(iVar22 + iVar28)]), func_177(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0xCD015E5BB0D96A57(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCD015E5BB0D96A57((fVar34 + fVar40), fVar35, 0);
											if (func_60() && unk_0x2C83A9DA6BFFC4F9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_182(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													bVar74 = 0f;
													bVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													unk_0x07C837F9A01C34C9(0f, (0.35f * 0.7f));
													unk_0xBE6B23FFA53FB442(255, 255, 255, 150);
													unk_0x3A618A217E5154F0((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar75), false);
													unk_0x25FBB336DF1804CB(&cVar73);
													unk_0x03B504CF259931BC((Global_23150.f_6129 + iVar30));
													unk_0xCD015E5BB0D96A57((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_173(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_173(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_215(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[(iVar22 + iVar14)]), func_177(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[(iVar22 + iVar14)]), func_177(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[(iVar22 + iVar14)]), func_177(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_206(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0x03B504CF259931BC(Global_23150.f_4309[iVar20]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(26), func_177(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(27), func_177(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_205((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_206(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(26), func_177(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_180(27), func_177(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									func_182(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_204((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_173(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_215(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_180(26), func_177(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
											if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_215(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_180(27), func_177(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_173(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(Global_23150.f_4824[iVar22], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
												unk_0xE7FFAE5EBF23D890(func_180(Global_23150.f_4824[iVar22]), func_177(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_203(Global_23150.f_4824[iVar22])), (fVar37 * func_203(Global_23150.f_4824[iVar22])), 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = unk_0x9CD27B0045628463();
	unk_0x55598D21339CB998(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_196(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0x6806C51AD12B83B8(10);
	}
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(8);
	if (bParam0)
	{
		func_195(1);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_195(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_196(int iParam0)
{
	if (func_202())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_201(0))
		{
			func_197(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_197(int iParam0)
{
	if (func_202())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_200())
		{
			func_199(1, 1);
		}
		else
		{
			func_199(0, 0);
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
	if (!func_198())
	{
		Global_20266.f_1 = 3;
	}
}

int func_198()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_199(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_201(0))
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

bool func_200()
{
	return BitTest(Global_1958711, 5);
}

int func_201(int iParam0)
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

bool func_202()
{
	return BitTest(Global_1958711, 19);
}

float func_203(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_204(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0xE7DCB5B874BCD96E(bParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_205(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

void func_206(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[0], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	else
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[1], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
}

void func_207(int* iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_111(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_220(bParam4, bParam8))
	{
		return;
	}
	if (func_213())
	{
		return;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_210(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0 || unk_0x5FCF4D7069B09026())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[bVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_23150.f_5417[bVar1], true), 64);
				}
				else if (Global_23150.f_5430[bVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_23150.f_5430[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_23150.f_5472 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_5355[bVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(bVar1);
					func_209(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_209(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_208(&(Global_23150.f_5355[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_23150.f_5404[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(bVar3, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(bVar3);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_23150.f_5417[bVar1] != 363 && BitTest(Global_23150.f_5443, bVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_23150.f_5417[bVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(363);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				bVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_23150.f_5160);
				func_209(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_208(&(Global_4539885.f_16));
				}
				else
				{
					bVar4 = Global_23150.f_5404[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					unk_0x80338406F3475E55(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bVar4, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bVar4);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0xC3D0841A0CC546A6(true);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(false);
			}
			unk_0xC6796A8FFA375E53();
			Global_23150.f_5161 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(bVar1);
					unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			bVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(bVar1);
				unk_0x80338406F3475E55(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(bParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(bParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x450930E616475D0D(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_23150.f_5446)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_208(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_209(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

bool func_210(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_211(-1, 0) == 8;
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

int func_211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_212();
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

int func_212()
{
	return Global_1574918;
}

int func_213()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_214())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_214()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	unk_0x7C9C91AB74A0360F(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		
		case 54:
			*bParam5 = 100;
			break;
		
		case 62:
			*bParam5 = 100;
			break;
		
		case 55:
			unk_0x7C9C91AB74A0360F(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_216(float fParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xA50ABC31E3CDFAFF(2);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_217(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0x03B504CF259931BC(bParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_218(bool bParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		if (unk_0xD24D37CC275948CC(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_219();
	unk_0x54CE8AC98E120CAB(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_219()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
	if (Global_23150.f_8783)
	{
		bVar0 = Global_23150.f_8779;
		bVar1 = Global_23150.f_8780;
		bVar2 = Global_23150.f_8781;
		bVar3 = Global_23150.f_8782;
	}
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

int func_220(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_222(8, -1) && func_221() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_78579) || Global_23150.f_8807) || unk_0xE18B138FABC53103()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_221()
{
	return Global_1574991;
}

var func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_223(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
}

int func_224(bool bParam0)
{
	func_244(-1);
	func_112(1, 0);
	func_241(bParam0);
	func_237(bParam0);
	func_236(0, 0, 0, 0, 0);
	func_232(bParam0);
	func_225(bParam0);
	func_18(bParam0, bParam0->f_1);
	return 1;
}

void func_225(bool bParam0)
{
	if (func_13(bParam0, 3))
	{
		func_121(202, "PIMK2_CANCEL", -1);
		func_121(201, "PIMK2_ACCEPT", -1);
		return;
	}
	if (func_13(bParam0, 5))
	{
		return;
	}
	if (!func_52(&(bParam0->f_72)))
	{
		func_229(bParam0);
	}
	func_226(bParam0);
}

void func_226(bool bParam0)
{
	func_227(&(bParam0->f_72), &(bParam0->f_72));
}

void func_227(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_228(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_228(var uParam0)
{
	return uParam0->f_27;
}

void func_229(bool bParam0)
{
	func_230(&(bParam0->f_6), &(bParam0->f_72));
}

void func_230(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_231(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_231(var uParam0)
{
	return uParam0->f_30;
}

void func_232(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	int iVar4;
	int iVar5;
	
	func_235(bParam0, 0);
	iVar0 = func_34(&(bParam0->f_6));
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_8 = -1;
	iVar4 = -1;
	while (iVar4 != 2)
	{
		Var3 = { func_29(bParam0) };
		Stack.Push(iVar1);
		Stack.Push(&Var3);
		Call_Loc(iVar0);
		iVar4 = StackVal;
		if (iVar4 != 0)
		{
			iVar1++;
		}
		else
		{
			if (func_233(bParam0, iVar1, &Var3))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	iVar5 = func_32(0, (iVar2 - 1));
	func_235(bParam0, iVar5);
	func_25(bParam0, bParam0->f_1);
	func_24(&(bParam0->f_72));
}

int func_233(var uParam0, int iParam1, var uParam2)
{
	if (func_27(uParam2))
	{
		return 0;
	}
	func_234(uParam2, iParam1);
	Global_23150.f_1616[iParam1] = func_69(uParam2);
	return 1;
}

void func_234(var uParam0, var uParam1)
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_16);
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_237(bool bParam0)
{
	if (unk_0xCA042B6957743895(func_239(func_240(&(bParam0->f_6)))))
	{
		func_238(func_185(&(bParam0->f_6)));
		return;
	}
	func_238(func_240(&(bParam0->f_6)));
}

void func_238(bool bParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), bParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

var func_239(var uParam0)
{
	return uParam0;
}

bool func_240(var uParam0)
{
	return uParam0->f_1;
}

void func_241(bool bParam0)
{
	func_243(1, 1, 0, 0, 0);
	func_242(1, 2, 1, 1, 1);
	func_4(bParam0);
}

void func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (unk_0x48AF36444B965238())
	{
		if (!func_111(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0x85F01B8D5B90570E(Global_23150.f_6051[iVar1 /*10*/]))
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
		}
	}
}

void func_245(var uParam0)
{
	func_103(uParam0, "TUT_ROOT_TITLE", 0);
	func_95(uParam0, 0, 34574, 2);
}

int func_246(int iParam0, var uParam1)
{
	func_99(uParam1, iLocal_47);
	switch (iParam0)
	{
		case 0:
			func_94(uParam1);
			return 0;
		
		case 1:
			func_247(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_247(var uParam0)
{
	func_102(uParam0, "TUT_ROOT_M2", 0);
	func_100(uParam0, "TUT_ROOT_M2_D", 0);
}

