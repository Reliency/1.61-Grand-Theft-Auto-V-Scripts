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
	int iLocal_50 = 0;
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
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
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
		func_134(&uScriptParam_68);
	}
	else
	{
		func_125();
	}
	while (true)
	{
		func_124();
		unk_0xFE99B66D079CF6BC(2, 199, true);
		unk_0xFE99B66D079CF6BC(2, 200, true);
		if (func_116())
		{
			func_125();
		}
		if (func_115())
		{
			func_125();
		}
		func_1();
	}
}

void func_1()
{
	func_109(0);
	unk_0x51669F7D1FB53D9F(false);
	switch (Local_65.f_16)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (BitTest(Global_2788035, 1))
	{
		unk_0xE80492A9AC099A93(&Global_2788035, true);
		func_96(Global_2788034);
	}
	if (Local_65.f_61 != Global_2788165)
	{
		Local_65.f_61 = { Global_2788165 };
	}
	else
	{
		Local_65.f_61.f_1 = 0;
		Local_65.f_61.f_2 = 0;
	}
	if (!unk_0xB0034A223497FFCB() && !func_95())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), BitTest(Local_65.f_60, 3));
	func_3(&(Local_65.f_38), &(Local_65.f_39));
	unk_0xE80492A9AC099A93(&Global_2788035, 4);
	unk_0xE80492A9AC099A93(&(Local_65.f_60), true);
	unk_0xE80492A9AC099A93(&(Local_65.f_60), 2);
	unk_0xE80492A9AC099A93(&(Local_65.f_60), 3);
	unk_0xE80492A9AC099A93(&(Local_65.f_60), 6);
	unk_0xE80492A9AC099A93(&(Local_65.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	struct<3> Var0;
	bool bVar1;
	struct<3> Var2;
	
	func_9();
	Var0 = { unk_0xA200EB1EE790F448() };
	if ((((unk_0xB0034A223497FFCB() || func_8()) || unk_0x580417101DDB492F(2, 199)) || unk_0xF3A21BCD95725A4A(2, 199)) || unk_0x50F940259D3841E6(2, 199))
	{
		unk_0x77E2DD177910E1CF(Var0.f_0, Var0.f_1);
		unk_0xA17784FCA9548D15(Var0.f_0, Var0.f_1, 0);
		if (unk_0xB0034A223497FFCB() || func_8())
		{
			if (unk_0xA6DB27D19ECBB7DA(unk_0xDCD4EC3F419D02FA()))
			{
				unk_0x45FF974EEE1C8734(unk_0xDCD4EC3F419D02FA(), 255);
			}
		}
	}
	else if (unk_0xA6DB27D19ECBB7DA(unk_0xDCD4EC3F419D02FA()))
	{
		unk_0x45FF974EEE1C8734(unk_0xDCD4EC3F419D02FA(), false);
	}
	unk_0x1279E861A329E73F(Var0.f_0, Var0.f_1);
	bVar1 = unk_0x5234F9F10919EABA();
	if (unk_0xA7A932170592B50E(bVar1))
	{
		unk_0x661B5C8654ADD825(bVar1, true);
	}
	Var2 = { unk_0x5B4E4C817FCC2DFB(0) };
	Var2 = { func_7(Var2) };
	if (!unk_0xA6DB27D19ECBB7DA(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		unk_0xDF735600A4696DAF(*uParam1, 425);
		unk_0x75A16C3DA34F1245(*uParam1, false);
		unk_0x9029B2F3DA924928(*uParam1, 4);
		unk_0x03D7FB09E75D6B7E(*uParam1, func_4(2));
		unk_0x13127EC3665E8EE1(*uParam1, true, 11);
		unk_0xD38744167B2FA257(*uParam1, 0.54f);
		unk_0xAE9FC9EF6A9FAC79(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		unk_0xDF735600A4696DAF(*uParam0, 425);
		unk_0x75A16C3DA34F1245(*uParam0, false);
		unk_0x9029B2F3DA924928(*uParam0, 4);
		unk_0x03D7FB09E75D6B7E(*uParam0, func_4(18));
		unk_0x13127EC3665E8EE1(*uParam0, true, 11);
		unk_0xD38744167B2FA257(*uParam0, 0.44f);
		unk_0xAE9FC9EF6A9FAC79(*uParam0, 13 + 1);
		unk_0x54318C915D27E4CE(*uParam0, true);
		unk_0xF87683CDF73C3F6E(*uParam0, unk_0xF2DB717A73826179(unk_0x2FFB6B224F4B2926(Var2.f_0, Var2.f_1)));
		unk_0x54318C915D27E4CE(*uParam1, true);
		unk_0xF87683CDF73C3F6E(*uParam1, unk_0xF2DB717A73826179(unk_0x2FFB6B224F4B2926(Var2.f_0, Var2.f_1)));
	}
	else
	{
		unk_0xAE2AF67E9D9AF65D(*uParam0, Var0);
		unk_0xF87683CDF73C3F6E(*uParam0, unk_0xF2DB717A73826179(unk_0x2FFB6B224F4B2926(Var2.f_0, Var2.f_1)));
		unk_0x9029B2F3DA924928(*uParam0, 5);
		unk_0xAE2AF67E9D9AF65D(*uParam1, Var0);
		unk_0xF87683CDF73C3F6E(*uParam1, unk_0xF2DB717A73826179(unk_0x2FFB6B224F4B2926(Var2.f_0, Var2.f_1)));
		unk_0x9029B2F3DA924928(*uParam1, 5);
	}
}

int func_4(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (bParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x7C9C91AB74A0360F(bParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

bool func_5(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_6(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = unk_0xD0FFB162F40A139C(Param0.f_0);
	Var0.f_1 = unk_0xD0FFB162F40A139C(Param0.f_2);
	Var0.f_2 = unk_0x0BADBFA3B172435F(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -unk_0x0BADBFA3B172435F(Param0.f_2));
	return Var0;
}

bool func_8()
{
	return unk_0x272ACD84970869C5() != 0;
}

void func_9()
{
	Global_1574839 = 1;
}

void func_10(bool bParam0, bool bParam1)
{
	if (unk_0xCA042B6957743895(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(bParam0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return;
	}
	if (!func_12(bParam0))
	{
		unk_0x8DFCED7A656F8802(true);
		func_11(bParam0);
	}
}

void func_11(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_12(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_13()
{
	if (BitTest(Global_2788035, 5))
	{
		unk_0xE80492A9AC099A93(&Global_2788035, 5);
		Local_65.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_65.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || unk_0x6CD79468A1E595C6(2)) || unk_0x6CD79468A1E595C6(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0 || unk_0x5FCF4D7069B09026())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[bVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_23150.f_5417[bVar1], true), 64);
				}
				else if (Global_23150.f_5430[bVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_23150.f_5430[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_23150.f_5472 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_5355[bVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(bVar1);
					func_17(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_17(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_16(&(Global_23150.f_5355[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_23150.f_5404[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(bVar3, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(bVar3);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_23150.f_5417[bVar1] != 363 && BitTest(Global_23150.f_5443, bVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_23150.f_5417[bVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(363);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				bVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_23150.f_5160);
				func_17(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_16(&(Global_4539885.f_16));
				}
				else
				{
					bVar4 = Global_23150.f_5404[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					unk_0x80338406F3475E55(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bVar4, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bVar4);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0xC3D0841A0CC546A6(true);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(false);
			}
			unk_0xC6796A8FFA375E53();
			Global_23150.f_5161 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(bVar1);
					unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			bVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(bVar1);
				unk_0x80338406F3475E55(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(bParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(bParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x450930E616475D0D(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_23150.f_5446)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_17(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

bool func_18(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1574918;
}

int func_21()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_22()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_25(8, -1) && func_24() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_78579) || Global_23150.f_8807) || unk_0xE18B138FABC53103()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1574991;
}

var func_25(int iParam0, int iParam1)
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

int func_26(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	bVar1 = unk_0xD24D37CC275948CC(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == bVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = bVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_29(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x80C2FD58D720C801(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (unk_0x48AF36444B965238())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0x85F01B8D5B90570E(Global_23150.f_6051[iVar1 /*10*/]))
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
		}
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xDFA2EF8E04127DD5("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x0145F696AAAAD2E4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_33()
{
	int iVar0;
	
	if (!BitTest(Local_65.f_60, 7))
	{
		iVar0 = unk_0xFDF3D97C674AFB66();
		if (Local_65.f_56 != iVar0)
		{
			unk_0x2C933ABF17A1DF41("eyeinthesky");
			Local_65.f_56 = unk_0xFDF3D97C674AFB66();
		}
	}
}

void func_34()
{
	if (BitTest(Local_65.f_60, 6))
	{
		if (BitTest(Local_65.f_60, 5))
		{
			func_36();
		}
	}
	else if (!BitTest(Local_65.f_60, 5) && !unk_0xCA042B6957743895(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(bool bParam0)
{
	if (unk_0xCA042B6957743895(bParam0))
	{
		return;
	}
	if (BitTest(Local_65.f_60, 5))
	{
	}
	else
	{
		unk_0x3D42B92563939375(bParam0);
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 5);
	}
}

void func_36()
{
	if (BitTest(Local_65.f_60, 5))
	{
		unk_0x643ED62D5EA3BEBD();
		unk_0xE80492A9AC099A93(&(Local_65.f_60), 5);
	}
}

void func_37()
{
	struct<3> Var0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_65.f_60, 1))
	{
		return;
	}
	if (!unk_0x85F01B8D5B90570E(Local_65.f_36))
	{
		Local_65.f_36 = unk_0x11FE353CF9733E6F(Local_64.f_86.f_1);
		return;
	}
	Var0 = { unk_0x7D304C1C955E3E12(Local_65.f_0, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_65.f_37)
			{
				Local_65.f_37 = 1;
				func_40(Local_65.f_36, Local_64.f_20);
				func_39(Local_65.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_65.f_36, 0f, unk_0xC3330A45CCCDB26A(Local_65.f_0), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	unk_0x61BB1D9B3A95D802(0);
	unk_0x0DF606929C105BE1(Local_65.f_36, 255, 255, 255, false, 0);
}

void func_38(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	bParam2 = ((bParam2 - fParam3) / (fParam4 - fParam3));
	unk_0xF6E48914C7A8694E(iParam0, "SET_ALT_FOV_HEADING");
	unk_0xD69736AAE04DB51A(bParam1);
	unk_0xD69736AAE04DB51A(bParam2);
	unk_0xD69736AAE04DB51A(bParam5);
	unk_0xC6796A8FFA375E53();
}

void func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_WEAPON_VALUES");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0xC3D0841A0CC546A6(bParam3);
	unk_0xC6796A8FFA375E53();
}

void func_40(int iParam0, bool bParam1)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_ZOOM_VISIBLE");
	unk_0xC58424BA936EB458(bParam1);
	unk_0xC6796A8FFA375E53();
}

void func_41()
{
	struct<4> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_64.f_94 != 0)
	{
		Local_65.f_4 = { unk_0x3FEF770D40960D5A(Local_64.f_95, true) };
		Local_65.f_4.f_3 = { unk_0xAFBD61CC738D9EB9(Local_64.f_95, 2) };
	}
	if (!BitTest(Local_65.f_60, 2))
	{
		Var0 = { func_46(Local_65.f_0, &(Local_65.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	Var1 = { Local_64.f_91 + Local_65.f_1 };
	Var2 = { func_45(Local_64.f_71, Var1.f_2) };
	Var3 = { Local_64.f_88 + Var2 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_65.f_0, Var3, Var1);
			break;
		
		case 1:
			func_43(Local_65.f_0, Var3, Var1, Local_64.f_95);
			break;
	}
	func_42(Local_65.f_40, Local_65.f_40.f_2, Local_65.f_40.f_8, Local_65.f_40.f_3, Local_65.f_40.f_9, Local_65.f_40.f_4, Local_65.f_40.f_10, Local_65.f_40.f_5, Local_65.f_40.f_11, Local_65.f_40.f_6, Local_65.f_40.f_12, Local_65.f_40.f_7, Var0.f_0, Var0.f_1, Local_65.f_61.f_1, Local_65.f_61.f_2 > 0);
	Local_65.f_4.f_6 = { unk_0xBAC038F7459AE5AE(Local_65.f_0) };
	Local_65.f_4.f_9 = { unk_0x7D304C1C955E3E12(Local_65.f_0, 2) };
}

void func_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, struct<3> Param13, int iParam14, bool bParam15)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0xCA042B6957743895(bParam0) || unk_0x2F844A8B08D76685(bParam0, false, -1))
	{
		if (bParam12 != 0f)
		{
			if (bParam4 != -1)
			{
				if (unk_0xFCBDCE714A7C88E5(bParam4))
				{
					unk_0x67C540AA08E4A6F5(bParam4, bParam5, bParam1, true);
				}
				unk_0xAD6B3148A78AE9B6(bParam4, "Ctrl", bParam12);
				if (bParam12 < 0f)
				{
					unk_0xAD6B3148A78AE9B6(bParam4, "Dir", -1f);
				}
				else
				{
					unk_0xAD6B3148A78AE9B6(bParam4, "Dir", 1f);
				}
			}
		}
		else if (bParam4 != -1)
		{
			if (!unk_0xFCBDCE714A7C88E5(bParam4))
			{
				unk_0xA3B0C41BA5CC0BB5(bParam4);
			}
		}
		bVar0 = unk_0x652D2EEEF1D3E62C(Param13);
		if (bVar0 > 0f)
		{
			if (bParam2 != -1)
			{
				if (unk_0xFCBDCE714A7C88E5(bParam2))
				{
					unk_0x67C540AA08E4A6F5(bParam2, bParam3, bParam1, true);
				}
				unk_0xAD6B3148A78AE9B6(bParam2, "Ctrl", bVar0);
			}
		}
		else if (bParam2 != -1)
		{
			if (!unk_0xFCBDCE714A7C88E5(bParam2))
			{
				unk_0xA3B0C41BA5CC0BB5(bParam2);
			}
		}
		if (bParam6 != -1)
		{
			if (unk_0xFCBDCE714A7C88E5(bParam6))
			{
				unk_0x67C540AA08E4A6F5(bParam6, bParam7, bParam1, true);
			}
		}
		bVar1 = unk_0xD80958FC74E988A6();
		if (unk_0x997ABD671D25CA0B(bVar1, false))
		{
			bVar2 = unk_0x9A9112A0FE9A4713(bVar1, false);
		}
		else
		{
			bVar2 = bVar1;
		}
		if (bParam8 != -1)
		{
			bVar3 = bParam15;
			if (!bVar3)
			{
				bVar4 = unk_0xBBDA792448DB5A89(unk_0x15D757606D170C3C(bVar2));
				bVar3 = (IntToFloat(iParam14) / bVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (unk_0xFCBDCE714A7C88E5(bParam8))
				{
					unk_0x67C540AA08E4A6F5(bParam8, bParam9, bParam9, true);
				}
			}
		}
		if (bParam10 != -1)
		{
			if ((IntToFloat(unk_0xEEF059FAD016D209(bVar1)) / unk_0xBBDA792448DB5A89(unk_0x15D757606D170C3C(bVar1))) < 0.15f || (IntToFloat(unk_0xEEF059FAD016D209(bVar2)) / unk_0xBBDA792448DB5A89(unk_0x15D757606D170C3C(bVar2))) < 0.15f)
			{
				if (unk_0xFCBDCE714A7C88E5(bParam10))
				{
					unk_0x67C540AA08E4A6F5(bParam10, bParam11, bParam1, true);
				}
			}
			else if (!unk_0xFCBDCE714A7C88E5(bParam10))
			{
				unk_0xA3B0C41BA5CC0BB5(bParam10);
			}
		}
	}
}

void func_43(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3)
{
	unk_0xFEDB7D269E8C60E3(bParam0, bParam3, Param1, true);
	unk_0x85973643155D0B07(bParam0, Param2 + unk_0xAFBD61CC738D9EB9(bParam3, 2), 2);
}

void func_44(bool bParam0, struct<3> Param1, struct<3> Param2)
{
	unk_0x4D41783FB745E42E(bParam0, Param1);
	unk_0x85973643155D0B07(bParam0, Param2, 2);
}

Vector3 func_45(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x0BADBFA3B172435F(bParam1);
	fVar2 = unk_0xD0FFB162F40A139C(bParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<4> func_46(bool bParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)
{
	float fVar0;
	struct<4> Var1;
	bool bVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	bool bVar11;
	
	fVar0 = unk_0xC3330A45CCCDB26A(bParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	bVar2 = unk_0x11E65974A982637C(0, 39);
	Var3 = { -Vector(unk_0x4F8A26A890FD62FB(0, 290), 0f, unk_0x4F8A26A890FD62FB(0, 291)) };
	if (unk_0xA571D46727E2B718(2))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (unk_0x73D57CFFDD12C355(bVar2) < 0.06f)
		{
			bVar2 = 0f;
		}
		if (unk_0x652D2EEEF1D3E62C(Var3) < 0.06f)
		{
			Var3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = unk_0x15C40837039FFAF7();
	fVar5 = func_49((fVar0 + ((bVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	unk_0xB13C14F66A00D047(bParam0, fVar5);
	unk_0xC7848EFCCC545182(bParam0, 0.01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	unk_0x487A82C650EB7799(1f);
	unk_0xE2892E7E55D7073A(fVar6);
	Var7.f_0 = Param2.f_2;
	Var7.f_1 = 0f;
	Var7.f_2 = Param2.f_0;
	Var8.f_0 = Param2.f_3;
	Var8.f_1 = 0f;
	Var8.f_2 = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var10 = { Var3 };
	Var10.f_2 = (Var10.f_2 * fVar9);
	Var10.f_0 = (Var10.f_0 * fVar9);
	*uParam1 = { *uParam1 + Var10 };
	bVar11 = Var7.f_2 > Var8.f_2;
	if (bVar11)
	{
		*uParam1 = func_49(*uParam1, Var7.f_0, Var8.f_0);
		uParam1->f_1 = func_49(uParam1->f_1, Var7.f_1, Var8.f_1);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, Var7, Var8) };
	}
	Var1.f_0 = (Var1.f_0 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	Param0.f_0 = func_49(Param0.f_0, Param1.f_0, Param2.f_0);
	Param0.f_1 = func_49(Param0.f_1, Param1.f_1, Param2.f_1);
	Param0.f_2 = func_49(Param0.f_2, Param1.f_2, Param2.f_2);
	return Param0;
}

float func_48(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_49(float fParam0, float fParam1, float fParam2)
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

void func_50()
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_drone")) < 1)
	{
		if (!Local_65.f_29.f_5)
		{
			Local_65.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_65.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			return;
		}
	}
	if (Local_65.f_29)
	{
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (Local_65.f_29.f_1)
			{
				if (func_62(unk_0x4F8644AF03D0E0D6()))
				{
					unk_0xD4E8E24955024033(250);
					unk_0x8D8686B622B88120(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Local_65.f_29.f_2, Local_65.f_40.f_13, true, 500, false);
					Local_65.f_29.f_1 = 0;
					Local_65.f_29 = 0;
				}
			}
			else
			{
				Local_65.f_29.f_1 = 1;
				func_61(&(Local_65.f_17), 0, 0);
				unk_0x933D6A9EEC1BACD0(&Global_2788035, false);
				func_58(3f, 100f, &(Local_65.f_29.f_2), &uVar0, &uVar1, &Var2);
				func_57(1);
				func_55(Local_65.f_29.f_2, Var2);
			}
		}
	}
	if (func_54() || Local_65.f_29)
	{
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), true);
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 2);
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 3);
		if (!Local_65.f_29)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 6);
			unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			Local_65.f_29 = 1;
			unk_0x891B5B39AC6302AF(250);
		}
		else
		{
			unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
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

bool func_54()
{
	return BitTest(Global_1958711, 5);
}

void func_55(struct<3> Param0, struct<3> Param1)
{
	if (!func_56(Global_1958711.f_13, Param0, 0))
	{
		Global_1958711.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1958711.f_16 = { Param1 };
	}
}

bool func_56(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			unk_0x933D6A9EEC1BACD0(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		unk_0xE80492A9AC099A93(&(Global_1958711.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { unk_0x7D304C1C955E3E12(Local_65.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_65.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(unk_0x7D304C1C955E3E12(Local_65.f_0, 2)) };
		Var1 = { unk_0x1899F328B0E12848(Local_64.f_95, Local_64.f_88) };
		Var2 = { unk_0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var3 = { Var2 - Var1 };
		*uParam2 = { Var2 };
		iVar4 = 0;
		fVar5 = func_59(Var3, Var0);
		iVar6 = 1;
		while (iVar6 <= (Local_64.f_74 - 1))
		{
			Var2 = { unk_0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[iVar6]) };
			Var3 = { Var2 - Var1 };
			fVar7 = func_59(Var3, Var0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { Var2 };
			}
			iVar6++;
		}
		*uParam5 = { unk_0xCE6294A232D03786(Local_64.f_95, Local_64.f_74.f_1[iVar4]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_60(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x5B4E4C817FCC2DFB(2) };
	Var1 = { func_7(Var0) };
	return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
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

int func_62(bool bParam0)
{
	if (bParam0 != func_63())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (BitTest(Global_2788035, 4) || unk_0x91AEF906BCA88877(0, 229));
}

int func_65(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	struct<9> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!unk_0x46E9AE36D8FA6417(iLocal_50) && !unk_0x5F0F0C783EB16C04(joaat("am_mp_drone")))
	{
		unk_0x6EB5F71AA68F2E8E("AM_MP_DRONE");
	}
	if ((unk_0x5F0F0C783EB16C04(joaat("am_mp_drone")) && !unk_0x46E9AE36D8FA6417(iLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0.f_0 = false;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param2 };
		Var0.f_8 = { Param3 };
		Var0.f_1 = iParam0;
		if (unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_drone")) < 1)
		{
			if (!unk_0x9D40DF90FAD26098("AM_MP_DRONE", Var0.f_0, true, 0))
			{
				iLocal_50 = unk_0xC4BB298BD441BE78(joaat("am_mp_drone"), &Var0, 12, 1424);
				unk_0xC5BC038960E9DB27(joaat("am_mp_drone"));
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (unk_0x46E9AE36D8FA6417(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				unk_0x933D6A9EEC1BACD0(&Global_1958711, false);
			}
		}
	}
	else if (func_69())
	{
		unk_0xE80492A9AC099A93(&Global_1958711, false);
	}
}

void func_67(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)
{
	return uParam0->f_1;
}

bool func_69()
{
	return BitTest(Global_1958711, 0);
}

void func_70()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	func_77();
	if (Local_65.f_22 != -1)
	{
		bVar0 = func_52(&(Local_65.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (unk_0x6AC7003FA6E5575E(Local_65.f_22.f_4))
			{
				bVar2 = unk_0x4B53F92932ADFAC0(Local_65.f_22.f_4);
				unk_0x407DC5E97DB1A4D3(bVar2, 2);
			}
			func_76(&(Local_65.f_22.f_5));
			func_75(&(Local_65.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			bVar1 = 6;
		}
		else
		{
			if (unk_0x6AC7003FA6E5575E(Local_65.f_22.f_4))
			{
				bVar3 = unk_0x4B53F92932ADFAC0(Local_65.f_22.f_4);
				unk_0x407DC5E97DB1A4D3(bVar3, 1);
			}
			func_75(&(Local_65.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			bVar1 = 9;
		}
		func_72(Local_65.f_22.f_4, !bVar0, bVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !unk_0x98A4EB5D89A0C952(Local_64.f_16))
			{
				unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return;
			}
			if (bVar0 && func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_65.f_17), 0, 0);
				func_71(1f, &Var4, &Var5);
				unk_0xBFE5756E7407064A(Var4, Var5, Local_64.f_8.f_3, true, Local_64.f_8, unk_0xD80958FC74E988A6(), true, true, -1f, Local_64.f_95, false, false, Local_65.f_22, true, 0, Local_64.f_94 != 0, 0);
				unk_0x8D8686B622B88120(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var4, Local_65.f_40.f_13, true, 500, false);
			}
			else
			{
				unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (!unk_0x0145F696AAAAD2E4("helicopterhud"))
	{
		return;
	}
	unk_0x61BB1D9B3A95D802(1);
	Var2 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	unk_0xAA0008F3BBB8F416(Var2, 0);
	fVar0 = func_74(bParam0, Local_65.f_0, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * unk_0xF1307EF624A80D87(false));
	unk_0x7C9C91AB74A0360F(bParam2, &bVar3, &bVar4, &bVar5, &bVar6);
	bVar7 = func_73((bParam1 && (unk_0x9CD27B0045628463() % 300) < 150), unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(bVar6) / 4f)), bVar6);
	unk_0xE7FFAE5EBF23D890("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, bVar3, bVar4, bVar5, bVar7, false, 0);
	unk_0xFF0B610F6BE0D7AF();
}

bool func_73(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return bParam2;
}

float func_74(bool bParam0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { unk_0xBAC038F7459AE5AE(bParam1) };
	Var1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	fVar2 = unk_0xF1B760881820C952(Var0, Var1, true);
	bVar3 = unk_0xC3330A45CCCDB26A(bParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / unk_0x632106CC96E82E91((bVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_75(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0x430386FE9BF80B45();
		unk_0x67C540AA08E4A6F5(*uParam0, bParam1, bParam2, bParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0xA3B0C41BA5CC0BB5(*uParam0);
		unk_0x353FC880830B88FA(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_65.f_22.f_1), Local_65.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_65.f_22 != Local_65.f_22.f_4)
			{
				func_61(&(Local_65.f_22.f_2), 0, 0);
				func_76(&(Local_65.f_22.f_5));
				func_76(&(Local_65.f_22.f_6));
			}
			Local_65.f_22 = Local_65.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_65.f_22.f_4 = uVar1;
		}
		if (Local_65.f_22.f_4 != -1)
		{
			func_79(Local_65.f_22.f_4);
		}
	}
	if (Local_65.f_22 != -1)
	{
		if (((Local_65.f_22.f_4 != Local_65.f_22 || unk_0x5F9532F3B5CC2551(Local_65.f_22, false)) || func_78(Local_65.f_22) > 0.04f) || unk_0x652D2EEEF1D3E62C(unk_0x3FEF770D40960D5A(Local_65.f_22, true) - Local_65.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(bool bParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	if (!unk_0x34E82F05DF2974F5(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0.5f, 0.5f) };
	Var0.f_2 = 0f;
	return unk_0xA8CEACB4F35AE058(Var0);
}

void func_79(bool bParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xBAC038F7459AE5AE(Local_65.f_0) };
	Var1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	Var1 = { Var1 + Vector(2f, 2f, 2f) * func_80(Var1 - Var0) };
	Local_65.f_22.f_1 = unk_0x7EE9F5D83DD4F90E(Var0, Var1, 511, false, 4);
	if (Local_65.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(struct<3> Param0)
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

int func_81(float fParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	
	bVar0 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	bVar1 = bVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		bVar7 = iVar6;
		bVar8 = unk_0x43A66C31C68491C0(bVar7);
		if (((!unk_0xB8DFD30D6973E135(bVar7) || !func_82(bVar7, 1, 1)) || (bVar1 && unk_0x37039302F4E0A008(bVar7) == bVar0)) || unk_0xA8CEACB4F35AE058(Local_65.f_4.f_6 - unk_0x3FEF770D40960D5A(bVar8, true)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(bVar8);
			if (fVar9 < fVar3)
			{
				bVar2 = bVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		bVar10 = unk_0x43A66C31C68491C0(bVar2);
		if (unk_0x997ABD671D25CA0B(bVar10, false))
		{
			bVar11 = unk_0x9A9112A0FE9A4713(bVar10, false);
			if (!unk_0x5F9532F3B5CC2551(bVar11, false))
			{
				return bVar11;
			}
		}
	}
	return -1;
}

int func_82(bool bParam0, bool bParam1, bool bParam2)
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

void func_83()
{
	Local_65.f_22 = -1;
	Local_65.f_22.f_4 = -1;
	func_76(&(Local_65.f_22.f_5));
	func_76(&(Local_65.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar4 = unk_0x3D87450E15D98694(*uParam0, &iVar0, &uVar2, &uVar1, &bVar3);
	if (!unk_0x6AC7003FA6E5575E(bVar3))
	{
		if (unk_0x524AC5ECEA15343E(bVar3))
		{
			bVar5 = unk_0x04A2A40C73395041(bVar3);
			if (unk_0x997ABD671D25CA0B(bVar5, false))
			{
				bVar3 = unk_0x9A9112A0FE9A4713(bVar5, false);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (unk_0x7239B21A38F536BA(bVar3))
			{
				*uParam2 = (iParam1 == bVar3 && !unk_0x5F9532F3B5CC2551(bVar3, false));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	
	unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 452, true);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_94(&(Local_65.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_65.f_19.f_2);
		}
		func_91(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (bVar0 && !bVar1)
	{
		if (unk_0x91AEF906BCA88877(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_65.f_19.f_2 = (Local_65.f_19.f_2 + unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f)));
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_65.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_65.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_65.f_19), 0, 0);
				Local_65.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
			Var10 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			Var10.f_1 = 0f;
			Var9 = { Var9 + Var10 };
			Var7 = { Var6 + FtoV(unk_0x652D2EEEF1D3E62C(Var7 - Var6)) * func_7(Var9) };
			Var6.f_2 = (Var6.f_2 - 1f);
			unk_0xBFE5756E7407064A(Var6, Var7, Local_64.f_8.f_3, false, Local_64.f_8, unk_0xD80958FC74E988A6(), true, true, -1f, Local_64.f_95, false, false, false, true, 0, Local_64.f_94 != 0, 0);
			if (Local_65.f_40.f_13.f_2 != -1 && unk_0xFCBDCE714A7C88E5(Local_65.f_40.f_13.f_2))
			{
				unk_0x8D8686B622B88120(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var6, Local_65.f_40.f_13, true, 500, false);
			}
		}
	}
	else if (Local_65.f_40.f_13.f_2 != -1 && !unk_0xFCBDCE714A7C88E5(Local_65.f_40.f_13.f_2))
	{
		unk_0xA3B0C41BA5CC0BB5(Local_65.f_40.f_13.f_2);
	}
}

Vector3 func_86(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	fVar1 = (bParam1 * bParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		Var0 = { unk_0x313CE5879CEB6FCD(-bParam1, bParam1), unk_0x313CE5879CEB6FCD(-bParam1, bParam1), unk_0x313CE5879CEB6FCD(-bParam1, bParam1) };
		if (unk_0xB7A628320EFF8E47(Var0, 0f, 0f, 0f) <= fVar1)
		{
			return Param0 + Var0;
		}
		iVar2++;
	}
	return func_87(Param0, bParam1);
}

Vector3 func_87(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f) };
	return Param0 + func_88(Var0, unk_0x313CE5879CEB6FCD(0f, bParam1));
}

Vector3 func_88(struct<3> Param0, bool bParam1)
{
	float fVar0;
	
	if (bParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((bParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_89()
{
	return (BitTest(Global_2788035, 4) || unk_0xE2587F8CBBD87B1D(0, 229));
}

void func_90()
{
	func_61(&(Local_65.f_19), 0, 0);
	Local_65.f_19.f_2 = 0;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_93(0, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_92(0, bVar0);
		Global_1649593.f_1177[bVar0] = iParam0;
		Global_1649593.f_1177.f_11[bVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[bVar0] = iParam3;
		Global_1649593.f_1177.f_183[bVar0] = iParam4;
		Global_1649593.f_1177.f_216[bVar0] = iParam5;
		Global_1649593.f_1177.f_227[bVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[bVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[bVar0] = iParam8;
		Global_1649593.f_1177.f_269[bVar0] = iParam9;
		Global_1649593.f_1177.f_312[bVar0] = iParam10;
		Global_1649593.f_1177.f_323[bVar0] = iParam11;
		Global_1649593.f_1177.f_334[bVar0] = iParam12;
		Global_1649593.f_1177.f_345[bVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[bVar0] = iParam14;
		Global_1649593.f_1177.f_367[bVar0] = iParam15;
		Global_1649593.f_1177.f_378[bVar0] = iParam16;
		Global_1649593.f_1177.f_389[bVar0] = iParam17;
		Global_1649593.f_1177.f_400[bVar0] = iParam18;
		Global_1649593.f_1177.f_411[bVar0] = iParam19;
		Global_1649593.f_1177.f_422[bVar0] = iParam20;
		Global_1649593.f_1177.f_433[bVar0] = iParam21;
		Global_1649593.f_1177.f_444[bVar0] = iParam22;
		Global_1649593.f_1177.f_455[bVar0] = iParam23;
		Global_1649593.f_1177.f_466[bVar0] = iParam24;
		Global_1649593.f_1177.f_205[bVar0] = iParam25;
		Global_1649593.f_1177.f_477[bVar0] = iParam26;
		Global_1649593.f_1177.f_488[bVar0] = iParam27;
		Global_1649593.f_1177.f_499[bVar0] = iParam28;
		Global_1649593.f_1177.f_510[bVar0] = iParam29;
		Global_1649593.f_1177.f_521[bVar0] = iParam30;
		Global_1649593.f_1177.f_532[bVar0] = iParam31;
		Global_1649593.f_1177.f_543[bVar0] = iParam32;
		Global_1649593.f_1177.f_554[bVar0] = iParam33;
		Global_1649593.f_1177.f_565[bVar0] = iParam34;
		Global_1649593.f_1177.f_576[bVar0] = iParam35;
		Global_1649593.f_1177.f_587[bVar0] = iParam36;
	}
}

void func_92(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_93(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

bool func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0);
		}
		else
		{
			return unk_0xA2C6FC031D46FFF0(unk_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0);
}

bool func_95()
{
	return Global_75485;
}

void func_96(bool bParam0)
{
	bool bVar0;
	
	bVar0 = bParam0;
	func_103(bParam0);
	if (func_102(&bVar0, 2))
	{
		func_61(&(Local_65.f_17), 0, 0);
		Local_64.f_8 = { Global_2787947.f_8 };
	}
	if (func_102(&bVar0, 6))
	{
		Local_64.f_19 = Global_2787947.f_19;
	}
	if (func_102(&bVar0, 10))
	{
		Local_64.f_74 = { Global_2787947.f_74 };
	}
	if (func_102(&bVar0, 8))
	{
		Local_64.f_67 = { Global_2787947.f_67 };
	}
	if (func_102(&bVar0, 12))
	{
		Local_64.f_20 = { Global_2787947.f_20 };
	}
	func_97(bParam0);
}

void func_97(bool bParam0)
{
	bool bVar0;
	
	bVar0 = bParam0;
	if (func_102(&bVar0, 0))
	{
	}
	if (func_102(&bVar0, 1))
	{
	}
	if (func_102(&bVar0, 2))
	{
		Local_64.f_8 = { Global_2787947.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				unk_0x27E32866E9A5C416(1.5f);
				if (Local_65.f_19.f_2 == 0 && func_101())
				{
					func_98(&(Local_65.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2787947.f_16;
				if (Local_64.f_16 != 0)
				{
					unk_0x963D27A58DF860AC(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!unk_0xCA042B6957743895(Local_64.f_86))
		{
			unk_0xDFA2EF8E04127DD5(Local_64.f_86, false);
		}
	}
	if (func_102(&bVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!unk_0xCA042B6957743895(Local_64.f_86.f_1))
		{
			Local_65.f_36 = unk_0x11FE353CF9733E6F(Local_64.f_86.f_1);
		}
	}
	if (func_102(&bVar0, 6))
	{
		Local_65.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = unk_0x430386FE9BF80B45();
				break;
			
			case 1:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = unk_0x430386FE9BF80B45();
				break;
			
			case 2:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_65.f_40.f_13.f_2 = unk_0x430386FE9BF80B45();
				break;
			
			case 3:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_65.f_40.f_13.f_2 = unk_0x430386FE9BF80B45();
				break;
			
			default:
				Local_65.f_40.f_13 = 0;
				Local_65.f_40.f_13.f_1 = 0;
				Local_65.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&bVar0, 5))
	{
		Local_65.f_40.f_10 = -1;
		Local_65.f_40.f_8 = -1;
		Local_65.f_40.f_9 = -1;
		Local_65.f_40.f_11 = -1;
		Local_65.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = unk_0x430386FE9BF80B45();
				break;
			
			case 1:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_6 = "Take_Damage";
				Local_65.f_40.f_11 = unk_0x430386FE9BF80B45();
				Local_65.f_40.f_7 = "Low_Health_Warning";
				Local_65.f_40.f_12 = unk_0x430386FE9BF80B45();
				break;
			
			default:
				Local_65.f_40 = 0;
				Local_65.f_40.f_2 = 0;
				Local_65.f_40.f_5 = 0;
				Local_65.f_40.f_10 = -1;
				Local_65.f_40.f_3 = 0;
				Local_65.f_40.f_8 = -1;
				Local_65.f_40.f_4 = 0;
				Local_65.f_40.f_9 = -1;
				break;
		}
		if (!unk_0xCA042B6957743895(Local_65.f_40))
		{
			unk_0xFB380A29641EC31A(Local_65.f_40, 0, -1);
		}
	}
	if (func_102(&bVar0, 3))
	{
	}
	if (func_102(&bVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_102(&bVar0, 8))
	{
	}
	if (func_102(&bVar0, 9))
	{
	}
	if (func_102(&bVar0, 10))
	{
	}
	if (func_102(&bVar0, 11))
	{
		if (!unk_0xCA042B6957743895(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&bVar0, 12))
	{
	}
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = unk_0x017008CCDAD48503(func_100(bParam2, bParam3), func_99(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_100(bool bParam0, bool bParam1)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam0)
	{
		if (!bParam1)
		{
			return unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			return unk_0x89023FBBF9200E9F();
		}
	}
	return unk_0x9CD27B0045628463();
}

bool func_101()
{
	return (!func_68(&(Local_65.f_19)) || func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
}

int func_102(bool bParam0, bool bParam1)
{
	if (BitTest(*bParam0, bParam1))
	{
		unk_0xE80492A9AC099A93(bParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_103(bool bParam0)
{
	if (func_102(&bParam0, 0))
	{
	}
	if (func_102(&bParam0, 1))
	{
	}
	if (func_102(&bParam0, 2))
	{
		Local_65.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				unk_0x27E32866E9A5C416(1f);
				break;
			
			case 3:
				if (Local_65.f_29)
				{
					unk_0xD4E8E24955024033(250);
				}
				Local_65.f_29.f_1 = 0;
				Local_65.f_29 = 0;
				if (Local_65.f_29.f_5)
				{
					Local_65.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					unk_0xE532F5D78798DAAB(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!unk_0xCA042B6957743895(Local_64.f_86))
		{
			unk_0xBE2CACCF5A8AA805(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&bParam0, 3))
	{
	}
	if (func_102(&bParam0, 4))
	{
		Local_65.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_65.f_36 != -1)
		{
			unk_0x1D132D614DD86811(&(Local_65.f_36));
			Local_65.f_36 = -1;
		}
	}
	if (func_102(&bParam0, 6))
	{
		func_76(&(Local_65.f_40.f_13.f_2));
	}
	if (func_102(&bParam0, 5))
	{
		unk_0xBAC7FC81A75EC1A1();
		unk_0x9AC92EED5E4793AB();
		if (!unk_0xCA042B6957743895(Local_65.f_40))
		{
			unk_0x77ED170667F50170(Local_65.f_40);
		}
		func_76(&(Local_65.f_40.f_8));
		func_76(&(Local_65.f_40.f_9));
		func_76(&(Local_65.f_40.f_10));
		func_76(&(Local_65.f_40.f_11));
		func_76(&(Local_65.f_40.f_12));
	}
	if (func_102(&bParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_104(1, -1);
		}
	}
	if (func_102(&bParam0, 8))
	{
		if (!unk_0xCA042B6957743895(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (func_102(&bParam0, 9))
	{
	}
	if (func_102(&bParam0, 10))
	{
	}
	if (func_102(&bParam0, 11))
	{
		if (!unk_0xCA042B6957743895(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&bParam0, 12))
	{
		Local_65.f_37 = 0;
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x450930E616475D0D(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_105(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_106()
{
	if ((!unk_0x797AC7CB535BA28F() && !unk_0xB16FCE9DDC7BA182()) && BitTest(Local_64.f_84.f_1, 1))
	{
		unk_0x891B5B39AC6302AF(Local_64.f_84);
	}
	if (func_52(&(Local_65.f_58), Local_64.f_84, 0))
	{
		if (!BitTest(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!unk_0xA7A932170592B50E(Local_65.f_0))
			{
				Local_65.f_0 = unk_0x5E3CF89C6BCCA67D(26379945, true);
				unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 2);
				func_41();
				unk_0xE80492A9AC099A93(&(Local_65.f_60), 2);
				unk_0x70A382ADEC069DD3(Local_65.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_64.f_84.f_1, 0))
				{
					unk_0xC197616D221FF4A4();
				}
				unk_0x07E5B515DB0636FC(true, false, false, true, true, 0);
				func_3(&(Local_65.f_38), &(Local_65.f_39));
				func_37();
				if (!unk_0xCA042B6957743895(Local_65.f_40.f_1))
				{
					unk_0x013A80FC08F6E4F2(Local_65.f_40.f_1);
				}
				func_61(&(Local_65.f_17), 0, 0);
				unk_0x933D6A9EEC1BACD0(&Global_2788035, 3);
				func_107(1);
				if (unk_0xFDF3D97C674AFB66() >= 0)
				{
					Local_65.f_57 = 1;
					unk_0x58F735290861E6B4();
				}
				unk_0x2C933ABF17A1DF41("eyeinthesky");
				Local_65.f_56 = unk_0xFDF3D97C674AFB66();
				if (BitTest(Local_64.f_84.f_1, 2))
				{
					if (unk_0x797AC7CB535BA28F() || unk_0xB16FCE9DDC7BA182())
					{
						unk_0xD4E8E24955024033(800);
					}
				}
			}
		}
	}
}

void func_107(int iParam0)
{
	Local_65.f_16 = iParam0;
}

int func_108(struct<3> Param0, int iParam1)
{
	if (BitTest(Local_65.f_60, 0))
	{
		if (unk_0x01B8247A7A8B9AD1())
		{
			return 1;
		}
	}
	else if (unk_0xACCFB4ACF53551B0(Param0, 100f, iParam1))
	{
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), false);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_110(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_54())
		{
			func_112(1, 1);
		}
		else
		{
			func_112(0, 0);
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
	if (!func_111())
	{
		Global_20266.f_1 = 3;
	}
}

int func_111()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
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

int func_113(int iParam0)
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

bool func_114()
{
	return BitTest(Global_1958711, 19);
}

int func_115()
{
	if (Local_64.f_94 != 0)
	{
		if (!unk_0x7239B21A38F536BA(Local_64.f_95) || unk_0x5F9532F3B5CC2551(Local_64.f_95, false))
		{
			return 1;
		}
	}
	if (!func_82(unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		return 1;
	}
	if (Global_2787945)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(159))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_119())
	{
		case 0:
			return func_118();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()
{
	return Global_31959;
}

bool func_120()
{
	return Global_2714762.f_698;
}

int func_121(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2725403;
}

bool func_123()
{
	return Global_2714762.f_693;
}

void func_124()
{
	unk_0x4EDE34FBADD967A6(false);
}

void func_125()
{
	bool bVar0;
	bool bVar1;
	
	if (Local_65.f_16 == 0 && BitTest(Local_64.f_84.f_1, 1))
	{
		unk_0xD4E8E24955024033(250);
	}
	func_103(-1);
	if (func_133())
	{
		func_132(0);
	}
	unk_0x51669F7D1FB53D9F(true);
	unk_0x8183455E16C42E3A();
	unk_0x3E93E06DB8EF1F30();
	bVar0 = unk_0xD80958FC74E988A6();
	if (func_131(bVar0) && unk_0x997ABD671D25CA0B(bVar0, true))
	{
		bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x01BF60A500E28887(bVar1))
		{
			unk_0x3B988190C0AA6C0B(bVar1, true);
			func_129(1);
		}
	}
	if (BitTest(Local_65.f_60, 4))
	{
		func_128();
	}
	unk_0x7148E0F43D11F0D9();
	unk_0x0F07E7745A236711();
	if (Local_65.f_57)
	{
		unk_0x3C8938D7D872211E();
	}
	func_127(Local_65.f_38);
	func_127(Local_65.f_39);
	Global_2787934 = 0;
	Global_2788035 = 0;
	func_126();
}

void func_126()
{
	unk_0x1090044AD1DA76FA();
}

void func_127(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		unk_0x86A652570E5F25DD(&bParam0);
	}
}

void func_128()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_129(int iParam0)
{
	bool bVar0;
	
	if (Global_2667225.f_2690 == 1)
	{
		Global_2667225.f_2690 = 0;
		return;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!Global_2667225.f_2692.f_1)
		{
			if (!Global_2667225.f_2688 == -1)
			{
				if (((Global_2667225.f_2688 < 255 && !func_130()) && !BitTest(Global_4718592.f_168795, 0)) && !(unk_0x845FFC3A4FEEFA3E() && (Global_2667225.f_2689 == 0 && iParam0 == 0)))
				{
					unk_0xA619B168B8A8570F(Global_2667225.f_2688);
				}
				else if (Global_2667225.f_2688 >= 255)
				{
					unk_0xC69EDA28699D5107("OFF");
					bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x7239B21A38F536BA(bVar0))
					{
						if (unk_0x01BF60A500E28887(bVar0))
						{
							unk_0x1B9C0099CB942AC6(bVar0, "OFF");
						}
					}
				}
			}
			Global_2667225.f_2688 = -1;
			Global_2667225.f_2692.f_1 = 1;
		}
	}
}

bool func_130()
{
	return Global_1888107;
}

int func_131(bool bParam0)
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

void func_132(int iParam0)
{
	Global_2727832 = iParam0;
}

bool func_133()
{
	return Global_2727832;
}

void func_134(var uParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788035, 2);
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0x1CA59E306ECB80A5(32, false, -1);
		func_152(0, -1, 0);
	}
	else
	{
		func_125();
	}
	func_135(uParam0);
}

void func_135(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_65.f_22.f_4 = -1;
	bVar0 = unk_0xD80958FC74E988A6();
	if (func_131(bVar0) && unk_0x997ABD671D25CA0B(bVar0, true))
	{
		bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x01BF60A500E28887(bVar1))
		{
			func_151(1);
			unk_0x3B988190C0AA6C0B(bVar1, false);
		}
	}
	if (!func_150())
	{
		unk_0x933D6A9EEC1BACD0(&(Local_65.f_60), 4);
		func_149();
	}
	func_136();
}

void func_136()
{
	if (!BitTest(Global_2788033, 0))
	{
		func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2788033, 1))
	{
		func_147(1058642330, 1101004800);
	}
	if (!BitTest(Global_2788033, 2))
	{
		func_146();
	}
	if (!BitTest(Global_2788033, 3))
	{
		func_144(1, 1, 0, 500);
	}
	if (!BitTest(Global_2788033, 4))
	{
		func_143(0);
	}
	if (!BitTest(Global_2788033, 5))
	{
		func_142(0);
	}
	if (!BitTest(Global_2788033, 6))
	{
		func_141(0);
	}
	if (!BitTest(Global_2788033, 7))
	{
		unk_0x933D6A9EEC1BACD0(&Global_2788033, 7);
		Global_2787947.f_24 = 0;
	}
	if (!BitTest(Global_2788033, 8))
	{
		func_140(0);
	}
	if (!BitTest(Global_2788033, 9))
	{
		func_139(0f, 0f, 0f);
	}
	if (!BitTest(Global_2788033, 10))
	{
		unk_0x933D6A9EEC1BACD0(&Global_2788033, 10);
		Global_2787947.f_74 = 0;
	}
	if (!BitTest(Global_2788033, 11))
	{
		func_138(0);
	}
	if (!BitTest(Global_2788033, 12))
	{
		func_137(1, 3, 3, 3);
	}
	Local_64 = { Global_2787947 };
	func_97(Global_2788033);
	func_107(0);
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 12);
	Global_2787947.f_20 = iParam0;
	Global_2787947.f_20.f_1 = iParam1;
	Global_2787947.f_20.f_2 = iParam2;
	Global_2787947.f_20.f_3 = iParam3;
}

void func_138(char* sParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 11);
	StringCopy(&(Global_2787947.f_80), sParam0, 16);
}

void func_139(struct<3> Param0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 9);
	Global_2787947.f_71 = { Param0 };
}

void func_140(char* sParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 8);
	StringCopy(&(Global_2787947.f_67), sParam0, 16);
}

void func_141(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 6);
	Global_2787947.f_19 = iParam0;
}

void func_142(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 5);
	Global_2787947.f_18 = iParam0;
}

void func_143(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 4);
	Global_2787947.f_17 = iParam0;
}

void func_144(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 3);
	Global_2787947.f_84 = iParam3;
	func_145(&(Global_2787947.f_84.f_1), 1, bParam0);
	func_145(&(Global_2787947.f_84.f_1), 2, bParam1);
	func_145(&(Global_2787947.f_84.f_1), 0, bParam2);
}

void func_145(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(bParam0, bParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(bParam0, bParam1);
	}
}

void func_146()
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 0;
}

void func_147(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, true);
	Global_2787947.f_6.f_1 = iParam0;
	Global_2787947.f_6 = iParam1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x933D6A9EEC1BACD0(&Global_2788033, false);
	Global_2787947 = iParam0;
	Global_2787947.f_1 = iParam1;
	Global_2787947.f_2 = iParam2;
	Global_2787947.f_3 = iParam3;
	Global_2787947.f_4 = iParam4;
	Global_2787947.f_5 = iParam5;
}

void func_149()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

bool func_150()
{
	return Global_2703735.f_833.f_10;
}

void func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((unk_0x845FFC3A4FEEFA3E() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!unk_0xA151A7394A214E65())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
		if (!func_153(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_123())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(157))
				{
					if (!bParam2)
					{
						func_126();
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
					func_126();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(false);
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
				func_126();
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
			func_126();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_153(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

