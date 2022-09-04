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
	struct<24> Local_40[2];
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
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59[2];
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
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
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	
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
	Var2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (unk_0x2C83A9DA6BFFC4F9(joaat("launcher_carwash")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0x9243BAC96D64C050();
		unk_0xAA391C728106F7AF(false);
	}
	else if (unk_0xC968670BFACE42D9(99))
	{
		func_74();
	}
	if (Global_2883694)
	{
		if (unk_0x2C83A9DA6BFFC4F9(-949873222) == 0)
		{
			unk_0xD62A67D26D9653E6(-949873222);
			while (!unk_0x5F0F0C783EB16C04(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_62, 23, 1424);
		}
		unk_0x1090044AD1DA76FA();
	}
	if (func_73(unk_0xD80958FC74E988A6()))
	{
	}
	func_65();
	while (true)
	{
		func_73(unk_0xD80958FC74E988A6());
		if (func_64(unk_0xD80958FC74E988A6(), Var2, 0) > (100f + 20f))
		{
			func_74();
		}
		bVar0 = false;
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar0 = (func_60(bVar1) || func_59(bVar1));
			bLocal_58 = unk_0x8AC862B0B32C5B80(bVar1);
			func_58(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40.f_0)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_74();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0xA33CDCCDA663159E() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0xEDE476E5EE29EDB1(2, 51);
			unk_0xFE99B66D079CF6BC(0, 101, true);
			func_8();
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || func_4(unk_0xD80958FC74E988A6(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0xA33CDCCDA663159E() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
			}
			if (unk_0xB0034A223497FFCB() || unk_0x5D511E3867C87139())
			{
				return 0;
			}
			if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6()) || unk_0xCEDABC5900A0BF97(unk_0xD80958FC74E988A6())) || unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if ((unk_0xE3B6097CC25AA69E(unk_0xD80958FC74E988A6()) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0x2A74E1D5F2F00EEC(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x53E8CB4F48BFE623(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xD125AE748725C6BC(unk_0xD80958FC74E988A6()) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x580417101DDB492F(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			unk_0x8DFCED7A656F8802(true);
			unk_0x0A1CB9094635D1A6(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 20f, 0);
			if (!unk_0xCA042B6957743895((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x6EB5F71AA68F2E8E((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xE6CC9F3BA0FB9EF1((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_73(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_78319)
						{
							func_2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 2f, 1, 1056964608, 0, 1, 0);
							unk_0x92B35082E0B42F66(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
						}
					}
					unk_0xEDE476E5EE29EDB1(2, 51);
					unk_0x6EB5F71AA68F2E8E((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0xFE99B66D079CF6BC(0, 101, true);
					unk_0xFE99B66D079CF6BC(0, 75, true);
					unk_0xFE99B66D079CF6BC(0, 23, true);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x891B5B39AC6302AF(250);
				}
				if (unk_0xE6CC9F3BA0FB9EF1((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0xB16FCE9DDC7BA182())
						{
							if (func_73(unk_0xD80958FC74E988A6()))
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_78319)
								{
									func_2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 2f, 1, 1056964608, 0, 1, 0);
									unk_0x92B35082E0B42F66(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
								}
							}
							unk_0xEDE476E5EE29EDB1(2, 51);
							unk_0xFE99B66D079CF6BC(0, 101, true);
							unk_0xFE99B66D079CF6BC(0, 75, true);
							unk_0xFE99B66D079CF6BC(0, 23, true);
							func_8();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xC90D2DCACD56184C((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	if (!bParam6)
	{
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
	}
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 352, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	func_3(bParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(bParam0, fParam1, bParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x36D782F68B309BDA(bParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(bParam0))
			{
				unk_0x81E1552E35DC3839(bParam0, false);
			}
		}
	}
}

bool func_4(bool bParam0, bool bParam1)
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

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_7()
{
	if (Global_112331)
	{
		return 1;
	}
	if (!func_6(14) && unk_0x2C83A9DA6BFFC4F9(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_23011.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = unk_0xD80958FC74E988A6();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_73(bVar1))
		{
			Var0 = { unk_0xAFBD61CC738D9EB9(bVar1, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			bVar2 = bVar1;
		}
	}
	Var0 = { unk_0x0A794A5A57F8DF91(bVar2) };
	if (func_10(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		return unk_0x5333F526F6AB19AA(bVar0, 90f);
	}
	return unk_0x5333F526F6AB19AA(unk_0xD80958FC74E988A6(), 90f);
}

int func_13(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xCA042B6957743895(bParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
		func_14(bParam1, bParam2);
		uParam0->f_14 = bParam1;
		uParam0->f_15 = bParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

int func_15(var uParam0)
{
	if (unk_0xCA042B6957743895(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x4D79439A6B55AC67())
	{
		return 0;
	}
	if (unk_0x0C515FAB3FF9EA92(*uParam0, uParam0->f_14) || unk_0x0C515FAB3FF9EA92(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

bool func_16(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_17(bool bParam0, bool bParam1)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 1;
		}
		if (func_4(unk_0xD80958FC74E988A6(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0xD80958FC74E988A6(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	struct<3> Var1;
	
	Var0 = 2;
	Var1 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(bool bParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, bool bParam1)
{
	if (unk_0xCA042B6957743895(bParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
		func_23(bParam1);
		uParam0->f_14 = bParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	bool bVar0;
	
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x28D3FED7190D3A0B(bVar0))
	{
		return 1;
	}
	if (func_29(bVar0))
	{
		return 1;
	}
	if (func_26(bVar0, 3))
	{
		return 1;
	}
	return !unk_0x4C241E39B23DF959(bVar0, false);
}

int func_26(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(bParam0))
	{
		iVar0 = 0;
		if (unk_0xBA291848A0815CA9(bParam0, false, false) && unk_0xBA291848A0815CA9(bParam0, true, false))
		{
			return 1;
		}
		if (unk_0xBA291848A0815CA9(bParam0, 4, false) && unk_0xBA291848A0815CA9(bParam0, 5, false))
		{
			return 1;
		}
		if (unk_0xBA291848A0815CA9(bParam0, false, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(bParam0, true, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(bParam0, 4, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(bParam0, 5, false))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(bool bParam0)
{
	if (func_28(bParam0))
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

int func_28(bool bParam0)
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

int func_29(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(bParam0))
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

int func_30()
{
	if (unk_0x10FAB35428CCC9D7())
	{
		return func_38(unk_0x4F8644AF03D0E0D6());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_60328[iParam0];
}

int func_32()
{
	func_33();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_36(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_35(unk_0xD80958FC74E988A6());
			if (func_34(iVar0) && (!func_6(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_34(Global_113386.f_2363.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

var func_38(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_39(bParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return unk_0xA40F9C2623F6A8B5(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_73(unk_0xD80958FC74E988A6());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (func_4(unk_0xD80958FC74E988A6(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
	}
	return func_21(unk_0xD80958FC74E988A6(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_43()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x5D511E3867C87139())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_46(bool bParam0)
{
	if (func_49(bParam0))
	{
		return 1;
	}
	if (func_47(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

var func_48(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	
	fVar1 = (360f / unk_0xBBDA792448DB5A89(bParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	bVar4 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (unk_0x0BADBFA3B172435F((bVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (unk_0xD0FFB162F40A139C((bVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= bParam6)
	{
		Var3 = { Param0 };
		Var3.f_0 = (Var3.f_0 + (unk_0x0BADBFA3B172435F(bVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (unk_0xD0FFB162F40A139C(bVar4) * fParam1));
		unk_0x7FDFADE676AA3CB0(Var2, Var3, bParam2, bParam3, bParam4, iParam5);
		Var2 = { Var3 };
		bVar4 = (bVar4 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, bParam1, bParam2, bParam3, iParam4);
}

void func_55(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param1 - Param0) };
	Var1 = { func_56(Var0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	Var3 = { Param0 };
	Var4 = { Param1 };
	Var4.f_2 = Param0.f_2;
	Var5[0 /*3*/] = { Var3 - Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[1 /*3*/] = { Var3 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[2 /*3*/] = { Var4 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[3 /*3*/] = { Var4 - Var1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x7FDFADE676AA3CB0(Var5[0 /*3*/], Var5[1 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[1 /*3*/], Var5[2 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[2 /*3*/], Var5[3 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[3 /*3*/], Var5[0 /*3*/], bParam3, bParam4, bParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		Var5[(4 + iVar6) /*3*/] = { Var5[iVar6 /*3*/] };
		Var5[(4 + iVar6) /*3*/].f_2 = Param1.f_2;
		iVar6++;
	}
	unk_0x7FDFADE676AA3CB0(Var5[4 /*3*/], Var5[5 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[5 /*3*/], Var5[6 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[6 /*3*/], Var5[7 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[7 /*3*/], Var5[4 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[0 /*3*/], Var5[4 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[1 /*3*/], Var5[5 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[2 /*3*/], Var5[6 /*3*/], bParam3, bParam4, bParam5, iParam6);
	unk_0x7FDFADE676AA3CB0(Var5[3 /*3*/], Var5[7 /*3*/], bParam3, bParam4, bParam5, iParam6);
}

Vector3 func_56(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_57(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (unk_0x9CD27B0045628463() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = unk_0xE6AC6C45FBE83004(Local_59[iParam0 /*3*/], Local_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 4);
		}
	}
	else
	{
		iVar0 = unk_0x3D87450E15D98694(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &bVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (unk_0x7239B21A38F536BA(bVar1))
				{
					if (unk_0x6AC7003FA6E5575E(bVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = unk_0x9CD27B0045628463() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(bool bParam0)
{
	if (!unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bParam0)))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(bParam0, false))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(bParam0, true))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(bParam0, 2))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(bParam0, 3))
	{
		return 1;
	}
	if (unk_0x52F357A30698BCCE(bParam0, true))
	{
		if (unk_0xF8C397922FC03F41(bParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(bool bParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_28(bParam0))
	{
		return 0;
	}
	if (!unk_0x8AC862B0B32C5B80(bParam0))
	{
		return 1;
	}
	if (unk_0xE7CF3C4F9F489F0C(bParam0))
	{
		return 1;
	}
	if (!unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bParam0)))
	{
		return 1;
	}
	if (unk_0x28D3FED7190D3A0B(bParam0))
	{
		return 1;
	}
	if (func_63(bParam0, 1))
	{
		return 1;
	}
	if (func_61(bParam0))
	{
		return 1;
	}
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bParam0), &Var0, &Var1);
	if (unk_0x9F47B058362C84B5(bParam0) != joaat("zeno"))
	{
		if (unk_0x73D57CFFDD12C355((Var1.f_0 - Var0.f_0)) > 3.4f)
		{
			return 1;
		}
	}
	if (unk_0x73D57CFFDD12C355((Var1.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_78319)
	{
		if (!unk_0x01BF60A500E28887(bParam0))
		{
			return 0;
		}
	}
	if (unk_0x52F357A30698BCCE(bParam0, true) && !unk_0x8AC862B0B32C5B80(bParam0))
	{
		return 1;
	}
	if (!unk_0x52F357A30698BCCE(bParam0, true) && !unk_0x8AC862B0B32C5B80(bParam0))
	{
		return 1;
	}
	if (unk_0x9F47B058362C84B5(bParam0) == joaat("btype") || unk_0x9F47B058362C84B5(bParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0xBB40DD2270B65366(bParam0, 3, false)) || func_28(unk_0xBB40DD2270B65366(bParam0, 4, false))) || func_28(unk_0xBB40DD2270B65366(bParam0, 5, false))) || func_28(unk_0xBB40DD2270B65366(bParam0, 6, false))) || func_28(unk_0xBB40DD2270B65366(bParam0, 7, false))) || func_28(unk_0xBB40DD2270B65366(bParam0, 8, false)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	if (func_62(bVar0))
	{
		return 1;
	}
	if (bVar0 == joaat("regina"))
	{
		if (unk_0xD2E6822DBFD6C8BD(bParam0, 2))
		{
			return 1;
		}
		if (unk_0xD2E6822DBFD6C8BD(bParam0, 3) && unk_0xD2E6822DBFD6C8BD(bParam0, 4))
		{
			return 1;
		}
	}
	if (bVar0 == joaat("banshee") && unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("peyote") && unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("coquette") && !unk_0x8AC862B0B32C5B80(bParam0))
	{
		return 1;
	}
	if (bVar0 == joaat("manana") && unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("mesa") && !unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("voltic") && unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("bobcatxl") && !unk_0xD2E6822DBFD6C8BD(bParam0, true))
	{
		return 1;
	}
	if (bVar0 == joaat("ruiner"))
	{
		if (unk_0xD2E6822DBFD6C8BD(bParam0, 3) && !unk_0xD2E6822DBFD6C8BD(bParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (bVar0 == joaat("yosemite3"))
	{
		if (unk_0x772960298DA26FDB(bParam0, 5) == 4)
		{
			return 1;
		}
	}
	if (bVar0 == joaat("rt3000") && unk_0x772960298DA26FDB(bParam0, 10) == 3)
	{
		return 1;
	}
	if (bVar0 == 15214558)
	{
		switch (unk_0x772960298DA26FDB(bParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if (bVar0 == joaat("zr350") && unk_0x772960298DA26FDB(bParam0, false) > 11)
	{
		return 1;
	}
	return 0;
}

int func_62(bool bParam0)
{
	if (!unk_0x7F6DB52EEFC96DF8(bParam0))
	{
		return 1;
	}
	switch (bParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case 775514032:
		case -768236378:
			return 1;
			break;
	}
	return 0;
}

int func_63(bool bParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0x7239B21A38F536BA(bParam0) && (!bParam1 || unk_0x4C241E39B23DF959(bParam0, false)))
		{
			if (unk_0x4F14F9F870D6FBC8("TestDrive", 2))
			{
				if (unk_0x05661B80A8C9165F(bParam0, "TestDrive"))
				{
					return unk_0xDACE671663F2F5DB(bParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_64(bool bParam0, struct<3> Param1, bool bParam2)
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

void func_65()
{
	func_71(&(Local_40[0 /*24*/]), 1, "Carwash1", func_72(156), 15, "", 0, 4f);
	func_71(&(Local_40[1 /*24*/]), 1, "Carwash2", func_72(157), 15, "", 0, 4f);
	func_69(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_69(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_66(&uLocal_41, 0);
	Local_59[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_59[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_78319)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0xCCA1072C29D096C2() || func_68())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xF6201B4DAF662A9D() || func_67())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

bool func_67()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

bool func_68()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

void func_69(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_70(fParam2, 0f, 360f);
}

float func_70(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_71(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_73(bool bParam0)
{
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(bParam0, false);
}

void func_74()
{
	func_75(&Local_40);
	func_24(&uLocal_41);
	unk_0x1090044AD1DA76FA();
}

void func_75(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_76(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_76(var uParam0)
{
	*uParam0 = 0;
}

