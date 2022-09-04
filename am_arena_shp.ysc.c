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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x10FAB35428CCC9D7())
	{
		func_50(ScriptParam_87);
	}
	else
	{
		func_48();
	}
	while (true)
	{
		func_47();
		if (Global_262145.f_24104)
		{
			func_48();
		}
		if (func_39())
		{
			func_48();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4535591)
	{
		if (Global_4539666[iLocal_21 /*12*/].f_11)
		{
			func_36(iLocal_21);
			Global_4539666[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4535592) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4534105[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_48();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f)));
		if ((unk_0xFC8202EFC642E6F2() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (unk_0xFC8202EFC642E6F2() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!unk_0xB24F0944DA203D9E(func_11()) || unk_0x810E8431C0614BF9())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !unk_0x3C5FD37B5499582E(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x39BE7CEA8D9CC8E6(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_48();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0x03B504CF259931BC(uParam0->f_34);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x6C188BE134E074AA(&(uParam0->f_17));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0x03B504CF259931BC(uParam0->f_34);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x6C188BE134E074AA(&(uParam0->f_17));
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x1115F16B8AB9E8BF(uParam0->f_33, 70);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574918;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4535594;
			break;
		
		case 1:
			return Global_4535593;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

bool func_14()
{
	return Global_100493.f_376 > 0;
}

void func_15(bool bParam0)
{
	unk_0x10D373323E5B9C0D();
	if (bParam0)
	{
		unk_0xC65AB383CD91DF98();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0.f_0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_35(Var0.f_0, &Var4);
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4534105[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4534105[iVar3 /*85*/].f_66.f_18 = unk_0xFC8202EFC642E6F2();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4535579.f_4 = Var0.f_2;
			Global_4535579.f_6 = Var0.f_3;
			Global_4535579.f_7 = Var0.f_4;
			Global_4535579.f_8 = Var0.f_5;
			Global_4535579.f_9 = Var0.f_6;
			if (Global_4535579.f_10 == 0)
			{
				Global_4535579.f_10 = unk_0xFC8202EFC642E6F2();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4539666[iVar3 /*12*/] = Global_4534105[iVar3 /*85*/].f_66.f_3;
					Global_4539666[iVar3 /*12*/].f_1 = Global_4534105[iVar3 /*85*/].f_66.f_7;
					Global_4539666[iVar3 /*12*/].f_2 = Global_4534105[iVar3 /*85*/].f_66.f_4;
					Global_4539666[iVar3 /*12*/].f_3 = Global_4534105[iVar3 /*85*/].f_66.f_1;
					Global_4539666[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4539666[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4539666[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4539666[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4539666[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4539666[iVar3 /*12*/].f_11 = 1;
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0xE1A0450ED46A7812(Global_4534105[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4534105[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4534105[iVar3 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4534105[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
								Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
								Global_4535612 = Var0.f_2;
								Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4535609) && func_13())
								{
									if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4535466[iVar7 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
										Global_4535466[iVar7 /*7*/].f_2 = Global_4535609;
										Global_4535466[iVar7 /*7*/].f_3 = Global_4535611;
										Global_4535466[iVar7 /*7*/].f_1 = Global_4535610;
										Global_4535466[iVar7 /*7*/].f_4 = unk_0x7A5487FE9FAA6B48();
									}
								}
								else
								{
									Global_4535606 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4534105[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
							Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
							Global_4535612 = Var0.f_2;
							Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4535609) && func_13())
							{
								if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4535466[iVar8 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
									Global_4535466[iVar8 /*7*/].f_2 = Global_4535609;
									Global_4535466[iVar8 /*7*/].f_3 = Global_4535611;
									Global_4535466[iVar8 /*7*/].f_1 = Global_4535610;
									Global_4535466[iVar8 /*7*/].f_4 = unk_0x7A5487FE9FAA6B48();
								}
							}
							else
							{
								Global_4535606 = 1;
							}
						}
					}
					else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
						Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
						Global_4535612 = Var0.f_2;
						Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4535609) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4535466[iVar9 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
								Global_4535466[iVar9 /*7*/].f_2 = Global_4535609;
								Global_4535466[iVar9 /*7*/].f_3 = Global_4535611;
								Global_4535466[iVar9 /*7*/].f_1 = Global_4535610;
								Global_4535466[iVar9 /*7*/].f_4 = unk_0x7A5487FE9FAA6B48();
							}
						}
						else
						{
							Global_4535606 = 1;
						}
					}
					if (Global_4534105[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4534105[iVar3 /*85*/].f_66.f_4);
							Global_4535606 = 0;
						}
						if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4534105[iVar3 /*85*/].f_66.f_4, Global_4534105[iVar3 /*85*/].f_66.f_10, Global_4534105[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_11()) || unk_0x810E8431C0614BF9())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x39BE7CEA8D9CC8E6(Global_4534105[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4534105[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4534105[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4534105[*iParam0 /*85*/].f_66.f_14 = unk_0xFC8202EFC642E6F2();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4534105[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4534105[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4534105[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4535466;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4535466[iVar0 /*7*/] != 0 && Global_4535466[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4535466;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4535466[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4535466[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4535466[iVar0 /*7*/].f_4 = unk_0x7A5487FE9FAA6B48();
			Global_4535466[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976) || iParam0 == -518651910) || iParam0 == 14658715) || iParam0 == -604793592) || iParam0 == -823426392) || iParam0 == -1401862980) || iParam0 == -173354274) || iParam0 == 409533976) || iParam0 == -1472522337) || iParam0 == 542574408) || iParam0 == -1261799063) || iParam0 == 784631574) || iParam0 == -2027479156) || iParam0 == -837690641) || iParam0 == -1029672338) || iParam0 == -1503749970) || iParam0 == -1843409092) || iParam0 == 1669058563) || iParam0 == 2102747615) || iParam0 == 2030771998) || iParam0 == 1708747007) || iParam0 == 645293860) || iParam0 == -818859193) || iParam0 == 300796227) || iParam0 == -1999832346) || iParam0 == 1058055395) || iParam0 == -321151125) || iParam0 == 2078731875) || iParam0 == 1280785534) || iParam0 == -1878824774) || iParam0 == 247992227) || iParam0 == -229237358) || iParam0 == -1123183389) || iParam0 == 1814197076) || iParam0 == 713955548) || iParam0 == -2026544524) || iParam0 == -719580138) || iParam0 == -163417439) || iParam0 == -550417574) || iParam0 == 208223429) || iParam0 == -1433071892) || iParam0 == 761999406) || iParam0 == -1101941763) || iParam0 == 1748245957) || iParam0 == 1036772696) || iParam0 == -1384648535) || iParam0 == -800037808) || iParam0 == -695852120) || iParam0 == 77355315) || iParam0 == 2097889166) || iParam0 == 1707592130) || iParam0 == 1628412596)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_11()) || unk_0x810E8431C0614BF9())
		{
			if (func_29(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x39BE7CEA8D9CC8E6(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = unk_0xFC8202EFC642E6F2();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0xA40CC53DF8E50837(1, &Var0, 36, iVar1);
	}
}

void func_26()
{
	unk_0x6EB5F71AA68F2E8E("AM_ARENA_SHP");
}

var func_27(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x933D6A9EEC1BACD0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var3;
	var uVar4;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x9507D4271988E1AE(func_28(iParam0));
	if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	func_34(&Var3);
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			unk_0xE7DF4E0545DFB56E(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -180141073:
			unk_0x2E2B0A3651E8DCC2(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0, 0);
			break;
		
		case 68030260:
			unk_0x9FF28D88C766E3E8(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case -982394051:
			unk_0x6B38ECB05A63A685(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 454359403:
			unk_0xEE99784E4467689C(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, Global_4534105[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case -1586170317:
			unk_0xD20D79671A598594(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			unk_0x7FE61782AD94CC09(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 1654961868:
			unk_0xACDE7185B374177C(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case 1182673174:
			unk_0xEC03C719DB2F4306(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 563463121:
			unk_0xB1CC1B9EC3007A2A(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			unk_0x9346E14F2AF74D46(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -1389227906:
			unk_0x9346E14F2AF74D46(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -516219046:
			unk_0xD9B067E55253E3DD(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1398318418:
			unk_0x827A5BA1A44ACA6D(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			unk_0x289016EC778D60E0(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 277665518:
			unk_0x812F5488B1B2A299(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1077156170:
			unk_0x6EA318C91C1A8786(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			unk_0x29B260B84947DFCC(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 742499889:
			unk_0xD99DB210089617FE(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			unk_0xDBC966A01C02BCA7(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			unk_0x08A1B82B91900682(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			unk_0xFC4EE00A7B3BFB76(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1027218631:
			unk_0xB2CC4836834E8A98(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			unk_0xC8407624CEF2354B(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			unk_0xF0077C797F66A355(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 14, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		
		case 1612072658:
			unk_0xDC639BE2424A7A98(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		
		case -990286235:
			unk_0x131BB5DA15453ACF(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), &(Global_4534105[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			unk_0xA03D4ACE0A3284CE(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0xED1517D3AF17C698(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			unk_0xF514621E8EA463D0(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			unk_0x45B8154E077D9E4D(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			unk_0x5FD5ED82CBBE9989(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -585718395:
			unk_0x1254B5B3925EFD3D(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &Global_4539876);
			break;
		
		case -2129781826:
			unk_0xB49ECA122467D05F(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1941570214:
			unk_0x0FE8E1FCD2B86B33(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1869490922:
			unk_0xD7CCCBA28C4ECAF0(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -336803850:
			unk_0xD7CCCBA28C4ECAF0(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -1412692765:
			unk_0xD7CCCBA28C4ECAF0(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 618167454:
			unk_0xD7CCCBA28C4ECAF0(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 980623936:
			unk_0xD7CCCBA28C4ECAF0(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			unk_0xF9C812CD7C46E817(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), &(Global_4534105[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		
		case 312105838:
			unk_0x02CE1D6AC0FC73EA(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0x8A7B3952DD64D2B5(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0, 0);
			break;
		
		case 1839532116:
			unk_0xFD06E55DAF765B32(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 941287179:
			unk_0xF92A014A634442D6(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			unk_0x515B4A22E4D3C6D7(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			unk_0x8204DA7934DF3155(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1834046564:
			unk_0x633310C9B4B8972C(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		
		case 393059668:
			unk_0x61326EE6DF15B0CA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			unk_0x2B171E6B2F64D8DF(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), Global_4534105[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			unk_0x4337511FA8221D36(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			unk_0x9346E14F2AF74D46(Global_4534105[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		
		case -1359375127:
			unk_0xB21B89501CFAC79E(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case 283351220:
			unk_0xF0077C797F66A355(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		
		case -2085313189:
			switch (Global_4534105[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					unk_0xF0077C797F66A355(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0x1C436FD11FFA692F(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, &(Global_4534105[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		
		case 1620609399:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x08B0CA7A6AB3AC32(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			unk_0xCDA1C62BE2777802(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			unk_0x0CB1BE0633C024A8(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			unk_0xECA658CE2A4E5A72(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			unk_0x84C0116D012E8FC2(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			unk_0xE8B0B270B6E7C76E(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0x05F04155A226FBBF(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x5BCDE0F640C773D2(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			unk_0x0035BB914316F1E3(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			unk_0xEDEAD9A91EC768B3(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			unk_0xA75CCF58A60A5FD1(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			unk_0xC1952F3773BA18FE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0xDEE612F2D71B0308(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			unk_0x005ACA7100BD101D(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			unk_0x771E4AB5C79C58E6(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 599804707:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0x718FBBF67414FA36(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			unk_0x6816FB4416760775(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			unk_0x9D4FDBB035229669(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			unk_0x11B0A20C493F7E36(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			unk_0x5BBBD92186E1F1C5(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			unk_0x5B669CF2299A271F(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			unk_0x5B669CF2299A271F(Global_4534105[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			unk_0x2DCB19ABAB0380A8(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -722894325:
			unk_0x15BB2A5C757EB91F(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			unk_0xED26584F6BDCBBFD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0xA9160796D47A2CF8(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			unk_0x1C121FC9545E0D52(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			unk_0xA9A31475F530DFDA(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x2597A0D4A4FC2C77(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x2597A0D4A4FC2C77(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x2597A0D4A4FC2C77(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0x128A747F4A230952(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			unk_0xDA947AE8880D5C18(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0xA19EC0786E326E06(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -2015399333:
			unk_0xF6B170F9A02E9E87(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0x41BD2A6B006AF756(Global_4534105[iParam0 /*85*/]), 0, 0))
			{
				unk_0x876056684281655D(unk_0x41BD2A6B006AF756(Global_4534105[iParam0 /*85*/]), Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		
		case 1678112166:
			unk_0xF6C8A544E4CF14FC(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		
		case -1143510182:
			unk_0xDD21B016E4289465(Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -1574795641:
			unk_0x42FCE14F50F27291(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			unk_0xA75EAC69F59E96E7(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1135468152:
			unk_0xC5156361F26E2212(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			unk_0x0B39CF0D53F1C883(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			unk_0x1FDA0AA679C9919B(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			unk_0xFFFBA1B1F7C0B6F4(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			unk_0x14EAEA58F93B55AF(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		
		case 403506509:
			unk_0xFDD8D2440DAF1590(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			unk_0xE08256F972C7BB2C(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0x0F99F70C61F14619(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			unk_0x7049BF858601DC0F(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		
		case 1815541181:
			unk_0xE5F5A060439C2F5D(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case -561012053:
			unk_0x676C48776CACBB5A(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			unk_0x9A5BD1D0000B339C(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		
		case 1240683675:
			unk_0x5E7AE8AABE8B7C0D(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			unk_0x631F1CB8FB4130AA(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			unk_0xDFF49EE984E7AAE8(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			unk_0x5128DF14A5BB86FC(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			unk_0x5517F90043466049(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			unk_0x566FD402B25787DE(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			unk_0xAC95ED552157E092(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			unk_0x973A9781A34F8DEB(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			unk_0x88BF9B612B84D3C3(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0xEAD3D81F2C3A1458(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			unk_0x43AA7FAC4E6D6687(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			unk_0x487009DD91D93429(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0xD30E8392F407C328(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0xD30E8392F407C328(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			unk_0xD30E8392F407C328(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0xD30E8392F407C328(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			unk_0x72E7C7B9615FA3C3(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			unk_0x72E7C7B9615FA3C3(Global_4534105[iParam0 /*85*/].f_66.f_1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			unk_0x72E7C7B9615FA3C3(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0x3EC7471E6909798A(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0x3EC7471E6909798A(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0xC0DE18944A7A9044(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -842062976:
			unk_0x5C9B198AF5A54FA6(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1896606724:
			Var3.f_0 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1291433573:
			Var3.f_1 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 538631715:
			Var3.f_2 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 133782822:
			Var3.f_3 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 2081885153:
			Var3.f_4 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1314365345:
			Var3.f_5 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1322977732:
			Var3.f_6 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 396623013:
			Var3.f_7 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1981664462:
			unk_0x54ABA22FA6371249(Global_4534105[iParam0 /*85*/]);
			break;
		
		case -518651910:
		case 14658715:
			unk_0x83AD64F53F4E9483(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
			unk_0xD21D111C46BA9F15(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		
		case -837690641:
			unk_0xD21D111C46BA9F15(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1029672338:
			unk_0xE2BB399D90942091(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1921250821:
			unk_0x6C8BC1488527AAAB(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -1370731547:
			unk_0x6C8BC1488527AAAB(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 1683798242:
			unk_0x6C8BC1488527AAAB(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -910968288:
			unk_0xC991C255AA6D90B2(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		
		case -1503749970:
			unk_0xBCB266247193AC61(Global_4534105[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1843409092:
			unk_0xBCB266247193AC61(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, unk_0xD24D37CC275948CC(&(Global_4534105[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case 1669058563:
			unk_0xBC6227792A188E2E(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2102747615:
			unk_0x533073E8A596008C(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 2030771998:
			unk_0xFE65AFE7308E32B2(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			unk_0xB846F547D3792DF6(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_44));
			break;
		
		case 1051883823:
			unk_0x93AA4165CB67E925(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1280785534:
			unk_0x5AA4C7A11447C2FD(Global_4534105[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case -168319378:
			unk_0xB40F96D6D252839B(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4539859);
			break;
		
		case -1878824774:
			unk_0x38482AD49CB905C7(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 247992227:
			unk_0xE29F3D5FA63B1B82(Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -229237358:
			unk_0x6283E5DE4C4460C6(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1123183389:
			unk_0xBA154373C5FE51E8(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1814197076:
			unk_0x146D4EB6D22A403F(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 713955548:
			unk_0x7397A115030F1BE3(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -2026544524:
			unk_0x88D6C327D6C57C45(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -719580138:
			unk_0x5B4DBDED84D6A420(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -163417439:
			unk_0x235D41210B3A1A5E(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1658225921:
			unk_0xEBD482B82ACB8BAD(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -551835600:
			unk_0xD9DF467CBE4398C8(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1230687625:
			unk_0xBF8793B91EA094A7(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -550417574:
			unk_0xF4A8E57460BF2037(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1637817605:
			unk_0x1B2120405080125C(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 830018386:
			unk_0xD86581F9E7CDA383(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1433071892:
			unk_0xA75EAC69F59E96E7(Global_4534105[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case -2013760296:
			unk_0x2CEB0E0BC2A77C05(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 761999406:
			unk_0x45087AE480B233AC(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1033889004:
			unk_0x02D24A35A9CC3503(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
			unk_0xFB6DB092FBAE29E6(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case 1628412596:
			unk_0x59498BC8B1C8B15C(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0xE1A0450ED46A7812(Global_4534105[iParam0 /*85*/].f_66, &uVar4);
		}
	}
	func_7(iParam0);
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
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

void func_34(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_35(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4534105[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_36(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4539666[iParam0 /*12*/].f_1 == Global_4539666[iParam0 /*12*/].f_6)
	{
		if (Global_4539666[iParam0 /*12*/].f_1 != 1445302971 && Global_4539666[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0xD24D37CC275948CC(sVar2);
	iVar0 = (iVar0 || func_38());
	iVar0 = (iVar0 + Global_4537615);
	func_37(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0xE80492A9AC099A93(&iVar0, 28);
	unk_0xE80492A9AC099A93(&iVar0, 29);
	unk_0xE80492A9AC099A93(&iVar0, 26);
	iVar3 = (Global_4539666[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4539666[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4539666[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4539666[iParam0 /*12*/] != Global_4539666[iParam0 /*12*/].f_5 || Global_4539666[iParam0 /*12*/].f_1 != Global_4539666[iParam0 /*12*/].f_6) || Global_4539666[iParam0 /*12*/].f_2 != iVar5) || Global_4539666[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110088 = 1;
	}
}

int func_37(var uParam0)
{
	*uParam0 = unk_0xEDD95A39E5544DE8(1, 2);
	return 5410420;
}

int func_38()
{
	return unk_0xEDD95A39E5544DE8(1, 25);
}

int func_39()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_46())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44(159))
	{
		if (!func_43())
		{
			return 1;
		}
	}
	if (func_44(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_40() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_40()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_40()
{
	switch (func_42())
	{
		case 0:
			return func_41();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_41()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_42()
{
	return Global_31959;
}

bool func_43()
{
	return Global_2714762.f_698;
}

int func_44(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2725403;
}

bool func_46()
{
	return Global_2714762.f_693;
}

void func_47()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_48()
{
	func_49();
}

void func_49()
{
	unk_0x1090044AD1DA76FA();
}

void func_50(struct<34> Param0)
{
	if (Global_262145.f_24104)
	{
		func_48();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4534105[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_48();
	}
	if (!func_51(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_48();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_51(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4534105[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

