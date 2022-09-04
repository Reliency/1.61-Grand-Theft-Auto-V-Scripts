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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0x9243BAC96D64C050();
	if (unk_0x2BDD44CC428A7EAE() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_173())
	{
		Global_4539953 = 99;
		Global_4539954 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4539953 = 0;
		Global_4539954 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_172();
	if (func_171(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_170();
	iLocal_63 = unk_0x430386FE9BF80B45();
	if (Global_20211 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22638 = 0;
	Global_22639 = 0;
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x460BC76A0E10655E(unk_0xD80958FC74E988A6()))
		{
			Global_22638 = 1;
		}
		if (unk_0x2202A3F42C8E5F79())
		{
			Global_22638 = 1;
		}
		if (unk_0x4C241E39B23DF959(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()), false))
		{
			Global_22638 = 1;
		}
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
		{
			Global_22638 = 1;
		}
		if (unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6()))
		{
			Global_22638 = 1;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (iLocal_82 == 1)
			{
				Global_22638 = 1;
			}
			iLocal_99 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if ((((unk_0x9F47B058362C84B5(iLocal_99) == joaat("rhino") || unk_0x9F47B058362C84B5(iLocal_99) == joaat("cutter")) || unk_0x9F47B058362C84B5(iLocal_99) == joaat("submersible")) || unk_0x9F47B058362C84B5(iLocal_99) == joaat("khanjali")) || (unk_0x9F47B058362C84B5(iLocal_99) == joaat("barrage") && unk_0xE33FFA906CE74880(iLocal_99, func_169(unk_0xD80958FC74E988A6(), 1))))
			{
				Global_22638 = 1;
			}
			else if (unk_0xBB40DD2270B65366(iLocal_99, -1, false) == unk_0xD80958FC74E988A6())
			{
				if (unk_0x95EED5A694951F9F(iLocal_99) > 0f)
				{
					if (!Global_78319)
					{
						if (!func_168(0))
						{
							unk_0xC429DCEEB339E129(unk_0xD80958FC74E988A6(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78319)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), false);
		}
	}
	unk_0xE80492A9AC099A93(&Global_8136, 21);
	func_167(0);
	unk_0x933D6A9EEC1BACD0(&Global_8136, 17);
	if (Global_20208 == 0)
	{
		func_166();
	}
	else
	{
		iLocal_91 = unk_0x11FE353CF9733E6F("camera_gallery");
		iLocal_92 = unk_0x11FE353CF9733E6F("instructional_buttons");
		while (!unk_0x85F01B8D5B90570E(iLocal_91) || !unk_0x85F01B8D5B90570E(iLocal_92))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0xFE99B66D079CF6BC(0, 25, true);
		}
		if (Global_78319)
		{
			bLocal_95 = 2;
		}
		else
		{
			switch (func_165())
			{
				case 0:
					bLocal_95 = 2;
					break;
				
				case 2:
					bLocal_95 = 2;
					break;
				
				case 3:
					bLocal_95 = 2;
					break;
				}
		}
		func_164(iLocal_91, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(bLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_163(iLocal_91, "CLOSE_SHUTTER");
		unk_0xF6E48914C7A8694E(Global_20247, "DISPLAY_VIEW");
		unk_0xC3D0841A0CC546A6(16);
		unk_0xC6796A8FFA375E53();
	}
	Local_41 = { Global_20226 };
	Local_42 = { Global_20219[Global_20211 /*3*/] };
	Global_22639 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0xE80492A9AC099A93(&Global_8138, 3);
	}
	func_161();
	unk_0x61BB1D9B3A95D802(4);
	if (unk_0x76BF03FADBF154F5())
	{
	}
	if (Global_4718592.f_163007)
	{
	}
	if (Global_4718592.f_163009 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xEDE476E5EE29EDB1(0, Global_20235);
		unk_0xEDE476E5EE29EDB1(0, 186);
		unk_0xEB2D525B57F42B40();
		unk_0xFE99B66D079CF6BC(0, 25, true);
		unk_0xFE99B66D079CF6BC(0, 0, true);
		if (func_160())
		{
			if (!BitTest(Global_4541229, 2))
			{
				unk_0x933D6A9EEC1BACD0(&Global_4541229, 2);
				func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113386.f_14051.f_81)
		{
			if (!BitTest(Global_4541229, 13))
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					if (!BitTest(Global_8137, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_160())
						{
							unk_0x933D6A9EEC1BACD0(&Global_4541229, 13);
							Global_113386.f_14051.f_81 = 1;
							func_159("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xB0034A223497FFCB())
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
			}
			unk_0x6806C51AD12B83B8(7);
			func_158();
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 200, true);
			}
			unk_0xFE99B66D079CF6BC(0, 44, true);
			unk_0xFE99B66D079CF6BC(0, 47, true);
			unk_0xFE99B66D079CF6BC(0, 91, true);
			unk_0xFE99B66D079CF6BC(0, 92, true);
			unk_0xFE99B66D079CF6BC(0, 68, true);
			if (iLocal_100 == 0)
			{
				unk_0xEDE476E5EE29EDB1(0, Global_20239);
			}
			unk_0xEDE476E5EE29EDB1(0, Global_20236);
			if ((unk_0xB16FCE9DDC7BA182() || unk_0x797AC7CB535BA28F()) && !func_160())
			{
				iLocal_81 = 1;
				Global_20266.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (unk_0x7A3F19700A4D0525())
			{
				Global_20266.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (BitTest(Global_8137, 3))
			{
				Global_20266.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (unk_0x10FAB35428CCC9D7())
			{
				if (func_150())
				{
					Global_20266.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
				{
					Global_20266.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
				if ((unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()))
				{
					if (func_149())
					{
					}
					else
					{
						Global_20266.f_1 = 3;
						unk_0x577D1284D6873711(false);
					}
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					if (Global_78319 == 1)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xE81AFC1BC4CC41CE(unk_0xD80958FC74E988A6()) > 0.3f)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					func_148();
					iLocal_99 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x95EED5A694951F9F(iLocal_99) < 0f)
					{
						func_145(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0x1F2300CB7FA7B7F6())
							{
								func_145(0);
							}
						}
						else if (!unk_0x1F2300CB7FA7B7F6())
						{
							iLocal_67 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_78319 == 0)
				{
					if (BitTest(Global_8136, 18))
					{
						func_144();
						if ((Global_20266 == 0 || Global_20266 == 1) || Global_20266 == 2)
						{
							if (!unk_0x2AFE52F782F25775(unk_0xD80958FC74E988A6()))
							{
								if (unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
								{
								}
								else
								{
									Global_20266.f_1 = 3;
									unk_0x577D1284D6873711(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_143();
			}
			if (Global_20266.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_20266.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_141();
									if (Global_22643 == 0 && Global_22640 == 6)
									{
										unk_0x50085246ABD3FEFA(0, true);
										unk_0x10D373323E5B9C0D();
										iLocal_100 = 0;
										func_140();
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
										{
											Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
										}
										func_139();
										iLocal_60++;
										if (func_173())
										{
											func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_60), unk_0xBBDA792448DB5A89(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_128();
									}
									if (Global_22640 == 0)
									{
										iLocal_100 = 0;
										unk_0x10D373323E5B9C0D();
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
										{
											Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
										}
										func_127();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_128();
										if (func_173())
										{
											if (Global_4539954 == 0)
											{
												if (!BitTest(Global_4541229, 2))
												{
													func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4541229, 2))
										{
											func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_126();
										func_125(1);
									}
								}
								else if (Global_20266.f_1 != 9)
								{
									if (Global_22639 == 1)
									{
										if (Global_22638 == 0)
										{
											func_124();
										}
									}
									else if ((Global_8744 - Global_8743) > Global_8745)
									{
										if (unk_0xB16FCE9DDC7BA182() && func_123())
										{
											if (func_122() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x577D1284D6873711(false);
												unk_0xA3B0C41BA5CC0BB5(iLocal_63);
												iLocal_94 = 0;
												if (Global_22638 == 0)
												{
													func_139();
													Global_22638 = 1;
													unk_0x50085246ABD3FEFA(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_66 = 0;
													func_116(1);
													iLocal_93 = 0;
													func_114(0, 1);
													func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_112(1);
												}
											}
										}
										if (func_111(2, Global_20234, 0))
										{
											if (func_160())
											{
												if (((Global_1931426 || Global_1574964) || Global_22641) || BitTest(Global_8136, 21))
												{
												}
												else if (func_122() && iLocal_78)
												{
												}
												else if (!func_123())
												{
													if (iLocal_78 == 0)
													{
														unk_0x891B5B39AC6302AF(500);
														iLocal_94 = 0;
														func_114(1, 1);
														func_110(1);
													}
												}
											}
											else if (func_122() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x577D1284D6873711(false);
												unk_0xA3B0C41BA5CC0BB5(iLocal_63);
												iLocal_94 = 0;
												if (Global_22638 == 0)
												{
													func_139();
													Global_22638 = 1;
													unk_0x50085246ABD3FEFA(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_66 = 0;
													func_116(1);
													iLocal_93 = 0;
													func_114(0, 1);
													func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0x4D79439A6B55AC67())
										{
											func_109();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0x4D79439A6B55AC67())
									{
										func_109();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (BitTest(Global_8136, 28))
										{
											func_109();
											iLocal_53 = 1;
										}
									}
									else if (!BitTest(Global_8136, 28))
									{
										func_109();
										iLocal_53 = 0;
									}
									if (Global_22638 == 1)
									{
										func_98();
									}
									else if (Global_20266.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_94();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_127();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
												{
													if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
													{
														func_163(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x9CD27B0045628463();
														while (unk_0x9CD27B0045628463() < (iLocal_86 + iLocal_88) && Global_20266.f_1 > 3)
														{
															func_158();
															func_143();
															func_93();
															unk_0xEB2D525B57F42B40();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_173())
												{
													if (Global_4539954 == 0)
													{
														if (!BitTest(Global_4541229, 2))
														{
															func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4541229, 2))
												{
													func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_143();
												func_158();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_128();
												iLocal_87 = 0;
												func_163(iLocal_91, "OPEN_SHUTTER");
											}
											func_126();
											func_125(1);
											func_92();
										}
									}
									if (iLocal_94 == 1)
									{
										func_89();
									}
									if (iLocal_80)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0x933D6A9EEC1BACD0(&Global_8136, 18);
											if (Global_22638 == 0)
											{
												func_114(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22638 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22641 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_93();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20266.f_1 > 3)
					{
						if (Global_22639 == 1)
						{
							if (Global_22638 == 0)
							{
								func_124();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0xF6201B4DAF662A9D() || func_5())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0xCCA1072C29D096C2() || func_4())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x48AF36444B965238())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0x580417101DDB492F(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_114(0, 1);
					}
					if (unk_0x580417101DDB492F(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x50F940259D3841E6(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_114(0, 1);
							iLocal_104 = 0;
							unk_0x9E778248D6685FE0("Gallery");
							unk_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (func_4())
					{
						if (unk_0x580417101DDB492F(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_114(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0x580417101DDB492F(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_114(0, 1);
						iLocal_62 = 0;
					}
					if (!func_4())
					{
						if (unk_0x580417101DDB492F(2, Global_20238))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_114(0, 1);
							if (BitTest(Global_8137, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x9CD27B0045628463();
							unk_0x94DD7888C10A979E(true);
						}
					}
				}
				else if (unk_0x580417101DDB492F(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_114(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x9CD27B0045628463();
		if (func_160())
		{
			if (!BitTest(Global_4541229, 2))
			{
				unk_0x933D6A9EEC1BACD0(&Global_4541229, 2);
				func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			Global_22638 = 0;
			Global_22639 = 0;
			Global_22641 = 0;
			unk_0x1D132D614DD86811(&iLocal_91);
			unk_0x1D132D614DD86811(&iLocal_92);
			unk_0x577D1284D6873711(false);
			if (Global_20466 == 1)
			{
				unk_0x933D6A9EEC1BACD0(&Global_8136, 17);
			}
			else
			{
				unk_0xE80492A9AC099A93(&Global_8136, 17);
			}
			unk_0x50085246ABD3FEFA(0, true);
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xE80492A9AC099A93(&Global_8138, 3);
			unk_0xE80492A9AC099A93(&Global_4541229, 3);
			unk_0x450930E616475D0D(15);
			Global_22642 = 1;
			unk_0xA3B0C41BA5CC0BB5(iLocal_63);
			unk_0x353FC880830B88FA(iLocal_63);
			unk_0x10D373323E5B9C0D();
			func_116(1);
			unk_0xA2CCBE62CD4C91A4(false);
			unk_0x375A706A5C2FD084(false);
			unk_0x1B0B4AEED5B9B41C(1f);
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
				unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				unk_0xBE2CACCF5A8AA805(sLocal_20[Global_4539954]);
			}
			unk_0xE80492A9AC099A93(&Global_8136, 18);
			if (func_160())
			{
				func_114(1, 1);
			}
			else
			{
				func_114(0, 1);
			}
			if (func_171(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0x1090044AD1DA76FA();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x44E44169EF70138E(true);
		}
		else if (Global_20266.f_1 > 3)
		{
			unk_0x44E44169EF70138E(false);
		}
	}
}

int func_2()
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

int func_3()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

bool func_4()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_5()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_6()
{
	iLocal_57 = unk_0xF5BED327CEA362B1(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			bLocal_60 = unk_0x473151EBC762C6DA();
			bLocal_61 = unk_0xDC54A7AF8B3A14EF();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0x85F01B8D5B90570E(iLocal_91))
					{
						if (func_173())
						{
							if (Global_4539954 == 0)
							{
								if (!BitTest(Global_4541229, 2))
								{
									func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4541229, 2))
							{
								func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x85F01B8D5B90570E(iLocal_91))
				{
					func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0x10D373323E5B9C0D();
			break;
		
		case 1:
			if (!unk_0xD422FCC5F239A915())
			{
				unk_0xABA17D7CE615ADBF("CELL_SPINNER2");
				unk_0xBD12F8228410D9B4(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8137, 28))
			{
				iLocal_54 = 0;
				bLocal_60 = false;
				bLocal_61 = false;
			}
			else
			{
				Global_20266.f_1 = 3;
				Global_22642 = 1;
			}
			unk_0x10D373323E5B9C0D();
			break;
	}
}

void func_7()
{
	if (func_111(2, Global_20235, 0))
	{
		func_1(0);
		if (BitTest(Global_8137, 28))
		{
			unk_0x577D1284D6873711(false);
			unk_0x5AE11BC36633DE4E(0);
			func_140();
			iLocal_78 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_139();
			iLocal_87 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8137, 14))
			{
				func_159("CELL_299", -1);
			}
			else
			{
				func_139();
				func_10();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_114(1, 1);
		}
	}
	if (BitTest(Global_8136, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_158();
			unk_0xEB2D525B57F42B40();
			func_93();
			func_148();
			func_143();
		}
		unk_0x577D1284D6873711(false);
		func_140();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_78 = 0;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
		func_128();
		func_139();
	}
	if (func_111(2, Global_20239, 0))
	{
		func_1(0);
		if (func_122() || BitTest(Global_8137, 28))
		{
		}
		else
		{
			unk_0x577D1284D6873711(false);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_87 = 1;
			func_140();
			iLocal_78 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_139();
		}
	}
	if (BitTest(Global_8136, 28))
	{
		if (func_111(2, Global_20238, 0))
		{
			func_1(0);
			unk_0x577D1284D6873711(false);
			unk_0x1072F115DAB0717E(false, false);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			func_158();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			func_158();
			unk_0xD801CC02177FA3F1();
			unk_0x6A12D88881435DCA();
			Global_22642 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_114(0, 1);
			Global_22638 = 1;
			unk_0x50085246ABD3FEFA(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				unk_0x933D6A9EEC1BACD0(&Global_8136, 9);
			}
			iLocal_93 = 0;
			func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_20255, true);
		func_9();
	}
}

void func_9()
{
	if (func_2())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

void func_10()
{
	iLocal_100 = 1;
	Global_22643 = 1;
	unk_0x50085246ABD3FEFA(0, true);
}

int func_11()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_20266.f_1 < 4)
	{
		return 0;
	}
	if (bLocal_60 == bLocal_61 || bLocal_60 > bLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA571D46727E2B718(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_84();
		func_80();
		func_79();
		fLocal_36 = unk_0x3A6867B4845BEDA2();
		fLocal_37 = unk_0x743607648ADD4587();
		if (iLocal_84 == 0)
		{
			if (unk_0xF3A21BCD95725A4A(2, iVar0) && !unk_0xF3A21BCD95725A4A(2, iVar1))
			{
				iLocal_84 = 1;
				func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
					func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_66();
				unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
				unk_0xD69736AAE04DB51A(fLocal_40);
				unk_0xC6796A8FFA375E53();
				func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF3A21BCD95725A4A(2, iVar0) || unk_0xF3A21BCD95725A4A(2, iVar1))
		{
			iLocal_84 = 0;
			func_128();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0xF3A21BCD95725A4A(2, iVar1) && !unk_0xF3A21BCD95725A4A(2, iVar0))
			{
				iLocal_85 = 1;
				func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
				}
				else if (!func_160())
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
					func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
				}
				else
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
					func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
				}
				func_65();
				unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
				unk_0xD69736AAE04DB51A(fLocal_40);
				unk_0xC6796A8FFA375E53();
				func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF3A21BCD95725A4A(2, iVar1) || unk_0xF3A21BCD95725A4A(2, iVar0))
		{
			iLocal_85 = 0;
			func_128();
		}
	}
	else
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
	if (unk_0x6CD79468A1E595C6(2))
	{
		func_128();
	}
	func_148();
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 200, true);
	}
	if (func_160())
	{
		if (!BitTest(Global_4541229, 2))
		{
			unk_0x933D6A9EEC1BACD0(&Global_4541229, 2);
			func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x580417101DDB492F(2, 183) && iLocal_106 == 0) && !func_160())
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (BitTest(Global_4541229, 2))
				{
					unk_0xE80492A9AC099A93(&Global_4541229, 2);
					if (!BitTest(Global_4541229, 2))
					{
						func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&Global_4541229, 2);
					func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0xF6E48914C7A8694E(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(false);
			func_64("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
		if (!func_63(14))
		{
			if (BitTest(Global_4541229, 10))
			{
				if ((Global_78319 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_62())
				{
					unk_0xF6E48914C7A8694E(iLocal_91, "SET_FOCUS_LOCK");
					unk_0xC58424BA936EB458(true);
					unk_0x80338406F3475E55("CELL_ACTTL");
					unk_0x6C188BE134E074AA(unk_0x7B5280EBA9840C72(&Global_4542214));
					unk_0x362E2D3FE93A9959();
					unk_0xC58424BA936EB458(false);
					unk_0xC6796A8FFA375E53();
					unk_0xE80492A9AC099A93(&Global_4541229, 10);
				}
			}
		}
		else if (BitTest(Global_4541229, 10))
		{
			unk_0xE80492A9AC099A93(&Global_4541229, 10);
		}
		iLocal_33 = unk_0x9CD27B0045628463();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Local_35 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				if (unk_0xF1B760881820C952(Local_35, Local_34, true) > 5f)
				{
					Global_20266.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
				iLocal_32 = unk_0x9CD27B0045628463();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0xF3A21BCD95725A4A(0, 182) && !func_160())
		{
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
			iLocal_83 = 0;
			unk_0xF6E48914C7A8694E(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(false);
			func_64("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
	}
	else if (unk_0xF3A21BCD95725A4A(0, 182) && !func_160())
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
		iLocal_83 = 1;
		if (!func_63(14))
		{
			unk_0xF6E48914C7A8694E(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(true);
			func_64("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
	}
	if (func_173())
	{
		if ((unk_0x580417101DDB492F(2, 186) && iLocal_106 == 0) && !func_160())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
					{
						unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
						unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
						unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
						if (Global_20266 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
					{
						unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
						unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
						unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
					}
				}
			}
		}
		if ((unk_0x580417101DDB492F(2, 185) && iLocal_106 == 0) && !func_160())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x0C515FAB3FF9EA92(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xA2CCBE62CD4C91A4(true);
							unk_0x375A706A5C2FD084(true);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0xA2CCBE62CD4C91A4(false);
						unk_0x375A706A5C2FD084(false);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0xA2CCBE62CD4C91A4(true);
					unk_0x375A706A5C2FD084(true);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0xA2CCBE62CD4C91A4(false);
					unk_0x375A706A5C2FD084(false);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_160())
	{
		if (unk_0x580417101DDB492F(0, 172) && iLocal_106 == 0)
		{
			if (func_173())
			{
				Global_4539954++;
				unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
			}
			if (Global_4539954 == 13)
			{
				func_125(0);
				unk_0x1B0B4AEED5B9B41C(1f);
				unk_0xBE2CACCF5A8AA805(sLocal_20[(Global_4539954 - 1)]);
				Global_4539954 = 0;
				func_61();
				if (iLocal_21 == 1)
				{
					unk_0xE80492A9AC099A93(&Global_4541229, 2);
					iLocal_21 = 0;
					func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0xDFA2EF8E04127DD5(sLocal_20[Global_4539954], false);
			}
		}
	}
	if (Global_4539954 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0x0145F696AAAAD2E4(sLocal_20[Global_4539954]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xBCEDB009461DA156())
				{
					func_125(1);
				}
				if (iLocal_21 == 0)
				{
					if (!BitTest(Global_4541229, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0x933D6A9EEC1BACD0(&Global_4541229, 2);
				func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x1B0B4AEED5B9B41C(0.25f);
				unk_0x27FEB5254759CDE3(sLocal_20[Global_4539954], false);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4539954 == 1 || Global_4539954 == 3)
			{
			}
			if (Global_4539954 == 2 || Global_4539954 == 4)
			{
			}
		}
	}
	if ((unk_0x580417101DDB492F(0, 173) && iLocal_106 == 0) && !func_160())
	{
		if (func_173())
		{
			func_116(0);
			Global_4539953++;
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
		}
		if (Global_4539953 == 13)
		{
			Global_4539953 = 0;
		}
		if (Global_4539953 == 0)
		{
			if (func_173())
			{
				func_116(0);
			}
		}
		else
		{
			func_126();
		}
		func_60();
	}
	if ((unk_0x91AEF906BCA88877(0, 184) && iLocal_106 == 0) && !func_160())
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_20255, true);
				func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_163(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x9CD27B0045628463();
				while (unk_0x9CD27B0045628463() < (iLocal_86 + iLocal_90) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					unk_0xEB2D525B57F42B40();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_63);
					iLocal_82 = 1;
					func_59(1);
					func_58();
					unk_0x933D6A9EEC1BACD0(&Global_8138, 3);
					iLocal_32 = unk_0x9CD27B0045628463();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_59(0);
					iLocal_82 = 0;
					unk_0xE80492A9AC099A93(&Global_8138, 3);
				}
				iLocal_86 = unk_0x9CD27B0045628463();
				while (unk_0x9CD27B0045628463() < (iLocal_86 + iLocal_88) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					unk_0xEB2D525B57F42B40();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_163(iLocal_91, "OPEN_SHUTTER");
				if (func_173())
				{
					if (Global_4539954 == 0)
					{
						if (!BitTest(Global_4541229, 2))
						{
							func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4541229, 2))
				{
					func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_143();
				func_158();
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_56();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_30();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0x580417101DDB492F(0, 40) || unk_0x580417101DDB492F(0, 41))
			{
				fLocal_65 = unk_0x7EC52CC40597D170();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0xFCBDCE714A7C88E5(iLocal_63))
					{
						unk_0x67C540AA08E4A6F5(iLocal_63, "Camera_Zoom", &Global_20255, true);
					}
				}
				else
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0xF3A21BCD95725A4A(0, 40) || unk_0xF3A21BCD95725A4A(0, 41))
		{
			fLocal_65 = unk_0x7EC52CC40597D170();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0xFCBDCE714A7C88E5(iLocal_63))
				{
					unk_0x67C540AA08E4A6F5(iLocal_63, "Camera_Zoom", &Global_20255, true);
				}
			}
			else
			{
				unk_0xA3B0C41BA5CC0BB5(iLocal_63);
			}
		}
		else
		{
			unk_0xA3B0C41BA5CC0BB5(iLocal_63);
		}
	}
	if ((func_111(2, Global_20235, 0) && !func_123()) && !func_111(2, Global_20234, 0))
	{
		fLocal_38 = unk_0x3A6867B4845BEDA2();
		fLocal_39 = unk_0x743607648ADD4587();
		unk_0x1072F115DAB0717E(false, false);
		unk_0x933D6A9EEC1BACD0(&Global_8136, 21);
		unk_0xA3B0C41BA5CC0BB5(iLocal_63);
		iLocal_78 = 1;
		func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x67C540AA08E4A6F5(-1, "Camera_Shoot", &Global_20255, true);
		func_163(iLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		unk_0xBB779C0CA917E865(Local_43, 0);
		if (!func_173())
		{
			func_116(1);
		}
		Global_22641 = 1;
		unk_0x50085246ABD3FEFA(0, true);
		while (Global_22640 < 6 && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			func_148();
			unk_0xEB2D525B57F42B40();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFDE8F069C542D126(false, false);
		if (Global_20208)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x9CD27B0045628463();
		while (unk_0x9CD27B0045628463() < (iLocal_86 + iLocal_89) && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			unk_0xEB2D525B57F42B40();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_163(iLocal_91, "OPEN_SHUTTER");
		unk_0xE80492A9AC099A93(&Global_8136, 21);
		func_128();
		if (Global_20266.f_1 > 3)
		{
			if (Global_78319)
			{
				func_23(1087, 1, -1);
				func_22();
				func_19(-1492367786, 23, 0);
			}
			else
			{
				switch (func_13())
				{
					case 0:
						unk_0x9B5A68C6489E9909(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x9B5A68C6489E9909(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x9B5A68C6489E9909(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_22();
			}
			func_125(0);
		}
		func_143();
	}
	if (BitTest(Global_8136, 28))
	{
		if (func_111(2, Global_20238, 0))
		{
			unk_0x1072F115DAB0717E(false, false);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			func_158();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			func_158();
			unk_0xD801CC02177FA3F1();
			unk_0x6A12D88881435DCA();
			Global_22642 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22638 = 1;
			unk_0x50085246ABD3FEFA(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				unk_0x933D6A9EEC1BACD0(&Global_8136, 9);
			}
			unk_0x577D1284D6873711(false);
			iLocal_93 = 0;
			func_164(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()
{
	func_14();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_17(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_16(unk_0xD80958FC74E988A6());
			if (func_15(iVar0) && (!func_63(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_15(Global_113386.f_2363.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_21(int iParam0, var uParam1)
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_20203 = { Global_20219[Global_20211 /*3*/] };
	func_114(0, 1);
	func_121(0, 0);
	func_125(0);
	iLocal_66 = 0;
	func_116(1);
	if (!BitTest(Global_8137, 28))
	{
		if (unk_0x76BF03FADBF154F5() == 0)
		{
			if (unk_0xF6201B4DAF662A9D())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_27(iParam0, func_28(iParam2), 0);
	bVar0 = (bVar0 + iParam1);
	if (!func_26(iParam0))
	{
		func_25(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_24(iParam0, bVar0, iParam2, 1);
	}
}

void func_24(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_28(uParam2)] = bParam1;
			break;
		
		case 789:
			Global_1659693[func_28(uParam2)] = bParam1;
			break;
		
		case 790:
			Global_1659699[func_28(uParam2)] = bParam1;
			break;
		
		case 791:
			Global_1659705[func_28(uParam2)] = bParam1;
			break;
		
		case 8729:
			Global_1659711[func_28(uParam2)] = bParam1;
			break;
		
		case 778:
			Global_1659657[func_28(uParam2)] = bParam1;
			break;
		
		case 779:
			Global_1659663[func_28(uParam2)] = bParam1;
			break;
		
		case 780:
			Global_1659669[func_28(uParam2)] = bParam1;
			break;
		
		case 781:
			Global_1659675[func_28(uParam2)] = bParam1;
			break;
		
		case 8731:
			Global_1659681[func_28(uParam2)] = bParam1;
			break;
		
		case 768:
			Global_1659627[func_28(uParam2)] = bParam1;
			break;
		
		case 769:
			Global_1659633[func_28(uParam2)] = bParam1;
			break;
		
		case 770:
			Global_1659639[func_28(uParam2)] = bParam1;
			break;
		
		case 771:
			Global_1659645[func_28(uParam2)] = bParam1;
			break;
		
		case 8733:
			Global_1659651[func_28(uParam2)] = bParam1;
			break;
		
		case 758:
			Global_1659717[func_28(uParam2)] = bParam1;
			break;
		
		case 759:
			Global_1659723[func_28(uParam2)] = bParam1;
			break;
		
		case 760:
			Global_1659729[func_28(uParam2)] = bParam1;
			break;
		
		case 761:
			Global_1659735[func_28(uParam2)] = bParam1;
			break;
		
		case 8735:
			Global_1659741[func_28(uParam2)] = bParam1;
			break;
		
		case 1304:
			Global_1659747[func_28(uParam2)] = bParam1;
			break;
		
		case 7236:
			Global_1659753[func_28(uParam2)] = bParam1;
			break;
		
		case 640:
			Global_1659759[func_28(uParam2)] = bParam1;
			break;
		
		case 1279:
			Global_1659765[func_28(uParam2)] = bParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 11391:
			Global_2869950[func_28(uParam2)] = bParam1;
			break;
		
		case 765:
			Global_1659771[func_28(uParam2)] = bParam1;
			break;
		
		case 766:
			Global_1659777[func_28(uParam2)] = bParam1;
			break;
		
		case 767:
			Global_1659783[func_28(uParam2)] = bParam1;
			break;
		
		case 8734:
			Global_1659789[func_28(uParam2)] = bParam1;
			break;
		
		case 9538:
			Global_1659795[func_28(uParam2)] = bParam1;
			break;
		
		case 1237:
			Global_1659801[func_28(uParam2)] = bParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3666:
			Global_2869985[func_28(uParam2)] = bParam1;
			break;
		
		case 3667:
			Global_2869994[func_28(uParam2)] = bParam1;
			break;
		
		case 3668:
			Global_2869988[func_28(uParam2)] = bParam1;
			break;
		
		case 3669:
			Global_2869997[func_28(uParam2)] = bParam1;
			break;
		
		case 3670:
			Global_2869991[func_28(uParam2)] = bParam1;
			break;
		
		case 3671:
			Global_2870000[func_28(uParam2)] = bParam1;
			break;
		
		case 3692:
			Global_2870003[func_28(uParam2)] = bParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8285:
			Global_2870006[func_28(uParam2)] = bParam1;
			break;
		
		case 8286:
			Global_2870009[func_28(uParam2)] = bParam1;
			break;
		
		case 8287:
			Global_2870012[func_28(uParam2)] = bParam1;
			break;
		
		case 8288:
			Global_2870015[func_28(uParam2)] = bParam1;
			break;
		
		case 8289:
			Global_2870018[func_28(uParam2)] = bParam1;
			break;
		
		case 8290:
			Global_2870021[func_28(uParam2)] = bParam1;
			break;
		
		case 8291:
			Global_2870024[func_28(uParam2)] = bParam1;
			break;
		
		case 8292:
			Global_2870027[func_28(uParam2)] = bParam1;
			break;
		
		case 8293:
			Global_2870030[func_28(uParam2)] = bParam1;
			break;
		
		case 8294:
			Global_2870033[func_28(uParam2)] = bParam1;
			break;
		
		case 8295:
			Global_2870036[func_28(uParam2)] = bParam1;
			break;
		
		case 8296:
			Global_2870039[func_28(uParam2)] = bParam1;
			break;
		
		case 8297:
			Global_2870042[func_28(uParam2)] = bParam1;
			break;
		
		case 8905:
			Global_2870045[func_28(uParam2)] = bParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_28(uParam2)] = bParam1;
			break;
		
		default:
			break;
	}
}

void func_25(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_26(int iParam0)
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_27(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_28(uParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

var func_29()
{
	return Global_1574918;
}

void func_30()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_160())
		{
			func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
			func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
		}
		else
		{
			func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
			func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_78319 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_77(iLocal_92, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 7f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (!func_160())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
						func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!unk_0xA571D46727E2B718(0))
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 210, true), "CELL_284");
						}
						else
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_30)
							{
								func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
							}
							func_77(iLocal_92, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(iLocal_92, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_160())
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (!func_160())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
						func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!unk_0xA571D46727E2B718(0))
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 210, true), "CELL_284");
						}
						else
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_160())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_30)
							{
								func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
							}
							func_77(iLocal_92, "SET_DATA_SLOT", 9f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fLocal_40);
		unk_0xC6796A8FFA375E53();
		func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)
{
	func_77(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 174, true), "CELL_ACTION");
}

int func_32(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_50(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_34(unk_0xD80958FC74E988A6(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_49())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		if (unk_0x9F47B058362C84B5(iParam0) == joaat("mp_f_freemode_01"))
		{
			bVar3 = func_41(iParam0);
			if (!bVar3 == -1)
			{
				if (func_40(&uVar0, bVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			bVar4 = func_39(iParam0);
			if (!bVar4 == -1)
			{
				if (func_37(&uVar1, bVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			bVar5 = func_36(iParam0);
			if (!bVar5 == 0)
			{
				if (func_35(&uVar2, bVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam1) / 32f));
	if (!bVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[bVar0], (bParam1 - bVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x67F3780DD425D4FC(iParam0, 1);
	return iVar0;
}

bool func_37(var uParam0, bool bParam1)
{
	return func_38(uParam0, bParam1);
}

int func_38(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam1) / 32f));
	if (!bVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[bVar0], (bParam1 - bVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x898CC20EA75BACD8(iParam0, 0);
	return iVar0;
}

bool func_40(var uParam0, bool bParam1)
{
	return func_38(uParam0, bParam1);
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x898CC20EA75BACD8(iParam0, 0);
	return iVar0;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_47(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 4, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 62, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 59:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 66, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 60:
				case 63:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 62:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 19, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 4, 1);
							break;
						
						case 1:
							func_48(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 37, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 36, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 1, 1);
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 5, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 1, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 5, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 12, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 23, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 29, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 33, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_43(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_48(uParam2, 124, 1);
	func_48(uParam2, 125, 1);
	func_48(uParam2, 126, 1);
	func_48(uParam2, 127, 1);
	func_48(uParam2, 128, 1);
	func_48(uParam2, 129, 1);
	func_48(uParam2, 130, 1);
	func_48(uParam2, 131, 1);
	func_48(uParam2, 132, 1);
	func_48(uParam2, 133, 1);
	func_48(uParam2, 136, 1);
	func_48(uParam2, 138, 1);
	func_48(uParam2, 139, 1);
	func_48(uParam2, 143, 1);
	func_48(uParam2, 144, 1);
	func_48(uParam2, 145, 1);
	func_48(uParam2, 147, 1);
}

void func_44(var uParam0, bool bParam1, bool bParam2)
{
	func_45(uParam0, bParam1, bParam2);
}

void func_45(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam1) / 32f));
	if (!bVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(uParam0[bVar0], (bParam1 - bVar0 * 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(uParam0[bVar0], (bParam1 - bVar0 * 32));
	}
}

void func_46(var uParam0, bool bParam1, bool bParam2)
{
	func_45(uParam0, bParam1, bParam2);
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 5, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 7, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 10:
					func_48(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 4, 1);
						func_46(uParam3, 6, 1);
						func_46(uParam3, 10, 1);
						func_46(uParam3, 54, 1);
						func_46(uParam3, 55, 1);
						func_46(uParam3, 56, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 106, 1);
						func_46(uParam3, 114, 1);
						func_46(uParam3, 116, 1);
						func_46(uParam3, 117, 1);
						func_46(uParam3, 118, 1);
						func_46(uParam3, 119, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 9, 1);
						func_44(uParam2, 10, 1);
						func_44(uParam2, 53, 1);
						func_44(uParam2, 56, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 36, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 14, 1);
						func_44(uParam2, 105, 1);
						func_44(uParam2, 113, 1);
						func_44(uParam2, 114, 1);
						func_44(uParam2, 115, 1);
						func_44(uParam2, 116, 1);
						func_44(uParam2, 117, 1);
					}
					func_48(uParam4, 2, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_46(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_48(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 7, 1);
						func_46(uParam3, 0, 1);
						func_46(uParam3, 12, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 15, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 17, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 21, 1);
						func_46(uParam3, 25, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 30, 1);
						func_46(uParam3, 31, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 55, 1);
						func_44(uParam2, 0, 1);
						func_44(uParam2, 2, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 7, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 11, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 15, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 17, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
						func_44(uParam2, 20, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 22, 1);
						func_44(uParam2, 54, 1);
						func_44(uParam2, 24, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 30, 1);
						func_44(uParam2, 31, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 36, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_48(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam1) / 32f));
	if (!bVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(uParam0[bVar0], (bParam1 - (32 * bVar0)));
	}
	else
	{
		unk_0xE80492A9AC099A93(uParam0[bVar0], (bParam1 - bVar0 * 32));
	}
}

int func_49()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_51(float fParam0)
{
	func_77(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 172, true), "CELL_BORDER");
}

void func_52(float fParam0)
{
	if (Global_1941594)
	{
		fParam0 = -1f;
	}
	func_77(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 173, true), "CELL_FILTER");
}

void func_53()
{
	if (unk_0xA571D46727E2B718(2) || func_4())
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 183, true), "CELL_GRID");
	func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_29)
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 9f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
	}
	if (!func_63(14))
	{
		if ((Global_78319 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_62())
		{
			unk_0xF6E48914C7A8694E(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(true);
			unk_0x80338406F3475E55("CELL_ACTTL");
			unk_0x6C188BE134E074AA(unk_0x7B5280EBA9840C72(&Global_4542214));
			unk_0x362E2D3FE93A9959();
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
		}
	}
}

void func_54(float fParam0)
{
	func_77(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 175, true), "CELL_ACCYC");
}

void func_55()
{
	func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
	func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
	func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
	unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_40);
	unk_0xC6796A8FFA375E53();
	func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_106 == 1)
	{
		func_57();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
		func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
		if (iLocal_82)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78319 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_77(iLocal_92, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 7f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					if (func_173())
					{
						func_52(6f);
						func_51(7f);
						func_77(iLocal_92, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (!func_160())
				{
					if (unk_0xA571D46727E2B718(2) || func_4())
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
				func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_77(iLocal_92, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
				if (func_173())
				{
					if (!func_160())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_30)
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
						}
						func_77(iLocal_92, "SET_DATA_SLOT", 9f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_160())
					{
						if (unk_0xA571D46727E2B718(2) || func_4())
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_173())
					{
						if (!func_160())
						{
							func_52(4f);
							func_51(5f);
							func_77(iLocal_92, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fLocal_40);
		unk_0xC6796A8FFA375E53();
		func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()
{
	func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
	func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
	func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
	unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_40);
	unk_0xC6796A8FFA375E53();
	func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()
{
	if (iLocal_82)
	{
		unk_0x6D0858B8EDFD2B7D(fLocal_36, 1f);
		unk_0xB4EC2312F4E5B1F1(fLocal_37);
	}
}

void func_59(bool bParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		unk_0x015C49A93E3E086E(bParam0);
	}
}

void func_60()
{
	if (iLocal_28 == 1)
	{
		if (unk_0x0C515FAB3FF9EA92(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
		{
			unk_0xA2CCBE62CD4C91A4(false);
			unk_0x375A706A5C2FD084(false);
		}
		else
		{
			unk_0xA2CCBE62CD4C91A4(true);
			unk_0x375A706A5C2FD084(true);
		}
	}
}

void func_61()
{
	func_164(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_173())
	{
		if (!Global_1941594)
		{
			unk_0x2C933ABF17A1DF41("phone_cam");
		}
	}
}

int func_62()
{
	if (func_63(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if ((unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[0 /*29*/] || unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[1 /*29*/]) || unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[2 /*29*/])
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
	return 1;
}

bool func_63(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_64(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_65()
{
	if (unk_0xA571D46727E2B718(2) || func_4())
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (unk_0xA571D46727E2B718(2))
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 30, true), "CELL_RT_RSTICK");
		func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 1, true), "CELL_RT_RSTICK");
		func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_66()
{
	if (unk_0xA571D46727E2B718(2) || func_4())
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_77(iLocal_92, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_63(14))
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_LT_LSTICKZ");
		func_77(iLocal_92, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_67()
{
	if (func_76())
	{
		return "FHHUD_SENDLES";
	}
	if (func_74())
	{
		return "CSH_PHONEC";
	}
	if (func_73(unk_0x4F8644AF03D0E0D6(), 275) && Global_1964888)
	{
		return "RE_SS_SNDOMG";
	}
	switch (func_72(unk_0x4F8644AF03D0E0D6()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO";
		
		default:
	}
	switch (func_68(unk_0x4F8644AF03D0E0D6()))
	{
		case 3:
			return "FXR_FRAN_PHTO";
		
		case 2:
			return "FXR_IMAN_PHTO";
		
		default:
	}
	return "CELL_287";
}

int func_68(bool bParam0)
{
	if (func_71(bParam0) == 264)
	{
		return func_69(bParam0);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_72(bool bParam0)
{
	if (func_71(bParam0) == 271)
	{
		return func_69(bParam0);
	}
	return -1;
}

int func_73(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1888817)
	{
		if (Global_1888817[iVar1] == iParam1)
		{
			if (Global_1888862[iVar0 /*120*/].f_77.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()
{
	switch (func_75(unk_0x4F8644AF03D0E0D6()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(bool bParam0)
{
	if (func_71(bParam0) == 256)
	{
		return func_69(bParam0);
	}
	return -1;
}

int func_76()
{
	switch (Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10.f_33)
	{
		case 233:
			switch (Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1973075)
	{
		return 1;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_78(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_64(sParam4);
	}
	unk_0xC6796A8FFA375E53();
}

void func_78(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

void func_79()
{
	if (Global_78319)
	{
		switch (Global_22722)
		{
			case 0:
				if (unk_0xA571D46727E2B718(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22722++;
				break;
			
			case 1:
				if (!unk_0x4D79439A6B55AC67())
				{
					if (unk_0xA571D46727E2B718(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22722++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22721)
		{
			case 0:
				if (unk_0xA571D46727E2B718(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22721++;
				break;
			
			case 1:
				if (!unk_0x4D79439A6B55AC67())
				{
					if (unk_0xA571D46727E2B718(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22721++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_80()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xA571D46727E2B718(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xF3A21BCD95725A4A(2, iVar10) && !unk_0xF3A21BCD95725A4A(2, iVar9))
	{
		unk_0xFE99B66D079CF6BC(0, 2, true);
		unk_0xFE99B66D079CF6BC(0, 1, true);
		bVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		bVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		bVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 1)) * 127;
		bVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (unk_0xA571D46727E2B718(2))
		{
			if (unk_0xF0D31AD191A74F87(bVar0) > 28 || unk_0xF0D31AD191A74F87(bVar1) > 28)
			{
				fVar6 = ((IntToFloat(bVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0xF0D31AD191A74F87(bVar2) > 28 || unk_0xF0D31AD191A74F87(bVar3) > 28)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_114);
		}
		if (unk_0xA571D46727E2B718(2))
		{
			fVar7 = unk_0x4F8A26A890FD62FB(0, 290);
			fVar8 = unk_0x4F8A26A890FD62FB(0, 291);
			if (unk_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xF0D31AD191A74F87(bVar0) > 28 || unk_0xF0D31AD191A74F87(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-bVar1) / 128f) * fLocal_114);
		}
		func_83(fVar5);
		func_82(fVar6);
		func_81(fVar4);
	}
	else if (!unk_0xF3A21BCD95725A4A(2, iVar9))
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
}

void func_81(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0xD6ADE981781FCA09(fLocal_111);
}

void func_82(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0xF1E22DC13F5EEBAD(fLocal_112);
}

void func_83(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x466DA42C89865553(fLocal_113);
}

void func_84()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0xA571D46727E2B718(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xF3A21BCD95725A4A(2, iVar10))
		{
			if (unk_0x580417101DDB492F(2, 178) && !func_160())
			{
				unk_0x53F4892D18EC90A4(0.5f);
				unk_0x3117D84EFA60F77B(0.85f);
				unk_0xAC2890471901861C(0.5f);
				unk_0x15E69E2802C24B8D(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xF3A21BCD95725A4A(2, iVar10) && !unk_0xF3A21BCD95725A4A(2, iVar11))
	{
		if (unk_0x580417101DDB492F(2, 178) && !func_160())
		{
			unk_0x53F4892D18EC90A4(0.5f);
			unk_0x3117D84EFA60F77B(0.85f);
			unk_0xAC2890471901861C(0.5f);
			unk_0x15E69E2802C24B8D(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0xFE99B66D079CF6BC(0, 2, true);
		unk_0xFE99B66D079CF6BC(0, 1, true);
		bVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		bVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		bVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 1)) * 127;
		bVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (unk_0xA571D46727E2B718(2))
		{
			bVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = unk_0x4F8A26A890FD62FB(0, 290);
			fVar9 = unk_0x4F8A26A890FD62FB(0, 291);
			if (unk_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xF0D31AD191A74F87(bVar2) > 15 || unk_0xF0D31AD191A74F87(bVar3) > 15)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-bVar3) / 128f) * fLocal_114);
		}
		if (unk_0xF0D31AD191A74F87(bVar0) > 28 || unk_0xF0D31AD191A74F87(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(bVar1) / 128f) * fLocal_114);
		}
		func_88(fVar6);
		func_87(fVar7);
		func_86(fVar4);
		if (!func_63(14))
		{
			func_85(fVar5);
		}
	}
	else if (!unk_0xE2587F8CBBD87B1D(2, iVar11))
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
	if (!unk_0xE2587F8CBBD87B1D(2, iVar10) && !unk_0xE2587F8CBBD87B1D(2, iVar11))
	{
		bVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		bVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		bVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 290)) * 127;
		bVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 291)) * 127;
		bVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 294)) * 127;
		bVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 295)) * 127;
		bVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 292)) * 127;
		bVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (unk_0xF0D31AD191A74F87(bVar2) > 28 || unk_0xF0D31AD191A74F87(bVar3) > 28)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-bVar3) / 128f) * fLocal_114);
		}
		if (unk_0xF0D31AD191A74F87(bVar0) > 28 || unk_0xF0D31AD191A74F87(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(bVar1) / 128f) * fLocal_114);
		}
		if (!func_63(14))
		{
			func_85(fVar5);
		}
	}
}

void func_85(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0xAC2890471901861C(fLocal_109);
}

void func_86(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x15E69E2802C24B8D(fLocal_110);
}

void func_87(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x3117D84EFA60F77B(fLocal_108);
}

void func_88(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0x53F4892D18EC90A4(fLocal_107);
}

void func_89()
{
	if (Global_78579 || Global_78580)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				unk_0x0DF606929C105BE1(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_20208)
		{
			if (Global_20464)
			{
				if (iLocal_100 == 0)
				{
					if (Global_20266.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_91(255, 255, 255, 255);
			func_90(0.059f, 0.644f, "CELL_284", 0);
			func_91(255, 255, 255, 255);
			func_90(0.165f, 0.644f, "CELL_285", 0);
			func_91(255, 255, 255, 255);
			func_90(0.275f, 0.75f, "CELL_280", 0);
			func_91(255, 255, 255, 255);
			func_90(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_20208)
	{
	}
	else
	{
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.75f, func_67(), 0);
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.79f, "CELL_286", 0);
		func_91(255, 255, 255, 255);
		func_90(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam3);
}

void func_91(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	unk_0x07C837F9A01C34C9(0.4f, 0.4f);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(1, 0, 0, 0, 205);
	unk_0x038C1F517D7FDCF8(true);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0xBE6B23FFA53FB442(iParam0, iParam1, iParam2, bParam3);
}

void func_92()
{
	unk_0x6D0858B8EDFD2B7D(fLocal_38, 1f);
	unk_0xB4EC2312F4E5B1F1(fLocal_39);
}

void func_93()
{
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0xFE99B66D079CF6BC(0, 44, true);
	unk_0xFE99B66D079CF6BC(0, 3, true);
	unk_0xFE99B66D079CF6BC(0, 4, true);
	unk_0xFE99B66D079CF6BC(0, 5, true);
	unk_0xFE99B66D079CF6BC(0, 6, true);
	unk_0xFE99B66D079CF6BC(0, 1, true);
	unk_0xFE99B66D079CF6BC(0, 2, true);
	unk_0xFE99B66D079CF6BC(0, 39, true);
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xFE99B66D079CF6BC(0, 56, true);
}

void func_94()
{
	Local_44 = { Global_20219[Global_20211 /*3*/] };
	if (Global_20208)
	{
		if (func_97())
		{
			unk_0x584FDFDA48805B86(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			Local_42.f_0 = (Local_42.f_0 + 12f);
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (BitTest(Global_8138, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (func_97() == 0)
		{
			if (BitTest(Global_8138, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.f_0 = (Local_44.f_0 - 14f);
		}
		else
		{
			Local_44 = { Global_20212[Global_20211 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x693A5C6D6734085B(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			unk_0xBB779C0CA917E865(Local_43, 0);
			if (!BitTest(Global_8136, 22))
			{
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_95();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_95()
{
	func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_286");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_277");
		func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_GALSAVE");
	}
	unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_40);
	unk_0xC6796A8FFA375E53();
	func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_96()
{
	func_164(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
		func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_286");
	}
	else
	{
		func_77(iLocal_92, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 179, true), func_67());
		func_77(iLocal_92, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_277");
		func_77(iLocal_92, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_GALSAVE");
	}
	unk_0xF6E48914C7A8694E(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_40);
	unk_0xC6796A8FFA375E53();
	func_164(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_63(14))
		{
			return 0;
		}
		if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x4F32C0D5A90A9B40())
			{
				if (unk_0xCFB0A0D8EDD145A3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()) || unk_0xC024869A53992F34(unk_0xD80958FC74E988A6())) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || (unk_0x1C86D8AEF8254B78(unk_0xD80958FC74E988A6()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x05095437424397FA() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if ((((((((unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar3)) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iVar3))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(iVar3))) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark")) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark2")) || unk_0x9F47B058362C84B5(iVar3) == joaat("rhino")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible2")) || unk_0x9F47B058362C84B5(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xEDE476E5EE29EDB1(0, Global_20236);
	Local_43 = { Global_20226 };
	Local_44 = { Global_20219[Global_20211 /*3*/] };
	if (func_97())
	{
		unk_0x1CEFB61F193070AE(&Local_45, 0);
		Local_43 = { Local_45 };
		unk_0x584FDFDA48805B86(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_20208)
	{
		func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_82 = 0;
		if (BitTest(Global_8136, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_99();
		}
		if (iLocal_72)
		{
			if (BitTest(Global_8136, 9))
			{
				Local_42.f_0 = (Local_42.f_0 + 2f);
			}
			else
			{
				Local_42.f_0 = (Local_42.f_0 + 12f);
			}
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.f_0 = (Local_41.f_0 + 1f);
			}
			if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
			{
				Local_41.f_0 = Local_43.f_0;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_97() == 0)
			{
				unk_0xBB779C0CA917E865(Local_41, 0);
				unk_0x693A5C6D6734085B(Local_42);
			}
			func_114(0, 1);
		}
		else if (func_97() == 0)
		{
			unk_0xBB779C0CA917E865(Local_41, 0);
			unk_0x693A5C6D6734085B(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_99();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 + 1f);
		}
		if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_99();
		}
	}
	unk_0xBB779C0CA917E865(Local_41, 0);
}

void func_99()
{
	func_1(0);
	if (func_97() == 0)
	{
		if (BitTest(Global_8136, 30))
		{
			unk_0x693A5C6D6734085B(Global_20212[Global_20211 /*3*/]);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_20219[Global_20211 /*3*/]);
		}
		Local_41 = { Local_43 };
		unk_0xBB779C0CA917E865(Local_41, 0);
	}
	Global_22638 = 0;
	func_121(0, 0);
	func_125(0);
	iLocal_66 = 0;
	func_116(1);
	Global_20253 = 1;
	Global_22641 = 0;
	if (Global_20266.f_1 > 4)
	{
		Global_20266.f_1 = 6;
		Global_20244 = 1;
		func_100();
	}
	if (unk_0x85F01B8D5B90570E(iLocal_91))
	{
		func_163(iLocal_91, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xEB2D525B57F42B40();
	unk_0x1D132D614DD86811(&iLocal_92);
	unk_0x1D132D614DD86811(&iLocal_91);
	if (Global_20466 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 17);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 17);
	}
	unk_0xE80492A9AC099A93(&Global_8136, 18);
	unk_0xE80492A9AC099A93(&Global_8136, 21);
	unk_0x50085246ABD3FEFA(0, true);
	unk_0xE80492A9AC099A93(&Global_8138, 3);
	unk_0xE80492A9AC099A93(&Global_4541229, 3);
	unk_0x577D1284D6873711(false);
	unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
	unk_0x450930E616475D0D(15);
	Global_22642 = 1;
	unk_0xA3B0C41BA5CC0BB5(iLocal_63);
	unk_0x353FC880830B88FA(iLocal_63);
	unk_0x10D373323E5B9C0D();
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
		unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
	}
	func_116(1);
	unk_0xA2CCBE62CD4C91A4(false);
	unk_0x375A706A5C2FD084(false);
	unk_0x1B0B4AEED5B9B41C(1f);
	if (Global_4539954 > 0 && Global_4539954 < 13)
	{
		unk_0xBE2CACCF5A8AA805(sLocal_20[Global_4539954]);
	}
	func_114(0, 1);
	if (func_171(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0x1090044AD1DA76FA();
}

void func_100()
{
	char cVar0[24];
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!unk_0x85F01B8D5B90570E(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_8741);
			if (Global_8741 == 1)
			{
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_105();
				unk_0xE80492A9AC099A93(&Global_8138, 9);
				func_164(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_107(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_104();
				func_164(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(false);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_21620);
					unk_0x362E2D3FE93A9959();
					func_64("CELL_300");
					func_64("CELL_217");
					func_64("CELL_217");
					unk_0xC6796A8FFA375E53();
				}
				else if (func_103(Global_7451, Global_20266) == 0)
				{
					func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_164(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_104();
				if (Global_21618)
				{
					unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(false);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_21620);
					unk_0x362E2D3FE93A9959();
					func_64("CELL_300");
					func_64("CELL_219");
					func_64("CELL_219");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_103(Global_7451, Global_20266) == 0)
					{
						func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_164(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(false), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_164(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_101();
			break;
		
		default:
			break;
	}
}

void func_101()
{
	if (unk_0x85F01B8D5B90570E(Global_20247))
	{
		func_102();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_8136, 17);
		}
		else
		{
			func_107(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_107(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_102()
{
	if (Global_78319)
	{
		func_107(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xE80492A9AC099A93(&Global_8136, 17);
	}
}

int func_103(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_104()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_105()
{
	if (Global_78319)
	{
		if (func_106() == 0)
		{
			return;
		}
		func_107(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x933D6A9EEC1BACD0(&Global_8136, 17);
	}
}

int func_106()
{
	return 0;
}

void func_107(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_64(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_64(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_64(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_64(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_64(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	bVar0 = false;
	while (bVar0 < 9)
	{
		Global_8705[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 9)
	{
		iVar1 = 0;
		if (func_63(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[bVar0] == 0)
						{
							Global_8669[bVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									bVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									bVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar2);
								unk_0xC6796A8FFA375E53();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[bVar0] == 0)
						{
							Global_8669[bVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									bVar4 = false;
									bVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													bVar4++;
												}
											}
										}
										iVar5++;
									}
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											bVar6 = Global_44249;
											break;
										
										case 1:
											bVar6 = Global_44250;
											break;
										
										case 2:
											bVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_8142);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									bVar7 = 42;
								}
								else
								{
									bVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									bVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									bVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else if ((iVar1 == 23 && unk_0x0C515FAB3FF9EA92(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_64(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								bVar9 = false;
								bVar9 = Global_1888478.f_1;
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_107(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(false), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_109()
{
	switch (iLocal_51)
	{
		case 1:
			unk_0x50085246ABD3FEFA(0, true);
			if (BitTest(Global_8136, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_56();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_30();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8136, 22))
			{
				unk_0x50085246ABD3FEFA(0, true);
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_95();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		if (!func_123())
		{
			unk_0x933D6A9EEC1BACD0(&Global_1958711, 17);
		}
	}
	else if (func_123())
	{
		unk_0xE80492A9AC099A93(&Global_1958711, 17);
	}
}

int func_111(int iParam0, int iParam1, int iParam2)
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

void func_112(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			unk_0x933D6A9EEC1BACD0(&Global_1958711, 18);
		}
	}
	else if (func_113())
	{
		unk_0xE80492A9AC099A93(&Global_1958711, 18);
	}
}

bool func_113()
{
	return BitTest(Global_1958711, 18);
}

void func_114(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_115(0))
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

int func_115(int iParam0)
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

void func_116(int iParam0)
{
	if ((Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0) && !Global_1941594)
	{
		if (func_117(unk_0x4F8644AF03D0E0D6()) && iParam0)
		{
			Global_1973148 = 1;
		}
		else
		{
			unk_0x0F07E7745A236711();
		}
	}
}

int func_117(bool bParam0)
{
	if (bParam0 != func_120())
	{
		if (func_119(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_118(Global_2689235[bParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
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

int func_120()
{
	return -1;
}

void func_121(bool bParam0, bool bParam1)
{
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		unk_0xFDE8F069C542D126(bParam0, bParam1);
	}
}

int func_122()
{
	if (BitTest(Global_8136, 15))
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return BitTest(Global_1958711, 17);
}

void func_124()
{
	if (Global_20208)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_97())
		{
			unk_0x1CEFB61F193070AE(&Local_45, 0);
			Local_43 = { Local_45 };
			unk_0x584FDFDA48805B86(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.f_0 = (Local_42.f_0 - 14f);
			}
			if (Local_42.f_0 < Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			Local_41.f_0 = Local_43.f_0;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (func_97() == 0)
		{
			unk_0xBB779C0CA917E865(Local_41, 0);
			unk_0x693A5C6D6734085B(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		unk_0xBB779C0CA917E865(Local_41, 0);
	}
	if (Global_20208)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_97())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				unk_0xBB779C0CA917E865(Local_41, 0);
				Local_42 = { Local_44 };
				unk_0x693A5C6D6734085B(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22639 = 0;
				func_121(1, 1);
				iLocal_66 = 1;
				func_125(1);
				func_61();
				func_126();
				func_59(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_143();
				func_164(iLocal_91, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(bLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4541229, 2))
				{
					func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
				func_166();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		unk_0xBB779C0CA917E865(Local_41, 0);
		Global_22639 = 0;
	}
}

void func_125(bool bParam0)
{
	if (func_173())
	{
		if (bParam0)
		{
			if (!unk_0xBCEDB009461DA156())
			{
				unk_0x7AC24EAB6D74118D(true);
				if (Global_4539954 > 0 && Global_4539954 < 99)
				{
					unk_0x27FEB5254759CDE3(sLocal_20[Global_4539954], false);
					unk_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (unk_0xBCEDB009461DA156())
		{
			unk_0x7AC24EAB6D74118D(false);
		}
	}
}

void func_126()
{
	if (Global_4539953 > 0 && Global_4539953 < 99)
	{
		if (!Global_1941594)
		{
			unk_0x2C933ABF17A1DF41(sLocal_19[Global_4539953]);
		}
	}
}

void func_127()
{
	if (Global_20208)
	{
		iLocal_76 = 0;
		func_61();
		func_114(1, 1);
		func_121(1, 1);
		iLocal_66 = 1;
		Global_22642 = 1;
	}
}

void func_128()
{
	if (Global_4718592.f_163006 == 1 && func_129())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (BitTest(Global_8136, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_30();
		}
		if (unk_0x0C515FAB3FF9EA92(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_129()
{
	if ((((((func_138() || func_137()) || func_136()) || func_135()) || func_134()) || func_132()) || func_130())
	{
		return 1;
	}
	if (unk_0x05095437424397FA() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	return func_131(Global_4718592.f_116524);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_132()
{
	return func_133(Global_4718592.f_116524);
}

int func_133(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_134()
{
	return Global_2714762.f_24;
}

var func_135()
{
	return Global_2714762.f_21;
}

var func_136()
{
	return Global_2714762.f_19;
}

var func_137()
{
	return Global_2714762.f_18;
}

var func_138()
{
	return Global_2714762.f_17;
}

void func_139()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_20255, true);
	}
}

void func_140()
{
	unk_0x1072F115DAB0717E(false, false);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_141()
{
	func_142();
}

void func_142()
{
	if (iLocal_101)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_143()
{
	if (Global_20266.f_1 > 3)
	{
		if (!unk_0xB0034A223497FFCB())
		{
			unk_0x54972ADAF0294A93(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_144()
{
	if (func_63(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_13();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_145(int iParam0)
{
	if (func_147())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_160())
		{
			func_114(1, 1);
		}
		else
		{
			func_114(0, 0);
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
	if (!func_146())
	{
		Global_20266.f_1 = 3;
	}
}

int func_146()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return BitTest(Global_1958711, 19);
}

void func_148()
{
	unk_0xFE99B66D079CF6BC(0, 0, true);
	unk_0xFE99B66D079CF6BC(0, 56, true);
	if (iLocal_100 == 0)
	{
		unk_0xEDE476E5EE29EDB1(0, Global_20239);
		unk_0xEDE476E5EE29EDB1(0, Global_20236);
		unk_0xFE99B66D079CF6BC(0, 278, true);
		unk_0xFE99B66D079CF6BC(0, 279, true);
		unk_0xFE99B66D079CF6BC(0, 280, true);
		unk_0xFE99B66D079CF6BC(0, 281, true);
		unk_0xFE99B66D079CF6BC(0, 282, true);
		unk_0xFE99B66D079CF6BC(0, 282, true);
		unk_0xFE99B66D079CF6BC(0, 284, true);
		unk_0xFE99B66D079CF6BC(0, 285, true);
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 114, true);
		unk_0xFE99B66D079CF6BC(0, 71, true);
		unk_0xFE99B66D079CF6BC(0, 72, true);
		unk_0xFE99B66D079CF6BC(0, 74, true);
		unk_0xFE99B66D079CF6BC(0, 75, true);
		unk_0xFE99B66D079CF6BC(0, 76, true);
		unk_0xFE99B66D079CF6BC(0, 73, true);
		unk_0xFE99B66D079CF6BC(0, 77, true);
		unk_0xFE99B66D079CF6BC(0, 78, true);
		unk_0xFE99B66D079CF6BC(0, 286, true);
		unk_0xFE99B66D079CF6BC(0, 287, true);
		unk_0xFE99B66D079CF6BC(0, 79, true);
		unk_0xFE99B66D079CF6BC(0, 80, true);
		unk_0xFE99B66D079CF6BC(0, 81, true);
		unk_0xFE99B66D079CF6BC(0, 82, true);
		unk_0xFE99B66D079CF6BC(0, 86, true);
		unk_0xFE99B66D079CF6BC(0, 59, true);
		unk_0xFE99B66D079CF6BC(0, 60, true);
		unk_0xFE99B66D079CF6BC(0, 61, true);
		unk_0xFE99B66D079CF6BC(0, 62, true);
		unk_0xFE99B66D079CF6BC(0, 63, true);
		unk_0xFE99B66D079CF6BC(0, 64, true);
		unk_0xFE99B66D079CF6BC(0, 87, true);
		unk_0xFE99B66D079CF6BC(0, 88, true);
		unk_0xFE99B66D079CF6BC(0, 89, true);
		unk_0xFE99B66D079CF6BC(0, 90, true);
		unk_0xFE99B66D079CF6BC(0, 107, true);
		unk_0xFE99B66D079CF6BC(0, 108, true);
		unk_0xFE99B66D079CF6BC(0, 109, true);
		unk_0xFE99B66D079CF6BC(0, 110, true);
		unk_0xFE99B66D079CF6BC(0, 111, true);
		unk_0xFE99B66D079CF6BC(0, 112, true);
		unk_0xFE99B66D079CF6BC(0, 113, true);
		unk_0xFE99B66D079CF6BC(0, 114, true);
		unk_0xFE99B66D079CF6BC(0, 91, true);
		unk_0xFE99B66D079CF6BC(0, 92, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
		unk_0xFE99B66D079CF6BC(0, 102, true);
		unk_0xFE99B66D079CF6BC(0, 136, true);
		unk_0xFE99B66D079CF6BC(0, 137, true);
		unk_0xFE99B66D079CF6BC(0, 138, true);
		unk_0xFE99B66D079CF6BC(0, 139, true);
		unk_0xFE99B66D079CF6BC(0, 102, true);
	}
}

int func_149()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x22AC59A870E6A669(iVar0, -1, false))
			{
				return 1;
			}
			else if (!unk_0xBB40DD2270B65366(iVar0, -1, false) == unk_0xD80958FC74E988A6())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_157())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_156())
	{
		return 1;
	}
	if (func_155(159))
	{
		if (!func_154())
		{
			return 1;
		}
	}
	if (func_155(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_151() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_151()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	switch (func_153())
	{
		case 0:
			return func_152();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_152()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_153()
{
	return Global_31959;
}

bool func_154()
{
	return Global_2714762.f_698;
}

int func_155(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_156()
{
	return Global_2725403;
}

bool func_157()
{
	return Global_2714762.f_693;
}

void func_158()
{
	if (iLocal_106 == 1)
	{
		unk_0x6806C51AD12B83B8(7);
		unk_0x6806C51AD12B83B8(1);
		unk_0x6806C51AD12B83B8(3);
		unk_0x6806C51AD12B83B8(4);
		unk_0x6806C51AD12B83B8(6);
		unk_0x6806C51AD12B83B8(8);
		unk_0x6806C51AD12B83B8(9);
		unk_0x6806C51AD12B83B8(2);
	}
	else
	{
		unk_0x719FF505F097FD20();
	}
}

void func_159(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_160()
{
	return BitTest(Global_1958711, 5);
}

void func_161()
{
	if (func_162())
	{
		unk_0x4AF92ACD3141D96C();
		if (unk_0x2A893980E96B659A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
			unk_0x10D373323E5B9C0D();
		}
	}
	else
	{
		bLocal_60 = false;
		bLocal_61 = false;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0x85F01B8D5B90570E(iLocal_91))
				{
					if (func_173())
					{
						if (Global_4539954 == 0)
						{
							if (!BitTest(Global_4541229, 2))
							{
								func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4541229, 2))
						{
							func_164(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x85F01B8D5B90570E(iLocal_91))
			{
				func_164(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(iLocal_91, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(bLocal_60), unk_0xBBDA792448DB5A89(bLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0x10D373323E5B9C0D();
	}
}

int func_162()
{
	if (Global_4718592.f_163006 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (Global_4718592.f_163007 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (unk_0xF6201B4DAF662A9D() || unk_0xCCA1072C29D096C2())
	{
		if (BitTest(Global_8137, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_163(int iParam0, char* sParam1)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC6796A8FFA375E53();
}

void func_164(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_165()
{
	if (Global_78319)
	{
		Global_20266 = 3;
	}
	else
	{
		Global_20266 = func_13();
	}
	if (Global_20266 > 3)
	{
		Global_20266 = 3;
	}
	return Global_113386.f_14051[Global_20266 /*20*/].f_7;
}

void func_166()
{
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	Global_22641 = 0;
	iLocal_78 = 0;
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		Local_34 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (Global_20208)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_88)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_143();
			func_93();
			unk_0xEB2D525B57F42B40();
		}
		func_163(iLocal_91, "OPEN_SHUTTER");
		func_158();
		func_128();
		iLocal_80 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_121(1, 1);
		func_125(1);
		func_61();
		func_126();
		func_59(0);
		iLocal_66 = 1;
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 15);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 15);
	}
}

bool func_168(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

bool func_169(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x997ABD671D25CA0B(iParam0, bParam1))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, bParam1);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				iVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(iVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!unk_0x22AC59A870E6A669(iVar0, bVar3, false))
					{
						if (unk_0xBB40DD2270B65366(iVar0, bVar3, false) == iParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

void func_170()
{
}

int func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_172()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x7C2AC9CA66575FBF(unk_0xD80958FC74E988A6()))
		{
			unk_0x88CBB5CEB96B7BD2(unk_0xD80958FC74E988A6(), false, 0);
			unk_0x53F4892D18EC90A4(fLocal_107);
			unk_0x3117D84EFA60F77B(fLocal_108);
			unk_0xAC2890471901861C(fLocal_109);
		}
		else
		{
			unk_0x53F4892D18EC90A4(fLocal_107);
			unk_0x3117D84EFA60F77B(fLocal_108);
			unk_0xAC2890471901861C(fLocal_109);
		}
	}
	unk_0x15E69E2802C24B8D(fLocal_110);
	unk_0xD6ADE981781FCA09(fLocal_111);
	unk_0xF1E22DC13F5EEBAD(fLocal_112);
	unk_0x466DA42C89865553(fLocal_113);
	func_58();
}

int func_173()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

