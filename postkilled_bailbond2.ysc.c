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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88[5];
	struct<8> Local_89[5];
	int iLocal_90 = 0;
	struct<9> Local_91 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_79 = { ScriptParam_91 };
	if (unk_0xC968670BFACE42D9(19))
	{
		func_20();
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_19();
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 200;
	iVar4 = unk_0x9CD27B0045628463();
	while (true)
	{
		if (!func_9())
		{
			func_20();
		}
		if ((unk_0x9CD27B0045628463() - iVar4) > 100)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
				if (func_8(iLocal_79[iVar1]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0x3FEF770D40960D5A(iLocal_79[iVar1], false)) >= IntToFloat((iVar3 * iVar3)) && unk_0xE31C2C72B8692B64(iLocal_79[iVar1]))
					{
						func_7(&(Local_89[iVar1 /*8*/]));
						func_6(&(iLocal_79[iVar1]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar1], &(Local_89[iVar1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_79[iVar1]))
				{
					func_6(&(iLocal_79[iVar1]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar2]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_88[iVar2 /*3*/]) >= IntToFloat((iVar3 * iVar3)))
					{
						if (unk_0xE31C2C72B8692B64(iLocal_79.f_5[iVar2]) || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_79.f_5[iVar2], false))
						{
							func_2(&(iLocal_79.f_5[iVar2]));
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_79.f_5[iVar2]))
				{
					func_2(&(iLocal_79.f_5[iVar2]));
				}
				iVar1++;
				if (iVar1 == iLocal_79)
				{
					iVar1 = 0;
				}
				iVar2++;
				if (iVar2 == iLocal_79.f_5)
				{
					iVar2 = 0;
				}
				if (func_1())
				{
					func_20();
				}
			}
			iVar4 = unk_0x9CD27B0045628463();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (unk_0x7239B21A38F536BA(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0x7239B21A38F536BA(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		unk_0x5F9532F3B5CC2551(*bParam0, false);
		if (unk_0x0A7B270912999B3C(*bParam0) && unk_0xDDE6DF5AE89981D2(*bParam0, true))
		{
			unk_0x629BFA74418D6239(bParam0);
		}
	}
}

int func_3(bool bParam0)
{
	if (func_4(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(bool bParam0)
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

int func_5(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (bParam3 == 0)
	{
		bParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(bParam0))
		{
			bVar0 = true;
			if (unk_0x9134873537FA419C(bParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (bParam8 == -1)
				{
					unk_0xD30C50DF888D58B5(bParam0, true);
				}
				else
				{
					unk_0xB13DCB4C6FAAD238(bParam0, true, bParam8);
				}
				uParam1->f_7 = bParam0;
				unk_0xE52B8E7F85D39A08(bParam0, iParam2);
				unk_0x97C65887D4B37FA9(bParam0, fParam6);
				if (unk_0xA6DB27D19ECBB7DA(*uParam1))
				{
					unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(bParam0, iParam9);
		}
		unk_0x0C4BBF625CA98C4E(bParam0, bParam4);
		unk_0x3EED80DFF7325CAA(bParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(bParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!bParam8 == -1)
				{
					unk_0x03D7FB09E75D6B7E(*uParam1, bParam8);
				}
				if (!unk_0xCA042B6957743895(bParam7))
				{
					unk_0xF9113A30DE5C6670("STRING");
					if (bParam10)
					{
						unk_0x6C188BE134E074AA(bParam7);
					}
					else
					{
						unk_0xC63CD5D2920ACBE7(bParam7);
					}
					unk_0xBC38B49BCB83BC9B(*uParam1);
				}
				unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(bParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(bParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						unk_0x03D7FB09E75D6B7E(uParam1->f_1, bParam8);
					}
					if (!unk_0xCA042B6957743895(bParam7))
					{
						unk_0xF9113A30DE5C6670("STRING");
						if (bParam10)
						{
							unk_0x6C188BE134E074AA(bParam7);
						}
						else
						{
							unk_0xC63CD5D2920ACBE7(bParam7);
						}
						unk_0xBC38B49BCB83BC9B(uParam1->f_1);
					}
					unk_0xAE9FC9EF6A9FAC79(uParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_7(bool bParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DB27D19ECBB7DA(*bParam0))
	{
		unk_0x86A652570E5F25DD(bParam0);
		bVar0 = true;
	}
	if (unk_0xA6DB27D19ECBB7DA(bParam0->f_1))
	{
		unk_0x86A652570E5F25DD(&(bParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7239B21A38F536BA(bParam0->f_7))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0->f_7, false))
		{
			if (unk_0x15B8ECF844EE67ED(bParam0->f_7))
			{
				unk_0xD30C50DF888D58B5(bParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*bParam0 = { Var1 };
	}
}

int func_8(bool bParam0)
{
	if (func_4(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("bailbond2")) == 0)
	{
		if (!func_17(4))
		{
			return 0;
		}
	}
	if (Global_97361 == 1)
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (Global_31962)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_15(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_14(unk_0xD80958FC74E988A6());
			if (func_13(iVar0) && (!func_12(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_13(Global_113386.f_2363.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
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
	return func_18(iParam0, Global_43052);
}

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	unk_0xF372BC22FCB88606("ENEMIES", &iLocal_90);
	unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_90);
	unk_0xBF25EB89375A37AD(5, iLocal_90, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0xAD738C3085FE7E11(iLocal_79.f_5[iVar0], true, true);
			Local_88[iVar0 /*3*/] = { unk_0x3FEF770D40960D5A(iLocal_79.f_5[iVar0], false) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0xAD738C3085FE7E11(iLocal_79[iVar0], true, true);
			unk_0xC80A74AC829DDD92(iLocal_79[iVar0], iLocal_90);
			func_5(iLocal_79[iVar0], &(Local_89[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		iVar0++;
	}
}

void func_20()
{
	int iVar0;
	
	unk_0x5E29243FB56FC6D4(5, joaat("player"), iLocal_90);
	unk_0x5E29243FB56FC6D4(5, iLocal_90, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		func_7(&(Local_89[iVar0 /*8*/]));
		func_6(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		func_2(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	unk_0x1090044AD1DA76FA();
}

