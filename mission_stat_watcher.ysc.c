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
	struct<567> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	
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
	bLocal_62 = bLocal_61;
	bLocal_63 = bLocal_62;
	bLocal_68 = 100f;
	if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	Global_63148 = 0;
	Global_63155 = 0;
	bVar0 = true;
	if (unk_0xC968670BFACE42D9(18))
	{
		func_115();
		Global_75249 = 0;
		Global_63149 = 0;
		Global_63175 = 0;
		unk_0x1090044AD1DA76FA();
	}
	iVar1 = 0;
	unk_0x4EDE34FBADD967A6(0);
	func_113();
	while (!Global_63147)
	{
		unk_0x4EDE34FBADD967A6(200);
		if (Global_63155)
		{
			func_115();
			unk_0x1090044AD1DA76FA();
		}
	}
	Global_63162 = 0;
	Global_63149 = 1;
	while (!Global_63148)
	{
		if (Global_75249 > 0)
		{
			func_107();
			if (Global_63182 == -1)
			{
				Global_63182 = unk_0x9CD27B0045628463();
			}
			else if ((unk_0x9CD27B0045628463() - Global_63182) > 1000)
			{
				func_106();
			}
		}
		if (Global_63155)
		{
			func_115();
			Global_63149 = 0;
			unk_0x1090044AD1DA76FA();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_63149 = 0;
	if (func_105())
	{
		while (func_105())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_63150 == iLocal_70)
		{
			if (Global_63150)
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_60 = 0;
				Global_63165 = 0;
			}
			iLocal_70 = Global_63150;
		}
		while (Global_63154)
		{
			unk_0x4EDE34FBADD967A6(1000);
		}
		if (Global_63148 && !Global_63155)
		{
			if (Global_63147 || iLocal_72)
			{
				Global_63152 = 0;
				if (bLocal_71)
				{
				}
				if (Global_63148)
				{
				}
				if (!bLocal_71 == Global_63148)
				{
					func_104(&Local_45);
					Local_45.f_566 = 1;
					func_103();
					func_102();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_75249)
					{
						if (Global_75250[iVar3 /*9*/] > 0)
						{
							if (Global_63379[Global_75250[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_63379[Global_75250[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_63379[Global_75250[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_75250[iVar3 /*9*/].f_1 == 0)
										{
											Global_75250[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_78579 && !Global_63144) || Global_63156)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x5A859503B0C08678() || unk_0x5C544BC6C57AC575())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_100480.f_8)
						{
							bVar5 = true;
						}
						if (Global_63174)
						{
							bVar5 = true;
						}
					}
					if (func_101(0))
					{
						bVar5 = true;
						Global_63174 = 1;
					}
					iVar6 = Global_75400;
					if (Global_63157)
					{
						func_98(Global_63158);
						bVar0 = 2;
						func_97(&Local_45, "HISHPA", &Global_63169, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_96(&Local_45, 3, "ACTATAKE_AG", "", Global_113386.f_1.f_126[Global_63158 /*23*/], 0, 0, 0);
						}
						else
						{
							func_96(&Local_45, 3, "POTATAKE", "", Global_113386.f_1.f_126[Global_63158 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_96671[Global_63158 /*38*/].f_37)
						{
							if (Global_96671[Global_63158 /*38*/].f_31[iVar7] > 0)
							{
								func_96(&Local_45, 3, func_95(Global_96671[Global_63158 /*38*/].f_25[iVar7]), "", (-1 * Global_96671[Global_63158 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_96(&Local_45, 3, "ACTATAKE_M", "", Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_96(&Local_45, 3, "ACTATAKE_F", "", Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_96(&Local_45, 3, "ACTATAKE_T", "", Global_113386.f_1.f_126[Global_63158 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_96661.f_7 > 0)
						{
							func_96(&Local_45, 3, "ACTATAKE_L", "", Global_96661.f_7, 0, 0, 0);
						}
						iVar8 = func_93(func_94(Global_63158));
						iVar9 = 0;
						bVar10 = false;
						iVar7 = 0;
						while (iVar7 < Global_96470[iVar8 /*19*/])
						{
							if (!func_92(Global_113386.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_113386.f_1.f_126[Global_63158 /*23*/].f_17[iVar7]);
							}
							else
							{
								bVar10 = (bVar10 + Global_113386.f_1.f_126[Global_63158 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_96(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_96(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (bVar10 > 0)
						{
							if (!func_101(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0xB3271D7AB655B441(joaat("hcs_penalty_jewel_funeral"), bVar10, true);
										break;
									
									case 93:
										unk_0xB3271D7AB655B441(joaat("hcs_penalty_paleto_funeral"), bVar10, true);
										break;
									
									case 69:
									case 70:
										unk_0xB3271D7AB655B441(joaat("hcs_penalty_bureau_funeral"), bVar10, true);
										break;
									
									case 84:
									case 85:
										unk_0xB3271D7AB655B441(joaat("hcs_penalty_bigs_funeral"), bVar10, true);
										break;
									}
							}
							func_96(&Local_45, 3, "HSTENDPFUN", "", bVar10, 0, 0, 0);
						}
					}
					else
					{
						func_97(&Local_45, "MISHPA", &Global_63169, 0);
					}
					if (Global_75249 > 0)
					{
						func_77(&Local_45);
					}
					if (!Global_63144)
					{
						func_71();
					}
					while (!bVar5)
					{
						if (unk_0x5A859503B0C08678() || unk_0x5C544BC6C57AC575())
						{
							bVar5 = true;
						}
						unk_0x4EDE34FBADD967A6(0);
					}
					if ((bVar5 || Global_63174) && !bVar4)
					{
						if (!Global_63156)
						{
							func_67(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_75399)
						{
							switch (Global_75400)
							{
								case 50:
								case 51:
								case 52:
									unk_0xB9EFD5C25018725A("HoldMissionCompleteWhenPrepared", true);
									func_63(1);
									bVar11 = true;
									break;
								
								default:
									unk_0xB9EFD5C25018725A("HoldMissionCompleteWhenPrepared", true);
									func_63(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0xB9EFD5C25018725A("HoldMissionCompleteWhenPrepared", true);
							func_63(1);
							bVar11 = true;
						}
						iVar1 = func_62();
						unk_0x71A78003C8E71424("MISHSTA", 3);
						while (!unk_0x02245FE4BED318B8(3))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						bLocal_73 = true;
						while (unk_0xD3C2E180A40F031E())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						while (unk_0x424D4687FA1E5652(unk_0xA5EDC40EF369B48D()))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						func_67(&Local_45, 1, 0);
						unk_0xB9EFD5C25018725A("HoldMissionCompleteWhenPrepared", false);
						if (bVar11)
						{
							while (!unk_0x6F259F82D873B8B8())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						unk_0xA8638BE228D4751A();
					}
					if (Global_63147)
					{
						iLocal_72 = 1;
						Global_63147 = 0;
					}
					unk_0xC1B1E9A034A63A62(false);
				}
				if (bLocal_73 && !Global_63155)
				{
					if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
					{
						func_58(0);
					}
					if (Global_75249 > 0 || Global_63144)
					{
						if (Global_63174)
						{
							unk_0x61BB1D9B3A95D802(7);
						}
						if (iVar1 && !Global_63144)
						{
							Global_43992 = 1;
						}
						if (!Global_63156)
						{
							if (func_21(&Local_45, 0, unk_0xBBDA792448DB5A89(bVar0), 0, 0, 0))
							{
								Global_63155 = 1;
							}
							func_20();
						}
						if (Global_63174)
						{
							unk_0x61BB1D9B3A95D802(7);
						}
					}
					func_19(1);
					if (!unk_0x5A859503B0C08678())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_63148;
				if (Global_63145)
				{
				}
				else
				{
					unk_0x424D4687FA1E5652(unk_0xA5EDC40EF369B48D());
					if (unk_0xEEF059FAD016D209(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D())) < 1)
					{
						Global_63156 = 1;
					}
					if (((((func_105() || func_9()) || Global_63155) || Global_78588) || Global_63156) || !bLocal_73)
					{
						Global_63144 = 0;
						Global_63148 = 0;
						iLocal_72 = 0;
						Global_63151 = 0;
						Global_63152 = 0;
						Global_63162 = 0;
						Global_63165 = 0;
						func_19(0);
						func_2();
						Global_63155 = 0;
						bVar2 = true;
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(&Local_45, 0);
	Global_32212 = 0;
	Global_63159 = 0;
	unk_0x1090044AD1DA76FA();
}

void func_1(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x1D132D614DD86811(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x48AF36444B965238())
		{
			unk_0xF6E48914C7A8694E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
		}
		unk_0x1D132D614DD86811(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x5262CC1995D07E09(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!unk_0x424D4687FA1E5652(unk_0xA5EDC40EF369B48D()))
		{
			if (!Global_78588)
			{
				if (unk_0xB16FCE9DDC7BA182() && !func_101(0))
				{
					unk_0xD4E8E24955024033(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_63154)
	{
		return;
	}
	Global_63163 = 0;
	Global_75249 = 0;
	Global_63165 = 0;
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	func_19(0);
	func_8();
	Global_75401 = 0;
	Global_63153 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_63144 = 0;
	Global_63174 = 0;
	Global_63182 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75436[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75445 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75402[iVar0 /*2*/] = 0;
		Global_75402[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75435 = 0;
}

void func_5()
{
	Global_63313 = 0;
}

void func_6()
{
	Global_63173 = 0;
	Global_63177 = func_7(joaat("sp0_shots"));
	Global_63176 = func_7(joaat("sp0_hits"));
	Global_63179 = func_7(joaat("sp1_shots"));
	Global_63178 = func_7(joaat("sp1_hits"));
	Global_63181 = func_7(joaat("sp2_shots"));
	Global_63180 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1575058;
}

void func_10(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_20410.f_150[iVar1]), bVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_113386.f_20410[iVar0 /*16*/]), bParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), bParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92(bParam0, &Global_112029))
	{
		return 1;
	}
	if (func_15(bParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(bParam0, &(Global_113386.f_20410[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_17()
{
	unk_0xEB2D525B57F42B40();
	func_18();
}

void func_18()
{
	Global_23011.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_20()
{
	Global_23011.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xFC8202EFC642E6F2() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0xFC8202EFC642E6F2();
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0x3317DEDB88C95038(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), true))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x90A09F3A45FED688(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0xB16FCE9DDC7BA182() || unk_0x797AC7CB535BA28F())
		{
			unk_0x5262CC1995D07E09(true);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6(), 0))
			{
				unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
			}
		}
	}
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(8);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(19);
	unk_0xFE99B66D079CF6BC(2, 19, true);
	unk_0xFE99B66D079CF6BC(0, 37, true);
	unk_0xFE99B66D079CF6BC(0, 21, true);
	unk_0xFE99B66D079CF6BC(0, 28, true);
	unk_0xFE99B66D079CF6BC(0, 29, true);
	unk_0xFE99B66D079CF6BC(0, 171, true);
	func_55(0);
	if (unk_0xA571D46727E2B718(2))
	{
		if (unk_0x7C814D2FB49F40C0() || (unk_0xB16FCE9DDC7BA182() && !unk_0x5C544BC6C57AC575()))
		{
			unk_0xAAE7CE1D63167423();
		}
	}
	Global_43602 = 1;
	if (!uParam0->f_567)
	{
		switch (func_51(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D())))
		{
			case 1:
				unk_0x2206BF9A37B7F724("SuccessFranklin", 1000, false);
				break;
			
			case 2:
				unk_0x2206BF9A37B7F724("SuccessTrevor", 1000, false);
				break;
			
			default:
				unk_0x2206BF9A37B7F724("SuccessMichael", 1000, false);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + unk_0xF34EE736CF047844((15000f * bParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_50(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_50(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_50((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_50(30f) - func_50(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_576 = (uParam0->f_576 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_26(uParam0, bParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * bParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					unk_0xF6E48914C7A8694E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xC6796A8FFA375E53();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xF6E48914C7A8694E(uParam0->f_1, "TRANSITION_OUT");
			unk_0xC6796A8FFA375E53();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0x6CD79468A1E595C6(2))
			{
				if (unk_0x85F01B8D5B90570E(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_22(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x580417101DDB492F(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0x85F01B8D5B90570E(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * bParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0xF6E48914C7A8694E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xC6796A8FFA375E53();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xF6E48914C7A8694E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xC6796A8FFA375E53();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * bParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					unk_0xF6E48914C7A8694E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xC6796A8FFA375E53();
				}
				uParam0->f_563 = func_25((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_577 = func_25((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_25((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_577 = func_25((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0x580417101DDB492F(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0xF6E48914C7A8694E(uParam0->f_4, "CLEAR_ALL");
	unk_0xC6796A8FFA375E53();
	if (unk_0x48AF36444B965238())
	{
		unk_0xF6E48914C7A8694E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xC58424BA936EB458(true);
		unk_0xC6796A8FFA375E53();
	}
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(false);
	func_24(unk_0x0499D7B09FC9B407(2, 215, true));
	func_23("ES_HELP");
	if (unk_0x48AF36444B965238())
	{
		unk_0xC58424BA936EB458(true);
		unk_0xC3D0841A0CC546A6(215);
	}
	unk_0xC6796A8FFA375E53();
	if (bParam1)
	{
		unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xC3D0841A0CC546A6(true);
		func_24(unk_0x0499D7B09FC9B407(2, 216, true));
		func_23("ES_XPAND");
		if (unk_0x48AF36444B965238())
		{
			unk_0xC58424BA936EB458(true);
			unk_0xC3D0841A0CC546A6(216);
		}
		unk_0xC6796A8FFA375E53();
	}
	unk_0xF6E48914C7A8694E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xC6796A8FFA375E53();
}

void func_23(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_24(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_26(var uParam0, float fParam1, bool bParam2)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	bVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_49() * 0.25f);
	if (unk_0x85F01B8D5B90570E(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xF6E48914C7A8694E(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_48(&(uParam0->f_13));
				}
				else
				{
					func_23(&(uParam0->f_13));
				}
				if (unk_0x10FAB35428CCC9D7())
				{
					unk_0xC3D0841A0CC546A6(150);
				}
				else
				{
					unk_0xC3D0841A0CC546A6(100);
				}
				unk_0xC58424BA936EB458(true);
				if (uParam0->f_560 == 4)
				{
					unk_0xC3D0841A0CC546A6((uParam0->f_56 - 1));
				}
				else
				{
					unk_0xC3D0841A0CC546A6(uParam0->f_56);
				}
				unk_0xC58424BA936EB458(bParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0xC3D0841A0CC546A6(2);
				}
				else
				{
					unk_0xC3D0841A0CC546A6(69);
				}
				unk_0xC6796A8FFA375E53();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0xF6E48914C7A8694E(uParam0->f_1, "TRANSITION_UP");
				unk_0xD69736AAE04DB51A(0.15f);
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
				uParam0->f_3 = 1;
			}
		}
		func_47();
		unk_0x0DF606929C105BE1(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.1388889f + func_50((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_49());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_46(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xF1307EF624A80D87(false) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!unk_0xCA042B6957743895(&(uParam0->f_554)))
		{
			fVar7 = func_45(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_46(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_49()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0xEDE476E5EE29EDB1(2, 215);
	unk_0xEDE476E5EE29EDB1(2, 216);
	unk_0xEDE476E5EE29EDB1(2, 200);
	unk_0xFE99B66D079CF6BC(2, 200, true);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_42((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0x4B0311D3CDC4648F();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0x6806C51AD12B83B8(7);
				unk_0x6806C51AD12B83B8(8);
				unk_0x6806C51AD12B83B8(9);
				unk_0x6806C51AD12B83B8(6);
				unk_0x0DF606929C105BE1(uParam0->f_4, 255, 255, 255, bVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0xFE99B66D079CF6BC(0, 140, true);
				unk_0xFE99B66D079CF6BC(0, 141, true);
				unk_0xFE99B66D079CF6BC(0, 142, true);
				unk_0xFE99B66D079CF6BC(2, 188, true);
				if (unk_0x91AEF906BCA88877(2, 188))
				{
					unk_0x67C540AA08E4A6F5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0x67C540AA08E4A6F5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xFE99B66D079CF6BC(2, 187, true);
				if (unk_0x91AEF906BCA88877(2, 187))
				{
					unk_0x67C540AA08E4A6F5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0x67C540AA08E4A6F5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xFE99B66D079CF6BC(2, 202, true);
				if (unk_0x91AEF906BCA88877(2, 202))
				{
					unk_0x67C540AA08E4A6F5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0x67C540AA08E4A6F5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0x6806C51AD12B83B8(7);
				unk_0x6806C51AD12B83B8(8);
				unk_0x6806C51AD12B83B8(9);
				unk_0x6806C51AD12B83B8(6);
				unk_0xFE99B66D079CF6BC(0, 140, true);
				unk_0xFE99B66D079CF6BC(0, 141, true);
				unk_0xFE99B66D079CF6BC(0, 142, true);
				if (unk_0x580417101DDB492F(2, 215) || unk_0x91AEF906BCA88877(2, 200))
				{
					unk_0x67C540AA08E4A6F5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0x67C540AA08E4A6F5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0x7C9C91AB74A0360F(true, &bVar13, &bVar14, &bVar15, &iVar16);
	unk_0xBE6B23FFA53FB442(bVar13, bVar14, bVar15, bVar0);
	unk_0x63145D9C883A1A70(fVar9, fVar10);
	unk_0x4E096588B13FFECA(0);
	unk_0x07C837F9A01C34C9(1f, 0.4f);
	fVar1 = (fVar1 - func_50(6f));
	fVar1 = (fVar1 + (func_50(30f) - func_50((2f * 2f))));
	fVar11 = (fVar2 - func_50((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_50(25f))), 0f, 1f);
		func_47();
		unk_0x3A618A217E5154F0(0.5f, (fVar1 - (func_50((2f - 0.5f)) - 0.001388889f)), fVar6, func_41(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_50((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_50((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_49())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_50(25f))), 0f, 1f);
			func_38(uParam0, iVar17, (fVar1 + func_50(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_50(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_50((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_49())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_50(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_50(25f))), 0f, 1f);
					func_47();
					unk_0x3A618A217E5154F0(0.5f, (fVar1 + func_50((2f * 0.5f))), fVar6, func_41(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
					fVar1 = (fVar1 + func_50((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_50((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_50((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_49())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_50(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_50(25f))), 0f, 1f);
			func_47();
			unk_0x3A618A217E5154F0(0.5f, (fVar1 + func_50((2f * 0.5f))), fVar6, func_41(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_50((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_49())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_50(25f))), 0f, 1f);
			unk_0xBE6B23FFA53FB442(bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(bVar0))));
			func_30(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x2BDD44CC428A7EAE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_49()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_49()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_49()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_49()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0x63145D9C883A1A70(fVar20, fVar21);
				unk_0x4E096588B13FFECA(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x4E096588B13FFECA(0);
			}
			unk_0x07C837F9A01C34C9(1f, 0.4f);
			if (unk_0xCA042B6957743895(&(uParam0->f_554)))
			{
				func_29(&(uParam0->f_550), fVar20, (fVar1 + func_50((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_28(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_50((2f * 2f))), 0, 0);
			}
			unk_0x63145D9C883A1A70(fVar20, fVar21);
			unk_0x4E096588B13FFECA(2);
			unk_0x07C837F9A01C34C9(1f, 0.4f);
			unk_0xC02F4DBFB51D988B(false);
			func_47();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x63145D9C883A1A70(fVar20, fVar22);
			unk_0xBE6B23FFA53FB442(bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(bVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0x25FBB336DF1804CB("PERCENTAGE");
					unk_0x03B504CF259931BC(uParam0->f_558);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_50((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x25FBB336DF1804CB("FO_TWO_NUM");
					unk_0x03B504CF259931BC(uParam0->f_558);
					unk_0x03B504CF259931BC(uParam0->f_559);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_50((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x25FBB336DF1804CB("MTPHPER_XPNO");
					unk_0x03B504CF259931BC(uParam0->f_558);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_50((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x25FBB336DF1804CB("ESDOLLA");
					unk_0x0E4C749FF9DE9CC4(uParam0->f_558, true);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_50((2f * 2f))), 0);
					break;
			}
			unk_0xDFA2EF8E04127DD5(&cVar23, false);
			if (uParam0->f_561 != 0 && unk_0x0145F696AAAAD2E4(&cVar23))
			{
				bVar25 = 255;
				bVar26 = 255;
				bVar27 = 255;
				bVar28 = bVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0x7C9C91AB74A0360F(107, &bVar25, &bVar26, &bVar27, &bVar28);
						break;
					
					case 3:
						unk_0x7C9C91AB74A0360F(109, &bVar25, &bVar26, &bVar27, &bVar28);
						break;
					
					case 2:
						unk_0x7C9C91AB74A0360F(108, &bVar25, &bVar26, &bVar27, &bVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_50(10f)) + fVar29);
				if (uParam0->f_560 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xE7FFAE5EBF23D890(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, bVar25, bVar26, bVar27, unk_0xF2DB717A73826179((fVar12 * IntToFloat(bVar0))), false, 0);
			}
			fVar1 = (fVar1 + (func_50(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	unk_0xC02F4DBFB51D988B(bParam4);
	unk_0x66E0276CC5F6B9DA(iParam5);
	func_47();
	unk_0x25FBB336DF1804CB(bParam0);
	unk_0x6C188BE134E074AA(bParam1);
	unk_0xCD015E5BB0D96A57(fParam2, fParam3, 0);
}

void func_29(bool bParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, int iParam5)
{
	unk_0xC02F4DBFB51D988B(bParam3);
	unk_0x66E0276CC5F6B9DA(iParam5);
	func_47();
	if (bParam4)
	{
		unk_0x25FBB336DF1804CB("STRING");
		unk_0x6C188BE134E074AA(bParam0);
	}
	else
	{
		unk_0x25FBB336DF1804CB(bParam0);
	}
	unk_0xCD015E5BB0D96A57(fParam1, fParam2, 0);
}

int func_30(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_37(iParam0), 64);
	StringCopy(&cVar1, func_34(iParam0, bParam1), 64);
	if (unk_0xD24D37CC275948CC(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_32(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x35736EE65BD00C11(&cVar0, &cVar1) };
		fVar6 = (func_31(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x30CF4BDA4FCB1905() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_31(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_32(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x888D57E407E63624(iParam1, iParam2);
		return;
	}
	unk_0x873C9F3104101DD3(iParam1, iParam2);
	bVar0 = unk_0xBBDA792448DB5A89(*iParam1);
	bVar1 = unk_0xBBDA792448DB5A89(*iParam2);
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (func_33(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = unk_0xF2DB717A73826179((bVar1 * fVar2));
		*iParam2 = unk_0xF2DB717A73826179(bVar1);
		return;
	}
	*fParam3 = ((bVar0 / bVar1) / fVar2);
	*iParam1 = unk_0xF2DB717A73826179((bVar0 / *fParam3));
	*iParam2 = unk_0xF2DB717A73826179((bVar1 / *fParam3));
}

bool func_33(bool bParam0, bool bParam1)
{
	return (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1)) > 3.5f;
}

var func_34(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_36(unk_0x4F8644AF03D0E0D6()) };
			if (unk_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_35(&uVar1);
			}
		}
		else
		{
			return func_35(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_35(var uParam0)
{
	return uParam0;
}

struct<13> func_36(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

char* func_37(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_36(unk_0x4F8644AF03D0E0D6()) };
			unk_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_35(&uVar0);
		}
		else
		{
			return func_35(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_38(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &uVar3);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bParam5);
	unk_0x63145D9C883A1A70(fParam3, fParam4);
	unk_0x4E096588B13FFECA(1);
	unk_0x07C837F9A01C34C9(1f, func_40(14f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x66E0276CC5F6B9DA(0);
	func_47();
	if (uParam0->f_531[iParam1])
	{
		unk_0x25FBB336DF1804CB("STRING");
		unk_0x6C188BE134E074AA(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x25FBB336DF1804CB(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x03B504CF259931BC(uParam0->f_489[iParam1]);
		}
	}
	unk_0xCD015E5BB0D96A57(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_30(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_34(7, 0), (fParam4 - 0.006f), ((fParam2 + func_50(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_30(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_34(5, 0), (fParam4 - 0.006f), ((fParam2 + func_50(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_30(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_34(6, 0), (fParam4 - 0.006f), ((fParam2 + func_50(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x4E096588B13FFECA(1);
	}
	else
	{
		unk_0x4E096588B13FFECA(2);
	}
	unk_0x07C837F9A01C34C9(1f, func_40(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x63145D9C883A1A70(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x63145D9C883A1A70(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bParam5);
	func_39(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_39(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = true;
	unk_0xC02F4DBFB51D988B(false);
	unk_0x66E0276CC5F6B9DA(0);
	func_47();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	bVar4 = 93;
	bVar5 = 182;
	bVar6 = 229;
	if (iParam5 == 4)
	{
		bVar4 = 194;
		bVar5 = 80;
		bVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x07C837F9A01C34C9(1f, func_40(18f));
			unk_0x66E0276CC5F6B9DA(4);
			if (bParam0 < 0)
			{
				unk_0x54CE8AC98E120CAB("ESMINDOLLA");
				unk_0x0E4C749FF9DE9CC4((-1 * bParam0), true);
				fVar1 = unk_0x85F061DA64ED2F67(false);
			}
			else
			{
				unk_0x54CE8AC98E120CAB("ESDOLLA");
				unk_0x0E4C749FF9DE9CC4(bParam0, true);
				fVar1 = unk_0x85F061DA64ED2F67(false);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xE7FFAE5EBF23D890("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, bVar4, bVar5, bVar6, 255, false, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, bVar4, bVar5, bVar6, 255, false, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, bVar4, bVar5, bVar6, 255, false, 0);
			unk_0x07C837F9A01C34C9(1f, func_40(14f));
			break;
	}
	unk_0x39BBF623FC803EAC(bVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x25FBB336DF1804CB("PERCENTAGE");
			unk_0x03B504CF259931BC(bParam0);
			break;
		
		case 1:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("FO_NUM");
			unk_0x03B504CF259931BC(bParam0);
			break;
		
		case 2:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("FO_TWO_NUM");
			unk_0x03B504CF259931BC(bParam0);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 4:
		case 5:
			unk_0x07C837F9A01C34C9(1f, func_40(18f));
		
		case 3:
			if (bParam0 < 0)
			{
				unk_0x25FBB336DF1804CB("ESMINDOLLA");
				unk_0x0E4C749FF9DE9CC4((-1 * bParam0), true);
			}
			else
			{
				unk_0x25FBB336DF1804CB("ESDOLLA");
				unk_0x0E4C749FF9DE9CC4(bParam0, true);
			}
			break;
		
		case 6:
			unk_0x25FBB336DF1804CB(bParam4);
			break;
		
		case 7:
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x6C188BE134E074AA(bParam4);
			break;
		
		case 8:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x1115F16B8AB9E8BF(bParam0, 14);
			break;
		
		case 9:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x1115F16B8AB9E8BF(bParam0, 6);
			break;
		
		case 10:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x1115F16B8AB9E8BF(bParam0, 2055);
			break;
		
		case 18:
			unk_0x66E0276CC5F6B9DA(5);
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x1115F16B8AB9E8BF(bParam0, 2055);
			break;
		
		case 12:
			unk_0x25FBB336DF1804CB("AHD_DIST");
			unk_0x03B504CF259931BC(bParam0);
			break;
		
		case 13:
			unk_0x25FBB336DF1804CB(bParam4);
			unk_0x03B504CF259931BC(bParam0);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 15:
		case 14:
			unk_0x25FBB336DF1804CB(bParam4);
			unk_0x03B504CF259931BC(bParam0);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 16:
			unk_0x25FBB336DF1804CB(bParam4);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 20:
			unk_0x25FBB336DF1804CB(bParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xCD015E5BB0D96A57((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x07C837F9A01C34C9(1f, func_40(14f));
		}
		else
		{
			unk_0xCD015E5BB0D96A57(fParam2, fParam3, 0);
		}
	}
}

float func_40(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_41(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_42(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_44(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_43(7, bVar0);
		Global_1649593.f_4659[bVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[bVar0] = iParam2;
		Global_1649593.f_4659.f_216[bVar0] = iParam3;
		Global_1649593.f_4659.f_183[bVar0] = iParam4;
		Global_1649593.f_4659.f_194[bVar0] = iParam5;
		Global_1649593.f_4659.f_249[bVar0] = iParam6;
		Global_1649593.f_4659.f_260[bVar0] = iParam7;
		Global_1649593.f_4659.f_205[bVar0] = iParam8;
		Global_1649593.f_4659.f_314[bVar0] = iParam9;
		Global_1649593.f_4659.f_325[bVar0] = iParam10;
		Global_1649593.f_4659.f_357[bVar0] = iParam11;
		Global_1649593.f_4659.f_238[bVar0] = iParam12;
		Global_1649593.f_4659.f_271[bVar0] = iParam13;
		Global_1649593.f_4659.f_368[bVar0] = iParam14;
		Global_1649593.f_4659.f_379[bVar0] = iParam15;
		Global_1649593.f_4659.f_390[bVar0] = iParam16;
		Global_1649593.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_43(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_44(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

float func_45(bool bParam0, bool bParam1)
{
	unk_0x54CE8AC98E120CAB(bParam0);
	unk_0x6C188BE134E074AA(bParam1);
	return (unk_0x85F061DA64ED2F67(true) / 2f);
}

float func_46(bool bParam0)
{
	unk_0x54CE8AC98E120CAB(bParam0);
	return (unk_0x85F061DA64ED2F67(true) / 2f);
}

void func_47()
{
	unk_0x61BB1D9B3A95D802(1);
	if (unk_0x797AC7CB535BA28F() || unk_0xB16FCE9DDC7BA182())
	{
		unk_0x61BB1D9B3A95D802(7);
	}
	unk_0xC6372ECD45D73BCD(false);
}

void func_48(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

float func_49()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x48AF36444B965238())
	{
	}
	return fVar0;
}

float func_50(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_51(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_54(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

void func_55(int iParam0)
{
	if (func_57())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_56(0))
		{
			func_58(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

int func_56(int iParam0)
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

bool func_57()
{
	return BitTest(Global_1958711, 19);
}

void func_58(int iParam0)
{
	if (func_57())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_61())
		{
			func_60(1, 1);
		}
		else
		{
			func_60(0, 0);
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
	if (!func_59())
	{
		Global_20266.f_1 = 3;
	}
}

int func_59()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_56(0))
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

bool func_61()
{
	return BitTest(Global_1958711, 5);
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] > 0)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_63(bool bParam0)
{
	char* sVar0;
	
	unk_0xC6ED9D5092438D91(0);
	switch (func_64())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xB138AAB8A70D3C69(sVar0);
}

int func_64()
{
	func_65();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_65()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_52(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_51(unk_0xD80958FC74E988A6());
			if (func_54(iVar0) && (!func_66(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_54(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_66(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_67(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_70(uParam0);
	func_69(uParam0);
	if (unk_0x0C515FAB3FF9EA92(&(uParam0->f_550), "SPR_RESULT") || (unk_0x0C515FAB3FF9EA92(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0xDFA2EF8E04127DD5("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xDFA2EF8E04127DD5("CommonMenu", false);
		unk_0xDFA2EF8E04127DD5("MPLeaderboard", false);
		unk_0xDFA2EF8E04127DD5("MPHud", false);
		uParam0->f_1 = unk_0x11FE353CF9733E6F("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xC514489CFB8AF806("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x85F01B8D5B90570E(uParam0->f_1) || !unk_0x0145F696AAAAD2E4("CommonMenu")) || !unk_0x0145F696AAAAD2E4("MPLeaderboard")) || !unk_0x0145F696AAAAD2E4("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0x85F01B8D5B90570E(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x85F01B8D5B90570E(uParam0->f_1) || !unk_0x0145F696AAAAD2E4("CommonMenu")) || !unk_0x0145F696AAAAD2E4("MPLeaderboard")) || !unk_0x0145F696AAAAD2E4("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0x85F01B8D5B90570E(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_68(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_78580 = 1;
	return 1;
}

void func_68(var uParam0)
{
	unk_0xF6E48914C7A8694E(uParam0->f_4, "CLEAR_ALL");
	unk_0xC6796A8FFA375E53();
	if (unk_0x48AF36444B965238())
	{
		unk_0xF6E48914C7A8694E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xC58424BA936EB458(true);
		unk_0xC6796A8FFA375E53();
	}
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(2);
	func_24(unk_0x0499D7B09FC9B407(2, 188, true));
	func_23("ES_HELP_TU");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(true);
	func_24(unk_0x0499D7B09FC9B407(2, 187, true));
	func_23("ES_HELP_TD");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(false);
	func_24(unk_0x0499D7B09FC9B407(2, 202, true));
	func_23("ES_HELP_AB");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xC6796A8FFA375E53();
}

void func_69(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x4E096588B13FFECA(0);
	unk_0x07C837F9A01C34C9(1f, func_40(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x54CE8AC98E120CAB("STRING");
			unk_0x6C188BE134E074AA(&(uParam0->f_13));
			fVar0 = unk_0x85F061DA64ED2F67(true);
		}
		else
		{
			unk_0x54CE8AC98E120CAB(&(uParam0->f_13));
			fVar0 = unk_0x85F061DA64ED2F67(true);
		}
	}
	else
	{
		unk_0x54CE8AC98E120CAB("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x03B504CF259931BC(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xC63CD5D2920ACBE7(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x6C188BE134E074AA(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x85F061DA64ED2F67(true);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_70(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (Global_75249 == 0)
	{
		return;
	}
	if (Global_75400 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		iVar3 = Global_75250[iVar0 /*9*/];
		bVar4 = !Global_63379[iVar3 /*13*/].f_7;
		bVar5 = Global_63379[iVar3 /*13*/].f_8;
		uVar6 = Global_63379[iVar3 /*13*/].f_12;
		fVar7 = Global_63379[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_76(iVar3, Global_75250[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_75250[iVar0 /*9*/].f_1;
			bVar10 = unk_0xF34EE736CF047844((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + bVar10);
			iVar1 = (iVar1 + bVar10);
		}
		iVar0++;
	}
	Global_75395 = iVar1;
	Global_75396 = iVar2;
	if (unk_0x1077788E268557C2())
	{
		if (Global_75399 == 0)
		{
			iVar11 = Global_75400;
			if (iVar11 == 90)
			{
				if (Global_113386.f_9085.f_99.f_205[func_75(0)] == 2)
				{
					Var12.f_2.f_1 = 4;
					Var12.f_0 = 716;
					unk_0xAE2206545888AE49(&Var12);
					unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
					unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
					unk_0x0BCA1D2C47B0D269(126, true, 0f);
					unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
					unk_0x0BCA1D2C47B0D269(135, func_74(810), 0f);
					unk_0x0BCA1D2C47B0D269(136, func_74(811), 0f);
					unk_0x0BCA1D2C47B0D269(132, func_74(812), 0f);
					unk_0x0BCA1D2C47B0D269(2, func_74(813), 0f);
					unk_0x0BCA1D2C47B0D269(141, func_74(814), 0f);
					unk_0x0BCA1D2C47B0D269(127, func_74(815), 0f);
					unk_0x0BCA1D2C47B0D269(137, func_74(816), 0f);
					unk_0x0BCA1D2C47B0D269(7, func_74(817), 0f);
					unk_0x0BCA1D2C47B0D269(133, func_74(818), 0f);
					unk_0x0BCA1D2C47B0D269(90, func_74(819), 0f);
					Var12.f_0 = 717;
					unk_0xAE2206545888AE49(&Var12);
					unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
					unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
					unk_0x0BCA1D2C47B0D269(126, true, 0f);
					unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
					unk_0x0BCA1D2C47B0D269(135, func_74(810), 0f);
					unk_0x0BCA1D2C47B0D269(136, func_74(811), 0f);
					unk_0x0BCA1D2C47B0D269(132, func_74(812), 0f);
					unk_0x0BCA1D2C47B0D269(2, func_74(813), 0f);
					unk_0x0BCA1D2C47B0D269(141, func_74(814), 0f);
					unk_0x0BCA1D2C47B0D269(127, func_74(815), 0f);
					unk_0x0BCA1D2C47B0D269(137, func_74(816), 0f);
					unk_0x0BCA1D2C47B0D269(7, func_74(817), 0f);
					unk_0x0BCA1D2C47B0D269(133, func_74(818), 0f);
					unk_0x0BCA1D2C47B0D269(90, func_74(819), 0f);
				}
				else
				{
					func_73(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				Var13.f_2.f_1 = 4;
				Var13.f_0 = 673;
				unk_0xAE2206545888AE49(&Var13);
				unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
				unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
				unk_0x0BCA1D2C47B0D269(126, true, 0f);
				unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
				unk_0x0BCA1D2C47B0D269(142, func_74(413), 0f);
				unk_0x0BCA1D2C47B0D269(1, func_74(414), 0f);
				unk_0x0BCA1D2C47B0D269(87, func_74(415), 0f);
				unk_0x0BCA1D2C47B0D269(138, func_74(416), 0f);
				unk_0x0BCA1D2C47B0D269(133, func_74(417), 0f);
				unk_0x0BCA1D2C47B0D269(7, func_74(418), 0f);
				unk_0x0BCA1D2C47B0D269(90, func_74(419), 0f);
				unk_0x0BCA1D2C47B0D269(92, func_74(420), 0f);
				unk_0x0BCA1D2C47B0D269(5, func_74(421), 0f);
				unk_0x0BCA1D2C47B0D269(127, func_74(422), 0f);
				unk_0x0BCA1D2C47B0D269(139, func_74(423), 0f);
				unk_0x0BCA1D2C47B0D269(134, func_74(424), 0f);
				unk_0x0BCA1D2C47B0D269(141, func_74(425), 0f);
				unk_0x0BCA1D2C47B0D269(137, func_74(426), 0f);
				unk_0x0BCA1D2C47B0D269(132, func_74(427), 0f);
				unk_0x0BCA1D2C47B0D269(2, func_74(428), 0f);
				unk_0x0BCA1D2C47B0D269(140, false, 0f);
				Var13.f_0 = 672;
				unk_0xAE2206545888AE49(&Var13);
				unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
				unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
				unk_0x0BCA1D2C47B0D269(126, true, 0f);
				unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
				unk_0x0BCA1D2C47B0D269(142, func_74(413), 0f);
				unk_0x0BCA1D2C47B0D269(1, func_74(414), 0f);
				unk_0x0BCA1D2C47B0D269(87, func_74(415), 0f);
				unk_0x0BCA1D2C47B0D269(138, func_74(416), 0f);
				unk_0x0BCA1D2C47B0D269(133, func_74(417), 0f);
				unk_0x0BCA1D2C47B0D269(7, func_74(418), 0f);
				unk_0x0BCA1D2C47B0D269(90, func_74(419), 0f);
				unk_0x0BCA1D2C47B0D269(92, func_74(420), 0f);
				unk_0x0BCA1D2C47B0D269(5, func_74(421), 0f);
				unk_0x0BCA1D2C47B0D269(127, func_74(422), 0f);
				unk_0x0BCA1D2C47B0D269(139, func_74(423), 0f);
				unk_0x0BCA1D2C47B0D269(134, func_74(424), 0f);
				unk_0x0BCA1D2C47B0D269(141, func_74(425), 0f);
				unk_0x0BCA1D2C47B0D269(135, func_74(426), 0f);
				unk_0x0BCA1D2C47B0D269(132, func_74(427), 0f);
				unk_0x0BCA1D2C47B0D269(2, func_74(428), 0f);
				unk_0x0BCA1D2C47B0D269(140, false, 0f);
			}
			else
			{
				func_73(iVar11);
			}
			Global_113386.f_9085.f_330[iVar11 /*6*/].f_4 = Global_75395;
		}
		else
		{
			func_72(Global_75400);
		}
	}
}

void func_72(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_73(int iParam0)
{
	struct<3> Var0;
	struct<13> Var1;
	var uVar2;
	
	Var0.f_2.f_1 = 4;
	if (!unk_0x1077788E268557C2())
	{
		return;
	}
	if (unk_0x579CCED0265D4896())
	{
		Var1 = { func_36(unk_0x4F8644AF03D0E0D6()) };
		if (unk_0xB124B57F571D8F18(&Var1))
		{
			if (unk_0xEEE6EACBE8874FBA(&uVar2, 35, &Var1))
			{
				Var0.f_1 = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			Var0.f_0 = 577;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(0), 0f);
			unk_0x0BCA1D2C47B0D269(148, func_74(1), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(2), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(3), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(4), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(5), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(6), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(7), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(8), 0f);
			Var0.f_0 = 913;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(0), 0f);
			unk_0x0BCA1D2C47B0D269(148, func_74(1), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(2), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(3), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(4), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(5), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(6), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(7), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(8), 0f);
			return;
		
		case 1:
			Var0.f_0 = 576;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(9), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(10), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(11), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(12), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(13), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(14), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(15), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(16), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(17), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(18), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(19), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(20), 0f);
			Var0.f_0 = 575;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(9), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(10), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(11), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(12), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(13), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(14), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(15), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(16), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(17), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(18), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(19), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(20), 0f);
			return;
		
		case 2:
			Var0.f_0 = 579;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(21), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(22), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(23), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(24), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(25), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(26), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(27), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(28), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(29), 0f);
			Var0.f_0 = 578;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(21), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(22), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(23), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(24), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(25), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(26), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(27), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(28), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(29), 0f);
			return;
		
		case 3:
			Var0.f_0 = 797;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(30), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(31), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(32), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(33), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(34), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(35), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(36), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(37), 0f);
			Var0.f_0 = 796;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(30), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(31), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(32), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(33), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(34), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(35), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(36), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(37), 0f);
			return;
		
		case 4:
			Var0.f_0 = 799;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(43), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(44), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(45), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(46), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(47), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(48), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(49), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(50), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(51), 0f);
			Var0.f_0 = 798;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(43), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(44), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(45), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(46), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(47), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(48), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(49), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(50), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(51), 0f);
			return;
		
		case 5:
			Var0.f_0 = 801;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(57), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(58), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(59), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(60), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(61), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(62), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(63), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(64), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(65), 0f);
			Var0.f_0 = 800;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(57), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(58), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(59), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(60), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(61), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(62), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(63), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(64), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(65), 0f);
			return;
		
		case 6:
			Var0.f_0 = 803;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(71), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(72), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(73), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(74), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(75), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(76), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(77), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(78), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(79), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(80), 0f);
			Var0.f_0 = 802;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(71), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(72), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(73), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(74), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(75), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(76), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(77), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(78), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(79), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(80), 0f);
			return;
		
		case 7:
			Var0.f_0 = 805;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(86), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(87), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(88), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(89), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(90), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(91), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(92), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(93), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(94), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(95), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(96), 0f);
			Var0.f_0 = 804;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(86), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(87), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(88), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(89), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(90), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(91), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(92), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(93), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(94), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(95), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(96), 0f);
			return;
		
		case 9:
			Var0.f_0 = 639;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(102), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(103), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(104), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(105), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(106), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(107), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(108), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(109), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(110), 0f);
			Var0.f_0 = 638;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(102), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(103), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(104), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(105), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(106), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(107), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(108), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(109), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(110), 0f);
			return;
		
		case 8:
			Var0.f_0 = 641;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(111), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(112), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(113), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(114), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(115), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(116), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(117), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(118), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(119), 0f);
			Var0.f_0 = 640;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(111), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(112), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(113), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(114), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(115), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(116), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(117), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(118), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(119), 0f);
			return;
		
		case 10:
			Var0.f_0 = 646;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(120), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(121), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(122), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(123), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(124), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(125), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(126), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(127), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(128), 0f);
			Var0.f_0 = 645;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(120), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(121), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(122), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(123), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(124), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(125), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(126), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(127), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(128), 0f);
			return;
		
		case 11:
			Var0.f_0 = 671;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(129), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(130), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(131), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(132), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(133), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(134), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(135), 0f);
			Var0.f_0 = 670;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(129), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(130), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(131), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(132), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(133), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(134), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(135), 0f);
			return;
		
		case 12:
			Var0.f_0 = 603;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(136), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(137), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(138), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(139), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(140), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(141), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(142), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(143), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(144), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(145), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(146), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(147), 0f);
			Var0.f_0 = 602;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(136), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(137), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(138), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(139), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(140), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(141), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(142), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(143), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(144), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(145), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(146), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(147), 0f);
			return;
		
		case 13:
			Var0.f_0 = 605;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(148), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(149), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(150), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(151), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(152), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(153), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(154), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(155), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(156), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(157), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(158), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(159), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(160), 0f);
			Var0.f_0 = 604;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(148), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(149), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(150), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(151), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(152), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(153), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(154), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(155), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(156), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(157), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(158), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(159), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(160), 0f);
			return;
		
		case 14:
			Var0.f_0 = 648;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(161), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(162), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(163), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(164), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(165), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(166), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(167), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(168), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(169), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(170), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(171), 0f);
			Var0.f_0 = 647;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(161), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(162), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(163), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(164), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(165), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(166), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(167), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(168), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(169), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(170), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(171), 0f);
			return;
		
		case 15:
			Var0.f_0 = 650;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(172), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(173), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(174), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(175), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(176), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(177), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(178), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(179), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(180), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(181), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(182), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(183), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(184), 0f);
			Var0.f_0 = 649;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(172), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(173), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(174), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(175), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(176), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(177), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(178), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(179), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(180), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(181), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(182), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(183), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(184), 0f);
			return;
		
		case 16:
			Var0.f_0 = 656;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(185), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(186), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(187), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(188), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(189), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(190), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(191), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(192), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(193), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(194), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(195), 0f);
			Var0.f_0 = 655;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(185), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(186), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(187), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(188), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(189), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(190), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(191), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(192), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(193), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(194), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(195), 0f);
			return;
		
		case 17:
			Var0.f_0 = 583;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(196), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(197), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(198), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(199), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(200), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(201), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(202), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(203), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(204), 0f);
			Var0.f_0 = 582;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(196), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(197), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(198), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(199), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(200), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(201), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(202), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(203), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(204), 0f);
			return;
		
		case 18:
			Var0.f_0 = 585;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(205), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(206), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(207), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(208), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(209), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(210), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(211), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(212), 0f);
			unk_0x0BCA1D2C47B0D269(140, func_74(213), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(214), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(215), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(216), 0f);
			Var0.f_0 = 584;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(205), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(206), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(207), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(208), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(209), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(210), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(211), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(212), 0f);
			unk_0x0BCA1D2C47B0D269(140, func_74(213), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(214), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(215), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(216), 0f);
			return;
		
		case 19:
			Var0.f_0 = 587;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(217), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(218), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(219), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(220), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(221), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(222), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(223), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(224), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(225), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(226), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(227), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(228), 0f);
			Var0.f_0 = 586;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(217), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(218), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(219), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(220), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(221), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(222), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(223), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(224), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(225), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(226), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(227), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(228), 0f);
			return;
		
		case 20:
			Var0.f_0 = 609;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(229), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(230), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(231), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(232), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(233), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(234), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(235), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(236), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(237), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(238), 0f);
			Var0.f_0 = 608;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(229), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(230), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(231), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(232), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(233), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(234), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(235), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(236), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(237), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(238), 0f);
			return;
		
		case 21:
			Var0.f_0 = 621;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(239), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(240), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(241), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(242), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(243), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(244), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(245), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(246), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(247), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(248), 0f);
			Var0.f_0 = 620;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(239), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(240), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(241), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(242), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(243), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(244), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(245), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(246), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(247), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(248), 0f);
			return;
		
		case 22:
			Var0.f_0 = 675;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(249), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(250), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(251), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(252), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(253), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(254), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(255), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(256), 0f);
			Var0.f_0 = 674;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(249), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(250), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(251), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(252), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(253), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(254), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(255), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(256), 0f);
			return;
		
		case 26:
			Var0.f_0 = 712;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(257), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(258), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(259), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(260), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(261), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(262), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(263), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(264), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(265), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(266), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(267), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(268), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(269), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(270), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(271), 0f);
			unk_0x0BCA1D2C47B0D269(103, func_74(272), 0f);
			Var0.f_0 = 711;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(257), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(258), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(259), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(260), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(261), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(262), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(263), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(264), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(265), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(266), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(267), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(268), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(269), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(270), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(271), 0f);
			unk_0x0BCA1D2C47B0D269(103, func_74(272), 0f);
			return;
		
		case 29:
			Var0.f_0 = 611;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(273), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(274), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(275), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(276), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(277), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(278), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(279), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(280), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(281), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(282), 0f);
			Var0.f_0 = 610;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(273), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(274), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(275), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(276), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(277), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(278), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(279), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(280), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(281), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			Var0.f_0 = 615;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(283), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(284), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(285), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(286), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(287), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(288), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(289), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(290), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(291), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(292), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(293), 0f);
			Var0.f_0 = 614;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(283), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(284), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(285), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(286), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(287), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(288), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(289), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(290), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(291), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(292), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(293), 0f);
			return;
		
		case 31:
			Var0.f_0 = 623;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(294), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(295), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(296), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(297), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(298), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(299), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(300), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(301), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(302), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(303), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(304), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(305), 0f);
			Var0.f_0 = 622;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(294), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(295), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(296), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(297), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(298), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(299), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(300), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(301), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(302), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(303), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(304), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(305), 0f);
			return;
		
		case 38:
			Var0.f_0 = 627;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(306), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(307), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(308), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(309), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(310), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(311), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(312), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(313), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(314), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(315), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(316), 0f);
			Var0.f_0 = 626;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(306), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(307), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(308), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(309), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(310), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(311), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(312), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(313), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(314), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(315), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(316), 0f);
			return;
		
		case 33:
			Var0.f_0 = 741;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(317), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(318), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(319), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(320), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(321), 0f);
			Var0.f_0 = 740;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(317), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(318), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(319), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(320), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(321), 0f);
			return;
		
		case 34:
			Var0.f_0 = 745;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(322), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(323), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(324), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(325), 0f);
			Var0.f_0 = 742;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(322), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(323), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(324), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(325), 0f);
			return;
		
		case 39:
			Var0.f_0 = 658;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(326), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(327), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(328), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(329), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(330), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(331), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(332), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(333), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(334), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(335), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(336), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(337), 0f);
			Var0.f_0 = 657;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(326), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(327), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(328), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(329), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(330), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(331), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(332), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(333), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(334), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(335), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(336), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(337), 0f);
			return;
		
		case 40:
			Var0.f_0 = 581;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(338), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(339), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(340), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(341), 0f);
			unk_0x0BCA1D2C47B0D269(140, func_74(342), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(343), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(344), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(345), 0f);
			Var0.f_0 = 580;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(338), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(339), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(340), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(341), 0f);
			unk_0x0BCA1D2C47B0D269(140, func_74(342), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(343), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(344), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(345), 0f);
			return;
		
		case 41:
			Var0.f_0 = 619;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(346), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(347), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(348), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(349), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(350), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(351), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(352), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(353), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(354), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(355), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(356), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(357), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(358), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(359), 0f);
			Var0.f_0 = 618;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(346), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(347), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(348), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(349), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(350), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(351), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(352), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(353), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(354), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(355), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(356), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(357), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(358), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(359), 0f);
			return;
		
		case 42:
			Var0.f_0 = 704;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(360), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(361), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(362), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(363), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(364), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(365), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(366), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(367), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(368), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(369), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(370), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(371), 0f);
			Var0.f_0 = 703;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(360), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(361), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(362), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(363), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(364), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(365), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(366), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(367), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(368), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(369), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(370), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(371), 0f);
			return;
		
		case 43:
			Var0.f_0 = 593;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(372), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(373), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(374), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(375), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(376), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(377), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(378), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(379), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(380), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(381), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(382), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(383), 0f);
			Var0.f_0 = 592;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(372), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(373), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(374), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(375), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(376), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(377), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(378), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(379), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(380), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(381), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(382), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(383), 0f);
			return;
		
		case 44:
			Var0.f_0 = 589;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(384), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(385), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(386), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(387), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(388), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(389), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(390), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(391), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(392), 0f);
			Var0.f_0 = 588;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(384), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(385), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(386), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(387), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(388), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(389), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(390), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(391), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(392), 0f);
			return;
		
		case 45:
			Var0.f_0 = 635;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(393), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(394), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(395), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(396), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(397), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(398), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(399), 0f);
			Var0.f_0 = 634;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(393), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(394), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(395), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(396), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(397), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(398), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(399), 0f);
			return;
		
		case 46:
			Var0.f_0 = 669;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(400), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(401), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(402), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(403), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(404), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(405), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(406), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(407), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(408), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(409), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(410), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(411), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(412), 0f);
			Var0.f_0 = 668;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(400), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(401), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(402), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(403), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(404), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(405), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(406), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(407), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(408), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(409), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(410), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(411), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(412), 0f);
			return;
		
		case 47:
			Var0.f_0 = 673;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(413), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(414), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(415), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(416), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(417), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(418), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(419), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(420), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(421), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(422), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(423), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(424), 0f);
			unk_0x0BCA1D2C47B0D269(141, func_74(425), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(426), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(427), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(428), 0f);
			Var0.f_0 = 672;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(413), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(414), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(415), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(416), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(417), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(418), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(419), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(420), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(421), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(422), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(423), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(424), 0f);
			unk_0x0BCA1D2C47B0D269(141, func_74(425), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(426), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(427), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(428), 0f);
			return;
		
		case 48:
			Var0.f_0 = 694;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(429), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(430), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(431), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(432), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(433), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(434), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(435), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(436), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(437), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(438), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(439), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(440), 0f);
			Var0.f_0 = 693;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(429), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(430), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(431), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(432), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(433), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(434), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(435), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(436), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(437), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(438), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(439), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(440), 0f);
			return;
		
		case 49:
			Var0.f_0 = 702;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(441), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(442), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(443), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(444), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(445), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(446), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(447), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(448), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(449), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(450), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(451), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(452), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(453), 0f);
			Var0.f_0 = 701;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(441), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(442), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(443), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(444), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(445), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(446), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(447), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(448), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(449), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(450), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(451), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(452), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(453), 0f);
			return;
		
		case 53:
			Var0.f_0 = 714;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(454), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(455), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(456), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(457), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(458), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(459), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(460), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(461), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(462), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(463), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(464), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(465), 0f);
			Var0.f_0 = 713;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(454), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(455), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(456), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(457), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(458), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(459), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(460), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(461), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(462), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(463), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(464), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(465), 0f);
			return;
		
		case 60:
			Var0.f_0 = 809;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(466), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(467), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(468), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(469), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(470), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(471), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(472), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(473), 0f);
			Var0.f_0 = 808;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(466), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(467), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(468), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(469), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(470), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(471), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(472), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(473), 0f);
			return;
		
		case 61:
			Var0.f_0 = 637;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(474), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(475), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(476), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(477), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(478), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(479), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(480), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(481), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(482), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(483), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(484), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(485), 0f);
			Var0.f_0 = 636;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(474), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(475), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(476), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(477), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(478), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(479), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(480), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(481), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(482), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(483), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(484), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(485), 0f);
			return;
		
		case 62:
			Var0.f_0 = 599;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(486), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(487), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(488), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(489), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(490), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(491), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(492), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(493), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(494), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(495), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(496), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(497), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(498), 0f);
			Var0.f_0 = 598;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(486), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(487), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(488), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(489), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(490), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(491), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(492), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(493), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(494), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(495), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(496), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(497), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(498), 0f);
			return;
		
		case 63:
			Var0.f_0 = 601;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(499), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(500), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(501), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(502), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(503), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(504), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(505), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(506), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(507), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(508), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(509), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(510), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(511), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(512), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(513), 0f);
			unk_0x0BCA1D2C47B0D269(9, func_74(514), 0f);
			Var0.f_0 = 600;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(499), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(500), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(501), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(502), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(503), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(504), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(505), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(506), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(507), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(508), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(509), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(510), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(511), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(512), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(513), 0f);
			unk_0x0BCA1D2C47B0D269(9, func_74(514), 0f);
			return;
		
		case 64:
			Var0.f_0 = 607;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(515), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(516), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(517), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(518), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(519), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(520), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(521), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(522), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(523), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(524), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(525), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(526), 0f);
			Var0.f_0 = 606;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(515), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(516), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(517), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(518), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(519), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(520), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(521), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(522), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(523), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(524), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(525), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(526), 0f);
			return;
		
		case 66:
			Var0.f_0 = 680;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(527), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(528), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(529), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(530), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(531), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(532), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(533), 0f);
			Var0.f_0 = 676;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(527), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(528), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(529), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(530), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(531), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(532), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(533), 0f);
			return;
		
		case 67:
			Var0.f_0 = 679;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(534), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(535), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(536), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(537), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(538), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(539), 0f);
			Var0.f_0 = 678;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(534), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(535), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(536), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(537), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(538), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(539), 0f);
			return;
		
		case 68:
			Var0.f_0 = 725;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(540), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(541), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(542), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(543), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(544), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(545), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(546), 0f);
			Var0.f_0 = 724;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(540), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(541), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(542), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(543), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(544), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(545), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			Var0.f_0 = 686;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(547), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(548), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(549), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(550), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(551), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(552), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(553), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(554), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(555), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(556), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(557), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(558), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(559), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(560), 0f);
			Var0.f_0 = 681;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(547), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(548), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(549), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(550), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(551), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(552), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(553), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(554), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(555), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(556), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(557), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(558), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(559), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(560), 0f);
			return;
		
		case 70:
			Var0.f_0 = 721;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(561), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(562), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(563), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(564), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(565), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(566), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(567), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(568), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(569), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(570), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(571), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(572), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(573), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(574), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(575), 0f);
			Var0.f_0 = 720;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(561), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(562), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(563), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(564), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(565), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(566), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(567), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(568), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(569), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(570), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(571), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(572), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(573), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(574), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(575), 0f);
			return;
		
		case 71:
			Var0.f_0 = 617;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(576), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(577), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(578), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(579), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(580), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(581), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(582), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(583), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(584), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(585), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(586), 0f);
			Var0.f_0 = 616;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(576), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(577), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(578), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(579), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(580), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(581), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(582), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(583), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(584), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(585), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(586), 0f);
			return;
		
		case 72:
			Var0.f_0 = 727;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(587), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(588), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(589), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(590), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(591), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(592), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(593), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(594), 0f);
			Var0.f_0 = 726;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(587), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(588), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(589), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(590), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(591), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(592), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(593), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(594), 0f);
			return;
		
		case 73:
			Var0.f_0 = 729;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(595), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(596), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(597), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(598), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(599), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(600), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(601), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(602), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(603), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(604), 0f);
			Var0.f_0 = 728;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(595), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(596), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(597), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(598), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(599), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(600), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(601), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(602), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(603), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(604), 0f);
			return;
		
		case 74:
			Var0.f_0 = 625;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(605), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(606), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(607), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(608), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(609), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(610), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(611), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(612), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(613), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(614), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(615), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(616), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(617), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(618), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(619), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(620), 0f);
			Var0.f_0 = 624;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(605), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(606), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(607), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(608), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(609), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(610), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(611), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(612), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(613), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(614), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(615), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(616), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(617), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(618), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(619), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(620), 0f);
			return;
		
		case 75:
			Var0.f_0 = 719;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(621), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(622), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(623), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(624), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(625), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(626), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(627), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(628), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(629), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(630), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(631), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(632), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(633), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(634), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(635), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(636), 0f);
			Var0.f_0 = 718;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(621), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(622), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(623), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(624), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(625), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(626), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(627), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(628), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(629), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(630), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(631), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(632), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(633), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(634), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(635), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(636), 0f);
			return;
		
		case 76:
			Var0.f_0 = 667;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(637), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(638), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(639), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(640), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(641), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(642), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(643), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(644), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(645), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(646), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(647), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(648), 0f);
			Var0.f_0 = 666;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(637), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(638), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(639), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(640), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(641), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(642), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(643), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(644), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(645), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(646), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(647), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(648), 0f);
			return;
		
		case 78:
			Var0.f_0 = 735;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(649), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(650), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(651), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(652), 0f);
			Var0.f_0 = 734;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(649), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(650), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(651), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(652), 0f);
			return;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_0 = 737;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(653), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(654), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(655), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(656), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(657), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(658), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(659), 0f);
			Var0.f_0 = 736;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(653), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(654), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(655), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(656), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(657), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(658), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(659), 0f);
			return;
		
		case 84:
			Var0.f_0 = 706;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(660), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(661), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(662), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(663), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(664), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(665), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(666), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(667), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(668), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(669), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(670), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(671), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(672), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(673), 0f);
			Var0.f_0 = 705;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(660), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(661), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(662), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(663), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(664), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(665), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(666), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(667), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(668), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(669), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(670), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(671), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(672), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(673), 0f);
			return;
		
		case 85:
			Var0.f_0 = 723;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(674), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(675), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(676), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(677), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(678), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(679), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(680), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(681), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(682), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(683), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(684), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(685), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(686), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(687), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(688), 0f);
			Var0.f_0 = 722;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(674), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(675), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(676), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(677), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(678), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(679), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(680), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(681), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(682), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(683), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(684), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(685), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(686), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(687), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(688), 0f);
			return;
		
		case 86:
			Var0.f_0 = 595;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(689), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(690), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(691), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(692), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(693), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(694), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(695), 0f);
			Var0.f_0 = 594;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(689), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(690), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(691), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(692), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(693), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(694), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(695), 0f);
			return;
		
		case 87:
			Var0.f_0 = 731;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(696), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(697), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(698), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(699), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(700), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(701), 0f);
			Var0.f_0 = 730;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(696), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(697), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(698), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(699), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(700), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(701), 0f);
			return;
		
		case 88:
			Var0.f_0 = 733;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(702), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(703), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(704), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(705), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(706), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(707), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(708), 0f);
			Var0.f_0 = 732;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(702), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(703), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(704), 0f);
			unk_0x0BCA1D2C47B0D269(139, func_74(705), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(706), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(707), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(708), 0f);
			return;
		
		case 91:
			Var0.f_0 = 652;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(709), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(710), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(711), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(712), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(713), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(714), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(715), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(716), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(717), 0f);
			Var0.f_0 = 651;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(709), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(710), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(711), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(712), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(713), 0f);
			unk_0x0BCA1D2C47B0D269(142, func_74(714), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(715), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(716), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(717), 0f);
			return;
		
		case 92:
			Var0.f_0 = 739;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(718), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(719), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(720), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(721), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(722), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(723), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(724), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(725), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(726), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(727), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(728), 0f);
			Var0.f_0 = 738;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(718), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(719), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(720), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(721), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(722), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(723), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(724), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(725), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(726), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(727), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(728), 0f);
			return;
		
		case 93:
			Var0.f_0 = 654;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(729), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(730), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(731), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(732), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(733), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(734), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(735), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(736), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(737), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(738), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(739), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(740), 0f);
			Var0.f_0 = 653;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(729), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(730), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(731), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(732), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(733), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(734), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(735), 0f);
			unk_0x0BCA1D2C47B0D269(87, func_74(736), 0f);
			unk_0x0BCA1D2C47B0D269(1, func_74(737), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(738), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(739), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(740), 0f);
			return;
		
		case 90:
			Var0.f_0 = 597;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(810), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(811), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(812), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(813), 0f);
			unk_0x0BCA1D2C47B0D269(141, func_74(814), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(815), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(816), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(817), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(818), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(819), 0f);
			Var0.f_0 = 596;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(810), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(811), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(812), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(813), 0f);
			unk_0x0BCA1D2C47B0D269(141, func_74(814), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(815), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(816), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(817), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(818), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(819), 0f);
			return;
		
		case 36:
			Var0.f_0 = 831;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(820), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(821), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(822), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(823), 0f);
			Var0.f_0 = 832;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(820), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(821), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(822), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(823), 0f);
			return;
		
		case 37:
			Var0.f_0 = 833;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(824), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(825), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(826), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(827), 0f);
			Var0.f_0 = 834;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(824), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(825), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(826), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(827), 0f);
			return;
		
		case 24:
			Var0.f_0 = 848;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(846), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(847), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(848), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(849), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(850), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(851), 0f);
			Var0.f_0 = 847;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(846), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(847), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(848), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(849), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(850), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(851), 0f);
			return;
		
		case 25:
			Var0.f_0 = 846;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(852), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(853), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(854), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(855), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(856), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(857), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(858), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(859), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(860), 0f);
			Var0.f_0 = 845;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(852), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(853), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(854), 0f);
			unk_0x0BCA1D2C47B0D269(5, func_74(855), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(856), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(857), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(858), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(859), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(860), 0f);
			return;
		
		case 59:
			Var0.f_0 = 807;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(861), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(862), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(863), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(864), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(865), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(866), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(867), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(868), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(869), 0f);
			Var0.f_0 = 806;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(861), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(862), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(863), 0f);
			unk_0x0BCA1D2C47B0D269(135, func_74(864), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(865), 0f);
			unk_0x0BCA1D2C47B0D269(136, func_74(866), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(867), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(868), 0f);
			unk_0x0BCA1D2C47B0D269(137, func_74(869), 0f);
			return;
		
		case 65:
			Var0.f_0 = 838;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(870), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(871), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(872), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(873), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(874), 0f);
			Var0.f_0 = 837;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(870), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(871), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(872), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(873), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			Var0.f_0 = 917;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(875), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(876), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(877), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(878), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(879), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(880), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(881), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(882), 0f);
			Var0.f_0 = 916;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(875), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(876), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(877), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(878), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(879), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(880), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(881), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(882), 0f);
			return;
		
		case 81:
			Var0.f_0 = 919;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(883), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(884), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(885), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(886), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(887), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(888), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(889), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(890), 0f);
			Var0.f_0 = 918;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(883), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(884), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(885), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(886), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(887), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(888), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(889), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(890), 0f);
			return;
		
		case 82:
			Var0.f_0 = 921;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(891), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(892), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(893), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(894), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(895), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(896), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(897), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(898), 0f);
			Var0.f_0 = 920;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(891), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(892), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(893), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(894), 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(895), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(896), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(897), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(898), 0f);
			return;
		
		case 83:
			Var0.f_0 = 923;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(899), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(900), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(901), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(902), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(903), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(904), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(905), 0f);
			Var0.f_0 = 922;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(899), 0f);
			unk_0x0BCA1D2C47B0D269(134, func_74(900), 0f);
			unk_0x0BCA1D2C47B0D269(92, func_74(901), 0f);
			unk_0x0BCA1D2C47B0D269(133, func_74(902), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(903), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(904), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(905), 0f);
			return;
		
		case 89:
			Var0.f_0 = 925;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(906), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(907), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(908), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(909), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(910), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(911), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(912), 0f);
			Var0.f_0 = 924;
			unk_0xAE2206545888AE49(&Var0);
			unk_0x0BCA1D2C47B0D269(131, Global_75395, 0f);
			unk_0x0BCA1D2C47B0D269(162, Global_75396, 0f);
			unk_0x0BCA1D2C47B0D269(126, true, 0f);
			unk_0x0BCA1D2C47B0D269(161, Global_75398, 0f);
			unk_0x0BCA1D2C47B0D269(138, func_74(906), 0f);
			unk_0x0BCA1D2C47B0D269(2, func_74(907), 0f);
			unk_0x0BCA1D2C47B0D269(7, func_74(908), 0f);
			unk_0x0BCA1D2C47B0D269(127, func_74(909), 0f);
			unk_0x0BCA1D2C47B0D269(95, func_74(910), 0f);
			unk_0x0BCA1D2C47B0D269(90, func_74(911), 0f);
			unk_0x0BCA1D2C47B0D269(132, func_74(912), 0f);
			return;
		
		default:
	}
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_113386.f_1.f_126[Global_63158 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_113386.f_1.f_126[Global_63158 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			return Global_75250[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_76(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_63379[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_113386.f_24904[4 /*4*/] == func_64())
	{
		Global_63379[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_63379[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_63379[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_63379[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_77(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Global_63144)
	{
		Global_63159 = 0;
		return;
	}
	bLocal_61 = false;
	bLocal_62 = false;
	iVar0 = 0;
	if (func_101(0))
	{
		unk_0x1B1AB132A16FDA55();
		Global_63146 = 1;
		unk_0xE0E500246FF73D66(33, 33);
	}
	bVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		switch (Global_75250[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_75250[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_88(uParam0, iVar0))
		{
		}
		if (Global_75250[iVar0 /*9*/] >= 0)
		{
			if (!Global_63379[Global_75250[iVar0 /*9*/] /*13*/].f_7)
			{
				bLocal_62++;
				if (Global_75250[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_75250[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				bVar1 = Global_75250[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_75398 = bLocal_61;
	bVar3 = func_83(uParam0, bLocal_61, bLocal_62, bVar2);
	if (func_101(0))
	{
		unk_0x69FE6DC87BD2A5E9(Global_75400);
		unk_0x69FE6DC87BD2A5E9(unk_0xF2DB717A73826179(bVar3));
		if (bVar2)
		{
			unk_0x69FE6DC87BD2A5E9(true);
		}
		else
		{
			unk_0x69FE6DC87BD2A5E9(false);
		}
		if (Global_75399)
		{
			unk_0x69FE6DC87BD2A5E9(true);
		}
		else
		{
			unk_0x69FE6DC87BD2A5E9(false);
		}
		unk_0xA23E821FBDF8A5F2();
		Global_63146 = 0;
	}
	Global_63159 = 0;
	if (bVar1 > -1)
	{
		bVar3 = unk_0xBBDA792448DB5A89(bVar1);
	}
	func_78(bVar3, bVar2);
}

void func_78(bool bParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_75399)
	{
		iVar1 = Global_75400;
		fVar0 = func_82(iVar1);
		if (fVar0 < 100f)
		{
			if (bParam0 >= 100f)
			{
				Global_113386.f_10016.f_22++;
			}
		}
		if (bParam0 >= fVar0)
		{
			func_81(iVar1, bParam0, bParam1);
		}
	}
	else if (Global_75400 == -1)
	{
	}
	else
	{
		iVar2 = Global_75400;
		fVar0 = func_80(iVar2);
		if (fVar0 < 100f)
		{
			if (bParam0 >= 100f)
			{
				Global_113386.f_10016.f_22++;
			}
		}
		if (bParam0 >= fVar0)
		{
			func_79(iVar2, bParam0, bParam1);
		}
	}
}

void func_79(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_113386.f_9085.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_113386.f_9085.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31969 = 1;
}

float func_80(int iParam0)
{
	return Global_113386.f_9085.f_330[iParam0 /*6*/].f_5;
}

void func_81(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_113386.f_18574[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_113386.f_18574[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31969 = 1;
}

var func_82(int iParam0)
{
	return Global_113386.f_18574[iParam0 /*6*/].f_5;
}

bool func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_87(bParam1, bParam2, 0);
	iVar1 = func_86(bVar0);
	if (bParam3)
	{
		bVar0 = 50f;
		iVar1 = 1;
	}
	if (bVar0 == 0f)
	{
		func_85(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return bVar0;
	}
	iVar2 = 0;
	switch (func_84(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_84(iVar1))
	{
		case 109:
			func_85(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(bVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_85(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(bVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_85(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(bVar0), 0, 0, iVar2, 0);
			break;
	}
	return bVar0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_85(var uParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = bParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

int func_86(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

bool func_87(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (bParam0 == bParam1)
	{
		return 100f;
	}
	fVar0 = (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1));
	bVar1 = ((50f * fVar0) + 50f);
	bVar1 = unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(bVar1));
	if (bVar1 > 100f)
	{
		bVar1 = 100f;
	}
	return bVar1;
}

int func_88(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	bool bVar9;
	
	fVar0 = 0f;
	bVar1 = 0f;
	if (Global_75250[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_63379[Global_75250[iParam1 /*9*/] /*13*/] };
	if (Var2.f_0 == 15)
	{
		Global_75250[iParam1 /*9*/].f_1 = bLocal_69;
	}
	if (Var2.f_0 == 9)
	{
		Global_75250[iParam1 /*9*/].f_2 = bLocal_68;
	}
	if (Var2.f_0 == 14)
	{
		Global_75250[iParam1 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_75250[iParam1 /*9*/].f_2);
	}
	if (func_76(Global_75250[iParam1 /*9*/], Global_75250[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_75250[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		bVar1 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89(Global_75250[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)));
		if (bVar1 > 100f)
		{
			bVar1 = 100f;
		}
	}
	iVar3 = func_91(Var2.f_4);
	iVar4 = 0;
	switch (Global_75250[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_75250[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_75250[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_90(Global_75250[iParam1 /*9*/].f_1, Global_75250[iParam1 /*9*/]);
			}
		}
		else if ((Global_75250[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_90(Global_75250[iParam1 /*9*/].f_1, Global_75250[iParam1 /*9*/]);
		}
	}
	bVar5 = Global_75250[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		bLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_89(Global_75250[iParam1 /*9*/]);
	if (Global_75250[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_101(0))
		{
			func_90(-1, Global_75250[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_75250[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_75250[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_75250[iParam1 /*9*/].f_3;
		func_96(uParam0, 6, sVar7, sVar8, Global_75250[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2.f_0)
		{
			case 1:
				func_96(uParam0, 8, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_96(uParam0, 9, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_96(uParam0, 0, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_96(uParam0, 9, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_96(uParam0, 11, sVar7, "", unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_75250[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_96(uParam0, 0, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (bVar5 > Var2.f_2)
				{
					bVar5 = Var2.f_2;
				}
				func_96(uParam0, 2, sVar7, "", bVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				bVar9 = Global_75250[iParam1 /*9*/].f_1;
				if (bVar9 > Var2.f_2)
				{
					bVar9 = Var2.f_2;
				}
				func_96(uParam0, 2, sVar7, "", bVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_96(uParam0, 11, sVar7, "", unk_0xF2DB717A73826179(Global_75250[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_96(uParam0, 1, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_96(uParam0, 11, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_96(uParam0, 12, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_96(uParam0, 3, sVar7, "", Global_75250[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_90(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Global_63379[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_63379[iParam1 /*13*/].f_1 = iParam0;
	bVar1 = iParam0 + 1;
	unk_0xB3271D7AB655B441(iVar0, bVar1, true);
	if (func_101(0) && Global_63146)
	{
		unk_0x69FE6DC87BD2A5E9(iVar0);
		unk_0x69FE6DC87BD2A5E9(iParam0);
		unk_0x69FE6DC87BD2A5E9(iParam1);
	}
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_92(var uParam0)
{
	return BitTest(Global_113386.f_1.f_118, uParam0);
}

int func_93(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_205[iParam0];
}

int func_94(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_96(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = bParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_97(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	if (Global_96661.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_113386.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_113386.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_113386.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_93(func_75(iParam0));
	iVar1 = Global_113386.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_100(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_100(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_96671[iParam0 /*38*/].f_37)
	{
		if (Global_96671[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_96671[iParam0 /*38*/].f_31[iVar2]);
			Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = (Global_113386.f_1.f_126[iParam0 /*23*/].f_1 - Global_96671[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		bVar4 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(Global_113386.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_100(iParam0, 3, bVar4);
		Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = (Global_113386.f_1.f_126[iParam0 /*23*/].f_1 - bVar4);
		iVar1 = (iVar1 - bVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_113386.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_113386.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_113386.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_96316[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_113386.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_96316[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_96470[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_113386.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_113386.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_113386.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_113386.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_96661.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_113386.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_113386.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_113386.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_113386.f_1.f_126[0 /*23*/].f_2[1] = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_113386.f_1.f_126[0 /*23*/].f_2[1]);
			Global_96661.f_7 = unk_0x11E019C8F43ACC8A((0.14f * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96661.f_7);
			Global_96661.f_6 = 14f;
			Global_113386.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_113386.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_113386.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_113386.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_113386.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_113386.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_113386.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_96661.f_6 = -1f;
			break;
		
		case 2:
			Global_113386.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_113386.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_113386.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_96661.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96661.f_7);
			Global_96661.f_6 = 12f;
			Global_113386.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_113386.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_113386.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_96661.f_6 = 0f;
			break;
		
		case 3:
			Global_113386.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_113386.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_113386.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_96661.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96661.f_7);
			Global_96661.f_6 = 12f;
			Global_113386.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_113386.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_113386.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_113386.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_96661.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_113386.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96661.f_7);
			Global_96661.f_6 = 12f;
			Global_113386.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_113386.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_113386.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_96661.f_6 = 0f;
			break;
	}
	bVar6 = Global_113386.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_113386.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_6[0] = ((unk_0xBBDA792448DB5A89(Global_113386.f_1.f_126[iParam0 /*23*/].f_2[0]) / unk_0xBBDA792448DB5A89(bVar6)) * 100f);
	}
	if (Global_113386.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_6[1] = ((unk_0xBBDA792448DB5A89(Global_113386.f_1.f_126[iParam0 /*23*/].f_2[1]) / unk_0xBBDA792448DB5A89(bVar6)) * 100f);
	}
	if (Global_113386.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_6[2] = ((unk_0xBBDA792448DB5A89(Global_113386.f_1.f_126[iParam0 /*23*/].f_2[2]) / unk_0xBBDA792448DB5A89(bVar6)) * 100f);
	}
	if (Global_96661.f_6 != -1f)
	{
		Global_96661.f_6 = ((unk_0xBBDA792448DB5A89(Global_96661.f_7) / unk_0xBBDA792448DB5A89(bVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("jewel_heist_raw_take"), Global_113386.f_1.f_126[iParam0 /*23*/], true);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_113386.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_99(810, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_99(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_93(8))
			{
				case 3:
					func_99(610, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_99(611, iVar7, 1);
					break;
				
				case 4:
					func_99(622, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_99(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_99(734, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_99(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_93(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_93(11))
			{
				case 8:
					func_99(664, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_99(671, iVar7, 1);
					break;
				
				case 9:
					func_99(674, Global_113386.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_99(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_96661.f_3 = 1;
	Global_63154 = 0;
}

void func_99(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75250[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75250[iVar0 /*9*/] != -1)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75250[iVar0 /*9*/].f_1 > 1)
			{
				Global_75250[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75250[iVar0 /*9*/].f_1 < 0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_100(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2 == 0)
	{
		return;
	}
	iVar0 = bParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_96671[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_96671[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_96671[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_96671[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_96671[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0xB3271D7AB655B441(joaat("hcs_penalty_jewel_drop_money"), bParam2, true);
					break;
				
				case 2:
					unk_0xB3271D7AB655B441(joaat("hcs_penalty_paleto_drop_money"), bParam2, true);
					break;
				
				case 4:
					unk_0xB3271D7AB655B441(joaat("hcs_penalty_bigs_drop_money"), bParam2, true);
					break;
			}
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_jewel_drop_money"), bParam2, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_jewel_madr_house"), bParam2, true);
			break;
		
		case 4:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_docks_unsell_wpn"), bParam2, true);
			break;
		
		case 3:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_paleto_agent_cut"), bParam2, true);
			break;
		
		case 5:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_bigs_slow_loading"), bParam2, true);
			break;
		
		case 6:
			unk_0xB3271D7AB655B441(joaat("hcs_penalty_bigs_hostage_gift"), bParam2, true);
			break;
	}
	Global_96671[iParam0 /*38*/].f_25[Global_96671[iParam0 /*38*/].f_37] = iParam1;
	Global_96671[iParam0 /*38*/].f_31[Global_96671[iParam0 /*38*/].f_37] = iVar0;
	Global_96671[iParam0 /*38*/].f_37++;
}

int func_101(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	if (Global_75249 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_75250[iVar0 /*9*/].f_2 != 0f)
			{
				Global_75250[iVar0 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_75250[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_75250[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_63379[iVar1 /*13*/] == 9)
			{
				Global_75250[iVar0 /*9*/].f_1 = unk_0xF2DB717A73826179(bLocal_68);
			}
			if (Global_63379[iVar1 /*13*/] == 15)
			{
				Global_75250[iVar0 /*9*/].f_1 = bLocal_69;
			}
		}
		iVar0++;
	}
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (Global_63173)
	{
		return;
	}
	Global_63173 = 1;
	bVar0 = false;
	bVar1 = false;
	bVar0 = (func_7(joaat("sp0_shots")) - Global_63177);
	bVar1 = (func_7(joaat("sp0_hits")) - Global_63176);
	bVar0 = (bVar0 + (func_7(joaat("sp1_shots")) - Global_63179));
	bVar1 = (bVar1 + (func_7(joaat("sp1_hits")) - Global_63178));
	bVar0 = (bVar0 + (func_7(joaat("sp2_shots")) - Global_63181));
	bVar1 = (bVar1 + (func_7(joaat("sp2_hits")) - Global_63180));
	unk_0x4EDE34FBADD967A6(0);
	bVar2 = 100f;
	if (!bVar0 == 0)
	{
		bVar3 = unk_0xBBDA792448DB5A89(bVar0);
		bVar4 = unk_0xBBDA792448DB5A89(bVar1);
		bVar2 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((bVar4 / bVar3) * 100f)));
		if (bVar2 > 100f)
		{
			bVar2 = 100f;
		}
	}
	bLocal_68 = bVar2;
	bLocal_69 = bVar0;
}

void func_104(var uParam0)
{
	func_70(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

int func_105()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_106()
{
	int iVar0;
	
	if (Global_32208 == 0 && !Global_32212)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		Global_75250[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_107()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_108();
	if (((Global_63160 && unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D())) && !unk_0x991251AFC3981F84()) && !unk_0xB0034A223497FFCB())
	{
		Global_63160 = 0;
	}
	if (Global_63153)
	{
		Global_63153 = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0xB0034A223497FFCB())
	{
		bVar0 = false;
	}
	if (!unk_0x7C0A893088881D57())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_63160)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x49C32D60007AFA47(unk_0xA5EDC40EF369B48D()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_75249)
	{
		if (Global_75250[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_63379[Global_75250[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_75250[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_75250[iVar2 /*9*/].f_7 == 1)
						{
							Global_75250[iVar2 /*9*/].f_8 = 0;
							Global_75250[iVar2 /*9*/].f_1 = 0;
							Global_75250[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0x7239B21A38F536BA(Global_75250[iVar2 /*9*/].f_6))
						{
							if (!unk_0x5F9532F3B5CC2551(Global_75250[iVar2 /*9*/].f_6, false))
							{
								iLocal_64 = Global_75250[iVar2 /*9*/].f_8;
								bLocal_63 = unk_0xEEF059FAD016D209(Global_75250[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - bLocal_63);
								if (iLocal_65 > 0)
								{
									Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_75250[iVar2 /*9*/].f_1 < 0)
									{
										Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_75250[iVar2 /*9*/].f_8 = bLocal_63;
							}
						}
						else
						{
							Global_75250[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_63161)
					{
						Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_63162)
					{
						if (Global_63164 == -1 || Global_75250[iVar2 /*9*/] == Global_63164)
						{
							if (((Global_75250[iVar2 /*9*/] == 339 || Global_75250[iVar2 /*9*/] == 179) || Global_75250[iVar2 /*9*/] == 342) || Global_75250[iVar2 /*9*/] == 234)
							{
								Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f)));
							}
							else
							{
								Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_63166 == -1 || Global_63166 == Global_75250[iVar2 /*9*/])
						{
							if (!Global_63165 == 0)
							{
								if (unk_0x7239B21A38F536BA(Global_63165))
								{
									if (!unk_0x5F9532F3B5CC2551(Global_63165, false))
									{
										if (unk_0x6AC7003FA6E5575E(Global_63165))
										{
											fVar3 = unk_0xD5037BA82E12416F(Global_63165);
											if (fVar3 > Global_75250[iVar2 /*9*/].f_2)
											{
												Global_75250[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_54(func_64()))
					{
						if (unk_0x3E5F7FC85D854E15(unk_0xA5EDC40EF369B48D(), 0) && unk_0xB1D200FE26AEF3CB(unk_0xA5EDC40EF369B48D(), 0))
						{
							Global_75250[iVar2 /*9*/].f_1 = (Global_75250[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if ((((Global_75445 == 0 && Global_75435 == 0) && Global_63313 == 0) && Global_63183 == 0) && !Global_75401)
	{
		return;
	}
	iVar10 = 0;
	if (Global_63183 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63184[iVar0 /*2*/] != 0)
			{
				if (!unk_0x7239B21A38F536BA(Global_63184[iVar0 /*2*/]))
				{
					Global_63184[iVar0 /*2*/] = 0;
					Global_63183 = (Global_63183 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(0))
	{
		iVar3 = unk_0xD8F66A3A60C62153(0, iVar0);
		switch (iVar3)
		{
			case 142:
				unk_0x2902843FCD2B2D79(0, iVar0, &bVar4, 1);
				if (unk_0x7239B21A38F536BA(bVar4))
				{
					unk_0x5F9532F3B5CC2551(bVar4, false);
					if (Global_63313 > 0)
					{
						bVar7 = unk_0x9F47B058362C84B5(bVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_63313)
						{
							if (Global_63314[iVar1 /*2*/] == bVar7)
							{
								iVar10 = (iVar10 + Global_63314[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x524AC5ECEA15343E(bVar4) && unk_0x04A2A40C73395041(bVar4) != unk_0xD80958FC74E988A6())
					{
						bVar5 = unk_0x93C8B64DEB84728C(unk_0x04A2A40C73395041(bVar4));
						iVar14 = 0;
						if (unk_0x7239B21A38F536BA(bVar5))
						{
							if (unk_0x6AC7003FA6E5575E(bVar5))
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
								{
									bVar15 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
								}
								else
								{
									bVar15 = unk_0xB6997A7EB3F5C8C0();
								}
								if (unk_0x7239B21A38F536BA(bVar15) && unk_0x4B53F92932ADFAC0(bVar5) == bVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x524AC5ECEA15343E(bVar5) && unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()) == unk_0x04A2A40C73395041(bVar5)) || iVar14)
						{
							if (unk_0x524AC5ECEA15343E(bVar5))
							{
								iVar6 = unk_0x16FFE42AB2D2DC59(unk_0x04A2A40C73395041(bVar4));
								if (Global_63183 > 0)
								{
									iVar11 = func_112(bVar4);
									if (iVar11 != -1)
									{
										unk_0xD75960F6BD9EA49C(unk_0x04A2A40C73395041(Global_63184[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_111();
												Global_63184[iVar11 /*2*/] = 0;
												Global_63183 = (Global_63183 - 1);
											}
										}
									}
								}
								if (Global_75445 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_75445)
									{
										if (Global_75436[iVar1 /*2*/] == iVar6)
										{
											func_99(Global_75436[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_75401)
							{
								bVar12 = unk_0x04A2A40C73395041(bVar4);
								iVar13 = unk_0xFF059E1E4C01E63C(bVar12);
								if (!unk_0x0A7B270912999B3C(bVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0xEBA5AD3A0EAF7121(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), unk_0x04A2A40C73395041(bVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0xB980061DA992779D(unk_0x04A2A40C73395041(bVar4)))
											{
												func_110();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_75435 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_75435;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_75402[iVar1 /*2*/] != 0)
									{
										if (unk_0x7239B21A38F536BA(Global_75402[iVar1 /*2*/]))
										{
											if (unk_0x5F9532F3B5CC2551(Global_75402[iVar1 /*2*/], false))
											{
												if (Global_75402[iVar1 /*2*/] == bVar4)
												{
													func_99(Global_75402[iVar1 /*2*/].f_1, 1, 0);
													Global_75402[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_75402[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_75435 > 0)
								{
									while (Global_75402[(Global_75435 - 1) /*2*/] == 0 && Global_75435 > 1)
									{
										if (Global_75435 > 1)
										{
											Global_75435 = (Global_75435 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_109(iVar10);
	}
}

void func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		iVar1 = Global_75250[iVar0 /*9*/];
		if (Global_63379[iVar1 /*13*/] == 13)
		{
			Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		iVar1 = Global_75250[iVar0 /*9*/];
		if (Global_63379[iVar1 /*13*/] == 16)
		{
			Global_75250[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_111()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_63183 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		iVar2 = Global_75250[iVar1 /*9*/];
		if (Global_63379[iVar2 /*13*/] == 7)
		{
			Global_75250[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_112(bool bParam0)
{
	int iVar0;
	
	if (Global_63183 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_63184[iVar0 /*2*/] == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_113()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0xD642319C54AADEB6())
	{
		if (unk_0x5B1F2E327B6B6FE1() == 33)
		{
			if (unk_0x2B626A0150E4D449() == 33)
			{
				iVar0 = unk_0xDC9274A7EF6B2867();
				bVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x8098C8D6597AAE18(iVar3 * 3 + 1);
						iVar5 = unk_0x8098C8D6597AAE18(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								bVar1 = iVar4;
								break;
						}
						func_90(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = unk_0x8098C8D6597AAE18(iVar2);
					bVar7 = unk_0x8098C8D6597AAE18(iVar2 + 1);
					bVar8 = false;
					if (unk_0x8098C8D6597AAE18(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0x8098C8D6597AAE18(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_75399 = iVar9;
					Global_75400 = iVar6;
					if (bVar1 == -1)
					{
						func_78(unk_0xBBDA792448DB5A89(bVar7), bVar8);
					}
					else
					{
						func_78(unk_0xBBDA792448DB5A89(bVar1), bVar8);
					}
				}
				func_114();
			}
		}
		if (unk_0x5B1F2E327B6B6FE1() == 13)
		{
			if (unk_0x2B626A0150E4D449() == 37)
			{
				iVar10 = unk_0xDC9274A7EF6B2867();
				if (iVar10 == 3)
				{
					iVar11 = unk_0x8098C8D6597AAE18(0);
					iVar12 = unk_0x8098C8D6597AAE18(1);
					iVar13 = unk_0x8098C8D6597AAE18(2);
					Global_113386.f_2352[iVar11 /*2*/] = iVar12;
					Global_113386.f_2352[iVar11 /*2*/].f_1 = iVar13;
					func_114();
				}
			}
		}
	}
}

int func_114()
{
	if (func_101(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

void func_115()
{
	Global_78579 = 0;
	Global_78580 = 0;
	Global_63154 = 0;
	unk_0xC1B1E9A034A63A62(false);
	unk_0x5AE11BC36633DE4E(0);
	unk_0xE1CD1E48E025E661();
	iLocal_60 = 0;
	Global_63150 = 0;
	Global_63164 = -1;
	iLocal_70 = 0;
	Global_63148 = 0;
	Global_63147 = 0;
	iLocal_72 = 0;
	Global_63165 = 0;
	Global_63163 = 0;
	Global_63144 = 0;
	Global_75445 = 0;
	Global_75435 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45, 0);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		unk_0x1090044AD1DA76FA();
	}
	Global_63159 = 0;
	Global_63155 = 0;
}

