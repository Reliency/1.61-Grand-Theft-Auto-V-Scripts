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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	var uLocal_42 = 0;
	bool bLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	bLocal_43 = 277.7314f;
	Local_45 = { -196.045f, -580.13f, 135.0004f };
	unk_0x891B5B39AC6302AF(800);
	func_16();
	while (true)
	{
		unk_0x3669F1B198DCAA4F();
		func_15();
		if (func_7() || uLocal_42)
		{
			func_3();
		}
		if (!iLocal_38)
		{
			if (!iLocal_37 && unk_0xB16FCE9DDC7BA182())
			{
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Local_45, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), bLocal_43);
				unk_0xACCFB4ACF53551B0(Local_45, 2500f, 0);
				unk_0xB4EC2312F4E5B1F1(0f);
				iLocal_37 = 1;
			}
			else if (unk_0xA41A05B6CB741B85())
			{
				if (!bLocal_41)
				{
					bLocal_41 = func_2();
				}
				else if (!bLocal_39)
				{
					bLocal_39 = func_1();
				}
				else
				{
					unk_0xD4E8E24955024033(800);
					iLocal_38 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x35F7DD45E8C0A16D(iLocal_44, "garage_decor_01"))
	{
		unk_0x55E86AF2712B36A1(iLocal_44, "garage_decor_01");
	}
	else
	{
		unk_0x41F37C3427C75AE0(iLocal_44);
		return 1;
	}
	return 0;
}

int func_2()
{
	iLocal_44 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
	if (unk_0x26B0E73D7EAAF4D3(iLocal_44))
	{
		if (!iLocal_40)
		{
			unk_0x2CA429C029CCF247(iLocal_44);
			iLocal_40 = 1;
		}
		else if (unk_0x6726BDCCC1932F0E(iLocal_44))
		{
			unk_0x261CCE7EED010641(iLocal_44);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_36)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x1090044AD1DA76FA();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0x76B02E21ED27A469((unk_0xCF3A965906452031(false, 0) - 1));
}

void func_6(var uParam0)
{
	bool bVar0;
	
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		if (!unk_0x4D36070FE0215186(*uParam0))
		{
		}
	}
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		bVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xAE3CBE5BF394C9C9(&bVar0);
	}
}

int func_7()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_31959;
}

bool func_11()
{
	return Global_2714762.f_698;
}

int func_12(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2725403;
}

bool func_14()
{
	return Global_2714762.f_693;
}

void func_15()
{
	unk_0x4EDE34FBADD967A6(false);
}

void func_16()
{
	unk_0x1CA59E306ECB80A5(32, false, -1);
	func_18(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&uLocal_35, 21, 0);
	if (!func_17())
	{
		func_3();
	}
	unk_0xAA391C728106F7AF(false);
	if (!unk_0x88A741E44A2B3495("imp_dt1_02_cargarage_a"))
	{
		unk_0x41B4893843BBDB74("imp_dt1_02_cargarage_a");
	}
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(false);
	}
	return 0;
}

int func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_19(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
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
					func_4();
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
				func_4();
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
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_19(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

