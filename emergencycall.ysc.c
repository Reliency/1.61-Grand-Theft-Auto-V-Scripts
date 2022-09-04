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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0xC968670BFACE42D9(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05983472F0494E60(7, unk_0xD80958FC74E988A6(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x9CD27B0045628463();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(7, Local_45, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x9CD27B0045628463();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x10FAB35428CCC9D7())
					{
						if ((func_7(unk_0x4F8644AF03D0E0D6(), 0) && func_4(unk_0x4F8644AF03D0E0D6()) == 5) && Global_1963926)
						{
							if (Global_1963927 == 0)
							{
								Global_1963927 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x05983472F0494E60(5, unk_0xD80958FC74E988A6(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x9CD27B0045628463();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(5, Local_45, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x9CD27B0045628463();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x10FAB35428CCC9D7())
					{
						if (unk_0x05983472F0494E60(3, unk_0xD80958FC74E988A6(), 4, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x9CD27B0045628463();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3F892CAF67444AE7(3, Local_45, 4, 3f, &iLocal_47, 0, 0))
					{
						if (Global_96938.f_358 == unk_0xD24D37CC275948CC("AGENCY_PREP_1") || (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC("agency_prep1")) > 0 && func_3(0)))
						{
							Global_96938.f_358 = unk_0xD24D37CC275948CC("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_96868 = 1;
						}
						iLocal_46 = unk_0x9CD27B0045628463();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x9CD27B0045628463() > (iLocal_46 + 60000) || !unk_0xC8BC6461E629BEAA(iLocal_47))
					{
						func_1();
					}
					else if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
						{
							if (unk_0xC8BC6461E629BEAA(iLocal_47))
							{
								unk_0x556C1AA270D5A207(iLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x1090044AD1DA76FA();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_4(bool bParam0)
{
	if (func_6(bParam0) == 233)
	{
		return func_5(bParam0);
	}
	return -1;
}

int func_5(bool bParam0)
{
	if (func_7(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_6(bool bParam0)
{
	if (func_7(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_7(bool bParam0, int iParam1)
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x9CD27B0045628463() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0x9CD27B0045628463();
			break;
		
		case 1:
			while (!func_19())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x9CD27B0045628463() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x9CD27B0045628463();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				func_10(unk_0xD80958FC74E988A6(), &Local_45, &uVar0);
			}
			iLocal_46 = unk_0x9CD27B0045628463();
			break;
	}
}

void func_10(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x80CA6A8B6C094CC4(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), iVar0, iParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0x132F52BBA570FE92(*iParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, false);
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*iParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iParam0, true) };
				fVar8 = unk_0x2FFB6B224F4B2926(Var6.f_0, Var6.f_1);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0x4F5070AA58F69279(unk_0x22D7275A79FE8215(*iParam1, 1, 1, 3f, 0f)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * unk_0xBBDA792448DB5A89((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 294f, -895f, 28f, true) < 25f || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0x163E252DE035A133(*iParam1, *uParam2, fVar11, 0f, 0f), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0x2A488C176D52CCA5(unk_0x163E252DE035A133(*iParam1, *uParam2, -fVar11, 0f, 0f), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)))
				{
					fVar11 = -fVar11;
				}
				*iParam1 = { unk_0x163E252DE035A133(*iParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0x28579D1B8F8AAC80(*iParam1 + FtoV((iParam1->f_2 + 4.5f)), *iParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x3D87450E15D98694(iVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (Var17.f_2 > (iParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
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

int func_18()
{
	return Global_22622;
}

int func_19()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

