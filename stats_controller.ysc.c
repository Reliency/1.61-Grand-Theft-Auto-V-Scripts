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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	unk_0x9243BAC96D64C050();
	if (unk_0xC968670BFACE42D9(32))
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
			
			case 1:
				func_90();
				func_2();
				Global_97725 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(false);
	}
}

void func_1()
{
	iLocal_54 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_85();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_84(64)) || (iLocal_55 == 5 && unk_0x2C83A9DA6BFFC4F9(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_78();
	if (Global_97723 || (Global_97724 && !func_75(0)))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_74(iLocal_58, iVar2);
				iVar2++;
			}
			Global_97723 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || (!unk_0x10FAB35428CCC9D7() && !func_73(iLocal_58))) || unk_0xD9D2CFFF49FAB35F()) || func_72()) || unk_0xD3C2E180A40F031E()) || unk_0xB16FCE9DDC7BA182()) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || Global_78317) || Global_97725) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_84 = unk_0x7A5487FE9FAA6B48();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_83) > 3000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_56) > 2000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_57 = unk_0x7A5487FE9FAA6B48();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_71(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x10FAB35428CCC9D7())
			{
				bVar3 = func_70(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				bVar3 = Global_113386.f_2363.f_539.f_2387[iLocal_58];
			}
			else
			{
				unk_0x767FBC2AC802EF3D(iVar6, &bVar3, -1);
			}
			iVar5 = bVar3;
			bVar3 = func_69(bVar3, 0, 100);
			if (func_56(iLocal_58, iVar8, bVar3, &bVar4))
			{
				if (unk_0x10FAB35428CCC9D7())
				{
					func_55(iVar7, bVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_113386.f_2363.f_539.f_2387[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = bVar4;
				}
				else
				{
					unk_0xB3271D7AB655B441(iVar6, bVar4, true);
				}
				if (bVar4 > func_53(iLocal_58, iVar8, -1))
				{
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05095437424397FA() && BitTest(Global_4718592.f_39, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_113386.f_9085 && !func_52(0)) || !BitTest(Global_113386.f_9085.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					bVar14 = bVar4;
					iVar15 = (bVar14 - (bVar14 % func_51(iLocal_58, iVar8)));
					if ((bVar14 % func_51(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_51(iLocal_58, iVar8));
					}
					if (bVar14 >= iVar15)
					{
						bVar14 = iVar15;
					}
					else
					{
						bVar14 = (iVar15 - func_51(iLocal_58, iVar8));
					}
					if (bVar4 > bVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x10FAB35428CCC9D7())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0x4D79439A6B55AC67() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (bVar4 - bVar3);
							iLocal_64 = (iLocal_64 + (bVar3 % func_51(iLocal_58, iVar8)));
							bLocal_65 = bVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (bVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp0_total_playing_time"), &bVar10, -1);
								unk_0xB3271D7AB655B441(iVar9, bVar10, true);
							}
							else if (iLocal_58 == 1)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp1_total_playing_time"), &bVar10, -1);
								unk_0xB3271D7AB655B441(iVar9, bVar10, true);
							}
							else if (iLocal_58 == 2)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp2_total_playing_time"), &bVar10, -1);
								unk_0xB3271D7AB655B441(iVar9, bVar10, true);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_74(iLocal_58, iVar8);
			}
			else if (bVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x10FAB35428CCC9D7())
				{
					func_55(iVar7, bVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = bVar4;
					bVar16 = false;
				}
				else
				{
					unk_0xB3271D7AB655B441(iVar6, bVar4, true);
				}
				if (bVar16)
				{
					func_74(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_5(bParam2)];
		if (iVar0 != 0)
		{
			unk_0x4B33C4243DE0C432(iVar0, bParam1, bParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1574918;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_9()
{
	int iVar0;
	
	iVar0 = unk_0xFC8202EFC642E6F2();
	if (Global_1931615 == iVar0)
	{
		return Global_1931616;
	}
	else
	{
		Global_1931615 = iVar0;
		Global_1931616 = 0;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0x05095437424397FA() && BitTest(Global_4718592.f_39, 19))
		{
			return 0;
		}
	}
	if ((unk_0xA86478C6958735C5() && unk_0x157F93B036700462()) && !func_44(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (Global_1931617 == 1)
	{
		return 0;
	}
	if (Global_1931426 == 1)
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (unk_0x2272B0A1343129F4())
	{
		return 0;
	}
	if (Global_1836571 == 1)
	{
		return 0;
	}
	if (unk_0x7A3F19700A4D0525())
	{
		return 0;
	}
	if (Global_1057410)
	{
		return 0;
	}
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 16))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2727875, 300000, 0) == 1)
				{
					func_36(&Global_2727873);
					func_34(3, -1);
				}
				else if (func_37(&Global_2727873, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (unk_0x6CC27C9FA2040220())
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x5E346D934122613F())
	{
		if (func_26(unk_0xD80958FC74E988A6()) == joaat("weapon_sniperrifle") || func_26(unk_0xD80958FC74E988A6()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (unk_0xBC4C9EA5391ECC0D(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 2))
	{
		return 0;
	}
	if (Global_1836363)
	{
		return 0;
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (Global_1836369)
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2815059.f_4032)
	{
		return 0;
	}
	if (Global_2703735.f_3446)
	{
		return 0;
	}
	if (!func_19(unk_0x4F8644AF03D0E0D6(), 1, 0))
	{
		return 0;
	}
	if (func_18(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39 == 1)
	{
		return 0;
	}
	if (Global_2715699.f_2846.f_26 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (unk_0xBC4C9EA5391ECC0D(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0xDAD37F45428801AE())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 6))
	{
		return 0;
	}
	if (func_10(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	Global_1931616 = 1;
	return 1;
}

int func_10(bool bParam0)
{
	if (bParam0 != func_11())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

bool func_12(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_13()
{
	return Global_2703735.f_1571.f_701 != 0;
}

bool func_14()
{
	return Global_2703735.f_2724.f_582;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1641031.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

bool func_18(bool bParam0)
{
	return BitTest(Global_1888862[bParam0 /*120*/].f_14, 0);
}

int func_19(bool bParam0, bool bParam1, bool bParam2)
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

int func_20()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22()
{
	return Global_1648034.f_112;
}

bool func_23()
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

int func_24(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1648034.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1648034.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (BitTest(Global_1648034.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1648034.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
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

int func_26(bool bParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(bParam0, &uVar0, true);
	return uVar0;
}

bool func_27()
{
	return Global_2714762.f_692;
}

bool func_28()
{
	return BitTest(Global_1048576.f_10, 13);
}

bool func_29()
{
	return Global_2714762.f_691;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1574632.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1 == -1)
	{
		bParam1 = func_6();
	}
	Global_1659608 = 0;
	if (unk_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			unk_0x0D01D20616FC73FB(0, bParam1);
			iVar1 = func_35(bParam1);
			iVar0 = unk_0xC488FF2356EA7791(iVar1);
			break;
		
		default:
			iVar1 = func_35(bParam1);
			iVar0 = unk_0xC488FF2356EA7791(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0x933D6A9EEC1BACD0(&iVar0, bParam0);
				unk_0x0D01D20616FC73FB(iVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, bParam1, 1);
			func_4(124, 0, bParam1, 1);
			func_4(115, 0, bParam1, 1);
			func_4(119, 0, bParam1, 1);
			func_4(121, 0, bParam1, 1);
			func_4(122, 0, bParam1, 1);
			func_4(125, 0, bParam1, 1);
			func_55(1304, 0, bParam1, 1, 0);
			func_55(7236, 0, bParam1, 1, 0);
			break;
	}
}

int func_35(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == -1)
	{
		bParam0 = func_6();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0xC488FF2356EA7791(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_40()
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

bool func_41()
{
	return Global_1575058;
}

bool func_42()
{
	return Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_192 != 0;
}

bool func_43()
{
	return Global_2788198;
}

bool func_44(bool bParam0)
{
	return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 13);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	if (!func_49(1))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	return Global_1943916;
}

bool func_47()
{
	return func_48(unk_0x4F8644AF03D0E0D6());
}

int func_48(bool bParam0)
{
	if (bParam0 != func_11())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_11())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

bool func_49(bool bParam0)
{
	return func_50(unk_0x4F8644AF03D0E0D6(), bParam0);
}

bool func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_48(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_11();
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_52(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (func_54(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(1225, iParam2, 0);
					break;
				
				case 3:
					return func_70(1231, iParam2, 0);
					break;
				
				case 2:
					return func_70(1227, iParam2, 0);
					break;
				
				case 4:
					return func_70(1230, iParam2, 0);
					break;
				
				case 5:
					return func_70(1229, iParam2, 0);
					break;
				
				case 6:
					return func_70(1226, iParam2, 0);
					break;
				
				case 7:
					return func_70(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_5(bParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_56(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	*uParam3 = func_57(iParam0, iParam1, 0, -1);
	if (*uParam3 > bParam2)
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	
	bVar2 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability_unlocked"), &bVar3, -1);
				bVar0 = unk_0xBBDA792448DB5A89(bVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability_unlocked"), &bVar3, -1);
				bVar0 = unk_0xBBDA792448DB5A89(bVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability_unlocked"), &bVar3, -1);
				bVar0 = unk_0xBBDA792448DB5A89(bVar3);
			}
			else if (iParam0 == 3)
			{
				bVar0 = unk_0xBBDA792448DB5A89(func_70(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp0_dist_running"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp1_dist_running"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp2_dist_running"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				bVar0 = (func_68(20, iParam3) / 175f);
				func_65(&bVar0);
			}
			if (iParam0 == 0)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(func_63(50, iParam3))));
				func_65(&bVar0);
			}
			if (iParam0 == 0)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(func_64(func_63(47, iParam3))));
				func_65(&bVar0);
			}
			if (iParam0 == 3)
			{
				bVar0 = (bVar0 + ((4f * Global_262145.f_24361) * IntToFloat(func_70(7237, -1, 0))));
			}
			if (iParam0 == 3)
			{
				bVar0 = (bVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_62(func_63(52, iParam3))) / 30f);
				func_65(&bVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_unarmed_hits"), &bVar3, -1);
				bVar0 = (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_unarmed_hits"), &bVar3, -1);
				bVar0 = (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_unarmed_hits"), &bVar3, -1);
				bVar0 = (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_70(1500, iParam3, 0)) / 20f);
				func_65(&bVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_number_near_miss"), &bVar3, -1);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_number_near_miss"), &bVar3, -1);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_number_near_miss"), &bVar3, -1);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + IntToFloat((func_70(113, iParam3, 0) / 50)));
				func_65(&bVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				bVar0 = (unk_0xBBDA792448DB5A89(func_64(func_63(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89(func_64(func_63(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_plane_landings"), &bVar3, -1);
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(bVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_plane_landings"), &bVar3, -1);
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(bVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_plane_landings"), &bVar3, -1);
				bVar0 = (bVar0 + unk_0xBBDA792448DB5A89(bVar3));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + IntToFloat(func_70(61, iParam3, 0)));
				func_65(&bVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_61(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						bVar0 = (bVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						bVar0 = (bVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						bVar0 = (bVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						bVar0 = (bVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						bVar0 = (bVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						bVar0 = (bVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 2);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 3);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 6);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 4);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 2f);
				}
				iVar4 = func_61(iParam0, 5);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 7);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 8);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 11);
				if (iVar4 == 3)
				{
					bVar0 = (bVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					bVar0 = (bVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					bVar0 = (bVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp0_dist_walk_st"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp1_dist_walk_st"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp2_dist_walk_st"), &fVar1, -1);
				bVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				bVar0 = (func_68(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_kills_stealth"), &bVar3, -1);
				bVar0 = (bVar0 + ((unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_kills_stealth"), &bVar3, -1);
				bVar0 = (bVar0 + ((unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_kills_stealth"), &bVar3, -1);
				bVar0 = (bVar0 + ((unk_0xBBDA792448DB5A89((bVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				bVar3 = func_70(34, iParam3, 0);
				bVar0 = (bVar0 + ((unk_0xBBDA792448DB5A89(bVar3) / 2f) * 1.5f));
				func_65(&bVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_hits_peds_vehicles"), &bVar6, -1);
				bVar6 = (bVar6 - iVar5);
				bVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_hits_peds_vehicles"), &bVar6, -1);
				bVar6 = (bVar6 - iVar5);
				bVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_hits_peds_vehicles"), &bVar6, -1);
				bVar6 = (bVar6 - iVar5);
				bVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89((bVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				bVar6 = func_70(172, iParam3, 0);
				bVar0 = (bVar0 + (unk_0xBBDA792448DB5A89(bVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_60(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				bVar0 = (bVar0 + IntToFloat(iVar8 * 3));
				bVar0 = (bVar0 + IntToFloat(iVar9 * 2));
				bVar0 = (bVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				bVar0 = (bVar0 + IntToFloat(func_59(joaat("mpply_shootingrange_wins")) * 1));
				func_65(&bVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		bVar11 = func_53(iParam0, iParam1, iParam3);
		bVar0 = (bVar0 + IntToFloat(bVar11));
		bVar0 = (bVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (bVar0 - (bVar0 % IntToFloat(func_51(iParam0, iParam1))));
		if ((bVar0 % IntToFloat(func_51(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_51(iParam0, iParam1)));
		}
		if (bVar0 >= fVar12)
		{
			bVar0 = fVar12;
		}
		else
		{
			bVar0 = (fVar12 - IntToFloat(func_51(iParam0, iParam1)));
		}
	}
	bVar2 = unk_0xF34EE736CF047844(bVar0);
	bVar2 = func_69(bVar2, 0, 100);
	return bVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(72, iParam2, 0);
					break;
				
				case 3:
					return func_70(74, iParam2, 0);
					break;
				
				case 2:
					return func_70(73, iParam2, 0);
					break;
				
				case 4:
					return func_70(75, iParam2, 0);
					break;
				
				case 5:
					return func_70(76, iParam2, 0);
					break;
				
				case 6:
					return func_70(77, iParam2, 0);
					break;
				
				case 7:
					return func_70(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_113386.f_19147[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_113386.f_1988[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0xE0E854F5280FB769(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xF2D4B2FE415AAFC3(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0x7583B4BE4C5A41B5(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x2CE056FF3723F00B(iParam0));
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	return Global_2826809[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0xE0E854F5280FB769(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xF2D4B2FE415AAFC3(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x7583B4BE4C5A41B5(iParam0));
	return iVar0;
}

var func_65(bool bParam0)
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_13167)
		{
			if (*bParam0 + (IntToFloat(func_66()) * Global_262145.f_13166)) <= IntToFloat(Global_262145.f_13176)
			{
				*bParam0 = (*bParam0 + (IntToFloat(func_66()) * Global_262145.f_13166));
			}
		}
		return *bParam0;
	}
	return *bParam0;
}

int func_66()
{
	if (func_49(1))
	{
		return Global_1853348[func_67() /*834*/].f_205.f_6;
	}
	return 0;
}

int func_67()
{
	return Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10;
}

float func_68(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866176[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xD7AE6C9C9C6AC54C(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_69(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 > iParam2)
	{
		return iParam2;
	}
	else if (bParam0 < iParam1)
	{
		return iParam1;
	}
	return bParam0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_72()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

bool func_73(int iParam0)
{
	return iParam0 < 3;
}

void func_74(int iParam0, int iParam1)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_71(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar0 = func_70(iVar3, -1, 0);
	}
	else
	{
		unk_0x767FBC2AC802EF3D(iVar2, &bVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(bVar0) / 100f)));
			unk_0x4A3DC7ECCC321032(unk_0x4F8644AF03D0E0D6(), fVar1, true);
			break;
		
		case 7:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("armenian3")) != 0 || unk_0x2C83A9DA6BFFC4F9(joaat("trevor3")) != 0)
			{
				Global_97724 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(bVar0) / 100f));
				unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0xB2C1A29588A9F47C(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0x4E9021C1FCDD507A(unk_0x4F8644AF03D0E0D6(), fVar1);
			}
			break;
	}
}

int func_75(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_43052);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_78()
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (((unk_0x7239B21A38F536BA(bVar0) && unk_0x4C241E39B23DF959(bVar0, false)) && unk_0xBB40DD2270B65366(bVar0, -1, false) == unk_0xD80958FC74E988A6()) && (((unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bVar0)) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bVar0))) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(bVar0))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(bVar0))))
		{
			iVar1 = 1;
		}
	}
	func_83(&bVar0, &iVar1);
	func_82(&bVar0, &iVar1);
	func_79();
}

void func_79()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2359296[func_81() /*5567*/].f_681.f_7)
			{
				iLocal_77 = func_62(func_63(148, -1));
				Global_2359296[func_81() /*5567*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2359296[func_81() /*5567*/].f_681.f_6;
			}
			if (Global_2359296[func_81() /*5567*/].f_681.f_4 == 0)
			{
				Global_2359296[func_81() /*5567*/].f_681.f_4 = unk_0x9A73240B49945C76();
			}
			bLocal_79 = Global_2359296[func_81() /*5567*/].f_681.f_4;
			iLocal_78 = Global_2359296[func_81() /*5567*/].f_681.f_5;
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_62(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_62(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_62(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_113386.f_2363.f_539.f_2292[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_113386.f_2363.f_539.f_2288[iLocal_58];
			}
			if (Global_113386.f_2363.f_539.f_2280[iLocal_58] == 0)
			{
				Global_113386.f_2363.f_539.f_2280[iLocal_58] = unk_0x9A73240B49945C76();
			}
			bLocal_79 = Global_113386.f_2363.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_113386.f_2363.f_539.f_2284[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0x9A73240B49945C76() - bLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		bLocal_79 = unk_0x9A73240B49945C76();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2359296[func_81() /*5567*/].f_681.f_7 = 1;
		}
		else
		{
			Global_113386.f_2363.f_539.f_2292[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_62(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_62(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_62(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_62(func_63(148, -1));
				break;
		}
		bVar1 = (iVar0 - iLocal_77);
		bVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar1) / 15f)) - iLocal_78);
		if (bVar2 > 0)
		{
			func_80(iLocal_58, 4, bVar2);
			iLocal_78 = (iLocal_78 + bVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0x2F8B4D1C595B11DB() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2359296[func_81() /*5567*/].f_681.f_4 = bLocal_79;
		Global_2359296[func_81() /*5567*/].f_681.f_5 = iLocal_78;
	}
	else
	{
		Global_113386.f_2363.f_539.f_2280[iLocal_58] = bLocal_79;
		Global_113386.f_2363.f_539.f_2284[iLocal_58] = iLocal_78;
	}
}

void func_80(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + bParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				bVar0 = func_70(iVar1, -1, 0);
				bVar0 = (bVar0 + bParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_55(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && *iParam1) && !unk_0x886E37EC497200B6(*bParam0))
		{
			bVar0 = false;
			if (unk_0xD5037BA82E12416F(*bParam0) >= 53f)
			{
				func_80(iLocal_58, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_76 = unk_0x7A5487FE9FAA6B48();
			}
		}
	}
	else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && *iParam1) && unk_0xD5037BA82E12416F(*bParam0) < 20f) && !unk_0x886E37EC497200B6(*bParam0))
	{
		if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_75) > 10000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_76, 10000))))
		{
			iLocal_74 = 1;
		}
	}
}

void func_83(bool bParam0, int iParam1)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_66)
		{
			if (!unk_0x886E37EC497200B6(*bParam0))
			{
				if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_68) > 1500) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_69, 1500))))
				{
					iLocal_70 = unk_0x9CD27B0045628463();
					if (unk_0x10FAB35428CCC9D7())
					{
						iLocal_71 = unk_0x7A5487FE9FAA6B48();
					}
					iLocal_67 = 1;
				}
				iLocal_66 = 0;
			}
		}
		if (iLocal_67)
		{
			if (!unk_0x886E37EC497200B6(*bParam0))
			{
				if (unk_0xB104CD1BABF302E2(*bParam0))
				{
					if ((((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_70) > 20) || (!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_70) == 0)) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_71, 20)))) || (unk_0x10FAB35428CCC9D7() && unk_0xF5BC95857BD6D512(unk_0x7A5487FE9FAA6B48(), iLocal_71)))
					{
					}
					else
					{
						func_80(iLocal_58, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (unk_0x9CD27B0045628463() - iLocal_70), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_66 && !iLocal_67)
		{
			if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_72) > 1000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_73, 1000))))
			{
				if (unk_0x886E37EC497200B6(*bParam0))
				{
					if (!iLocal_66)
					{
						iLocal_68 = unk_0x9CD27B0045628463();
						if (unk_0x10FAB35428CCC9D7())
						{
							iLocal_69 = unk_0x7A5487FE9FAA6B48();
						}
						iLocal_66 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x9CD27B0045628463();
		if (unk_0x10FAB35428CCC9D7())
		{
			iLocal_73 = unk_0x7A5487FE9FAA6B48();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_84(int iParam0)
{
	return (Global_112471 && iParam0) != 0;
}

int func_85()
{
	func_86();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_86()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_88(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_87(unk_0xD80958FC74E988A6());
			if (func_73(iVar0) && (!func_54(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_73(Global_113386.f_2363.f_539.f_4321))
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

int func_87(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_73(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_90()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_93(unk_0x4F8644AF03D0E0D6());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xDB4EACD4AD0A5D6B(iVar1);
				}
				break;
		}
		unk_0x202709F4C58A0424("PS_UPDATE");
		unk_0x03B504CF259931BC(bLocal_65);
		unk_0x2B7E9A4EAAA93C89(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (bLocal_65 - iLocal_64), false, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x9CD27B0045628463() + 5000;
		if (unk_0x10FAB35428CCC9D7())
		{
			iLocal_84 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_93(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_96(bParam0);
	if (iVar0 == -1)
	{
		func_94(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_94(bool bParam0, bool bParam1)
{
	if (!func_19(bParam0, 0, 1))
	{
		return;
	}
	if (func_96(bParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (bParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_95(bParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = bParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_95(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(bool bParam0)
{
	int iVar0;
	
	if (!func_19(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == bParam0)
		{
			if (unk_0xA0A9668F158129A2(Global_1660783[iVar0 /*5*/].f_2) && unk_0x7085228842B13A67(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_97(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_97(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0xA0A9668F158129A2(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xDB4EACD4AD0A5D6B(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x96B1361D9B24C2FF(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_98(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_98(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		uParam0->f_3 = unk_0x7A5487FE9FAA6B48();
	}
}

void func_99()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0xCBAD6729F7B1F4FC() != 1)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_103(unk_0x4F8644AF03D0E0D6()))
		{
			return;
		}
		if (func_102() != 0)
		{
			return;
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_102() == 0)
		{
			iLocal_53 = 1;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		iLocal_57 = unk_0x7A5487FE9FAA6B48();
	}
	iLocal_72 = unk_0x9CD27B0045628463();
	if (unk_0x10FAB35428CCC9D7())
	{
		iLocal_73 = unk_0x7A5487FE9FAA6B48();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!BitTest(Global_2359296[func_81() /*5567*/].f_681.f_1274, 2))
		{
			bVar0 = (unk_0xBBDA792448DB5A89(func_70(193, -1, 0)) / 20f);
			bVar1 = unk_0xF34EE736CF047844(bVar0);
			bVar1 = func_69(bVar1, 0, 100);
			func_80(3, 2, bVar1);
			unk_0x933D6A9EEC1BACD0(&(Global_2359296[func_81() /*5567*/].f_681.f_1274), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_100()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_71(3, iVar0, &uVar1, &iVar2);
				func_55(iVar2, func_53(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_97723 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_71(iVar3, iVar4, &iVar5, &uVar6);
					unk_0xB3271D7AB655B441(iVar5, func_53(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_113386.f_2363.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_113386.f_2363.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_113386.f_2363.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_113386.f_2363.f_539.f_2354 = 1;
		Global_97723 = 1;
	}
}

int func_101()
{
	if (unk_0x10FAB35428CCC9D7())
	{
		return 1;
	}
	return Global_113386.f_2363.f_539.f_2354;
}

int func_102()
{
	return Global_31959;
}

int func_103(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, bParam0);
	}
	return 1;
}

void func_104()
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_53 = 2;
			}
			if (!func_101())
			{
				iLocal_53 = 2;
			}
		}
		else if (iLocal_53 == 1)
		{
			if ((!unk_0x10FAB35428CCC9D7() || !func_103(unk_0x4F8644AF03D0E0D6())) || func_102() != 0)
			{
				iLocal_53 = 2;
			}
		}
		if (iLocal_53 == 2)
		{
			iLocal_54 = 2;
		}
	}
}

