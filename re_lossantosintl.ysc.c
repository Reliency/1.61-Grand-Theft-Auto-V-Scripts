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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	bool bLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	bool bLocal_52 = 0;
	struct<3> Local_53[4];
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
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
	bLocal_56 = true;
	bLocal_62 = joaat("s_m_m_pilot_01");
	bLocal_77 = 500;
	if (unk_0xC968670BFACE42D9(3))
	{
		func_12();
	}
	bLocal_75 = unk_0xD80958FC74E988A6();
	while (true)
	{
		if (unk_0x5F9532F3B5CC2551(bLocal_75, false))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_97369)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		unk_0x4EDE34FBADD967A6(bLocal_77);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7239B21A38F536BA(iLocal_49[iVar0]))
		{
			if (unk_0xE31C2C72B8692B64(iLocal_49[iVar0]) || (!unk_0x5F9532F3B5CC2551(iLocal_49[iVar0], false) && !unk_0x47D6F43D77935C75(iLocal_49[iVar0])))
			{
				unk_0xEA386986E786A54F(&(iLocal_49[iVar0]));
				unk_0x9614299DCB53E54B(&(iLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_51[iVar0]));
				unk_0x629BFA74418D6239(&(iLocal_49[iVar0]));
				unk_0x2595DD4236549CE3(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x7239B21A38F536BA(bLocal_50))
	{
		if (unk_0xE31C2C72B8692B64(bLocal_50))
		{
			unk_0xEA386986E786A54F(&bLocal_50);
			unk_0x9614299DCB53E54B(&bLocal_52);
		}
		else
		{
			func_2(&bLocal_50, &bLocal_52);
			unk_0x629BFA74418D6239(&bLocal_50);
			unk_0x2595DD4236549CE3(&bLocal_52);
		}
	}
	if (bLocal_60)
	{
		unk_0xF1160ACCF98A3FC8(101, "AirportJetTakeOff");
		unk_0xF1160ACCF98A3FC8(102, "AirportJetTakeOff");
		unk_0xF1160ACCF98A3FC8(101, "AirportNew");
		unk_0xF1160ACCF98A3FC8(102, "AirportNew");
		unk_0xF1160ACCF98A3FC8(103, "AirplaneLandingRedux");
		unk_0xF1160ACCF98A3FC8(104, "AirplaneLandingRedux");
		unk_0xF1160ACCF98A3FC8(101, "EastWestFlight");
	}
}

void func_2(bool bParam0, var uParam1)
{
	if (((unk_0x7239B21A38F536BA(*bParam0) && unk_0x7239B21A38F536BA(*uParam1)) && !unk_0x5F9532F3B5CC2551(*bParam0, false)) && !unk_0x5F9532F3B5CC2551(*uParam1, false))
	{
		if (unk_0x886E37EC497200B6(*bParam0))
		{
			if (unk_0x1C8A4C2C19E68EEC(*bParam0))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					unk_0x23703CD154E83B88(*uParam1, *bParam0, false, false, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_56)
	{
		if (unk_0x7239B21A38F536BA(iLocal_49[0]) && !unk_0x5F9532F3B5CC2551(iLocal_49[0], false))
		{
			if (unk_0x886E37EC497200B6(iLocal_49[0]))
			{
				if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[0]))
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_51[0], false)) && !unk_0x5F9532F3B5CC2551(iLocal_49[0], false))
					{
						unk_0x23703CD154E83B88(iLocal_51[0], iLocal_49[0], false, false, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_51[0], false)) && !unk_0x5F9532F3B5CC2551(iLocal_49[0], false))
					{
						unk_0x23703CD154E83B88(iLocal_51[0], iLocal_49[0], false, false, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_49[2]) && !unk_0x5F9532F3B5CC2551(iLocal_49[2], false))
		{
			if (unk_0x886E37EC497200B6(iLocal_49[2]))
			{
				if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[2]))
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_51[2], false)) && !unk_0x5F9532F3B5CC2551(iLocal_49[2], false))
					{
						unk_0x23703CD154E83B88(iLocal_51[2], iLocal_49[2], false, false, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_51[2], false)) && !unk_0x5F9532F3B5CC2551(iLocal_49[2], false))
					{
						unk_0x23703CD154E83B88(iLocal_51[2], iLocal_49[2], false, false, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			Local_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			unk_0x963D27A58DF860AC(joaat("jet"));
			unk_0x963D27A58DF860AC(bLocal_62);
			unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
			unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
			unk_0xAF514CABE74CBF15(101, "EastWestFlight");
			unk_0xAF514CABE74CBF15(101, "AirportNew");
			unk_0xAF514CABE74CBF15(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((unk_0x98A4EB5D89A0C952(joaat("jet")) && unk_0x98A4EB5D89A0C952(bLocal_62)) && unk_0x300D614A4C785FC4(101, "AirportJetTakeOff")) && unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux")) && unk_0x300D614A4C785FC4(101, "AirportNew")) && unk_0x300D614A4C785FC4(104, "AirplaneLandingRedux")) && unk_0x300D614A4C785FC4(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					unk_0x963D27A58DF860AC(joaat("jet"));
					unk_0x963D27A58DF860AC(bLocal_62);
					unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
					unk_0xAF514CABE74CBF15(102, "AirportJetTakeOff");
					unk_0xAF514CABE74CBF15(101, "AirportNew");
					unk_0xAF514CABE74CBF15(102, "AirportNew");
					unk_0xAF514CABE74CBF15(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!unk_0xE33D59DA70B58FDF(Local_53[0 /*3*/], 50f) && !unk_0xE33D59DA70B58FDF(Local_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (unk_0xE33D59DA70B58FDF(Local_53[0 /*3*/], 50f))
					{
					}
					if (unk_0xE33D59DA70B58FDF(Local_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_53[0 /*3*/], false, true, true, false);
			unk_0x8E2530AA8ADA980E(iLocal_49[0], 240.3179f);
			unk_0x279D50DE5652D935(iLocal_49[0], false);
			iLocal_49[1] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_53[1 /*3*/], false, true, true, false);
			unk_0x279D50DE5652D935(iLocal_49[1], false);
			iLocal_49[2] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_53[2 /*3*/], false, true, true, false);
			unk_0x279D50DE5652D935(iLocal_49[2], false);
			iLocal_49[3] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_53[3 /*3*/], false, true, true, false);
			unk_0x279D50DE5652D935(iLocal_49[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0x7239B21A38F536BA(iLocal_49[iVar0]))
				{
					iLocal_51[iVar0] = unk_0x7DD959874C1FD534(iLocal_49[iVar0], 4, bLocal_62, -1, true, true);
					unk_0x5927F96A78577363(iLocal_49[iVar0], 1000);
					unk_0x2497C4717C8B881E(iLocal_49[iVar0], true, true, false);
					unk_0x9F8AA94D6D97DBF4(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_51[1]));
			func_8(&(iLocal_49[2]), &(iLocal_51[2]));
			func_8(&(iLocal_49[3]), &(iLocal_51[3]));
			if (bLocal_56)
			{
				if (unk_0x7239B21A38F536BA(iLocal_49[0]))
				{
					if (unk_0x300D614A4C785FC4(101, "AirportJetTakeOff"))
					{
						unk_0x7D80FD645D4DA346(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (unk_0x7239B21A38F536BA(iLocal_49[3]) && !unk_0x5F9532F3B5CC2551(iLocal_49[3], false))
				{
					if (unk_0xE31C2C72B8692B64(iLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(iLocal_49[3]), &(iLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (unk_0x7239B21A38F536BA(iLocal_49[0]) && !unk_0x5F9532F3B5CC2551(iLocal_49[0], false))
							{
								if (unk_0xE31C2C72B8692B64(iLocal_49[0]) && !unk_0xE33D59DA70B58FDF(Local_53[0 /*3*/], 50f))
								{
									if (unk_0x300D614A4C785FC4(101, "AirportJetTakeOff"))
									{
										unk_0x7D80FD645D4DA346(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (unk_0x7239B21A38F536BA(iLocal_49[0]) && !unk_0x5F9532F3B5CC2551(iLocal_49[0], false))
						{
							if (unk_0x1C8A4C2C19E68EEC(iLocal_49[0]))
							{
								fLocal_63 = unk_0x2DACD605FC681475(iLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x7239B21A38F536BA(iLocal_49[1]) && !unk_0x5F9532F3B5CC2551(iLocal_49[1], false))
					{
						if (bLocal_56)
						{
							if (unk_0xE31C2C72B8692B64(iLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(iLocal_49[1]), &(iLocal_51[1]));
										if (unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux"))
										{
											unk_0x7D80FD645D4DA346(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_51[1]));
									if (unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux"))
									{
										unk_0x7D80FD645D4DA346(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x7239B21A38F536BA(iLocal_49[1]) && !unk_0x5F9532F3B5CC2551(iLocal_49[1], false))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0x7239B21A38F536BA(iLocal_49[2]) && !unk_0x5F9532F3B5CC2551(iLocal_49[2], false))
					{
						if (unk_0x300D614A4C785FC4(101, "AirportNew"))
						{
							if (!unk_0xE33D59DA70B58FDF(Local_53[2 /*3*/], 50f))
							{
								if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_51[2]));
									unk_0x3F878F92B3A7A071(iLocal_49[2], 101, "AirportNew", true);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0x7239B21A38F536BA(iLocal_49[2]) && !unk_0x5F9532F3B5CC2551(iLocal_49[2], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_49[2]))
						{
							fLocal_64 = unk_0x2DACD605FC681475(iLocal_49[2]);
						}
					}
					if (unk_0x7239B21A38F536BA(iLocal_49[1]) && !unk_0x5F9532F3B5CC2551(iLocal_49[1], false))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[1]))
						{
							if (unk_0xE31C2C72B8692B64(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (unk_0x7239B21A38F536BA(iLocal_49[3]) && !unk_0x5F9532F3B5CC2551(iLocal_49[3], false))
						{
							if (unk_0x300D614A4C785FC4(104, "AirplaneLandingRedux"))
							{
								if (!unk_0xE33D59DA70B58FDF(Local_53[3 /*3*/], 50f))
								{
									if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[3]) && iLocal_58)
									{
										func_6(&(iLocal_49[3]), &(iLocal_51[3]));
										unk_0x3F878F92B3A7A071(iLocal_49[3], 104, "AirplaneLandingRedux", true);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x7239B21A38F536BA(iLocal_49[3]) && !unk_0x5F9532F3B5CC2551(iLocal_49[3], false))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0xEA1C610A04DB6BBB(*uParam0, true, false);
	unk_0xEA1C610A04DB6BBB(*uParam1, true, false);
	unk_0x1A9205C1B9EE827F(*uParam0, true, false);
	unk_0x428CA6DBD1094446(*uParam0, false);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!unk_0x7239B21A38F536BA(bLocal_50))
			{
				bLocal_50 = unk_0xAF35D0D2583051B0(joaat("jet"), -65.3177f, 15.4603f, 703.106f, false, true, true, false);
				unk_0x5927F96A78577363(bLocal_50, 1000);
				unk_0x2497C4717C8B881E(bLocal_50, true, true, false);
				unk_0x279D50DE5652D935(bLocal_50, false);
				bLocal_52 = unk_0x7DD959874C1FD534(bLocal_50, 4, bLocal_62, -1, true, true);
				unk_0x9F8AA94D6D97DBF4(bLocal_52, true);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(bLocal_50) && !unk_0x5F9532F3B5CC2551(bLocal_50, false))
			{
				if (unk_0x300D614A4C785FC4(101, "EastWestFlight"))
				{
					if (!unk_0x1C8A4C2C19E68EEC(bLocal_50))
					{
						unk_0x7D80FD645D4DA346(bLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			if (unk_0x7239B21A38F536BA(bLocal_50) && !unk_0x5F9532F3B5CC2551(bLocal_50, false))
			{
				if (!unk_0x1C8A4C2C19E68EEC(bLocal_50))
				{
					if ((unk_0xE31C2C72B8692B64(bLocal_50) && !unk_0xE33D59DA70B58FDF(-1602.086f, -2674.039f, 12.9444f, 50f)) && unk_0xB7A628320EFF8E47(Var0, unk_0x3FEF770D40960D5A(bLocal_50, true)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0xEA1C610A04DB6BBB(*uParam0, false, false);
	unk_0xEA1C610A04DB6BBB(*uParam1, false, false);
	unk_0x1A9205C1B9EE827F(*uParam0, false, false);
	unk_0x428CA6DBD1094446(*uParam0, true);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0x1090044AD1DA76FA();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	
	if (unk_0x7239B21A38F536BA(bLocal_67))
	{
		if (unk_0xE31C2C72B8692B64(bLocal_67))
		{
			unk_0xEA386986E786A54F(&bLocal_67);
		}
		else if (!unk_0x5F9532F3B5CC2551(bLocal_67, false) && !unk_0x84A2DD9AC37C35C1(bLocal_68))
		{
			unk_0x54833611C17ABDEA(bLocal_67);
			unk_0x971D38760FBC02EF(bLocal_68, true);
			Var0 = { unk_0x3FEF770D40960D5A(bLocal_67, true) };
			bVar3 = unk_0xE83D4F9BA2A38914(bLocal_67);
			Var1 = { 0f, 500f, 50f };
			Var2 = { unk_0x163E252DE035A133(Var0, bVar3, Var1) };
			unk_0xDAD029E187A2BEB4(bLocal_68, bLocal_67, false, false, Var2, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_73)
	{
		unk_0xF1160ACCF98A3FC8(102, "HelicopterTakeOff");
	}
}

