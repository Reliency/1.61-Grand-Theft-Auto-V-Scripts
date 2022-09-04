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
	int iLocal_18 = 0;
	bool bLocal_19 = 0;
	bool bLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	bool bLocal_25 = 0;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
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
	bLocal_20 = unk_0x5A039BB0BCA604B6(100f, 100f, 30f);
	iLocal_22 = 1;
	bLocal_25 = 0f;
	bLocal_28 = 0f;
	bLocal_31 = 0f;
	bLocal_34 = 0f;
	bLocal_37 = 0f;
	bLocal_40 = 0f;
	bLocal_43 = 0f;
	bLocal_46 = 0f;
	if (unk_0xB16FCE9DDC7BA182())
	{
		unk_0xD4E8E24955024033(500);
	}
	if (unk_0xC968670BFACE42D9(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x11FE353CF9733E6F("p_bubblegum");
	while (!unk_0x85F01B8D5B90570E(iLocal_18))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			bLocal_19 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0xA7A932170592B50E(bLocal_19))
			{
				unk_0xBFD8727AEA3CCEBA(bLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, false, 1, 1, 2);
				unk_0xC7848EFCCC545182(bLocal_19, 0.01f);
				unk_0xAE306F2A904BF86E(bLocal_19, 0.02f);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			}
			unk_0xDF735600A4696DAF(bLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x54972ADAF0294A93(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		unk_0x4EDE34FBADD967A6(false);
	}
}

void func_1(int iParam0)
{
	if (Global_20245 == 0)
	{
		if (unk_0xF3A21BCD95725A4A(2, 189) || unk_0xF3A21BCD95725A4A(2, 190))
		{
			Global_20245 = 1;
			unk_0xC1B1E9A034A63A62(false);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (unk_0x580417101DDB492F(2, 189))
		{
			bLocal_23 = true;
			bLocal_25 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 189))
		{
			bLocal_23 = true;
			bLocal_25 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 189))
		{
			bLocal_23 = false;
			bLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(10);
			unk_0xD69736AAE04DB51A(bLocal_25);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 190))
		{
			bLocal_26 = true;
			bLocal_28 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 190))
		{
			bLocal_26 = true;
			bLocal_28 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 190))
		{
			bLocal_26 = false;
			bLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(11);
			unk_0xD69736AAE04DB51A(bLocal_28);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 188))
		{
			bLocal_29 = true;
			bLocal_31 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 188))
		{
			bLocal_29 = true;
			bLocal_31 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 188))
		{
			bLocal_29 = false;
			bLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(8);
			unk_0xD69736AAE04DB51A(bLocal_31);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 187))
		{
			bLocal_32 = true;
			bLocal_34 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 187))
		{
			bLocal_32 = true;
			bLocal_34 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 187))
		{
			bLocal_32 = false;
			bLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(9);
			unk_0xD69736AAE04DB51A(bLocal_34);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 202))
		{
			bLocal_35 = true;
			bLocal_37 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 202))
		{
			bLocal_35 = true;
			bLocal_37 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 202))
		{
			bLocal_35 = false;
			bLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(17);
			unk_0xD69736AAE04DB51A(bLocal_37);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 204))
		{
			bLocal_38 = true;
			bLocal_40 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 204))
		{
			bLocal_38 = true;
			bLocal_40 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 204))
		{
			bLocal_38 = false;
			bLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(15);
			unk_0xD69736AAE04DB51A(bLocal_40);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 201))
		{
			bLocal_41 = true;
			bLocal_43 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			bLocal_41 = true;
			bLocal_43 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 201))
		{
			bLocal_41 = false;
			bLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(16);
			unk_0xD69736AAE04DB51A(bLocal_43);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0x580417101DDB492F(2, 203))
		{
			bLocal_44 = true;
			bLocal_46 = 1f;
		}
		if (unk_0xF3A21BCD95725A4A(2, 203))
		{
			bLocal_44 = true;
			bLocal_46 = 1f;
		}
		if (!unk_0xF3A21BCD95725A4A(2, 203))
		{
			bLocal_44 = false;
			bLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(14);
			unk_0xD69736AAE04DB51A(bLocal_46);
			unk_0xC6796A8FFA375E53();
		}
	}
}

void func_2()
{
	if (unk_0xA7A932170592B50E(bLocal_19))
	{
		unk_0x865908C81A2C22E9(bLocal_19, false);
	}
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	func_3(0);
	unk_0x577D1284D6873711(false);
	unk_0x8DFCED7A656F8802(true);
	unk_0x1D132D614DD86811(&iLocal_18);
	unk_0x1090044AD1DA76FA();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return BitTest(Global_1958711, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

