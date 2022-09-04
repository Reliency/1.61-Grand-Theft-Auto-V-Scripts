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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	bool bLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	bool bLocal_69 = 0;
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
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0xC968670BFACE42D9(2))
	{
		func_68();
	}
	if (unk_0x7239B21A38F536BA(bScriptParam_69))
	{
		bLocal_35 = bScriptParam_69;
		bLocal_38 = bScriptParam_69;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_67();
		if (unk_0x7239B21A38F536BA(bScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0x8ABFB70C49CC43E2(bScriptParam_69, 0))
			{
				func_68();
			}
			if (unk_0xCCBA154209823057(bScriptParam_69))
			{
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					func_62();
					if (unk_0xEEF059FAD016D209(bScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									iLocal_39 = unk_0xB48FCED898292E52(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x52AF537A0C5B8AAD(iLocal_39))
									{
										unk_0x5C29F698D404C5E1(iLocal_39, 9);
									}
									unk_0x1090044AD1DA76FA();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x8F8C0E370AE62F5C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xC6ED9D5092438D91(0);
								Global_32020[iLocal_41 /*11*/].f_2 = 0;
								Global_32020[iLocal_41 /*11*/].f_6 = 1;
								Global_32020[iLocal_41 /*11*/] = unk_0xD53343AA4FB7DD28(false, 2);
								Global_32020[iLocal_41 /*11*/].f_1 = 0;
								Global_32020[iLocal_41 /*11*/].f_4 = 0;
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								Global_32020[iLocal_41 /*11*/].f_8 = 0;
								Global_32020[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&bLocal_26);
								func_53();
								func_52();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x1218E6886D3D8327(bLocal_35) && unk_0x5333F526F6AB19AA(bLocal_35, 90f))
							{
								if (func_44() || Global_32020[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									unk_0x8DFCED7A656F8802(true);
								}
							}
							if (unk_0x7239B21A38F536BA(bLocal_35))
							{
								if (!unk_0x47D6F43D77935C75(bLocal_35))
								{
									unk_0xEA1C610A04DB6BBB(bLocal_35, true, false);
								}
							}
							if (unk_0x7239B21A38F536BA(bLocal_37))
							{
								if (!unk_0x47D6F43D77935C75(bLocal_37))
								{
									unk_0xEA1C610A04DB6BBB(bLocal_37, true, false);
								}
							}
							if (unk_0x7239B21A38F536BA(bLocal_36))
							{
								if (unk_0x47D6F43D77935C75(bLocal_36))
								{
									unk_0xEA1C610A04DB6BBB(bLocal_36, false, false);
								}
							}
							if (!unk_0x0C515FAB3FF9EA92(&cLocal_44, "NULL"))
							{
								unk_0x399D2D3B33F1B8EB(&cLocal_44, false);
							}
							unk_0x113D2C5DC57E1774(false);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x7239B21A38F536BA(bLocal_38))
							{
								unk_0x845BAD77CC770633(bLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_32020[iLocal_41 /*11*/] == 3 || Global_32020[iLocal_41 /*11*/] == 2) || Global_32020[iLocal_41 /*11*/] == -1)
								{
									Global_32020[iLocal_41 /*11*/] = unk_0xD53343AA4FB7DD28(false, 2);
								}
								unk_0xBAABBB23EB6E484E(Global_32020[iLocal_41 /*11*/]);
								unk_0x2982BF73F66E9DDC(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_32020[iLocal_41 /*11*/];
								iLocal_43 = Global_32020[iLocal_41 /*11*/].f_1;
								unk_0xF7B38B8305F1FE8B(iLocal_42, func_41(iLocal_43), Global_32020[iLocal_41 /*11*/].f_9);
								unk_0xBAABBB23EB6E484E(iLocal_42);
								if (Global_32020[iLocal_41 /*11*/].f_7)
								{
									Global_32020[iLocal_41 /*11*/].f_5 = 0;
									Global_32020[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_32020[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_32020[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0xFC1E275A90D39995() == -1)
								{
									unk_0xBAABBB23EB6E484E(Global_32020[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_43(&iLocal_40);
							}
							Global_32020[iLocal_41 /*11*/].f_5 = 0;
							Global_32020[iLocal_41 /*11*/].f_4 = 0;
							Global_32020[iLocal_41 /*11*/].f_1 = 0;
							Global_32020[iLocal_41 /*11*/].f_2 = 0;
							Global_32020[iLocal_41 /*11*/].f_7 = 0;
							Global_32020[iLocal_41 /*11*/].f_8 = 0;
							Global_32020[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x1090044AD1DA76FA();
		}
	}
	func_68();
	unk_0x1090044AD1DA76FA();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_32020[iLocal_41 /*11*/] = unk_0xFC1E275A90D39995();
	}
	fLocal_30 = unk_0x2170813D3DD8661B();
	unk_0xBAABBB23EB6E484E(-1);
	func_4();
	if (unk_0x2C83A9DA6BFFC4F9(joaat("family5")) == 0)
	{
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_44, "NULL"))
		{
			unk_0x399D2D3B33F1B8EB(&cLocal_44, true);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	func_3();
	func_52();
	if (unk_0x7239B21A38F536BA(bLocal_36))
	{
		if (!unk_0x47D6F43D77935C75(bLocal_36))
		{
			unk_0xEA1C610A04DB6BBB(bLocal_36, true, false);
		}
	}
	unk_0x873FA65C778AD970(false);
	func_2();
}

void func_2()
{
	if (unk_0x48AF36444B965238())
	{
		if (iLocal_67 == 1)
		{
			unk_0x643ED62D5EA3BEBD();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		unk_0x5F15302936E07111(iLocal_33);
		if (unk_0x7239B21A38F536BA(bLocal_35))
		{
			if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xEA1C610A04DB6BBB(bLocal_35, false, false);
				if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x3A618A217E5154F0(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				unk_0x3A618A217E5154F0(0.5f, 0.5f, 1f, 1f, false, false, false, 255, false);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_37))
	{
		unk_0xEA1C610A04DB6BBB(bLocal_37, false, false);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		if (unk_0xDFB2B516207D3534(bLocal_62))
		{
			unk_0x026FB97D0A425F84(bLocal_62, false);
		}
		unk_0x865908C81A2C22E9(bLocal_62, false);
		unk_0xB4EC2312F4E5B1F1(0f);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Local_31, true, 0, 2);
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				}
			}
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), true, false);
		}
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_53, "NULL"))
		{
			if (unk_0xB65B60556E2A9225(&cLocal_53))
			{
				unk_0xDFE8422B3B94E688(&cLocal_53);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_37))
		{
			unk_0xEA1C610A04DB6BBB(bLocal_37, true, false);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0x873FA65C778AD970(false);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_14(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_13())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_12(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_14(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_12(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_10(unk_0x4F8644AF03D0E0D6())) && !func_7(unk_0x4F8644AF03D0E0D6(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_10(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_6()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
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

int func_10(bool bParam0)
{
	if (func_7(bParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (bParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return BitTest(Global_2621446, 3);
}

int func_12(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&bLocal_26) >= 1f && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_68, 1f, 1f, 1.5f, false, true, 0)) && unk_0x2107BA504071A6BB(bLocal_35) == unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())) && !func_30(8, -1)) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_31, 90f)) && !unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) && !unk_0xD9D2CFFF49FAB35F())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				func_28(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_40, 1))
			{
				func_43(&iLocal_40);
				func_55(&bLocal_26);
				Global_32020[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_ON_MASTER", false, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_65 == 0)
	{
		unk_0xEDE476E5EE29EDB1(2, 222);
		if (unk_0x580417101DDB492F(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0xFE99B66D079CF6BC(2, 200, true);
		if (unk_0x47D6F43D77935C75(unk_0xD80958FC74E988A6()))
		{
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), false, false);
		}
		if (bLocal_34)
		{
			if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
			}
		}
		unk_0x719FF505F097FD20();
		unk_0xD1C55B110E4DF534(unk_0xD80958FC74E988A6());
		func_23(1, 1);
		unk_0xEDE476E5EE29EDB1(2, 222);
		func_17(0);
		if (unk_0x580417101DDB492F(2, 222) || (unk_0xA571D46727E2B718(2) && unk_0x305C8DCD79DA8B0F(2, 200)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 30);
	}
	if (!func_13())
	{
		Global_20266.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_20203);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
}

bool func_20()
{
	return BitTest(Global_1958711, 5);
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
	return BitTest(Global_1958711, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", false, true);
				}
				if (unk_0xFC1E275A90D39995() == 0)
				{
					unk_0xBAABBB23EB6E484E(1);
				}
				else
				{
					unk_0xBAABBB23EB6E484E(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0xD95E79E8686D2C27(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x2170813D3DD8661B();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2982BF73F66E9DDC(fVar2);
				iLocal_24 = unk_0x9CD27B0045628463();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x2170813D3DD8661B();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2982BF73F66E9DDC(fVar2);
				iLocal_24 = unk_0x9CD27B0045628463();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", false, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x9CD27B0045628463() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xD95E79E8686D2C27(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(false);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		bLocal_62 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, false, 2);
		unk_0xAE306F2A904BF86E(bLocal_62, 100f);
		unk_0x026FB97D0A425F84(bLocal_62, true);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		if (unk_0x7239B21A38F536BA(bLocal_37))
		{
			unk_0xEA1C610A04DB6BBB(bLocal_37, false, false);
		}
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				bLocal_34 = true;
			}
			unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Local_31, -1, 0, 2);
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), false, false);
		}
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_53, "NULL"))
		{
			if (!unk_0xB65B60556E2A9225(&cLocal_53))
			{
				unk_0x013A80FC08F6E4F2(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0x873FA65C778AD970(true);
		iLocal_65 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0xC30338E8088E2E21();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), bParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0x48AF36444B965238())
	{
		if (iLocal_67 == 0)
		{
			unk_0x3D42B92563939375("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
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

float func_31(bool bParam0)
{
	if (func_34(bParam0))
	{
		if (func_33(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_32(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_32(bool bParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	if (bParam0)
	{
		bVar0 = unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463());
		fVar1 = (bVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar2 = unk_0x7A5487FE9FAA6B48();
		bVar3 = unk_0xBBDA792448DB5A89(bVar2);
		fVar4 = (bVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_33(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x5F15302936E07111(iLocal_33);
	unk_0x61BB1D9B3A95D802(4);
	unk_0xC6372ECD45D73BCD(true);
	unk_0xFDDC2B4ED3C69DF0(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x5F15302936E07111(unk_0x52F0982D7FD156B6());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xF1307EF624A80D87(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_32020[iLocal_41 /*11*/].f_7 = 0;
	Global_32020[iLocal_41 /*11*/] = unk_0xFC1E275A90D39995();
	fLocal_30 = unk_0x2170813D3DD8661B();
	if (unk_0xB65B60556E2A9225(&cLocal_53))
	{
		unk_0xDFE8422B3B94E688(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	func_43(&iLocal_40);
	unk_0xBAABBB23EB6E484E(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x4F8644AF03D0E0D6()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_40(int iParam0, int iParam1)
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

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()
{
	if (func_31(&bLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if ((!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_68, 1f, 1f, 1.5f, false, true, 0) || !unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_31, 90f)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0x2107BA504071A6BB(bLocal_35) != unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_97369)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_32020[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_28(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_40, 1))
	{
		func_43(&iLocal_40);
		func_55(&bLocal_26);
		Global_32020[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_ON_MASTER", false, true);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	bVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		bVar9 = Global_113112;
	}
	else
	{
		bVar9 = Global_113126;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_113122, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_113105, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_113123, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_113106, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_113124, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_113107, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_113125, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_113108, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), bVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_113112, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + bVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_113129, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_113130, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_113131, true);
	if (bVar8 > 0f && unk_0xF34EE736CF047844(bVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_50(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_49() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_48(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_49()
{
	return Global_31959;
}

int func_50(int iParam0, bool bParam1)
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

void func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_9();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_52()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x78DCDC15C9F116B4("tvscreen"))
	{
		unk_0xE9F6FFE837354DD4("tvscreen");
		iLocal_33 = -1;
		unk_0x5F15302936E07111(unk_0x52F0982D7FD156B6());
	}
}

void func_53()
{
	bool bVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (unk_0x78DCDC15C9F116B4("tvscreen"))
	{
		unk_0xE9F6FFE837354DD4("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x7239B21A38F536BA(bLocal_35))
	{
		func_68();
	}
	bVar0 = unk_0x9F47B058362C84B5(bLocal_35);
	unk_0x57D9C12635E25CE3("tvscreen", false);
	unk_0xF6C09E276AEB3F2D(bVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0x113750538FA31298(bVar0))
		{
			if (!unk_0x7239B21A38F536BA(bLocal_35))
			{
				func_68();
			}
			if (!unk_0xCCBA154209823057(bLocal_35))
			{
				func_68();
			}
			if (!unk_0x78DCDC15C9F116B4("tvscreen"))
			{
				unk_0x57D9C12635E25CE3("tvscreen", false);
			}
			if (!unk_0x113750538FA31298(bVar0))
			{
				unk_0xF6C09E276AEB3F2D(bVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_33 = unk_0x1A6478B61C6BDC3B("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0x7239B21A38F536BA(bLocal_35))
	{
		if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	bLocal_35 = false;
	bLocal_35 = unk_0x9A294B2138ABB884(joaat("v_ilev_mm_screen2"), Local_31, true, true, false);
	unk_0x8E2530AA8ADA980E(bLocal_35, bLocal_32);
	unk_0x428CA6DBD1094446(bLocal_35, true);
	unk_0xEA1C610A04DB6BBB(bLocal_35, false, false);
	bLocal_37 = false;
	bLocal_37 = unk_0x9A294B2138ABB884(joaat("v_ilev_mm_screen2_vl"), Local_31, true, true, false);
	unk_0x8E2530AA8ADA980E(bLocal_37, bLocal_32);
	unk_0x428CA6DBD1094446(bLocal_37, true);
	unk_0xEA1C610A04DB6BBB(bLocal_37, false, false);
}

void func_55(bool bParam0)
{
	func_56(bParam0, 0f);
}

void func_56(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_32(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0x3FEF770D40960D5A(bLocal_35, true) };
	bLocal_32 = unk_0xE83D4F9BA2A38914(bLocal_35);
	func_61();
	if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			Local_63 = { -9.8135f, -1440.913f, 31.3654f };
			Local_64 = { 0f, 0f, -134.3211f };
			Local_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_63 = { 1978.23f, 3819.65f, 34.2724f };
			Local_64 = { 0f, 0f, -105.15f };
			Local_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_63 = { 2.5724f, 527.9989f, 176.1619f };
			Local_64 = { 0f, 0f, -29.9488f };
			Local_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_63 = { -1160.502f, -1520.76f, 10.7393f };
			Local_64 = { 0f, 0f, 60.061f };
			Local_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_63 = { -802.8972f, 172.537f, 74.5801f };
			Local_64 = { 0f, 0f, -69.0273f };
			Local_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_63 = { -808.3051f, 171.2623f, 77.2822f };
			Local_64 = { 1.8886f, 0f, 110.9232f };
			Local_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	bLocal_36 = unk_0x9A294B2138ABB884(joaat("prop_tt_screenstatic"), Local_31, true, true, false);
	unk_0x8E2530AA8ADA980E(bLocal_36, bLocal_32);
	unk_0xEA1C610A04DB6BBB(bLocal_36, true, false);
	unk_0x428CA6DBD1094446(bLocal_36, true);
}

void func_61()
{
	unk_0xF7B38B8305F1FE8B(0, func_41(1), false);
	if (func_58(22))
	{
		unk_0xF7B38B8305F1FE8B(1, func_41(12), false);
	}
	else
	{
		unk_0xF7B38B8305F1FE8B(1, func_41(2), false);
	}
}

void func_62()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_32020[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0x7239B21A38F536BA(bLocal_38))
			{
				unk_0x3882114BDE571AD4(bLocal_38, false);
			}
			if (unk_0x7239B21A38F536BA(bLocal_35))
			{
				unk_0x3882114BDE571AD4(bLocal_35, false);
			}
			if (unk_0x7239B21A38F536BA(bLocal_37))
			{
				unk_0x3882114BDE571AD4(bLocal_37, false);
			}
			if (unk_0x7239B21A38F536BA(bLocal_36))
			{
				unk_0x3882114BDE571AD4(bLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_38))
		{
			unk_0x3882114BDE571AD4(bLocal_38, true);
		}
		if (unk_0x7239B21A38F536BA(bLocal_35))
		{
			unk_0x3882114BDE571AD4(bLocal_35, true);
		}
		if (unk_0x7239B21A38F536BA(bLocal_37))
		{
			unk_0x3882114BDE571AD4(bLocal_37, true);
		}
		if (unk_0x7239B21A38F536BA(bLocal_36))
		{
			unk_0x3882114BDE571AD4(bLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_41 == -1)
	{
		unk_0x1090044AD1DA76FA();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_32020[iLocal_41 /*11*/].f_6 = 0;
		Global_32020[iLocal_41 /*11*/].f_7 = 0;
		Global_32020[iLocal_41 /*11*/].f_8 = 0;
		Global_32020[iLocal_41 /*11*/].f_4 = 0;
		Global_32020[iLocal_41 /*11*/].f_5 = 0;
		Global_32020[iLocal_41 /*11*/].f_2 = 0;
		Global_32020[iLocal_41 /*11*/] = -1;
		Global_32020[iLocal_41 /*11*/].f_1 = 0;
		Global_32020[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_69();
	if (unk_0xB65B60556E2A9225(&cLocal_53))
	{
		unk_0xDFE8422B3B94E688(&cLocal_53);
	}
	unk_0x19AF7ED9B9D23058();
	func_2();
	unk_0x1090044AD1DA76FA();
}

void func_69()
{
	func_52();
	if (unk_0x7239B21A38F536BA(bLocal_35))
	{
		if (unk_0x9F47B058362C84B5(bLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x539E0AE3E6634B9F(&bLocal_35);
			unk_0xE532F5D78798DAAB(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_37))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_37);
		unk_0xE532F5D78798DAAB(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x7239B21A38F536BA(bLocal_36))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_36);
		unk_0xE532F5D78798DAAB(joaat("prop_tt_screenstatic"));
	}
}

