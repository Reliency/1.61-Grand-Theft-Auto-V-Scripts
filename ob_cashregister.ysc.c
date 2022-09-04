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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	bool bLocal_21 = 0;
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
	if (unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_1661006, 1))
		{
			func_25();
		}
		else
		{
			unk_0x1CA59E306ECB80A5(32, false, -1);
			func_22(0, -1, 0);
			unk_0xAA391C728106F7AF(false);
			iLocal_20 = 1;
		}
	}
	else if (unk_0xC968670BFACE42D9(2))
	{
		func_25();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_20 == 1)
		{
			if (func_14())
			{
				func_25();
			}
		}
		if (unk_0x7239B21A38F536BA(bScriptParam_21))
		{
			if (unk_0xCCBA154209823057(bScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x060D6E96F8B8E48D(bScriptParam_21))
						{
							Local_19 = { unk_0x3FEF770D40960D5A(bScriptParam_21, true) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x8ABFB70C49CC43E2(bScriptParam_21, 0) && unk_0x47D6F43D77935C75(bScriptParam_21)) && !unk_0x0A7B270912999B3C(bScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	bVar3 = unk_0xD53343AA4FB7DD28(70, 121);
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar0 = joaat("prop_cash_pile_01");
		bVar3 = unk_0xD53343AA4FB7DD28(50, 101);
		bVar3 = func_13(bVar3, 1);
	}
	unk_0x933D6A9EEC1BACD0(&bVar2, 3);
	unk_0x933D6A9EEC1BACD0(&bVar2, 4);
	unk_0x963D27A58DF860AC(bVar0);
	while (!unk_0x98A4EB5D89A0C952(bVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_2(iVar1, unk_0x6E16BC2503FF1FF0(Local_19, 1.2f, 1.5f), bVar2, bVar3, bVar0, 0, 0);
	}
	else
	{
		unk_0xFBA08C503DD5FA58(iVar1, unk_0x6E16BC2503FF1FF0(Local_19, 1.2f, 1.5f), bVar2, bVar3, false, bVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, bParam2, bParam3, bParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = unk_0x673966A0C0FD7171(iParam0, Param1, bParam2, bParam3, bParam4, bParam5, bParam6);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	bool bVar3;
	
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar1 = func_9(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2.f_0 = iParam0;
	Var2.f_1 = { Param1 };
	if (func_4(&Var2) != -1)
	{
		return Var0;
	}
	unk_0x933D6A9EEC1BACD0(&iParam2, 5);
	Var2.f_4 = unk_0x9C93764223E29C50(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, false);
	bVar3 = unk_0xEE68096F9F37341E();
	if (bParam5)
	{
		Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_12 = unk_0x8A1C8B1738FFE87E();
		Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = unk_0x257ED0FADF750BCF();
		if (Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 == 0)
		{
			Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = unk_0x638A3A81733086DB();
			Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 2;
		}
	}
	Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/] = { Var2 };
	Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_5 = { Param1 };
	Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_8 = iParam2;
	Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_9 = iParam3;
	Global_1911933[bVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_10 = iParam4;
	return Var2;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2683918.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0 == -1)
	{
		bParam0 = unk_0xEE68096F9F37341E();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1911933[bParam0 /*260*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2683918.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30925;
}

bool func_13(bool bParam0, int iParam1)
{
	bool bVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (bParam0 > 0)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(bParam0) * Global_262145);
				bParam0 = unk_0xF2DB717A73826179(bVar0);
			}
			break;
		
		default:
			break;
	}
	return bParam0;
}

int func_14()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_31959;
}

bool func_18()
{
	return Global_2714762.f_698;
}

int func_19(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2725403;
}

bool func_21()
{
	return Global_2714762.f_693;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_24();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_24();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_24()
{
	unk_0x1090044AD1DA76FA();
}

void func_25()
{
	unk_0x1090044AD1DA76FA();
}

