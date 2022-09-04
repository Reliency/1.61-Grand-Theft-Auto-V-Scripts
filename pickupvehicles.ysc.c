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
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0xC968670BFACE42D9(18))
	{
		if (unk_0x9A41CF4674A12272() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2C83A9DA6BFFC4F9(joaat("docks_setup")) == 0)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					bLocal_28 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				}
				else
				{
					bLocal_28 = false;
				}
			}
			if (unk_0x7239B21A38F536BA(bLocal_28))
			{
				if (unk_0x4C241E39B23DF959(bLocal_28, false))
				{
					if (unk_0x423E8DE37D934D89(bLocal_28, joaat("handler")))
					{
						unk_0xEDE476E5EE29EDB1(0, 51);
						if (!unk_0x62CA17B74C435651(bLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x7239B21A38F536BA(bLocal_29) || (unk_0x7239B21A38F536BA(bLocal_29) && unk_0xE143FA2249364369(unk_0x3FEF770D40960D5A(bLocal_28, true), 15f, joaat("prop_contr_03b_ld"), true, false, true) != bLocal_29))
								{
									bLocal_29 = unk_0xE143FA2249364369(unk_0x3FEF770D40960D5A(bLocal_28, true), 15f, joaat("prop_contr_03b_ld"), true, false, true);
								}
								if (unk_0x7239B21A38F536BA(bLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0x89D630CF5EA96D23(bLocal_28, bLocal_29))
										{
											if (unk_0x580417101DDB492F(0, 51))
											{
												unk_0x6A98C2ECF57FA5D4(bLocal_28, bLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0x9CD27B0045628463();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x580417101DDB492F(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9CD27B0045628463();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x1090044AD1DA76FA();
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

