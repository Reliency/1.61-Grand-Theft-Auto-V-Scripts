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
	iVar0 = func_13();
	if (unk_0xC968670BFACE42D9(3))
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		if (unk_0x85F01B8D5B90570E(iVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&iVar0);
					iLocal_46 = unk_0x9CD27B0045628463();
					iLocal_45 = 1;
					break;
				
				case 1:
					if ((unk_0x9CD27B0045628463() - iLocal_46) > 3000)
					{
						func_9(&iVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&iVar0, 0))
			{
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (!func_8(&(iParam0->f_2)))
	{
		func_6(&(iParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x61BB1D9B3A95D802(1);
	unk_0x54972ADAF0294A93(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(iParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(iParam0->f_1)
	{
		func_2(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
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

bool func_5(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_6(bool bParam0)
{
	func_7(bParam0, 0f);
}

void func_7(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_4(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_9(int iParam0)
{
	iParam0->f_1 = 300;
	func_6(&(iParam0->f_2));
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0xC3D0841A0CC546A6(300);
	unk_0xC6796A8FFA375E53();
}

void func_10(int iParam0)
{
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0xC6796A8FFA375E53();
}

void func_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iParam0->f_1 = -1;
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_LABEL");
	func_12(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0xC3D0841A0CC546A6(bParam3);
	unk_0xC3D0841A0CC546A6(bParam4);
	unk_0xC3D0841A0CC546A6(bParam5);
	unk_0xC6796A8FFA375E53();
	if (bParam6)
	{
		unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0xC6796A8FFA375E53();
	}
}

void func_12(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

int func_13()
{
	return unk_0x11FE353CF9733E6F("SPLASH_TEXT");
}

