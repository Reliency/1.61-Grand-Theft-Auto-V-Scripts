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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<282> Local_93 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = -1;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = -1;
	var uLocal_100 = -1;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<15> Local_112 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	struct<2> Local_123[32];
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			unk_0x4EDE34FBADD967A6(0);
			func_59(&Local_93, &Local_112);
			func_46();
			if (unk_0x10FAB35428CCC9D7() && unk_0x83CD99A1E6061AB5())
			{
				func_36(&Local_93, &Local_112);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_93, &Local_112);
	Global_2787910 = 0;
	func_2();
}

void func_2()
{
	unk_0x1090044AD1DA76FA();
}

void func_3(var uParam0, var uParam1)
{
	int iVar0;
	
	if (func_34(&(uParam0->f_281), 15))
	{
		func_33();
		unk_0xE80492A9AC099A93(&Global_2787913, 8);
		func_32(&(uParam0->f_281), 15);
	}
	func_30(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x18A47D074708FD68(uParam1->f_14[uParam0->f_281.f_2])) && unk_0x4D36070FE0215186(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (unk_0xEFBE71898A993728(unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), unk_0xD80958FC74E988A6()))
				{
					unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					func_24(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x4F8644AF03D0E0D6()))
		{
			func_21(-1);
			func_20(-1);
		}
		Global_2787911 = 0;
		unk_0xE80492A9AC099A93(&Global_2787913, 6);
		iVar0 = unk_0x02C40BF885C567B6(uParam0->f_281.f_1);
		if (unk_0x25D39B935A038A26(iVar0))
		{
			unk_0xC254481A4574CB2F(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !unk_0xA41A05B6CB741B85()) && func_18())
		{
			func_5(unk_0x4F8644AF03D0E0D6(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x18C1270EA7F199BC())
		{
			unk_0x5262CC1995D07E09(false);
		}
	}
	if (func_17())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		iVar0 = iParam2;
		unk_0x8D32347D6D4C40A2(bParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x05095437424397FA())
		{
			bVar1 = false;
		}
		if (!func_18())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xB8DFD30D6973E135(bParam0) && (unk_0x5E9564D8246B909A(bParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(bParam0), false))
			{
				return;
			}
			iVar27 = unk_0x43A66C31C68491C0(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x10FAB35428CCC9D7())
				{
					unk_0x416DBD4CD6ED8DD2(true);
				}
				else if (bVar14 || (!func_14(unk_0x4F8644AF03D0E0D6(), 0) && !func_13()))
				{
					unk_0xEA1C610A04DB6BBB(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (unk_0x10FAB35428CCC9D7() && !bVar19)
					{
						unk_0x416DBD4CD6ED8DD2(false);
					}
					Global_2689235[bParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_10(0, 0, 0);
					if (bVar25)
					{
						unk_0x31B73D1EA9F01DA2();
					}
				}
				if (!func_9(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
				{
					if (!bVar22)
					{
						unk_0x1A9205C1B9EE827F(iVar27, true, false);
					}
				}
				if (!unk_0xB346476EF1A64897(iVar27))
				{
					if (!bVar21)
					{
						unk_0x428CA6DBD1094446(iVar27, false);
					}
					unk_0x3910051CCECDB00C(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x428CA6DBD1094446(iVar27, false);
				}
				unk_0x63F58F7C80513AAD(iVar27, true);
				unk_0x239528EACDC3E7DE(bParam0, false);
				unk_0x6BC97F4F4BB3C04B(bParam0, false);
				if (unk_0x654CD0A825161131(iVar27) && unk_0x7350823473013C02(iVar27))
				{
					unk_0x4668D80430D6C299(iVar27);
				}
				unk_0xB128377056A54E2A(iVar27, true);
				if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()) == 0)
				{
					func_8();
					func_7();
				}
				if (unk_0x02B15662D7F8886F())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xA41A05B6CB741B85())
				{
				}
				Global_2689235[bParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_9(iVar27) && !unk_0x26AA915AD89BFB4B(iVar27))
				{
					if (!bVar22)
					{
						unk_0x1A9205C1B9EE827F(iVar27, !bVar15, false);
					}
					if (!unk_0xB346476EF1A64897(iVar27))
					{
						if (!bVar21)
						{
							unk_0x428CA6DBD1094446(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x3910051CCECDB00C(iVar27, true);
						}
					}
					if (func_6(Global_4718592.f_168757))
					{
						unk_0x428CA6DBD1094446(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x239528EACDC3E7DE(bParam0, false);
				}
				else
				{
					unk_0x239528EACDC3E7DE(bParam0, true);
				}
				unk_0x63F58F7C80513AAD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xD839450756ED5A80(iVar27) && !unk_0x997ABD671D25CA0B(iVar27, false))
					{
						unk_0xAAA34F8A7CB32098(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x8D32347D6D4C40A2(bParam0, bParam1, iVar28);
		}
	}
}

bool func_6(int iParam0)
{
	return iParam0 == 17;
}

void func_7()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_8()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x77F1BEB8863288D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_10(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5F9532F3B5CC2551(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x12534C348C6CB68B(iParam1))
			{
				if (!unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), unk_0x6C0E2E0125610278(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_12();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x2A2173E46DAECD12(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), true);
			}
		}
		if (func_14(unk_0x4F8644AF03D0E0D6(), 0))
		{
			unk_0x419594E137637120(bParam0, iParam1, true);
		}
		else
		{
			unk_0x423DE3854BB50894(bParam0, iParam1);
		}
		unk_0x1A5CD7752DD28CD3(bParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
	}
}

void func_12()
{
	int iVar0;
	
	if (!unk_0x048746E388762E11())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), 2);
			unk_0x933D6A9EEC1BACD0(&(Global_2621446.f_67), false);
		}
	}
}

bool func_13()
{
	return BitTest(Global_2621446, 3);
}

bool func_14(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1574918;
}

int func_17()
{
	if (BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	return Global_1574632.f_18;
}

void func_20(int iParam0)
{
	Global_2725430 = iParam0;
}

void func_21(int iParam0)
{
	Global_2725432 = iParam0;
	Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_827 = iParam0;
}

int func_22(bool bParam0)
{
	if (bParam0 != func_23())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_23()
{
	return -1;
}

void func_24(var uParam0)
{
	int iVar0;
	
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		if (!unk_0x4D36070FE0215186(*uParam0))
		{
		}
	}
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xAE3CBE5BF394C9C9(&iVar0);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (func_26())
	{
		unk_0x8DFCED7A656F8802(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_30(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((((((((((((func_29("MPOFSEAT_PCEXIT") || func_29("MPOFSEAT_EXIT")) || func_29("ARENA_SEAT")) || func_29("ARENA_SEAT_PC")) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_29("ARENA_SEAT4")) || func_29("ARENA_SEAT_PC4")) || func_29("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_27(char* sParam0, bool bParam1)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_28(char* sParam0, bool bParam1, bool bParam2)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_29(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_30(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_31(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_31(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(int* iParam0, bool bParam1)
{
	unk_0xE80492A9AC099A93(iParam0, bParam1);
}

void func_33()
{
	unk_0x643ED62D5EA3BEBD();
}

bool func_34(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = unk_0x41BD2A6B006AF756(bVar0);
		if (bVar2 != func_23() && unk_0x3CA58F6CB7CBD784(bVar2))
		{
			if (BitTest(Local_123[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_112.f_13, bVar2))
				{
					if (Local_123[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_123[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_112.f_2[iVar3] < 0)
								{
									Local_112.f_2[iVar3] = bVar2;
									unk_0x933D6A9EEC1BACD0(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_123[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_112.f_2[iVar4] = bVar2;
									unk_0x933D6A9EEC1BACD0(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != unk_0x4F8644AF03D0E0D6())
		{
			if (BitTest(Local_112.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_112.f_2[iVar5] == bVar0)
					{
						if (unk_0x38CE16C96BD11344(Local_112.f_14[iVar5]))
						{
							if (unk_0x4D36070FE0215186(Local_112.f_14[iVar5]))
							{
								Local_112.f_2[iVar5] = -1;
								func_24(&(Local_112.f_14[iVar5]));
								unk_0xE80492A9AC099A93(&(Local_112.f_13), bVar0);
							}
							else
							{
								unk_0xA670B3662FAFFBD0(Local_112.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_112.f_2[iVar5] = -1;
								unk_0xE80492A9AC099A93(&(Local_112.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_36(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	unk_0xD3BD40951412FEF6(func_43());
	if (!unk_0xD031A9162D01088C(func_43()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!unk_0x18A47D074708FD68(uParam1->f_14[uParam0->f_281.f_4]))
		{
			bVar0 = joaat("xs_prop_arena_tablet_drone_01");
			unk_0x963D27A58DF860AC(bVar0);
			if (!unk_0x98A4EB5D89A0C952(bVar0))
			{
				return;
			}
			if (func_37(unk_0xAA81B5F10BC43AC2(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					unk_0x797F9C5E661D920E(unk_0xAA81B5F10BC43AC2(false, 1) + 1);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (unk_0x800DD4721A8B008B(1))
				{
					Var2 = { unk_0xBE22B26DD764C040(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var3 = { unk_0x4B805E6046EE9E47(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = unk_0x509D5878EB39E842(bVar0, Var2, true, true, false);
					unk_0xE532F5D78798DAAB(bVar0);
					unk_0x1760FFA8AB074D66(iVar1, false);
					unk_0x239A3351AC1DA385(iVar1, Var2, false, false, true);
					unk_0x8524A8B0171D5E07(iVar1, Var3, 2, true);
					unk_0x428CA6DBD1094446(iVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = unk_0x99BFDC94A603E541(iVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_37(int iParam0, bool bParam1, bool bParam2)
{
	return func_38(2, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

char* func_43()
{
	if (func_44())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_44()
{
	return func_45(unk_0x4F8644AF03D0E0D6());
}

int func_45(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_112.f_2[iVar1] == -1 || Local_112.f_2[iVar1] == unk_0x4F8644AF03D0E0D6())
			{
				iVar0 = 0;
				if (Local_112.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_56()) && func_52())
					{
						unk_0x8A97BCA30A0CE478(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						unk_0xD9E3006FB3CBD765(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					unk_0x8A97BCA30A0CE478(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				unk_0x8A97BCA30A0CE478(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2787910 = iVar0;
	}
	else
	{
		Global_2787910 = 0;
	}
	if (Local_93.f_281.f_5 == 4)
	{
		if (!BitTest(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/], 0))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/]), false);
			if (func_50())
			{
				unk_0x933D6A9EEC1BACD0(&(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/].f_1), false);
			}
			else if (Local_93.f_281.f_9 == 1)
			{
				unk_0x933D6A9EEC1BACD0(&(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/].f_1), Local_93.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_112.f_13, unk_0x4F8644AF03D0E0D6()))
		{
			if (func_49() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_112.f_2[iVar2] == unk_0x4F8644AF03D0E0D6())
					{
						func_21(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_50())
		{
			if (func_48() && unk_0x5A859503B0C08678())
			{
				func_47(0);
			}
		}
		if (BitTest(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/], 0))
		{
			if (!func_48() && func_49() < 0)
			{
				if (func_50())
				{
					func_47(0);
				}
				unk_0xE80492A9AC099A93(&(Local_123[unk_0x4F8644AF03D0E0D6() /*2*/]), false);
				Local_123[unk_0x4F8644AF03D0E0D6() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_2787909 = iParam0;
}

int func_48()
{
	if (Global_2725430 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return Global_2725432;
}

bool func_50()
{
	return Global_2787909;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_52()
{
	int iVar0;
	int iVar1;
	
	if (func_55() && !func_54())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_53())
		{
			return 1;
		}
	}
	iVar0 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_54()
{
	return Global_1574966;
}

var func_55()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_56()
{
	if (func_58() && !func_57())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_58()
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_59(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_32(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = unk_0x9CD27B0045628463();
				func_132(uParam0, 2);
			}
			else if (func_50())
			{
				uParam0->f_281.f_7 = unk_0x9CD27B0045628463();
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_130(unk_0xD80958FC74E988A6(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0xD80958FC74E988A6(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_50())
			{
				if ((((((func_128(uParam0) || Global_1931426) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x4F8644AF03D0E0D6())) || ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26630))
				{
					if (!Global_1931426 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x4F8644AF03D0E0D6()))
					{
						iVar3 = unk_0x43A66C31C68491C0(iParam1->f_2[uParam0->f_281.f_2]);
						if (unk_0x7239B21A38F536BA(iVar3) && !unk_0x51210CED3DA1C78A(iVar3, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, unk_0x6D0DE6A7B5DA71F8(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((unk_0x9CD27B0045628463() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_124(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0x580417101DDB492F(0, 51))
				{
					func_30(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x4F8644AF03D0E0D6(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (func_50())
			{
				func_30(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_49() >= 0)
			{
				if (func_50())
				{
					uParam0->f_281.f_2 = func_49();
					if (unk_0x47D6F43D77935C75(unk_0xD80958FC74E988A6()))
					{
						unk_0xDE564951F95E09ED(unk_0xD80958FC74E988A6(), false, true);
					}
					func_120(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!func_50())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x4F8644AF03D0E0D6())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x4F8644AF03D0E0D6(), 1, 0, 0);
					}
					func_4();
					func_132(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_119(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0xD3BD40951412FEF6(&sVar0);
			if (unk_0xD031A9162D01088C(&sVar0))
			{
				func_118();
				func_132(uParam0, 5);
			}
			break;
		
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			Var4 = { unk_0xBE22B26DD764C040(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			Var5 = { unk_0x4B805E6046EE9E47(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			if (func_34(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_114() >= 0)
				{
					bVar6 = false;
				}
				if (func_102(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2787912)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2787912)
				{
				}
			}
			else if (Global_2787912)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
					{
						unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				unk_0xD76B57B44F1E6F8B(unk_0xD80958FC74E988A6(), Var4, 1f, 500, Var5.f_2, 0.05f);
				func_21(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2787912)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			iVar7 = unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), 2106541073);
			Var8 = { unk_0x4B805E6046EE9E47(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || func_101(unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()), fVar9, 5f)) || func_34(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_116(uParam0) };
				if (func_34(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0.9f;
				}
				uParam0->f_281.f_1 = unk_0x7CD6BC4C2BBDD526(Var12, func_115(uParam0), 2, true, false, 1f, fVar11, fVar10);
				unk_0x742A637471BCECD9(unk_0xD80958FC74E988A6(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1000f, 0);
				unk_0x9A1B3FCDB36C8697(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = unk_0x9CD27B0045628463();
				func_120(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_34(&(uParam0->f_281), 10))
			{
				func_32(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					unk_0xE65F427EB70AB1ED(iVar13, "Exit_Menu", unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			iVar2 = unk_0x02C40BF885C567B6(uParam0->f_281.f_1);
			if (unk_0x25D39B935A038A26(iVar2))
			{
				if (unk_0xE4A310B1D7FA73CC(iVar2) >= 1f)
				{
					if (!Global_2787911)
					{
						if (!unk_0x47D6F43D77935C75(unk_0xD80958FC74E988A6()) && !unk_0x422F32CC7E56ABAD(unk_0xD80958FC74E988A6()))
						{
							if (Global_1574965)
							{
								unk_0x1F4ED342ACEFE62D(unk_0xD80958FC74E988A6(), true, 1);
							}
						}
					}
					if (!func_48())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xE65F427EB70AB1ED(iVar14, "Enter_Menu", unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_20(uParam0->f_281.f_2);
						}
						else
						{
							func_20(uParam0->f_281.f_2 + 20);
						}
						Global_2787911 = 1;
					}
					else
					{
						Global_2787911 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = unk_0x7CD6BC4C2BBDD526(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
					unk_0x742A637471BCECD9(unk_0xD80958FC74E988A6(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					unk_0x9A1B3FCDB36C8697(uParam0->f_281.f_1);
					func_120(&(uParam0->f_281), 8);
					func_120(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), 1374875855) || unk_0xE4A310B1D7FA73CC(iVar2) > 0.25f))
					{
						if ((unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2])) && !unk_0x5F9532F3B5CC2551(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
							{
								unk_0x6B9BBD38AB0796DF(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), unk_0xD80958FC74E988A6(), unk_0x3F428D08BE5AAE31(unk_0xD80958FC74E988A6(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_32(&(uParam0->f_281), 8);
				}
			}
			else if (!func_34(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0xC254481A4574CB2F(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
					{
						unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false, true);
					}
					Var15 = { unk_0xBE22B26DD764C040(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var16 = { unk_0x4B805E6046EE9E47(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					unk_0x239A3351AC1DA385(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), Var15, false, false, true);
					unk_0x8524A8B0171D5E07(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, true);
					unk_0x428CA6DBD1094446(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		
		case 9:
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xE80492A9AC099A93(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xA670B3662FAFFBD0(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar17 = unk_0x02C40BF885C567B6(uParam0->f_281.f_1);
			iVar18 = unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), 1785177548);
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (unk_0x25D39B935A038A26(iVar17))
				{
					if ((unk_0xE4A310B1D7FA73CC(iVar17) >= 0.7f || unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), 364629851)) || unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), 2116425869))
					{
						unk_0xC254481A4574CB2F(uParam0->f_281.f_1);
						if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x4F8644AF03D0E0D6()))
						{
							func_21(-1);
							func_20(-1);
						}
						Global_2787911 = 0;
						unk_0xE80492A9AC099A93(&Global_2787913, 6);
						func_25(uParam0, 1);
						func_32(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var19 = { unk_0xBE22B26DD764C040(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var20 = { unk_0x4B805E6046EE9E47(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								unk_0x239A3351AC1DA385(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), Var19, false, false, true);
								unk_0x8524A8B0171D5E07(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, true);
								unk_0x428CA6DBD1094446(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!unk_0xA41A05B6CB741B85())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(unk_0x4F8644AF03D0E0D6(), 1, 0, 0);
							}
						}
						func_4();
						func_132(uParam0, 0);
					}
					else if (unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x18A47D074708FD68(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x4D36070FE0215186(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x4F8644AF03D0E0D6()))
				{
					func_21(-1);
					func_20(-1);
				}
				Global_2787911 = 0;
				unk_0xE80492A9AC099A93(&Global_2787913, 6);
				func_25(uParam0, 1);
				func_32(&(uParam0->f_281), 14);
				if (!unk_0xA41A05B6CB741B85())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x4F8644AF03D0E0D6(), 1, 0, 0);
					}
				}
				func_4();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		bVar2 = 3;
		iVar0 = unk_0xD53343AA4FB7DD28(false, bVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % bVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = unk_0x9CD27B0045628463();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((unk_0x9CD27B0045628463() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_61(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if ((BitTest(Global_1965531, 7) || BitTest(Global_1965531, 3)) || func_22(unk_0x4F8644AF03D0E0D6()))
	{
		if (uParam0->f_281.f_5 == 7 && unk_0xB16FCE9DDC7BA182())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (func_34(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				unk_0xE65F427EB70AB1ED(iVar1, "Select_Turret", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			unk_0x933D6A9EEC1BACD0(&Global_1965531, 9);
			func_32(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2787913, 7))
			{
				unk_0x933D6A9EEC1BACD0(&Global_2787913, 7);
			}
			unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_32(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			func_25(uParam0, 1);
		}
		if (unk_0xEAF4CD9EA3E7E922(unk_0xD80958FC74E988A6(), -1322051853))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xE80492A9AC099A93(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_34(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1965531, 23) && !func_91())) || Global_2789734) || Global_2789737) || BitTest(Global_1958711, 13)) || BitTest(Global_1965531, 14)) || BitTest(Global_1958711, 9)) || BitTest(Global_2787913, 0)) || BitTest(Global_1965531, 6)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9)) || BitTest(Global_1965531, 2)) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || func_22(unk_0x4F8644AF03D0E0D6())) || func_50()) || unk_0xE2587F8CBBD87B1D(2, 19)) || !unk_0x5A859503B0C08678()) || func_88(unk_0x4F8644AF03D0E0D6())) || Global_2787934 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1965531, 23))
			{
				if (!func_34(&(uParam0->f_281), 15) && Global_2787934 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					unk_0x933D6A9EEC1BACD0(&Global_2787913, 8);
					func_120(&(uParam0->f_281), 15);
				}
			}
			else if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xE80492A9AC099A93(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xE80492A9AC099A93(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_34(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				unk_0x933D6A9EEC1BACD0(&Global_2787913, 8);
				func_120(&(uParam0->f_281), 15);
			}
			unk_0x7F4724035FDCA1DD(2);
			unk_0xFE99B66D079CF6BC(0, 24, true);
			unk_0xFE99B66D079CF6BC(0, 257, true);
			unk_0xFE99B66D079CF6BC(0, 142, true);
			unk_0xFE99B66D079CF6BC(0, 141, true);
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 263, true);
			unk_0xFE99B66D079CF6BC(0, 264, true);
			unk_0xFE99B66D079CF6BC(0, 143, true);
			unk_0xFE99B66D079CF6BC(2, 200, true);
			bVar2 = false;
			if (func_85())
			{
				bVar2 = true;
			}
			if (func_27("ARENA_VIP_CASH1", Global_262145.f_26633))
			{
				unk_0xE80492A9AC099A93(&Global_2787913, 5);
			}
			if (func_27("ARENA_VIP_CASH2", Global_262145.f_26634))
			{
				unk_0xE80492A9AC099A93(&Global_2787913, 4);
			}
			if (func_29("ARENA_VIP_ABIL"))
			{
				unk_0xE80492A9AC099A93(&Global_2787913, 7);
			}
			if (BitTest(Global_2787913, 4) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH2", Global_262145.f_26634, 2000);
			}
			if (BitTest(Global_2787913, 5) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH1", Global_262145.f_26633, 2000);
			}
			if (BitTest(Global_2787913, 7) && uParam0->f_281.f_6 == -1)
			{
				func_83("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2787913, 4) || BitTest(Global_2787913, 5)) || BitTest(Global_2787913, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!unk_0xB0034A223497FFCB() && !Global_1931426) && !func_34(&(uParam0->f_281), 0)) && !func_34(&(uParam0->f_281), 4)) && !func_82()) && !func_80(1)) && uParam0->f_281.f_9.f_2 != 3) && !unk_0xE18B138FABC53103()) && !func_79())
			{
				if (bVar2)
				{
					if (func_56() && !func_52())
					{
						if (((((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
						{
							func_25(uParam0, 1);
						}
					}
					else if (func_29("ARENA_SEAT_PC") || func_29("ARENA_SEAT"))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2787913, 4)) && !BitTest(Global_2787913, 5)) && !BitTest(Global_2787913, 7)) && !func_27("ARENA_VIP_CASH1", Global_262145.f_26633)) && !func_27("ARENA_VIP_CASH2", Global_262145.f_26634)) && !func_29("ARENA_VIP_ABIL"))
				{
					if (unk_0xA571D46727E2B718(2))
					{
						if (bVar2)
						{
							if (func_56() && !func_52())
							{
								if ((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634))
								{
									func_25(uParam0, 1);
								}
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_29("ARENA_SEAT_PC"))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_78("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634);
								}
								else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC2", Global_262145.f_26633, -1);
								}
								else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC3", Global_262145.f_26634, -1);
								}
								else
								{
									func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_56() && !func_52())
						{
							if ((func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
							{
								func_25(uParam0, 1);
							}
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_29("ARENA_SEAT"))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_78("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634);
							}
							else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT2", Global_262145.f_26633, -1);
							}
							else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT3", Global_262145.f_26634, -1);
							}
							else
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_56() && !func_52())
					{
						if (((((((((unk_0x91AEF906BCA88877(2, 235) && !unk_0x580417101DDB492F(2, 223)) && !unk_0x580417101DDB492F(2, 225)) && !unk_0x580417101DDB492F(2, 224)) && !unk_0x580417101DDB492F(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x4F8644AF03D0E0D6()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xE65F427EB70AB1ED(iVar3, "Exit_Menu", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((unk_0x91AEF906BCA88877(2, 223) && !unk_0x91AEF906BCA88877(2, 235)) && !unk_0x580417101DDB492F(2, 225)) && !unk_0x580417101DDB492F(2, 224)) && !unk_0x580417101DDB492F(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x4F8644AF03D0E0D6())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								unk_0x933D6A9EEC1BACD0(&Global_1965531, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xE65F427EB70AB1ED(iVar4, "Select_Drone", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0x933D6A9EEC1BACD0(&Global_2787913, 7);
								}
								unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((unk_0x91AEF906BCA88877(2, 225) && !unk_0x91AEF906BCA88877(2, 235)) && !unk_0x580417101DDB492F(2, 223)) && !unk_0x580417101DDB492F(2, 224)) && !unk_0x580417101DDB492F(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x4F8644AF03D0E0D6())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								unk_0x933D6A9EEC1BACD0(&Global_1965531, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xE65F427EB70AB1ED(iVar5, "Select_RC_Car", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0x933D6A9EEC1BACD0(&Global_2787913, 7);
								}
								unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((unk_0x91AEF906BCA88877(2, 224) && !unk_0x91AEF906BCA88877(2, 235)) && !unk_0x580417101DDB492F(2, 223)) && !unk_0x580417101DDB492F(2, 225)) && !unk_0x580417101DDB492F(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x4F8644AF03D0E0D6())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								unk_0x933D6A9EEC1BACD0(&Global_1965531, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xE65F427EB70AB1ED(iVar6, "Select_Trap_Cam", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0x933D6A9EEC1BACD0(&Global_2787913, 7);
								}
								unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((unk_0x91AEF906BCA88877(2, 222) && !unk_0x91AEF906BCA88877(2, 235)) && !unk_0x580417101DDB492F(2, 223)) && !unk_0x580417101DDB492F(2, 225)) && !unk_0x580417101DDB492F(2, 224)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x4F8644AF03D0E0D6())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (func_34(&(uParam0->f_281), 15))
								{
									func_33();
									unk_0xE80492A9AC099A93(&Global_2787913, 8);
									func_32(&(uParam0->f_281), 15);
								}
								func_120(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0x933D6A9EEC1BACD0(&Global_2787913, 7);
								}
								unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((unk_0x91AEF906BCA88877(2, 235) && !unk_0x580417101DDB492F(2, 224)) && !Global_2789737) && !Global_2789734)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xE65F427EB70AB1ED(iVar7, "Exit_Menu", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((unk_0x91AEF906BCA88877(2, 223) && !unk_0x91AEF906BCA88877(2, 235)) && !unk_0x580417101DDB492F(2, 224)) && bVar2) && !Global_262145.f_26631)
						{
							if (unk_0xAB3CAA6B422164DA(Global_262145.f_26633, false, false, true, -1, 0) || BitTest(Global_2787913, 3))
							{
								func_25(uParam0, 1);
								Global_2789737 = 1;
								Global_2789734 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xE65F427EB70AB1ED(iVar8, "Select_Live_Stream", unk_0xD8515F5FEA14CB3F(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								func_70(73, -1);
								func_68();
								func_63();
							}
							else if (!BitTest(Global_2787913, 5))
							{
								unk_0x933D6A9EEC1BACD0(&Global_2787913, 5);
							}
						}
					}
				}
			}
		}
	}
	func_32(&(uParam0->f_281), 9);
}

void func_63()
{
	func_64(1, 7986);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_67(iParam1, -1, 0);
	func_65(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_65(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_68()
{
	int iVar0;
	
	iVar0 = func_69(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_69(iParam0, func_66(iParam1));
	bVar0++;
	func_71(iParam0, bVar0, iParam1);
}

void func_71(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(uParam2)];
	unk_0xB3271D7AB655B441(iVar0, bParam1, true);
}

int func_72()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63310 - 1))
	{
		if (!func_75(Global_4980736.f_63312[iVar0 /*183*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, bool bParam1, bool bParam2)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	unk_0x238FFE5C7B0498A6(0, false, true, -1);
}

bool func_79()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_80(bool bParam0)
{
	if (unk_0xFC859E2374407556())
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (func_81(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xF3A21BCD95725A4A(0, 25) || unk_0xF3A21BCD95725A4A(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (unk_0xF3A21BCD95725A4A(0, 19) || (!bParam0 && unk_0xE2587F8CBBD87B1D(0, 19)))
	{
		return 1;
	}
	if (unk_0x48AF36444B965238())
	{
		if (((unk_0xF3A21BCD95725A4A(0, 166) || unk_0xF3A21BCD95725A4A(0, 167)) || unk_0xF3A21BCD95725A4A(0, 168)) || unk_0xF3A21BCD95725A4A(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xE2587F8CBBD87B1D(0, 166) || unk_0xE2587F8CBBD87B1D(0, 167)) || unk_0xE2587F8CBBD87B1D(0, 168)) || unk_0xE2587F8CBBD87B1D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E346D934122613F())
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			unk_0x3A87E44BB9A01D54(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_83(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_84(char* sParam0, bool bParam1, int iParam2)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam2);
}

int func_85()
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)
{
	return func_34(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)
{
	unk_0x3D42B92563939375(sParam0);
}

bool func_88(bool bParam0)
{
	return func_89(bParam0) != 0;
}

int func_89(int iParam0)
{
	if (iParam0 == unk_0x4F8644AF03D0E0D6() && !func_90())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_90()
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

int func_91()
{
	if (((((func_29("ARENA_SEAT_GM0") || func_29("ARENA_SEAT_GM1")) || func_29("TAGTM_HELP_2O")) || func_29("TAGTM_HELP_2P")) || func_29("TAGTM_HELP_2Pi")) || func_29("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_98(1, 0, 0, 1, 1);
	}
	iVar0 = func_97(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_93(0, -1, -1);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2787937.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2787937.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2787937 != iParam2)
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	func_95();
	func_94(3);
	Global_2787937.f_1 = 0;
	Global_2787937.f_2 = -1;
	Global_2787937 = -1;
	Global_2787933 = 0;
	Global_2787935 = 0;
	Global_2787943 = unk_0x89023FBBF9200E9F();
	Global_2787936 = 1;
	return 1;
}

void func_94(int iParam0)
{
	Global_2787932 = iParam0;
}

void func_95()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("turret_cam_script")) > 0)
	{
		Global_2787945 = 1;
	}
}

bool func_96()
{
	return (Global_2787932 == 3 || Global_2787932 == 0);
}

int func_97(int iParam0)
{
	if (Global_2787943 == iParam0)
	{
		if (Global_2787932 == 2)
		{
			if (Global_2787943 == Global_2787944)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2787932 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_94(1);
	Global_2787937 = { Var0 };
	Global_2787933 = iParam3;
	Global_2787943 = unk_0x89023FBBF9200E9F();
	Global_2787935 = 0;
	func_99(&Global_2787935, 0, !bParam4);
	Global_2787936 = 1;
	return Global_2787943;
}

void func_99(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(iParam0, bParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(iParam0, bParam1);
	}
}

void func_100(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = unk_0x7CD6BC4C2BBDD526(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
	func_119(uParam0, &sVar0);
	unk_0x742A637471BCECD9(unk_0xD80958FC74E988A6(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0x9A1B3FCDB36C8697(uParam0->f_281.f_1);
	func_30(&(uParam0->f_281.f_6));
	unk_0x933D6A9EEC1BACD0(&Global_2787913, 6);
	func_32(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_101(float fParam0, float fParam1, float fParam2)
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
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
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

int func_102(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_111(0, bParam7);
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F() && !bParam7)
	{
		if (Global_2703735.f_910)
		{
			func_111(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xA41A05B6CB741B85() && !bParam7) && !unk_0x02B15662D7F8886F())
	{
		return 0;
	}
	if (!func_110(0))
	{
		if (func_109(unk_0x4F8644AF03D0E0D6(), 1, 0) && !(func_55() || func_108()))
		{
			if (((bParam7 && func_107(unk_0x4F8644AF03D0E0D6(), 1, 0)) && unk_0xD9D2CFFF49FAB35F()) && Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_230 == 1)
			{
			}
			else if (func_106() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2703735.f_910 && !bParam9)
	{
		Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
		if ((unk_0x73D57CFFDD12C355((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x73D57CFFDD12C355((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x73D57CFFDD12C355((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x73D57CFFDD12C355(fVar2) < 1f)
			{
				Global_2703735.f_910 = 0;
				Global_2703735.f_911 = 0;
				if (unk_0x02B15662D7F8886F())
				{
					unk_0xC449EDED9D73009C();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703735.f_912 || !Param0.f_1 == Global_2703735.f_912.f_1) || !Param0.f_2 == Global_2703735.f_912.f_2) || !fParam1 == Global_2703735.f_915)
	{
		if (Global_2703735.f_910 == 1)
		{
			if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2703735.f_916) < func_105(0))
			{
				return 0;
			}
			unk_0xC449EDED9D73009C();
			Global_2703735.f_911 = 1;
		}
		else
		{
			Global_2703735.f_911 = 0;
		}
		Global_2703735.f_912 = { Param0 };
		Global_2703735.f_915 = fParam1;
		Global_2703735.f_910 = 0;
	}
	if (bParam2)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (unk_0x7239B21A38F536BA(iVar0) && unk_0x9F47B058362C84B5(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2703735.f_910 && !unk_0x02B15662D7F8886F())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!BitTest(Global_100493.f_1393[44], 16))
			{
				func_104(0);
			}
			if (!unk_0x1017582BCD3832DC(unk_0xD80958FC74E988A6(), &(Global_2667225.f_502)))
			{
				Global_2667225.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0xE7CF3C4F9F489F0C(iVar0))
				{
					Global_2703735.f_917 = 0;
				}
			}
		}
		if (Global_2703735.f_917 > -1)
		{
			Global_2703735.f_916 = unk_0x7A5487FE9FAA6B48();
			Global_2703735.f_910 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x01BF60A500E28887(iVar0))
						{
							unk_0x06843DA7060A026B(iVar0, Param0, false, true, true, true);
							unk_0x8E2530AA8ADA980E(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0x8524A8B0171D5E07(iVar0, fParam10, 0f, fParam1, 2, true);
							}
						}
						else
						{
							unk_0xB69317BF5E782347(iVar0);
						}
					}
					else
					{
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, false, false, false, true);
						unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam1);
					}
				}
				else
				{
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, false, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam1);
				}
				func_111(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x31B73D1EA9F01DA2();
				unk_0xAD15F075A4DA0FDE(unk_0x4F8644AF03D0E0D6(), Param0, fParam1, bParam2, bParam8, false);
			}
			Global_2703735.f_916 = unk_0x7A5487FE9FAA6B48();
			Global_2703735.f_910 = 1;
		}
	}
	if (Global_2703735.f_910)
	{
		Global_23011.f_6 = 1;
		Global_2703735.f_916 = unk_0x7A5487FE9FAA6B48();
		if (Global_2703735.f_917 > -1)
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			}
			if (func_103(&(Global_2703735.f_917), Param0, fParam1, iVar0))
			{
				func_111(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Global_2703735.f_912) < 2f)
				{
					if (unk_0x02B15662D7F8886F())
					{
						unk_0xC449EDED9D73009C();
					}
					func_111(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x02B15662D7F8886F())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						unk_0x8524A8B0171D5E07(iVar0, fParam10, 0f, fParam1, 2, true);
						Global_2703735.f_918 = 1;
						return 0;
					}
				}
				func_111(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(Global_2703735.f_919) && !unk_0x5F9532F3B5CC2551(Global_2703735.f_919, false))
	{
		unk_0xB69317BF5E782347(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = iParam3;
			unk_0xB69317BF5E782347(Global_2703735.f_919);
			if (unk_0x01BF60A500E28887(Global_2703735.f_919))
			{
				if (!unk_0x5F9532F3B5CC2551(Global_2703735.f_919, false))
				{
					unk_0x8E2530AA8ADA980E(Global_2703735.f_919, fParam2);
					unk_0x06843DA7060A026B(Global_2703735.f_919, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((unk_0x845FFC3A4FEEFA3E() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!unk_0xA151A7394A214E65())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_105(bool bParam0)
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_106()
{
	return Global_1574991;
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5E9564D8246B909A(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_108()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

int func_109(bool bParam0, bool bParam1, int iParam2)
{
	if (Global_2689235[bParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[bParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[bParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_111(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x6D0858B8EDFD2B7D(0f, 1f);
		unk_0xB4EC2312F4E5B1F1(0f);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
	}
	if (!bParam1)
	{
		unk_0x31B73D1EA9F01DA2();
	}
	if (unk_0x02B15662D7F8886F())
	{
		unk_0xC449EDED9D73009C();
	}
	func_7();
	if (!BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_267.f_30, 14) && !func_113())
	{
		func_112();
	}
}

void func_112()
{
	Global_2824571.f_92 = 1;
}

int func_113()
{
	if (!unk_0x05095437424397FA() && !func_110(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_2725430;
}

Vector3 func_115(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_118()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_119(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_44())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_120(int* iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(iParam0, bParam1);
}

void func_121(var uParam0)
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_44())
		{
			iVar0 = unk_0xD53343AA4FB7DD28(false, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = unk_0xD53343AA4FB7DD28(false, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*uParam0 == -1)
		{
			func_30(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0xC30338E8088E2E21();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_125(var uParam0)
{
	Stack.Push(!func_34(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < unk_0xA6C90FBC38E395EE())
	{
		if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(bVar0)))
		{
			bVar1 = unk_0x24FB80D107371267(unk_0x9EC6603812C24710(bVar0));
			if (bVar1 != unk_0x4F8644AF03D0E0D6() && func_107(bVar1, 1, 1))
			{
				if (func_130(unk_0x43A66C31C68491C0(bVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_127(bVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_127(bool bParam0)
{
	if (bParam0 != func_23())
	{
		return Global_1853348[bParam0 /*834*/].f_827;
	}
	return -1;
}

bool func_128(var uParam0)
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (func_101(unk_0xE83D4F9BA2A38914(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, var uParam1)
{
	return unk_0x51210CED3DA1C78A(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_130(unk_0xD80958FC74E988A6(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0xD80958FC74E988A6(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1965531, 7))
	{
		func_139(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_139(1);
		
		case 7:
			unk_0xF4F2C0D4EE209E20();
			unk_0xEB354E5376BC81A7(false);
			unk_0xA5E78BA2B1331C55(false);
			unk_0x6806C51AD12B83B8(19);
			unk_0x6806C51AD12B83B8(2);
			unk_0x0AFC4AF510774B47();
			if (!func_138())
			{
				func_137();
			}
			if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
			}
			unk_0xFE99B66D079CF6BC(0, 37, true);
			func_135(1);
			func_134();
			break;
	}
}

void func_134()
{
	Global_23011.f_6 = 1;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		if (func_136())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_136()
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_137()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

bool func_138()
{
	return BitTest(Global_1958711, 19);
}

void func_139(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_144(0))
		{
			func_140(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_140(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_143())
		{
			func_142(1, 1);
		}
		else
		{
			func_142(0, 0);
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
	if (!func_141())
	{
		Global_20266.f_1 = 3;
	}
}

int func_141()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_144(0))
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

bool func_143()
{
	return BitTest(Global_1958711, 5);
}

int func_144(int iParam0)
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

void func_145(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		unk_0x2AED6301F67007D5(unk_0xD80958FC74E988A6());
		unk_0x364DF566EC833DE2(unk_0xD80958FC74E988A6(), func_146());
		uParam0->f_281.f_8 = unk_0xFC8202EFC642E6F2();
	}
	else if ((unk_0xFC8202EFC642E6F2() - uParam0->f_281.f_8) < 5)
	{
		unk_0x364DF566EC833DE2(unk_0xD80958FC74E988A6(), func_146());
	}
}

float func_146()
{
	return 0.13f;
}

void func_147(var uParam0)
{
	func_148(&(uParam0->f_281), 4, func_149());
	func_148(&(uParam0->f_281), 1, unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false));
	func_148(&(uParam0->f_281), 3, unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true));
	func_148(&(uParam0->f_281), 0, func_144(0));
	func_148(&(uParam0->f_281), 2, unk_0xC5286FFC176F28A2(unk_0xD80958FC74E988A6()));
}

void func_148(int* iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = iParam1;
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(iParam0, bVar0);
	}
	else
	{
		unk_0xE80492A9AC099A93(iParam0, bVar0);
	}
}

bool func_149()
{
	return Global_75485;
}

int func_150()
{
	if ((((!func_159() && !func_50()) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 11) && unk_0xB16FCE9DDC7BA182())
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2787907)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_31959;
}

bool func_155()
{
	return Global_2714762.f_698;
}

int func_156(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2725403;
}

bool func_158()
{
	return Global_2714762.f_693;
}

int func_159()
{
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	int iVar0;
	
	if (unk_0x9D40DF90FAD26098("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	unk_0x1CA59E306ECB80A5(32, false, -1);
	func_168(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_112, 25, 0);
	unk_0x3364AA97340CA215(&Local_123, 65, 0);
	unk_0xAA391C728106F7AF(false);
	func_167();
	func_161();
	if (unk_0x10FAB35428CCC9D7() && unk_0x83CD99A1E6061AB5())
	{
		if (!Local_112.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_112.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_112.f_0 = 1;
		}
	}
	return 1;
}

void func_161()
{
	func_162(0, &Local_93, 0, 2);
	func_162(1, &Local_93, 1, 2);
	func_162(2, &Local_93, 2, 2);
	func_162(3, &Local_93, 3, 2);
	func_162(4, &Local_93, 4, 2);
	func_162(5, &Local_93, 5, 2);
	func_162(6, &Local_93, 6, 2);
	func_162(7, &Local_93, 7, 2);
	func_162(8, &Local_93, 8, 2);
	func_162(9, &Local_93, 9, 2);
	func_162(10, &Local_93, 10, 1);
	func_162(11, &Local_93, 11, 1);
	func_162(12, &Local_93, 12, 1);
	func_162(13, &Local_93, 13, 1);
	func_162(14, &Local_93, 14, 1);
	func_162(15, &Local_93, 15, 1);
	func_162(16, &Local_93, 16, 1);
	func_162(17, &Local_93, 17, 1);
	func_162(18, &Local_93, 18, 1);
	func_162(19, &Local_93, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar1;
	
	func_166(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_164(func_165(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_164(func_163(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_163()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_164(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x0BADBFA3B172435F(fParam1);
	fVar2 = unk_0xD0FFB162F40A139C(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_165()
{
	return -0.5f, -0.5f, 0f;
}

void func_166(int iParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_167()
{
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_110(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

