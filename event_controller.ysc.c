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
	float fLocal_47 = 0f;
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
	int iLocal_64 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xC968670BFACE42D9(34))
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_143();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0xF25D331DC2627BBC())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x5F92A689A06620AA(1))
		{
			iVar7 = unk_0xD8F66A3A60C62153(1, iVar2);
			switch (iVar7)
			{
				case 193:
					func_140();
					break;
				
				case 194:
					func_139();
					break;
				
				case 195:
					func_133(iVar2);
					break;
				
				case 196:
					func_132(iVar2);
					break;
				
				case 197:
					func_121(iVar2);
					break;
				
				case 215:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x5F92A689A06620AA(0))
	{
		iVar0 = unk_0xD8F66A3A60C62153(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x2902843FCD2B2D79(0, iVar2, &iVar1, 1);
				if (unk_0x7239B21A38F536BA(iVar1))
				{
					if (unk_0x6AC7003FA6E5575E(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_55405.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0x524AC5ECEA15343E(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_55405.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x2902843FCD2B2D79(0, iVar2, &iVar1, 1);
				if (unk_0x7239B21A38F536BA(iVar1))
				{
					if (unk_0x6AC7003FA6E5575E(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_55405.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0x524AC5ECEA15343E(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_55405.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_55405 = iVar3;
	Global_55405.f_12 = iVar4;
	Global_55405.f_24 = iVar5;
	Global_55405.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0x742B58F723233ED9(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0xCEFA968912D0F78D())
		{
			if (unk_0x3DBF2DF0AEB7D289(iVar1) || unk_0x8806CEBFABD3CE05(iVar1))
			{
				if (unk_0x8806CEBFABD3CE05(iVar1))
				{
					func_58(iVar1);
				}
				else
				{
					unk_0xFA91550DF9318B22(iVar1);
				}
				func_57(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, int iParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int* iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_48())
		{
			func_47(iParam2);
			return 0;
		}
		if (func_46())
		{
			func_47(iParam2);
			return 0;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x1A24A179F9B31654(&Param3))
		{
			func_47(iParam2);
			return 0;
		}
		if (Global_20209)
		{
			func_47(iParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_45())
		{
			if (!func_44(0))
			{
				if (bVar1)
				{
					func_47(iParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_43(unk_0x4F8644AF03D0E0D6()))
		{
			func_47(iParam2);
			return 0;
		}
	}
	if (unk_0xCA042B6957743895(&Param1))
	{
		func_47(iParam2);
		return 0;
	}
	if (unk_0xCA042B6957743895(&Param0))
	{
		func_47(iParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_42(Var2);
	if (iVar3 != -1)
	{
		func_39(iVar3);
	}
	iVar4 = unk_0x742B58F723233ED9(iParam2);
	iVar5 = unk_0x26E1CD96B0903D60(iVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2657438[iVar6 /*4*/].f_3 && unk_0x9CD27B0045628463() < Global_2657438[iVar6 /*4*/].f_2)
		{
			Global_2657438[iVar6 /*4*/].f_2 = unk_0x9CD27B0045628463() + 30000;
			iVar6 = 12;
			func_47(iParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_38(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_37(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_35(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_34(iVar10, Var7.f_1);
		iVar9 = func_33(&Var7);
		Var12 = { func_32(&Var7, 0) };
		Var13 = { func_31(&Var7) };
		iVar15 = 1;
		iVar14 = func_30(&Var7, 0);
		iVar19 = func_29(&Var7);
		uVar20 = func_27(&Var7);
		uVar21 = func_26(&Var7);
		bVar22 = func_21(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_19(unk_0x4F8644AF03D0E0D6(), Param3))
		{
			if (!unk_0x10FAB35428CCC9D7())
			{
				bVar23 = true;
			}
			else
			{
				func_47(iParam2);
				func_17(0);
				return 0;
			}
		}
		if (!func_16())
		{
			if (!bVar23)
			{
				if (func_14(unk_0x4F8644AF03D0E0D6(), Param3))
				{
					func_47(iParam2);
					func_17(0);
					return 0;
				}
			}
		}
		if (!func_13())
		{
			func_47(iParam2);
			bVar24 = true;
			func_17(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_47(iParam2);
				func_17(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1659438;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2655137[iVar26 /*99*/] = { Global_2655137[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1659438++;
	if (Global_1659438 > 12)
	{
		Global_1659438 = 12;
	}
	iVar28 = 0;
	Global_2655137[iVar28 /*99*/] = 0;
	Global_2655137[iVar28 /*99*/].f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_5 = 0;
	Global_2655137[iVar28 /*99*/].f_2 = iVar16;
	Global_2655137[iVar28 /*99*/].f_3 = 0;
	Global_2655137[iVar28 /*99*/].f_4 = iVar17;
	Global_2655137[iVar28 /*99*/].f_6 = { Param0 };
	Global_2655137[iVar28 /*99*/].f_12 = uVar20;
	Global_2655137[iVar28 /*99*/].f_13 = uVar21;
	Global_2655137[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2655137[iVar28 /*99*/].f_31), "", 64);
	Global_2655137[iVar28 /*99*/].f_49 = iVar10;
	Global_2655137[iVar28 /*99*/].f_50 = iVar8;
	Global_2655137[iVar28 /*99*/].f_51 = iVar9;
	Global_2655137[iVar28 /*99*/].f_91 = iParam2;
	Global_2655137[iVar28 /*99*/].f_57 = { Var12 };
	Global_2655137[iVar28 /*99*/].f_73 = { Var13 };
	Global_2655137[iVar28 /*99*/].f_52 = iVar14;
	Global_2655137[iVar28 /*99*/].f_53 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2655137[iVar28 /*99*/].f_56 = iVar15;
	Global_2655137[iVar28 /*99*/].f_90 = uParam4;
	Global_2655137[iVar28 /*99*/].f_92 = -1;
	Global_2655137[iVar28 /*99*/].f_93 = iVar18;
	Global_2655137[iVar28 /*99*/].f_94 = Global_2657490;
	Global_2655137[iVar28 /*99*/].f_95 = iVar19;
	Global_2655137[iVar28 /*99*/].f_98 = unk_0x1A24A179F9B31654(&Param3);
	if (Global_2655137[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2655137[iVar28 /*99*/].f_51 == 1)
		{
			Global_2655137[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2655137[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2655137[iVar28 /*99*/].f_97 = 0;
	Global_2655137[iVar28 /*99*/].f_89 = iParam5;
	Global_2657490++;
	Global_2655137[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2655137[iVar28 /*99*/].f_47 != -1)
	{
		Global_2655137[iVar28 /*99*/].f_48 = unk_0x9CD27B0045628463() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!func_16())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x1A24A179F9B31654(&uParam0))
	{
		return 0;
	}
	if (Global_2655137[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_12(0))
	{
		return 0;
	}
	if (func_16())
	{
		if (!func_11())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x4F8644AF03D0E0D6()) };
	if (!bParam14 && !unk_0x57DBA049E110F217(&Var0, &uParam0))
	{
		if (!unk_0x1A24A179F9B31654(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xCCA1072C29D096C2() || (func_10() && iParam0 == 0))
	{
		if (unk_0x72D918C99BCACC54(1) == 0 || unk_0xAEEF48CDF5B6CE7C(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_10()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

int func_11()
{
	if (unk_0xCCA1072C29D096C2() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (unk_0xF6201B4DAF662A9D() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if ((func_10() && unk_0x1353F87E89946207() == 0) && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (func_16() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (unk_0x48AF36444B965238() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)
{
	if (unk_0xCCA1072C29D096C2() || (func_10() && iParam0 == 0))
	{
		if (unk_0x72D918C99BCACC54(0) == 0 || unk_0xAEEF48CDF5B6CE7C(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_13()
{
	if (!unk_0xF6201B4DAF662A9D())
	{
		return 1;
	}
	return unk_0x25CB5A9F37BFD063();
}

int func_14(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(bParam0))
	{
		if (func_16())
		{
			if (unk_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x72D918C99BCACC54(0))
		{
			if (!unk_0x72D918C99BCACC54(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

bool func_16()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_17(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xF6201B4DAF662A9D())
		{
			return;
		}
	}
	if (func_16())
	{
		return;
	}
	iVar0 = unk_0x9CD27B0045628463();
	if (iVar0 < Global_2657487)
	{
		return;
	}
	if (unk_0x4D79439A6B55AC67())
	{
		return;
	}
	if (bParam0)
	{
		func_18("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_18("INV_RESTRICT", -1);
	}
	Global_2657487 = (iVar0 + 1800000);
}

void func_18(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_19(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(bParam0))
	{
		if (func_16())
		{
			if (unk_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!func_20())
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (func_10())
	{
		if (unk_0x72D918C99BCACC54(1))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	else if (func_16())
	{
		if (unk_0x595F028698072DD9(0, -3, true))
		{
			return 1;
		}
	}
	else if (unk_0x48AF36444B965238())
	{
		if (unk_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2660249.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0xCA042B6957743895(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x0C515FAB3FF9EA92(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x0C515FAB3FF9EA92(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x0C515FAB3FF9EA92(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x0C515FAB3FF9EA92(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x0C515FAB3FF9EA92(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x0C515FAB3FF9EA92(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_23(var uParam0)
{
	if (Global_2660249)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_2660249.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_24(int iParam0)
{
	return iParam0 == 9999;
}

int func_25(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2657492.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x0C515FAB3FF9EA92(&(Global_2657492.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!BitTest(Global_2657492.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_27(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_22(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_28(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_28(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar1 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2660249.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660383.f_513[uParam0->f_9];
			}
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_31(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_25(uParam0))
	{
		return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_32(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660383[uParam0->f_9 /*16*/];
			}
			return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_25(uParam0))
	{
		return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)
{
	if (func_24(iParam1))
	{
		if (Global_2660249)
		{
			return Global_2660249.f_1.f_53;
		}
		return 304;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_998606.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_1020252.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 304;
	}
	return 304;
}

int func_35(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x10FAB35428CCC9D7())
	{
		return 0;
	}
	if (unk_0xCA042B6957743895(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 2018;
	if (!bParam2)
	{
		iVar2 = 2000;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x0C515FAB3FF9EA92(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x0C515FAB3FF9EA92(&(Global_998606.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_998606.f_604[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x0C515FAB3FF9EA92(&(Global_1020252.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1020252.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x4F8644AF03D0E0D6();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 181;
		
		case 14:
			return 182;
		
		case 122:
			return 186;
		
		case 11:
			return 183;
		
		case 13:
			return 184;
		
		case 12:
			return 185;
		
		case 8:
			return 188;
		
		case 1:
			return 189;
		
		case 5:
			return 187;
		
		case 6:
			return 190;
		
		case 3:
			return 193;
		
		case 0:
			return 191;
		
		case 2:
			return 192;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 150:
			return 127;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		case 271:
			return 134;
		
		case 273:
			return 135;
		
		case 276:
			return 136;
		
		case 277:
			return 137;
		
		case 262:
			return 138;
		
		case 263:
			return 139;
		
		case 264:
			return 140;
		
		case 268:
			return 141;
		
		case 269:
			return 143;
		
		case 270:
			return 144;
		
		case 275:
			return 145;
		
		case 286:
			return 146;
		
		case 267:
			return 148;
		
		case 266:
			return 147;
		
		case 287:
			return 149;
		
		case 289:
			return 150;
		
		case 147:
			return 151;
		
		case 291:
			return 152;
		
		case 292:
			return 153;
		
		case 293:
			return 154;
		
		case 294:
			return 155;
		
		case 295:
			return 156;
		
		case 296:
			return 157;
		
		case 297:
			return 158;
		
		case 298:
			return 159;
		
		case 299:
			return 160;
		
		case 300:
			return 161;
		
		case 301:
			return 162;
		
		default:
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int* iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xCA042B6957743895(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x43E4111189E54F0E(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xCE94AEBA5D82908A(sParam0, 0, 5), 8);
	if (!unk_0x0C515FAB3FF9EA92(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0xCE94AEBA5D82908A(sParam0, 5, 12), 16);
	if (unk_0x0C515FAB3FF9EA92(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x0C515FAB3FF9EA92(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x0C515FAB3FF9EA92(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x0C515FAB3FF9EA92(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x0C515FAB3FF9EA92(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x0C515FAB3FF9EA92(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xCE94AEBA5D82908A(sParam0, 12, iVar0), 8);
	if (!unk_0x5A5F40FE637EB584(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_38(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1659438)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x9CD27B0045628463() > Global_2657438[iVar0 /*4*/].f_2 || Global_2657438[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xCEFA968912D0F78D() > 0 && Global_2655137[iParam0 /*99*/].f_91 < unk_0xCEFA968912D0F78D())
			{
				Global_2657438[iVar0 /*4*/].f_3 = unk_0x26E1CD96B0903D60(Global_2655137[iParam0 /*99*/].f_91);
				Global_2657438[iVar0 /*4*/].f_2 = unk_0x9CD27B0045628463() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2655137[iParam0 /*99*/].f_92 != -1)
	{
		unk_0xBE4390CB40B3E627(Global_2655137[iParam0 /*99*/].f_92);
	}
	if (!Global_2655137[iParam0 /*99*/].f_56)
	{
		if (Global_2655137[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x5A34CD9C3C5BEC44(Global_2655137[iParam0 /*99*/].f_52);
		}
	}
	func_47(Global_2655137[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1659438)
	{
		Global_2655137[iVar1 /*99*/] = { Global_2655137[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_41(iVar1);
	Global_1659438 = (Global_1659438 - 1);
	if (Global_1659411)
	{
		if (Global_1659409 > 0)
		{
			func_40();
		}
	}
}

void func_40()
{
	Global_1659411 = 0;
}

void func_41(int iParam0)
{
	Global_2655137[iParam0 /*99*/] = 0;
	Global_2655137[iParam0 /*99*/].f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_31), "", 64);
	Global_2655137[iParam0 /*99*/].f_47 = -1;
	Global_2655137[iParam0 /*99*/].f_48 = unk_0x9CD27B0045628463();
	Global_2655137[iParam0 /*99*/].f_49 = -1;
	Global_2655137[iParam0 /*99*/].f_50 = -1;
	Global_2655137[iParam0 /*99*/].f_51 = -1;
	Global_2655137[iParam0 /*99*/].f_52 = 0;
	Global_2655137[iParam0 /*99*/].f_53 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2655137[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_73), "", 64);
	Global_2655137[iParam0 /*99*/].f_89 = 0;
	Global_2655137[iParam0 /*99*/].f_90 = 0;
	Global_2655137[iParam0 /*99*/].f_91 = -1;
	Global_2655137[iParam0 /*99*/].f_92 = -1;
	Global_2655137[iParam0 /*99*/].f_93 = 0;
	Global_2655137[iParam0 /*99*/].f_94 = -1;
	Global_2655137[iParam0 /*99*/].f_95 = 0;
	Global_2655137[iParam0 /*99*/].f_96 = 0;
	Global_2655137[iParam0 /*99*/].f_97 = 0;
	Global_2655137[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (unk_0x0C515FAB3FF9EA92(&uParam0, &(Global_2655137[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(bool bParam0)
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 22);
}

int func_44(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_45()
{
	if (Global_113386.f_9085.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_139, 2);
}

void func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x742B58F723233ED9(iParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xCEFA968912D0F78D())
	{
		return;
	}
	if (unk_0xF0210268DB0974B1(iVar0))
	{
		return;
	}
}

bool func_48()
{
	return Global_1575016 == 10;
}

int func_49()
{
	if (!Global_78319)
	{
		return 1;
	}
	else if (func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (!func_51())
	{
		return 0;
	}
	return 1;
}

int func_51()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return func_52(120, -1);
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1574918;
}

bool func_55()
{
	return Global_1575046;
}

bool func_56()
{
	return Global_1575048;
}

void func_57(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_54();
	}
	Global_1575038[iVar0] = uParam0;
}

void func_58(int iParam0)
{
	func_114();
	if (func_113(1))
	{
		if (!func_102())
		{
			if (!func_91(1))
			{
				if (unk_0x05095437424397FA())
				{
					func_90();
				}
				func_61(1, 0);
				unk_0xFA91550DF9318B22(iParam0);
				func_60();
				func_59();
			}
		}
	}
}

void func_59()
{
	Global_1931618.f_7 = 1;
}

void func_60()
{
	Global_1931618.f_6 = 1;
}

void func_61(int iParam0, bool bParam1)
{
	if (func_113(iParam0))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_5 = 1;
		func_63(iParam0, 0);
		func_62();
		if (bParam1)
		{
			Global_1931618 = 1;
		}
	}
}

void func_62()
{
	Global_1931618.f_2 = 1;
}

void func_63(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x05095437424397FA())
	{
		if (bParam1)
		{
			func_89();
			func_75(unk_0x4F8644AF03D0E0D6(), 0, 81920, 0);
			Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_95 = 8;
			func_74();
			func_73();
		}
		func_72(iParam0);
		func_71(iParam0);
		func_69();
		func_68();
		func_62();
	}
	Var0 = { func_67(iParam0) };
	func_66(iParam0);
	func_64(&Var0);
}

void func_64(char* sParam0)
{
	StringCopy(&(Global_2714762.f_860), sParam0, 24);
	if (func_65())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_65()
{
	return BitTest(Global_2715699.f_1.f_2809, 5);
}

void func_66(int iParam0)
{
	Global_1931618.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_67(int iParam0)
{
	return Global_1931618.f_16[iParam0 /*44*/].f_6;
}

void func_68()
{
	Global_2714762.f_9 = 100;
}

void func_69()
{
	unk_0x933D6A9EEC1BACD0(&Global_2714762, 5);
	func_70();
}

void func_70()
{
	unk_0x933D6A9EEC1BACD0(&Global_2714762, 8);
}

void func_71(var uParam0)
{
	Global_1931618.f_8 = uParam0;
}

void func_72(var uParam0)
{
	Global_1931618.f_9 = uParam0;
}

void func_73()
{
	Global_2723612.f_1 = 0;
}

void func_74()
{
	char* sVar0;
	
	StringCopy(&(Global_2714762.f_860), sVar0, 24);
}

void func_75(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x18C1270EA7F199BC())
		{
			unk_0x5262CC1995D07E09(false);
		}
	}
	if (func_88())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		iVar0 = iParam2;
		unk_0x8D32347D6D4C40A2(bParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x05095437424397FA())
		{
			bVar1 = false;
		}
		if (!func_86())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xB8DFD30D6973E135(bParam0) && (unk_0x5E9564D8246B909A(bParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(bParam0), false))
			{
				return;
			}
			iVar27 = unk_0x43A66C31C68491C0(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x10FAB35428CCC9D7())
				{
					unk_0x416DBD4CD6ED8DD2(true);
				}
				else if (bVar14 || (!func_84(unk_0x4F8644AF03D0E0D6(), 0) && !func_83()))
				{
					unk_0xEA1C610A04DB6BBB(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (unk_0x10FAB35428CCC9D7() && !bVar19)
					{
						unk_0x416DBD4CD6ED8DD2(false);
					}
					Global_2689235[bParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_80(0, 0, 0);
					if (bVar25)
					{
						unk_0x31B73D1EA9F01DA2();
					}
				}
				if (!func_79(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
				{
					if (!bVar22)
					{
						unk_0x1A9205C1B9EE827F(iVar27, true, false);
					}
				}
				if (!unk_0xB346476EF1A64897(iVar27))
				{
					if (!bVar21)
					{
						unk_0x428CA6DBD1094446(iVar27, false);
					}
					unk_0x3910051CCECDB00C(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x428CA6DBD1094446(iVar27, false);
				}
				unk_0x63F58F7C80513AAD(iVar27, true);
				unk_0x239528EACDC3E7DE(bParam0, false);
				unk_0x6BC97F4F4BB3C04B(bParam0, false);
				if (unk_0x654CD0A825161131(iVar27) && unk_0x7350823473013C02(iVar27))
				{
					unk_0x4668D80430D6C299(iVar27);
				}
				unk_0xB128377056A54E2A(iVar27, true);
				if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()) == 0)
				{
					func_78();
					func_77();
				}
				if (unk_0x02B15662D7F8886F())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xA41A05B6CB741B85())
				{
				}
				Global_2689235[bParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_79(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
				{
					if (!bVar22)
					{
						unk_0x1A9205C1B9EE827F(iVar27, !bVar15, false);
					}
					if (!unk_0xB346476EF1A64897(iVar27))
					{
						if (!bVar21)
						{
							unk_0x428CA6DBD1094446(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x3910051CCECDB00C(iVar27, true);
						}
					}
					if (func_76(Global_4718592.f_168757))
					{
						unk_0x428CA6DBD1094446(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x239528EACDC3E7DE(bParam0, false);
				}
				else
				{
					unk_0x239528EACDC3E7DE(bParam0, true);
				}
				unk_0x63F58F7C80513AAD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xD839450756ED5A80(iVar27) && !unk_0x997ABD671D25CA0B(iVar27, false))
					{
						unk_0xAAA34F8A7CB32098(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x8D32347D6D4C40A2(bParam0, bParam1, iVar28);
		}
	}
}

bool func_76(int iParam0)
{
	return iParam0 == 17;
}

void func_77()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_78()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_79(int iParam0)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x77F1BEB8863288D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_80(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5F9532F3B5CC2551(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x12534C348C6CB68B(iParam1))
			{
				if (!unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), unk_0x6C0E2E0125610278(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_82();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x2A2173E46DAECD12(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), true);
			}
		}
		if (func_84(unk_0x4F8644AF03D0E0D6(), 0))
		{
			unk_0x419594E137637120(bParam0, iParam1, true);
		}
		else
		{
			unk_0x423DE3854BB50894(bParam0, iParam1);
		}
		unk_0x1A5CD7752DD28CD3(bParam0, iParam1);
		func_81(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_81(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
	}
}

void func_82()
{
	int iVar0;
	
	if (!unk_0x048746E388762E11())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), 2);
			unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), false);
		}
	}
}

bool func_83()
{
	return BitTest(Global_2621446, 3);
}

bool func_84(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_85(-1, 0) == 8;
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

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_86()
{
	if (func_87() == 0)
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	return Global_1574632.f_18;
}

int func_88()
{
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_89()
{
	unk_0x933D6A9EEC1BACD0(&Global_2714762, 7);
}

void func_90()
{
	unk_0x933D6A9EEC1BACD0(&(Global_2714762.f_2), 15);
}

int func_91(int iParam0)
{
	if (iParam0 || func_101())
	{
		if (!func_93(1))
		{
			return 1;
		}
		if (!func_92())
		{
			return 1;
		}
		if (unk_0x655B91F1495A9090())
		{
			return 1;
		}
	}
	return 0;
}

bool func_92()
{
	return Global_1931618.f_4;
}

int func_93(bool bParam0)
{
	if (!func_98())
	{
		return 0;
	}
	if ((func_96(func_97(-1), 0) >= 1 || func_52(123, -1)) && func_52(133, -1))
	{
		func_95();
		return 1;
	}
	else if (bParam0)
	{
		func_94();
	}
	return 0;
}

void func_94()
{
	Global_1931618.f_5 = 1;
}

void func_95()
{
	Global_1931618.f_4 = 1;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	bVar1 = 8000;
	bVar2 = false;
	bVar3 = ((bVar1 - bVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (bVar1 == bVar2)
		{
			iVar0 = 8000;
			if (bVar3 == 0)
			{
				bVar3 = true;
			}
			return bVar3;
		}
		if (Global_295824[bVar3] == iParam0)
		{
			bVar1 = bVar3;
			bVar2 = bVar3;
		}
		else if (Global_295824[bVar3] < iParam0)
		{
			if (bVar2 == bVar3)
			{
				bVar2++;
			}
			else
			{
				bVar2 = bVar3;
			}
		}
		else if (bVar1 == bVar3)
		{
			bVar1 = (bVar1 - 1);
		}
		else
		{
			bVar1 = bVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(bVar1) - unk_0xBBDA792448DB5A89(bVar2)) / 2f) + unk_0xBBDA792448DB5A89(bVar2));
		bVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_97(int iParam0)
{
	return Global_1659759[func_53(iParam0)];
}

int func_98()
{
	if (func_100() && func_99(0))
	{
		return 1;
	}
	return 0;
}

var func_99(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_100()
{
	return func_99(func_54() + 1);
}

var func_101()
{
	return Global_1931618.f_2;
}

int func_102()
{
	if (((((func_112() || !func_110(-1)) || !func_108()) || !func_105()) || !func_104()) || func_103())
	{
		return 1;
	}
	return 0;
}

var func_103()
{
	return Global_2725416;
}

int func_104()
{
	if (unk_0xC488FF2356EA7791(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	if (func_106(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_106(int* iParam0)
{
	if (func_107())
	{
		*iParam0 = 11;
		return 1;
	}
	return unk_0xAF50DA1A3F8B1BA4(iParam0);
}

bool func_107()
{
	return Global_32236;
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_109(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_52(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_111(iParam0);
	iVar1 = unk_0xC488FF2356EA7791(iVar0);
	if (BitTest(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	switch (iParam0)
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

var func_112()
{
	return Global_2714762.f_743;
}

bool func_113(int iParam0)
{
	return Global_1931618.f_16[iParam0 /*44*/].f_4;
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	func_120();
	if (unk_0xFF8F3A92B75ED67A() && !func_117())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x4A7D6E727F941747(func_116(iVar0));
			if (iVar1 > 0)
			{
				Global_1931618.f_16[iVar0 /*44*/] = iVar1;
				func_115(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1931618.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1931618.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1931618.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1931618.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1931618.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar2))
		{
			Global_1931618.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1931618.f_1 = 1;
		}
		Global_1931618.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1931618.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_117()
{
	if (!func_118())
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (func_119())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_119()
{
	return Global_2725911;
}

void func_120()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1931618 = { Var0 };
}

void func_121(int iParam0)
{
	var uVar0;
	
	if (Global_78319)
	{
		unk_0x67C540AA08E4A6F5(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
	}
	else
	{
		unk_0x67C540AA08E4A6F5(-1, "Hang_Up", &Global_20255, true);
	}
	if (unk_0x2902843FCD2B2D79(1, iParam0, &uVar0, 21))
	{
		func_123();
	}
	Global_2821909.f_1 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	func_122(&(Global_2821909.f_20));
}

void func_122(var uParam0)
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

void func_123()
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (unk_0x1077788E268557C2())
	{
		if (unk_0x855BC38818F6F684())
		{
			while (unk_0xEF0912DDF7C4CB4B())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x6793E42BE02B575D();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_131(Global_2821909.f_20))
		{
			if (unk_0x1A24A179F9B31654(&(Global_2821909.f_20)))
			{
				if (!unk_0x87EB7A3FFCB314DB(&(Global_2821909.f_20)))
				{
					func_130();
				}
			}
		}
		else
		{
			func_130();
		}
	}
	else
	{
		func_130();
	}
	if (Global_2821909.f_37)
	{
		func_124(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

void func_124(int iParam0)
{
	if (func_129())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_128())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
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
	if (!func_125())
	{
		Global_20266.f_1 = 3;
	}
}

int func_125()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_127(0))
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

int func_127(int iParam0)
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

bool func_128()
{
	return BitTest(Global_1958711, 5);
}

bool func_129()
{
	return BitTest(Global_1958711, 19);
}

void func_130()
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_122(&(Global_2821909.f_20));
}

bool func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6F79B93B0A8E4133(&uParam0, 13);
}

void func_132(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 15))
	{
		Global_2821909.f_33 = Var0.f_1;
		Global_2821909.f_34 = Var0.f_0;
	}
}

void func_133(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 21))
	{
		if (Global_2821909.f_3 == 0)
		{
			if (!func_134(&(Var0.f_8)))
			{
				unk_0x7F8413B7FC2AA6B9(false, 2);
			}
			else
			{
				Global_2821909.f_3 = 1;
				MemCopy(&(Global_2821909.f_4), {Var0}, 16);
				Global_2821909.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
				Global_2821909.f_58 = -2;
				Global_2821909.f_56 = 0;
				Global_2821909.f_57 = 0;
			}
		}
		else if (!func_134(&(Var0.f_8)))
		{
			unk_0x7F8413B7FC2AA6B9(false, 2);
		}
		else
		{
			Global_2821909.f_3 = 1;
			MemCopy(&(Global_2821909.f_4), {Var0}, 16);
			Global_2821909.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
			Global_2821909.f_58 = -2;
			Global_2821909.f_56 = 0;
			Global_2821909.f_57 = 0;
		}
	}
}

int func_134(var* uParam0)
{
	if (Global_78319)
	{
		if (func_50() == 0)
		{
			return 0;
		}
		if (func_138(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xE81AFC1BC4CC41CE(unk_0xD80958FC74E988A6()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	if (Global_2821909.f_1)
	{
	}
	if (Global_20472 == 1)
	{
		return 0;
	}
	if (Global_1836606)
	{
		return 0;
	}
	if (Global_2821909.f_36)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (((Global_43052 != 6 && Global_43052 != 8) && Global_43052 != 12) && Global_43052 != 15)
	{
		return 0;
	}
	if (func_137() && !func_136(12))
	{
		return 0;
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		return 0;
	}
	if (unk_0x991251AFC3981F84())
	{
		return 0;
	}
	if (!func_135(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (Global_78579)
	{
		return 0;
	}
	if (unk_0xD83C2B94E7508980())
	{
		if (!unk_0x3FB99A8B08D18FD6(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (!unk_0x1077788E268557C2())
	{
		return 0;
	}
	if (unk_0xCE60DE011B6C7978(uParam0) || unk_0xE944C4F5AF1B5883(uParam0))
	{
		return 0;
	}
	if (unk_0xDF02A2C93F1F26DA(uParam0) || unk_0x15337C7C268A27B2(uParam0))
	{
		return 0;
	}
	if (unk_0x2FC5650B0271CB57())
	{
		if (func_16())
		{
			if (unk_0xFD8B834A8BA05048())
			{
				return 0;
			}
		}
		else if (func_10())
		{
			return 0;
		}
	}
	return 1;
}

int func_135(bool bParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (bParam0 != unk_0x4F8644AF03D0E0D6())
	{
		iVar0 = bParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xCCA1072C29D096C2() || func_10())
	{
		if (unk_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	if (unk_0xF6201B4DAF662A9D() || func_16())
	{
		if (bParam0 == unk_0x4F8644AF03D0E0D6())
		{
			if (unk_0x83F28CE49FBBFFBA(0, -3, true) || unk_0xAEEF48CDF5B6CE7C(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(bParam0) };
			if (unk_0xAEEF48CDF5B6CE7C(0, -1) || (unk_0xAEEF48CDF5B6CE7C(1, -1) && unk_0x1A24A179F9B31654(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (unk_0x25CB5A9F37BFD063())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_136(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_137()
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
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

void func_139()
{
	func_130();
}

void func_140()
{
	Global_2821909.f_1 = 1;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	if (unk_0x85F01B8D5B90570E(Global_20247) == 1)
	{
		if (Global_20254)
		{
			func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_20209)
			{
				func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_141(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_142(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_142(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_142(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_142(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_142(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_142(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_143()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_55405 = 0;
		Global_55405.f_12 = 0;
		Global_55405.f_24 = 0;
		Global_55405.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_55405.f_1[iVar0] = 0;
			Global_55405.f_13[iVar0] = 0;
			Global_55405.f_25[iVar0] = 0;
			Global_55405.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

