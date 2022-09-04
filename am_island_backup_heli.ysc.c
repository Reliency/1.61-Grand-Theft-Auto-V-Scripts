#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_96(ScriptParam_79);
	}
	while (true)
	{
		func_95();
		if (func_87())
		{
			func_84();
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			if (Global_2815059.f_444)
			{
				Local_77.f_20 = 1;
				if (unk_0x18D0456E86604654() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			func_83();
			switch (func_82(unk_0x57A3BDDAD8E5AA0A()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[unk_0x57A3BDDAD8E5AA0A()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[unk_0x57A3BDDAD8E5AA0A()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (unk_0x83CD99A1E6061AB5())
			{
				switch (func_81())
				{
					case 0:
						Local_77.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77.f_0 = 3;
	}
	if (func_6(&(Local_77.f_1.f_17)))
	{
		if (func_4(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_77.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!unk_0xADA24309FE08DACF())
		{
			Local_77.f_0 = 3;
		}
	}
	else if (unk_0xADA24309FE08DACF())
	{
		Local_77.f_0 = 3;
	}
	if (func_2())
	{
		Local_77.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1922955.f_3;
}

bool func_3()
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_77.f_1.f_15)))
				{
					if (func_4(&(Local_77.f_1.f_15), Global_262145.f_11082, 0))
					{
						func_60(3);
					}
				}
				if (func_10(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(unk_0x4F8644AF03D0E0D6(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(bool bParam0, int iParam1)
{
	if (Global_1892703[bParam0 /*599*/] == iParam1)
	{
		return func_9(bParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_10(bool bParam0, int iParam1)
{
	return BitTest(Global_2689235[bParam0 /*453*/].f_216, iParam1);
}

int func_11(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

int func_12(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_13(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	Global_2815059.f_443 = iParam0;
}

bool func_15()
{
	return Global_2815059.f_443;
}

void func_16()
{
	if (Global_2703735.f_3689)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(bool bParam0, int iParam1)
{
	if (Global_2703735.f_3572[bParam0] < iParam1)
	{
		Global_2703735.f_3572[bParam0] = iParam1;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_2703735.f_3571), bParam0);
}

void func_18()
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (unk_0x7239B21A38F536BA(unk_0x367B936610BA360C(Local_77.f_1)))
	{
		func_26(&(Local_77.f_1));
		iLocal_66++;
	}
	if (func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x18A47D074708FD68(Local_77.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x18A47D074708FD68(Local_77.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (unk_0xCF3A965906452031(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			unk_0x76B02E21ED27A469(iLocal_66);
		}
	}
	if (unk_0x1F13D5AE5CB17E17(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			unk_0xB60FEBA45333D36F(iLocal_67);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

int func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_77.f_1.f_1))
	{
		if (func_39(Local_77.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_77.f_1))
			{
				if (func_36(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					iVar1 = unk_0x367B936610BA360C(Local_77.f_1);
					if (unk_0x33F2E3FE70EAAE1D(iVar1) > 0)
					{
						unk_0x1F2AA07F00B3217A(iVar1, 0);
					}
					unk_0x4F1D4BE3A7F24601(iVar1, 127, 0);
					unk_0xA178472EBB8AE60D(iVar1);
					unk_0x2497C4717C8B881E(iVar1, true, true, false);
					unk_0xB664292EAECF7FA6(iVar1, 1);
					unk_0x710311ADF0E20730(iVar1);
					unk_0x1718DE8E3F2823CA(iVar1, true);
					func_35(iVar1, 4);
					Global_2703735.f_3690 = iVar1;
					unk_0x6B76DC1F3AE6E6A3(iVar1, Global_262145.f_11083, 0);
					if (func_34(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						iVar2 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[0 /*2*/]);
						func_29(Local_77.f_1.f_3[0 /*2*/]);
						func_28(iVar2, 0, 0, 1);
						unk_0x0EDE326D47CD0F3E(iVar2, unk_0x4F8644AF03D0E0D6());
						func_35(iVar2, 4);
						Global_2703735.f_3690.f_1[0] = iVar2;
						unk_0x262B14F48D29DE80(iVar2, 0, 1, 1, 0);
						unk_0x262B14F48D29DE80(iVar2, 2, 1, 1, 0);
						unk_0x262B14F48D29DE80(iVar2, 3, 0, 0, 0);
						unk_0x262B14F48D29DE80(iVar2, 4, 0, 0, 0);
						unk_0x262B14F48D29DE80(iVar2, 8, 0, 1, 0);
						unk_0x93376B65A266EB5F(iVar2, 1, 0, 0, false);
						unk_0x93376B65A266EB5F(iVar2, 0, 0, 0, false);
						if (func_34(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_77.f_1.f_3[1 /*2*/]);
							func_28(unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x0EDE326D47CD0F3E(unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]), unk_0x4F8644AF03D0E0D6());
							func_35(unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3690.f_1[1] = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]);
							unk_0xE532F5D78798DAAB(Local_77.f_1.f_3[1 /*2*/].f_1);
							unk_0xE532F5D78798DAAB(iVar0);
							unk_0xE532F5D78798DAAB(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0xB282DC6EBD803C75(iParam0, joaat("weapon_assaultrifle"), 300, true);
	unk_0x9F7794730795E019(iParam0, 5, true);
	unk_0x9F7794730795E019(iParam0, 3, false);
	unk_0x4D9CA1009AFBD057(iParam0, 2);
	unk_0xC7622C0D36B2FDA8(iParam0, 2);
	unk_0x3C606747B23E497B(iParam0, 2);
	unk_0x0703B9079823DA4A(iParam0, 1);
	unk_0x52D59AB61DDC05DD(iParam0, true);
	unk_0x63F58F7C80513AAD(iParam0, true);
	unk_0xF29CF591C4BF6CEE(iParam0, (fLocal_71[iParam1] + 100f));
	unk_0x9C74B0BC831B753A(iParam0, 400f);
	unk_0xFF41B4B141ED981C(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x166E7CF68597D8B5(iParam0, 250);
			unk_0x6B76DC1F3AE6E6A3(iParam0, 250, 0);
			unk_0xCEA04D83135264CC(iParam0, 250);
		}
	}
	else
	{
		unk_0x3882114BDE571AD4(iParam0, true);
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	if (!func_31(unk_0x4F8644AF03D0E0D6(), 0, 0) && !func_30())
	{
		iVar0 = Global_1837209[5];
	}
	else
	{
		iVar0 = unk_0x7DBDD04862D95F04(unk_0xD80958FC74E988A6());
	}
	unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(iParam0), iVar0);
}

bool func_30()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 0);
}

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_32(bParam0))
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

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

var func_33(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_35(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x05661B80A8C9165F(iParam0, "AttributeDamage"))
	{
		bVar0 = unk_0xA06C969B02A97298(iParam0, "AttributeDamage");
	}
	unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
	unk_0x0CE3AA5E1CA19E10(iParam0, "AttributeDamage", bVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xC0296A2EDF545E92(iParam1))
	{
		return 0;
	}
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x01C7B9B38428AEB6(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0x7239B21A38F536BA(iVar1))
	{
		*uParam0 = unk_0xB4C94523F023419C(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (unk_0x38CE16C96BD11344(*uParam0))
		{
			if (bParam13)
			{
				unk_0xF1CA12B18AEF5298(iVar1, true);
			}
			unk_0x3910051CCECDB00C(iVar1, bParam8);
			if (unk_0xC7827959479DCC78(iVar1))
			{
				if (bParam6)
				{
					unk_0xE05E81A888FA63C8(*uParam0, true);
				}
				else
				{
					unk_0xE05E81A888FA63C8(*uParam0, false);
				}
				if (bParam11)
				{
					unk_0xA8A024587329F36A(*uParam0, unk_0x4F8644AF03D0E0D6(), true);
				}
			}
			unk_0x67B2C79AA7FF5738(iVar1, bParam7);
			unk_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				unk_0xFC40CBF7B90CA77C(iVar1);
				unk_0xF2BFA0430F0A0FCB(iVar1, 5, 5, 1f);
			}
			func_37(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_38(unk_0x4F8644AF03D0E0D6(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && unk_0x2A488C176D52CCA5(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_38(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x73D57CFFDD12C355((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_40()
{
	struct<3> Var0;
	
	if (func_59(Local_77.f_1.f_8))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Var0 = { func_57(func_58(unk_0x4F8644AF03D0E0D6()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_77.f_1.f_13) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = unk_0x29C24BFBED8AB8FB(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x083961498679DC9F(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_50(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_42(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_49(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF1B760881820C952(func_47(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam1))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_49(bVar1, 1, 1))
		{
			if (!func_44(bVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_43(bVar1) || !bParam8) && !Global_2689235[bVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(bVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x37039302F4E0A008(bVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_47(bVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(bVar1) != iParam6 || unk_0x37039302F4E0A008(bVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_47(bVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(bool bParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_44(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1574918;
}

Vector3 func_47(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_48() && Global_1853348[iVar0 /*834*/].f_804) && !func_59(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_58(bParam0);
}

var func_48()
{
	return Global_2714762.f_19;
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
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

int func_50(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x4F8644AF03D0E0D6() != bVar1) || iParam6 == 0)
		{
			if (func_49(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
				{
					if (!bParam5 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(bVar1)) && func_43(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(bVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam7) && bParam4) && func_51(bVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(bVar1)))
							{
								if (unk_0xF1B760881820C952(func_58(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(bool bParam0)
{
	if (func_56(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_55(bParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2787505))
	{
		return 1;
	}
	if (func_52(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_54(bParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_53();
}

struct<13> func_55(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

int func_56(bool bParam0, bool bParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2787505 = { func_55(bParam0) };
		Global_2787518 = { func_55(bParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2787505))
		{
			if (unk_0xB124B57F571D8F18(&Global_2787518))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2787435, 35, &Global_2787505);
				unk_0xEEE6EACBE8874FBA(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_57(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = unk_0xD0FFB162F40A139C(fVar1);
	fVar3 = unk_0x0BADBFA3B172435F(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

Vector3 func_58(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

int func_59(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()
{
	func_67();
	func_62();
}

void func_62()
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_61))
	{
		unk_0x86A652570E5F25DD(&iLocal_61);
	}
}

void func_64()
{
	int iVar0;
	
	iVar0 = unk_0x367B936610BA360C(Local_77.f_1);
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_61) && unk_0x7239B21A38F536BA(iVar0))
	{
		iLocal_61 = unk_0x5CDE92C702A8FCE7(iVar0);
		unk_0xDF735600A4696DAF(iLocal_61, 422);
		unk_0x75A16C3DA34F1245(iLocal_61, false);
		unk_0xEAA0FFE120D92784(iLocal_61, "MPCT_MERRY3");
		func_65(&iLocal_61, 1);
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		iVar0 = func_66(iParam1);
		unk_0x03D7FB09E75D6B7E(*iParam0, iVar0);
	}
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x7C9C91AB74A0360F(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_77.f_1))
			{
				iVar1 = unk_0x367B936610BA360C(Local_77.f_1);
				func_64();
				if (func_80(Local_77.f_1))
				{
					if (unk_0x4D36070FE0215186(Local_77.f_1))
					{
						if (unk_0x99015ED7DBEA5113(iVar1))
						{
							if (func_79())
							{
								if (!unk_0xC0F97FCE55094987(iVar1))
								{
									unk_0x14E85C5EE7A4D542(iVar1, true, false);
								}
							}
							else if (unk_0xC0F97FCE55094987(iVar1))
							{
								unk_0x14E85C5EE7A4D542(iVar1, false, false);
							}
						}
					}
				}
				func_69();
				if (unk_0x38CE16C96BD11344(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[0 /*2*/]);
					if (!unk_0x84A2DD9AC37C35C1(iVar0))
					{
						iVar2 = unk_0x534AEBA6E5ED4CAB(iVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									unk_0x9F8AA94D6D97DBF4(iVar0, true);
									func_28(iVar0, 0, 0, 0);
									unk_0xA178472EBB8AE60D(iVar1);
									unk_0x2497C4717C8B881E(iVar1, true, true, false);
									if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
									{
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
										{
											unk_0xDAD029E187A2BEB4(iVar0, iVar1, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_71[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x38CE16C96BD11344(Local_77.f_1.f_3[1 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]);
					if (!unk_0x84A2DD9AC37C35C1(iVar0))
					{
						if (!unk_0x4859F1FC66A6278E(iVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									unk_0x9F8AA94D6D97DBF4(iVar0, false);
									func_28(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_77.f_1.f_17)))
			{
				func_5(&(Local_77.f_1.f_17), 0, 0);
			}
			if (func_12(Local_77.f_1))
			{
				iVar1 = unk_0x367B936610BA360C(Local_77.f_1);
				if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_77.f_1))
						{
							if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[0 /*2*/]))
							{
								unk_0x9F8AA94D6D97DBF4(iVar0, false);
								unk_0xE1EF3C1216AFF2CD(iVar0);
								unk_0xC80A74AC829DDD92(iVar0, Global_1837194);
								if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
								{
									if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
									{
										unk_0xDAD029E187A2BEB4(iVar0, iVar1, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										unk_0x971D38760FBC02EF(iVar0, true);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]);
						if (func_80(Local_77.f_1))
						{
							if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[1 /*2*/]))
							{
								unk_0xE1EF3C1216AFF2CD(iVar0);
								unk_0x9F8AA94D6D97DBF4(iVar0, true);
								unk_0x971D38760FBC02EF(iVar0, true);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()
{
	int iVar0;
	
	if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[0 /*2*/]))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[0 /*2*/]);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x4D36070FE0215186(Local_77.f_1.f_3[1 /*2*/]))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[1 /*2*/]);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0, 0);
			}
		}
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!Global_1958700)
	{
		return;
	}
	if (!unk_0x4D36070FE0215186(Local_77.f_1))
	{
		return;
	}
	iVar0 = unk_0x367B936610BA360C(Local_77.f_1);
	if (func_78(iVar0))
	{
		return;
	}
	if (!func_77(iVar0))
	{
		return;
	}
	if (iLocal_75 == func_53())
	{
		func_71();
		return;
	}
	iVar1 = unk_0x43A66C31C68491C0(iLocal_75);
	if (!func_6(&uLocal_73))
	{
		if (bLocal_75 != func_53() && func_77(iVar1))
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iVar1, true), unk_0x3FEF770D40960D5A(iVar0, true), false) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_73, Global_1958699, 0))
	{
		return;
	}
	func_70(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar5 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (func_77(iVar5) && unk_0x4859F1FC66A6278E(iVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		bLocal_75 = func_53();
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar1 = unk_0x4F8644AF03D0E0D6();
	iVar3 = unk_0xBDCD95FC216A8B3E(Local_77.f_1.f_3[0 /*2*/]);
	iVar4 = unk_0x367B936610BA360C(Local_77.f_1);
	bVar5 = func_74(unk_0x4F8644AF03D0E0D6());
	iVar6 = unk_0x43A66C31C68491C0(bVar5);
	bLocal_75 = func_53();
	iLocal_76++;
	iLocal_76 = func_73(iLocal_76, 32);
	bVar0 = iLocal_76;
	if (bVar0 == func_53())
	{
		return;
	}
	if (bVar0 == bLocal_75)
	{
		return;
	}
	if (!func_49(bVar0, 1, 1))
	{
		return;
	}
	iVar2 = unk_0x43A66C31C68491C0(bVar0);
	if (!func_77(iVar2))
	{
		return;
	}
	if (func_77(iVar6))
	{
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iVar6, true), unk_0x3FEF770D40960D5A(iVar2, true), false) > Global_1958701)
		{
			return;
		}
	}
	if (func_52(bVar1, bVar0) || func_72(bVar1, bVar0, -2, 0))
	{
		unk_0xDAD029E187A2BEB4(iVar3, iVar4, 0, iVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_71[0]), 10, -1f, 0);
		bLocal_75 = bVar0;
	}
}

bool func_72(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(bParam0) == -1 && unk_0x37039302F4E0A008(bParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(bParam0) == unk_0x37039302F4E0A008(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(bParam0) == iParam2;
	}
	return unk_0x37039302F4E0A008(bParam0) == iParam2;
}

int func_73(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(bool bParam0)
{
	if (func_75(bParam0, 1))
	{
		return Global_1892703[func_54(bParam0) /*599*/].f_10.f_462;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_53();
}

int func_76(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_53())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
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

int func_79()
{
	if (unk_0x25223CA6B4D20B7F() >= 22)
	{
		return 1;
	}
	if (unk_0x25223CA6B4D20B7F() <= 6 && unk_0x25223CA6B4D20B7F() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (unk_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		unk_0xA670B3662FAFFBD0(iParam0);
	}
	return 0;
}

int func_81()
{
	return Local_77.f_0;
}

int func_82(bool bParam0)
{
	return iLocal_78[bParam0];
}

void func_83()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(unk_0x4F8644AF03D0E0D6()) };
		fLocal_68 = unk_0x29C24BFBED8AB8FB(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11084)
		{
			fLocal_68 = Global_262145.f_11084;
		}
		func_70(&uLocal_69);
	}
}

void func_84()
{
	if (unk_0x7239B21A38F536BA(Global_2703735.f_3690.f_1[0]))
	{
		unk_0x9614299DCB53E54B(&(Global_2703735.f_3690.f_1[0]));
	}
	if (unk_0x7239B21A38F536BA(Global_2703735.f_3690.f_1[1]))
	{
		unk_0x9614299DCB53E54B(&(Global_2703735.f_3690.f_1[1]));
	}
	if (unk_0x7239B21A38F536BA(Global_2703735.f_3690))
	{
		unk_0xEA386986E786A54F(&(Global_2703735.f_3690));
	}
	Global_2703735.f_3690.f_5 = 0f;
	Global_2703735.f_3690.f_6 = 0;
	Global_2703735.f_3690.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()
{
	unk_0x1090044AD1DA76FA();
}

void func_86(int iParam0)
{
	Global_2815059.f_444 = iParam0;
}

int func_87()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()
{
	return Global_31959;
}

bool func_91()
{
	return Global_2714762.f_698;
}

int func_92(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2725403;
}

bool func_94()
{
	return Global_2714762.f_693;
}

void func_95()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_96(struct<21> Param0)
{
	func_86(0);
	func_100(32, Param0);
	unk_0xB60FEBA45333D36F(2);
	unk_0x76B02E21ED27A469(1);
	func_98(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_77, 21, 0);
	unk_0x3364AA97340CA215(&iLocal_78, 33, 0);
	unk_0xAA391C728106F7AF(false);
	if (!func_97())
	{
		func_84();
	}
	if (unk_0xADA24309FE08DACF())
	{
		bLocal_62 = true;
	}
	bLocal_75 = unk_0x4F8644AF03D0E0D6();
	iLocal_78[unk_0x57A3BDDAD8E5AA0A()] = 0;
}

int func_97()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_99(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
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
					func_85();
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
				func_85();
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
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_100(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_85();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

