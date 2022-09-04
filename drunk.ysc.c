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
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0xC968670BFACE42D9(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_55 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_170();
	func_166();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((unk_0x10FAB35428CCC9D7() && !unk_0x05095437424397FA()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

bool func_3()
{
	return Global_2714762.f_691;
}

bool func_4()
{
	return Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_192 != 0;
}

void func_5()
{
	Global_2714762.f_756 = 1;
}

var func_6()
{
	return Global_2714762.f_735;
}

var func_7()
{
	return BitTest(Global_2714762.f_2, 11);
}

bool func_8()
{
	return BitTest(Global_2715699.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.f_0)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.f_0 == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!BitTest(Global_1946250.f_3, 27))
	{
		unk_0xAE99FB955581844A(Local_43.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1940653 = 1;
	if (!unk_0xB16FCE9DDC7BA182())
	{
		unk_0x891B5B39AC6302AF(2500);
		while (unk_0x797AC7CB535BA28F())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xDE564951F95E09ED(unk_0xD80958FC74E988A6(), false, true);
		}
		while ((unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false)) && unk_0x422F32CC7E56ABAD(unk_0xD80958FC74E988A6()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE80492A9AC099A93(&(Global_1946250.f_3), 27);
		func_91(unk_0x4F8644AF03D0E0D6(), 0, 57344, 0);
		Global_2667225.f_2681 = 1;
		if (BitTest(Global_1946250, 15))
		{
			unk_0xE80492A9AC099A93(&Global_1946250, 15);
		}
		if (BitTest(Global_1946250.f_2, 6))
		{
			unk_0xE80492A9AC099A93(&(Global_1946250.f_2), 6);
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			Global_2667225.f_2682 = 1;
		}
		else
		{
			Global_2667225.f_2682 = 0;
		}
		if (unk_0xC912AF078AF19212())
		{
			unk_0x1C9D7949FA533490(false);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2.f_0 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2.f_0 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2.f_0 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2.f_0 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2.f_0 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
	{
		unk_0x06843DA7060A026B(Local_43.f_1, Var2.f_5, true, false, false, true);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
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

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	bool bVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	float fVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
	}
	unk_0xDD19FA1C6D657305(uParam1->f_5, 4500f);
	unk_0x5D6B2D4830A67C62(uParam1->f_5, 4500f);
	unk_0xA56F01F3765B93A0(uParam1->f_5, 5f, true, false, false, false);
	unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), uParam1->f_5, true, false, false, true);
	unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x577D1284D6873711(true);
	unk_0xD3BD40951412FEF6(*uParam1);
	if (unk_0xCA042B6957743895(uParam1->f_16))
	{
	}
	else
	{
		unk_0xD3BD40951412FEF6(uParam1->f_16);
	}
	if (!unk_0xB16FCE9DDC7BA182())
	{
		unk_0x891B5B39AC6302AF(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xB16FCE9DDC7BA182())
	{
		unk_0x891B5B39AC6302AF(0);
	}
	iVar1 = unk_0x9CD27B0045628463() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x9CD27B0045628463())
	{
		bVar2 = true;
		unk_0xD3BD40951412FEF6(*uParam1);
		if (!unk_0xD031A9162D01088C(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xCA042B6957743895(uParam1->f_16))
		{
			unk_0xD3BD40951412FEF6(uParam1->f_16);
			if (!unk_0xD031A9162D01088C(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xB16FCE9DDC7BA182())
		{
			unk_0x891B5B39AC6302AF(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xBF1A602B5BA52FEE(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		unk_0x01C7B9B38428AEB6(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), false, false, false, false, false, false, 0);
		unk_0xA56F01F3765B93A0(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), true, false, false, false);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
		unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
	}
	unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
	unk_0x577D1284D6873711(false);
	unk_0xA56F01F3765B93A0(uParam1->f_5, 15f, true, false, false, false);
	unk_0x4759CC730F947C81();
	unk_0x48ADC8A773564670();
	func_51();
	while (func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
	{
		unk_0xD4E8E24955024033(250);
	}
	unk_0xDA66D2796BA33F12(true);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		iVar4 = unk_0x8C18E0F9080ADD73(uParam1->f_5, uParam1->f_8, 2);
		unk_0xD9A897A4C6C2974F(iVar4, false);
		unk_0x394B9CD12435C981(iVar4, false);
		iVar5 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(unk_0xD80958FC74E988A6(), uParam1->f_18);
		unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		unk_0x129466ED55140F8D(unk_0xD80958FC74E988A6(), true);
		unk_0x749FADDF97DFE930(unk_0x4F8644AF03D0E0D6(), 1);
		bVar3 = unk_0xAF9E59B1B1FBF2A0(unk_0xD80958FC74E988A6(), 77);
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 77, true);
		unk_0xE32EFE9AB4A9AA0C(iVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		if (!unk_0xCA042B6957743895(uParam1->f_16) && !unk_0xCA042B6957743895(uParam1->f_17))
		{
			unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0f, false, false, false);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xCA042B6957743895(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xCA042B6957743895(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, unk_0xD80958FC74E988A6(), sVar12, 0, 1);
	}
	if (unk_0x25D39B935A038A26(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0x25D39B935A038A26(iVar4) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (!bVar8)
			{
				if (!unk_0xB16FCE9DDC7BA182())
				{
					if (!unk_0xCA042B6957743895(uParam1->f_26))
					{
						unk_0x2206BF9A37B7F724(uParam1->f_26, false, false);
						bVar8 = true;
					}
					if (!unk_0xCA042B6957743895(uParam1->f_27))
					{
						if (!unk_0xCA042B6957743895(uParam1->f_28))
						{
							unk_0x67C540AA08E4A6F5(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!unk_0xCA042B6957743895(uParam1->f_29))
						{
							unk_0x67C540AA08E4A6F5(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x719FF505F097FD20();
			unk_0x6806C51AD12B83B8(18);
			unk_0xB57D8DD645CFA2CF();
			func_40(0);
			iVar15 = unk_0x9CD27B0045628463();
			if (iVar15 >= (Global_43603 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0xE4A310B1D7FA73CC(iVar4);
			if (!unk_0xCA042B6957743895(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), unk_0xD24D37CC275948CC(sVar13)))
			{
				iVar19 = (unk_0xD95E79E8686D2C27(2, 195) - 128);
				iVar20 = (unk_0xD95E79E8686D2C27(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0x8D4D46230B2C353A() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { unk_0xA200EB1EE790F448() };
						Var23 = { unk_0x17C07FC640E86B4E(unk_0xD80958FC74E988A6(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0xF1B760881820C952(Var22, Var23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0xD80958FC74E988A6(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x9CD27B0045628463();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { unk_0x5B4E4C817FCC2DFB(2) };
							fVar28 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
							fVar29 = Var27.f_2;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						unk_0x6D0858B8EDFD2B7D(fVar25, 1f);
						unk_0xB4EC2312F4E5B1F1(fVar26);
						unk_0x759E13EBC1C15C5A(fVar25);
						unk_0x103991D4A307D472(fVar26);
						Var31 = { unk_0xA200EB1EE790F448() };
						Var32 = { unk_0x14D6F5678D8F1B37() };
						fVar33 = unk_0xF1B760881820C952(Var31, Var32, true);
						bVar34 = unk_0xF2DB717A73826179((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), unk_0xD24D37CC275948CC(sVar14)) || iVar18)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Idle"), true, 0, false);
							unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Walk"), true, 0, false);
							unk_0x477D5D63E63ECA5D(unk_0x4F8644AF03D0E0D6(), 1f, 500, 0f, true, false);
							if (unk_0x8D4D46230B2C353A() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { unk_0x5B4E4C817FCC2DFB(2) };
									fVar38 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
									fVar39 = Var37.f_2;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								unk_0x6D0858B8EDFD2B7D(fVar35, 1f);
								unk_0xB4EC2312F4E5B1F1(fVar36);
								Var41 = { unk_0xA200EB1EE790F448() };
								Var42 = { unk_0x14D6F5678D8F1B37() };
								fVar43 = unk_0xF1B760881820C952(Var41, Var42, true);
								bVar44 = unk_0xF2DB717A73826179((fVar43 * 1000f));
								unk_0x07E5B515DB0636FC(false, true, bVar44, false, false, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x25D39B935A038A26(iVar4))
					{
						unk_0x6D38F1F04CBB37EA(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x1EE7063B80FFC77C(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
	}
	bVar45 = unk_0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_32)
	{
		unk_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0xD9D2CFFF49FAB35F())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			unk_0x4EDE34FBADD967A6(0);
			bVar45 = unk_0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_32)
			{
				unk_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0xCA042B6957743895(uParam1->f_16))
	{
		unk_0xF66A602F829E2A06(uParam1->f_16);
	}
	unk_0xF66A602F829E2A06(*uParam1);
	unk_0x865908C81A2C22E9(iVar5, false);
	func_13(&(uParam1->f_34));
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 77, bVar3);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0xA7A932170592B50E(uParam0->f_1))
	{
		unk_0x865908C81A2C22E9(uParam0->f_1, false);
	}
	if (unk_0xA7A932170592B50E(uParam0->f_2))
	{
		unk_0x865908C81A2C22E9(uParam0->f_2, false);
	}
	if (unk_0xA7A932170592B50E(uParam0->f_3))
	{
		unk_0x865908C81A2C22E9(uParam0->f_3, false);
	}
	if (unk_0xA7A932170592B50E(uParam0->f_4))
	{
		unk_0x865908C81A2C22E9(uParam0->f_4, false);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0xFE99B66D079CF6BC(iParam0, iParam1, true);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0x5F9532F3B5CC2551(uParam0->f_5, false))
			{
				func_14(uParam0);
				Var0 = { unk_0xA200EB1EE790F448() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x4805D2B1D8CF94A9(uParam0->f_5) * FtoV(unk_0x15C40837039FFAF7()) };
				}
				Var1 = { unk_0x2274BC1C4885E333(uParam0->f_5, Var0) };
				Var2 = { unk_0x5B4E4C817FCC2DFB(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0xAFBD61CC738D9EB9(uParam0->f_5, 2) };
				Var5 = { (-unk_0x0BADBFA3B172435F(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), (unk_0xD0FFB162F40A139C(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), unk_0x0BADBFA3B172435F(Var3.f_0) };
				Var6 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
				fVar7 = unk_0x80EC114669DAEFF4();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x5E3CF89C6BCCA67D(1775630800, false);
				}
				uParam0->f_1 = unk_0x5E3CF89C6BCCA67D(26379945, true);
				if (bParam1)
				{
					unk_0xFEDB7D269E8C60E3(uParam0->f_1, uParam0->f_5, Var1, true);
				}
				else
				{
					unk_0x4D41783FB745E42E(uParam0->f_1, Var0);
				}
				unk_0x85973643155D0B07(uParam0->f_1, Var2, 2);
				unk_0xB13C14F66A00D047(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x5E3CF89C6BCCA67D(26379945, true);
				if (bParam1 && !bParam4)
				{
					unk_0xFEDB7D269E8C60E3(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					unk_0x4D41783FB745E42E(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x85973643155D0B07(uParam0->f_2, Var2, 2);
				unk_0xB13C14F66A00D047(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x5E3CF89C6BCCA67D(26379945, true);
					if (bParam1 && !bParam4)
					{
						unk_0xFEDB7D269E8C60E3(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						unk_0x4D41783FB745E42E(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x85973643155D0B07(uParam0->f_4, Var2, 2);
					unk_0xB13C14F66A00D047(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, false, 2);
					if (iParam6 == 0)
					{
						unk_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					unk_0x026FB97D0A425F84(uParam0->f_3, true);
				}
				else
				{
					unk_0x9FBDA379383A52A4(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				uParam0->f_7 = unk_0x9CD27B0045628463();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x9CD27B0045628463() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x2206BF9A37B7F724("CamPushInFranklin", false, false);
									break;
								
								case 0:
									unk_0x2206BF9A37B7F724("CamPushInMichael", false, false);
									break;
								
								case 2:
									unk_0x2206BF9A37B7F724("CamPushInTrevor", false, false);
									break;
							}
						}
						else
						{
							unk_0x2206BF9A37B7F724("CamPushInNeutral", false, false);
						}
						unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x9CD27B0045628463() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0xEB2D525B57F42B40();
	func_18();
}

void func_18()
{
	Global_23011.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_35();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xE80492A9AC099A93(&Global_8136, 20);
			unk_0xE80492A9AC099A93(&Global_8137, 17);
			unk_0xE80492A9AC099A93(&Global_8138, false);
			if (bParam2)
			{
				func_33();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_25()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x05095437424397FA())
	{
		return 0;
	}
	return 1;
}

bool func_26(bool bParam0)
{
	return func_27(bParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_21605 = 1;
}

void func_30()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xE80492A9AC099A93(&Global_8137, 16);
}

int func_31()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_33()
{
	if (func_34(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_67();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

bool func_34(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
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

void func_37()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

void func_39(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_20266.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return BitTest(Global_1958711, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return BitTest(Global_1958711, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0x46DF918788CB093F(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/] && !Global_97374[iVar0 /*17*/].f_1)
		{
			if (Global_97374[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97374[iVar0 /*17*/].f_5 != 88 && Global_97374[iVar0 /*17*/].f_5 != 89) && Global_97374[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_43998[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_57(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		func_61(0);
		unk_0xA56F01F3765B93A0(Param0, 5f, true, false, false, false);
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam1);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0xB4EC2312F4E5B1F1(0f);
			}
		}
		unk_0xACCFB4ACF53551B0(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA56F01F3765B93A0(Param0, 5000f, true, false, false, false);
		unk_0xDD9B9B385AAC7F5B(Param0, 5000f, 0);
		unk_0xDD19FA1C6D657305(Param0, 5000f);
		unk_0x5D6B2D4830A67C62(Param0, 5000f);
		func_60();
		func_59();
		unk_0xC1B1E9A034A63A62(0);
		func_61(1);
		if (!unk_0xA41A05B6CB741B85())
		{
			while (!unk_0xACCFB4ACF53551B0(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x577D1284D6873711(false);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x01B8247A7A8B9AD1())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x577D1284D6873711(false);
				if (unk_0xA41A05B6CB741B85())
				{
					unk_0xC197616D221FF4A4();
				}
				return 0;
			}
		}
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA41A05B6CB741B85())
				{
					unk_0xC197616D221FF4A4();
				}
				unk_0x577D1284D6873711(false);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x4759CC730F947C81();
				if (iParam3 == 1)
				{
					unk_0x48ADC8A773564670();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x7472BB270D7B4F3E();
			}
		}
		while ((!unk_0x91D6DD290888CBAB() && !func_58()) && unk_0x83666F9FB8FEBD4B() < 1500)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x83666F9FB8FEBD4B() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0xC906A7DAB05C8D2B(Param0, &(Param0.f_2), false, false);
			unk_0xA56F01F3765B93A0(Param0, 5f, true, false, false, false);
			if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, true, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam1);
				}
			}
		}
		unk_0x6D0858B8EDFD2B7D(0f, 1f);
		unk_0xB4EC2312F4E5B1F1(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_77137.f_553;
}

void func_59()
{
	Global_77137.f_553 = 1;
	Global_77137.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77137[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100441.f_20, 2))
			{
				unk_0x577D1284D6873711(true);
				unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 2);
			}
		}
		else if (BitTest(Global_100441.f_20, 2))
		{
			unk_0x577D1284D6873711(false);
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 2);
		}
	}
}

int func_62()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_39990[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_71(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_70(unk_0xD80958FC74E988A6());
			if (func_69(iVar0) && (!func_34(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_69(Global_113386.f_2363.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x487A82C650EB7799(0f);
	unk_0x0225778816FDC28C(0f);
	unk_0xA87E00932DB4D85D(0f);
	unk_0x0EF93E9F3D08C178(true);
	unk_0xC724C701C30B2FE7(0f);
	unk_0x2238E588E588A6D7(true);
	unk_0x12561FCBB62D5B9C(0);
	if (unk_0xB65B60556E2A9225("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDFE8422B3B94E688("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xCA042B6957743895(&Global_44216))
	{
		if (unk_0xB65B60556E2A9225(&Global_44216))
		{
			unk_0xDFE8422B3B94E688(&Global_44216);
		}
	}
	if (unk_0xA7A932170592B50E(Global_44204))
	{
		if (unk_0x6B24BFE83A2BE47B(Global_44204))
		{
			unk_0xD93DB43B82BC0D00(Global_44204, 0f);
			unk_0xBDECF64367884AC3(Global_44204, true);
		}
	}
	if (unk_0xC912AF078AF19212())
	{
		unk_0x1C9D7949FA533490(false);
	}
	if (bParam0)
	{
		if (unk_0xFDF3D97C674AFB66() != -1 || unk_0x459FD2C8D0AB78BC() != -1)
		{
			unk_0x0F07E7745A236711();
		}
		else if (unk_0xD9D2CFFF49FAB35F())
		{
			unk_0x0F07E7745A236711();
		}
	}
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
	StringCopy(&Global_44216, "", 64);
	StringCopy(&Global_44232, "", 16);
	func_74();
}

void func_74()
{
	Global_44203 = 0;
	Global_44204 = 0;
	Global_44205 = 0;
	Global_44206 = 30000;
	Global_44207 = 0f;
	Global_44209 = 0f;
	Global_44208 = 0f;
	Global_44210 = 1f;
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18209;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18199;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18210;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18202;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18198;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18213;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18214;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18217;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18218;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18211;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19100;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19099;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_80(3971, -1, 0);
	bVar0 = (bVar0 + iParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	if (bVar0 > 9999)
	{
		bVar0 = 9999;
	}
	Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10.f_468 = bVar0;
	func_77(3971, bVar0, -1, 1, 0);
}

void func_77(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4F8644AF03D0E0D6();
	Global_1892703[bVar0 /*599*/].f_10.f_467 = (Global_1892703[bVar0 /*599*/].f_10.f_467 + iParam0);
	if (Global_1892703[bVar0 /*599*/].f_10.f_467 < -9999)
	{
		Global_1892703[bVar0 /*599*/].f_10.f_467 = 9999;
	}
	else if (Global_1892703[bVar0 /*599*/].f_10.f_467 > 9999)
	{
		Global_1892703[bVar0 /*599*/].f_10.f_467 = 9999;
	}
}

int func_82()
{
	if (Global_1943929.f_3 != 0)
	{
		return Global_1943929.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1943929.f_2 != 0)
	{
		return Global_1943929.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[0];
}

int func_86()
{
	return Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x4F8644AF03D0E0D6(), bParam0);
}

int func_88(bool bParam0, bool bParam1)
{
	return func_89(bParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_28() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_28())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_104())
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
		if (!func_102())
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
				else if (bVar14 || (!func_100(unk_0x4F8644AF03D0E0D6(), 0) && !func_99()))
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
					func_96(0, 0, 0);
					if (bVar25)
					{
						unk_0x31B73D1EA9F01DA2();
					}
				}
				if (!func_95(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
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
					func_94();
					func_93();
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
				if (!func_95(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
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
					if (func_92(Global_4718592.f_168757))
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

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_94()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_95(int iParam0)
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

void func_96(bool bParam0, int iParam1, int iParam2)
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
				func_98();
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
		if (func_100(unk_0x4F8644AF03D0E0D6(), 0))
		{
			unk_0x419594E137637120(bParam0, iParam1, true);
		}
		else
		{
			unk_0x423DE3854BB50894(bParam0, iParam1);
		}
		unk_0x1A5CD7752DD28CD3(bParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
	}
}

void func_98()
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

bool func_99()
{
	return BitTest(Global_2621446, 3);
}

bool func_100(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1574632.f_18;
}

int func_104()
{
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
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

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0xD53343AA4FB7DD28(500, 3000);
	Local_52.f_0 = 5;
	Local_51.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x84A2DD9AC37C35C1(Local_43.f_1))
	{
		if (unk_0x997ABD671D25CA0B(Local_43.f_1, false) || unk_0xBB062B2B5722478E(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xD05BFF0C0A12C68F(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0) && Global_44024[iLocal_54 /*5*/].f_3 > Global_44024[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0) && Global_44024[iLocal_54 /*5*/].f_4 > Global_44024[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_113(iParam0);
	if (unk_0xCA042B6957743895(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0xD2A71E1A77418A49(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xCA042B6957743895(sVar2) && !unk_0xCA042B6957743895(sVar3))
		{
			unk_0xD3BD40951412FEF6(sVar2);
			while (!unk_0xD031A9162D01088C(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x84A2DD9AC37C35C1(Local_43.f_1))
			{
				unk_0xEA47FE3719165B94(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x318234F4F3738AF3(sVar1))
	{
		return 0;
	}
	if (unk_0x84A2DD9AC37C35C1(Local_43.f_1))
	{
		return 0;
	}
	unk_0xAF8A94EDE7712BEF(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x8D4D46230B2C353A() == 4)
	{
		unk_0x29A28F3F8CF6D854(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x90A43CC281FFAB46(Local_43.f_1, 0, sVar1, "idle", 2f, true);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x12534C348C6CB68B(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x6D9F5FAA7488BA46(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xFFC24B988B938B38(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xC1E8A365BF3B29F2(Local_43.f_1, 200, true);
	unk_0xC1E8A365BF3B29F2(Local_43.f_1, 46, true);
	unk_0x6373D1349925A70E(Local_43.f_1, false);
	unk_0x70A2D1137C8ED7C9(Local_43.f_1, 262144, true);
	unk_0x95D2D383D5396B8A(Local_43.f_1, true);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x4F8644AF03D0E0D6());
}

int func_109(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, true) || unk_0xBB062B2B5722478E(iParam0))
	{
		return 0;
	}
	if (unk_0x77F1BEB8863288D5(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x77F1BEB8863288D5(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x34616828CD07F1A1(iParam0))
	{
		return 0;
	}
	if (unk_0x886E37EC497200B6(iParam0))
	{
		return 0;
	}
	if (unk_0x47E4E977581C5B55(iParam0))
	{
		return 0;
	}
	if (unk_0x53E8CB4F48BFE623(iParam0))
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0xD80958FC74E988A6())
	{
		if (!unk_0xDCCFD3F106C36AB4(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
		if (unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0x4805D2B1D8CF94A9(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_100493.f_376 > 0;
}

bool func_112()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (unk_0xCA042B6957743895(Local_52.f_2))
	{
		if (unk_0xCA042B6957743895(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x0C515FAB3FF9EA92(Local_52.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_51.f_0 == -2)
	{
		return -2;
	}
	if (Local_51.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.f_0 = 5;
		Local_51.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_52.f_0 = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x5F9532F3B5CC2551(Local_43.f_4, false))
	{
		return 0;
	}
	Var0 = { unk_0x3FEF770D40960D5A(Local_43.f_1, true) };
	Var1 = { unk_0x3FEF770D40960D5A(Local_43.f_4, true) };
	fVar2 = unk_0xF1B760881820C952(Var0, Var1, true);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xD80958FC74E988A6())
	{
		unk_0xFE99B66D079CF6BC(0, 36, true);
		if (unk_0x7C2AC9CA66575FBF(Local_43.f_1))
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0 || Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0x88CBB5CEB96B7BD2(Local_43.f_1, false, 0);
			}
		}
		if (unk_0xD125AE748725C6BC(Local_43.f_1))
		{
			unk_0x030983CA930B692D(Local_43.f_1, false);
		}
	}
	if (Local_51.f_0 != -2)
	{
		if (Local_51.f_0 == -1)
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_44024[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xCA042B6957743895(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x1F0B79228E461EC9(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0x97FF36A1D40EA00A(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15) || BitTest(Global_44241, 9))
	{
		if (unk_0x77F1BEB8863288D5(Local_43.f_1, 1785177548) == 1 && !BitTest(Global_1946250.f_3, 27))
		{
			return;
		}
		if (unk_0x729072355FA39EC9(Local_43.f_1))
		{
			return;
		}
		if (unk_0x997ABD671D25CA0B(Local_43.f_1, true))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && func_136(unk_0x4F8644AF03D0E0D6())) && Global_262145.f_24379)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && func_135())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x10FAB35428CCC9D7() && unk_0x05095437424397FA()) && func_134())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x10FAB35428CCC9D7() && unk_0x05095437424397FA()) && func_133())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(unk_0x4F8644AF03D0E0D6()))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && func_129(unk_0x4F8644AF03D0E0D6())) && Global_262145.f_27022)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && func_126(unk_0x4F8644AF03D0E0D6())) && Global_262145.f_27055)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && func_122(unk_0x4F8644AF03D0E0D6()) == 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x10FAB35428CCC9D7() && Local_43.f_1 == unk_0xD80958FC74E988A6()) && Global_75485) && !Global_43997)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(bool bParam0)
{
	if (func_125(bParam0) == 243)
	{
		return func_123(bParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_126(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[bParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
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

int func_128(bool bParam0, bool bParam1, bool bParam2)
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

int func_129(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[bParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_130(bool bParam0)
{
	return func_131(func_132(bParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2714762.f_24;
}

var func_134()
{
	return Global_2714762.f_21;
}

var func_135()
{
	return Global_2787908;
}

int func_136(bool bParam0)
{
	if (bParam0 != func_28())
	{
		if (func_128(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[bParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x826AA586EDB9FEF8(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
	if (!unk_0x4C241E39B23DF959(iVar0, false))
	{
		return 0;
	}
	if (!unk_0xBB40DD2270B65366(iVar0, -1, false) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.f_0 = 7;
	return 1;
}

void func_138()
{
	if (!unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		return;
	}
	if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return;
	}
	iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	fVar1 = unk_0xD5037BA82E12416F(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x7EEF65D5F153E26A(Var3, Var4) && !unk_0x16EC4839969F9F5E(Var3, Var4))
	{
		return;
	}
	unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
	unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		iVar1 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
		iVar2 = unk_0xBB40DD2270B65366(iVar1, -1, false);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x10FAB35428CCC9D7() && !unk_0x01BF60A500E28887(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xD80958FC74E988A6() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x8D4D46230B2C353A() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (unk_0x524AC5ECEA15343E(iVar0))
	{
		Local_51.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_51.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xD5037BA82E12416F(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - unk_0x83666F9FB8FEBD4B());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = unk_0x313CE5879CEB6FCD(-fParam1, fParam1);
	fVar1 = unk_0x313CE5879CEB6FCD(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x524AC5ECEA15343E(iParam0))
	{
		if (unk_0x57E457CD2C0FC168(unk_0x04A2A40C73395041(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		bVar2 = unk_0x9F47B058362C84B5(iParam0);
		if (unk_0xB50C0B0CEDC6CE84(bVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (unk_0x10FAB35428CCC9D7() && !unk_0x01BF60A500E28887(iParam0))
	{
		return;
	}
	if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0x288DF530C92DAD6F(unk_0x04A2A40C73395041(iParam0), fParam1);
	}
	else if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0x42A8EC77D5150CBE(unk_0x4B53F92932ADFAC0(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
	if (!unk_0x4C241E39B23DF959(iVar0, false))
	{
		unk_0x504D54DF3F6F2247(Local_43.f_1, 0, 0);
		Local_52.f_0 = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
	iVar2 = unk_0xBB40DD2270B65366(iVar1, -1, false);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	unk_0x7AA80209BDA643EB(Local_43.f_1, iVar1, 0);
	Local_52.f_0 = 9;
	Local_51.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_145()
{
	if (Local_52.f_0 == 10)
	{
		return;
	}
	Local_52.f_0 = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_49 = 0f;
}

void func_146()
{
	if (unk_0x826AA586EDB9FEF8(Local_43.f_1))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_51.f_3)
	{
		return;
	}
	Local_52.f_0 = 4;
	Local_51.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x826AA586EDB9FEF8(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0x504D54DF3F6F2247(Local_43.f_1, 0, 0);
				Local_52.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0xBB40DD2270B65366(Local_43.f_4, -1, false);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		unk_0x7AA80209BDA643EB(Local_43.f_1, iVar0, 0);
		Local_52.f_0 = 9;
		Local_51.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0xE1EF3C1216AFF2CD(Local_43.f_1);
		Local_52.f_0 = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0x77F1BEB8863288D5(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x997ABD671D25CA0B(Local_43.f_1, false))
			{
				unk_0xE1EF3C1216AFF2CD(Local_43.f_1);
				Local_52.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.f_0 = 4;
		return;
	}
	if (!unk_0x4C241E39B23DF959(Local_43.f_4, false))
	{
		Local_43.f_4 = 0;
		Local_52.f_0 = 4;
		return;
	}
	Var0 = { unk_0x3FEF770D40960D5A(Local_43.f_1, true) };
	Var1 = { unk_0x3FEF770D40960D5A(Local_43.f_4, true) };
	fVar2 = unk_0xF1B760881820C952(Var0, Var1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
		{
			Local_52.f_0 = 12;
			return;
		}
		Local_52.f_0 = 5;
		Local_51.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar3 = unk_0xA7C4F2C6E744A550(Local_43.f_4);
	bVar4 = false;
	bVar5 = true;
	bVar4 = true;
	while (bVar5)
	{
		if (bVar4 < iVar3)
		{
			if (unk_0x22AC59A870E6A669(Local_43.f_4, bVar4, false))
			{
				bVar5 = false;
			}
			else
			{
				bVar4++;
			}
		}
		else
		{
			bVar5 = false;
			bVar4 = -1;
		}
	}
	if (bVar4 == -1)
	{
		if (bVar4 == -1)
		{
			Local_52.f_0 = 4;
			return;
		}
	}
	func_149();
	unk_0xC20E50AA46D09CA8(Local_43.f_1, Local_43.f_4, -1, bVar4, 2f, 1, 0);
	Local_52.f_0 = 7;
}

void func_149()
{
	if (!unk_0x7239B21A38F536BA(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x84A2DD9AC37C35C1(Local_43.f_1))
	{
		unk_0xAA74EC0CB0AAEA2C(Local_43.f_1, 0.25f);
		unk_0x20510814175EA477(Local_43.f_1);
		unk_0xD8D19675ED5FBDCE(Local_43.f_1, 0, -8f);
		Local_52.f_2 = "";
		unk_0x726256CC1EEB182F(Local_43.f_1);
		unk_0xC1E8A365BF3B29F2(Local_43.f_1, 200, false);
		unk_0xC1E8A365BF3B29F2(Local_43.f_1, 46, false);
		unk_0x6373D1349925A70E(Local_43.f_1, true);
		unk_0x70A2D1137C8ED7C9(Local_43.f_1, 262144, false);
		unk_0x95D2D383D5396B8A(Local_43.f_1, false);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.f_0 = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2815059.f_4607 = 1;
	return 1;
}

void func_152(int iParam0)
{
	unk_0xAA74EC0CB0AAEA2C(iParam0, 0.25f);
	unk_0xD8D19675ED5FBDCE(iParam0, 0, -8f);
	unk_0xC1E8A365BF3B29F2(iParam0, 200, false);
	unk_0x6373D1349925A70E(iParam0, true);
	unk_0x70A2D1137C8ED7C9(iParam0, 262144, false);
	unk_0x95D2D383D5396B8A(iParam0, false);
}

void func_153()
{
	int iVar0;
	
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.f_0 = 12;
		return;
	}
	if (Local_51.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.f_0 = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44105[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44105[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_44105[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_44105[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44105[iParam0 /*6*/] = -1;
	Global_44105[iParam0 /*6*/].f_1 = -1;
	Global_44105[iParam0 /*6*/].f_2 = 6;
	Global_44105[iParam0 /*6*/].f_3 = 0;
	Global_44105[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_44105[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_44105[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_52.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_44024[iLocal_54 /*5*/].f_4++;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_44024[iLocal_54 /*5*/].f_3 = (Global_44024[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51.f_0 = (Local_51.f_0 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
		return;
	}
	iVar0 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_51.f_0 == -1)
	{
		if (!Local_51.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_51.f_0)
			{
				func_149();
				Local_51.f_0 = -2;
				Local_52.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.f_0 = 4;
	if (!unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
	{
		if (unk_0x826AA586EDB9FEF8(Local_43.f_1))
		{
			Local_52.f_0 = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (unk_0x10FAB35428CCC9D7())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x767FBC2AC802EF3D(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x767FBC2AC802EF3D(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x767FBC2AC802EF3D(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0xB3271D7AB655B441(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, true);
					break;
				
				case 1:
					unk_0xB3271D7AB655B441(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, true);
					break;
				
				case 2:
					unk_0xB3271D7AB655B441(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, true);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2676732[iVar0 /*83*/] = 81;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
}

void func_170()
{
	Local_51.f_0 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0xD80958FC74E988A6())
	{
		bLocal_46 = true;
		Global_44237 = 1;
		Global_44239++;
	}
	if (!unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x6C8065A3B780185B(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x6C8065A3B780185B(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_44024[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x6C8065A3B780185B(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x6C8065A3B780185B(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_44237 = 0;
	}
	func_179();
	unk_0xF66A602F829E2A06(func_113(0));
	unk_0xF66A602F829E2A06(func_113(2));
	unk_0xF66A602F829E2A06(func_113(1));
	Global_1940653 = 0;
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0x1090044AD1DA76FA();
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5F9532F3B5CC2551(Local_43.f_1, false))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (unk_0x997ABD671D25CA0B(Local_43.f_1, false))
	{
		iVar1 = unk_0x9A9112A0FE9A4713(Local_43.f_1, false);
		iVar2 = unk_0xBB40DD2270B65366(iVar1, -1, false);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x8D4D46230B2C353A() == 4 || !unk_0xD80958FC74E988A6() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(iVar0, 0f);
}

void func_180(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_181(iParam2), true);
}

int func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

