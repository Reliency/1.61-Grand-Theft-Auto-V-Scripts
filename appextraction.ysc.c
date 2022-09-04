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
	int iLocal_20 = 0;
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
	unk_0x9243BAC96D64C050();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		unk_0xC1B1E9A034A63A62(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_20234, 0))
					{
						func_4();
						Global_20244 = 1;
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x1090044AD1DA76FA();
}

int func_3()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_20247, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(24);
	unk_0xC3D0841A0CC546A6(false);
	if (BitTest(Global_4541229, 23))
	{
		unk_0xC58424BA936EB458(false);
		func_8("CELL_EXTBYOU");
		unk_0xC3D0841A0CC546A6(Global_4541230);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510));
		unk_0xC3D0841A0CC546A6(Global_4541231);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510.f_1));
		unk_0xC3D0841A0CC546A6(Global_4541232);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510.f_2));
		func_8("CELL_BODYG");
		unk_0xC3D0841A0CC546A6(Global_4541233);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513));
		unk_0xC3D0841A0CC546A6(Global_4541234);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513.f_1));
		unk_0xC3D0841A0CC546A6(Global_4541235);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513.f_2));
	}
	else
	{
		unk_0xC58424BA936EB458(false);
		func_8("CELL_EXTBYOU");
		unk_0xC3D0841A0CC546A6(Global_4541233);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513));
		unk_0xC3D0841A0CC546A6(Global_4541234);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513.f_1));
		unk_0xC3D0841A0CC546A6(Global_4541235);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541513.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xC3D0841A0CC546A6(Global_4541230);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510));
		unk_0xC3D0841A0CC546A6(Global_4541231);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510.f_1));
		unk_0xC3D0841A0CC546A6(Global_4541232);
		unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(Global_4541510.f_2));
	}
	unk_0xC6796A8FFA375E53();
	func_9(Global_20247, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(true), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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
	unk_0xC6796A8FFA375E53();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_20254)
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_8136, 17);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_8(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_8(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_8(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_8(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_8(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

