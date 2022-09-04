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
	int iLocal_19[2] = { 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0xC968670BFACE42D9(2))
	{
		func_51();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_18)
		{
			case 0:
				if (iLocal_19[0])
				{
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						Global_22724[3 /*42*/].f_27[0] = func_50(2);
						func_49(2, 32, Global_22724[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_22724[3 /*42*/]), "PA_TREV1", 16);
					StringCopy(&(Global_22724[3 /*42*/].f_4), "PA_TREV1", 16);
					Global_22724[3 /*42*/].f_8 = 0;
					Global_22724[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_22724[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A", 16);
					Global_22724[3 /*42*/].f_37[1] = 0;
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						Global_22724[3 /*42*/].f_27[1] = func_50(2);
					}
					func_42(2, 3, 1, 1);
					func_39("PA_TREV1A", Global_22724[3 /*42*/].f_27[1]);
					iLocal_18 = 1;
				}
				break;
			
			case 1:
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					Global_22724[3 /*42*/].f_27[1] = func_50(2);
					if (func_38(2, 999999))
					{
						func_37("PA_COMPLETE", "PA_TREV1", 2000, 1);
						Global_22724[3 /*42*/].f_37[1] = 1;
						Global_22724[3 /*42*/].f_8 = 1;
						iLocal_22 = unk_0x9CD27B0045628463();
						iLocal_18 = 2;
					}
					else if (func_38(2, 499999))
					{
						if (!iLocal_20)
						{
							func_36("PA_TREV1", 2000, 1);
							iLocal_20 = 1;
						}
					}
					if (iLocal_19[1])
					{
						func_1(2, 32, 500000, 0, 0);
						iLocal_19[1] = 0;
					}
				}
				break;
			
			case 2:
				iLocal_21 = unk_0x9CD27B0045628463();
				if ((iLocal_21 - iLocal_22) < 5000)
				{
					func_39("PA_TREV1A", Global_22724[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_35(iParam0) == 3)
	{
		return;
	}
	if (func_35(iParam0) == 4)
	{
		return;
	}
	func_2(func_35(iParam0), 1, iParam1, bParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x767FBC2AC802EF3D(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + bParam2);
		unk_0xB3271D7AB655B441(iVar1, bVar0, true);
	}
}

int func_2(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_34();
	if (bParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_33(99, 1);
					func_32(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_32(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_32(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_16(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_13(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_property"), bParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_12(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, bParam3);
					break;
				
				case 1:
					func_33(97, bParam3);
					break;
				
				case 2:
					func_33(96, bParam3);
					break;
			}
			func_33(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_5(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_5(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + bParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && bParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + bParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_32(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_32(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_32(joaat("sp2_total_cash_earned"), bParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - bParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - bParam3);
			if (bParam4)
			{
				bVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (bVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = bParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_4(iParam0);
	if (Global_43052 == 15)
	{
		func_3(0);
	}
	return 1;
}

void func_3(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), bVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), bVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), bVar0, true);
			break;
	}
}

void func_5(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_11(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_11(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_11(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_11(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_8(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_8(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_8(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_8(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_8(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_8(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_7() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_7() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_6(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_6(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_7()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_8(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_9(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1574918;
}

void func_11(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_12(int iParam0)
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
}

int func_13(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_15(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_15(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_15(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_15(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_14(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_14(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_14(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_14(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_14(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_14(8277, -1, 0);
		if (iVar11 == 0 || bVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_7() /*5567*/].f_681.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_9(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_10();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_16(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), bVar1, true);
		func_31(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_17(27, 1);
	return 1;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_18(iParam0, iParam1);
}

int func_18(int iParam0, int iParam1)
{
	if (func_30(14) && !func_29(iParam0))
	{
		return 0;
	}
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_28(&Global_4541529))
	{
		if (func_26(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_19(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_19(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_30(14) && !func_29(iParam1))
	{
		return 0;
	}
	if (func_26(uParam0, iParam1))
	{
		return 0;
	}
	if (func_25(uParam0) < 0f)
	{
		func_24(uParam0, 0);
	}
	func_22(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_20(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_20(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_30(14) && !func_29(iParam1))
	{
		return 0;
	}
	if (func_26(uParam0, iParam1))
	{
		return 0;
	}
	if (func_25(uParam0) < 0f)
	{
		func_24(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_21(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_21(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_22(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_23(uParam0, iVar0);
		iVar0++;
	}
	func_24(uParam0, (Global_4541528 - 0.5f));
}

void func_23(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_24(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_25(var uParam0)
{
	return uParam0->f_80;
}

bool func_26(var uParam0, int iParam1)
{
	return func_27(uParam0, iParam1) != -1;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_28(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_30(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (bParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, bParam1);
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_58896[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_58896[iParam0 /*7*/].f_1, bVar0, true);
	}
}

void func_34()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_35(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_36(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, false);
}

void func_37(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x9D77056A530643F6(iParam2, false);
}

int func_38(int iParam0, int iParam1)
{
	if (func_50(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39(char* sParam0, bool bParam1)
{
	unk_0x3A618A217E5154F0(0.852f, 0.81f, 0.141f, 0.025f, false, false, false, 175, false);
	func_41(255, 255, 255, 255);
	func_40(0.81f, 0.8f, sParam0, bParam1, 0);
}

void func_40(float fParam0, float fParam1, char* sParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

void func_41(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	unk_0x07C837F9A01C34C9(0.3f, 0.3f);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(1, 0, 0, 0, 205);
	unk_0x038C1F517D7FDCF8(true);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0xBE6B23FFA53FB442(bParam0, bParam1, bParam2, bParam3);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_48())
	{
		return 0;
	}
	if (func_43(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_43(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_46() == 0)
	{
		func_45();
		return 0;
	}
	func_44(Global_22723);
	Global_22893[Global_22723 /*9*/].f_1 = uParam1;
	Global_22893[Global_22723 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_22893[Global_22723 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_44(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x494E97C2EF27C470();
	bVar1 = unk_0x13D2B8ADD79640F2();
	bVar2 = unk_0x25223CA6B4D20B7F();
	bVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_22893[iParam0 /*9*/].f_2 = bVar0;
	Global_22893[iParam0 /*9*/].f_2.f_1 = bVar1;
	Global_22893[iParam0 /*9*/].f_2.f_2 = bVar2;
	Global_22893[iParam0 /*9*/].f_2.f_3 = bVar3;
	Global_22893[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_22893[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_45()
{
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0)
		{
			Global_22723 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_22723 = 3;
	Global_22893[Global_22723 /*9*/].f_2 = -1;
	Global_22893[Global_22723 /*9*/].f_2.f_1 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_2 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_3 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0 || Global_22893[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_47(Global_22893[iVar0 /*9*/].f_2, Global_22893[Global_22723 /*9*/].f_2))
			{
				Global_22723 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_22723 == 3)
	{
		return 0;
	}
	return 1;
}

int func_47(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_48()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, bool bParam2)
{
	if (func_35(iParam0) == 3)
	{
		return 0;
	}
	if (func_35(iParam0) == 4)
	{
		return 0;
	}
	return func_2(func_35(iParam0), 0, iParam1, bParam2, 0);
}

int func_50(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_51()
{
	unk_0x1090044AD1DA76FA();
}

