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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	if (unk_0xC968670BFACE42D9(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x11FE353CF9733E6F("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x85F01B8D5B90570E(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x51BC1ED3CC44E8F7(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50.f_0, ScriptParam_50.f_1, 0, 0, 0);
				unk_0xD0837058AE2E4BEE(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1f, -1f);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0xF22B6C47C6EAB066(ScriptParam_50.f_5.f_2))
				{
					unk_0xEF662D8D57E290B1(iLocal_46, "SET_TOTAL", unk_0xBBDA792448DB5A89(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0xD0837058AE2E4BEE(iLocal_46, "SET_MEDAL", unk_0xBBDA792448DB5A89(ScriptParam_50.f_5), -1082130432, -1082130432, -1f, -1f);
				unk_0xD0837058AE2E4BEE(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1f, -1f);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					unk_0xF6E48914C7A8694E(iLocal_46, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0xC3D0841A0CC546A6(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0xC3D0841A0CC546A6(2);
						unk_0xC3D0841A0CC546A6(false);
						unk_0xC3D0841A0CC546A6(false);
						unk_0x80338406F3475E55("STRING");
						unk_0x1115F16B8AB9E8BF(unk_0xF34EE736CF047844((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x362E2D3FE93A9959();
						if (!unk_0xF22B6C47C6EAB066(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0xF22B6C47C6EAB066(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0xF22B6C47C6EAB066(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x80338406F3475E55(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0x6C188BE134E074AA(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0x362E2D3FE93A9959();
						}
					}
					else
					{
						unk_0xC3D0841A0CC546A6(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0xD69736AAE04DB51A(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x80338406F3475E55("NUMBER");
							unk_0xE7DCB5B874BCD96E(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x362E2D3FE93A9959();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0xD69736AAE04DB51A(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x80338406F3475E55("NUMBER");
							unk_0xE7DCB5B874BCD96E(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x362E2D3FE93A9959();
						}
						if (!unk_0xF22B6C47C6EAB066(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0xF22B6C47C6EAB066(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xC6796A8FFA375E53();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0xF22B6C47C6EAB066(ScriptParam_50.f_5.f_2))
				{
					unk_0xF6E48914C7A8694E(iLocal_46, "SET_TOTAL");
					unk_0xC3D0841A0CC546A6(ScriptParam_50.f_5);
					if (!unk_0xF22B6C47C6EAB066(ScriptParam_50.f_5.f_3))
					{
						func_18(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0xD69736AAE04DB51A(ScriptParam_50.f_5.f_1);
					}
					func_18(ScriptParam_50.f_5.f_2);
					unk_0xC6796A8FFA375E53();
				}
				unk_0xF6E48914C7A8694E(iLocal_46, "DRAW_MENU_LIST");
				unk_0xC6796A8FFA375E53();
				func_12(1);
				func_9(&bLocal_47);
				if (!func_8(Global_113386.f_19097, 4096))
				{
					func_6(&(Global_113386.f_19097), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&bLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || unk_0xB16FCE9DDC7BA182()) || Global_32104)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0x54972ADAF0294A93(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xBC4C9EA5391ECC0D(10))
					{
						unk_0x6806C51AD12B83B8(10);
					}
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

float func_2(bool bParam0)
{
	if (func_5(bParam0))
	{
		if (func_4(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_3(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_3(bool bParam0)
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

bool func_4(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(bool bParam0)
{
	if (!func_5(bParam0))
	{
		func_10(bParam0);
	}
}

void func_10(bool bParam0)
{
	func_11(bParam0, 0f);
}

void func_11(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_3(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return BitTest(Global_1958711, 5);
}

bool func_17()
{
	return BitTest(Global_1958711, 19);
}

void func_18(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_19()
{
	unk_0x1D132D614DD86811(&iLocal_46);
	Global_32104 = 0;
	func_1(0);
	unk_0x1090044AD1DA76FA();
}

