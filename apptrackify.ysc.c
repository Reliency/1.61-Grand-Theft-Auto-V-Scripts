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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x9243BAC96D64C050();
	func_10();
	func_7();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_10();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_27) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0xF6E48914C7A8694E(Global_20247, "APP_FUNCTION");
						unk_0xC3D0841A0CC546A6(true);
						unk_0xC6796A8FFA375E53();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0xF6E48914C7A8694E(Global_20247, "APP_FUNCTION");
						unk_0xC3D0841A0CC546A6(true);
						unk_0xC6796A8FFA375E53();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_20234, 0))
					{
						func_5();
						Global_20244 = 1;
						func_10();
						func_7();
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0xE80492A9AC099A93(&Global_8137, 22);
	unk_0x1090044AD1DA76FA();
}

void func_3(int iParam0, int iParam1)
{
	Global_4541482[iParam0] = iParam1;
}

int func_4()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_20254)
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_8136, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_9(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_10()
{
	bool bVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			Local_20 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			fLocal_21 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(23);
				unk_0xC3D0841A0CC546A6(false);
				if (BitTest(Global_8137, 30))
				{
					unk_0xC3D0841A0CC546A6(-99);
					unk_0xC3D0841A0CC546A6(false);
				}
				else
				{
					unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(fLocal_25));
					unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(fLocal_26));
				}
				unk_0xC3D0841A0CC546A6(100);
				if (BitTest(Global_8137, 22))
				{
					unk_0xC3D0841A0CC546A6(true);
				}
				else
				{
					unk_0xC3D0841A0CC546A6(false);
				}
				if (BitTest(Global_8137, 29))
				{
					unk_0xC58424BA936EB458(false);
				}
				else
				{
					unk_0xC58424BA936EB458(true);
				}
				if (BitTest(Global_8138, 1))
				{
					unk_0xD69736AAE04DB51A(fLocal_28);
				}
				unk_0xC6796A8FFA375E53();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(true), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		Local_20 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		fLocal_21 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
		if (Global_4541504 > 21)
		{
		}
		bVar0 = false;
		while (bVar0 < Global_4541504)
		{
			func_13(bVar0);
			func_12(bVar0);
			func_11(bVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(23);
				unk_0xC3D0841A0CC546A6(bVar0);
				bVar1 = false;
				switch (bVar0)
				{
					case 0:
						if (BitTest(Global_4541229, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4541229, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4541229, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4541229, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0xC3D0841A0CC546A6(-99);
					unk_0xC3D0841A0CC546A6(false);
				}
				else
				{
					unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(fLocal_25));
					unk_0xC3D0841A0CC546A6(unk_0xF34EE736CF047844(fLocal_26));
				}
				unk_0xC3D0841A0CC546A6(100);
				if (BitTest(Global_8137, 22))
				{
					unk_0xC58424BA936EB458(true);
				}
				else
				{
					unk_0xC58424BA936EB458(true);
				}
				if (BitTest(Global_8137, 29))
				{
					unk_0xC58424BA936EB458(false);
				}
				else
				{
					unk_0xC58424BA936EB458(true);
				}
				unk_0xD69736AAE04DB51A(fLocal_28);
				unk_0xC3D0841A0CC546A6(Global_4541482[bVar0]);
				unk_0xC6796A8FFA375E53();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(true), -1082130432, -1082130432, -1082130432);
			bVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4541418[iParam0 /*3*/] - Local_20.f_0);
	fLocal_24 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = unk_0x8927CBF9D22261A4(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_4541418[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4541418[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = unk_0x71D93B57D07F9804((((Global_4541418[iParam0 /*3*/] - Local_20.f_0) * (Global_4541418[iParam0 /*3*/] - Local_20.f_0)) + ((Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_22711 - Local_20.f_0);
	fLocal_24 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_22711.f_1 - Local_20.f_1));
	fLocal_25 = unk_0x8927CBF9D22261A4(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_22711, Local_20));
	fLocal_28 = (Global_22711.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = unk_0x71D93B57D07F9804((((Global_22711 - Local_20.f_0) * (Global_22711 - Local_20.f_0)) + ((Global_22711.f_1 - Local_20.f_1) * (Global_22711.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()
{
	if (Global_78319 == 1)
	{
		return 1;
	}
	return 0;
}

