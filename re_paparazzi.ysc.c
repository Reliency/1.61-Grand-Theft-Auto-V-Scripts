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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	struct<3> Local_71 = { 0, 0, 0 } ;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	bool bLocal_134 = 0;
	bool bLocal_135 = 0;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161[4];
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	bool bLocal_180 = 0;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	bool bLocal_183 = 0;
	struct<3> Local_184 = { 0, 0, 0 } ;
	struct<3> Local_185 = { 0, 0, 0 } ;
	bool bLocal_186 = 0;
	struct<3> Local_187 = { 0, 0, 0 } ;
	struct<3> Local_188 = { 0, 0, 0 } ;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_44 = -1f;
	Local_49 = { 226.6825f, 681.0297f, 188.4987f };
	Local_50 = { 231.8002f, 672.5261f, 188.9459f };
	bLocal_51 = 32.0905f;
	StringCopy(&Local_61, "", 24);
	Local_68 = { 259.4603f, 125.8718f, 100.9754f };
	bLocal_69 = 283.0367f;
	Local_71 = { 245.1998f, 76.8231f, 90.7069f };
	bLocal_72 = -18.4743f;
	cLocal_133 = "REPAPAU";
	bLocal_134 = "random@escape_paparazzi@standing@";
	bLocal_135 = "random@escape_paparazzi@incar@";
	bLocal_146 = 4000;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	Local_154 = { 272.6356f, 155.5618f, 103.3306f };
	Local_155 = { 247.5795f, 88.7094f, 92.9859f };
	Local_156 = { 259.0348f, 114.0369f, 98.9984f };
	Local_157 = { 255.4971f, 116.8744f, 99.8162f };
	Local_158 = { 266.8217f, 139.7698f, 103.2269f };
	Local_159 = { 270.0174f, 139.1181f, 103.2195f };
	Local_160 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_177 = "left_";
	Local_178 = { 261.9341f, 126.2429f, 95.15405f };
	Local_179 = { 270.6759f, 152.4763f, 109.2356f };
	bLocal_180 = 16f;
	Local_181 = { 261.9341f, 126.2429f, 107.6541f };
	Local_182 = { 248.354f, 87.01792f, 92.389f };
	bLocal_183 = 16f;
	Local_184 = { 256.6779f, 126.573f, 99.54784f };
	Local_185 = { 266.4471f, 123.412f, 105.6728f };
	bLocal_186 = 5.75f;
	Local_187 = { 260.242f, 127.423f, 101.65f };
	Local_188 = { 0f, 0f, -20f };
	Local_48 = { ScriptParam_204.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		func_280();
	}
	func_279(&uLocal_74, 3);
	if (!Global_3)
	{
		if (func_237(Local_48, -1, 0, 0, 0))
		{
			func_234(-1);
		}
		else
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	iLocal_126 = unk_0x1B5C85C612E5256E(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), false, true, true, true);
	iLocal_127 = unk_0x1B5C85C612E5256E(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), false, true, true, true);
	iLocal_128 = unk_0x1B5C85C612E5256E(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, true, true, true);
	if (Global_3)
	{
		unk_0xA56F01F3765B93A0(246.1673f, 92.1704f, 93.8361f, 6f, true, false, false, false);
	}
	unk_0xC12321827687FE4D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, true);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		func_231(&uLocal_74);
		if (!func_230())
		{
			if (func_229())
			{
				func_280();
			}
		}
		unk_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_108.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_108[iVar0 /*18*/]) && !unk_0x5F9532F3B5CC2551(Local_108[iVar0 /*18*/], false))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0x3FEF770D40960D5A(Local_108[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x5F9532F3B5CC2551(Local_109[iVar0 /*18*/], false))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0x3FEF770D40960D5A(Local_109[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Local_52 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
		{
			Local_53 = { unk_0x3FEF770D40960D5A(bLocal_67, true) };
		}
		if (unk_0x7239B21A38F536BA(bLocal_70) && !unk_0x5F9532F3B5CC2551(bLocal_70, false))
		{
			Local_54 = { unk_0x3FEF770D40960D5A(bLocal_70, true) };
		}
		if (!func_230())
		{
			if (unk_0xC5042CC6F5E3D450())
			{
				switch (iLocal_130)
				{
					case 0:
						if (func_220())
						{
							func_213();
							iLocal_130++;
						}
						else if (func_201())
						{
							func_280();
						}
						break;
					
					case 1:
						if ((func_200() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || !unk_0x4C241E39B23DF959(bLocal_70, false))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_199();
								func_280();
							}
						}
						else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, false, true, 0))
						{
							func_190(1);
							bLocal_121 = func_189(bLocal_67, 0, 145);
							func_188("MAG_2_ESCAPE_PAP_GET_CAR");
							func_187(0);
						}
						break;
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			switch (iLocal_45)
			{
				case 0:
					func_184();
					break;
				
				case 1:
					func_181();
					break;
				
				case 2:
					func_159();
					break;
				
				case 3:
					func_147();
					break;
				
				case 4:
					func_112();
					break;
				
				case 10:
					func_280();
					break;
				
				case 5:
					func_111();
					break;
				
				case 6:
					func_108(sLocal_132);
					break;
				
				case 7:
					func_107();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_106())
					{
						if (unk_0x7239B21A38F536BA(bLocal_67))
						{
							unk_0x9614299DCB53E54B(&bLocal_67);
						}
						func_82();
					}
					break;
				
				case 11:
					func_78();
					break;
			}
			if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_53, 210f, 210f, 210f, false, true, 0))
			{
				func_199();
				func_280();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_75(bLocal_67, 1, 1) || func_74())
					{
						if (iLocal_45 > 0)
						{
							func_187(5);
						}
						else
						{
							func_199();
							func_187(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_70())
						{
							func_187(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (iLocal_60 || func_24() != 0))
			{
				if ((!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, false, true, 0) && (unk_0x9CD27B0045628463() - iLocal_145) > 5000) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_109[iVar1 /*18*/], true), Local_52) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_53, Local_52) > (22.5f * 22.5f))
					{
						if (func_230())
						{
							if (Local_139[4 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_23(&Local_139, 4);
								func_22(&Local_139, 4, Local_109[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_145 = unk_0x9CD27B0045628463();
									iLocal_193 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
							}
						}
						else
						{
							StringCopy(&Var2, "REPAP_AZAA_0", 24);
							StringIntConCat(&Var2, unk_0xD53343AA4FB7DD28(true, 13), 24);
							func_3(Local_109[iVar1 /*18*/], &Var2, "PAPARAZZO", 24);
							iLocal_145 = unk_0x9CD27B0045628463();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			bVar1 = unk_0xBB40DD2270B65366(bVar0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar1))
			{
				if (bVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(bVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(bVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(bVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xEEF059FAD016D209(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_17)
			{
				if (unk_0xC86D67D52A707CF8(Local_109[iVar0 /*18*/], unk_0xD80958FC74E988A6(), true))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_17 - unk_0xEEF059FAD016D209(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_17 - unk_0xEEF059FAD016D209(Local_109[iVar0 /*18*/])));
					unk_0xA72CD9CA74A5ECBA(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_17 = unk_0xEEF059FAD016D209(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x3523634255FC3318(bParam0, bParam1, bParam2, func_4(iParam3), false);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_18();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_12();
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

int func_8()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x4F8644AF03D0E0D6()))
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

bool func_9(bool bParam0)
{
	return func_10(bParam0, 20);
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
{
	if (func_17(14))
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
		Global_20266 = func_24();
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

bool func_17(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_18()
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

bool func_19(int iParam0, int iParam1)
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

void func_20()
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

void func_22(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(bParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(bParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(bParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(bParam2, true);
			}
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_28(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_27(unk_0xD80958FC74E988A6());
			if (func_26(iVar0) && (!func_17(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_26(Global_113386.f_2363.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if ((unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/])) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
		{
			if (unk_0xB7A628320EFF8E47(Local_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_165 = 0;
			unk_0x963D27A58DF860AC(joaat("a_m_y_genstreet_02"));
			unk_0x963D27A58DF860AC(joaat("prop_pap_camera_01"));
			unk_0x963D27A58DF860AC(joaat("cavalcade2"));
			unk_0x963D27A58DF860AC(joaat("vader"));
			unk_0xD3BD40951412FEF6(bLocal_134);
			unk_0xD3BD40951412FEF6("random@paparazzi@pap_anims");
			if (((((unk_0x98A4EB5D89A0C952(joaat("a_m_y_genstreet_02")) && unk_0x98A4EB5D89A0C952(joaat("prop_pap_camera_01"))) && unk_0x98A4EB5D89A0C952(joaat("cavalcade2"))) && unk_0x98A4EB5D89A0C952(joaat("vader"))) && unk_0xD031A9162D01088C(bLocal_134)) && unk_0xD031A9162D01088C("random@paparazzi@pap_anims"))
			{
				Local_161[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_161[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_161[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_161[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_162[0] = -111.1625f;
				fLocal_162[1] = 68.857f;
				fLocal_162[2] = -108.2056f;
				fLocal_162[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_108.f_0)
				{
					func_69(iVar0);
					func_67(func_68(iVar0));
					func_67(func_66(iVar0));
					iVar0++;
				}
				iLocal_163 = 0;
				func_65(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_65(func_66(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_65(func_66(2), Local_161[1 /*3*/], fLocal_162[1]);
				func_65(func_66(3), Local_161[1 /*3*/], fLocal_162[1]);
				func_64(0, Local_161[0 /*3*/], fLocal_162[0], 1);
				func_64(1, Local_161[1 /*3*/], fLocal_162[1], 0);
				unk_0x06843DA7060A026B(func_63(0, 1), 265.408f, 151.2875f, 103.5673f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(func_63(0, 1), 217.1033f);
				unk_0x06843DA7060A026B(func_63(2, 1), 245.9477f, 72.661f, 89.1067f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(func_63(2, 1), 38.6283f);
				unk_0x06843DA7060A026B(func_63(3, 1), 244.1872f, 73.3336f, 89.0917f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(func_63(3, 1), 272.9875f);
				unk_0xEA47FE3719165B94(func_63(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, false, false, false, false);
				unk_0xEA47FE3719165B94(func_63(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, false, false, false, false);
				unk_0xEA47FE3719165B94(func_63(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, false, false, false, false);
				unk_0xEA47FE3719165B94(func_63(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, false, false, false, false);
				unk_0xEA47FE3719165B94(func_63(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, false, false, false, false);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_61(func_66(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_61(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_61(func_66(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x7239B21A38F536BA(Local_109[2 /*18*/].f_2))
			{
				if (!unk_0x47D6F43D77935C75(Local_109[2 /*18*/].f_2))
				{
					unk_0xEA1C610A04DB6BBB(Local_109[2 /*18*/].f_2, true, false);
				}
			}
			switch (iLocal_165)
			{
				case 0:
					if (!unk_0x84A2DD9AC37C35C1(func_63(1, 0)))
					{
						unk_0xE1EF3C1216AFF2CD(func_63(1, 0));
					}
					if (!unk_0x84A2DD9AC37C35C1(func_63(1, 1)))
					{
						unk_0xE1EF3C1216AFF2CD(func_63(1, 1));
					}
					if (!unk_0x7239B21A38F536BA(Local_108[2 /*18*/]))
					{
						func_64(2, Local_161[2 /*3*/], fLocal_162[2], 0);
						if (unk_0x4C241E39B23DF959(Local_108[2 /*18*/], false))
						{
							func_65(func_68(2), unk_0x3FEF770D40960D5A(Local_108[2 /*18*/], true), 0f);
							unk_0xF75B0D629E1C063D(func_63(2, 0), Local_108[2 /*18*/], -1);
						}
					}
					if (!unk_0x7239B21A38F536BA(Local_108[3 /*18*/]))
					{
						func_64(3, Local_161[3 /*3*/], fLocal_162[3], 0);
					}
					if (!unk_0x84A2DD9AC37C35C1(func_63(2, 1)))
					{
						unk_0x15D3A79D4E44B913(func_63(2, 1), Local_156, 2f, -1, 0.25f, false, 1193033728);
					}
					if (!unk_0x84A2DD9AC37C35C1(func_63(3, 1)))
					{
						unk_0x15D3A79D4E44B913(func_63(3, 1), Local_157, 2f, -1, 0.25f, false, 1193033728);
					}
					if (!unk_0x7239B21A38F536BA(func_63(3, 0)))
					{
						func_65(func_68(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0x84A2DD9AC37C35C1(func_63(1, 0)))
						{
							unk_0x15D3A79D4E44B913(func_63(1, 0), Local_158, 2f, 20000, 0.25f, false, 1193033728);
						}
						if (!unk_0x84A2DD9AC37C35C1(func_63(1, 1)))
						{
							unk_0x15D3A79D4E44B913(func_63(1, 1), Local_159, 2f, 20000, 0.25f, false, 1193033728);
						}
						if (!unk_0x84A2DD9AC37C35C1(func_63(0, 1)))
						{
							unk_0x15D3A79D4E44B913(func_63(0, 1), Local_160, 2f, 20000, 0.25f, false, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(false);
					iVar1 = 0;
					while (iVar1 < Local_109.f_0)
					{
						if (unk_0x7239B21A38F536BA(Local_109[iVar1 /*18*/]))
						{
							unk_0x153973AB99FE8980(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_108.f_0)
					{
						if (unk_0x7239B21A38F536BA(Local_108[iVar1 /*18*/]))
						{
							unk_0x153973AB99FE8980(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 1:
					func_55();
					if ((unk_0x4C241E39B23DF959(Local_108[0 /*18*/], false) && !unk_0x84A2DD9AC37C35C1(func_63(0, 0))) && !unk_0x84A2DD9AC37C35C1(func_63(0, 1)))
					{
						if (!iLocal_152[1])
						{
							iLocal_152[1] = 1;
							unk_0xE2A2AA2F659D77A7(func_63(0, 0), Local_108[0 /*18*/], Local_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x4C241E39B23DF959(Local_108[2 /*18*/], false) && !unk_0x84A2DD9AC37C35C1(func_63(2, 0))) && !unk_0x84A2DD9AC37C35C1(func_63(2, 1)))
					{
						if (!iLocal_152[0])
						{
							unk_0xE2A2AA2F659D77A7(func_63(2, 0), Local_108[2 /*18*/], Local_155, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_152[0] = 1;
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_67) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
					{
						func_52(bLocal_67, 6);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0x84A2DD9AC37C35C1(func_63(1, 0)))
							{
								if (unk_0x20B60995556D004F(func_63(1, 0), Local_158, Global_22, false, true, 0))
								{
									func_51(bLocal_67, func_68(1));
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(func_63(1, 1)))
							{
								if (unk_0x20B60995556D004F(func_63(1, 1), Local_159, Global_22, false, true, 0))
								{
									func_51(bLocal_67, func_66(1));
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(func_63(0, 1)))
							{
								if (unk_0x20B60995556D004F(func_63(0, 1), Local_159, Global_22, false, true, 0))
								{
									func_51(bLocal_67, func_66(0));
								}
							}
						}
						else
						{
							func_52(bLocal_67, func_68(1));
							func_52(bLocal_67, func_66(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_52(bLocal_67, func_68(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_70, true), Local_68) < 9f)
					{
						if (unk_0x20B60995556D004F(func_63(2, 1), Local_156, Global_22, false, true, 0))
						{
							func_51(bLocal_67, func_66(2));
						}
						if (unk_0x20B60995556D004F(func_63(3, 1), Local_157, Global_22, false, true, 0))
						{
							func_51(bLocal_67, func_66(3));
						}
						if (unk_0x20B60995556D004F(func_63(0, 1), Local_157, Global_22, false, true, 0))
						{
							func_51(bLocal_67, func_66(0));
						}
					}
					else
					{
						if (!BitTest(uLocal_168, 3))
						{
							unk_0xE1EF3C1216AFF2CD(Local_109[func_66(3) /*18*/]);
							unk_0x933D6A9EEC1BACD0(&uLocal_168, 3);
						}
						if (!BitTest(uLocal_168, 2))
						{
							unk_0xE1EF3C1216AFF2CD(Local_109[func_66(2) /*18*/]);
							unk_0x933D6A9EEC1BACD0(&uLocal_168, 2);
						}
						if (!BitTest(uLocal_168, 0))
						{
							unk_0xE1EF3C1216AFF2CD(Local_109[func_66(0) /*18*/]);
							unk_0x933D6A9EEC1BACD0(&uLocal_168, false);
						}
						if (Global_3 || bLocal_56)
						{
							func_51(bLocal_67, func_66(3));
						}
						else
						{
							func_52(bLocal_67, func_66(3));
						}
						func_52(bLocal_67, func_66(2));
						func_52(bLocal_67, func_66(0));
					}
					break;
			}
			func_50();
			break;
		
		case 3:
			func_55();
			if (unk_0x4C241E39B23DF959(bLocal_70, false))
			{
				if (unk_0xD5037BA82E12416F(bLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0x15C40837039FFAF7());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_108.f_0)
			{
				if (unk_0x7239B21A38F536BA(Local_108[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_163 || !unk_0x7239B21A38F536BA(Local_108[0 /*18*/])) || !unk_0x7239B21A38F536BA(Local_108[1 /*18*/]))) && (unk_0x9CD27B0045628463() - iLocal_164) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_52, Local_68) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_52, Local_68) < 62500f || (unk_0x9CD27B0045628463() - iLocal_131) < 30000)
							{
								func_46(Local_108[iVar0 /*18*/], bLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_15), &(Local_108[iVar0 /*18*/].f_11), &(Local_108[iVar0 /*18*/].f_14), &(Local_108[iVar0 /*18*/].f_16), Local_108[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0x9CD27B0045628463();
							}
						}
					}
					bVar2 = func_68(iVar0);
					if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar2 /*18*/]))
					{
						bVar3 = func_66(iVar0);
					}
					else
					{
						bVar3 = func_68(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
							{
								if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_108[iVar0 /*18*/], false))
								{
									if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar2 /*18*/]))
									{
										if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], false))
										{
											if (unk_0x77F1BEB8863288D5(Local_109[bVar2 /*18*/], -1794415470) != 1 && unk_0x22AC59A870E6A669(Local_108[iVar0 /*18*/], -1, false))
											{
												unk_0xC20E50AA46D09CA8(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (bVar3 != -1)
									{
										if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar3 /*18*/]))
										{
											if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar3 /*18*/], Local_108[iVar0 /*18*/], false))
											{
												if (unk_0x77F1BEB8863288D5(Local_109[bVar3 /*18*/], -1794415470) != 1 && unk_0x22AC59A870E6A669(Local_108[iVar0 /*18*/], false, false))
												{
													unk_0xC20E50AA46D09CA8(Local_109[bVar3 /*18*/], Local_108[iVar0 /*18*/], -1, false, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar2 /*18*/]) && (bVar3 != -1 && !unk_0x84A2DD9AC37C35C1(Local_109[bVar3 /*18*/])))
										{
											if ((unk_0xA3EE4A07279BB9DB(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], false) && (bVar3 != -1 && unk_0xA3EE4A07279BB9DB(Local_109[bVar3 /*18*/], Local_108[iVar0 /*18*/], false))) && unk_0x4C241E39B23DF959(bLocal_70, false))
											{
												if (unk_0x77F1BEB8863288D5(Local_109[bVar2 /*18*/], -1273030092) != 1 && unk_0x77F1BEB8863288D5(Local_109[bVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x9F7794730795E019(Local_109[bVar2 /*18*/], 3, false);
													unk_0x9F7794730795E019(Local_109[bVar2 /*18*/], 1, true);
													unk_0x9F7794730795E019(Local_109[bVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														unk_0x659427E0EF36BCDE(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 10, 50f, 786471, 4f, 10f, true);
													}
													else if (iVar0 == 1)
													{
														unk_0x659427E0EF36BCDE(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 11, 50f, 786470, 4f, 10f, true);
													}
													else if (iVar0 == 2)
													{
														unk_0x659427E0EF36BCDE(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 10, 50f, 786471, 4f, 10f, true);
													}
													else if (iVar0 == 3)
													{
														unk_0x659427E0EF36BCDE(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 11, 50f, 786470, 4f, 10f, true);
													}
												}
												unk_0x5C9B84BD7D31D908(Local_109[bVar2 /*18*/], func_45((3f * unk_0xF1B760881820C952(Local_54, Local_108[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && unk_0x2A488C176D52CCA5(Local_108[iVar0 /*18*/].f_8, Local_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar2 /*18*/]))
								{
									if (!unk_0xBBCCE00B381F8482(Local_109[bVar2 /*18*/]))
									{
										unk_0x70A2D1137C8ED7C9(Local_109[bVar2 /*18*/], 2, false);
										unk_0x22B0D0E37CCB840D(Local_109[bVar2 /*18*/], unk_0xD80958FC74E988A6(), 300f, 100000, false, false);
									}
								}
								if (bVar3 != -1)
								{
									if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar3 /*18*/]))
									{
										if (!unk_0xBBCCE00B381F8482(Local_109[bVar3 /*18*/]))
										{
											unk_0x70A2D1137C8ED7C9(Local_109[bVar3 /*18*/], 2, false);
											unk_0x22B0D0E37CCB840D(Local_109[bVar3 /*18*/], unk_0xD80958FC74E988A6(), 300f, 100000, false, false);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x997ABD671D25CA0B(Local_109[bVar2 /*18*/], false))
							{
								unk_0x504D54DF3F6F2247(Local_109[bVar2 /*18*/], true, 256);
							}
							else
							{
								func_52(bLocal_67, bVar2);
							}
							if (bVar3 != -1)
							{
								if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar3 /*18*/]))
								{
									if (unk_0x997ABD671D25CA0B(Local_109[bVar3 /*18*/], false))
									{
										unk_0x504D54DF3F6F2247(Local_109[bVar3 /*18*/], false, 256);
									}
									else
									{
										func_52(bLocal_67, bVar3);
									}
								}
							}
							if (unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
							{
								if (unk_0x2A488C176D52CCA5(Local_108[iVar0 /*18*/].f_8, Local_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x84A2DD9AC37C35C1(Local_109[bVar2 /*18*/]) && (bVar3 == -1 || !unk_0x84A2DD9AC37C35C1(Local_109[bVar3 /*18*/]))) && unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
					{
						iVar4 = 1;
						if (!unk_0xE31C2C72B8692B64(Local_109[bVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (bVar3 != -1)
						{
							if (!unk_0xE31C2C72B8692B64(Local_109[bVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xE31C2C72B8692B64(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_52, Local_108[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], false))
							{
								unk_0xF75B0D629E1C063D(Local_109[bVar2 /*18*/], Local_108[iVar0 /*18*/], -1);
							}
							if (bVar3 != -1)
							{
								if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar3 /*18*/], Local_108[iVar0 /*18*/], false))
								{
									unk_0xF75B0D629E1C063D(Local_109[bVar3 /*18*/], Local_108[iVar0 /*18*/], false);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 4:
			func_55();
			if (!iLocal_167)
			{
				iVar0 = 0;
				while (iVar0 < Local_108.f_0)
				{
					bVar5 = func_68(iVar0);
					if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar5 /*18*/]))
					{
						bVar6 = func_66(iVar0);
					}
					else
					{
						bVar6 = func_68(iVar0);
					}
					if (unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar5 /*18*/]))
						{
							if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], false))
							{
								if (unk_0x77F1BEB8863288D5(Local_109[bVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xC20E50AA46D09CA8(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (bVar6 != -1)
						{
							if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar6 /*18*/]))
							{
								if (!unk_0xA3EE4A07279BB9DB(Local_109[bVar6 /*18*/], Local_108[iVar0 /*18*/], false))
								{
									if (unk_0x77F1BEB8863288D5(Local_109[bVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xC20E50AA46D09CA8(Local_109[bVar6 /*18*/], Local_108[iVar0 /*18*/], -1, false, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar5 /*18*/]) && (bVar6 != -1 && !unk_0x84A2DD9AC37C35C1(Local_109[bVar6 /*18*/])))
							{
								if ((unk_0xA3EE4A07279BB9DB(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], false) && (bVar6 != -1 && unk_0xA3EE4A07279BB9DB(Local_109[bVar6 /*18*/], Local_108[iVar0 /*18*/], false))) && unk_0x4C241E39B23DF959(bLocal_70, false))
								{
									fVar7 = func_45((70f - (unk_0xBBDA792448DB5A89((unk_0x9CD27B0045628463() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x9CD27B0045628463() - iLocal_66) > 4000)
									{
										unk_0x404A5AA9B9F0B746(Local_109[bVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_108.f_0)
										{
											if ((unk_0x4C241E39B23DF959(Local_108[iVar8 /*18*/], false) && !unk_0x84A2DD9AC37C35C1(func_63(iVar8, 0))) && unk_0xA3EE4A07279BB9DB(func_63(iVar8, 0), Local_108[iVar8 /*18*/], false))
											{
												unk_0xE1EF3C1216AFF2CD(func_63(iVar8, 0));
												unk_0x659427E0EF36BCDE(func_63(iVar8, 0), Local_108[iVar8 /*18*/], false, 5, 10f, 786468, 10f, 10f, true);
											}
											iVar8++;
										}
										iLocal_167 = 1;
									}
									else if (unk_0x77F1BEB8863288D5(Local_109[bVar5 /*18*/], -1273030092) != 1 && unk_0x77F1BEB8863288D5(Local_109[bVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x9F7794730795E019(Local_109[bVar5 /*18*/], 3, false);
										unk_0x9F7794730795E019(Local_109[bVar5 /*18*/], 1, true);
										unk_0x9F7794730795E019(Local_109[bVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											unk_0x659427E0EF36BCDE(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 10, fVar7, 786471, 4f, 10f, true);
										}
										else if (iVar0 == 1)
										{
											unk_0x659427E0EF36BCDE(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 11, fVar7, 786470, 4f, 10f, true);
										}
										else if (iVar0 == 2)
										{
											unk_0x659427E0EF36BCDE(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 10, fVar7, 786471, 4f, 10f, true);
										}
										else if (iVar0 == 3)
										{
											unk_0x659427E0EF36BCDE(Local_109[bVar5 /*18*/], Local_108[iVar0 /*18*/], bLocal_70, 11, fVar7, 786470, 4f, 10f, true);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar5 /*18*/]))
						{
							if (!unk_0xBBCCE00B381F8482(Local_109[bVar5 /*18*/]))
							{
								unk_0x70A2D1137C8ED7C9(Local_109[bVar5 /*18*/], 2, false);
								unk_0x22B0D0E37CCB840D(Local_109[bVar5 /*18*/], unk_0xD80958FC74E988A6(), 300f, 100000, false, false);
							}
						}
						if (bVar6 != -1)
						{
							if (!unk_0x84A2DD9AC37C35C1(Local_109[bVar6 /*18*/]))
							{
								if (!unk_0xBBCCE00B381F8482(Local_109[bVar6 /*18*/]))
								{
									unk_0x70A2D1137C8ED7C9(Local_109[bVar6 /*18*/], 2, false);
									unk_0x22B0D0E37CCB840D(Local_109[bVar6 /*18*/], unk_0xD80958FC74E988A6(), 300f, 100000, false, false);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_166, 10f))
				{
					func_43(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 3)
				{
					iLocal_166 = 0;
				}
			}
			func_50();
			func_35();
			break;
		
		case 6:
			if (func_44(iLocal_166, 1125515264))
			{
				func_43(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 3)
			{
				iLocal_166 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!unk_0xCA042B6957743895(bLocal_134))
				{
					func_34(iVar0);
					if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/].f_2) && unk_0xB346476EF1A64897(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0x997ABD671D25CA0B(Local_109[iVar0 /*18*/], false))
						{
							if (unk_0x47D6F43D77935C75(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0x2A74E1D5F2F00EEC(Local_109[iVar0 /*18*/]))
								{
									unk_0xEA1C610A04DB6BBB(Local_109[iVar0 /*18*/].f_2, false, false);
								}
							}
							else if (!unk_0x2A74E1D5F2F00EEC(Local_109[iVar0 /*18*/]))
							{
								unk_0xEA1C610A04DB6BBB(Local_109[iVar0 /*18*/].f_2, true, false);
							}
							if (!unk_0xE31C2C72B8692B64(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0x1F0B79228E461EC9(Local_109[iVar0 /*18*/], bLocal_134, func_33(iVar0), 3))
								{
									if (!Local_109[iVar0 /*18*/].f_11)
									{
										if (!unk_0x1F0B79228E461EC9(Local_109[iVar0 /*18*/], bLocal_134, "grip", 3))
										{
											unk_0xEA47FE3719165B94(Local_109[iVar0 /*18*/], bLocal_134, "grip", 1000f, -1000f, -1, 57, false, false, false, false);
											Local_109[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_11)
								{
									unk_0xEA47FE3719165B94(Local_109[iVar0 /*18*/], bLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
									Local_109[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x6EA47DAE7FAD0EED(bLocal_134);
								if (unk_0xC4EA073D86FB29B0(bLocal_134))
								{
									unk_0x2622E35B77D3ACA2(Local_109[iVar0 /*18*/], bLocal_134);
									Local_109[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_11)
							{
								unk_0xEA47FE3719165B94(Local_109[iVar0 /*18*/], bLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
								Local_109[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x97B0DB5B4AA74E77(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x826AA586EDB9FEF8(Local_109[iVar0 /*18*/]) && func_32(Local_109[iVar0 /*18*/], unk_0x9A9112A0FE9A4713(Local_109[iVar0 /*18*/], false)) == -1)
						{
							if (unk_0x47D6F43D77935C75(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0xEA1C610A04DB6BBB(Local_109[iVar0 /*18*/].f_2, false, false);
							}
						}
						else if (!unk_0x47D6F43D77935C75(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xEA1C610A04DB6BBB(Local_109[iVar0 /*18*/].f_2, true, false);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_11)
						{
							unk_0xEA47FE3719165B94(Local_109[iVar0 /*18*/], bLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
							Local_109[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_109[iVar0 /*18*/].f_10)
						{
							unk_0x97B0DB5B4AA74E77(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (unk_0x9A497FE2DF198913(Local_109[iVar0 /*18*/]) && unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
				{
					func_187(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_108.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_108[iVar0 /*18*/]))
			{
				if (unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_108[iVar0 /*18*/], false))
					{
						func_187(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(bool bParam0, bool bParam1)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		if (unk_0xA808AA1D79230FC2(bParam0, bParam1))
		{
			if (unk_0xBB40DD2270B65366(bParam1, -1, false) == bParam0)
			{
				return -1;
			}
			if (unk_0xBB40DD2270B65366(bParam1, false, false) == bParam0)
			{
				return 0;
			}
			if (unk_0xBB40DD2270B65366(bParam1, true, false) == bParam0)
			{
				return 1;
			}
			if (unk_0xBB40DD2270B65366(bParam1, 2, false) == bParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (BitTest(Local_109[iParam0 /*18*/].f_15, bVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_136);
			bVar3 = bVar0;
			if (bVar3 < iVar1)
			{
				if (unk_0x1F0B79228E461EC9(Local_109[iParam0 /*18*/], bLocal_134, func_33(iParam0), 3))
				{
					if (unk_0x346D81500D088F42(Local_109[iParam0 /*18*/], bLocal_134, func_33(iParam0)) > 0.9f)
					{
						unk_0xE80492A9AC099A93(&(Local_109[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (bVar3 < iVar2)
			{
				if (unk_0x1F0B79228E461EC9(Local_109[iParam0 /*18*/], bLocal_135, iLocal_136[(bVar3 - iVar1)], 3))
				{
					if (unk_0x346D81500D088F42(Local_109[iParam0 /*18*/], bLocal_135, iLocal_136[(bVar3 - iVar1)]) > 0.9f)
					{
						unk_0xE80492A9AC099A93(&(Local_109[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (!unk_0x1F0B79228E461EC9(Local_109[iParam0 /*18*/], bLocal_134, "grip", 3))
			{
				unk_0xE80492A9AC099A93(&(Local_109[iParam0 /*18*/].f_15), bVar0);
			}
		}
		bVar0++;
	}
}

void func_35()
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		bVar0 = func_66(iLocal_149);
		if (((unk_0x7239B21A38F536BA(Local_108[iLocal_149 /*18*/]) && unk_0x4C241E39B23DF959(Local_108[iLocal_149 /*18*/], false)) && unk_0x7239B21A38F536BA(Local_109[bVar0 /*18*/])) && !unk_0x84A2DD9AC37C35C1(Local_109[bVar0 /*18*/]))
		{
			if (unk_0x423E8DE37D934D89(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_109[bVar0 /*18*/].f_6, Local_53) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xBB40DD2270B65366(Local_108[iLocal_149 /*18*/], false, false) == Local_109[bVar0 /*18*/])
				{
					if (!Local_109[bVar0 /*18*/].f_9)
					{
						if (!func_42(bVar0))
						{
							func_36(bVar0);
						}
					}
					else if (!func_42(bVar0) && (unk_0x9CD27B0045628463() - Local_109[bVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x1F0B79228E461EC9(Local_109[bVar0 /*18*/], bLocal_135, "base", 3))
						{
							unk_0xEA47FE3719165B94(Local_109[bVar0 /*18*/], bLocal_135, "base", 8f, 1000f, -1, 16, false, false, false, false);
						}
					}
				}
			}
			else if (!Local_109[bVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_109[bVar0 /*18*/].f_6, Local_53) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xBB40DD2270B65366(Local_108[iLocal_149 /*18*/], false, false) == Local_109[bVar0 /*18*/])
				{
					unk_0x2047C02158D6405A(Local_109[bVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, bLocal_67, 1.57f, 0.25f);
					Local_109[bVar0 /*18*/].f_9 = 1;
					Local_109[bVar0 /*18*/].f_13 = unk_0x9CD27B0045628463();
				}
			}
			else if (Local_109[bVar0 /*18*/].f_9)
			{
				if ((unk_0x9CD27B0045628463() - Local_109[bVar0 /*18*/].f_13) > 2000)
				{
					Local_109[bVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108.f_0)
		{
			iLocal_149 = 0;
		}
	}
}

void func_36(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(Local_109[bParam0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		bVar0 = 15;
		Var1 = { Local_53 - Local_109[bParam0 /*18*/].f_6 };
		Var2 = { unk_0x0A794A5A57F8DF91(Local_109[bParam0 /*18*/]) };
		bVar3 = func_40(Var2, Var1);
		if (unk_0x73D57CFFDD12C355(bVar3) < 10f)
		{
			bVar0 = 5;
		}
		else if (bVar3 >= 10f && bVar3 < 60f)
		{
			bVar0 = 7;
		}
		else if (bVar3 >= 60f && bVar3 < 100f)
		{
			bVar0 = 6;
		}
		else if (bVar3 <= -10f && bVar3 > -60f)
		{
			bVar0 = 10;
		}
		else if (bVar3 < -60f && bVar3 > -100f)
		{
			bVar0 = 9;
		}
		if (bVar0 != 15)
		{
			func_37(bParam0, bVar0);
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1 < 15)
	{
		if (!BitTest(Local_109[iParam0 /*18*/].f_15, bParam1))
		{
			if (func_39(bParam1))
			{
				unk_0xEA47FE3719165B94(Local_109[iParam0 /*18*/], bLocal_135, iLocal_136[func_38(bParam1)], 4f, -4f, -1, 16, false, false, false, false);
			}
			else if (bParam1 < 5)
			{
				unk_0xEA47FE3719165B94(Local_109[iParam0 /*18*/], bLocal_134, func_33(iParam0), 8f, -8f, -1, 0, false, false, false, false);
			}
			else
			{
				unk_0xEA47FE3719165B94(Local_109[iParam0 /*18*/], bLocal_134, "grip", 1000f, -1000f, -1, 57, false, false, false, false);
			}
			Local_109[iParam0 /*18*/].f_15 = 0;
			unk_0x933D6A9EEC1BACD0(&(Local_109[iParam0 /*18*/].f_15), bParam1);
		}
	}
}

int func_38(bool bParam0)
{
	return (bParam0 - 5);
}

bool func_39(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_136));
}

float func_40(struct<3> Param0, struct<3> Param1)
{
	float fVar0;
	
	Param0 = { func_41(Param0) };
	Param1 = { func_41(Param1) };
	fVar0 = (unk_0x8927CBF9D22261A4(Param1.f_1, Param1.f_0) - unk_0x8927CBF9D22261A4(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_42(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!unk_0xCA042B6957743895(bLocal_135))
	{
		bVar1 = 5;
		while (bVar1 <= 13)
		{
			if (!bVar0)
			{
				if (BitTest(Local_109[bParam0 /*18*/].f_15, bVar1))
				{
					bVar0 = true;
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(Local_108[iParam0 /*18*/]) && unk_0xE31C2C72B8692B64(Local_108[iParam0 /*18*/]))
	{
		unk_0xEA386986E786A54F(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0xA6DB27D19ECBB7DA(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0x86A652570E5F25DD(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			bVar1 = func_66(iParam0);
		}
		else
		{
			bVar1 = func_68(iParam0);
		}
		if (unk_0x7239B21A38F536BA(Local_109[bVar1 /*18*/]) && unk_0xE31C2C72B8692B64(Local_109[bVar1 /*18*/]))
		{
			if (unk_0x7239B21A38F536BA(Local_109[bVar1 /*18*/]))
			{
				unk_0x539E0AE3E6634B9F(&(Local_109[bVar1 /*18*/].f_2));
			}
			if (unk_0xA6DB27D19ECBB7DA(Local_109[bVar1 /*18*/].f_1))
			{
				unk_0x86A652570E5F25DD(&(Local_109[bVar1 /*18*/].f_1));
			}
			unk_0x9614299DCB53E54B(&(Local_109[bVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x7239B21A38F536BA(Local_108[iParam0 /*18*/]))
	{
		if (unk_0x4C241E39B23DF959(Local_108[iParam0 /*18*/], false))
		{
			if (unk_0xB7A628320EFF8E47(Local_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xE31C2C72B8692B64(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7239B21A38F536BA(func_63(iParam0, 0)))
	{
		if (!unk_0x84A2DD9AC37C35C1(func_63(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_52, Local_109[func_68(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xE31C2C72B8692B64(func_63(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7239B21A38F536BA(func_63(iParam0, 1)))
	{
		if (!unk_0x84A2DD9AC37C35C1(func_63(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_52, Local_109[func_66(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xE31C2C72B8692B64(func_63(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)
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

void func_46(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9)
{
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (((((unk_0x7239B21A38F536BA(bParam1) && bParam0 != bParam1) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(bParam1)))
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam1, true), *uParam4, true) > 20f)
			{
				if (func_49(bParam0, bParam1, bLocal_119, unk_0x3FEF770D40960D5A(bParam1, true), unk_0xAFBD61CC738D9EB9(bParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x163E252DE035A133(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0x3FEF770D40960D5A(bParam1, true) };
					*uParam5 = unk_0xE83D4F9BA2A38914(bParam1);
				}
			}
			if (!unk_0xE31C2C72B8692B64(bParam0))
			{
				*uParam6 = unk_0x9CD27B0045628463();
			}
			else if ((unk_0x9CD27B0045628463() - *uParam6) > iParam8)
			{
				if ((func_48(bParam0, bParam1, 1) > fParam9 && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam1, true), *uParam2, true) > 20f) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!unk_0xE33D59DA70B58FDF(*uParam2, 6f))
						{
							unk_0xBE31FD6CE464AC59(*uParam2, 6f, 0);
							unk_0x01C7B9B38428AEB6(*uParam2, 6f, false, false, false, false, false, false, 0);
							unk_0x06843DA7060A026B(bParam0, *uParam2, true, false, false, true);
							unk_0x8E2530AA8ADA980E(bParam0, *uParam3);
							unk_0x49733E92263139D1(bParam0, 5f);
							unk_0xAB54A438726D25D5(bParam0, func_45((unk_0xD5037BA82E12416F(bParam1) + 10f), 10f, 60f));
							unk_0x2497C4717C8B881E(bParam0, true, true, false);
							*uParam6 = unk_0x9CD27B0045628463();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x9CD27B0045628463();
		}
	}
}

int func_47(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_48(bool bParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var1, bParam2);
}

int func_49(bool bParam0, bool bParam1, bool bParam2, struct<3> Param3, struct<3> Param4)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0x7239B21A38F536BA(bParam2))
	{
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bParam0), &Var3, &Var4);
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bParam1), &Var5, &uVar6);
		fVar7 = unk_0x73D57CFFDD12C355((Var4.f_2 - Var3.f_2));
		fVar8 = unk_0x73D57CFFDD12C355((Var4.f_0 - Var3.f_0));
		fVar9 = unk_0x73D57CFFDD12C355((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x73D57CFFDD12C355(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x73D57CFFDD12C355(Var3.f_0));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		unk_0x06843DA7060A026B(bParam2, Param3, true, false, false, true);
		unk_0x8524A8B0171D5E07(bParam2, Param4, 2, true);
		Var1 = { unk_0x1899F328B0E12848(bParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { unk_0x1899F328B0E12848(bParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		iVar17 = unk_0x28579D1B8F8AAC80(Var2, Var1, fVar10, 19, unk_0xD80958FC74E988A6(), 4);
		if (unk_0x3D87450E15D98694(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	bool bVar0;
	
	if ((unk_0x9CD27B0045628463() - iLocal_148) > 100)
	{
		if ((unk_0x9CD27B0045628463() - Local_109[iLocal_147 /*18*/].f_12) > 500)
		{
			if (unk_0x7239B21A38F536BA(Local_109[iLocal_147 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = true;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0x997ABD671D25CA0B(Local_109[iLocal_147 /*18*/], false))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x1F0B79228E461EC9(Local_109[iLocal_147 /*18*/], bLocal_134, func_33(iLocal_147), 3) && unk_0x346D81500D088F42(Local_109[iLocal_147 /*18*/], bLocal_134, func_33(iLocal_147)) > 0.5f) && unk_0x346D81500D088F42(Local_109[iLocal_147 /*18*/], bLocal_134, func_33(iLocal_147)) < 0.75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0x0D53A3B8DA0809D2("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1f, false, false, false);
						if ((iLocal_147 % 3) == 0)
						{
							unk_0x8D8686B622B88120(-1, "SHUTTER_FLASH", unk_0x3FEF770D40960D5A(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						else if ((iLocal_147 % 3) == 1)
						{
							unk_0x8D8686B622B88120(-1, "SHUTTER", unk_0x3FEF770D40960D5A(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						else
						{
							unk_0x8D8686B622B88120(-1, "FLASH", unk_0x3FEF770D40960D5A(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						Local_109[iLocal_147 /*18*/].f_12 = unk_0x9CD27B0045628463();
					}
					iLocal_148 = unk_0x9CD27B0045628463();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109.f_0)
			{
				iLocal_147 = 0;
			}
		}
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(Local_109[bParam1 /*18*/]) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0xD71649DB0A545AA3(Local_109[bParam1 /*18*/], bParam0, 20f))
		{
			if (unk_0x77F1BEB8863288D5(Local_109[bParam1 /*18*/], -875674219) != 1)
			{
				unk_0x5AD23D40115353AC(Local_109[bParam1 /*18*/], bParam0, false);
			}
		}
		else if ((unk_0x9CD27B0045628463() - Local_109[bParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x1F0B79228E461EC9(Local_109[bParam1 /*18*/], bLocal_134, func_33(bParam1), 3))
			{
				unk_0xEA47FE3719165B94(Local_109[bParam1 /*18*/], bLocal_134, func_33(bParam1), 4f, -4f, -1, 0, false, false, false, false);
				Local_109[bParam1 /*18*/].f_13 = unk_0x9CD27B0045628463();
			}
		}
	}
}

void func_52(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (!unk_0x84A2DD9AC37C35C1(Local_109[bParam1 /*18*/]) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		Var0 = { unk_0x1899F328B0E12848(bParam0, func_54(bParam1)) };
		switch (Local_109[bParam1 /*18*/].f_16)
		{
			case 0:
				func_53(Var0, bParam1, bParam0);
				Local_109[bParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x77F1BEB8863288D5(Local_109[bParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_109[bParam1 /*18*/].f_6) > 5f)
				{
					Local_109[bParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_109[bParam1 /*18*/].f_6) > 10f)
				{
					func_53(Var0, bParam1, bParam0);
					Local_109[bParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(bParam0, bParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_109[bParam1 /*18*/].f_3) > 25f)
				{
					func_53(Var0, bParam1, bParam0);
				}
				if (unk_0x77F1BEB8863288D5(Local_109[bParam1 /*18*/], 713668775) != 1)
				{
					Local_109[bParam1 /*18*/].f_16 = (Local_109[bParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_53(struct<3> Param0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	bool bVar1;
	
	Var0 = { func_41(unk_0x3FEF770D40960D5A(bParam2, true) - Param0) };
	bVar1 = unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1);
	Local_109[iParam1 /*18*/].f_3 = { Param0 };
	unk_0xE1EF3C1216AFF2CD(Local_109[iParam1 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x15D3A79D4E44B913(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, -1, 0.5f, 512, bVar1);
	}
	else
	{
		unk_0x15D3A79D4E44B913(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, -1, 0.5f, 512, bVar1);
	}
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (unk_0xA6DB27D19ECBB7DA(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
			{
				unk_0x86A652570E5F25DD(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0x997ABD671D25CA0B(Local_109[iVar0 /*18*/], false))
			{
				unk_0x86A652570E5F25DD(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]) && !unk_0x997ABD671D25CA0B(Local_109[iVar0 /*18*/], false))
		{
			Local_109[iVar0 /*18*/].f_1 = func_189(Local_109[iVar0 /*18*/], 1, 145);
			unk_0xEAA0FFE120D92784(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108.f_0)
	{
		if (unk_0x4C241E39B23DF959(Local_108[iVar0 /*18*/], false))
		{
			if (unk_0xA6DB27D19ECBB7DA(Local_108[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x586AFE3FF72D996E(Local_108[iVar0 /*18*/].f_1) };
				Var2 = { Local_108[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var2.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var2.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var2.f_2 - Var1.f_2) / 10f));
				unk_0xAE2AF67E9D9AF65D(Local_108[iVar0 /*18*/].f_1, Var1);
				if (func_58(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0x86A652570E5F25DD(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_108[iVar0 /*18*/].f_1 = func_56(Local_108[iVar0 /*18*/].f_8, 0);
				unk_0x03D7FB09E75D6B7E(Local_108[iVar0 /*18*/].f_1, true);
				unk_0xEAA0FFE120D92784(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xAE9FC9EF6A9FAC79(Local_108[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x86A652570E5F25DD(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

bool func_56(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_57(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar1 = unk_0xA7C4F2C6E744A550(bParam0) + 1;
	if (iParam4 || !unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_60(bParam0, (iVar0 - 1), bParam6, bParam7);
			if (unk_0x7239B21A38F536BA(bVar2))
			{
				if (iParam3 && bVar2 == unk_0xD80958FC74E988A6())
				{
				}
				else if (bParam2)
				{
					if (unk_0x12534C348C6CB68B(bVar2))
					{
						bVar3 = unk_0x6C0E2E0125610278(bVar2);
						if (((!unk_0x84A2DD9AC37C35C1(bVar2) && bVar3 != func_11()) && func_59(bVar3, 1, 1)) || iParam8)
						{
							if (unk_0xE28E54788CE8F12D(unk_0x6C0E2E0125610278(bVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x84A2DD9AC37C35C1(bVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
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

bool func_60(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (!unk_0x22AC59A870E6A669(bParam0, bParam1, bParam3))
	{
		bVar0 = unk_0xBB40DD2270B65366(bParam0, bParam1, bParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7239B21A38F536BA(bVar0) && !unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			bVar0 = unk_0x83F969AA1EE2A664(bParam0, bParam1);
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0x77F1BEB8863288D5(bVar0, 451360105) == 1 || unk_0x77F1BEB8863288D5(bVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, false), unk_0x3FEF770D40960D5A(bVar0, false)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

void func_61(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(Local_109[bParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(Local_109[bParam0 /*18*/], true), Param1) > 1.5f)
		{
			if (unk_0x77F1BEB8863288D5(Local_109[bParam0 /*18*/], 713668775) != 1)
			{
				unk_0x15D3A79D4E44B913(Local_109[bParam0 /*18*/], Param1, 2f, -1, 0.25f, false, bParam2);
			}
		}
		else if (unk_0x73D57CFFDD12C355((func_62(unk_0xE83D4F9BA2A38914(Local_109[bParam0 /*18*/])) - func_62(bParam2))) > 10f)
		{
			if (unk_0x77F1BEB8863288D5(Local_109[bParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x93B93A37987F1F3D(Local_109[bParam0 /*18*/], bParam2, 0);
			}
		}
		else
		{
			switch (Local_109[bParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0xCA042B6957743895(bParam5))
					{
						if (!unk_0x1F0B79228E461EC9(Local_109[bParam0 /*18*/], bParam3, bParam4, 3))
						{
							unk_0xEA47FE3719165B94(Local_109[bParam0 /*18*/], bParam3, bParam4, 4f, -4f, -1, 1, false, false, false, false);
						}
					}
					else if (!unk_0x1F0B79228E461EC9(Local_109[bParam0 /*18*/], bParam3, bParam4, 3))
					{
						unk_0xEA47FE3719165B94(Local_109[bParam0 /*18*/], bParam3, bParam4, 4f, -4f, -1, 0, false, false, false, false);
					}
					else if (unk_0x346D81500D088F42(Local_109[bParam0 /*18*/], bParam3, bParam4) > 0.99f)
					{
						unk_0xEA47FE3719165B94(Local_109[bParam0 /*18*/], bParam3, bParam5, 4f, -4f, -1, 0, false, false, false, false);
						Local_109[bParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x1F0B79228E461EC9(Local_109[bParam0 /*18*/], bParam3, bParam5, 3))
					{
						unk_0xEA47FE3719165B94(Local_109[bParam0 /*18*/], bParam3, bParam5, 4f, -4f, -1, 0, false, false, false, false);
					}
					else if (unk_0x346D81500D088F42(Local_109[bParam0 /*18*/], bParam3, bParam5) > 0.99f)
					{
						unk_0xEA47FE3719165B94(Local_109[bParam0 /*18*/], bParam3, bParam4, 4f, -4f, -1, 0, false, false, false, false);
						Local_109[bParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

bool func_62(bool bParam0)
{
	if (bParam0 >= 180f)
	{
		bParam0 = (bParam0 - 360f);
	}
	if (bParam0 < -180f)
	{
		bParam0 = (bParam0 + 360f);
	}
	return bParam0;
}

var func_63(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_109[func_68(iParam0) /*18*/];
	}
	return Local_109[func_66(iParam0) /*18*/];
}

void func_64(int iParam0, struct<3> Param1, bool bParam2, bool bParam3)
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/] = unk_0xAF35D0D2583051B0(joaat("vader"), Param1, bParam2, true, true, false);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0xAF35D0D2583051B0(joaat("cavalcade2"), Param1, bParam2, true, true, false);
		unk_0x33E8CD3322E2FE31(Local_108[iParam0 /*18*/], false);
	}
	unk_0x49733E92263139D1(Local_108[iParam0 /*18*/], 5f);
	unk_0x3E8C8727991A8A0B(Local_108[iParam0 /*18*/], true);
	if (bParam3)
	{
		if (!unk_0x7239B21A38F536BA(func_63(iParam0, 0)))
		{
			func_65(func_68(iParam0), Param1, bParam2);
		}
		if (!unk_0x7239B21A38F536BA(func_63(iParam0, 1)))
		{
			func_65(func_66(iParam0), Param1, bParam2);
		}
		if (!unk_0x84A2DD9AC37C35C1(func_63(iParam0, 0)) && unk_0x4C241E39B23DF959(Local_108[iParam0 /*18*/], false))
		{
			unk_0xF75B0D629E1C063D(func_63(iParam0, 0), Local_108[iParam0 /*18*/], -1);
		}
		if (!unk_0x84A2DD9AC37C35C1(func_63(iParam0, 1)) && unk_0x4C241E39B23DF959(Local_108[iParam0 /*18*/], false))
		{
			unk_0xF75B0D629E1C063D(func_63(iParam0, 1), Local_108[iParam0 /*18*/], false);
		}
		unk_0x2497C4717C8B881E(Local_108[iParam0 /*18*/], true, true, false);
	}
}

void func_65(bool bParam0, struct<3> Param1, bool bParam2)
{
	Local_109[bParam0 /*18*/] = unk_0xD49F9B0955C367DE(26, joaat("a_m_y_genstreet_02"), Param1, bParam2, true, true);
	unk_0x9F7794730795E019(Local_109[bParam0 /*18*/], 1, false);
	unk_0x9F8AA94D6D97DBF4(Local_109[bParam0 /*18*/], true);
	unk_0x9F7794730795E019(Local_109[bParam0 /*18*/], 0, true);
	unk_0x7A6535691B477C48(Local_109[bParam0 /*18*/], 3);
	unk_0x79F020FF9EDC0748(Local_109[bParam0 /*18*/], true);
	unk_0x9F7794730795E019(Local_109[bParam0 /*18*/], 17, true);
	unk_0x70A2D1137C8ED7C9(Local_109[bParam0 /*18*/], 2, false);
	unk_0x3910051CCECDB00C(Local_109[bParam0 /*18*/], false);
	unk_0x971D38760FBC02EF(Local_109[bParam0 /*18*/], true);
	unk_0x614DA022990752DC(Local_109[bParam0 /*18*/], 100);
	unk_0x9AC577F5A12AD8A9(Local_109[bParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x1913FE4CBF41C463(Local_109[bParam0 /*18*/], 101, true);
	unk_0x1913FE4CBF41C463(Local_109[bParam0 /*18*/], 185, false);
	unk_0x6B76DC1F3AE6E6A3(Local_109[bParam0 /*18*/], 300, false);
	unk_0x262B14F48D29DE80(Local_109[bParam0 /*18*/], 3, (bParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam0) / 2f)), 0);
	if (Global_3 || bLocal_56)
	{
		unk_0x3882114BDE571AD4(Local_109[bParam0 /*18*/], true);
		unk_0x6B76DC1F3AE6E6A3(Local_109[bParam0 /*18*/], 500, false);
	}
	unk_0x0703B9079823DA4A(Local_109[bParam0 /*18*/], 1);
	unk_0x9F7794730795E019(Local_109[bParam0 /*18*/], 2, true);
	unk_0x433083750C5E064A(Local_109[bParam0 /*18*/], 2f);
	unk_0x3910051CCECDB00C(Local_109[bParam0 /*18*/], false);
	unk_0x560A43136EB58105(Local_109[bParam0 /*18*/], false);
	Local_109[bParam0 /*18*/].f_2 = unk_0x509D5878EB39E842(joaat("prop_pap_camera_01"), unk_0x17C07FC640E86B4E(Local_109[bParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	unk_0x6B9BBD38AB0796DF(Local_109[bParam0 /*18*/].f_2, Local_109[bParam0 /*18*/], unk_0x3F428D08BE5AAE31(Local_109[bParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	if (unk_0x7239B21A38F536BA(Local_109[0 /*18*/].f_2))
	{
		unk_0xEA1C610A04DB6BBB(Local_109[0 /*18*/].f_2, false, false);
	}
	Local_109[bParam0 /*18*/].f_17 = unk_0xEEF059FAD016D209(Local_109[bParam0 /*18*/]);
}

bool func_66(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_67(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_109[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

bool func_68(int iParam0)
{
	return iParam0 * 2;
}

void func_69(int iParam0)
{
	Local_108[iParam0 /*18*/].f_17 = 0;
}

int func_70()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		bVar0 = false;
		if (func_73())
		{
			if (unk_0x7239B21A38F536BA(func_72()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(func_72(), true), Local_53) < 5f && unk_0xD5037BA82E12416F(bLocal_70) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x4C241E39B23DF959(bLocal_70, false))
		{
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false) && unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
			{
				fLocal_151 = (fLocal_151 + unk_0x15C40837039FFAF7());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0x15C40837039FFAF7());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_57)
		{
			if (!unk_0xA808AA1D79230FC2(bLocal_67, bLocal_70))
			{
				if (unk_0x47E4E977581C5B55(bLocal_67))
				{
					bVar1 = true;
				}
				iLocal_57 = 0;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0xA808AA1D79230FC2(bLocal_67, bLocal_70))
			{
				iLocal_57 = 1;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x4C241E39B23DF959(bLocal_70, false) && (!bLocal_129 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_53, Local_52) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x4C241E39B23DF959(bLocal_70, false) && func_71(bLocal_70)) && (!bLocal_129 || iLocal_45 == 1)) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_67, true), Local_50) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x4C241E39B23DF959(bLocal_70, false) && unk_0xCFB0A0D8EDD145A3(bLocal_70))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0xD53343AA4FB7DD28(false, 2) == 1)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_71(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (((unk_0x679BE1DAF71DA874(bParam0, 0, 7000) || unk_0x679BE1DAF71DA874(bParam0, 3, 30000)) || unk_0x679BE1DAF71DA874(bParam0, 2, 30000)) || unk_0x679BE1DAF71DA874(bParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if ((unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/])) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
		{
			if (unk_0xB7A628320EFF8E47(Local_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0;
}

int func_73()
{
	if (unk_0x4C241E39B23DF959(bLocal_70, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (func_75(Local_109[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]) || unk_0x5F9532F3B5CC2551(Local_109[iVar0 /*18*/], false))
			{
				if (iLocal_138[iVar0] > 50)
				{
					iLocal_110++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_75(bool bParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7))
		{
			unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		}
		if (!bParam2)
		{
			if (unk_0x3F2023999AD51C1F(Var0, 5f, true))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6) && !unk_0x65F0C5AE05943EC7(unk_0xD80958FC74E988A6())) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6())) && unk_0xB7A628320EFF8E47(Local_52, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0)) && (func_76(Local_52, bParam0) && unk_0xB7A628320EFF8E47(Local_52, unk_0x3FEF770D40960D5A(bParam0, true)) < 100f)) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				return 1;
			}
			if (iLocal_137 > 150)
			{
				return 1;
			}
		}
		if (unk_0x2F09F7976C512404(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x7239B21A38F536BA(bParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_76(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	Var0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	Var1 = { unk_0x1899F328B0E12848(bParam1, 0f, 1f, 0f) - Var0 };
	Var2 = { Param0 - Var0 };
	fVar3 = func_77(Var1, Var2);
	if (fVar3 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_78()
{
	if (iLocal_45 != 11)
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
		{
			unk_0x86A652570E5F25DD(&bLocal_123);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_124))
		{
			unk_0x86A652570E5F25DD(&bLocal_124);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
		{
			unk_0x86A652570E5F25DD(&bLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) < 3)
		{
			if (!func_81())
			{
				func_79("REPAP_COP1");
			}
		}
		else
		{
			func_187(5);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_79(char* sParam0)
{
	if ((unk_0x9CD27B0045628463() - iLocal_197) > 5000)
	{
		if (!func_80())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_197 = unk_0x9CD27B0045628463();
			}
		}
	}
}

int func_80()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0xB7A628320EFF8E47(Local_52, Local_53) < 400f)
	{
		if (!iLocal_111 && (unk_0x9CD27B0045628463() - iLocal_113) > 5000)
		{
			if (iLocal_63 > 10)
			{
				iLocal_111 = 1;
				iLocal_63 = 0;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0x9CD27B0045628463() - iLocal_117) > 4000)
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				if (iLocal_118 > 2)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_187(5);
					}
				}
				else
				{
					iLocal_116 = 1;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0x9CD27B0045628463() - iLocal_115) > 15000)
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iLocal_114 = 1;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_113 = unk_0x9CD27B0045628463();
					iLocal_111 = 0;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_113 = unk_0x9CD27B0045628463();
				iLocal_111 = 0;
				iLocal_112 = 1;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_117 = unk_0x9CD27B0045628463();
				iLocal_116 = 0;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_115 = unk_0x9CD27B0045628463();
				iLocal_114 = 0;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_82()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		unk_0x971D38760FBC02EF(bLocal_67, true);
		unk_0xBF25EB89375A37AD(255, iLocal_55, joaat("player"));
		if (!Global_3 && !bLocal_56)
		{
			unk_0x1913FE4CBF41C463(bLocal_67, 317, true);
			unk_0x9F8AA94D6D97DBF4(bLocal_67, false);
		}
	}
	func_86(-1, 0);
	func_83();
	unk_0xB165AB7C248B2DC1(62);
	func_280();
}

void func_83()
{
	func_84();
}

int func_84()
{
	if (func_85(0))
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

int func_85(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_86(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_103(iParam0))
	{
		func_102(iParam0, bParam1);
		if (!func_101(51))
		{
			func_97("RE_REWARD", 1, 0, 4000, 10000, func_100(), 0, 138, 0);
			func_96(51);
		}
		if (func_95(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_94(iParam0, bParam1) != 322)
		{
			func_88(func_94(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_87(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_87(7);
			}
			else
			{
				func_87(1);
			}
		}
	}
}

void func_87(int iParam0)
{
	Global_113372 = iParam0;
}

void func_88(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_92((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_89();
	}
}

void func_89()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	bVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		bVar9 = Global_113112;
	}
	else
	{
		bVar9 = Global_113126;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_113122, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_113105, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_113123, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_113106, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_113124, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_113107, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_113125, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_113108, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), bVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_113112, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + bVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_113129, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_113130, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_113131, true);
	if (bVar8 > 0f && unk_0xF34EE736CF047844(bVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_91(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_90() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_84();
				}
			}
		}
	}
}

int func_90()
{
	return Global_31959;
}

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (bParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, bParam1);
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_93();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_93()
{
	return Global_1574918;
}

int func_94(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_96(int iParam0)
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

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_99();
	}
}

void func_99()
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

int func_100()
{
	func_25();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_104()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_105(Var0);
	return uVar1;
}

int func_105(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_106()
{
	if (Global_32198)
	{
		func_87(4);
		return 1;
	}
	return 0;
}

void func_107()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
	{
		unk_0x86A652570E5F25DD(&bLocal_121);
	}
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				unk_0x22B0D0E37CCB840D(bLocal_67, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
			}
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
				{
					if (unk_0xE31C2C72B8692B64(Local_109[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_109[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 900f)
					{
						if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x539E0AE3E6634B9F(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x9614299DCB53E54B(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_108.f_0)
			{
				if (unk_0x7239B21A38F536BA(Local_108[iVar0 /*18*/]))
				{
					if (unk_0xE31C2C72B8692B64(Local_108[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_108[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 900f)
					{
						unk_0xEA386986E786A54F(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(false);
			iLocal_203 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if ((unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/])) && !unk_0x5F9532F3B5CC2551(Local_109[iVar0 /*18*/], false))
				{
					iVar1++;
					func_52(unk_0xD80958FC74E988A6(), iVar0);
					if (unk_0xE31C2C72B8692B64(Local_109[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_109[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 2500f)
					{
						if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x539E0AE3E6634B9F(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x9614299DCB53E54B(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(func_72(), true)) < 100f)
				{
					bVar2 = unk_0xD53343AA4FB7DD28(false, 3);
					if (func_24() == 1)
					{
						func_23(&Local_139, 6);
						func_23(&Local_139, 7);
						func_23(&Local_139, 8);
						switch (bVar2)
						{
							case 0:
								func_22(&Local_139, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[6 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[6 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_139, 7, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[7 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[7 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_139, 8, func_72(), "PAP3ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[8 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[8 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_139, 6);
						func_23(&Local_139, 5);
						bVar2 = unk_0xD53343AA4FB7DD28(false, 3);
						switch (bVar2)
						{
							case 0:
								func_22(&Local_139, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_139, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_139, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_139, 6);
						func_23(&Local_139, 5);
						bVar2 = unk_0xD53343AA4FB7DD28(false, 3);
						switch (bVar2)
						{
							case 0:
								func_22(&Local_139, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_139, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_139, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7239B21A38F536BA(Local_139[bVar2 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[bVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_74())
			{
				func_199();
				func_280();
			}
			if (iVar1 == 0)
			{
				func_280();
			}
			break;
	}
}

void func_108(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_202)
	{
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
			{
				unk_0xE1EF3C1216AFF2CD(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_202 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (unk_0xA6DB27D19ECBB7DA(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0x86A652570E5F25DD(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
				{
					if (unk_0x997ABD671D25CA0B(Local_109[iVar0 /*18*/], false))
					{
						unk_0x504D54DF3F6F2247(Local_109[iVar0 /*18*/], false, 0);
					}
					else
					{
						func_52(bLocal_67, iVar0);
					}
				}
				else if (unk_0x77F1BEB8863288D5(Local_109[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xBB9CE077274F6A1B(Local_109[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xE31C2C72B8692B64(Local_109[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_109[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 400f) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_109[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 400f)
			{
				unk_0x9614299DCB53E54B(&(Local_109[iVar0 /*18*/]));
				if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0x539E0AE3E6634B9F(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0xE31C2C72B8692B64(Local_108[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_108[iVar0 /*18*/], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 2500f) && func_58(Local_108[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0x629BFA74418D6239(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0xA6DB27D19ECBB7DA(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x86A652570E5F25DD(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x7239B21A38F536BA(bLocal_67))
	{
		if (unk_0xE31C2C72B8692B64(bLocal_67) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_53) > 2500f)
		{
			unk_0x2595DD4236549CE3(&bLocal_67);
			func_280();
		}
	}
	if (func_74() || func_75(bLocal_67, 1, 1))
	{
		func_187(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0:
			if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
			{
				unk_0x86A652570E5F25DD(&bLocal_121);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
			{
				unk_0x86A652570E5F25DD(&bLocal_122);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_67);
				unk_0x433083750C5E064A(bLocal_67, 3f);
			}
			func_109();
			if (unk_0x2A488C176D52CCA5(Local_52, Local_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_109.f_0)
					{
						if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
							{
								unk_0xE1EF3C1216AFF2CD(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_109.f_0)
				{
					if (unk_0x7239B21A38F536BA(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
						{
							unk_0xE1EF3C1216AFF2CD(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 1:
			if (((unk_0x4C241E39B23DF959(bLocal_70, false) && unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false)) && !bLocal_129) && unk_0x22AC59A870E6A669(bLocal_70, -1, false))
			{
				if (unk_0x2A488C176D52CCA5(Local_53, Local_49) < 100f)
				{
					unk_0xE8854A4326B9E12B(&iVar2);
					unk_0x7AA80209BDA643EB(false, bLocal_70, 0);
					unk_0xE2A2AA2F659D77A7(false, bLocal_70, Local_49, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x0F3E34E968EA374E(false, bLocal_70, Local_49, 288.7089f, 1, 50f, false);
					unk_0xF0AF20AA7731F8C3(false, bLocal_70, unk_0x3FEF770D40960D5A(bLocal_70, true), 5, 10f, 262144, 2f, 2f, true);
					unk_0xD3DBCE61A490BE02(false, bLocal_70, 0);
					unk_0x15D3A79D4E44B913(false, Local_50, 1f, -1, 0.25f, 512, bLocal_51);
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
					unk_0x39E72BC99E6360CB(iVar2);
					unk_0x5ABA3986D90D8A3B(bLocal_67, iVar2);
					unk_0x3841422E9C488D8C(&iVar2);
				}
				else
				{
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0x7AA80209BDA643EB(false, bLocal_70, 0);
					unk_0x480142959D337D00(false, bLocal_70, 15f, 786468);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(bLocal_67, iVar3);
					unk_0x3841422E9C488D8C(&iVar3);
				}
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0x997ABD671D25CA0B(bLocal_67, false))
				{
					unk_0x504D54DF3F6F2247(bLocal_67, false, 0);
				}
				iLocal_130++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x22B0D0E37CCB840D(bLocal_67, unk_0xD80958FC74E988A6(), 3000f, -1, true, false);
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_53, Local_49) < 100f)
				{
					unk_0xE8854A4326B9E12B(&iVar4);
					unk_0x15D3A79D4E44B913(false, Local_50, 1f, -1, 0.25f, 512, bLocal_51);
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
					unk_0x39E72BC99E6360CB(iVar4);
					unk_0x5ABA3986D90D8A3B(bLocal_67, iVar4);
					unk_0x3841422E9C488D8C(&iVar4);
				}
				else
				{
					unk_0xBB9CE077274F6A1B(bLocal_67, 1193033728, 0);
				}
				iLocal_130 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_280();
			}
			break;
	}
}

void func_109()
{
	Global_20471 = 0;
	func_110();
}

void func_110()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_111()
{
	func_109();
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0xB7A628320EFF8E47(Local_52, Local_53) < 900f)
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_199();
			func_187(10);
		}
		unk_0xC80A74AC829DDD92(bLocal_67, -2065892691);
	}
	else
	{
		func_199();
		func_187(10);
	}
}

void func_112()
{
	int iVar0;
	
	switch (iLocal_130)
	{
		case 0:
			func_146();
			if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
				{
					bLocal_121 = func_189(bLocal_67, 0, 145);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_124))
				{
					unk_0x86A652570E5F25DD(&bLocal_124);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
				{
					unk_0x86A652570E5F25DD(&bLocal_123);
				}
				unk_0xE1EF3C1216AFF2CD(bLocal_67);
				unk_0xE8854A4326B9E12B(&iVar0);
				unk_0xD3DBCE61A490BE02(false, bLocal_70, 0);
				unk_0x15D3A79D4E44B913(false, Local_50, 1f, 30000, 0.25f, 512, bLocal_51);
				unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
				unk_0x39E72BC99E6360CB(iVar0);
				unk_0x5ABA3986D90D8A3B(bLocal_67, iVar0);
				unk_0x3841422E9C488D8C(&iVar0);
				if (unk_0x5891CAC5D4ACFF74(bLocal_67))
				{
					unk_0xED74007FFB146BC2(bLocal_67);
				}
				func_109();
				iLocal_130++;
			}
			break;
		
		case 1:
			if (!func_80() && !unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				if (unk_0x20B60995556D004F(bLocal_67, Local_50, 3f, 3f, 3f, false, true, 0) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_50, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				func_145(0);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
				{
					func_114(func_24(), 1, 150, 0, 1);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (!func_80() && !unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				unk_0xC1B1E9A034A63A62(false);
				iLocal_130++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_113())
				{
					func_82();
				}
			}
			break;
	}
}

int func_113()
{
	return 1;
}

void func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_144(iParam0) == 3)
	{
		return;
	}
	if (func_144(iParam0) == 4)
	{
		return;
	}
	func_115(func_144(iParam0), 1, iParam1, bParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x767FBC2AC802EF3D(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + bParam2);
		unk_0xB3271D7AB655B441(iVar1, bVar0, true);
	}
}

int func_115(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_143();
	if (bParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_142(99, 1);
					func_141(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_141(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_141(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_127(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_124(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_124(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_property"), bParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_124(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_123(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_142(95, bParam3);
					break;
				
				case 1:
					func_142(97, bParam3);
					break;
				
				case 2:
					func_142(96, bParam3);
					break;
			}
			func_142(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_118(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_118(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + bParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && bParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + bParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_141(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_141(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_141(joaat("sp2_total_cash_earned"), bParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - bParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - bParam3);
			if (bParam4)
			{
				bVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (bVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = bParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_117(iParam0);
	if (Global_43052 == 15)
	{
		func_116(0);
	}
	return 1;
}

void func_116(bool bParam0)
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

void func_117(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), bVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), bVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), bVar0, true);
			break;
	}
}

void func_118(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_92(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_92(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_92(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_92(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_121(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_121(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_121(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_121(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_121(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_121(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_120() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_120() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_119(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_119(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_121(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_122(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
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

void func_123(int iParam0)
{
	func_142(93, iParam0);
	func_142(29, iParam0);
	func_142(30, iParam0);
}

int func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_126(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_126(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_126(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_126(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_125(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_125(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_125(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_125(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_125(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_125(8277, -1, 0);
		if (iVar11 == 0 || bVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_120() /*5567*/].f_681.f_10, iParam0);
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_122(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_126(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_93();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_127(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), bVar1, true);
		func_91(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_128(27, 1);
	return 1;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_129(iParam0, iParam1);
}

int func_129(int iParam0, int iParam1)
{
	if (func_17(14) && !func_140(iParam0))
	{
		return 0;
	}
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_139(&Global_4541529))
	{
		if (func_137(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_130(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_140(iParam1))
	{
		return 0;
	}
	if (func_137(uParam0, iParam1))
	{
		return 0;
	}
	if (func_136(uParam0) < 0f)
	{
		func_135(uParam0, 0);
	}
	func_133(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_131(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_140(iParam1))
	{
		return 0;
	}
	if (func_137(uParam0, iParam1))
	{
		return 0;
	}
	if (func_136(uParam0) < 0f)
	{
		func_135(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_132(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_132(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_134(uParam0, iVar0);
		iVar0++;
	}
	func_135(uParam0, (Global_4541528 - 0.5f));
}

void func_134(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_135(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_136(var uParam0)
{
	return uParam0->f_80;
}

bool func_137(var uParam0, int iParam1)
{
	return func_138(uParam0, iParam1) != -1;
}

int func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_139(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_141(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_58896[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_58896[iParam0 /*7*/].f_1, bVar0, true);
	}
}

void func_143()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_144(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_145(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		if (iLocal_170 > 1)
		{
			if (!unk_0xD71649DB0A545AA3(bLocal_67, unk_0xD80958FC74E988A6(), 60f))
			{
				iLocal_170 = 0;
				iLocal_171 = 0;
			}
		}
		switch (iLocal_170)
		{
			case 0:
				unk_0xE1EF3C1216AFF2CD(bLocal_67);
				unk_0x69F4BE8C8CC4796C(bLocal_67, unk_0xD80958FC74E988A6(), -1, 16, 2);
				unk_0xE8854A4326B9E12B(&iLocal_169);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 16, 2);
				unk_0x39E72BC99E6360CB(iLocal_169);
				unk_0x5ABA3986D90D8A3B(bLocal_67, iLocal_169);
				unk_0x3841422E9C488D8C(&iLocal_169);
				iLocal_170++;
				break;
			
			case 1:
				if (unk_0x77F1BEB8863288D5(bLocal_67, 242628503) != 1)
				{
					iLocal_170++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0:
							if (!unk_0x1F0B79228E461EC9(bLocal_67, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, false, false, false, false);
							}
							else if (unk_0x346D81500D088F42(bLocal_67, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, false, false, false, false);
								iLocal_171++;
							}
							break;
						
						case 1:
							if (!unk_0x1F0B79228E461EC9(bLocal_67, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, false, false, false, false);
							}
							else if (unk_0x346D81500D088F42(bLocal_67, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, false, false, false, false);
								iLocal_171++;
							}
							break;
						
						case 2:
							if (!unk_0x1F0B79228E461EC9(bLocal_67, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, false, false, false, false);
							}
							else if (unk_0x346D81500D088F42(bLocal_67, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, false, false, false, false);
								iLocal_171 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_146()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_125))
	{
		unk_0x86A652570E5F25DD(&bLocal_125);
	}
}

void func_147()
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bLocal_70, false))
	{
		switch (iLocal_130)
		{
			case 0:
				if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					func_146();
					func_151(1, 1, 0, 0, 0, 0, 0);
					if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
					{
						unk_0x86A652570E5F25DD(&bLocal_123);
					}
					if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
					{
						unk_0x86A652570E5F25DD(&bLocal_121);
					}
					if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
					{
						unk_0x86A652570E5F25DD(&bLocal_122);
					}
					if (unk_0x5891CAC5D4ACFF74(bLocal_67))
					{
						unk_0xED74007FFB146BC2(bLocal_67);
					}
					func_149();
					if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
					{
						unk_0x6FA46612594F7973(bLocal_67, unk_0x1899F328B0E12848(bLocal_70, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 1280);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_148(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(false);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(false);
						}
					}
					func_114(func_24(), 1, 750, 0, 1);
					if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
					{
						unk_0x6FA46612594F7973(bLocal_67, unk_0x1899F328B0E12848(bLocal_70, -10f, 5f, 0f), -1, 16, 4);
						unk_0x2208438012482A1A(bLocal_67, false, false);
					}
					unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_130++;
				}
				break;
			
			case 1:
				if (!func_80() && !unk_0x84A2DD9AC37C35C1(bLocal_67))
				{
					unk_0xE8854A4326B9E12B(&iVar0);
					unk_0xD3DBCE61A490BE02(false, bLocal_70, 0);
					unk_0x15D3A79D4E44B913(false, Local_50, 1f, 30000, 0.25f, 512, bLocal_51);
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B(bLocal_67, iVar0);
					unk_0x3841422E9C488D8C(&iVar0);
					iLocal_130++;
					unk_0xC1B1E9A034A63A62(false);
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (!unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
					{
						unk_0xC1B1E9A034A63A62(false);
						if (bLocal_129)
						{
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
							func_151(0, 1, 0, 0, 0, 0, 0);
							iLocal_130 = 5;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0x4C241E39B23DF959(bLocal_70, false)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0xD3DBCE61A490BE02(unk_0xD80958FC74E988A6(), bLocal_70, 0);
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_70, 10000, 0, 3);
					iLocal_130++;
				}
				break;
			
			case 4:
				if (unk_0x4C241E39B23DF959(bLocal_70, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_151(0, 1, 0, 0, 0, 0, 0);
					unk_0xB664292EAECF7FA6(bLocal_70, 2);
					unk_0xC1B1E9A034A63A62(false);
					iLocal_130++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_113())
					{
						if (!bLocal_129)
						{
							if (!func_101(19))
							{
								func_97("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_96(19);
							}
						}
						func_82();
					}
				}
				break;
			}
	}
}

bool func_148(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_149()
{
	Global_20471 = 0;
	func_150();
}

void func_150()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_22616 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

void func_151(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_158(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_14())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_157(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_158(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_157(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_155(unk_0x4F8644AF03D0E0D6())) && !func_153(unk_0x4F8644AF03D0E0D6(), 0)) && !func_152()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_155(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_152()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_153(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_154(-1, 0) == 8;
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

int func_154(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

int func_155(bool bParam0)
{
	if (func_153(bParam0, 0))
	{
		return 1;
	}
	if (func_156())
	{
		if (bParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_156()
{
	return BitTest(Global_2621446, 3);
}

int func_157(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_158(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 13);
	}
}

void func_159()
{
	if (Global_3 || bLocal_56)
	{
		unk_0x245A6883D966D537(0.7f);
	}
	if (bLocal_129 && !unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		if (!func_180(bLocal_67))
		{
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
			{
				bLocal_121 = func_189(bLocal_67, 0, 145);
			}
		}
		else
		{
			if (func_73())
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_123))
				{
					bLocal_123 = func_56(Local_49, 1);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_124))
				{
					unk_0x86A652570E5F25DD(&bLocal_124);
				}
			}
			else
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_124))
				{
					bLocal_124 = func_56(Local_50, 1);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
				{
					unk_0x86A652570E5F25DD(&bLocal_123);
				}
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
			{
				unk_0x86A652570E5F25DD(&bLocal_121);
			}
		}
		if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
		{
			if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && func_179(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				bLocal_70 = false;
				bLocal_70 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				unk_0xAD738C3085FE7E11(bLocal_70, true, true);
				unk_0xB664292EAECF7FA6(bLocal_70, 1);
				unk_0x8BA6F76BC53A1493(bLocal_70, false, 0);
			}
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_124) && !unk_0x997ABD671D25CA0B(bLocal_67, false))
		{
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_50, 15f, 15f, 15f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_187(4);
			}
		}
		else if (iLocal_130 != 100)
		{
			if (func_73() && func_178(1, 1, 1))
			{
				if (unk_0x51210CED3DA1C78A(bLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					iLocal_130 = 100;
				}
			}
			else if (!unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_67, -1794415470) != 1)
				{
					unk_0xC20E50AA46D09CA8(bLocal_67, bLocal_70, -1, func_177(bLocal_70), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 100)
		{
			if (func_73() && func_178(1, 1, 1))
			{
				if (unk_0x51210CED3DA1C78A(bLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					iLocal_130 = 100;
				}
			}
		}
		func_174(1);
	}
	switch (iLocal_130)
	{
		case 0:
			if (func_73())
			{
				if (unk_0x1F0B79228E461EC9(bLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x1F0B79228E461EC9(bLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x020E5F00CDA207BA(0.5f);
					iLocal_130++;
				}
				if (!func_173())
				{
					func_168();
				}
			}
			break;
		
		case 1:
			if (!func_81())
			{
				if (func_73())
				{
					if (!func_80())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_81())
			{
				if (func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(false);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 99;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME1", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 4:
			if (func_24() == 0)
			{
				if (func_164("REPAP_HOME1M", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_164("REPAP_HOME1F", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			else if (func_164("REPAP_HOME1T", (func_167() && !func_81())))
			{
				iLocal_130++;
			}
			break;
		
		case 5:
			if (func_164("REPAP_HOME1L", (func_167() && !func_81())))
			{
				unk_0xC1B1E9A034A63A62(false);
				iLocal_130++;
			}
			break;
		
		case 6:
			if (!func_81())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_167())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 8:
			if (func_164("REPAP_HOME2L", (func_167() && !func_81())))
			{
				iLocal_130++;
			}
			break;
		
		case 9:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(false);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME3", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 11:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(false);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME4", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 13:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(false);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_NOBAN", (func_167() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 15:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 17:
			func_81();
			break;
		
		case 100:
			if (func_161(bLocal_70, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_188("");
				func_187(3);
			}
			break;
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		func_78();
	}
	if (func_24() == 2)
	{
		if ((func_160() && !func_173()) && iLocal_45 != 8)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
			{
				if (unk_0x20B60995556D004F(bLocal_67, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!unk_0x9BB01E3834671191(bLocal_67, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
					{
						unk_0x9F3480FE65DB31B5(bLocal_67, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
					}
					func_109();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_160()
{
	return Global_32197;
}

int func_161(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	if (!bParam6)
	{
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
	}
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 352, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	func_162(bParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(bParam0, fParam1, bParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x36D782F68B309BDA(bParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(bParam0))
			{
				unk_0x81E1552E35DC3839(bParam0, false);
			}
		}
	}
}

int func_163(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_164(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_58 = 1;
				iLocal_59 = 0;
			}
		}
		else if (iLocal_59)
		{
			if (func_166(&Local_139, cLocal_133, sParam0, &Local_61, 4, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == -1)
			{
				if (!func_80())
				{
					iLocal_62 = unk_0x9CD27B0045628463();
				}
			}
			else if ((unk_0x9CD27B0045628463() - iLocal_62) > 500)
			{
				iLocal_62 = -1;
				iLocal_58 = 0;
				iLocal_59 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_165() };
		func_149();
		iLocal_59 = 1;
	}
	return 0;
}

struct<6> func_165()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = unk_0x480357EE890C295A();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xAC09CA973C564252(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xAC09CA973C564252(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_166(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_167()
{
	if (bLocal_129)
	{
		if (unk_0x4C241E39B23DF959(bLocal_70, false))
		{
			if (func_73())
			{
				return 1;
			}
		}
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(bLocal_67, false))
		{
			if (unk_0xB7A628320EFF8E47(Local_52, Local_53) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_73();
	}
	return 0;
}

void func_168()
{
	if (func_24() == 2)
	{
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_125))
		{
			func_171();
			bLocal_125 = func_170(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xDF735600A4696DAF(bLocal_125, 269);
			func_169();
		}
	}
}

void func_169()
{
	if (!func_173())
	{
		if (func_24() == 2)
		{
			Global_32197 = 1;
		}
	}
}

bool func_170(struct<3> Param0, bool bParam1)
{
	return func_56(Param0, bParam1);
}

void func_171()
{
	if (func_24() == 2)
	{
		if (!Global_32199)
		{
			func_172("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_172(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_173()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_174(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bLocal_70, false) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		if (func_73())
		{
			if (bParam0)
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_123))
				{
					bLocal_123 = func_56(Local_49, 1);
				}
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
			{
				unk_0x86A652570E5F25DD(&bLocal_121);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
			{
				unk_0x86A652570E5F25DD(&bLocal_122);
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
			{
				unk_0x86A652570E5F25DD(&bLocal_123);
			}
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_122))
				{
					bLocal_122 = func_175(bLocal_70, 0, 0);
				}
			}
			if (!unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
				{
					bLocal_121 = func_189(bLocal_67, 0, 145);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
			{
				unk_0x86A652570E5F25DD(&bLocal_121);
			}
		}
	}
}

bool func_175(bool bParam0, bool bParam1, bool bParam2)
{
	return func_176(bParam0, !bParam1, bParam2);
}

bool func_176(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_57(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(bVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(bVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_57(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_57(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

bool func_177(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = -1;
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xA7C4F2C6E744A550(bParam0) - 1))
		{
			if (bVar0 == -1)
			{
				bVar2 = iVar1;
				if (unk_0x22AC59A870E6A669(bParam0, bVar2, false))
				{
					bVar0 = bVar2;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
	}
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0xBB40DD2270B65366(bVar0, -1, false) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x95EED5A694951F9F(bVar0) < 0.95f || unk_0x95EED5A694951F9F(bVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_179(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x22AC59A870E6A669(bParam0, -1, false))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(bParam0, false, false))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(bParam0, true, false))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 2, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(bool bParam0)
{
	if (unk_0x9BB01E3834671191(bParam0, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
	{
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, 25f, 25f, 25f, false, true, 0))
		{
			unk_0xED74007FFB146BC2(bParam0);
		}
		return 1;
	}
	else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, Global_19, false, true, 0))
	{
		unk_0x9F3480FE65DB31B5(bParam0, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
	}
	return 0;
}

void func_181()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0x4C241E39B23DF959(bLocal_70, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, true))
		{
			if (unk_0x77F1BEB8863288D5(bLocal_67, -1794415470) != 1)
			{
				unk_0xC20E50AA46D09CA8(bLocal_67, bLocal_70, -1, func_177(bLocal_70), 2f, 8388608, 0);
			}
		}
		if ((unk_0x7239B21A38F536BA(func_72()) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_67, true), unk_0x3FEF770D40960D5A(func_72(), true)) < 100f) && (unk_0xD5037BA82E12416F(bLocal_70) < 5f || !unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0x1F0B79228E461EC9(bLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xA808AA1D79230FC2(bLocal_67, bLocal_70))
				{
					unk_0xEA47FE3719165B94(bLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, false, false, false, false);
				}
			}
			else if (!unk_0x1F0B79228E461EC9(bLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xA808AA1D79230FC2(bLocal_67, bLocal_70))
			{
				unk_0xEA47FE3719165B94(bLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, false, false, false, false);
			}
		}
		else if ((unk_0x1F0B79228E461EC9(bLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x1F0B79228E461EC9(bLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xA808AA1D79230FC2(bLocal_67, bLocal_70))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_67);
		}
		switch (iLocal_130)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x7239B21A38F536BA(func_72()) && !unk_0x84A2DD9AC37C35C1(func_72()))
					{
						func_23(&Local_139, 4);
						func_22(&Local_139, 4, func_72(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_109();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x020E5F00CDA207BA(0.2f);
						unk_0x9F8AA94D6D97DBF4(bLocal_67, true);
						unk_0xBF25EB89375A37AD(1, iLocal_55, joaat("player"));
						bLocal_119 = unk_0x509D5878EB39E842(joaat("prop_ld_test_01"), Local_68, true, true, false);
						unk_0x1A9205C1B9EE827F(bLocal_119, false, false);
						unk_0xEA1C610A04DB6BBB(bLocal_119, false, false);
						unk_0x428CA6DBD1094446(bLocal_119, true);
						iLocal_130++;
					}
				}
				break;
			
			case 1:
				func_183();
				if (!unk_0x51210CED3DA1C78A(bLocal_67, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, false, true, 0))
				{
					iLocal_130++;
					iLocal_131 = unk_0x9CD27B0045628463();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 1 && iLocal_200 != 3) && iLocal_200 != 6) && iLocal_200 != 9) && iLocal_200 != 11) && iLocal_200 != 13)
					{
						bLocal_199 = false;
						if (unk_0x7239B21A38F536BA(func_72()) && unk_0x751B70C3D034E187(func_72(), bLocal_70, 5f, 5f, 3f, false, true, 0))
						{
							bLocal_198 = true;
						}
					}
				}
				else
				{
					if (!func_80())
					{
						bLocal_199 = true;
					}
					if (unk_0x7239B21A38F536BA(func_72()))
					{
						if (!unk_0x751B70C3D034E187(func_72(), bLocal_70, 5f, 5f, 3f, false, true, 0))
						{
							bLocal_198 = false;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_81())
					{
						if (!func_182())
						{
							func_183();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_163("REPAP_RES1"))
								{
									iLocal_201 = unk_0x9CD27B0045628463();
									iLocal_200++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x9CD27B0045628463();
									iLocal_200++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT3M", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT3F", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_164("REPAP_CHT3T", ((func_167() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 4)
								{
									iLocal_201 = unk_0x9CD27B0045628463();
								}
							}
							break;
						
						case 5:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT4M", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT4F", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_164("REPAP_CHT4T", ((func_167() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 5)
								{
									iLocal_201 = unk_0x9CD27B0045628463();
								}
							}
							break;
						
						case 6:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT5M", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT5F", ((func_167() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_164("REPAP_CHT5T", ((func_167() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 6)
								{
									iLocal_201 = unk_0x9CD27B0045628463();
								}
							}
							break;
						
						case 7:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x9CD27B0045628463();
									iLocal_200++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x9CD27B0045628463();
									iLocal_200++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x9CD27B0045628463() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_198 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0x7239B21A38F536BA(func_72()))
				{
					unk_0xC1B1E9A034A63A62(false);
					iLocal_130++;
					func_149();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_73())
					{
						iLocal_47 = 4;
						iLocal_66 = unk_0x9CD27B0045628463();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_73())
				{
					func_188("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_187(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_174(0);
	}
}

int func_182()
{
	int iVar0;
	
	iVar0 = func_30();
	if ((unk_0x9CD27B0045628463() - iLocal_196) > 5000)
	{
		if (unk_0x7239B21A38F536BA(bLocal_70) && unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, true))
			{
				if (iVar0 != -1 && (unk_0x9CD27B0045628463() - Local_109[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_196 = unk_0x9CD27B0045628463();
						return 1;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_196 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

void func_183()
{
	bool bVar0;
	
	if ((unk_0x9CD27B0045628463() - iLocal_145) > bLocal_146)
	{
		if ((!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0x7239B21A38F536BA(func_72())) && !unk_0x84A2DD9AC37C35C1(func_72()))
		{
			if (unk_0xF1B760881820C952(Local_53, unk_0x3FEF770D40960D5A(func_72(), true), true) < 8f)
			{
				bVar0 = unk_0xD53343AA4FB7DD28(false, 5);
				func_23(&Local_139, 4);
				func_23(&Local_139, 5);
				func_23(&Local_139, 6);
				func_23(&Local_139, 7);
				switch (bVar0)
				{
					case 0:
						func_22(&Local_139, 4, func_72(), "PAPARAZZO", 0, 1);
						if (unk_0x7239B21A38F536BA(Local_139[4 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
								bLocal_146 = unk_0xD53343AA4FB7DD28(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_22(&Local_139, 4, func_72(), "PAPARAZZO", 0, 1);
						if (unk_0x7239B21A38F536BA(Local_139[4 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
								bLocal_146 = unk_0xD53343AA4FB7DD28(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_22(&Local_139, 5, func_72(), "PAP2", 0, 1);
						if (unk_0x7239B21A38F536BA(Local_139[5 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[5 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
								bLocal_146 = unk_0xD53343AA4FB7DD28(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_22(&Local_139, 6, func_72(), "PAP3", 0, 1);
						if (unk_0x7239B21A38F536BA(Local_139[6 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[6 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
								bLocal_146 = unk_0xD53343AA4FB7DD28(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_22(&Local_139, 7, func_72(), "PAP4", 0, 1);
						if (unk_0x7239B21A38F536BA(Local_139[7 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_139[7 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x9CD27B0045628463();
								bLocal_146 = unk_0xD53343AA4FB7DD28(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_184()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar4;
	char cVar5[24];
	int iVar6;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
		{
			unk_0x75A16C3DA34F1245(bLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0:
				unk_0xD3BD40951412FEF6("random@paparazzi@peek");
				unk_0xD3BD40951412FEF6("random@paparazzi@trans");
				unk_0xD3BD40951412FEF6("random@paparazzi@wait");
				if ((unk_0xD031A9162D01088C("random@paparazzi@peek") && unk_0xD031A9162D01088C("random@paparazzi@trans")) && unk_0xD031A9162D01088C("random@paparazzi@wait"))
				{
					bLocal_174 = unk_0x8C18E0F9080ADD73(Local_187, Local_188, 2);
					unk_0xEEA929141F699854(bLocal_67, bLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1000f, 0);
					unk_0x69F4BE8C8CC4796C(bLocal_67, unk_0xD80958FC74E988A6(), -1, 4, 4);
					sLocal_175[0] = "peek_a";
					sLocal_175[1] = "peek_b";
					sLocal_175[2] = "peek_c";
					unk_0x020E5F00CDA207BA(0.2f);
					iLocal_172 = 0;
					iLocal_189 = 0;
					bLocal_194 = false;
					iLocal_60 = 1;
					iLocal_190 = 0;
					iLocal_57 = 0;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 1:
				if (BitTest(iLocal_190, 0))
				{
					if (!BitTest(iLocal_190, 1))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_190, true);
					}
					else
					{
						iLocal_190 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_181, Local_182, bLocal_183, false, true, 0);
				bVar1 = unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_178, Local_179, bLocal_180, false, true, 0);
				if (unk_0x0C515FAB3FF9EA92(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						bLocal_177 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					bLocal_177 = "right_";
					iVar2 = 1;
				}
				if ((unk_0x25D39B935A038A26(bLocal_174) && unk_0xE4A310B1D7FA73CC(bLocal_174) > 0.9f) || iVar2)
				{
					if (iLocal_190 == 0)
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 3)
						{
							iLocal_176 = 0;
						}
						StringCopy(&cVar3, bLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						bLocal_174 = unk_0x8C18E0F9080ADD73(Local_187, Local_188, 2);
						unk_0xEEA929141F699854(bLocal_67, bLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1000f, 0);
						unk_0x933D6A9EEC1BACD0(&iLocal_190, false);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0x15C40837039FFAF7());
					}
					if ((unk_0x9CD27B0045628463() - iLocal_173) > 5000 && iLocal_190 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_52, Local_53) < (22.2f * 22.2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 4, 0, 0, 0))
							{
								iLocal_192 = 1;
								if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_67, 7f, 7f, 7f, false, true, 0))
								{
									unk_0xE1EF3C1216AFF2CD(bLocal_67);
									StringCopy(&cVar5, bLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									bLocal_174 = unk_0x8C18E0F9080ADD73(Local_187, Local_188, 2);
									unk_0xEEA929141F699854(bLocal_67, bLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1000f, 0);
									unk_0x933D6A9EEC1BACD0(&iLocal_190, false);
								}
								iLocal_173 = unk_0x9CD27B0045628463();
							}
						}
					}
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_184, Local_185, bLocal_186, false, true, 0) && iLocal_190 == 0)
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_120))
					{
						unk_0x86A652570E5F25DD(&bLocal_120);
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
						{
							bLocal_121 = func_189(bLocal_67, 0, 145);
						}
					}
					unk_0xE1EF3C1216AFF2CD(bLocal_67);
					bLocal_174 = unk_0x8C18E0F9080ADD73(Local_187, Local_188, 2);
					if (bVar1)
					{
						unk_0xEEA929141F699854(bLocal_67, bLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					else
					{
						unk_0xEEA929141F699854(bLocal_67, bLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					unk_0x933D6A9EEC1BACD0(&iLocal_190, false);
					iLocal_130++;
				}
				break;
			
			case 2:
				if (unk_0x25D39B935A038A26(bLocal_174) && unk_0xE4A310B1D7FA73CC(bLocal_174) > 0.9f)
				{
					if (unk_0x77F1BEB8863288D5(bLocal_67, 242628503) != 1)
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_67);
						unk_0xEA47FE3719165B94(bLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, false, false, false, false);
						iLocal_170 = 2;
						unk_0xC1B1E9A034A63A62(false);
					}
					iLocal_130++;
				}
				break;
			
			case 3:
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (func_186())
					{
						unk_0x629BFA74418D6239(&bLocal_70);
						bLocal_70 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						unk_0xAD738C3085FE7E11(bLocal_70, true, true);
						unk_0x8BA6F76BC53A1493(bLocal_70, false, 0);
						unk_0xB664292EAECF7FA6(bLocal_70, 1);
						bLocal_129 = true;
					}
				}
				if (!bLocal_129)
				{
					unk_0xB664292EAECF7FA6(bLocal_70, 1);
					if (func_148(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(false);
						bLocal_194 = true;
						iLocal_130 = 100;
					}
				}
				else if (func_148(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					bLocal_194 = true;
					iLocal_130++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_185(Local_68, 1);
				}
				break;
			
			case 4:
				func_55();
				if (unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (unk_0x751B70C3D034E187(bLocal_70, bLocal_67, Global_19 + Vector(2f, 12f, 12f), false, true, 0) && !bLocal_129)
					{
						if (unk_0x77F1BEB8863288D5(bLocal_67, 242628503) != 1 && !iLocal_189)
						{
							unk_0xE8854A4326B9E12B(&iVar6);
							unk_0x15D3A79D4E44B913(false, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, false, 1193033728);
							unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
							unk_0x39E72BC99E6360CB(iVar6);
							unk_0x5ABA3986D90D8A3B(bLocal_67, iVar6);
							unk_0x2208438012482A1A(bLocal_67, false, false);
							unk_0x3841422E9C488D8C(&iVar6);
							iLocal_189 = 1;
						}
						else
						{
							unk_0x433083750C5E064A(bLocal_67, 1f);
							func_185(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_185(Local_68, 1);
					}
					if (!bLocal_129)
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
						{
							if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
							{
								unk_0x86A652570E5F25DD(&bLocal_122);
							}
							if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
							{
								bLocal_121 = func_189(bLocal_67, 0, 145);
							}
						}
					}
					if ((unk_0x751B70C3D034E187(bLocal_70, bLocal_67, Global_19, false, true, 0) && func_179(bLocal_70)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_109();
							if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_172 = 1;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = -5;
							}
							else
							{
								iLocal_130++;
							}
							unk_0xE1EF3C1216AFF2CD(bLocal_67);
							unk_0xC20E50AA46D09CA8(bLocal_67, bLocal_70, -1, func_177(bLocal_70), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_129)
				{
					func_185(Local_68, 1);
				}
				else
				{
					func_185(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (func_161(bLocal_70, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_130 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_67) && unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
					{
						if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
						{
							unk_0x86A652570E5F25DD(&bLocal_121);
						}
						unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
						func_187(1);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false) && !unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, true)) && !unk_0x51210CED3DA1C78A(bLocal_70, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, false, true, 0))
							{
								if (bLocal_129)
								{
									unk_0x70A2D1137C8ED7C9(bLocal_67, 2, true);
									sLocal_132 = "REPAP_GUP";
									func_187(6);
								}
								else
								{
									unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), true, false);
									unk_0x70A2D1137C8ED7C9(bLocal_67, 2, true);
									sLocal_132 = "REPAP_CP";
									func_187(6);
								}
							}
						}
						if (!unk_0xA3EE4A07279BB9DB(bLocal_67, bLocal_70, false))
						{
							if (unk_0x77F1BEB8863288D5(bLocal_67, -1794415470) != 1)
							{
								unk_0xE1EF3C1216AFF2CD(bLocal_67);
								unk_0xC20E50AA46D09CA8(bLocal_67, bLocal_70, -1, func_177(bLocal_70), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_53, unk_0x1899F328B0E12848(bLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0x433083750C5E064A(bLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (!func_80())
					{
						func_109();
						if (func_24() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_24() == 0)
						{
							func_109();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
							iLocal_60 = 0;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 101)
				{
					fLocal_195 = 0f;
				}
				func_185(Local_68, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_52, Local_53) < 49f && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0x15C40837039FFAF7());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0x15C40837039FFAF7() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0x4C241E39B23DF959(bLocal_70, false))
				{
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false) && func_186())
					{
						bLocal_129 = true;
						iLocal_60 = 1;
						bLocal_70 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						unk_0xAD738C3085FE7E11(bLocal_70, true, true);
					}
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_70, false))
					{
						if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
						{
							unk_0x86A652570E5F25DD(&bLocal_122);
						}
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
						{
							bLocal_121 = func_189(bLocal_67, 0, 145);
						}
					}
					else
					{
						if (unk_0xA6DB27D19ECBB7DA(bLocal_121))
						{
							unk_0x86A652570E5F25DD(&bLocal_121);
						}
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_122))
						{
							bLocal_122 = func_175(bLocal_70, 0, 0);
						}
					}
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bLocal_70))
					{
						if (unk_0xA6DB27D19ECBB7DA(bLocal_122))
						{
							unk_0x86A652570E5F25DD(&bLocal_122);
						}
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_121))
						{
							bLocal_121 = func_189(bLocal_67, 0, 145);
						}
						func_188("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 4;
					}
					if (!iLocal_60)
					{
						if (unk_0xB7A628320EFF8E47(Local_52, Local_54) < 9f && func_24() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
							}
						}
					}
				}
				func_185(Local_68, 1);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0x4C241E39B23DF959(bLocal_70, false))
			{
				if (unk_0x2A488C176D52CCA5(Local_52, Local_68) > 75f)
				{
					func_187(6);
				}
				if (func_200())
				{
					func_187(5);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0x4C241E39B23DF959(bLocal_70, false))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_187(5);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0xEEF059FAD016D209(bLocal_70) < bLocal_64)
						{
							if (unk_0xC86D67D52A707CF8(bLocal_70, unk_0xD80958FC74E988A6(), true))
							{
								iLocal_65 = (iLocal_65 + (bLocal_64 - unk_0xEEF059FAD016D209(bLocal_70)));
							}
							unk_0xA72CD9CA74A5ECBA(bLocal_70);
						}
						if (iLocal_65 > 250)
						{
							if (unk_0x0267D00AF114F17A(bLocal_67, bLocal_70) && unk_0x2A488C176D52CCA5(Local_53, Local_54) < 25f)
							{
								func_187(5);
							}
						}
					}
				}
				bLocal_64 = unk_0xEEF059FAD016D209(bLocal_70);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
		{
			if (unk_0xBBCCE00B381F8482(bLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_187(5);
				}
			}
		}
	}
}

void func_185(struct<3> Param0, bool bParam1)
{
	if (unk_0x2A488C176D52CCA5(Local_53, Param0) > 2.5f)
	{
		if (unk_0x77F1BEB8863288D5(bLocal_67, 713668775) != 1)
		{
			unk_0x15D3A79D4E44B913(bLocal_67, Param0, 1f, -1, 0.25f, false, 1193033728);
		}
	}
	else if (unk_0x77F1BEB8863288D5(bLocal_67, 713668775) != 1)
	{
		func_145(bParam1);
		unk_0x69F4BE8C8CC4796C(bLocal_67, unk_0xD80958FC74E988A6(), -1, 16, 2);
	}
}

bool func_186()
{
	return (((((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))))) && unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > 0) && func_179(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) && !Global_112433);
}

void func_187(int iParam0)
{
	iLocal_45 = iParam0;
	iLocal_130 = 0;
}

void func_188(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0x0C515FAB3FF9EA92(iLocal_144[iVar0], bParam0))
		{
			if (unk_0xB65B60556E2A9225(iLocal_144[iVar0]))
			{
				unk_0xDFE8422B3B94E688(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (unk_0x0C515FAB3FF9EA92(iLocal_144[iVar0], bParam0))
		{
			if (!unk_0xB65B60556E2A9225(iLocal_144[iVar0]))
			{
				unk_0x013A80FC08F6E4F2(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

bool func_189(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_176(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

int func_190(int iParam0)
{
	if (func_193())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_95(Global_113375))
		{
			func_191(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_95(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_172(func_192(iParam0), -1);
					Global_113386.f_24995.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_172(func_192(iParam0), -1);
					Global_113386.f_24995.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_172(func_192(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_192(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_193()
{
	switch (func_194(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_194(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_198(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_196(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_195(uParam0, iParam4);
		}
	}
	return 2;
}

void func_195(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_196(int iParam0)
{
	return func_197(iParam0, Global_43052);
}

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_199()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		unk_0x70A2D1137C8ED7C9(bLocal_67, 2, false);
		unk_0x22B0D0E37CCB840D(bLocal_67, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (!unk_0x84A2DD9AC37C35C1(Local_109[iVar0 /*18*/]))
		{
			unk_0x22B0D0E37CCB840D(Local_109[iVar0 /*18*/], unk_0xD80958FC74E988A6(), 300f, -1, false, false);
			unk_0xC80A74AC829DDD92(Local_109[iVar0 /*18*/], -2065892691);
			unk_0x9F8AA94D6D97DBF4(Local_109[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_200()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_109.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_109[iVar1 /*18*/]) && !unk_0x84A2DD9AC37C35C1(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x47D6F43D77935C75(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0x3F2023999AD51C1F(Local_109[iVar1 /*18*/].f_6, 5f, true) || unk_0xAB0F816885B0E483(-1, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0xBBCCE00B381F8482(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_108.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_108[iVar1 /*18*/]))
		{
			if (unk_0x4C241E39B23DF959(Local_108[iVar1 /*18*/], false) && unk_0x47D6F43D77935C75(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x28D3FED7190D3A0B(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_201()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_212())
		{
			return 0;
		}
	}
	if (func_208())
	{
		return 1;
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_202(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_26(func_24()))
		{
			iVar5 = func_100();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_203(iVar1, &Var0);
					fVar4 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_203(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_204(uParam1, "Abigail1", func_206(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 1:
			func_204(uParam1, "Abigail2", func_206(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 2:
			func_204(uParam1, "Barry1", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 3:
			func_204(uParam1, "Barry2", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 4:
			func_204(uParam1, "Barry3", func_206(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 5:
			func_204(uParam1, "Barry3A", func_206(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 6:
			func_204(uParam1, "Barry3C", func_206(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 7:
			func_204(uParam1, "Barry4", func_206(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_205(iParam0), 0, 0);
			break;
		
		case 8:
			func_204(uParam1, "Dreyfuss1", func_206(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 9:
			func_204(uParam1, "Epsilon1", func_206(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 10:
			func_204(uParam1, "Epsilon2", func_206(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 11:
			func_204(uParam1, "Epsilon3", func_206(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 12:
			func_204(uParam1, "Epsilon4", func_206(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 13:
			func_204(uParam1, "Epsilon5", func_206(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 14:
			func_204(uParam1, "Epsilon6", func_206(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 15:
			func_204(uParam1, "Epsilon7", func_206(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 16:
			func_204(uParam1, "Epsilon8", func_206(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 17:
			func_204(uParam1, "Extreme1", func_206(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 18:
			func_204(uParam1, "Extreme2", func_206(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 19:
			func_204(uParam1, "Extreme3", func_206(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 20:
			func_204(uParam1, "Extreme4", func_206(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 21:
			func_204(uParam1, "Fanatic1", func_206(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 22:
			func_204(uParam1, "Fanatic2", func_206(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 23:
			func_204(uParam1, "Fanatic3", func_206(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_205(iParam0), 0, 1);
			break;
		
		case 24:
			func_204(uParam1, "Hao1", func_206(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_205(iParam0), 0, 1);
			break;
		
		case 25:
			func_204(uParam1, "Hunting1", func_206(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 26:
			func_204(uParam1, "Hunting2", func_206(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 27:
			func_204(uParam1, "Josh1", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 28:
			func_204(uParam1, "Josh2", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 29:
			func_204(uParam1, "Josh3", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 30:
			func_204(uParam1, "Josh4", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 31:
			func_204(uParam1, "Maude1", func_206(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 32:
			func_204(uParam1, "Minute1", func_206(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 33:
			func_204(uParam1, "Minute2", func_206(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 34:
			func_204(uParam1, "Minute3", func_206(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 35:
			func_204(uParam1, "MrsPhilips1", func_206(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 36:
			func_204(uParam1, "MrsPhilips2", func_206(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 37:
			func_204(uParam1, "Nigel1", func_206(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 38:
			func_204(uParam1, "Nigel1A", func_206(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 39:
			func_204(uParam1, "Nigel1B", func_206(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 40:
			func_204(uParam1, "Nigel1C", func_206(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 41:
			func_204(uParam1, "Nigel1D", func_206(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 42:
			func_204(uParam1, "Nigel2", func_206(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 43:
			func_204(uParam1, "Nigel3", func_206(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 44:
			func_204(uParam1, "Omega1", func_206(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 45:
			func_204(uParam1, "Omega2", func_206(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 46:
			func_204(uParam1, "Paparazzo1", func_206(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 47:
			func_204(uParam1, "Paparazzo2", func_206(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 48:
			func_204(uParam1, "Paparazzo3", func_206(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 49:
			func_204(uParam1, "Paparazzo3A", func_206(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 50:
			func_204(uParam1, "Paparazzo3B", func_206(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 51:
			func_204(uParam1, "Paparazzo4", func_206(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 52:
			func_204(uParam1, "Rampage1", func_206(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 54:
			func_204(uParam1, "Rampage3", func_206(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 55:
			func_204(uParam1, "Rampage4", func_206(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 56:
			func_204(uParam1, "Rampage5", func_206(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 53:
			func_204(uParam1, "Rampage2", func_206(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 57:
			func_204(uParam1, "TheLastOne", func_206(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 58:
			func_204(uParam1, "Tonya1", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 59:
			func_204(uParam1, "Tonya2", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 60:
			func_204(uParam1, "Tonya3", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 61:
			func_204(uParam1, "Tonya4", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 62:
			func_204(uParam1, "Tonya5", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_204(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_206(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_207(iParam0) };
	if (unk_0xCA042B6957743895(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_207(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_208()
{
	if (func_211() && !func_212())
	{
		return 1;
	}
	if (func_210() && func_209())
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return Global_113104 > 0;
}

int func_210()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_212()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_213()
{
	func_215(39, 1);
	func_215(40, 1);
	func_215(41, 1);
	func_215(42, 1);
	func_215(43, 1);
	func_215(44, 1);
	bLocal_120 = func_214(Local_68);
	bLocal_67 = unk_0xD49F9B0955C367DE(26, joaat("a_f_y_bevhills_03"), Local_68, bLocal_69, true, true);
	unk_0x9F7794730795E019(bLocal_67, 1, true);
	unk_0x9F7794730795E019(bLocal_67, 17, true);
	unk_0x70A2D1137C8ED7C9(bLocal_67, 128, true);
	unk_0x971D38760FBC02EF(bLocal_67, true);
	unk_0xC1670E958EEE24E5(bLocal_67, false);
	unk_0x262B14F48D29DE80(bLocal_67, 0, false, true, 0);
	unk_0x262B14F48D29DE80(bLocal_67, 2, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_67, 3, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_67, 4, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_67, 7, true, false, 0);
	unk_0x262B14F48D29DE80(bLocal_67, 8, false, false, 0);
	unk_0xEEB64139BA29A7CF(bLocal_67, true);
	unk_0x9F8AA94D6D97DBF4(bLocal_67, true);
	unk_0x63F58F7C80513AAD(bLocal_67, false);
	unk_0x6C8065A3B780185B(bLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0x3882114BDE571AD4(bLocal_67, true);
	}
	if (unk_0xF372BC22FCB88606("CELEBRITY", &iLocal_55))
	{
		unk_0xC80A74AC829DDD92(bLocal_67, iLocal_55);
	}
	bLocal_70 = unk_0xAF35D0D2583051B0(joaat("surano"), Local_71, bLocal_72, true, true, false);
	unk_0x239A3351AC1DA385(bLocal_70, Local_71, false, false, true);
	unk_0x77B21BE7AC540F07(bLocal_70, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x8BA6F76BC53A1493(bLocal_70, false, 0);
	unk_0x33E8CD3322E2FE31(bLocal_70, 10);
	unk_0x49733E92263139D1(bLocal_70, 5f);
	unk_0xB664292EAECF7FA6(bLocal_70, 3);
	unk_0x2B6747FAA9DB9D6B(bLocal_70, true);
	unk_0xBB6F1CAEC68B0BCE(bLocal_70, true);
	unk_0x1B9C0099CB942AC6(bLocal_70, unk_0xB28ECA15046CA8B9(true));
	if (func_24() == 1)
	{
		func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_139, 1, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	func_22(&Local_139, 3, bLocal_67, "LACEY", 0, 1);
	iLocal_136[0] = "idle_a";
	iLocal_136[1] = "idle_b";
	iLocal_136[2] = "idle_c";
	iLocal_136[3] = "idle_d";
	iLocal_136[4] = "idle_e";
	iLocal_136[5] = "idle_f";
	iLocal_136[6] = "idle_g";
	iLocal_136[7] = "idle_h";
	iLocal_136[8] = "idle_i";
	iLocal_144[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x0FC2D89AC25A5814(joaat("vader"), true);
	unk_0x0FC2D89AC25A5814(joaat("surano"), true);
	unk_0x0FC2D89AC25A5814(joaat("cavalcade2"), true);
}

bool func_214(struct<3> Param0)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0x45FF974EEE1C8734(bVar0, false);
	unk_0x9029B2F3DA924928(bVar0, 0);
	return bVar0;
}

void func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_219(iParam0, 2, 1))
		{
			func_218(iParam0, 2, 1);
		}
	}
	else if (func_219(iParam0, 2, 1))
	{
		func_216(iParam0, 2, 1);
	}
}

void func_216(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_90() == 0)
		{
			bVar0 = func_125(func_217(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_121(func_217(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_218(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_90() == 0)
		{
			bVar0 = func_125(func_217(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_121(func_217(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_219(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_90() == 0)
		{
			return BitTest(func_125(func_217(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_220()
{
	if (!iLocal_73)
	{
		func_228(&uLocal_74, joaat("surano"));
		func_228(&uLocal_74, joaat("prop_ld_test_01"));
		func_228(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_228(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_228(&uLocal_74, joaat("vader"));
		func_228(&uLocal_74, joaat("cavalcade2"));
		func_228(&uLocal_74, joaat("prop_pap_camera_01"));
		func_225(&uLocal_74);
		iLocal_73 = 1;
	}
	if (!func_221(&uLocal_74))
	{
		return 0;
	}
	unk_0xD3BD40951412FEF6("random@escape_paparazzi@standing@");
	unk_0xD3BD40951412FEF6("random@paparazzi@pap_anims");
	unk_0xD3BD40951412FEF6("random@paparazzi@peek");
	unk_0xD3BD40951412FEF6("random@paparazzi@trans");
	unk_0xD3BD40951412FEF6("random@paparazzi@wait");
	unk_0xD3BD40951412FEF6("veh@std@ps@idle_panic");
	unk_0xD3BD40951412FEF6("veh@low@front_ps@idle_panic");
	unk_0xD3BD40951412FEF6(bLocal_135);
	unk_0x71A78003C8E71424("ESCPAP", false);
	if (((((((((unk_0xD031A9162D01088C("random@escape_paparazzi@standing@") && unk_0xD031A9162D01088C("random@paparazzi@pap_anims")) && unk_0xD031A9162D01088C("random@paparazzi@peek")) && unk_0xD031A9162D01088C("random@paparazzi@trans")) && unk_0xD031A9162D01088C("random@paparazzi@wait")) && unk_0xD031A9162D01088C("veh@std@ps@idle_panic")) && unk_0xD031A9162D01088C("veh@low@front_ps@idle_panic")) && unk_0xD031A9162D01088C(bLocal_135)) && unk_0x02245FE4BED318B8(false)) && unk_0x2F844A8B08D76685("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_221(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_222(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_222(var uParam0)
{
	return func_223(*uParam0, "NULL", uParam0->f_1);
}

int func_223(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_224(bParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(bParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(bParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(bParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(bParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(bParam2, bParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(bParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(bParam1, BitTest(bParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(bParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(bParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_224(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_225(var uParam0)
{
	func_226(uParam0, 9, -1, 0);
}

void func_226(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_227(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], bParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_228(var uParam0, int iParam1)
{
	func_226(uParam0, 0, iParam1, 0);
}

int func_229()
{
	if (!func_196(5))
	{
		return 1;
	}
	if (func_208())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_212())
		{
			return 0;
		}
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if ((Global_113375 == func_104() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_232(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_232(bool bParam0)
{
	func_233(bParam0, "NULL", bParam0->f_1);
}

void func_233(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_224(*bParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(bParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(bParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(bParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(bParam1, BitTest(*bParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(bParam2, bParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(bParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(bParam1, BitTest(*bParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(bParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(bParam1, bParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(bParam0, 29);
	}
}

void func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_236(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_235();
}

void func_235()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_236(int iParam0)
{
	Global_113375 = iParam0;
}

int func_237(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_104();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_278())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_212())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_85(0))
		{
			return 0;
		}
		if (func_208())
		{
			return 0;
		}
		if (func_277())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_202(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_276(iParam1))
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_275(func_24()) == 4 || func_275(func_24()) == 5)
			{
				return 0;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_274(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_273(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_272())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_263(4))
		{
			return 0;
		}
		if (!func_196(5))
		{
			return 0;
		}
		if (func_262(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_262(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_276(30) && !func_262(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_261(bVar4))
				{
					if (func_239(iVar2))
					{
						if (!func_238(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_24() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_238(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_239(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_240(bVar0);
}

int func_240(bool bParam0)
{
	return func_241(bParam0, 1);
}

int func_241(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_261(bParam0))
	{
		return 0;
	}
	func_242(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_242(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_243(func_254(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_243(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_253(bParam0, bParam1))
	{
		bVar0 = func_252(bParam1);
		iVar1 = func_250(bParam0);
		iVar2 = (func_250(bParam0) - func_250(bParam1));
		iVar3 = (func_252(bParam0) - func_252(bParam1));
		iVar4 = (func_249(bParam0) - func_249(bParam1));
		iVar5 = (func_248(bParam0) - func_248(bParam1));
		iVar6 = (func_247(bParam0) - func_247(bParam1));
		iVar7 = (func_246(bParam0) - func_246(bParam1));
	}
	else
	{
		bVar0 = func_252(bParam0);
		iVar1 = func_250(bParam1);
		iVar2 = (func_250(bParam1) - func_250(bParam0));
		iVar3 = (func_252(bParam1) - func_252(bParam0));
		iVar4 = (func_249(bParam1) - func_249(bParam0));
		iVar5 = (func_248(bParam1) - func_248(bParam0));
		iVar6 = (func_247(bParam1) - func_247(bParam0));
		iVar7 = (func_246(bParam1) - func_246(bParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_245(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_244(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_244(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	bParam0 = (bParam0 - (IntToFloat(unk_0xF2DB717A73826179(((bParam0 - fParam1) / fVar0))) * fVar0));
	if (bParam0 < fParam1)
	{
		bParam0 = (bParam0 + fVar0);
	}
	return bParam0;
}

int func_245(int iParam0, int iParam1)
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

int func_246(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_247(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_248(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_249(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_250(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_251(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_252(bool bParam0)
{
	return (bParam0 && 15);
}

int func_253(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_261(bParam1) || !func_261(bParam0))
	{
		return 1;
	}
	iVar0 = func_250(bParam0);
	iVar1 = func_250(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_252(bParam0);
	iVar1 = func_252(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(bParam0);
	iVar1 = func_249(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(bParam0);
	iVar1 = func_248(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(bParam0);
	iVar1 = func_247(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(bParam0);
	iVar1 = func_246(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	var uVar0;
	
	func_260(&uVar0, unk_0x494E97C2EF27C470());
	func_259(&uVar0, unk_0x13D2B8ADD79640F2());
	func_258(&uVar0, unk_0x25223CA6B4D20B7F());
	func_257(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_256(&uVar0, unk_0xBBC72712E80257A1());
	func_255(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_255(var uParam0, int iParam1)
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

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_257(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_252(*uParam0);
	iVar1 = func_250(*uParam0);
	if (bParam1 < 1 || bParam1 > func_245(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_258(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_260(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_261(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_246(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_247(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_248(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_250(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_252(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_249(bParam0);
	if (iVar5 < 1 || iVar5 > func_245(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_271()) || Global_112433) || Global_31962) || func_270()) || func_19(8, -1)) || func_269()) || func_268()) || func_267()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_271()) || Global_31962) || func_270()) || func_19(8, -1)) || func_267()) || func_269()) || func_268()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_271()) || Global_112433) || Global_31962) || func_270()) || func_19(8, -1)) || func_267()) || func_269()) || func_268()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_271()) || Global_112433) || Global_31962) || func_270()) || func_19(8, -1)) || func_269()) || func_268()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_271() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_19(8, -1)) || func_266()) || func_265()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_269()) || func_268()) || func_265()) || func_264())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_271()) || Global_31962) || func_270()) || func_19(8, -1)) || func_268()) || func_267()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_271()) || func_268()) || Global_112433) || Global_31962) || func_270()) || Global_44238) || func_19(8, -1)) || func_267()) || func_265()) || func_266()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_271()) || Global_112433) || Global_31962) || func_270()) || func_19(8, -1)) || func_267()) || func_265()) || func_269()) || func_268()) || func_266())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_264()
{
	return Global_100480.f_1;
}

int func_265()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_266()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_268()
{
	return Global_100493.f_376 > 0;
}

bool func_269()
{
	return Global_100493.f_375 > 0;
}

var func_270()
{
	return Global_1575058;
}

int func_271()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_272()
{
	func_16();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_273(bool bParam0)
{
	return func_253(func_254(), bParam0);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_24();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_275(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_278())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_277()
{
	bool bVar0;
	
	if (Global_32110)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(bVar0, false, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_278()
{
	bool bVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &bVar0, -1);
				unk_0x933D6A9EEC1BACD0(&bVar0, 2);
				unk_0x933D6A9EEC1BACD0(&bVar0, 4);
				unk_0x933D6A9EEC1BACD0(&bVar0, 6);
				unk_0x933D6A9EEC1BACD0(&Global_25, 2);
				unk_0x933D6A9EEC1BACD0(&Global_25, 4);
				unk_0x933D6A9EEC1BACD0(&Global_25, 6);
				unk_0xB3271D7AB655B441(joaat("sp_unlock_exclus_content"), bVar0, true);
				if (unk_0x5AA3BEFA29F03AD4())
				{
					bVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&bVar0, false);
					unk_0xDAC073C7901F9E15(bVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (BitTest(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_280()
{
	func_298(0);
	unk_0x1EE7063B80FFC77C(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_293(&uLocal_74, 0);
	unk_0xF66A602F829E2A06("random@escape_paparazzi@standing@");
	unk_0xF66A602F829E2A06("random@paparazzi@pap_anims");
	unk_0xF66A602F829E2A06("random@paparazzi@peek");
	unk_0xF66A602F829E2A06("random@paparazzi@trans");
	unk_0xF66A602F829E2A06("random@paparazzi@wait");
	unk_0xF66A602F829E2A06("veh@std@ps@idle_panic");
	unk_0xF66A602F829E2A06("veh@low@front_ps@idle_panic");
	unk_0xF66A602F829E2A06(bLocal_135);
	unk_0x7A2D8AD0A9EB9C3F();
	if (func_230())
	{
		unk_0x020E5F00CDA207BA(1f);
	}
	if (unk_0x7239B21A38F536BA(bLocal_67) && !unk_0x84A2DD9AC37C35C1(bLocal_67))
	{
		if (unk_0x5891CAC5D4ACFF74(bLocal_67))
		{
			unk_0xED74007FFB146BC2(bLocal_67);
		}
		if (unk_0x997ABD671D25CA0B(bLocal_67, true))
		{
			if (!unk_0xBBCCE00B381F8482(bLocal_67))
			{
				unk_0x504D54DF3F6F2247(bLocal_67, false, 0);
			}
		}
	}
	func_282(-1);
	unk_0x67EEDEA1B9BAFD94();
	unk_0x3DDA37128DD1ACA8(false);
	unk_0x0FC2D89AC25A5814(joaat("vader"), false);
	unk_0x0FC2D89AC25A5814(joaat("surano"), false);
	unk_0x0FC2D89AC25A5814(joaat("cavalcade2"), false);
	unk_0x31D16B74C6E29D66(iLocal_126, false);
	unk_0x31D16B74C6E29D66(iLocal_127, false);
	unk_0x31D16B74C6E29D66(iLocal_128, false);
	unk_0xC12321827687FE4D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, true);
	if (Global_32201)
	{
		unk_0x706D57B0F50DA710("AC_STOP");
	}
	func_281();
	unk_0x1090044AD1DA76FA();
}

void func_281()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_282(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_230())
	{
		func_286(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_285(30000);
		StringCopy(&cVar0, func_284(Global_113375, 1), 64);
		if (func_103(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_113372, (unk_0x9CD27B0045628463() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_113382, false);
	}
	func_283(&Global_32019);
	Global_113376 = 0;
	func_236(-1);
}

void func_283(var uParam0)
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

char* func_284(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_285(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_286(int iParam0)
{
	func_287(iParam0, 0, func_292(iParam0));
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_254();
	func_290(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_289(iParam0, &uVar0);
	Var1 = { func_288(&uVar0) };
}

struct<16> func_288(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_248(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_247(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_249(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_252(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_250(*uParam0), 64);
	return Var0;
}

void func_289(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_250(*uParam0);
	iVar1 = func_252(*uParam0);
	bVar2 = func_249(*uParam0);
	bVar3 = func_248(*uParam0);
	bVar4 = func_247(*uParam0);
	bVar5 = func_246(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	bVar5 = (bVar5 + iParam1);
	while (bVar5 >= 60)
	{
		iParam2++;
		bVar5 = (bVar5 - 60);
	}
	bVar4 = (bVar4 + iParam2);
	while (bVar4 >= 60)
	{
		iParam3++;
		bVar4 = (bVar4 - 60);
	}
	bVar3 = (bVar3 + iParam3);
	while (bVar3 >= 24)
	{
		iParam4++;
		bVar3 = (bVar3 - 24);
	}
	bVar2 = (bVar2 + iParam4);
	iVar6 = func_245(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_245(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_291(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_291(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_260(uParam0, bParam1);
	func_259(uParam0, bParam2);
	func_258(uParam0, bParam3);
	func_256(uParam0, iParam5);
	func_257(uParam0, bParam4);
	func_255(uParam0, iParam6);
}

int func_292(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_293(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_295(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_294(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_294(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_296(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_296(var uParam0)
{
	func_297(*uParam0, "NULL", uParam0->f_1);
}

void func_297(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		switch (func_224(bParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(bParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(bParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(bParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(bParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(bParam2, bParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(bParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(bParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(bParam2, BitTest(bParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
				break;
			
			default:
				break;
		}
	}
}

void func_298(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_215(iVar0, bParam0);
		iVar0++;
	}
}

