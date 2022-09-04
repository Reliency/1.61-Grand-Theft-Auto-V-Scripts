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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	struct<3> Local_47 = { 0, 0, 0 } ;
	float fLocal_48 = 0f;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
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
	var uLocal_112 = 0;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	Local_43 = { 409.1539f, -1626.677f, 28.2928f };
	Local_45 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_46 = 202.6928f;
	Local_47 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_48 = 85.7173f;
	if (unk_0xC968670BFACE42D9(18))
	{
		func_32();
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6());
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			Local_44 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
		if (unk_0xB7A628320EFF8E47(Local_44, Local_43) > fLocal_42)
		{
			func_32();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0xD3BD40951412FEF6("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0xD3BD40951412FEF6("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x963D27A58DF860AC(joaat("prop_phone_ing"));
				if (((unk_0x98A4EB5D89A0C952(joaat("prop_phone_ing")) && unk_0xD031A9162D01088C("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xD031A9162D01088C("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xD031A9162D01088C("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_32();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (!unk_0x5F9532F3B5CC2551(iLocal_38, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(iLocal_38, true) };
	}
	else
	{
		Var1 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var1) > 10000f || unk_0x5F9532F3B5CC2551(iLocal_38, false)) || func_27())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x7239B21A38F536BA(iLocal_38) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
			{
				if (unk_0x20B60995556D004F(iLocal_38, Local_49, 1f, 1f, 1f, false, true, 0))
				{
					unk_0x3841422E9C488D8C(&iVar3);
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0x93B93A37987F1F3D(0, fLocal_50, 0);
					unk_0xEA47FE3719165B94(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0f, false, false, false);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(iLocal_38, iVar3);
					unk_0x3841422E9C488D8C(&iVar3);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(iLocal_38) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
			{
				if (unk_0x00A9010CFE1E3533(iLocal_38) == 1)
				{
					if (!unk_0x7239B21A38F536BA(iLocal_39))
					{
						if (unk_0x1F0B79228E461EC9(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar4 = unk_0x346D81500D088F42(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar4 >= 0.157f)
							{
								iLocal_39 = unk_0x509D5878EB39E842(joaat("prop_phone_ing"), 1f, 1f, 1f, true, true, false);
								unk_0x6B9BBD38AB0796DF(iLocal_39, iLocal_38, unk_0x3F428D08BE5AAE31(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							}
						}
					}
				}
				else if (unk_0x00A9010CFE1E3533(iLocal_38) == 2)
				{
					iVar2 = (unk_0xD53343AA4FB7DD28(0, 65535) % 2);
					if (iVar2 == 0)
					{
						if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(iLocal_38, false))
			{
				if (!func_3())
				{
					unk_0x3841422E9C488D8C(&iVar3);
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0xEA47FE3719165B94(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING", -1, true);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(iLocal_38, iVar3);
					unk_0x3841422E9C488D8C(&iVar3);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var1) < 25f)
			{
				if (unk_0xEE778F8C7E1142E2(0) != 4)
				{
					if (func_4(&uLocal_53, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0x7239B21A38F536BA(iLocal_38) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
	{
		if (unk_0x00A9010CFE1E3533(iLocal_38) == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_39))
			{
				unk_0x539E0AE3E6634B9F(&iLocal_39);
				unk_0x69F4BE8C8CC4796C(iLocal_38, unk_0xD80958FC74E988A6(), -1, 0, 2);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_38) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
	{
		if (unk_0x7239B21A38F536BA(iLocal_39))
		{
			if (unk_0x77F1BEB8863288D5(iLocal_38, 993674639) == 1)
			{
				unk_0x539E0AE3E6634B9F(&iLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_23();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xE80492A9AC099A93(&Global_8136, 20);
			unk_0xE80492A9AC099A93(&Global_8137, 17);
			unk_0xE80492A9AC099A93(&Global_8138, false);
			if (bParam2)
			{
				func_15();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_14())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6(), 0))
					{
						return 0;
					}
				}
			}
			if (func_13())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_12();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_11();
		func_6();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_7()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x05095437424397FA())
	{
		return 0;
	}
	return 1;
}

bool func_8(bool bParam0)
{
	return func_9(bParam0, 20);
}

var func_9(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_21605 = 1;
}

void func_12()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xE80492A9AC099A93(&Global_8137, 16);
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_15()
{
	if (func_22(14))
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
		Global_20266 = func_16();
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

var func_16()
{
	func_17();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_20(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_19(unk_0xD80958FC74E988A6());
			if (func_18(iVar0) && (!func_22(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_18(Global_113386.f_2363.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_25()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_27()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
	{
		if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_38) || unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x7239B21A38F536BA(iLocal_39))
			{
				unk_0x961AC54BF0613F5D(iLocal_39, true, true);
			}
			unk_0xD79DEEFB53455EBA(false);
			if (unk_0x77F1BEB8863288D5(iLocal_38, 1805844857) != 1)
			{
				unk_0x971D38760FBC02EF(iLocal_38, true);
				unk_0x22B0D0E37CCB840D(iLocal_38, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				return 1;
			}
		}
	}
	return 0;
}

int func_28()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	unk_0xC33AB876A77F8164(Var0, fLocal_41, true, true, &iVar1, false, true, -1);
	if (unk_0x7239B21A38F536BA(iVar1) && !unk_0x5F9532F3B5CC2551(iVar1, false))
	{
		iVar2 = unk_0x9F47B058362C84B5(iVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			iLocal_38 = iVar1;
			unk_0xAD738C3085FE7E11(iLocal_38, true, false);
			unk_0xA9C8960E8684C1B5(iLocal_38, 0);
			unk_0x63F58F7C80513AAD(iLocal_38, false);
			unk_0x98EFA132A4117BE1(iLocal_38, "TONYA");
			unk_0xC80A74AC829DDD92(iLocal_38, joaat("player"));
			func_31(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(Local_49))
			{
				if (unk_0x77F1BEB8863288D5(iLocal_38, 713668775) != 1)
				{
					unk_0x15D3A79D4E44B913(iLocal_38, Local_49, 1f, -1, 0.25f, false, fLocal_50);
					unk_0x971D38760FBC02EF(iLocal_38, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(iLocal_38) && !unk_0x5F9532F3B5CC2551(iLocal_38, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iLocal_38, true) };
		if (func_29(Local_49))
		{
			fLocal_51 = unk_0x2A488C176D52CCA5(Var0, Local_45);
			fLocal_52 = unk_0x2A488C176D52CCA5(Var0, Local_47);
			if (fLocal_51 < fLocal_52)
			{
				Local_49 = { Local_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				Local_49 = { Local_47 };
				fLocal_50 = fLocal_48;
			}
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, false, true, 0))
				{
					Local_49 = { Local_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_32()
{
	unk_0xF66A602F829E2A06("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xF66A602F829E2A06("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xF66A602F829E2A06("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0xE532F5D78798DAAB(joaat("prop_phone_ing"));
	if (unk_0x7239B21A38F536BA(iLocal_38))
	{
		if (unk_0xE31C2C72B8692B64(iLocal_38))
		{
			unk_0x9614299DCB53E54B(&iLocal_38);
		}
		else
		{
			unk_0x2595DD4236549CE3(&iLocal_38);
		}
	}
	unk_0x1090044AD1DA76FA();
}

