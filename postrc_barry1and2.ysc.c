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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_44 = "RCMBarryLeadInOut";
	bLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0xFE99B66D079CF6BC(0, 26, true);
	if (func_25(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
		}
	}
	if (unk_0xC968670BFACE42D9(83))
	{
		func_22(0);
	}
	unk_0xD3BD40951412FEF6(bLocal_44);
	unk_0x71A78003C8E71424("BARY1", 7);
	while (!unk_0xD031A9162D01088C(bLocal_44) || !unk_0x02245FE4BED318B8(7))
	{
		unk_0xFE99B66D079CF6BC(0, 26, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFE99B66D079CF6BC(0, 26, true);
	func_25(unk_0xD80958FC74E988A6());
	iLocal_46 = unk_0x9CD27B0045628463() + 13000;
	iLocal_47 = unk_0xD53343AA4FB7DD28(false, 5);
	func_19();
	while (!func_13(&bLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		unk_0xFE99B66D079CF6BC(0, 26, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFE99B66D079CF6BC(0, 26, true);
	func_12();
	iLocal_48 = unk_0x9CD27B0045628463() + 1000;
	unk_0xFE99B66D079CF6BC(0, 26, true);
	while (true)
	{
		func_25(unk_0xD80958FC74E988A6());
		if (unk_0x9CD27B0045628463() < iLocal_48)
		{
			unk_0xFE99B66D079CF6BC(0, 26, true);
		}
		func_11();
		if (!func_25(bLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xD80958FC74E988A6(), Local_50, 1) > 70f)
		{
			func_1(&bLocal_40, 0);
			func_1(&bLocal_41, 0);
			func_1(&bLocal_42, 0);
			func_22(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(bool bParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0xB1632E9A5F988D11(*bParam0))
		{
			unk_0x961AC54BF0613F5D(*bParam0, true, true);
		}
		if (!bParam1)
		{
			unk_0x3AE22DEB5BA5A3E6(bParam0);
		}
		else
		{
			unk_0xADBE4809F19F927A(*bParam0);
		}
	}
}

float func_2(bool bParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xD80958FC74E988A6()) && func_10(bLocal_43)) && !func_9()) && unk_0x9CD27B0045628463() > iLocal_46) && func_8(unk_0xD80958FC74E988A6(), bLocal_43, 1) < 20f) && !unk_0xA33CDCCDA663159E())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, bLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x933D6A9EEC1BACD0(&Global_20471, false);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(bParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(bParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(bParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(bParam2, true);
			}
		}
	}
}

float func_8(bool bParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var1, bParam2);
}

int func_9()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_10(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xAB0F816885B0E483(-1, Local_50, 5f))
	{
		if (func_10(bLocal_43))
		{
			unk_0x428CA6DBD1094446(bLocal_43, false);
			unk_0x697157CED63F18D4(bLocal_43, 1000, true, 0);
		}
		if (func_10(bLocal_41))
		{
			unk_0x428CA6DBD1094446(bLocal_41, false);
		}
		if (func_10(bLocal_40))
		{
			unk_0x428CA6DBD1094446(bLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(bLocal_43))
	{
		if (!unk_0x0A7B270912999B3C(bLocal_43))
		{
			unk_0xAD738C3085FE7E11(bLocal_43, true, false);
		}
		unk_0x93376B65A266EB5F(bLocal_43, 1, false, false, false);
		unk_0x9F8AA94D6D97DBF4(bLocal_43, true);
		unk_0xA9C8960E8684C1B5(bLocal_43, 0);
		unk_0x63F58F7C80513AAD(bLocal_43, false);
		unk_0x98EFA132A4117BE1(bLocal_43, "POSTBARRY");
		unk_0xC80A74AC829DDD92(bLocal_43, joaat("player"));
		unk_0x1A9205C1B9EE827F(bLocal_43, false, false);
		unk_0x428CA6DBD1094446(bLocal_43, true);
		unk_0x06843DA7060A026B(bLocal_43, Local_50, true, false, false, true);
		unk_0x8E2530AA8ADA980E(bLocal_43, func_18(1.12f));
		unk_0x428CA6DBD1094446(bLocal_43, true);
		unk_0xEA47FE3719165B94(bLocal_43, bLocal_44, bLocal_45, 8f, -8f, -1, 9, false, false, false, false);
		unk_0x69F4BE8C8CC4796C(bLocal_43, unk_0xD80958FC74E988A6(), -1, 0, 2);
	}
}

int func_13(bool bParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	if (!func_17(iParam1))
	{
		bVar0 = func_15(iParam1);
		unk_0x963D27A58DF860AC(bVar0);
		if (unk_0x98A4EB5D89A0C952(bVar0))
		{
			if (unk_0x7239B21A38F536BA(*bParam0))
			{
				unk_0x9614299DCB53E54B(bParam0);
			}
			*bParam0 = unk_0xD49F9B0955C367DE(26, bVar0, Param2, bParam3, false, false);
			unk_0x45EEE61580806D63(*bParam0);
			if (bVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x67F3780DD425D4FC(*bParam0, 3) == 0)
				{
					unk_0x262B14F48D29DE80(*bParam0, 5, 2, false, 0);
				}
			}
			func_14(*bParam0, iParam1);
			if (bParam4)
			{
				unk_0xE532F5D78798DAAB(bVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0xBFA48E2FF417213F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		bLocal_41 = unk_0xE143FA2249364369(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_25(bLocal_41))
		{
			if (!unk_0x0A7B270912999B3C(bLocal_41))
			{
				unk_0xAD738C3085FE7E11(bLocal_41, true, false);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x06843DA7060A026B(bLocal_41, Local_49, true, false, false, true);
			unk_0x8E2530AA8ADA980E(bLocal_41, func_18(-2.01f));
			unk_0x428CA6DBD1094446(bLocal_41, true);
		}
	}
	if (unk_0xBFA48E2FF417213F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		bLocal_40 = unk_0xE143FA2249364369(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_25(bLocal_40))
		{
			if (!unk_0x0A7B270912999B3C(bLocal_40))
			{
				unk_0xAD738C3085FE7E11(bLocal_40, true, false);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x06843DA7060A026B(bLocal_40, Local_49, true, false, false, true);
			unk_0x8E2530AA8ADA980E(bLocal_40, func_18(-1.68f));
			unk_0x428CA6DBD1094446(bLocal_40, true);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&bLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0x06843DA7060A026B(bLocal_40, Local_49, true, false, false, true);
		unk_0x8E2530AA8ADA980E(bLocal_40, func_18(-1.68f));
		unk_0x428CA6DBD1094446(bLocal_40, true);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xBFA48E2FF417213F(Local_49, 25f, joaat("prop_protest_sign_01"), false))
	{
		bLocal_42 = unk_0xE143FA2249364369(Local_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_25(bLocal_42))
		{
			if (!unk_0x0A7B270912999B3C(bLocal_42))
			{
				unk_0xAD738C3085FE7E11(bLocal_42, true, false);
			}
			Local_49.f_2 = 29.603f;
			unk_0x06843DA7060A026B(bLocal_42, Local_49, true, false, false, true);
			unk_0x8E2530AA8ADA980E(bLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&bLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x06843DA7060A026B(bLocal_42, Local_49, true, false, false, true);
		unk_0x8E2530AA8ADA980E(bLocal_42, 23.45f);
	}
}

void func_20(bool bParam0, bool bParam1, struct<3> Param2, bool bParam3)
{
	func_21(bParam0);
	*bParam0 = unk_0x509D5878EB39E842(bParam1, Param2, true, true, false);
	unk_0x8E2530AA8ADA980E(*bParam0, bParam3);
}

void func_21(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0xB1632E9A5F988D11(*bParam0))
		{
			unk_0x961AC54BF0613F5D(*bParam0, true, true);
		}
		unk_0x539E0AE3E6634B9F(bParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&bLocal_43);
	}
	else
	{
		func_23(&bLocal_43, 1, 0, 1);
	}
	if (func_10(bLocal_41))
	{
		unk_0x428CA6DBD1094446(bLocal_41, false);
	}
	if (func_10(bLocal_40))
	{
		unk_0x428CA6DBD1094446(bLocal_40, false);
	}
	if (bParam0)
	{
		func_21(&bLocal_40);
		func_21(&bLocal_41);
		func_21(&bLocal_42);
	}
	else
	{
		func_1(&bLocal_40, 0);
		func_1(&bLocal_41, 0);
		func_1(&bLocal_42, 0);
	}
	unk_0xF66A602F829E2A06(bLocal_44);
	unk_0x2A179DF17CCF04CD(7, false);
	unk_0x1090044AD1DA76FA();
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*bParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*bParam0);
			}
			unk_0x971D38760FBC02EF(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*bParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(bParam0);
	}
}

void func_24(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*bParam0, false))
		{
			unk_0x0DC7CABAB1E9B67E(*bParam0, false, 1);
		}
		if (!unk_0x0A7B270912999B3C(*bParam0))
		{
			unk_0xAD738C3085FE7E11(*bParam0, true, false);
		}
		unk_0x9614299DCB53E54B(bParam0);
	}
}

bool func_25(bool bParam0)
{
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(bParam0, false);
}

