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
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	if (unk_0xC968670BFACE42D9(2))
	{
		func_18();
	}
	iVar0 = Global_43013;
	iVar1 = 15;
	while (true)
	{
		if (Global_43052 != 15)
		{
			if (Global_43015 != 0)
			{
				if (Global_43014 != -1)
				{
					if (!unk_0x46E9AE36D8FA6417(Global_43015))
					{
						func_17(&Global_43014);
					}
				}
			}
		}
		if (Global_43013 > 0)
		{
			Global_43018 = 1;
			if (Global_43013 == iVar0)
			{
				iVar3 = 0;
				if (Global_43013 > 1)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < Global_43013)
					{
						if (func_15(Global_43019[iVar4 /*4*/].f_2))
						{
							iVar2[iVar4] = 0;
						}
						else
						{
							iVar2[iVar4] = 1;
						}
						if (Global_43019[iVar4 /*4*/].f_1 == 7)
						{
							iVar2[iVar4] = 1;
						}
						iVar4++;
					}
					iVar5 = 0;
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < (Global_43013 - 1))
					{
						if (!iVar2[iVar4 + 1])
						{
							if (Global_43019[iVar4 + 1 /*4*/].f_1 < Global_43019[iVar5 /*4*/].f_1)
							{
								iVar5 = iVar4 + 1;
							}
						}
						iVar4++;
					}
					iVar3 = iVar5;
					if (Global_43019[iVar3 /*4*/].f_2 == 15)
					{
						iVar3 = -1;
					}
					if (iVar3 != -1)
					{
						if (!func_15(Global_43019[iVar3 /*4*/].f_2))
						{
							iVar3 = -1;
						}
					}
				}
				if (iVar3 > -1)
				{
					Global_43014 = Global_43019[iVar3 /*4*/];
					Global_43015 = Global_43019[iVar3 /*4*/].f_3;
					Global_43052 = Global_43019[iVar3 /*4*/].f_2;
					Global_43013 = 0;
					Global_43018 = 0;
				}
				else
				{
					Global_43013 = 0;
					Global_43018 = 0;
				}
			}
		}
		if (iVar1 != Global_43052)
		{
			if (iVar1 == 15)
			{
				func_14(0);
			}
			if (Global_43052 == 15)
			{
				func_14(1);
			}
			Global_43018 = 0;
			Global_38390 = 1;
			if (Global_43052 != 5 && Global_43052 != 15)
			{
				unk_0xBC8983F38F78ED51(8);
			}
			if (Global_43052 == 15 || Global_43052 == 6)
			{
				func_13(0);
			}
			else
			{
				func_13(1);
			}
			if (func_12(Global_43052))
			{
				if (!iLocal_20)
				{
					unk_0xCFEB8AF24FC1D0BB(true);
					iLocal_20 = 1;
				}
			}
			else if (iLocal_20)
			{
				unk_0xCFEB8AF24FC1D0BB(false);
				iLocal_20 = 0;
			}
		}
		iVar1 = Global_43052;
		iVar0 = Global_43013;
		Global_111812 = func_1();
		Global_32235 = unk_0xD972E4BD7AEB235F();
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_43018 = 0;
}

var func_1()
{
	var uVar0;
	
	func_11(&uVar0, unk_0x494E97C2EF27C470());
	func_10(&uVar0, unk_0x13D2B8ADD79640F2());
	func_9(&uVar0, unk_0x25223CA6B4D20B7F());
	func_4(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_3(&uVar0, unk_0xBBC72712E80257A1());
	func_2(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_3(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_4(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_8(*uParam0);
	iVar1 = func_6(*uParam0);
	if (bParam1 < 1 || bParam1 > func_5(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_5(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_6(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_7(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_7(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_8(var uParam0)
{
	return uParam0 & 15;
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}

void func_13(bool bParam0)
{
	if (!bParam0)
	{
		Global_112028 = unk_0x9CD27B0045628463() + 250;
	}
	Global_112025 = bParam0;
}

void func_14(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

bool func_15(int iParam0)
{
	return func_16(iParam0, Global_43052);
}

int func_16(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_17(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_18()
{
	func_17(&Global_43014);
	Global_43018 = 0;
	unk_0x1090044AD1DA76FA();
}

