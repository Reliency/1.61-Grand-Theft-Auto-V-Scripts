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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	struct<3> Local_29 = { 0, 0, 0 } ;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	func_28();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_24 == 0)
		{
			if (Global_20266.f_1 != 9)
			{
				switch (Global_20266.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_22640 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_20234, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_20244 = 1;
							if (Global_20266.f_1 > 3)
							{
								if (BitTest(Global_8137, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_20268 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = unk_0xF5BED327CEA362B1(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20266.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	bool bVar0;
	
	func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0x34D23450F028B0BF();
	iLocal_22 = 0;
	bVar0 = false;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0xE791DF1F73ED2C8B(iLocal_22))
		{
			func_6(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(false), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[bVar0] = iLocal_22;
			bVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_20247, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20254)
	{
		func_6(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_8136, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_5(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_5(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_5(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			Local_30.f_0 = (Local_30.f_0 + 1f);
		}
		if (Local_30.f_0 > Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			Local_30.f_1 = (Local_30.f_1 - 2f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			Local_30.f_2 = (Local_30.f_2 - 7f);
		}
		if (Local_30.f_2 < Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 7;
				unk_0x8DFCED7A656F8802(true);
				Global_22642 = 1;
				func_26();
			}
		}
		unk_0xBB779C0CA917E865(Local_30, 0);
	}
}

void func_9()
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_22640 == 6)
	{
		if (iLocal_33)
		{
			Local_30.f_0 = (Local_30.f_0 - 1f);
		}
		if (Local_30.f_0 < Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			Local_30.f_1 = (Local_30.f_1 - 0.5f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			Local_30.f_2 = (Local_30.f_2 + 7f);
		}
		if (Local_30.f_2 > Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xBB779C0CA917E865(Local_30, 0);
	}
	if (BitTest(Global_8137, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(false), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20254)
		{
			func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xE80492A9AC099A93(&Global_8136, 17);
		func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_11()
{
	Global_22642 = 1;
	unk_0x8DFCED7A656F8802(true);
	unk_0x1090044AD1DA76FA();
}

int func_12()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_31 == 0)
	{
		unk_0x1CEFB61F193070AE(&Local_30, 0);
		Local_29 = { Global_20226 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_28)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_20242, 0))
		{
			func_20();
			iLocal_28 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_15(2, Global_20243, 0))
		{
			func_17();
			iLocal_28 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_7(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(true), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_20244 == 0)
	{
		if (func_15(2, Global_20235, 0))
		{
			unk_0xE80492A9AC099A93(&Global_8137, 15);
			func_24();
			Global_20244 = 1;
			unk_0xF6E48914C7A8694E(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_20 = unk_0xC50AA39A577AF886();
			while (!unk_0x768FF8961BA904D6(iLocal_20))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0x2DE7EFA66B906036(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_20266.f_1 > 3)
				{
					if (Global_22640 == 0)
					{
						func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(false), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_20254)
						{
							func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xE80492A9AC099A93(&Global_8136, 17);
						Global_22644 = iLocal_23;
						Global_22640 = 12;
						Global_20266.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_32 == 0)
	{
		unk_0x1CEFB61F193070AE(&Local_30, 0);
		Local_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_20255, true);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

void func_26()
{
	if ((unk_0xF6201B4DAF662A9D() || func_27()) || unk_0x48AF36444B965238())
	{
		unk_0x4AF92ACD3141D96C();
		if (unk_0x2A893980E96B659A(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

bool func_27()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_28()
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

