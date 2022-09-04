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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58[32];
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_49(ScriptParam_59);
	}
	else
	{
		func_43();
	}
	iLocal_53 = unk_0x9CD27B0045628463();
	while (true)
	{
		func_42();
		if (((func_34() || unk_0xADA24309FE08DACF()) || (func_33(unk_0x4F8644AF03D0E0D6()) || func_32(unk_0x4F8644AF03D0E0D6()))) || func_29(unk_0x4F8644AF03D0E0D6()))
		{
			func_43();
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0xA6C90FBC38E395EE())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_43();
		}
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xEE68096F9F37341E();
	bVar0 = false;
	while (bVar0 < unk_0xA6C90FBC38E395EE())
	{
		if ((iLocal_54 % bVar0) == 0)
		{
			if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(bVar0)))
			{
				iVar2 = unk_0x43A66C31C68491C0(unk_0x24FB80D107371267(unk_0x9EC6603812C24710(bVar0)));
				if (!unk_0x5F9532F3B5CC2551(iVar2, false))
				{
					if (Local_58[bVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iVar2, true)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexlow_veh");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexnorm_veh");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexlow_veh_first_person");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexnorm_veh_first_person");
								unk_0xD3BD40951412FEF6("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_56 = 1;
							}
							if (!BitTest(iLocal_55, bVar0))
							{
								unk_0x933D6A9EEC1BACD0(&iLocal_55, bVar0);
							}
						}
						else if (BitTest(iLocal_55, bVar0))
						{
							unk_0xE80492A9AC099A93(&iLocal_55, bVar0);
						}
					}
					else if (BitTest(iLocal_55, bVar0))
					{
						unk_0xE80492A9AC099A93(&iLocal_55, bVar0);
					}
				}
				else if (BitTest(iLocal_55, bVar0))
				{
					unk_0xE80492A9AC099A93(&iLocal_55, bVar0);
				}
			}
		}
		bVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !Local_58[iVar1 /*3*/].f_2)
	{
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh_first_person");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh_first_person");
		unk_0xF66A602F829E2A06("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_56 = 0;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		return;
	}
	if (iLocal_53 > unk_0x9CD27B0045628463())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0xEE68096F9F37341E();
	bVar3 = false;
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = unk_0xD80958FC74E988A6();
			if (func_28(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_25(unk_0x4F8644AF03D0E0D6(), 1, 0) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = unk_0x9CD27B0045628463();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0x9CD27B0045628463() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_32113 = 0f;
				unk_0x6EB5F71AA68F2E8E("pb_prostitute");
				iLocal_53 = unk_0x9CD27B0045628463() + 250;
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0x9CD27B0045628463() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xE6CC9F3BA0FB9EF1("pb_prostitute") && unk_0x2C83A9DA6BFFC4F9(joaat("pb_prostitute")) <= 0) && !unk_0x9D40DF90FAD26098("pb_prostitute", unk_0xEE68096F9F37341E(), true, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0xC90D2DCACD56184C("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0x9CD27B0045628463();
			break;
		
		case 4:
			if (func_4())
			{
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0x9CD27B0045628463() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0x9CD27B0045628463() + 500;
			}
			break;
		
		case 5:
			if (((!func_25(unk_0x4F8644AF03D0E0D6(), 1, 0) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = unk_0x9CD27B0045628463() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0x9CD27B0045628463() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_1963976;
}

int func_4()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("pb_prostitute")) <= 0 && !unk_0x9D40DF90FAD26098("pb_prostitute", unk_0xEE68096F9F37341E(), true, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_5();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	return 0;
}

void func_5()
{
	struct<2> Var0;
	int iVar1;
	
	Var0.f_0 = 1866600591;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	iVar1 = func_6(1, 1);
	if (iVar1 != 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 2, iVar1);
	}
}

var func_6(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0x41BD2A6B006AF756(bVar1);
		if (func_10(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
				else if (!func_7(bVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_7(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1574918;
}

int func_10(bool bParam0, bool bParam1, bool bParam2)
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

void func_11(int iParam0)
{
	Local_58[unk_0xEE68096F9F37341E() /*3*/] = iParam0;
}

int func_12(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_58[unk_0xEE68096F9F37341E() /*3*/];
	}
	return Local_58[iParam0 /*3*/];
}

int func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_14();
	iVar1 = unk_0xEE68096F9F37341E();
	if (!unk_0x7239B21A38F536BA(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0x46E9AE36D8FA6417(iLocal_57))
	{
		if (Local_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar2 = unk_0xD80958FC74E988A6();
				if (func_28(&iVar2))
				{
					iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x7239B21A38F536BA(iVar3))
					{
						if (func_12(iVar1) == unk_0xBB40DD2270B65366(iVar3, false, false) || unk_0xA3EE4A07279BB9DB(func_12(iVar1), iVar3, true))
						{
							Local_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					Var4 = { unk_0x3FEF770D40960D5A(func_12(iVar1), false) };
					Var5 = { unk_0x3FEF770D40960D5A(iVar0, false) };
					Var6 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
					fVar7 = unk_0x2A488C176D52CCA5(Var4, Var6);
					fVar8 = unk_0x2A488C176D52CCA5(Var6, Var5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!unk_0x84A2DD9AC37C35C1(uVar1[iVar3]))
			{
				if (unk_0x1BF094736DD62C2E(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x1BF094736DD62C2E(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar3]))
					{
						if (!func_15(uVar1[iVar3]))
						{
							if (!unk_0xBBCCE00B381F8482(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	var uVar0;
	char* sVar1;
	
	sVar1 = unk_0xA6E9C38DB51D7748(iParam0, &uVar0);
	if (!unk_0xCA042B6957743895(sVar1))
	{
		if (unk_0x0C515FAB3FF9EA92(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (unk_0x0C515FAB3FF9EA92(sVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (unk_0x0C515FAB3FF9EA92(sVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (unk_0x0C515FAB3FF9EA92(sVar1, "GB_CASINO"))
		{
			return 0;
		}
		if (unk_0x0C515FAB3FF9EA92(sVar1, "GB_CASINO_HEIST"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()
{
	if (func_3())
	{
		return 1;
	}
	if (func_22(unk_0x4F8644AF03D0E0D6()) != -1)
	{
		return 1;
	}
	if (func_18(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)
{
	if (func_19(func_20(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_22(bool bParam0)
{
	if (func_20(bParam0) == 237 || func_20(bParam0) == 250)
	{
		return func_23(bParam0);
	}
	return -1;
}

int func_23(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

bool func_24()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 0);
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_26(bParam0))
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

bool func_26(int iParam0)
{
	return func_27(iParam0);
}

var func_27(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_28(int iParam0)
{
	if (unk_0x997ABD671D25CA0B(*iParam0, false))
	{
		if (unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(*iParam0), -1, false) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(bool bParam0)
{
	if (bParam0 != func_31())
	{
		if (func_10(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_30(Global_2689235[bParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_31()
{
	return -1;
}

bool func_32(bool bParam0)
{
	return Global_2689235[bParam0 /*453*/].f_119 == 7;
}

bool func_33(bool bParam0)
{
	return Global_2689235[bParam0 /*453*/].f_119 == 2;
}

int func_34()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_31959;
}

bool func_38()
{
	return Global_2714762.f_698;
}

int func_39(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2725403;
}

bool func_41()
{
	return Global_2714762.f_693;
}

void func_42()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_43()
{
	if (iLocal_56)
	{
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh_first_person");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh_first_person");
		unk_0xF66A602F829E2A06("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if ((!func_48(unk_0x4F8644AF03D0E0D6()) && !func_47(unk_0x4F8644AF03D0E0D6())) && !func_46(unk_0x4F8644AF03D0E0D6()))
	{
		func_45();
	}
	func_4();
	if (unk_0x10FAB35428CCC9D7())
	{
		func_5();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	Global_2815059.f_4 = 0;
	func_44();
}

void func_44()
{
	unk_0x1090044AD1DA76FA();
}

void func_45()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

int func_46(bool bParam0)
{
	if (bParam0 != func_31())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_47(bool bParam0)
{
	if (bParam0 != func_31())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_48(bool bParam0)
{
	if (bParam0 != func_31())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_408.f_2, 16);
	}
	return 0;
}

void func_49(struct<21> Param0)
{
	func_52(func_53(Param0.f_0), Param0);
	func_50(0, -1, 0);
	unk_0x3364AA97340CA215(&Local_58, 97, 0);
	if (unk_0x10FAB35428CCC9D7())
	{
		func_5();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	unk_0xAA391C728106F7AF(false);
}

int func_50(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_44();
			}
			else
			{
				return 0;
			}
		}
		if (!func_51(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_44();
					}
					else
					{
						return 0;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_44();
					}
					else
					{
						return 0;
					}
				}
				if (func_39(157))
				{
					if (!bParam2)
					{
						func_44();
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
					func_44();
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
				func_44();
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
			func_44();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_51(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_52(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_44();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_54(func_55(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_55(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

