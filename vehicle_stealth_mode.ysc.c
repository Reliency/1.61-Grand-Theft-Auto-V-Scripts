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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	bool bLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&bLocal_46))
	{
		while (!func_79())
		{
			func_67(&bLocal_46);
			if (func_57(&bLocal_46))
			{
			}
			else
			{
				func_17(&bLocal_46);
				unk_0x4EDE34FBADD967A6(false);
			}
		}
	}
	func_1(&bLocal_46);
}

void func_1(bool bParam0)
{
	func_16();
	if (func_10(bParam0))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	if (func_8(&bLocal_46))
	{
		func_4(&bLocal_46);
	}
	unk_0xAA5F02DB48D704B9(5);
	func_3();
	unk_0xEE4EBDD2593BA844(unk_0x4F8644AF03D0E0D6(), 0);
	func_2();
}

void func_2()
{
	unk_0x1090044AD1DA76FA();
}

void func_3()
{
	unk_0xE80492A9AC099A93(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809), 3);
}

void func_4(bool bParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(bParam0->f_6), 5);
}

void func_5(bool bParam0, bool bParam1)
{
	unk_0xE80492A9AC099A93(bParam0, bParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x46E9AE36D8FA6417(Global_2678393.f_1582) || Global_2678393.f_1582 == unk_0xC30338E8088E2E21()) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1582 = unk_0xC30338E8088E2E21();
			Global_2678393.f_1583 = unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			Global_2678393.f_1582 = -1;
		}
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x46E9AE36D8FA6417(Global_2678393.f_1598) || Global_2678393.f_1598 == unk_0xC30338E8088E2E21()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1598 = unk_0xC30338E8088E2E21();
			unk_0x933D6A9EEC1BACD0(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_71.f_2), 23);
		}
		else
		{
			Global_2678393.f_1598 = -1;
			unk_0xE80492A9AC099A93(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(bool bParam0)
{
	return func_9(&(bParam0->f_6), 5);
}

bool func_9(bool bParam0, int iParam1)
{
	return BitTest(*bParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

bool func_12(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_13(bool bParam0, bool bParam1)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_14(bool bParam0, bool bParam1, bool bParam2)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0xC63CD5D2920ACBE7(bParam2);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_15(bool bParam0)
{
	if (bParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return unk_0xB215AAC32D25D019(bParam0);
}

void func_16()
{
	unk_0xE80492A9AC099A93(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809), true);
}

void func_17(bool bParam0)
{
	func_54(bParam0);
	func_53(bParam0);
	if (func_52(bParam0))
	{
		if (((func_51(bParam0) && !func_50(bParam0)) && unk_0x01BF60A500E28887(bParam0->f_1)) && !func_49())
		{
			func_48(bParam0, 1, 0);
			func_47(bParam0);
		}
		else if (func_9(&(bParam0->f_6), 6) && func_50(bParam0))
		{
			if (unk_0x01BF60A500E28887(bParam0->f_1) && !func_49())
			{
				func_48(bParam0, 0, 0);
				func_5(&(bParam0->f_6), 6);
				func_5(&(bParam0->f_6), 2);
			}
		}
	}
	if (func_46(bParam0))
	{
		unk_0xEE4EBDD2593BA844(unk_0x4F8644AF03D0E0D6(), 1);
		func_45();
		func_44(bParam0);
	}
	else if (func_43(bParam0))
	{
		unk_0xEE4EBDD2593BA844(unk_0x4F8644AF03D0E0D6(), 0);
		func_16();
		func_44(bParam0);
		func_42(bParam0, 5);
	}
	if (func_50(bParam0) && !func_51(bParam0))
	{
		func_40(bParam0);
		func_39();
		func_42(bParam0, 2);
		if (func_36(bParam0))
		{
			func_34();
		}
	}
	else
	{
		func_18(bParam0);
	}
	func_3();
	unk_0xE80492A9AC099A93(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809), 4);
}

void func_18(bool bParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(bParam0->f_6), 0) && !func_9(&(bParam0->f_6), 2)) && !unk_0x4D79439A6B55AC67()) && func_33(bParam0)) && !func_32(0)) && !func_31()) && func_29()) && unk_0x7239B21A38F536BA(unk_0xBB40DD2270B65366(bParam0->f_1, -1, false)))
	{
		func_25(bParam0, 1);
		func_24(&(bParam0->f_6), 3);
		iVar0 = func_23(bParam0->f_6.f_2, 3333, 10000);
		bParam0->f_6.f_2 = 0;
		if (func_52(bParam0))
		{
			func_21(func_22(bParam0), func_15(bParam0->f_2), func_15(bParam0->f_2), iVar0);
		}
		else
		{
			func_20(func_22(bParam0), func_15(bParam0->f_2), iVar0);
		}
		func_19(bParam0);
		func_24(&(bParam0->f_6), 0);
	}
}

void func_19(bool bParam0)
{
	func_24(&(bParam0->f_6), 2);
}

void func_20(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam2);
}

void func_21(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0xC63CD5D2920ACBE7(bParam2);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam3);
}

char* func_22(bool bParam0)
{
	if (func_52(bParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(bool bParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(bParam0, bParam1);
}

void func_25(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (func_52(bParam0))
	{
		switch (bParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = (func_28(19004, -1) + iParam1);
				if (bVar0 >= 0)
				{
					func_26(19004, bVar0, -1);
				}
				break;
			}
	}
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_27();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	unk_0x6D3A430D1A809179(iParam0, bParam1, bParam2);
}

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	return unk_0x0BC900A6FE73770C(iParam0, bParam1);
}

bool func_29()
{
	return (!BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809, 4) && !func_30());
}

bool func_30()
{
	return ((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) && Global_4718592.f_2 == 20);
}

bool func_31()
{
	return Global_75485;
}

int func_32(int iParam0)
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

int func_33(bool bParam0)
{
	if (func_52(bParam0))
	{
		switch (bParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_34()
{
	if (!unk_0x4D79439A6B55AC67())
	{
		func_35("STEALTH_WARN", 3000);
	}
}

void func_35(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_36(bool bParam0)
{
	int iVar0;
	
	if (func_32(0) || func_31())
	{
		return 0;
	}
	iVar0 = func_37(bParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0x91AEF906BCA88877(0, 114) || unk_0x91AEF906BCA88877(0, 99)) || unk_0x91AEF906BCA88877(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x91AEF906BCA88877(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x91AEF906BCA88877(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x91AEF906BCA88877(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (!func_38(bParam0))
	{
		return 4;
	}
	switch (bParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (bParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_38(bool bParam0)
{
	return (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false));
}

void func_39()
{
	unk_0xFE99B66D079CF6BC(0, 24, true);
	unk_0xFE99B66D079CF6BC(0, 66, true);
	unk_0xFE99B66D079CF6BC(0, 67, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 91, true);
	unk_0xFE99B66D079CF6BC(0, 92, true);
	unk_0xFE99B66D079CF6BC(0, 99, true);
	unk_0xFE99B66D079CF6BC(0, 100, true);
	unk_0xFE99B66D079CF6BC(0, 37, true);
}

void func_40(bool bParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(bParam0->f_6), 0) && !func_9(&(bParam0->f_6), 1)) && !unk_0x4D79439A6B55AC67()) && func_9(&(bParam0->f_6), 3)) && !func_32(0)) && !func_31()) && func_29()) && unk_0x7239B21A38F536BA(unk_0xBB40DD2270B65366(bParam0->f_1, -1, false)))
	{
		iVar0 = func_23(bParam0->f_6.f_2, 3333, 10000);
		bParam0->f_6.f_2 = 0;
		if (func_52(bParam0))
		{
			func_35(func_41(bParam0), iVar0);
		}
		else
		{
			func_21(func_41(bParam0), func_15(bParam0->f_2), func_15(bParam0->f_2), iVar0);
		}
		func_47(bParam0);
		func_24(&(bParam0->f_6), 0);
	}
}

char* func_41(bool bParam0)
{
	if (func_52(bParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_42(bool bParam0, bool bParam1)
{
	if (func_51(bParam0))
	{
		return;
	}
	if (unk_0x462E0DB9B137DC5F() != bParam1)
	{
		unk_0xAA5F02DB48D704B9(bParam1);
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > bParam1)
	{
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), bParam1, false);
	}
}

bool func_43(bool bParam0)
{
	return (!func_9(bParam0, 0) && func_9(bParam0, 1));
}

void func_44(bool bParam0)
{
	func_5(&(bParam0->f_6), 0);
	if (func_10(bParam0))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	if (!func_52(bParam0))
	{
		if (func_50(bParam0))
		{
			func_5(&(bParam0->f_6), 1);
		}
		else
		{
			func_5(&(bParam0->f_6), 2);
		}
	}
}

void func_45()
{
	unk_0x933D6A9EEC1BACD0(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809), true);
}

bool func_46(bool bParam0)
{
	return (func_9(bParam0, 0) && !func_9(bParam0, 1));
}

void func_47(bool bParam0)
{
	func_24(&(bParam0->f_6), 1);
}

void func_48(bool bParam0, bool bParam1, bool bParam2)
{
	switch (bParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			unk_0xB251E0B33E58B424(bParam0->f_1, !bParam1, bParam2);
			break;
	}
}

bool func_49()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809, 3);
}

bool func_50(bool bParam0)
{
	return func_9(bParam0, 0);
}

bool func_51(bool bParam0)
{
	return func_9(bParam0, 2);
}

bool func_52(bool bParam0)
{
	return ((func_38(bParam0) && bParam0->f_3 == unk_0xD80958FC74E988A6()) || unk_0xBB40DD2270B65366(bParam0->f_1, -1, false) == unk_0xD80958FC74E988A6());
}

void func_53(bool bParam0)
{
	if (func_10(bParam0) && (func_32(0) || func_31()))
	{
		bParam0->f_6.f_2 = 1;
		unk_0x8DFCED7A656F8802(true);
		func_5(&(bParam0->f_6), 0);
		if (func_50(bParam0))
		{
			func_5(&(bParam0->f_6), 1);
		}
		else
		{
			func_5(&(bParam0->f_6), 2);
			if (func_52(bParam0))
			{
				func_25(bParam0, -1);
			}
		}
	}
}

void func_54(bool bParam0)
{
	if (func_50(bParam0))
	{
		if (func_8(bParam0))
		{
			if (func_56())
			{
				func_4(bParam0);
			}
		}
		else if (!func_56())
		{
			func_55(bParam0);
		}
	}
	else if (func_8(bParam0))
	{
		func_4(bParam0);
	}
	unk_0xE80492A9AC099A93(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809), 2);
}

void func_55(bool bParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(bParam0->f_6), 5);
}

bool func_56()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809, 2);
}

int func_57(bool bParam0)
{
	if (!func_38(bParam0))
	{
		return 1;
	}
	if (!func_66(bParam0))
	{
		return 1;
	}
	if (!func_65(bParam0->f_2))
	{
		return 1;
	}
	if (func_64(unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		return 1;
	}
	if (func_63(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	if (func_60(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	if (func_58(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	return 0;
}

int func_58(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (Global_2689235[bParam0 /*453*/].f_244 > -1)
		{
			if (func_59(Global_2689235[bParam0 /*453*/].f_244) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

int func_60(bool bParam0)
{
	if (bParam0 != func_62() && func_61(bParam0, 1, 1))
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
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

int func_62()
{
	return -1;
}

int func_63(bool bParam0)
{
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_62())
	{
		return 0;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_66(bool bParam0)
{
	return (unk_0x7239B21A38F536BA(bParam0->f_1) && unk_0x4C241E39B23DF959(bParam0->f_1, false));
}

void func_67(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_9(bParam0, 4);
	bVar1 = func_9(bParam0, 0);
	func_78(bParam0);
	if (bVar0)
	{
		func_24(bParam0, 3);
	}
	else
	{
		func_5(bParam0, 3);
	}
	if (bVar1)
	{
		func_24(bParam0, 1);
	}
	else
	{
		func_5(bParam0, 1);
	}
	if (func_38(bParam0))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bParam0->f_1 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (func_66(bParam0))
			{
				bParam0->f_2 = unk_0x9F47B058362C84B5(bParam0->f_1);
				if (unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					func_24(bParam0, 2);
				}
			}
		}
	}
	if (func_66(bParam0))
	{
		if (!unk_0x22AC59A870E6A669(bParam0->f_1, -1, false))
		{
			bVar2 = unk_0xBB40DD2270B65366(bParam0->f_1, -1, false);
			if ((unk_0x7239B21A38F536BA(bVar2) && !unk_0x5F9532F3B5CC2551(bVar2, false)) && unk_0x12534C348C6CB68B(bVar2))
			{
				bParam0->f_3 = bVar2;
				if (bVar2 == unk_0xD80958FC74E988A6())
				{
					func_24(bParam0, 4);
					if (!func_9(bParam0, 3))
					{
						func_24(&(bParam0->f_6), 6);
					}
				}
			}
		}
		if (func_38(bParam0))
		{
			bParam0->f_4 = func_77(unk_0xD80958FC74E988A6(), 0);
		}
		if (func_52(bParam0))
		{
			if (func_76() && func_70(bParam0))
			{
				func_24(bParam0, 0);
			}
		}
		else
		{
			func_68(bParam0);
		}
	}
	if (func_46(bParam0))
	{
		bParam0->f_6.f_3 = unk_0x7A5487FE9FAA6B48();
	}
}

void func_68(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0->f_3) && func_69(unk_0x6C0E2E0125610278(bParam0->f_3)))
	{
		func_24(bParam0, 0);
	}
	else
	{
		func_5(bParam0, 0);
	}
}

bool func_69(bool bParam0)
{
	return (bParam0 != -1 && BitTest(Global_1853348[bParam0 /*834*/].f_809, 1));
}

bool func_70(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_75();
	if (unk_0x01BF60A500E28887(bParam0->f_1))
	{
		func_74(bParam0);
		switch (bParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !unk_0xAEF12960FA943792(bParam0->f_1);
				break;
		}
	}
	else if (func_73(bParam0))
	{
		if (func_72(bParam0))
		{
			unk_0xB69317BF5E782347(bParam0->f_1);
		}
	}
	else
	{
		func_71(bParam0);
	}
	return bVar0;
}

void func_71(var uParam0)
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x9CD27B0045628463();
}

bool func_72(var uParam0)
{
	return (unk_0x9CD27B0045628463() - uParam0->f_6.f_1) >= 200;
}

bool func_73(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_74(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

var func_75()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_809, 1);
}

bool func_76()
{
	return !func_30();
}

bool func_77(bool bParam0, bool bParam1)
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

void func_78(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_79()
{
	if (func_80())
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	if (func_85(159))
	{
		if (!func_84())
		{
			return 1;
		}
	}
	if (func_85(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_81() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_81()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	switch (func_83())
	{
		case 0:
			return func_82();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_82()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_83()
{
	return Global_31959;
}

bool func_84()
{
	return Global_2714762.f_698;
}

int func_85(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_2725403;
}

bool func_87()
{
	return Global_2714762.f_693;
}

int func_88(bool bParam0)
{
	func_67(bParam0);
	if (func_66(bParam0))
	{
		if (func_52(bParam0))
		{
			if (unk_0x01BF60A500E28887(bParam0->f_1))
			{
				if (!func_49())
				{
					func_48(bParam0, 0, 0);
				}
				else
				{
					func_24(&(bParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(bParam0->f_6), 3);
		}
	}
	return 1;
}

