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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	struct<3> Local_35 = { 0, 0, 0 } ;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
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
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	int iLocal_138[2] = { 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	bool bLocal_155 = 0;
	bool bLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	bool bLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	bool bLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
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
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	bool bLocal_221 = 0;
	char* sLocal_222 = NULL;
	char* sLocal_223 = NULL;
	char* sLocal_224[3] = { NULL, NULL, NULL };
	char* sLocal_225[3] = { NULL, NULL, NULL };
	char* sLocal_226[3] = { NULL, NULL, NULL };
	char* sLocal_227[3] = { NULL, NULL, NULL };
	struct<5> Local_228 = { 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	var* uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	bLocal_28 = joaat("prop_dart_1");
	bLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	Local_35 = { -0.0035f, 0f, -0.001f };
	bLocal_37 = joaat("prop_target_bull");
	Local_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	bLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_130 = ((0.05f + 0.275f) - 0.01f);
	Local_137 = { 500f, 500f, 500f };
	bLocal_148 = true;
	Local_209 = { -573.1373f, 294.0269f, 78.1765f };
	Local_210 = { -574.1169f, 292.7964f, 78.1766f };
	Local_211 = { 1995.295f, 3050.084f, 46.91535f };
	Local_212 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_213 = 172.6813f;
	fLocal_214 = 274.5094f;
	fLocal_215 = 142.6717f;
	fLocal_216 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_222 = "facials@gen_female@variations@happy";
	switch (func_506(unk_0xD80958FC74E988A6()))
	{
		case 0:
			sLocal_223 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_223 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_223 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_224[0] = "mood_happy_1";
	sLocal_224[1] = "mood_happy_2";
	sLocal_224[2] = "mood_happy_3";
	sLocal_225[0] = "darts_outro_01_guy1";
	sLocal_225[1] = "darts_outro_02_guy2";
	sLocal_225[2] = "darts_outro_03_guy2";
	sLocal_226[0] = "darts_outro_01_guy2";
	sLocal_226[1] = "darts_outro_02_guy1";
	sLocal_226[2] = "darts_outro_03_guy1";
	sLocal_227[0] = "darts_outro_01_cam";
	sLocal_227[1] = "darts_outro_02_cam";
	sLocal_227[2] = "darts_outro_03_cam";
	iLocal_138[0] = unk_0xD80958FC74E988A6();
	bLocal_151 = true;
	Var17 = { 1992.293f, 3050.583f, 47.98973f };
	Var18 = { -572.0406f, 294.1958f, 79.9374f };
	func_505();
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iLocal_175 = 1;
		switch (unk_0xD53343AA4FB7DD28(false, 2))
		{
			case 0:
				bLocal_172 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				bLocal_172 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_170 = 10;
		unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
	}
	if (!unk_0x7239B21A38F536BA(ScriptParam_228.f_4))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (iLocal_175 == 2)
			{
				ScriptParam_228 = { Var18 };
				ScriptParam_228.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_228 = { Var17 };
				ScriptParam_228.f_3 = 57.78315f;
			}
			if (unk_0xBFA48E2FF417213F(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), false))
			{
				ScriptParam_228.f_4 = unk_0xE143FA2249364369(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), true, false, true);
				unk_0x163F8B586BC95F2A(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_228, &Var19, 0);
				ScriptParam_228.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { unk_0x3FEF770D40960D5A(ScriptParam_228.f_4, true) };
	}
	if (!unk_0x5F9532F3B5CC2551(func_504(), false))
	{
		func_502(iLocal_170, 1);
		if (unk_0x997ABD671D25CA0B(func_504(), false))
		{
			unk_0x504D54DF3F6F2247(func_504(), 0, 0);
		}
		iLocal_138[1] = func_504();
	}
	else
	{
		unk_0xC4301E5121A0ED73(true);
	}
	if (unk_0xC968670BFACE42D9(67))
	{
		func_493();
		func_475(&Var0, &Var5, &Var6);
	}
	unk_0x276B6CE369C33678(false);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
	func_473(1);
	bLocal_166 = func_470(func_506(iLocal_138[0]), 1);
	fVar15 = (unk_0xBBDA792448DB5A89(bLocal_166) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = unk_0xF2DB717A73826179(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_469(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x6806C51AD12B83B8(2);
		unk_0x719FF505F097FD20();
		unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
		if (iLocal_158 && Var0.f_0 < 13)
		{
			unk_0x87D51D72255D4E78(Var4.f_0, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0x84A2DD9AC37C35C1(ScriptParam_228.f_5) && !unk_0x7239B21A38F536BA(func_504())) || (unk_0x7239B21A38F536BA(func_504()) && unk_0x84A2DD9AC37C35C1(func_504())))
		{
			func_475(&Var0, &Var5, &Var6);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]))
		{
			unk_0xC1E8A365BF3B29F2(iLocal_138[0], 239, true);
			unk_0xC1E8A365BF3B29F2(iLocal_138[0], 124, true);
			func_468();
			unk_0x7F4724035FDCA1DD(0);
			unk_0x7F4724035FDCA1DD(2);
			iVar14 = 0;
			while (iVar14 < unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_138[1])
				{
					if (!unk_0x84A2DD9AC37C35C1(uVar26[iVar14]))
					{
						unk_0xC1E8A365BF3B29F2(uVar26[iVar14], 240, true);
					}
				}
				iVar14++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x8DFCED7A656F8802(true);
					func_467(&(Var0.f_243), &ScriptParam_228);
					func_466(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x7239B21A38F536BA(Var0.f_243))
					{
						Local_207 = { unk_0x1899F328B0E12848(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_208 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						iLocal_84 = unk_0x6ABFA3E16460F22D(26379945, Local_207, Local_208, 65f, false, 2);
						unk_0xB13C14F66A00D047(iLocal_84, 30f);
					}
					func_465();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
					{
						unk_0xA56F01F3765B93A0(ScriptParam_228, 0.5f, true, false, false, false);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
						{
							unk_0x3841422E9C488D8C(&iLocal_173);
							unk_0xE8854A4326B9E12B(&iLocal_173);
							unk_0x504D54DF3F6F2247(0, 0, 0);
							unk_0x39E72BC99E6360CB(iLocal_173);
							unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iLocal_173);
						}
						Local_42 = { Local_42 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_464(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_464(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_463(0);
					func_461(&Var4, iLocal_175, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x7239B21A38F536BA(Var0.f_243))
					{
						Var19 = { unk_0x2274BC1C4885E333(Var0.f_243, Var4.f_18) };
					}
					func_458(&Var4, &Var5);
					unk_0xC6ED9D5092438D91(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_455(&Var4, &Var5))
					{
						func_452(&(Var0.f_243), &Var2, &Var3, 0);
						iLocal_217 = func_506(iLocal_138[0]);
						switch (iLocal_217)
						{
							case 0:
								sLocal_219 = func_451("MICHAEL");
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_219 = func_451("FRANKLIN");
								bLocal_155 = true;
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_219 = func_451("TREVOR");
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x5F9532F3B5CC2551(func_504(), false))
						{
							iLocal_218 = func_506(func_504());
							if (iLocal_218 == 145)
							{
								iLocal_218 = func_448(func_504());
							}
							switch (iLocal_218)
							{
								case 0:
									sLocal_220 = func_451("MICHAEL");
									break;
								
								case 1:
									sLocal_220 = func_451("FRANKLIN");
									break;
								
								case 2:
									sLocal_220 = func_451("TREVOR");
									break;
								
								case 19:
									sLocal_220 = func_451("LAMAR");
									unk_0x262B14F48D29DE80(func_504(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_220 = func_451("JIMMY");
									break;
								
								default:
									sLocal_220 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0xD53343AA4FB7DD28(false, 200);
							if (iLocal_175 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_220 = func_451("RAYMOND");
									bLocal_221 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_220 = func_451("JOHAN");
									bLocal_221 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_220 = func_451("STAN");
									bLocal_221 = 1891555423;
								}
								else
								{
									sLocal_220 = func_451("VINCE");
									bLocal_221 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_220 = func_451("KRISTY");
								bLocal_221 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_220 = func_451("MARLENE");
								bLocal_221 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_220 = func_451("LORIE");
								bLocal_221 = 1954368234;
							}
							else
							{
								sLocal_220 = func_451("SHELLEY");
								bLocal_221 = -863218904;
							}
						}
						iLocal_36 = unk_0x509D5878EB39E842(bLocal_37, Var3, true, true, false);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x705A276EBFF3133D())
					{
						iVar27 = unk_0x509D5878EB39E842(joaat("prop_dart_1"), Var3, true, true, false);
						func_445(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_228);
						func_444(&Var4, sLocal_219, sLocal_220);
						unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
						iLocal_174 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Idle"), false, 0, false);
						}
						func_443(&(Var0.f_257), 0, unk_0xD80958FC74E988A6(), sLocal_219, 0, 1);
						if (unk_0x5F9532F3B5CC2551(func_504(), false))
						{
							if (iLocal_175 == 2)
							{
								func_443(&(Var0.f_257), 3, iLocal_138[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_443(&(Var0.f_257), 3, iLocal_138[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_443(&(Var0.f_257), 3, func_504(), sLocal_220, 0, 1);
							func_441(&bVar25);
							iVar13 = 6;
						}
						if (!BitTest(Global_113347, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_440(&Var4, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x84A2DD9AC37C35C1(iLocal_138[1]) && unk_0x01FEE67DB37F59B2(iLocal_138[0])) && !unk_0x997ABD671D25CA0B(iLocal_138[0], true)) && unk_0x01FEE67DB37F59B2(iLocal_138[1])) && !unk_0x997ABD671D25CA0B(iLocal_138[1], true))
					{
						bLocal_146 = func_438(&uLocal_162);
						if ((func_437() && unk_0x9CD27B0045628463() >= iLocal_164 + 1000) && iVar13 != 9)
						{
							if (!unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
							{
								unk_0x891B5B39AC6302AF(500);
							}
						}
						if (unk_0xB16FCE9DDC7BA182() && iVar13 != 9)
						{
							func_433(0);
							func_431();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
								{
									iLocal_168 = unk_0x8C18E0F9080ADD73(unk_0x1899F328B0E12848(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xE83D4F9BA2A38914(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
									unk_0xE32EFE9AB4A9AA0C(iLocal_174, iLocal_168, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x026FB97D0A425F84(iLocal_174, true);
									unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
									unk_0x0F804F1DB19B9689(iLocal_138[0]);
									unk_0x0F804F1DB19B9689(iLocal_138[1]);
									unk_0xAAA34F8A7CB32098(iLocal_138[0]);
									unk_0xAAA34F8A7CB32098(iLocal_138[1]);
									unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									unk_0xEA47FE3719165B94(iLocal_138[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									unk_0xEA47FE3719165B94(iLocal_138[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0f, false, false, false);
									unk_0xC77720A12FE14A86(iVar27, iLocal_168, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1000f);
									func_430(&bVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0x25D39B935A038A26(iLocal_168))
								{
									if (!bVar9)
									{
										if (func_429(&bVar25) > 1.5f)
										{
											func_428(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_427(&bVar25);
										}
									}
									else if (!unk_0x9072C8B49907BFAD(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_426(&bVar25))
											{
												func_441(&bVar25);
											}
											else if (func_429(&bVar25) > 0.5f)
											{
												func_425(iLocal_138[1]);
												func_427(&bVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_430(&bVar25);
											func_424("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.25f)
											{
												func_430(&bVar25);
												func_424("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.55f)
											{
												func_424("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.85f)
											{
												func_424("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0x9CD27B0045628463() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.99f)
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
										iLocal_31 = 0;
										unk_0x8DFCED7A656F8802(true);
										unk_0x865908C81A2C22E9(iLocal_174, false);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[0]);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
										unk_0x43D3807C077261E3(iVar27, -1000f, false);
										unk_0x539E0AE3E6634B9F(&iVar27);
										unk_0xDFE8422B3B94E688(func_420(0));
										func_427(&bVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
								{
									iLocal_168 = unk_0x8C18E0F9080ADD73(unk_0x1899F328B0E12848(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xE83D4F9BA2A38914(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
									unk_0xE32EFE9AB4A9AA0C(iLocal_174, iLocal_168, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x026FB97D0A425F84(iLocal_174, true);
									unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
									unk_0x0F804F1DB19B9689(iLocal_138[0]);
									unk_0x0F804F1DB19B9689(iLocal_138[1]);
									unk_0xAAA34F8A7CB32098(iLocal_138[0]);
									unk_0xAAA34F8A7CB32098(iLocal_138[1]);
									unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									unk_0xEA47FE3719165B94(iLocal_138[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									unk_0xEA47FE3719165B94(iLocal_138[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0f, false, false, false);
									unk_0xC77720A12FE14A86(iVar27, iLocal_168, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1000f);
									func_430(&bVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0x25D39B935A038A26(iLocal_168))
								{
									if (!bVar9)
									{
										if (func_429(&bVar25) > 0.5f)
										{
											func_428(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_427(&bVar25);
										}
									}
									else if (!unk_0x9072C8B49907BFAD(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_426(&bVar25))
											{
												func_441(&bVar25);
											}
											else if (func_429(&bVar25) > 0.25f)
											{
												func_425(iLocal_138[1]);
												func_427(&bVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0x9CD27B0045628463() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0xE4A310B1D7FA73CC(iLocal_168) > 0.99f)
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
									{
										func_419();
										unk_0x865908C81A2C22E9(iLocal_174, false);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[0]);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
										unk_0x43D3807C077261E3(iVar27, -1000f, false);
										unk_0x539E0AE3E6634B9F(&iVar27);
										unk_0xDFE8422B3B94E688(func_420(0));
										func_427(&bVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0xB16FCE9DDC7BA182())
								{
									iLocal_158 = 1;
									iLocal_31 = 0;
									unk_0x8DFCED7A656F8802(true);
									if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
									{
										unk_0x06843DA7060A026B(iLocal_138[0], Var2, true, false, false, true);
										unk_0x8E2530AA8ADA980E(iLocal_138[0], Var0.f_243.f_4);
										unk_0x06843DA7060A026B(iLocal_138[1], Var2.f_3, true, false, false, true);
										unk_0x8E2530AA8ADA980E(iLocal_138[1], Var0.f_243.f_4);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[0]);
										unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
									}
									unk_0x865908C81A2C22E9(iLocal_174, false);
									unk_0x43D3807C077261E3(iVar27, -1000f, false);
									unk_0x539E0AE3E6634B9F(&iVar27);
									if (!BitTest(Global_113347, 0))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
									}
									else
									{
										func_419();
									}
									unk_0xDFE8422B3B94E688(func_420(0));
									func_427(&bVar25);
									unk_0xD4E8E24955024033(500);
									Var0.f_0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_164 = unk_0x9CD27B0045628463();
							if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
							{
								unk_0x06843DA7060A026B(iLocal_138[0], Var2, true, false, false, true);
								unk_0x8E2530AA8ADA980E(iLocal_138[0], Var0.f_243.f_4);
								unk_0x06843DA7060A026B(iLocal_138[1], Var2.f_3, true, false, false, true);
								unk_0x8E2530AA8ADA980E(iLocal_138[1], Var0.f_243.f_4);
							}
							unk_0x013A80FC08F6E4F2(func_420(1));
							iVar13 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x9CD27B0045628463() - iLocal_164) > 1500)
							{
								func_417(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_416(&(Var5.f_57), 1, 0))
							{
								unk_0x013A80FC08F6E4F2(func_420(1));
								iVar13 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!BitTest(Global_113347, 0))
					{
						if (func_413(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &bVar24))
						{
							unk_0x933D6A9EEC1BACD0(&Global_113347, false);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x026FB97D0A425F84(iLocal_75, true);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0xB16FCE9DDC7BA182())
					{
						unk_0xD4E8E24955024033(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0x7239B21A38F536BA(func_504()))
							{
								if (!BitTest(Global_113347, 10))
								{
									unk_0x933D6A9EEC1BACD0(&Global_113347, 10);
								}
								else
								{
									unk_0xE80492A9AC099A93(&Global_113347, 10);
								}
								func_411(&Var5);
								iVar13++;
							}
							else
							{
								func_411(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0x48AF36444B965238())
							{
								if (fLocal_89 != unk_0xF1307EF624A80D87(false))
								{
									fLocal_89 = unk_0xF1307EF624A80D87(false);
									unk_0xB13C14F66A00D047(iLocal_75, func_410(fLocal_89));
									unk_0xB13C14F66A00D047(iLocal_76, func_410(fLocal_89));
								}
							}
							if (func_350(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xDFE8422B3B94E688(func_420(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_349(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_346(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_339(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_113386.f_18970.f_5 >= 5 && Global_113386.f_18970.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_113386.f_18970.f_5 >= 3 && Global_113386.f_18970.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_338(Global_113386.f_18970.f_5, &bLocal_167))
						{
							func_337(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_336(Global_113386.f_18970.f_5);
						fLocal_46 = func_335(Global_113386.f_18970.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
						{
							unk_0xAAA34F8A7CB32098(iLocal_138[1]);
							unk_0x06843DA7060A026B(iLocal_138[1], Var2.f_3, true, false, false, true);
							unk_0x8E2530AA8ADA980E(iLocal_138[1], Var0.f_243.f_4);
						}
						if (func_426(&bVar23))
						{
							func_427(&bVar23);
						}
						unk_0x013A80FC08F6E4F2(func_420(2));
						func_334(iLocal_138[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x48AF36444B965238())
					{
						if (fLocal_89 != unk_0xF1307EF624A80D87(false))
						{
							fLocal_89 = unk_0xF1307EF624A80D87(false);
							unk_0xB13C14F66A00D047(iLocal_75, func_410(fLocal_89));
							unk_0xB13C14F66A00D047(iLocal_76, func_410(fLocal_89));
						}
					}
					if (!bLocal_156)
					{
						unk_0xD3BD40951412FEF6("mini@dartsoutro");
						bLocal_156 = true;
					}
					if (!iLocal_157)
					{
						if (bLocal_156)
						{
							if (!unk_0xD031A9162D01088C("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_157 = 1;
							}
						}
					}
					func_252(&Var0, &Var3, &Var4, &Var5, &bVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_429(&(Var0.f_254)) > 0.5f)
							{
								unk_0x8DFCED7A656F8802(true);
								unk_0xCC33FA791322B9D9();
								func_251(unk_0xD80958FC74E988A6());
								func_349(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								bVar31 = false;
								while (bVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_250(&(Var0.f_5[bVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_249(&Var4, bVar31);
									bVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_247(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_247(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_247(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_247(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0xF1307EF624A80D87(true);
								if (fVar34 > 2f)
								{
									Var20 = { 1992.294f, 3047.577f, 46.21517f };
									Var21 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var20 = { 1992.336f, 3047.924f, 46.21517f };
									Var21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_246();
								iLocal_168 = unk_0x8C18E0F9080ADD73(Var20, Var21, 2);
								iLocal_174 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
								unk_0xE32EFE9AB4A9AA0C(iLocal_174, iLocal_168, sLocal_227[iVar33], "mini@dartsoutro");
								unk_0x026FB97D0A425F84(iLocal_174, true);
								unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
								if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0x67C540AA08E4A6F5(-1, "TENNIS_POINT_WON", "HUD_AWARDS", true);
										func_245(&iLocal_138, iVar35);
										unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), sLocal_223, sLocal_224[unk_0xD53343AA4FB7DD28(false, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
									else
									{
										unk_0x67C540AA08E4A6F5(-1, "OTHER_TEXT", "HUD_AWARDS", true);
										func_244(&iLocal_138);
										unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										unk_0xEA47FE3719165B94(iLocal_138[1], sLocal_222, sLocal_224[unk_0xD53343AA4FB7DD28(false, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_242(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_427(&(Var0.f_254));
							iLocal_152 = 0;
							unk_0xDFE8422B3B94E688(func_420(3));
							func_419();
							if (unk_0xA7A932170592B50E(iLocal_174))
							{
								unk_0x865908C81A2C22E9(iLocal_174, false);
							}
							iVar13 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_429(&(Var0.f_254)) > 0.92f)
					{
						func_44(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0x5F9532F3B5CC2551(func_504(), false))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
						Var0.f_0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0xE1EF3C1216AFF2CD(iLocal_138[0]);
							if (!bLocal_154)
							{
								unk_0x07E5B515DB0636FC(false, bLocal_154, 3000, true, false, 0);
							}
							else
							{
								unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
							}
							unk_0xB4EC2312F4E5B1F1(0f);
							unk_0x6D0858B8EDFD2B7D(0f, 1f);
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
							unk_0xCC33FA791322B9D9();
							unk_0x69F4BE8C8CC4796C(iLocal_138[0], iLocal_138[1], 5000, 2049, 3);
							func_441(&bVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&bVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_441(&bVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&bVar25) > 0.3f)
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_138[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_441(&bVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0.f_0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x50F940259D3841E6(2, 201))
					{
						func_1(iLocal_138[1]);
						iLocal_171 = 2;
						bVar7 = true;
						if (unk_0xB65B60556E2A9225(func_420(2)))
						{
							unk_0xDFE8422B3B94E688(func_420(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x50F940259D3841E6(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_337(&(Var5.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_475(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xB0034A223497FFCB())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_337(&(uParam0->f_666), 8, 1);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 16, 0);
			func_337(&(uParam0->f_666), 17, 0);
		}
		unk_0x2CEA2839313C09AC();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_337(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x5F9532F3B5CC2551(func_504(), false) || iParam2)
	{
		func_428(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_6(iParam3), false);
}

int func_6(int iParam0)
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

float func_7(bool bParam0)
{
	if (func_426(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar2 = unk_0x7A5487FE9FAA6B48();
		fVar3 = unk_0xBBDA792448DB5A89(bVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_9(bool bParam0)
{
	return BitTest(*bParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_41(0);
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
		switch (func_506(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D())))
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
		uParam0->f_562 = (uParam0->f_576 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_40(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_40(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_40((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_40(30f) - func_40(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_39(1);
		uParam0->f_576 = (uParam0->f_576 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
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
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
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
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0x6CD79468A1E595C6(2))
			{
				if (unk_0x85F01B8D5B90570E(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x580417101DDB492F(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0x85F01B8D5B90570E(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
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
				func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					unk_0xF6E48914C7A8694E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xC6796A8FFA375E53();
				}
				uParam0->f_563 = func_14((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
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
				func_39(0);
			}
			return !bVar0;
		}
	}
	func_39(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
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
	func_13(unk_0x0499D7B09FC9B407(2, 215, true));
	func_12("ES_HELP");
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
		func_13(unk_0x0499D7B09FC9B407(2, 216, true));
		func_12("ES_XPAND");
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

void func_12(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_13(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_38() * 0.25f);
	if (unk_0x85F01B8D5B90570E(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xF6E48914C7A8694E(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_37(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
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
		func_36();
		unk_0x0DF606929C105BE1(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.1388889f + func_40((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_38());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_35(&(uParam0->f_13));
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
			fVar7 = func_34(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_35(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_38()) / 2.5f);
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
						func_31((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
	unk_0x7C9C91AB74A0360F(1, &bVar13, &bVar14, &bVar15, &iVar16);
	unk_0xBE6B23FFA53FB442(bVar13, bVar14, bVar15, bVar0);
	unk_0x63145D9C883A1A70(fVar9, fVar10);
	unk_0x4E096588B13FFECA(0);
	unk_0x07C837F9A01C34C9(1f, 0.4f);
	fVar1 = (fVar1 - func_40(6f));
	fVar1 = (fVar1 + (func_40(30f) - func_40((2f * 2f))));
	fVar11 = (fVar2 - func_40((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
		func_36();
		unk_0x3A618A217E5154F0(0.5f, (fVar1 - (func_40((2f - 0.5f)) - 0.001388889f)), fVar6, func_30(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_40((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			func_27(uParam0, iVar17, (fVar1 + func_40(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_40(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_40((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_40(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
					func_36();
					unk_0x3A618A217E5154F0(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
					fVar1 = (fVar1 + func_40((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_40((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_40(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
			func_36();
			unk_0x3A618A217E5154F0(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), false);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			unk_0xBE6B23FFA53FB442(bVar13, bVar14, bVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(bVar0))));
			func_19(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x2BDD44CC428A7EAE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_38()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_38()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_38()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_38()) / 2.5f));
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
				func_18(&(uParam0->f_550), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_17(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0);
			}
			unk_0x63145D9C883A1A70(fVar20, fVar21);
			unk_0x4E096588B13FFECA(2);
			unk_0x07C837F9A01C34C9(1f, 0.4f);
			unk_0xC02F4DBFB51D988B(false);
			func_36();
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
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x25FBB336DF1804CB("FO_TWO_NUM");
					unk_0x03B504CF259931BC(uParam0->f_558);
					unk_0x03B504CF259931BC(uParam0->f_559);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x25FBB336DF1804CB("MTPHPER_XPNO");
					unk_0x03B504CF259931BC(uParam0->f_558);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x25FBB336DF1804CB("ESDOLLA");
					unk_0x0E4C749FF9DE9CC4(uParam0->f_558, true);
					unk_0xCD015E5BB0D96A57(fVar20, (fVar1 + func_40((2f * 2f))), 0);
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
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_40(10f)) + fVar29);
				if (uParam0->f_560 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xE7FFAE5EBF23D890(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, bVar25, bVar26, bVar27, unk_0xF2DB717A73826179((fVar12 * IntToFloat(bVar0))), false, 0);
			}
			fVar1 = (fVar1 + (func_40(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, char* sParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	unk_0xC02F4DBFB51D988B(bParam4);
	unk_0x66E0276CC5F6B9DA(iParam5);
	func_36();
	unk_0x25FBB336DF1804CB(sParam0);
	unk_0x6C188BE134E074AA(sParam1);
	unk_0xCD015E5BB0D96A57(fParam2, fParam3, 0);
}

void func_18(char* sParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, int iParam5)
{
	unk_0xC02F4DBFB51D988B(bParam3);
	unk_0x66E0276CC5F6B9DA(iParam5);
	func_36();
	if (bParam4)
	{
		unk_0x25FBB336DF1804CB("STRING");
		unk_0x6C188BE134E074AA(sParam0);
	}
	else
	{
		unk_0x25FBB336DF1804CB(sParam0);
	}
	unk_0xCD015E5BB0D96A57(fParam1, fParam2, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_26(iParam0), 64);
	StringCopy(&cVar1, func_23(iParam0, bParam1), 64);
	if (unk_0xD24D37CC275948CC(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_21(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x35736EE65BD00C11(&cVar0, &cVar1) };
		fVar6 = (func_20(iParam0) / fVar4);
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

float func_20(int iParam0)
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

void func_21(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x888D57E407E63624(iParam1, iParam2);
		return;
	}
	unk_0x873C9F3104101DD3(iParam1, iParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*iParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*iParam2);
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (func_22(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*iParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*iParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_22(bool bParam0, bool bParam1)
{
	return (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1)) > 3.5f;
}

var func_23(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_25(unk_0x4F8644AF03D0E0D6()) };
			if (unk_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_24(&uVar1);
			}
		}
		else
		{
			return func_24(&(Global_23150.f_7420[iParam0 /*16*/]));
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

var func_24(var uParam0)
{
	return uParam0;
}

struct<13> func_25(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

char* func_26(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_25(unk_0x4F8644AF03D0E0D6()) };
			unk_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_24(&uVar0);
		}
		else
		{
			return func_24(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x7C9C91AB74A0360F(1, &bVar0, &bVar1, &bVar2, &uVar3);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bParam5);
	unk_0x63145D9C883A1A70(fParam3, fParam4);
	unk_0x4E096588B13FFECA(1);
	unk_0x07C837F9A01C34C9(1f, func_29(14f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x66E0276CC5F6B9DA(0);
	func_36();
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
			func_19(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_23(7, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_19(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_23(5, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_19(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE7FFAE5EBF23D890("CommonMenu", func_23(6, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, false, 0);
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
	unk_0x07C837F9A01C34C9(1f, func_29(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x63145D9C883A1A70(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x63145D9C883A1A70(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_28(bool bParam0, bool bParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 1;
	unk_0xC02F4DBFB51D988B(false);
	unk_0x66E0276CC5F6B9DA(0);
	func_36();
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
			unk_0x07C837F9A01C34C9(1f, func_29(18f));
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
			unk_0x07C837F9A01C34C9(1f, func_29(14f));
			break;
	}
	unk_0x39BBF623FC803EAC(iVar0);
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
			unk_0x07C837F9A01C34C9(1f, func_29(18f));
		
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
			unk_0x25FBB336DF1804CB(sParam4);
			break;
		
		case 7:
			unk_0x25FBB336DF1804CB("STRING");
			unk_0x6C188BE134E074AA(sParam4);
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
			unk_0x25FBB336DF1804CB(sParam4);
			unk_0x03B504CF259931BC(bParam0);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 15:
		case 14:
			unk_0x25FBB336DF1804CB(sParam4);
			unk_0x03B504CF259931BC(bParam0);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 16:
			unk_0x25FBB336DF1804CB(sParam4);
			unk_0x03B504CF259931BC(bParam1);
			break;
		
		case 20:
			unk_0x25FBB336DF1804CB(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xCD015E5BB0D96A57((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x07C837F9A01C34C9(1f, func_29(14f));
		}
		else
		{
			unk_0xCD015E5BB0D96A57(fParam2, fParam3, 0);
		}
	}
}

float func_29(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_30(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_33(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_32(7, bVar0);
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

void func_32(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

float func_34(char* sParam0, char* sParam1)
{
	unk_0x54CE8AC98E120CAB(sParam0);
	unk_0x6C188BE134E074AA(sParam1);
	return (unk_0x85F061DA64ED2F67(true) / 2f);
}

float func_35(char* sParam0)
{
	unk_0x54CE8AC98E120CAB(sParam0);
	return (unk_0x85F061DA64ED2F67(true) / 2f);
}

void func_36()
{
	unk_0x61BB1D9B3A95D802(1);
	if (unk_0x797AC7CB535BA28F() || unk_0xB16FCE9DDC7BA182())
	{
		unk_0x61BB1D9B3A95D802(7);
	}
	unk_0xC6372ECD45D73BCD(false);
}

void func_37(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

float func_38()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x48AF36444B965238())
	{
	}
	return fVar0;
}

void func_39(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

float func_40(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_41(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_42(0))
		{
			func_433(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

int func_42(int iParam0)
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

bool func_43()
{
	return BitTest(Global_1958711, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (unk_0xA571D46727E2B718(2))
	{
		unk_0xFE99B66D079CF6BC(2, 199, true);
	}
	if (unk_0xF25D331DC2627BBC())
	{
		if (!iLocal_159)
		{
			if (func_219(uParam1, 0, &iLocal_160))
			{
				func_337(&(uParam1->f_666), 9, 0);
				iLocal_159 = 1;
			}
		}
	}
	if (iLocal_141)
	{
		if (unk_0xA571D46727E2B718(2))
		{
			unk_0xAAE7CE1D63167423();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0xF25D331DC2627BBC())
			{
				uParam1->f_646 = func_210(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_337(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_127(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_123(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x580417101DDB492F(2, 202))
				{
					uParam1->f_680 = 0;
					func_337(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x580417101DDB492F(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x580417101DDB492F(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_122(&(uParam1->f_72)))
			{
				if (!bLocal_161)
				{
					bLocal_161 = true;
					func_121(&(uParam1->f_509), 0, 0, 1, 1);
					func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_117(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_110(uParam1, 0, 0, iLocal_159);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0x25D39B935A038A26(iLocal_168) && unk_0xE4A310B1D7FA73CC(iLocal_168) >= 0.995f) || !unk_0x25D39B935A038A26(iLocal_168))
		{
			bLocal_154 = true;
			if (unk_0xA7A932170592B50E(iLocal_174))
			{
				unk_0x865908C81A2C22E9(iLocal_174, false);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
				{
					unk_0xAAA34F8A7CB32098(iLocal_138[0]);
					unk_0xAAA34F8A7CB32098(iLocal_138[1]);
					unk_0x2208438012482A1A(iLocal_138[0], false, false);
					unk_0x2208438012482A1A(iLocal_138[1], false, false);
				}
			}
			func_109();
		}
		if (func_429(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_152)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_245(&iLocal_138, iVar2);
				}
				else
				{
					func_244(&iLocal_138);
				}
				iLocal_152 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x8DFCED7A656F8802(true);
			unk_0xDFE8422B3B94E688(func_420(3));
			if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
			{
				unk_0x0F804F1DB19B9689(iLocal_138[0]);
				unk_0x0F804F1DB19B9689(iLocal_138[1]);
			}
			func_108(uParam3);
			if (bParam4)
			{
				func_349(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_427(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_152 = 0;
			iLocal_150 = 0;
			bLocal_154 = false;
			func_105();
			iLocal_159 = 0;
			iLocal_134 = 0;
			uParam1->f_680 = 0;
			iLocal_160 = 0;
			bLocal_161 = false;
			func_97(&(uParam1->f_72), 0);
			func_465();
		}
		else if (iVar0 == 2)
		{
			func_96(uParam3);
			unk_0xDFE8422B3B94E688(func_420(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_56(func_91(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0xCC33FA791322B9D9();
			*uParam0 = 13;
		}
		else if (((unk_0x580417101DDB492F(0, 234) || unk_0x580417101DDB492F(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_140)
			{
				Var3 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var3, 0, iLocal_140);
				iLocal_140 = 0;
			}
			else if (unk_0x580417101DDB492F(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var3 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var3);
			}
			else if (unk_0x580417101DDB492F(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var3);
			}
		}
		else if (((unk_0x580417101DDB492F(0, 211) || unk_0x91AEF906BCA88877(0, 211)) && bVar1) && (iLocal_159 || !unk_0xF25D331DC2627BBC()))
		{
			uParam1->f_680 = 1;
			func_121(&(uParam1->f_509), 0, 0, 1, 1);
			func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_161)
			{
				func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_117(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x8DFCED7A656F8802(true);
		unk_0xCC33FA791322B9D9();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0xF1307EF624A80D87(true);
		if (fVar4 > 2f)
		{
			Var5 = { 1992.294f, 3047.577f, 46.21517f };
			Var6 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var5 = { 1992.336f, 3047.924f, 46.21517f };
			Var6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_246();
		iLocal_168 = unk_0x8C18E0F9080ADD73(Var5, Var6, 2);
		iLocal_174 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
		unk_0xE32EFE9AB4A9AA0C(iLocal_174, iLocal_168, sLocal_227[iVar7], "mini@dartsoutro");
		unk_0x026FB97D0A425F84(iLocal_174, true);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), sLocal_223, sLocal_224[unk_0xD53343AA4FB7DD28(false, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
			else
			{
				unk_0xEEA929141F699854(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				unk_0xEEA929141F699854(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				unk_0xEA47FE3719165B94(iLocal_138[1], sLocal_222, sLocal_224[unk_0xD53343AA4FB7DD28(false, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
		}
		bLocal_154 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x9CD27B0045628463();
		bVar8 = false;
		while (bVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_250(&(uParam0->f_5[bVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_249(uParam2, bVar8);
			bVar8++;
		}
	}
	else if ((unk_0x9CD27B0045628463() - uParam1->f_671) > 400 && func_45(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x67C540AA08E4A6F5(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", true);
		}
		iLocal_141 = 1;
	}
}

int func_45(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_48(uParam0);
	func_47(uParam0);
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
			func_46(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_78580 = 1;
	return 1;
}

void func_46(var uParam0)
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
	func_13(unk_0x0499D7B09FC9B407(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(true);
	func_13(unk_0x0499D7B09FC9B407(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xC3D0841A0CC546A6(false);
	func_13(unk_0x0499D7B09FC9B407(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xC6796A8FFA375E53();
}

void func_47(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x4E096588B13FFECA(0);
	unk_0x07C837F9A01C34C9(1f, func_29(16f));
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

void func_48(var uParam0)
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

void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_565 = 1;
	if (bParam1)
	{
		func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_51(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_39(1);
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
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
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_53(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bLocal_88)
	{
		unk_0x4D41783FB745E42E(iLocal_86, Var0);
		unk_0x9FBDA379383A52A4(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0x4D41783FB745E42E(iLocal_85, Var0);
		unk_0x9FBDA379383A52A4(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_54(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_55(struct<3> Param0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bParam1)
	{
		unk_0x4D41783FB745E42E(iLocal_85, Var0);
		unk_0x9FBDA379383A52A4(iLocal_85, iLocal_84, 1500, 1, 1);
		unk_0x026FB97D0A425F84(iLocal_84, false);
		unk_0x4D41783FB745E42E(iLocal_86, Var0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0x4D41783FB745E42E(iLocal_85, Var0);
		unk_0x9FBDA379383A52A4(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0x9FBDA379383A52A4(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0x9FBDA379383A52A4(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		unk_0x026FB97D0A425F84(iLocal_85, false);
	}
}

void func_56(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_90(iParam0) == 3)
	{
		return;
	}
	if (func_90(iParam0) == 4)
	{
		return;
	}
	func_57(func_90(iParam0), 1, iParam1, bParam2, 0);
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

int func_57(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_89();
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
					func_88(99, 1);
					func_87(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_71(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_68(5))
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
							func_87(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_68(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_87(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_property"), bParam3);
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
									func_87(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_68(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_67(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_88(95, bParam3);
					break;
				
				case 1:
					func_88(97, bParam3);
					break;
				
				case 2:
					func_88(96, bParam3);
					break;
			}
			func_88(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
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
					func_87(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_total_cash_earned"), bParam3);
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
	func_59(iParam0);
	if (Global_43052 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)
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

void func_59(int iParam0)
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

void func_60(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_66(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_66(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_66(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_66(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_62() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_61(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_61(bool bParam0)
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

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_64(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_65();
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

int func_65()
{
	return Global_1574918;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_65();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_67(int iParam0)
{
	func_88(93, iParam0);
	func_88(29, iParam0);
	func_88(30, iParam0);
}

int func_68(int iParam0)
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
		return func_70(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_70(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_70(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_70(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_69(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_69(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_69(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_69(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_69(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_69(8277, -1, 0);
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
	return BitTest(Global_2359296[func_62() /*5567*/].f_681.f_10, iParam0);
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_64(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_70(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_65();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_71(bool bParam0)
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
		func_86(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_72(27, 1);
	return 1;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_73(iParam0, iParam1);
}

int func_73(int iParam0, int iParam1)
{
	if (func_85(14) && !func_84(iParam0))
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
	if (func_83(&Global_4541529))
	{
		if (func_81(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_74(&Global_4541529, iParam0))
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

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_85(14) && !func_84(iParam1))
	{
		return 0;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0);
	}
	func_77(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_75(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_85(14) && !func_84(iParam1))
	{
		return 0;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_76(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_76(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
	func_79(uParam0, (Global_4541528 - 0.5f));
}

void func_78(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_79(var uParam0, float fParam1)
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

float func_80(var uParam0)
{
	return uParam0->f_80;
}

bool func_81(var uParam0, int iParam1)
{
	return func_82(uParam0, iParam1) != -1;
}

int func_82(var uParam0, int iParam1)
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

bool func_83(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_84(int iParam0)
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

bool func_85(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_86(int iParam0, bool bParam1)
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

void func_87(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_88(int iParam0, int iParam1)
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

void func_89()
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

int func_90(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_91()
{
	func_92();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_94(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_506(unk_0xD80958FC74E988A6());
			if (func_93(iVar0) && (!func_85(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_93(Global_113386.f_2363.f_539.f_4321))
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

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_95(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_95(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_96(var uParam0)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_97(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_103(uParam0);
		func_102(uParam0);
		func_101(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_99();
	}
	if (unk_0xB65B60556E2A9225("LEADERBOARD_SCENE"))
	{
		unk_0xDFE8422B3B94E688("LEADERBOARD_SCENE");
	}
	if (unk_0x1077788E268557C2())
	{
		func_98(&(Global_2103068.f_49));
	}
	Global_2815059.f_4032 = 0;
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_99()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_100(&(Global_2097536.f_2780));
	func_98(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_98(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_98(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_100(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_101(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_98(&(Global_2097536.f_2830));
}

void func_102(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_98(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_103(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_104(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_98(&(Global_2097152.f_1));
	unk_0x7CCE5C737A665701(*uParam2, uParam2->f_1, -1);
}

void func_105()
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_107(&(Global_2097157.f_73));
	func_107(&(Global_2097157.f_142));
	func_107(&(Global_2097157.f_211));
	func_107(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_106(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_106(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_107(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_108(var uParam0)
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_109()
{
	unk_0x026FB97D0A425F84(iLocal_81, true);
}

int func_110(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_121(&(uParam0->f_509), 0, 0, 1, 1);
			func_120(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_120(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_120(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0xF25D331DC2627BBC())
			{
				func_120(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_113(func_116(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_113(func_116(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_113(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_416(&(uParam0->f_57), 0, 0);
			}
			func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xB0034A223497FFCB())
		{
			if ((unk_0x9CD27B0045628463() - uParam0->f_671) > 900)
			{
				if (unk_0xF3A21BCD95725A4A(2, 216))
				{
					unk_0x67C540AA08E4A6F5(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_337(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x580417101DDB492F(2, 215))
				{
					unk_0x67C540AA08E4A6F5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_112();
					func_111();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x50F940259D3841E6(2, 201))
		{
			return 2;
		}
		else if (unk_0x50F940259D3841E6(2, 202))
		{
			func_337(&(uParam0->f_666), 9, 0);
			func_337(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_111()
{
	if (Global_2703735.f_2400[0 /*80*/].f_2 != 0)
	{
		Global_2703735.f_2400[0 /*80*/].f_2 = 5;
	}
}

void func_112()
{
	Global_32104 = 1;
}

void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	bool bVar0;
	int iVar1;
	
	if (func_114(sParam6))
	{
		sParam6 = "NUMBER";
	}
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_33(3, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_32(3, bVar0);
		Global_1649593.f_2839[bVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[bVar0] = iParam3;
		Global_1649593.f_2839.f_172[bVar0] = iParam2;
		Global_1649593.f_2839.f_205[bVar0] = iParam4;
		Global_1649593.f_2839.f_216[bVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[bVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[bVar0] = iParam7;
		Global_1649593.f_2839.f_453[bVar0] = iParam8;
		Global_1649593.f_2839.f_431[bVar0] = iParam9;
		Global_1649593.f_2839.f_442[bVar0] = iParam10;
		Global_1649593.f_2839.f_464[bVar0] = iParam11;
		Global_1649593.f_2839.f_475[bVar0] = iParam12;
		Global_1649593.f_2839.f_486[bVar0] = iParam13;
		Global_1649593.f_2839.f_497[bVar0] = iParam14;
	}
}

int func_114(char* sParam0)
{
	if (unk_0xF22B6C47C6EAB066(sParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92(sParam0, "") || unk_0x0C515FAB3FF9EA92(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_115(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_116(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(&(uParam0->f_1), 1024);
	}
	else
	{
		func_118(&(uParam0->f_1), 1024);
	}
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_120(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC514489CFB8AF806("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_119(&(uParam0->f_1), 32);
	}
	if (unk_0x85F01B8D5B90570E(*uParam0))
	{
		func_119(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6D8EB211944DCE08(*uParam0, true);
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (bParam3)
		{
			func_119(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_119(&(uParam0->f_1), 8192);
	}
}

int func_122(var uParam0)
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x797AC7CB535BA28F() || unk_0x5C544BC6C57AC575()) || unk_0xB16FCE9DDC7BA182()) || unk_0x7EA2B6AF97ECA6ED())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_126(uParam0))
	{
		return;
	}
	unk_0x4B0311D3CDC4648F();
	unk_0x61BB1D9B3A95D802(iParam2);
	if (!func_125(uParam0->f_1, 256) || (func_125(uParam0->f_1, 8192) && unk_0x6CD79468A1E595C6(2)))
	{
		unk_0xF6E48914C7A8694E(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD69736AAE04DB51A(fParam1);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fParam5);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xC6796A8FFA375E53();
		if (unk_0x48AF36444B965238())
		{
			unk_0xF6E48914C7A8694E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xC58424BA936EB458(func_125(uParam0->f_1, 4096));
			unk_0xC6796A8FFA375E53();
		}
		bVar5 = false;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xA571D46727E2B718(2);
					break;
				
				case 2:
					bVar4 = !unk_0xA571D46727E2B718(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xF6E48914C7A8694E(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xC3D0841A0CC546A6(bVar5);
					bVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = unk_0x0499D7B09FC9B407(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!unk_0xCA042B6957743895(sVar3))
						{
							func_13(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xCA042B6957743895(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x48AF36444B965238())
					{
						if (func_125(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xC58424BA936EB458(true);
								unk_0xC3D0841A0CC546A6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xC58424BA936EB458(false);
								unk_0xC3D0841A0CC546A6(-1);
							}
						}
					}
					unk_0xC6796A8FFA375E53();
				}
			}
			iVar6++;
		}
		fVar8 = func_124(bParam4, func_124(func_125(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF6E48914C7A8694E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD69736AAE04DB51A(fVar8);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(80f);
		unk_0xC6796A8FFA375E53();
		func_119(&(uParam0->f_1), 256);
		func_118(&(uParam0->f_1), 128);
	}
	unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, false, 0);
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_126(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*uParam0))
		{
			func_119(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)
{
	func_128(uParam1, uParam0);
}

void func_128(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	bool bVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_209(&(Global_2103068.f_49), 1, 0);
	unk_0xD46923FC481CA285();
	func_208();
	func_41(0);
	unk_0x719FF505F097FD20();
	func_206(1);
	unk_0x6806C51AD12B83B8(10);
	func_205(1);
	func_204(1);
	if (!func_201())
	{
		if (!unk_0xB65B60556E2A9225("LEADERBOARD_SCENE"))
		{
			unk_0x013A80FC08F6E4F2("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_200();
		unk_0x933D6A9EEC1BACD0(&(uParam1->f_42), 3);
	}
	Var10 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	if (unk_0x85F01B8D5B90570E(*uParam0))
	{
		if (((!unk_0x85443FF4C328F53B() || !unk_0xF25D331DC2627BBC()) || (!unk_0x25CB5A9F37BFD063() && unk_0x1353F87E89946207())) || Global_2097536.f_2832 != 0)
		{
			if (!unk_0xF25D331DC2627BBC())
			{
				if (Global_2097536.f_2829 != 2)
				{
					unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!unk_0x25CB5A9F37BFD063() && unk_0x1353F87E89946207())
			{
				if (Global_2097536.f_2829 != 3)
				{
					unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!unk_0x85443FF4C328F53B())
			{
				if (Global_2097536.f_2829 != 4)
				{
					unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				unk_0xF6E48914C7A8694E(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xC6796A8FFA375E53();
				func_199(*uParam0, Global_2097536.f_2780);
				if (unk_0xAC09CA973C564252(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_198(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var6 = { Global_2097536.f_2780.f_9 };
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				bVar9 = false;
				unk_0x933D6A9EEC1BACD0(&bVar9, 4);
				func_195(*uParam0, &bVar3, bVar9, 1, 1);
				bVar9 = false;
				unk_0x933D6A9EEC1BACD0(&bVar9, 5);
				func_195(*uParam0, &bVar3, bVar9, 1, 1);
				bVar9 = false;
				unk_0x933D6A9EEC1BACD0(&bVar9, 6);
				func_195(*uParam0, &bVar3, bVar9, 1, 1);
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_42), true);
				func_194(*uParam0);
				unk_0xE80492A9AC099A93(&(uParam1->f_42), 2);
				unk_0x8DFCED7A656F8802(true);
			}
			else
			{
				func_194(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
				Global_2097536.f_2829 = 1;
			}
			if (!func_157(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xE80492A9AC099A93(&(uParam1->f_42), true);
				if (!BitTest(uParam1->f_42, 0))
				{
					unk_0xF6E48914C7A8694E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xC6796A8FFA375E53();
					func_199(*uParam0, Global_2097536.f_2780);
					if (unk_0xAC09CA973C564252(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_198(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_42), false);
					unk_0xE80492A9AC099A93(&(uParam1->f_42), 2);
				}
				bVar3 = false;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 4);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 5);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 6);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						bVar9 = false;
						unk_0x933D6A9EEC1BACD0(&bVar9, 7);
						func_156(*uParam0, bVar3, bVar9, &Var12);
						bVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_98(&(Global_2097536.f_2823));
				}
				else if (func_154(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 4);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 5);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar9 = false;
							unk_0x933D6A9EEC1BACD0(&bVar9, 6);
							func_195(*uParam0, &bVar3, bVar9, 0, 0);
						}
						bVar9 = false;
						unk_0x933D6A9EEC1BACD0(&bVar9, 7);
						func_156(*uParam0, bVar3, bVar9, &Var13);
						bVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_98(&(Global_2097536.f_2823));
				}
				func_194(*uParam0);
			}
			else
			{
				unk_0xE80492A9AC099A93(&(uParam1->f_42), false);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xF6E48914C7A8694E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xC6796A8FFA375E53();
					func_199(*uParam0, Global_2097536.f_2780);
					if (unk_0xAC09CA973C564252(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_198(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_101(&Global_2101867);
						func_150(uParam1, &Global_2101867);
						func_149(uParam1, &Global_2101867);
					}
					bVar3 = false;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									bVar9 = false;
									unk_0x933D6A9EEC1BACD0(&bVar9, 4);
									func_195(*uParam0, &bVar3, bVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									bVar9 = false;
									unk_0x933D6A9EEC1BACD0(&bVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_195(*uParam0, &bVar3, bVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_195(*uParam0, &bVar3, bVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									bVar9 = false;
									unk_0x933D6A9EEC1BACD0(&bVar9, 6);
									if (!unk_0x67A5589628E0CFF6())
									{
										bVar14 = true;
									}
									else if (!unk_0xBA9775570DB788CF())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_195(*uParam0, &bVar3, bVar9, 1, 0);
									}
									else
									{
										func_195(*uParam0, &bVar3, bVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_148(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_198(uParam1->f_44))
								{
									unk_0x4927FC39CD0869A0(unk_0x4F8644AF03D0E0D6(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && unk_0x0C515FAB3FF9EA92(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									bVar9 = false;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_147(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x933D6A9EEC1BACD0(&bVar9, true);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x933D6A9EEC1BACD0(&bVar9, 3);
											}
										}
									}
									if (func_198(uParam1->f_44))
									{
										Var6 = { Global_2101867[iVar0 /*100*/] };
										if (!unk_0xCA042B6957743895(&(Global_2101867[iVar0 /*100*/].f_84)) && !unk_0x0C515FAB3FF9EA92(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_146(*uParam0, bVar3, bVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_146(*uParam0, bVar3, bVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_133();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x933D6A9EEC1BACD0(&bVar9, 2);
											unk_0x933D6A9EEC1BACD0(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_132(*uParam0, (bVar3 - 1), bVar9);
										}
									}
									bVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						bVar9 = false;
						unk_0x933D6A9EEC1BACD0(&bVar9, 4);
						func_195(*uParam0, &bVar3, bVar9, 1, 0);
						bVar9 = false;
						unk_0x933D6A9EEC1BACD0(&bVar9, 5);
						func_195(*uParam0, &bVar3, bVar9, 1, 0);
						bVar9 = false;
						unk_0x933D6A9EEC1BACD0(&bVar9, 6);
						func_195(*uParam0, &bVar3, bVar9, 1, 0);
					}
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_42), true);
					unk_0xE80492A9AC099A93(&(uParam1->f_42), 2);
					func_194(*uParam0);
					unk_0x8DFCED7A656F8802(true);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x933D6A9EEC1BACD0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_194(*uParam0);
					func_129(uParam0, uParam1);
				}
			}
		}
	}
}

void func_129(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xA571D46727E2B718(2))
	{
		unk_0xAAE7CE1D63167423();
		unk_0xEDE476E5EE29EDB1(2, 239);
		unk_0xEDE476E5EE29EDB1(2, 240);
		unk_0xEDE476E5EE29EDB1(2, 237);
		unk_0xEDE476E5EE29EDB1(2, 238);
		unk_0xFE99B66D079CF6BC(2, 200, true);
		if (unk_0xE2587F8CBBD87B1D(2, 241))
		{
			unk_0xE8A25867FBA3B05E(2, 188, 1f);
		}
		if (unk_0xE2587F8CBBD87B1D(2, 242))
		{
			unk_0xE8A25867FBA3B05E(2, 187, 1f);
		}
		if (unk_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					unk_0xE8A25867FBA3B05E(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xA571D46727E2B718(2))
	{
		func_131(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((unk_0xF3A21BCD95725A4A(2, 188) || unk_0xE2587F8CBBD87B1D(2, 188)) || iVar6 < -100)
			{
				unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_246), false);
				func_98(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_130(uParam1, 188))
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_246), false);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((unk_0xF3A21BCD95725A4A(2, 187) || unk_0xE2587F8CBBD87B1D(2, 187)) || iVar6 > 100)
			{
				unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_246), true);
				func_98(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_130(uParam1, 187))
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((unk_0xF3A21BCD95725A4A(2, 204) || unk_0x91AEF906BCA88877(2, 204)) || unk_0x580417101DDB492F(2, 237))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_246), 3);
			func_98(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_130(uParam1, 204))
	{
		unk_0xE80492A9AC099A93(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xE80492A9AC099A93(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_132(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xE80492A9AC099A93(&(uParam1->f_42), 2);
		}
		if (func_148(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (unk_0xF3A21BCD95725A4A(2, 217) || unk_0x91AEF906BCA88877(2, 217))
				{
					if (!unk_0x5D511E3867C87139())
					{
						unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_246), 2);
						unk_0x859ED1CEA343FCA8(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xF3A21BCD95725A4A(2, 217))
			{
				unk_0xE80492A9AC099A93(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_130(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_131(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xF3A21BCD95725A4A(2, iParam1) && !unk_0xE2587F8CBBD87B1D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_154(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xF3A21BCD95725A4A(2, iParam1) && !unk_0xE2587F8CBBD87B1D(2, iParam1)) || func_154(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_131(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 221) * 127f));
		}
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT_STATE");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0xC6796A8FFA375E53();
}

void func_133()
{
	unk_0xC6796A8FFA375E53();
}

void func_134(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[bParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x80338406F3475E55("NUMBER");
				unk_0xE7DCB5B874BCD96E(fParam15, 2);
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x80338406F3475E55("NUMBER");
				unk_0x03B504CF259931BC(unk_0xF34EE736CF047844(fParam15));
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 18 || Param0.f_29[bParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0xD3D15555431AB793())
				{
					if (Param0.f_29[bParam14] == 19 || Param0.f_29[bParam14] == 20)
					{
						fParam15 = func_136(fParam15);
					}
					else
					{
						fParam15 = func_135(fParam15);
					}
				}
				unk_0x80338406F3475E55("NUMBER");
				unk_0xE7DCB5B874BCD96E(fParam15, 2);
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 0:
			break;
	}
}

float func_135(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_136(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_137(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (bParam15 == 2147483647 || bParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x80338406F3475E55("NUMBER");
				unk_0x03B504CF259931BC(bParam15);
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x80338406F3475E55("NUMBER");
				unk_0x03B504CF259931BC(-bParam15);
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 11 && bParam15 < 0)
				{
					bParam15 = (bParam15 * -1);
				}
				if (bParam15 >= 3600000 || bParam15 <= -3600000)
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 14);
					unk_0x362E2D3FE93A9959();
				}
				else if (Param0.f_29[bParam14] == 9)
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 6);
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 2055);
					unk_0x362E2D3FE93A9959();
				}
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (bParam15 == 2147483647)
				{
					unk_0x80338406F3475E55("SC_LB_EMPTY");
					unk_0x362E2D3FE93A9959();
				}
				else if (bParam15 >= 3600000 || bParam15 <= -3600000)
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 14);
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 2055);
					unk_0x362E2D3FE93A9959();
				}
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				bParam15 = (bParam15 * -1);
				if (bParam15 >= 3600000 || bParam15 <= -3600000)
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 14);
					unk_0x362E2D3FE93A9959();
				}
				else if (Param0.f_29[bParam14] == 10)
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 6);
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("STRING");
					unk_0x1115F16B8AB9E8BF(bParam15, 2055);
					unk_0x362E2D3FE93A9959();
				}
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0x35B9E0803292B641(bParam15))
				{
					unk_0x80338406F3475E55("SCLB_VEH_CUST");
					unk_0xC63CD5D2920ACBE7(unk_0xB215AAC32D25D019(bParam15));
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					unk_0x80338406F3475E55("SC_LB_EMPTY");
					unk_0x362E2D3FE93A9959();
				}
			}
			else if (unk_0x35B9E0803292B641(bParam15))
			{
				unk_0x80338406F3475E55(unk_0xB215AAC32D25D019(bParam15));
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 8:
			if (func_145(bParam15) != 0)
			{
				unk_0x80338406F3475E55(func_142(func_145(bParam15), 0));
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 14 || Param0.f_29[bParam14] == 16)
				{
					bParam15 = (bParam15 * -1);
				}
				if (!unk_0xD3D15555431AB793())
				{
					if (Param0.f_29[bParam14] == 15 || Param0.f_29[bParam14] == 16)
					{
						bParam15 = unk_0xF34EE736CF047844(func_136(unk_0xBBDA792448DB5A89(bParam15)));
					}
					else
					{
						bParam15 = unk_0xF34EE736CF047844(func_135(unk_0xBBDA792448DB5A89(bParam15)));
					}
				}
				unk_0x80338406F3475E55("NUMBER");
				unk_0x03B504CF259931BC(bParam15);
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 21:
			if (bParam15 > 20)
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				Var0 = { func_141(bParam15) };
				unk_0x80338406F3475E55(&Var0);
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 22:
			if (bParam16)
			{
				unk_0x80338406F3475E55("NUMBER");
				unk_0x03B504CF259931BC(func_138(bParam15));
				unk_0x362E2D3FE93A9959();
			}
			else
			{
				unk_0x80338406F3475E55("SC_LB_EMPTY");
				unk_0x362E2D3FE93A9959();
			}
			break;
		
		case 0:
			break;
	}
}

bool func_138(bool bParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	bVar0 = func_140(199);
	if (bParam0 < 100)
	{
		return 1;
	}
	else if (bParam0 > bVar0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(bParam0) - unk_0xBBDA792448DB5A89(bVar0));
		bVar2 = unk_0xF34EE736CF047844((fVar1 / unk_0xBBDA792448DB5A89(Global_262145.f_31077)));
		return (199 + bVar2);
	}
	fVar3 = (unk_0xBBDA792448DB5A89(Global_262145.f_31076) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(bParam0) - fVar7);
	return unk_0xF34EE736CF047844(func_139(-fVar5, -fVar6, fVar7, 1));
}

float func_139(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - unk_0x71D93B57D07F9804(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + unk_0x71D93B57D07F9804(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

bool func_140(bool bParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(bParam0);
	fVar1 = (unk_0xBBDA792448DB5A89(Global_262145.f_31076) / 2f);
	return unk_0xF2DB717A73826179((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_141(bool bParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (bParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	StringIntConCat(&Var0, bParam0, 16);
	return Var0;
}

char* func_142(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case -774507221:
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case 1853742572:
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		default:
			if (func_144(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_143(&(Var0.f_31));
				}
				else
				{
					return func_143(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_143(var uParam0)
{
	return uParam0;
}

int func_144(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE47635F352DA367();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x79923CD21BECE14E(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_145(bool bParam0)
{
	if (bParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (bParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (bParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (bParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (bParam0 == 402)
	{
		return -572349828;
	}
	else if (bParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (bParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (bParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (bParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (bParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (bParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (bParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (bParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (bParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (bParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (bParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (bParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (bParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (bParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (bParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	if (bParam3 > 0)
	{
		unk_0x80338406F3475E55("NUMBER");
		unk_0x03B504CF259931BC(bParam3);
		unk_0x362E2D3FE93A9959();
	}
	else
	{
		unk_0x80338406F3475E55("SC_LB_EMPTY");
		unk_0x362E2D3FE93A9959();
	}
	unk_0xE83A3E3557A56640(sParam4);
	unk_0xE83A3E3557A56640(sParam5);
}

int func_147(var* uParam0, var* uParam1)
{
	if (!func_148(*uParam0))
	{
		return 0;
	}
	if (!func_148(*uParam1))
	{
		return 0;
	}
	if (unk_0x57DBA049E110F217(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6F79B93B0A8E4133(&uParam0, 13);
}

void func_149(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_150(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_153(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_153(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_153(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_151(uParam1);
	}
}

void func_151(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	if (unk_0x9C51349BE6CDFE2C(Global_2097536.f_2826))
	{
		iVar4 = unk_0x58A651CD201D89AD(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_152(&Global_2101737);
				iVar2 = 0;
				unk_0x9120E8DBA3D69273(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_147(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_152(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_153(var uParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x6D0DE6A7B5DA71F8(unk_0x4F8644AF03D0E0D6()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_25(unk_0x4F8644AF03D0E0D6()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		bVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - bVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - bVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - bVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		bVar0 = unk_0xF34EE736CF047844(unk_0xBBDA792448DB5A89((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + bVar0) < 12 && (Global_2097536.f_2775[iParam3] + bVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + bVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + bVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_154(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_155(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_156(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	unk_0x933D6A9EEC1BACD0(&bParam2, 7);
	unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0x80338406F3475E55(sParam3);
	unk_0xAE4E8157D9ECF087();
	unk_0xC6796A8FFA375E53();
}

int func_157(var uParam0)
{
	if (!Global_2097532)
	{
		if (!func_193(&(Global_2097536.f_2827)))
		{
			func_155(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_154(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x85443FF4C328F53B() || !unk_0xF25D331DC2627BBC()) || (!unk_0x25CB5A9F37BFD063() && unk_0x1353F87E89946207())) || Global_2097536.f_2832 != 0)
	{
		unk_0xE80492A9AC099A93(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_192(uParam0);
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_190(uParam0))
	{
		return 0;
	}
	if (!func_188(uParam0))
	{
		return 0;
	}
	if (!func_175(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_101(&Global_2101867);
		func_150(uParam0, &Global_2101867);
		func_149(uParam0, &Global_2101867);
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_193(&(Global_2097536.f_2830)))
		{
			func_155(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_154(&(Global_2097536.f_2830), 30000, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_42), 7);
		}
		if (func_172(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_169(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_162(&Global_2101867))
		{
			func_158(&Global_2101867);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_42), 7);
			func_158(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_158(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_161(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_160(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_152(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x0C515FAB3FF9EA92(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_148((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_2101737.f_61), false);
			}
			else
			{
				unk_0xE80492A9AC099A93(&(Global_2101737.f_61), false);
			}
			unk_0x933D6A9EEC1BACD0(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			unk_0xB9BB18E2C40142ED(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_159(unk_0x4F8644AF03D0E0D6()) };
}

Vector3 func_159(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x9C51349BE6CDFE2C(Global_2100721.f_81[iParam1]))
		{
			unk_0x8EC74CEB042E7CFF(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x9C51349BE6CDFE2C(iParam0))
		{
			unk_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x9C51349BE6CDFE2C(Global_2100721.f_81[iVar0]))
		{
			iVar3 = unk_0xF04C1C27DA35F6C8(Global_2100721.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_168(uParam0);
			if ((func_167() || func_166()) && !unk_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_148((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_165(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_163(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_148((uParam0[iVar0 /*100*/])->f_32) && func_148(Global_2103169[iVar1 /*13*/]))
					{
						if (unk_0x57DBA049E110F217(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, var* uParam2, var uParam3)
{
	var* uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0xB5074DB804E28CE7())
			{
			}
			else
			{
				unk_0x9AA46BADAD0E27ED();
				unk_0xCE86D8191B762107(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xB5074DB804E28CE7())
			{
				if (unk_0x5B4F04F19376A0BA())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0xC080FF658B2E41DA(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_164(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0xB5074DB804E28CE7())
			{
				unk_0x042E4B70B93E6054();
			}
			else
			{
				unk_0x9AA46BADAD0E27ED();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_164(var* uParam0, char* sParam1)
{
	unk_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

int func_165(var* uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_148(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x57DBA049E110F217(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_166()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

bool func_167()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

void func_168(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_106(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0xB5074DB804E28CE7())
		{
			unk_0x9AA46BADAD0E27ED();
		}
	}
	if (unk_0xB5074DB804E28CE7())
	{
		unk_0x042E4B70B93E6054();
	}
	Global_2103169.f_206 = 0;
}

int func_169(var uParam0)
{
	int iVar0;
	
	if (unk_0x48AF36444B965238())
	{
		return 1;
	}
	else if (func_166() || func_167())
	{
		if (!func_171(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_170(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_170(var uParam0, var* uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_148(*uParam1))
			{
				if (!unk_0x0F10B05DDF8D16E9(uParam1))
				{
					if (func_166() || func_167())
					{
						if (unk_0x9F0C0A981D73FA56(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xF6201B4DAF662A9D())
					{
						if (unk_0x9F0C0A981D73FA56(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x426141162EBE5CDB(uParam1), 64);
						if (unk_0xCCA1072C29D096C2())
						{
						}
						else if (func_167())
						{
						}
						else if (unk_0x48AF36444B965238())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x6D0DE6A7B5DA71F8(unk_0xCE5F689CF5A0A49D(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x0F10B05DDF8D16E9(uParam1))
			{
				if (!unk_0xB071E27958EF4CF0())
				{
					if (unk_0xFD00798DBA7523DD())
					{
						StringCopy(sParam2, unk_0x426141162EBE5CDB(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x6D0DE6A7B5DA71F8(unk_0xCE5F689CF5A0A49D(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_166() && !func_167())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_106(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_148((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xD66C9E72B3CC4982(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x58CC181719256197((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_148((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	int iVar0;
	
	if (func_166() || func_167())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_174(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_173(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xCA042B6957743895(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCD51DD8F87AEC5C(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_148(Var0))
			{
				if (!unk_0x0F10B05DDF8D16E9(&Var0))
				{
					if ((unk_0xF6201B4DAF662A9D() || func_166()) || func_167())
					{
						if (unk_0x9F0C0A981D73FA56(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x426141162EBE5CDB(&Var0), 64);
						if (unk_0xCCA1072C29D096C2())
						{
						}
						else if (func_167())
						{
						}
						else if (unk_0x48AF36444B965238())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x6D0DE6A7B5DA71F8(unk_0xCE5F689CF5A0A49D(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x0F10B05DDF8D16E9(&Var0))
			{
				if (!unk_0xB071E27958EF4CF0())
				{
					if (unk_0xFD00798DBA7523DD())
					{
						StringCopy(sParam17, unk_0x426141162EBE5CDB(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x6D0DE6A7B5DA71F8(unk_0xCE5F689CF5A0A49D(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_174(var uParam0, char* sParam1, char* sParam2, int iParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_166() && !func_167())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xCA042B6957743895(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCD51DD8F87AEC5C(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(iParam3[0 /*16*/], "", 64);
			if (func_148(Var1[0 /*13*/]))
			{
				if (!unk_0x0F10B05DDF8D16E9(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x6D0DE6A7B5DA71F8(unk_0xCE5F689CF5A0A49D(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x58CC181719256197(*uParam4, iParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(iParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	bVar9 = 2;
	Var12 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	switch ((*uParam0)[bVar9])
	{
		case 0:
			Global_2097536.f_2775[bVar9] = -1;
			Global_2097536.f_2704[bVar9] = 0;
			Global_2097157.f_374 = -1;
			if (unk_0x579CCED0265D4896())
			{
				if (unk_0xB124B57F571D8F18(&Var12))
				{
					if (unk_0xEEE6EACBE8874FBA(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[bVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[bVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[bVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_187(), 0, 0, 0))
			{
				func_185(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_187())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x88578F6EC36B4A3A(iVar7, false))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x38491439B6BA7F7D(iVar7, false))
									{
										iVar5 = iVar7;
									}
								}
								func_184(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[bVar9] < 11)
							{
								if (func_187() && iVar5 == 0)
								{
									func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[bVar9] = 0;
									Global_2097536.f_2704[bVar9]++;
								}
								if (func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_147(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_2097536.f_2775[bVar9] = 0;
									}
									MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32 = { Var0 };
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59 = Var0.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar4 = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar3] = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar3] = unk_0x38491439B6BA7F7D(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[bVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_2097536.f_2704[bVar9]++;
						}
						if (!func_187())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_184(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_2097536.f_2704[bVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_187() && iVar5 == iVar7)
								{
									if (!func_147(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
										Global_2097536.f_2704[bVar9]++;
									}
								}
								if (func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[bVar9] < 11)
								{
									if (func_148(Var0) && !func_147(&Var0, &(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_147(&Var0, &Var12))
										{
											if (Global_2097536.f_2775[bVar9] < 0)
											{
												Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
											}
										}
										MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32 = { Var0 };
										Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59 = Var0.f_96;
										Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar4 = unk_0x88578F6EC36B4A3A(iVar7, Global_2097536.f_2709);
											if (iVar4 == 1)
											{
												Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar2] = unk_0x88578F6EC36B4A3A(iVar7, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar2] = unk_0x38491439B6BA7F7D(iVar7, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[bVar9]++;
									}
								}
							}
							func_184(&Var0);
							iVar7++;
						}
						unk_0x71B008056E5692D6();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_2097536.f_2775[bVar9] == -1 && func_187())
							{
								if (Global_2097536.f_2704[bVar9] >= 1)
								{
									func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
								Global_2097536.f_2704[bVar9]++;
							}
							(*uParam0)[bVar9] = 3;
						}
						else
						{
							(*uParam0)[bVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_2097536.f_2704[bVar9]++;
						}
						unk_0x71B008056E5692D6();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[bVar9] = -1;
						(*uParam0)[bVar9] = 2;
					}
				}
				else
				{
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[bVar9] = -1;
					(*uParam0)[bVar9] = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2832), bVar9);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[bVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_185(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_2097536.f_2704[bVar9] < 11 || bVar10)
							{
								if (func_187() && (func_147(&Var0, &Var12) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar4 = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0x38491439B6BA7F7D(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_2097536.f_2704[bVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_2097536.f_2704[bVar9]++;
										}
									}
								}
								else if (Global_2097536.f_2704[bVar9] < 11)
								{
									MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32 = { Var0 };
									if (func_182(uParam0->f_44))
									{
										iVar4 = unk_0x88578F6EC36B4A3A(iVar2, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59 = Var0.f_96;
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar3] = unk_0x88578F6EC36B4A3A(iVar2, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar3] = unk_0x38491439B6BA7F7D(iVar2, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_2097536.f_2704[bVar9]++;
									}
								}
							}
							func_184(&Var0);
							iVar2++;
						}
					}
					unk_0x71B008056E5692D6();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar9] = 3;
				}
				else
				{
					unk_0x71B008056E5692D6();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2832), bVar9);
					Global_2097536.f_2704[bVar9] = 0;
					(*uParam0)[bVar9] = 3;
				}
				if (Global_2097536.f_2775[bVar9] == -1 && func_187())
				{
					if (Global_2097536.f_2704[bVar9] >= 1)
					{
						func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
					}
					Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
					Global_2097536.f_2704[bVar9]++;
				}
			}
			break;
		
		case 3:
			func_176(bVar9, Global_2097157.f_374);
			(*uParam0)[bVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_176(bool bParam0, int iParam1)
{
	int iVar0;
	
	if ((func_187() && Global_2097536.f_2704[bParam0] > Global_2097536.f_2775[bParam0]) && Global_2097536.f_2775[bParam0] >= 0)
	{
		if (iParam1 != Global_2097536[bParam0 /*901*/][Global_2097536.f_2775[bParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[bParam0])
			{
				if (iVar0 != Global_2097536.f_2775[bParam0])
				{
					if (Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[bParam0 /*901*/][Global_2097536.f_2775[bParam0] /*75*/].f_59)
					{
						if (Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_187())
		{
		}
		if (Global_2097536.f_2704[bParam0] <= Global_2097536.f_2775[bParam0])
		{
		}
		if (Global_2097536.f_2775[bParam0] < 0)
		{
		}
	}
}

int func_177(var uParam0, var uParam1, var* uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0xBA2C7DB0C129449A(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xAC392C8483342AC2(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x2FB19228983E832C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_178(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_2097152 = 1;
	func_209(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

int func_179()
{
	if (unk_0xB0034A223497FFCB() && !func_201())
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (unk_0xA31FD15197B192BD() || Global_2097152)
	{
		func_181();
		return 1;
	}
	return 0;
}

void func_181()
{
	if (func_154(&(Global_2097152.f_1), 120000, 1))
	{
		unk_0x7CCE5C737A665701(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_98(&(Global_2097152.f_1));
	}
}

int func_182(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_183(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_198(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x6D0DE6A7B5DA71F8(unk_0x4F8644AF03D0E0D6()), 64);
		sParam1->f_32 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	}
	sParam1->f_59 = iParam2;
	if (func_182(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_184(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_185(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_186(var uParam0, var uParam1, var* uParam2, int iParam3, var* uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	
	iVar0 = Global_2097157.f_211.f_36[0];
	fVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		fVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (unk_0x7EEC7E4F6984A16A(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xE662C8B759D08F3C(uParam2, fVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x5CE587FB5A42C8C4(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xAC392C8483342AC2(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x2FB19228983E832C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_187()
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_188(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	bVar9 = true;
	Var10 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x203F1CFD823B27A4();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[bVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_187())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_189(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_185(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var1))
					{
						if (func_187())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_198(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_147(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x88578F6EC36B4A3A(iVar6, false))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x38491439B6BA7F7D(iVar6, false))
									{
										iVar4 = iVar6;
									}
									func_184(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_187() && iVar4 == 0)
						{
							if (Global_2097536.f_2704[bVar9] < 11)
							{
								func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
								Global_2097536.f_2775[bVar9] = 0;
								Global_2097536.f_2704[bVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0x34770B9CE0E03B91(0, &Var0);
							if (func_187() && (func_147(&Var0, &Var10) || func_147(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_148(Var0) && Global_2097536.f_2704[bVar9] < 11)
							{
								if (func_147(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59 = 1;
								if (func_182(uParam0->f_44))
								{
									iVar7 = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2709);
									if (iVar7 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_198(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar2] = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2710[iVar2]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar2] = unk_0x38491439B6BA7F7D(0, Global_2097536.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_184(&Var0);
								unk_0x71B008056E5692D6();
								func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[bVar9] == -1 && func_187())
								{
									if (Global_2097536.f_2704[bVar9] >= 1)
									{
										func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
									}
									Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
									Global_2097536.f_2704[bVar9]++;
								}
								return 0;
							}
							func_184(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_184(&Var0);
							unk_0x71B008056E5692D6();
							func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[bVar9] == -1 && func_187())
							{
								if (Global_2097536.f_2704[bVar9] >= 1)
								{
									func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
								Global_2097536.f_2704[bVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_187())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0x34770B9CE0E03B91(iVar6, &Var0);
							if (Global_2097536.f_2704[bVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_187() && iVar4 == iVar6)
								{
									if (!func_147(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
										Global_2097536.f_2704[bVar9]++;
									}
								}
								if (func_187() && (func_147(&Var0, &Var10) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_148(Var0) && !func_147(&Var0, &(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_147(&Var0, &Var10))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar7 = unk_0x88578F6EC36B4A3A(iVar6, Global_2097536.f_2709);
											if (iVar7 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2] = unk_0x88578F6EC36B4A3A(iVar6, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2] = unk_0x38491439B6BA7F7D(iVar6, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_184(&Var0);
							iVar6++;
						}
						unk_0x71B008056E5692D6();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[bVar9] == -1 && func_187())
						{
							if (Global_2097536.f_2704[bVar9] >= 1)
							{
								func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_183(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
							}
							Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
							Global_2097536.f_2704[bVar9]++;
						}
						return 0;
					}
					else
					{
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2832), true);
						return 0;
					}
				}
			}
			else
			{
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_176(bVar9, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_189(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0x918B101666F9CB83(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xAC392C8483342AC2(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x2FB19228983E832C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_190(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	bVar10 = false;
	Var0 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	switch ((*uParam0)[bVar10])
	{
		case 0:
			Global_2097536.f_2775[bVar10] = -1;
			Global_2097536.f_2704[bVar10] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_191(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_187(), 0, 0, 0))
			{
				func_185(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_187())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_2097157.f_374 < 0)
								{
									if (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x88578F6EC36B4A3A(iVar8, false))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x38491439B6BA7F7D(iVar8, false))
									{
										iVar6 = iVar8;
									}
								}
								func_184(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_2097536.f_2704[bVar10] < 11)
							{
								if (func_187() && iVar6 == 0)
								{
									func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Var1.f_96);
									Global_2097536.f_2775[bVar10] = 0;
									Global_2097536.f_2704[bVar10]++;
								}
								if (func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_147(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_2097536.f_2775[bVar10] = 0;
									}
									MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), {Var1.f_13}, 16);
									Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32 = { Var1 };
									Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59 = Var1.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar5 = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2709);
										if (iVar5 == 1)
										{
											Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar3] = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar3] = unk_0x38491439B6BA7F7D(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[bVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_2097536.f_2704[bVar10]++;
						}
						if (!func_187())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_184(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_2097536.f_2704[bVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_187() && iVar6 == iVar8)
								{
									if (!func_147(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Var1.f_96);
										Global_2097536.f_2775[bVar10] = Global_2097536.f_2704[bVar10];
										Global_2097536.f_2704[bVar10]++;
									}
								}
								if (func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[bVar10] < 11)
								{
									if (func_148(Var1) && !func_147(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_147(&Var1, &Var0))
										{
											if (Global_2097536.f_2775[bVar10] < 0)
											{
												Global_2097536.f_2775[bVar10] = Global_2097536.f_2704[bVar10];
											}
										}
										MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32 = { Var1 };
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar5 = unk_0x88578F6EC36B4A3A(iVar8, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar3] = unk_0x88578F6EC36B4A3A(iVar8, Global_2097536.f_2710[iVar3]);
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar3] = unk_0x38491439B6BA7F7D(iVar8, Global_2097536.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_2097536.f_2704[bVar10]++;
									}
								}
							}
							func_184(&Var1);
							iVar8++;
						}
						unk_0x71B008056E5692D6();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_2097536.f_2775[bVar10] == -1 && func_187())
							{
								if (Global_2097536.f_2704[bVar10] >= 1)
								{
									func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Global_2097536[bVar10 /*901*/][(Global_2097536.f_2704[bVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), 1);
								}
								Global_2097536.f_2775[bVar10] = Global_2097536.f_2704[bVar10];
								Global_2097536.f_2704[bVar10]++;
							}
							(*uParam0)[bVar10] = 2;
						}
						else
						{
							(*uParam0)[bVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_2097536.f_2704[bVar10]++;
						}
						unk_0x71B008056E5692D6();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[bVar10] = -1;
						(*uParam0)[bVar10] = 1;
					}
				}
				else
				{
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[bVar10] = -1;
					(*uParam0)[bVar10] = 1;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2832), bVar10);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[bVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_185(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_187() && (func_147(&Var1, &Var0) || func_147(&Var1, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_2097536.f_2704[bVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_182(uParam0->f_44))
										{
											iVar5 = unk_0x88578F6EC36B4A3A(0, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[bVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0x88578F6EC36B4A3A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0x38491439B6BA7F7D(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_2097536.f_2704[bVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_2097536.f_2704[bVar10]++;
											}
										}
										else if (Global_2097536.f_2704[bVar10] == 1 && Global_2097536.f_2775[bVar10] == -1)
										{
											Global_2097536.f_2704[bVar10]++;
										}
									}
									else if (Global_2097536.f_2704[bVar10] < 11)
									{
										MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32 = { Var1 };
										if (func_182(uParam0->f_44))
										{
											iVar5 = unk_0x88578F6EC36B4A3A(iVar3, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar4] = unk_0x88578F6EC36B4A3A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar4] = unk_0x38491439B6BA7F7D(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_2097536.f_2704[bVar10]++;
										}
									}
								}
							}
							func_184(&Var1);
							iVar3++;
						}
					}
					unk_0x71B008056E5692D6();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar10] = 2;
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2832), bVar10);
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[bVar10] = 0;
					(*uParam0)[bVar10] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[bVar10] == -1 && func_187())
			{
				if (Global_2097536.f_2704[bVar10] >= 1)
				{
					func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Global_2097536[bVar10 /*901*/][(Global_2097536.f_2704[bVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_183(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), 1);
				}
				Global_2097536.f_2775[bVar10] = Global_2097536.f_2704[bVar10];
				Global_2097536.f_2704[bVar10]++;
			}
			break;
		
		case 2:
			func_176(bVar10, Global_2097157.f_374);
			(*uParam0)[bVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_191(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x0C515FAB3FF9EA92(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x0C515FAB3FF9EA92(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0)
{
	int iVar0;
	
	if (unk_0x9C51349BE6CDFE2C(Global_2097536.f_2826))
	{
		iVar0 = unk_0xF04C1C27DA35F6C8(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_42), 5);
			func_160(Global_2097536.f_2826, -1);
		}
	}
}

bool func_193(var uParam0)
{
	return uParam0->f_1;
}

void func_194(int iParam0)
{
	if (unk_0x85F01B8D5B90570E(iParam0))
	{
		unk_0x0DF606929C105BE1(iParam0, 255, 255, 255, false, 0);
	}
}

void func_195(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	bool bVar5;
	struct<13> Var6;
	bool bVar7;
	
	sVar0 = "";
	if (BitTest(bParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (BitTest(bParam2, 5))
	{
		*bParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (BitTest(bParam2, 6))
	{
		*bParam1++;
		if (unk_0x1077788E268557C2() && unk_0x579CCED0265D4896())
		{
			if ((func_167() || func_166()) && !unk_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_25(unk_0x4F8644AF03D0E0D6()) };
				if (unk_0xB124B57F571D8F18(&Var4))
				{
					unk_0xEEE6EACBE8874FBA(&Var1, 35, &Var4);
					if (!unk_0xCA042B6957743895(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT");
	unk_0xC3D0841A0CC546A6(*bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	if (bVar3)
	{
		unk_0x80338406F3475E55(sVar0);
		unk_0x5F68520888E69014(&Var2);
		unk_0x362E2D3FE93A9959();
	}
	else
	{
		unk_0x80338406F3475E55(sVar0);
		unk_0x362E2D3FE93A9959();
	}
	unk_0xC6796A8FFA375E53();
	*bParam1++;
	if (bParam4)
	{
		bVar5 = false;
		unk_0x933D6A9EEC1BACD0(&bVar5, 7);
		unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT");
		unk_0xC3D0841A0CC546A6(*bParam1);
		unk_0xC3D0841A0CC546A6(bVar5);
		if (!unk_0x1077788E268557C2())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x85443FF4C328F53B())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x80338406F3475E55(sVar0);
		unk_0xAE4E8157D9ECF087();
		unk_0xC6796A8FFA375E53();
		*bParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(bParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (BitTest(bParam2, 5))
		{
			if (unk_0x203F1CFD823B27A4() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (BitTest(bParam2, 6))
		{
			if (unk_0x67A5589628E0CFF6())
			{
				if (unk_0xBA9775570DB788CF())
				{
					if (unk_0x1077788E268557C2() && unk_0x579CCED0265D4896())
					{
						if ((func_167() || func_166()) && !unk_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_25(unk_0x4F8644AF03D0E0D6()) };
							if (unk_0xB124B57F571D8F18(&Var6))
							{
								unk_0xEEE6EACBE8874FBA(&Var1, 35, &Var6);
								if (!unk_0xCA042B6957743895(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		bVar7 = false;
		unk_0x933D6A9EEC1BACD0(&bVar7, 7);
		unk_0xF6E48914C7A8694E(iParam0, "SET_SLOT");
		unk_0xC3D0841A0CC546A6(*bParam1);
		unk_0xC3D0841A0CC546A6(bVar7);
		if (bVar3)
		{
			unk_0x80338406F3475E55(sVar0);
			unk_0x5F68520888E69014(&Var2);
			unk_0xAE4E8157D9ECF087();
		}
		else
		{
			unk_0x80338406F3475E55(sVar0);
			unk_0xAE4E8157D9ECF087();
		}
		unk_0xC6796A8FFA375E53();
		*bParam1++;
	}
}

void func_196(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xF6E48914C7A8694E(iParam0, "SET_TITLE");
	unk_0x80338406F3475E55(sParam1);
	unk_0x362E2D3FE93A9959();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x80338406F3475E55(uParam2[iVar0 /*6*/]);
		unk_0x362E2D3FE93A9959();
		iVar0++;
	}
	unk_0xC6796A8FFA375E53();
}

void func_197(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x80338406F3475E55(sParam1);
	if (!unk_0xCA042B6957743895(sParam2))
	{
		unk_0xC63CD5D2920ACBE7(sParam2);
	}
	if (bParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xCA042B6957743895(sParam3))
			{
				unk_0x5F68520888E69014(sParam3);
			}
		}
		else if (!unk_0xCA042B6957743895(sParam3))
		{
			unk_0xC63CD5D2920ACBE7(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xCA042B6957743895(sParam3))
			{
				unk_0x5F68520888E69014(sParam3);
			}
		}
		else if (!unk_0xCA042B6957743895(sParam3))
		{
			unk_0xC63CD5D2920ACBE7(sParam3);
		}
		unk_0x03B504CF259931BC(bParam5);
	}
	unk_0x362E2D3FE93A9959();
	unk_0xC6796A8FFA375E53();
}

int func_198(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, bool bParam1)
{
	unk_0xF6E48914C7A8694E(iParam0, "SET_DISPLAY_TYPE");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC6796A8FFA375E53();
}

int func_200()
{
	return unk_0x11FE353CF9733E6F("SC_LEADERBOARD");
}

bool func_201()
{
	return func_202(unk_0x4F8644AF03D0E0D6());
}

int func_202(bool bParam0)
{
	switch (func_203(bParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_203(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_192;
}

void func_204(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_205(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		func_208();
	}
	func_207(4, -1);
	func_207(6, -1);
	func_207(7, -1);
	func_207(3, -1);
	func_207(1, -1);
	func_207(2, -1);
	func_207(11, -1);
	func_207(13, -1);
	func_207(14, -1);
	func_207(16, -1);
}

void func_207(bool bParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1648034.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_208()
{
	Global_2815059.f_4599 = 0;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			*uParam0 = unk_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = unk_0x9CD27B0045628463();
	}
	uParam0->f_1 = 1;
}

int func_210(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < unk_0xFC8202EFC642E6F2() && Global_2103068.f_2 > 0)
	{
		func_98(&Global_2103068);
		func_98(&(Global_2103068.f_49));
		*bParam0 = 0;
		Global_2103068.f_2 = 0;
		func_218(0);
	}
	Global_2103068.f_2 = unk_0xFC8202EFC642E6F2();
	iVar1 = -1;
	if (func_167())
	{
		if (unk_0xBD545D44CCE70597() == 0)
		{
			iVar1 = unk_0x74FB3E29E6D10FA9();
		}
	}
	if ((func_167() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_216() && unk_0x1077788E268557C2()))
	{
		if (unk_0x8D11E61A4ABF49CC())
		{
			func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
			if (!BitTest(*bParam0, 4))
			{
				unk_0x933D6A9EEC1BACD0(bParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_211(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_216())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*bParam0, 0))
			{
				if (!unk_0xF3A21BCD95725A4A(2, 201))
				{
					unk_0x933D6A9EEC1BACD0(bParam0, false);
				}
			}
			else if (unk_0x50F940259D3841E6(2, 201))
			{
				func_98(&(Global_2103068.f_49));
				func_98(&Global_2103068);
				*bParam0 = 0;
				Global_2103068.f_2 = 0;
				func_218(0);
				return 1;
			}
		}
	}
	else
	{
		func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
		if ((func_193(&(Global_2103068.f_49)) && !func_154(&(Global_2103068.f_49), 2000, 1)) && !unk_0x1077788E268557C2())
		{
			unk_0x933D6A9EEC1BACD0(bParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_211(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*bParam0, 3))
		{
			if (!BitTest(*bParam0, 1))
			{
				unk_0x94DD7888C10A979E(false);
				unk_0x933D6A9EEC1BACD0(bParam0, true);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_211(&(Global_2103068.f_3), 0);
			}
		}
		if (func_193(&Global_2103068))
		{
			if (!func_154(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x1077788E268557C2())
				{
					if (unk_0xEFFB25453D8600F9())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0x5D511E3867C87139())
					{
						if (!BitTest(*bParam0, 0))
						{
							if (!unk_0xF3A21BCD95725A4A(2, 201))
							{
								unk_0x933D6A9EEC1BACD0(bParam0, false);
							}
						}
						else if (unk_0x50F940259D3841E6(2, 201))
						{
							func_98(&Global_2103068);
							*bParam0 = 0;
							Global_2103068.f_2 = 0;
							func_218(0);
							return 1;
						}
					}
				}
				else
				{
					func_98(&Global_2103068);
					*bParam0 = 0;
					Global_2103068.f_2 = 0;
					func_218(0);
					return 1;
				}
			}
			else if (BitTest(*bParam0, 3))
			{
				if (unk_0xEFFB25453D8600F9())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*bParam0, 0))
				{
					if (!unk_0xF3A21BCD95725A4A(2, 201))
					{
						unk_0x933D6A9EEC1BACD0(bParam0, false);
					}
				}
				else if (unk_0x50F940259D3841E6(2, 201))
				{
					func_98(&(Global_2103068.f_49));
					func_98(&Global_2103068);
					*bParam0 = 0;
					Global_2103068.f_2 = 0;
					func_218(0);
					return 1;
				}
			}
			else
			{
				if (unk_0xEFFB25453D8600F9())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0x5D511E3867C87139())
				{
					if (!BitTest(*bParam0, 0))
					{
						if (!unk_0xF3A21BCD95725A4A(2, 201))
						{
							unk_0x933D6A9EEC1BACD0(bParam0, false);
						}
					}
					else if (unk_0x50F940259D3841E6(2, 201))
					{
						func_98(&(Global_2103068.f_49));
						func_98(&Global_2103068);
						*bParam0 = 0;
						Global_2103068.f_2 = 0;
						func_218(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_211(var uParam0, bool bParam1)
{
	func_212(uParam0);
	if (bParam1)
	{
		func_218(0);
	}
	uParam0->f_35 = 1;
}

void func_212(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_214(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0x03B504CF259931BC(uParam0->f_34);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x6C188BE134E074AA(&(uParam0->f_17));
			unk_0x03B504CF259931BC(uParam0->f_33);
			unk_0x03B504CF259931BC(uParam0->f_34);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x6C188BE134E074AA(&(uParam0->f_17));
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0x1115F16B8AB9E8BF(uParam0->f_33, 70);
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		else
		{
			unk_0xABA17D7CE615ADBF(&(uParam0->f_1));
			unk_0xBD12F8228410D9B4(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_214(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_215(var uParam0)
{
	return uParam0->f_35;
}

int func_216()
{
	if (func_217())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_217()
{
	return Global_2725911;
}

void func_218(bool bParam0)
{
	unk_0x10D373323E5B9C0D();
	if (bParam0)
	{
		unk_0xC65AB383CD91DF98();
	}
}

int func_219(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_134)
	{
		func_231(&(uParam0->f_72), bParam1);
		iLocal_134 = 1;
		func_337(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_228(190, bParam1);
			Global_2097157.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_220(&(uParam0->f_72)))
		{
			Global_2097532 = 1;
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	bool bVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_198(uParam0->f_44))
	{
		Var3 = { Global_2097157.f_361 };
	}
	else
	{
		Var3 = { func_25(unk_0x4F8644AF03D0E0D6()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_227(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_185(&Var1, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = unk_0x117B45156D7EFF2E(uParam0->f_44, 0);
				bVar4 = false;
				while (bVar4 < Global_2097157.f_142.f_1)
				{
					if (!func_226(uParam0->f_44, bVar4))
					{
						if (func_225(uParam0->f_44, 4, bVar4))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_2097157.f_142.f_2), bVar4);
						}
						else
						{
							unk_0xE80492A9AC099A93(&(Global_2097157.f_142.f_2), bVar4);
						}
					}
					bVar4++;
				}
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_148(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							bVar4 = false;
							while (bVar4 < Global_2097157.f_142.f_1)
							{
								if (!func_226(uParam0->f_44, bVar4))
								{
									if (func_225(uParam0->f_44, 4, bVar4))
									{
										Global_2097157.f_73.f_36[bVar4] = unk_0x88578F6EC36B4A3A(0, bVar4);
										if (Global_2097157.f_73.f_36[bVar4] == -1)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[bVar4] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[bVar4] = unk_0x38491439B6BA7F7D(0, bVar4);
										if (Global_2097157.f_73.f_3[bVar4] == -1f)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[bVar4] = 0f;
											}
										}
									}
								}
								bVar4++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					unk_0x71B008056E5692D6();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_224();
				if (Global_2097157.f_4)
				{
					if (func_223(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xC38DC1E90D22547C(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x10FAB35428CCC9D7() && func_222())
			{
				if (func_221())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_223(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var2.f_0 = Global_2097157.f_142;
				Var2.f_1 = Global_2097157.f_142.f_1;
				Var2.f_2 = Global_2097157.f_142.f_2;
				unk_0xC38DC1E90D22547C(&Var2, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_185(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x34770B9CE0E03B91(0, &Var0);
						if (unk_0x0C515FAB3FF9EA92(&(Var0.f_13), ""))
						{
							Global_1057163.f_1 = -1;
						}
						else
						{
							Global_1057163.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057163.f_1 = -1;
					}
					unk_0x71B008056E5692D6();
				}
				else
				{
					Global_1057163.f_1 = -1;
				}
				Global_2097157 = 999;
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_221()
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_222()
{
	return Global_2723612.f_3;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

int func_225(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (bParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (bParam2 == 3 || bParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (bParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (bParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (bParam2 == 3 || bParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (bParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xBF4FEF46DB7894D3(iParam0, iParam1, bParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_226(int iParam0, bool bParam1)
{
	if (unk_0xC4B5467A1886EA7E(iParam0, 4, bParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (bParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (bParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (bParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_227(var uParam0, var uParam1, var* uParam2, var* uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0xC30713A383BFBF0E(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xAC392C8483342AC2(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x2FB19228983E832C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_228(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0xF25D331DC2627BBC())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_229(190, 131, 0, 0f, 1);
		func_229(190, 103, iLocal_106[1], 0f, 0);
		func_229(190, 99, iLocal_106[2], 0f, 0);
		func_229(190, 109, iLocal_106[3], 0f, 0);
		func_229(190, 106, iLocal_106[5], 0f, 0);
		func_229(190, 2, iLocal_106[10], 0f, 0);
		func_229(190, 107, iLocal_106[8], 0f, 0);
		func_229(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_229(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam4)
	{
		unk_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = unk_0x117B45156D7EFF2E(Global_2097157.f_142, 0);
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (bVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_225(iParam0, 4, bVar1))
				{
					unk_0x933D6A9EEC1BACD0(&(Global_2097157.f_142.f_2), bVar1);
				}
				else
				{
					unk_0xE80492A9AC099A93(&(Global_2097157.f_142.f_2), bVar1);
				}
			}
			else
			{
				unk_0xE80492A9AC099A93(&(Global_2097157.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == unk_0xC4B5467A1886EA7E(iParam0, 4, bVar1))
		{
			bVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_2097157.f_142.f_36[bVar0] = iParam2;
	Global_2097157.f_142.f_3[bVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_2097157.f_142.f_2), bVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xE80492A9AC099A93(&(Global_2097157.f_142.f_2), bVar0);
	}
}

int func_230(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x1077788E268557C2())
	{
	}
	if ((!unk_0x655B91F1495A9090() && (unk_0x25CB5A9F37BFD063() || !unk_0x1353F87E89946207())) && unk_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x579CCED0265D4896())
			{
				Var2 = { func_25(unk_0x4F8644AF03D0E0D6()) };
				if (unk_0xB124B57F571D8F18(&Var2))
				{
					if (unk_0xEEE6EACBE8874FBA(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x10FAB35428CCC9D7() && Global_2723612.f_3)
			{
				unk_0xC980E62E33DF1D5C(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				unk_0xAE2206545888AE49(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x655B91F1495A9090())
	{
	}
	if (!unk_0x25CB5A9F37BFD063())
	{
	}
	if (unk_0x1353F87E89946207())
	{
	}
	if (!unk_0x422D396F80A96547())
	{
	}
	return 0;
}

void func_231(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_232(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	bool bVar2;
	struct<6> Var3;
	
	if (!unk_0xCA042B6957743895(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x4927FC39CD0869A0(unk_0x4F8644AF03D0E0D6(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xCA042B6957743895(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xCA042B6957743895(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xCA042B6957743895(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
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
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_240(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xCA042B6957743895(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_614 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xCA042B6957743895(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xCA042B6957743895(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_239(Global_4718592.f_168757) || func_236(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_235(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2768), true);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xCA042B6957743895(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xCA042B6957743895(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_234(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xE80492A9AC099A93(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[bVar2]))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_2097536.f_2770), bVar2);
		}
		bVar2++;
	}
	Global_2097536.f_2826 = func_233(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

bool func_233(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_198(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0xD24D37CC275948CC(&cVar0);
}

struct<6> func_234(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_235(int iParam0)
{
	return iParam0 == 74;
}

var func_236(int iParam0)
{
	return (func_238(iParam0) || func_237(iParam0));
}

bool func_237(int iParam0)
{
	return iParam0 == 44;
}

bool func_238(int iParam0)
{
	return iParam0 == 45;
}

bool func_239(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_240(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_241()
{
	if ((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 3) || Global_4718592.f_107227 == 5) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9) || Global_4718592.f_107227 == 11) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26)
	{
		return 1;
	}
	return 0;
}

int func_242(var uParam0, int iParam1)
{
	if (!func_426(&(uParam0->f_2)))
	{
		func_441(&(uParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x580417101DDB492F(2, 201) || uParam0->f_8)
		{
			if (!func_426(&(uParam0->f_5)))
			{
				func_441(&(uParam0->f_5));
				func_243(uParam0, 1051260355);
			}
		}
		if (func_426(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_427(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_426(&(uParam0->f_5)))
		{
			func_441(&(uParam0->f_5));
			func_243(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_427(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_243(var uParam0, float fParam1)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC3D0841A0CC546A6(uParam0->f_9);
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xC6796A8FFA375E53();
}

void func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_246()
{
	int iVar0;
	
	if (!bLocal_155)
	{
		iVar0 = (unk_0xD53343AA4FB7DD28(false, 65535) % 3);
	}
	else
	{
		iLocal_169++;
		iVar0 = (iLocal_169 % 2);
	}
	return iVar0;
}

void func_247(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_248(iParam4);
	if (iParam4 != 5)
	{
		unk_0xF6E48914C7A8694E(*uParam0, "RESET_MOVIE");
		unk_0xC6796A8FFA375E53();
	}
	unk_0xF6E48914C7A8694E(*uParam0, sVar0);
	unk_0x80338406F3475E55("STRING");
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x362E2D3FE93A9959();
	func_12(sParam2);
	unk_0xC6796A8FFA375E53();
	func_441(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x10FAB35428CCC9D7())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_249(var uParam0, bool bParam1)
{
	unk_0xF6E48914C7A8694E(*uParam0, "CLEAR_SCORES");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC6796A8FFA375E53();
}

int func_250(int* iParam0)
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x539E0AE3E6634B9F(iParam0);
	}
	return 1;
}

void func_251(int iParam0)
{
	unk_0x9FBDA379383A52A4(iLocal_77, iLocal_75, 1500, 1, 1);
	unk_0x026FB97D0A425F84(iLocal_78, true);
	unk_0x9FBDA379383A52A4(iLocal_77, iLocal_78, 8000, 1, 1);
	unk_0xFEDB7D269E8C60E3(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, true);
	unk_0x5640BFF86B16E8DC(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, true);
	unk_0xB13C14F66A00D047(iLocal_80, 35f);
}

void func_252(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	
	if (!unk_0x036F97C908C2B52C(iLocal_75))
	{
		bVar0 = false;
		func_333(uParam0);
		if (!bLocal_147)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x8DFCED7A656F8802(true);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!BitTest(Global_113347, 3))
						{
							func_424("DARTS_INSTR_W", -1);
							unk_0x933D6A9EEC1BACD0(&Global_113347, 3);
						}
						func_337(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!BitTest(Global_113347, 4))
						{
							func_424("DARTS_INSTR_B", -1);
							unk_0x933D6A9EEC1BACD0(&Global_113347, 4);
						}
						func_337(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x8DFCED7A656F8802(true);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x036F97C908C2B52C(iLocal_84) && uParam0->f_3 == 2)
			{
				func_332(uParam3);
			}
		}
		else
		{
			func_330(uParam3, iLocal_30);
		}
		func_329(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_326(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_318(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_311(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF3A21BCD95725A4A(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_310(iLocal_31, 0);
				if (((((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_424("DARTS_LEVEL", -1);
						unk_0x933D6A9EEC1BACD0(&(Global_113386.f_18970.f_6), bLocal_167);
						func_337(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_337(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_337(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (func_299(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0xCC33FA791322B9D9();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_142)
				{
					if (!func_426(bParam4))
					{
						func_297(bParam4);
					}
					else if (func_7(bParam4) > 20f)
					{
						func_296(iLocal_138[(1 - iLocal_30)]);
						func_427(bParam4);
						iLocal_142 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_165 = 0;
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0xD53343AA4FB7DD28(1250, 2500))
			{
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_279(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_278(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_261(uParam0, uParam3);
			break;
		
		case 5:
			func_254(uParam0, uParam2, uParam3);
			if (func_426(bParam4))
			{
				func_427(bParam4);
			}
			break;
		
		case 6:
			func_253(uParam0, uParam3);
			break;
	}
}

void func_253(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_165++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_149 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_261(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_148)
			{
				if (unk_0x7239B21A38F536BA(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x539E0AE3E6634B9F(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x163E252DE035A133(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x7239B21A38F536BA(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x06843DA7060A026B(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, true, false, false, true);
				}
			}
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_261(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x509D5878EB39E842(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_40, true, true, false);
					Var0 = { unk_0x163E252DE035A133(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x06843DA7060A026B(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, true, false, false, true);
					fVar1 = unk_0x313CE5879CEB6FCD(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0x8524A8B0171D5E07(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, true);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_295(&(uParam0->f_422), &(uParam0->f_249));
			func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_337(&(uParam1->f_666), 2, 0);
				func_337(&(uParam1->f_666), 3, 0);
				func_337(&(uParam1->f_666), 4, 0);
				func_337(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_261(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0x509D5878EB39E842(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, Local_40, true, true, false);
							Var0 = { unk_0x163E252DE035A133(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0x7239B21A38F536BA(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0x06843DA7060A026B(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], Var0, true, false, false, true);
							}
							fVar3 = unk_0x313CE5879CEB6FCD(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0x8524A8B0171D5E07(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, true);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_165 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_254(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_260();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_258("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_259("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_259("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_258("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_259("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x580417101DDB492F(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var0 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var0);
			}
			if (unk_0x580417101DDB492F(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var0);
			}
			if (unk_0x580417101DDB492F(2, 202))
			{
				Var0 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x580417101DDB492F(2, 201))
			{
				iLocal_139 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x580417101DDB492F(2, 201) || (iLocal_149 && bLocal_148))
			{
				iLocal_139 = 1;
			}
			if ((unk_0x580417101DDB492F(2, 189) || unk_0x580417101DDB492F(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0x3FEF770D40960D5A(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_144)
				{
					if (func_257(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_144 = 1;
					}
				}
				else if ((unk_0x9CD27B0045628463() % 500) < 50)
				{
				}
			}
			else if (!iLocal_144)
			{
				if (func_256(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_144 = 1;
				}
			}
			else if ((unk_0x9CD27B0045628463() % 500) < 50)
			{
			}
			if (iLocal_139 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_149 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_250(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_255(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x8D8686B622B88120(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, false, 0, false);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_440(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_419();
				if (!bLocal_148)
				{
					unk_0x2CEA2839313C09AC();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_145 = 0;
				iLocal_142 = 0;
				iLocal_144 = 0;
				iLocal_139 = 0;
				iLocal_163 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_255(var uParam0, bool bParam1, bool bParam2)
{
	unk_0xF6E48914C7A8694E(*uParam0, "ADD_DARTS_SCORE");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0xC6796A8FFA375E53();
}

int func_256(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, false);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, true);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, 3);
		}
	}
	iVar1 = unk_0xD53343AA4FB7DD28(false, 100);
	iVar2 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar2 < 85)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, false);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, true);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x933D6A9EEC1BACD0(&uVar0, 3);
		}
	}
	iVar1 = unk_0xD53343AA4FB7DD28(false, 100);
	iVar2 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar2 < 75)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x7239B21A38F536BA(func_504()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xD80958FC74E988A6(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_258(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_259(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

void func_260()
{
	unk_0x026FB97D0A425F84(iLocal_84, true);
	unk_0x026FB97D0A425F84(iLocal_75, false);
}

void func_261(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_273(uParam0);
		func_337(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_271(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_271(0);
					iLocal_106[1]++;
				}
			}
			func_337(&(uParam1->f_666), 2, 0);
			func_337(&(uParam1->f_666), 3, 0);
			func_337(&(uParam1->f_666), 4, 0);
			func_337(&(uParam1->f_666), 5, 1);
			func_273(uParam0);
			func_337(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_337(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_337(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_144)
			{
				if (func_270(iLocal_138[(1 - iLocal_30)]))
				{
					iLocal_144 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			unk_0xC1B1E9A034A63A62(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_337(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_269(uParam1, 1);
					func_271(0);
					iLocal_106[1]++;
				}
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_268(iLocal_138[iLocal_30]))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					func_267(iLocal_138[(1 - iLocal_30)]);
					iLocal_144 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_266(iLocal_138[1], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_269(uParam1, 0);
					func_271(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_264(iLocal_138[iLocal_30], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_337(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_337(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_143)
						{
							func_263(iLocal_138[1]);
							iLocal_143 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_337(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_262("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_329(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			unk_0xC1B1E9A034A63A62(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_337(&(uParam1->f_666), 3, 0);
			func_337(&(uParam1->f_666), 2, 0);
			func_337(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_262(char* sParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	unk_0x9D77056A530643F6(iParam3, true);
}

void func_263(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_264(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 75)
	{
		if (unk_0x7239B21A38F536BA(func_504()))
		{
			if (bParam1)
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_504(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_265())
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_265()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 75)
	{
		if (unk_0x7239B21A38F536BA(func_504()))
		{
			if (bParam1)
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_504(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_265())
			{
				func_4(unk_0xD80958FC74E988A6(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xD80958FC74E988A6())
		{
			iVar1 = 1;
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_269(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0xD80958FC74E988A6())
	{
		iVar0 = 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_18970++;
			func_272("DARTS_STAT_NUM_BULLSEYES", Global_113386.f_18970);
			break;
		
		case 1:
			Global_113386.f_18970.f_1++;
			func_272("DARTS_STAT_NUM_180S", Global_113386.f_18970.f_1);
			break;
		
		case 2:
			Global_113386.f_18970.f_2++;
			func_272("DARTS_STAT_NUM_WINS", Global_113386.f_18970.f_2);
			break;
		
		case 3:
			Global_113386.f_18970.f_3++;
			func_272("DARTS_STAT_NUM_LOSS", Global_113386.f_18970.f_3);
			break;
		
		case 4:
			Global_113386.f_18970.f_4++;
			func_272("DARTS_STAT_DARTS_THROWN", Global_113386.f_18970.f_4);
			break;
		
		case 5:
			Global_113386.f_18970.f_5++;
			func_272("DARTS_STAT_NUM_GAMES", Global_113386.f_18970.f_5);
			break;
		
		case 7:
			Global_113386.f_18970.f_7 = (unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_2) / unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_5));
			break;
		
		case 8:
			Global_113386.f_18970.f_8 = (unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_4) / unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_5));
			break;
	}
}

void func_272(char* sParam0, var uParam1)
{
}

void func_273(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_271(5);
	unk_0x2CEA2839313C09AC();
	unk_0x8DFCED7A656F8802(true);
	if (unk_0xB65B60556E2A9225(func_420(2)))
	{
		unk_0xDFE8422B3B94E688(func_420(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_260();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_153 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(3);
		iLocal_106[9]++;
	}
	func_271(7);
	func_441(&(uParam0->f_254));
	if (func_275(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_274(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_171 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_171 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x013A80FC08F6E4F2(func_420(3));
	iLocal_150 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_274(bool bParam0)
{
	char* sVar0;
	
	unk_0xC6ED9D5092438D91(0);
	switch (func_91())
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

int func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_116(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = unk_0x186FC4BE848E1C92(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_277(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x8D8686B622B88120(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, false, 0, false);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x8D8686B622B88120(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x8D8686B622B88120(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x8D8686B622B88120(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x8D8686B622B88120(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0x8D8686B622B88120(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, false, 0, false);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_277(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_280("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0x15C40837039FFAF7();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		unk_0x06843DA7060A026B(*uParam0, Var0, true, false, false, true);
		return 1;
	}
	Var0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0x06843DA7060A026B(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0x8524A8B0171D5E07(*uParam0, uParam0->f_17, 0, true);
	if (unk_0x7239B21A38F536BA(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_280(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_291(&Var0);
			break;
		
		case 1:
			func_290(&Var0);
			break;
		
		case 5:
			func_289(&Var0);
			break;
		
		case 6:
			func_288(&Var0);
			break;
		
		case 7:
			func_287(&Var0);
			break;
		
		case 8:
			func_286(&Var0);
			break;
		
		case 9:
			func_285(&Var0);
			break;
	}
	if (func_283())
	{
		unk_0x61BB1D9B3A95D802(iParam5);
		if (iParam3 == 1)
		{
			unk_0xE7FFAE5EBF23D890(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			unk_0xE7FFAE5EBF23D890(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		unk_0x61BB1D9B3A95D802(4);
	}
}

float func_281(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_282(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_283()
{
	if (func_284())
	{
		return 1;
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 0;
	}
	if (unk_0x797AC7CB535BA28F() || unk_0x5C544BC6C57AC575())
	{
		return 0;
	}
	if (unk_0x7EA2B6AF97ECA6ED())
	{
		return 0;
	}
	return 1;
}

bool func_284()
{
	return Global_1574604;
}

void func_285(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_286(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_287(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_288(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_289(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_290(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_291(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_292(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0x313CE5879CEB6FCD(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0x313CE5879CEB6FCD(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0xD53343AA4FB7DD28(false, 100);
		iVar6 = unk_0xD53343AA4FB7DD28(func_294(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x313CE5879CEB6FCD(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x313CE5879CEB6FCD(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0xD53343AA4FB7DD28(false, 100);
		iVar6 = unk_0xD53343AA4FB7DD28(func_294(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0x313CE5879CEB6FCD(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x313CE5879CEB6FCD(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0x313CE5879CEB6FCD(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (unk_0x0BADBFA3B172435F(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (unk_0xD0FFB162F40A139C(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_293(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_293(uParam0);
		*uParam0 = unk_0x509D5878EB39E842(uParam0->f_1, Local_40, false, false, false);
		fVar1 = unk_0x313CE5879CEB6FCD(0f, 90f);
		Var7 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, Local_41) };
		Var8 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0x2FFB6B224F4B2926((Var7.f_0 - Var8.f_0), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x8524A8B0171D5E07(*uParam0, uParam0->f_17, 0, true);
		uParam0->f_2 = { Local_41 };
		*uParam2 = 3;
		unk_0xE65F427EB70AB1ED(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
	}
}

void func_293(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_41 - uParam0->f_8 };
	fVar1 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0x2FFB6B224F4B2926(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0x632106CC96E82E91(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_41 - uParam0->f_11 };
	fVar1 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

int func_294(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_295(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_265())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_297(bool bParam0)
{
	func_298(bParam0, 0f);
}

void func_298(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_8(BitTest(*bParam0, 4)) + fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

int func_299(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (unk_0xC9D9444186B5A374() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_308(uParam0, uParam1, 0))
					{
						unk_0xE65F427EB70AB1ED(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x580417101DDB492F(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_307(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_306();
						}
						func_305(uParam0, iParam6);
						func_304(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x313CE5879CEB6FCD(0.02f, 0.1f);
						iVar1 = unk_0xD53343AA4FB7DD28(false, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0x313CE5879CEB6FCD(0.02f, 0.1f);
						iVar1 = unk_0xD53343AA4FB7DD28(false, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0xCC33FA791322B9D9();
							iLocal_52 = 1;
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_308(uParam0, uParam1, 1))
					{
						unk_0xE65F427EB70AB1ED(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_300(uParam0))
			{
				if (!iLocal_55)
				{
					func_307(uParam0, *uParam2);
				}
				else
				{
					func_306();
					func_305(uParam0, iParam6);
					func_304(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
	}
	return 0;
}

int func_300(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0xEC3C9B8D5327B563(2, 220);
	fVar2 = unk_0xEC3C9B8D5327B563(2, 221);
	bLocal_91 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (bLocal_91 > 120)
			{
				iLocal_92 = unk_0x9CD27B0045628463();
				iLocal_90 = 1;
			}
			if (bLocal_91 < -100)
			{
				bLocal_96 = unk_0xF2DB717A73826179(fVar1);
			}
			break;
		
		case 1:
			if (bLocal_91 > 120)
			{
				iLocal_92 = unk_0x9CD27B0045628463();
			}
			else if ((bLocal_91 < 120 && bLocal_91 > -120) && (unk_0x9CD27B0045628463() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (bLocal_91 < -100)
			{
				iLocal_93 = unk_0x9CD27B0045628463();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					bLocal_96 = unk_0xF2DB717A73826179(fVar1);
					bLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (bLocal_94 > bLocal_95)
			{
				if (bLocal_94 > 100 && bLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (unk_0xBBDA792448DB5A89(bLocal_95) / unk_0xBBDA792448DB5A89(bLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (bLocal_96 > 7)
			{
				fLocal_100 = (unk_0xBBDA792448DB5A89(bLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (bLocal_96 < -7)
			{
				fLocal_100 = (unk_0xBBDA792448DB5A89(bLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_303();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_302();
			}
			else
			{
				func_301();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_301()
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_302()
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_303()
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_304(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	unk_0x34E82F05DF2974F5(Var0, &Local_38, &(Local_38.f_1));
	if ((unk_0x9CD27B0045628463() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_280("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_305(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0x5B84D09CEC5209C5(2, 218);
	fVar4 = unk_0x5B84D09CEC5209C5(2, 219);
	fVar5 = unk_0xEC3C9B8D5327B563(2, 220);
	fVar6 = unk_0xEC3C9B8D5327B563(2, 221);
	if (unk_0xA571D46727E2B718(2))
	{
		if (unk_0x73D57CFFDD12C355(fVar5) > unk_0x73D57CFFDD12C355(fVar3) || unk_0x73D57CFFDD12C355(fVar6) > unk_0x73D57CFFDD12C355(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x77B612531280010D())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xF3A21BCD95725A4A(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0xA571D46727E2B718(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0x313CE5879CEB6FCD((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x313CE5879CEB6FCD((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x313CE5879CEB6FCD((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x313CE5879CEB6FCD((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0x313CE5879CEB6FCD((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x313CE5879CEB6FCD((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x313CE5879CEB6FCD((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x313CE5879CEB6FCD((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_306()
{
	if (unk_0xF3A21BCD95725A4A(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (unk_0xF3A21BCD95725A4A(2, 229))
	{
		if (bLocal_49)
		{
			if (unk_0x83666F9FB8FEBD4B() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			unk_0xC1B1E9A034A63A62(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_309("DARTS_FST_HLP") && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_CLOCK")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!BitTest(Global_113347, 1))
			{
				func_424("DARTS_SHT_USE", -1);
				unk_0x933D6A9EEC1BACD0(&Global_113347, true);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_307(var uParam0, struct<4> Param1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0x313CE5879CEB6FCD(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0x313CE5879CEB6FCD(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_41 };
}

int func_308(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0x7239B21A38F536BA(*uParam0))
	{
		unk_0x06843DA7060A026B(*uParam0, Local_40, true, false, false, true);
	}
	else
	{
		*uParam0 = unk_0x509D5878EB39E842(uParam0->f_1, Local_40, false, false, false);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_293(uParam0);
	fVar4 = unk_0x313CE5879CEB6FCD(0f, 90f);
	Var1 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, Local_41) };
	Var2 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = unk_0x2FFB6B224F4B2926((Var1.f_0 - Var2.f_0), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0x8524A8B0171D5E07(*uParam0, uParam0->f_17, 0, true);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_280("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	Var0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0x34E82F05DF2974F5(Var0, &Local_39, &(Local_39.f_1));
	return 1;
}

bool func_309(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_310(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113347, 9))
		{
			if ((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_AIM_HLP", -1);
				unk_0x933D6A9EEC1BACD0(&Global_113347, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113347, 7))
		{
			if ((!func_309("DARTS_AIM_HLP") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_CLOCK", -1);
				unk_0x933D6A9EEC1BACD0(&Global_113347, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113347, 8))
		{
			if ((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_STD_HLP", -1);
				unk_0x933D6A9EEC1BACD0(&Global_113347, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_309("DARTS_SHT_USE")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113347, 2))
			{
				func_424("DARTS_FST_HLP", -1);
				unk_0x933D6A9EEC1BACD0(&Global_113347, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_311(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_314(iParam0) };
			*uParam3 = { unk_0x1899F328B0E12848(*uParam1, Var0) };
			func_313(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0x580417101DDB492F(2, 201))
			{
				func_312();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_312()
{
	unk_0x9FBDA379383A52A4(iLocal_75, iLocal_87, 2000, 1, 1);
	unk_0x865908C81A2C22E9(iLocal_87, false);
}

void func_313(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = unk_0x6ABFA3E16460F22D(26379945, Param0, Var0, 65f, false, 2);
	unk_0x9FBDA379383A52A4(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_314(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_317(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_316(fVar0);
		Var1.f_2 = func_315(fVar0);
	}
	return Var1;
}

float func_315(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_316(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_318(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0xF3A21BCD95725A4A(2, 228))
			{
				func_325(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xF3A21BCD95725A4A(2, 228))
			{
				if (!unk_0x036F97C908C2B52C(iLocal_84))
				{
					func_323();
					func_322(&iLocal_176, Local_207, Local_208, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0xF3A21BCD95725A4A(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_319(&iLocal_176, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_325(0);
			func_505();
			if (unk_0xA7A932170592B50E(iLocal_176))
			{
				if (unk_0xDFB2B516207D3534(iLocal_176))
				{
					unk_0x026FB97D0A425F84(iLocal_176, false);
				}
				unk_0x865908C81A2C22E9(iLocal_176, false);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_319(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0x7F4724035FDCA1DD(2);
	func_321(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x77B612531280010D())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xA571D46727E2B718(2))
	{
		fVar1 = unk_0x5B84D09CEC5209C5(2, 239);
		fVar2 = unk_0x5B84D09CEC5209C5(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF2DB717A73826179(((fVar3 * fParam5) * 127f));
			iVar0[3] = -unk_0xF2DB717A73826179(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x5B84D09CEC5209C5(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x5B84D09CEC5209C5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_320((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_320((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x9CD27B0045628463())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xA571D46727E2B718(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * unk_0x0000000050597EE2());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xA571D46727E2B718(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.f_0;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var6.f_0 - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0xA571D46727E2B718(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xA571D46727E2B718(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x91AEF906BCA88877(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x91AEF906BCA88877(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x9CD27B0045628463() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0xD95E79E8686D2C27(2, 207);
			iVar0[3] = unk_0xD95E79E8686D2C27(2, 208);
			if (bParam3)
			{
				if (unk_0xBBDA792448DB5A89(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0xBFD8727AEA3CCEBA(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, false, 1, 1, 2);
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		if (unk_0xDFB2B516207D3534(*uParam0))
		{
			if (unk_0x02EC0AF5C5A49B7A(*uParam0))
			{
				unk_0xAF66DCEE6609B148();
			}
		}
	}
}

int func_320(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_321(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x1CEA6BFDF248E5D9(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (bParam5)
		{
			if (unk_0x77B612531280010D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_322(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, bool bParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x026FB97D0A425F84(*uParam0, true);
	unk_0xBFD8727AEA3CCEBA(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, false, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x6A25241C340D3822(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		unk_0xC7848EFCCC545182(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0x299FAEBB108AE05B(bParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_323()
{
	if (iLocal_136)
	{
		return;
	}
	func_324();
	unk_0x3D42B92563939375("Darts Zoom");
	iLocal_136 = 1;
}

void func_324()
{
	if (iLocal_135 || iLocal_136)
	{
		unk_0x643ED62D5EA3BEBD();
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9FBDA379383A52A4(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0x9FBDA379383A52A4(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_326(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_247(&(uParam0->f_62), func_328(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_242(&(uParam0->f_62), 0))
			{
				func_327(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_327(var uParam0)
{
	uParam0->f_8 = 0;
	func_427(&(uParam0->f_2));
	func_427(&(uParam0->f_5));
}

char* func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_329(var uParam0)
{
	if (!iLocal_54)
	{
		if (!unk_0xF3A21BCD95725A4A(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0xF3A21BCD95725A4A(2, 201) || unk_0x580417101DDB492F(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_330(var uParam0, int iParam1)
{
	if (!unk_0xB0034A223497FFCB())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				func_121(&(uParam0->f_509), 0, 0, 0, 1);
				func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_117(&(uParam0->f_509), 1);
				func_337(&(uParam0->f_666), 8, 0);
				func_337(&(uParam0->f_666), 16, 0);
				func_337(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_121(&(uParam0->f_509), 0, 0, 0, 1);
				func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_117(&(uParam0->f_509), 1);
				func_337(&(uParam0->f_666), 8, 0);
				func_337(&(uParam0->f_666), 16, 0);
				func_337(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_121(&(uParam0->f_509), 1, 0, 0, 1);
			func_120(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 16, 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 17, 0);
			func_337(&(uParam0->f_666), 23, 0);
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		unk_0xE3A3DB414A373DAB();
		func_205(func_116(func_3(&(uParam0->f_666), 16), 1, 2));
		func_123(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_337(&(uParam0->f_666), 15, 0);
		func_337(&(uParam0->f_666), 16, 0);
		func_337(&(uParam0->f_666), 23, 0);
	}
}

int func_331(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_2[iVar0 /*15*/].f_12), false);
		if (iParam4 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_2[iVar0 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_332(var uParam0)
{
	if (!unk_0xB0034A223497FFCB())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_121(&(uParam0->f_509), 0, 0, 0, 1);
			func_331(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_120(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 23, 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 16, 0);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 17, 0);
		}
		func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_337(&(uParam0->f_666), 15, 0);
		func_337(&(uParam0->f_666), 16, 0);
		func_337(&(uParam0->f_666), 23, 0);
		func_337(&(uParam0->f_666), 17, 0);
	}
}

void func_333(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0xF3A21BCD95725A4A(2, 201) && !unk_0xF3A21BCD95725A4A(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_147 = false;
				unk_0x8DFCED7A656F8802(true);
			}
		}
		if (unk_0x50F940259D3841E6(2, 235) || unk_0x305C8DCD79DA8B0F(2, 235))
		{
			if (!bLocal_147)
			{
				*uParam0 = 14;
				bLocal_147 = true;
				unk_0x8DFCED7A656F8802(true);
			}
		}
		else if (func_309("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_147 = false;
		}
	}
}

void func_334(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_335(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_336(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_337(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(bParam0, bParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(bParam0, bParam1);
	}
}

int func_338(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113386.f_18970.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < 2)
	{
		iParam0->f_422[bVar0] = 301;
		iParam0->f_425[bVar0] = 301;
		bVar0++;
	}
	iParam0->f_454 = 0;
	bVar0 = false;
	while (bVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_250(&(iParam0->f_5[bVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_249(uParam1, bVar0);
		func_255(uParam1, bVar0, 301);
		bVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_163 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_140 = 1;
	iLocal_141 = 0;
	iLocal_143 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_149 = 0;
	func_337(&(uParam2->f_666), 6, 0);
	func_345();
	func_343(uParam2);
	if (iParam0->f_457)
	{
		func_340(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_340(bool bParam0)
{
	unk_0xA0EBB943C300E693(false);
	if (unk_0xDFB2B516207D3534(iLocal_77))
	{
		unk_0x026FB97D0A425F84(iLocal_77, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_81))
	{
		unk_0x026FB97D0A425F84(iLocal_81, false);
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		func_342();
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		unk_0xD4E8E24955024033(500);
	}
	func_341(bParam0);
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		unk_0x026FB97D0A425F84(iLocal_75, true);
	}
}

void func_342()
{
	unk_0x026FB97D0A425F84(iLocal_77, true);
}

void func_343(var uParam0)
{
	func_344();
	uParam0->f_670 = 3;
	func_337(&(uParam0->f_666), 15, 0);
	func_337(&(uParam0->f_666), 16, 0);
	func_337(&(uParam0->f_666), 17, 0);
}

void func_344()
{
	int iVar0;
	
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108.f_0 = 0;
	Local_108.f_1 = 0;
}

void func_345()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_54 = 0;
	unk_0x2CEA2839313C09AC();
}

void func_346(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x450930E616475D0D(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_347(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_347(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_348(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	bVar1 = unk_0xD24D37CC275948CC(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == bVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = bVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_349(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC3D0841A0CC546A6(bParam2);
	unk_0xC3D0841A0CC546A6(bParam3);
	unk_0xC3D0841A0CC546A6(bParam4);
	unk_0xC6796A8FFA375E53();
}

int func_350(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0xFE99B66D079CF6BC(2, 200, true);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_407(0, 0, 0, 1);
		func_406(0, -1, 1);
		if (func_405())
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4539961;
				func_404(uParam0->f_660, 1, 1);
				unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0xAC09CA973C564252(sVar0))
				{
					func_403(sVar0, 0, 0);
				}
			}
			Global_4539962 = unk_0x9CD27B0045628463() + 300;
		}
		else if (func_402() && unk_0x9CD27B0045628463() > Global_4539962)
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar2 = func_401(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4539962 = unk_0x9CD27B0045628463() + 300;
		}
		if (func_400(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_404(uParam0->f_660, 1, 1);
			unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xAC09CA973C564252(sVar0))
			{
				func_403(sVar0, 0, 0);
			}
		}
		if (func_399(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_404(uParam0->f_660, 1, 1);
			unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xAC09CA973C564252(sVar0))
			{
				func_403(sVar0, 0, 0);
			}
		}
		if (func_398(&(uParam0->f_633)) || func_397(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0x67C540AA08E4A6F5(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_383(uParam0);
		}
		if (func_382(&(uParam0->f_636)) || func_380(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0x67C540AA08E4A6F5(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_383(uParam0);
		}
		if ((unk_0x580417101DDB492F(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_379(uParam0->f_662 + 1, 1);
			*uParam2 = func_379(uParam0->f_664 + 1, 0);
			unk_0x67C540AA08E4A6F5(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return 1;
		}
		func_353(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0x50F940259D3841E6(2, 202) || func_352())
		{
			func_351(0, 0);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x50F940259D3841E6(2, 201))
		{
			func_39(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x50F940259D3841E6(2, 202))
		{
			func_383(uParam0);
			func_337(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_351(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

int func_352()
{
	if (unk_0xA571D46727E2B718(2))
	{
		if (unk_0x580417101DDB492F(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_353(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_376(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_19(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_21(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_372(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_26(29), 64);
					StringCopy(&cVar62, func_23(29, 1), 64);
					if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_371(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					bVar1 = Global_23150.f_8774;
					bVar2 = Global_23150.f_8775;
					bVar3 = Global_23150.f_8776;
					bVar4 = Global_23150.f_8777;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				func_371(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) != 0)
				{
					func_370();
					unk_0x25FBB336DF1804CB(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x03B504CF259931BC(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0xE7DCB5B874BCD96E(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCD015E5BB0D96A57((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_370();
					func_368((((Global_23147 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_370();
						func_368((((Global_23147 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				bVar1 = Global_23150.f_8784;
				bVar2 = Global_23150.f_8785;
				bVar3 = Global_23150.f_8786;
				bVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					bVar1 = Global_23150.f_8789;
					bVar2 = Global_23150.f_8790;
					bVar3 = Global_23150.f_8791;
					bVar4 = Global_23150.f_8792;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 204;
				}
				func_371(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				Var38 = { unk_0x35736EE65BD00C11("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(1, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_19(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_367(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_371(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_367(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_19(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_366(Global_23150.f_5159, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_5159), func_23(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_19(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_367(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_371(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_367(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_19(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_366(Global_4539885.f_67, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_26(Global_4539885.f_67), func_23(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_361(iVar58, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xB8A850F20A067EB6(76, 84);
			unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					bVar68 = 255;
					bVar69 = 255;
					bVar70 = 255;
					bVar71 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x7C9C91AB74A0360F(Global_23150.f_8799, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					else
					{
						unk_0x7C9C91AB74A0360F(1, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, bVar68, bVar69, bVar70, bVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											unk_0x54CE8AC98E120CAB(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x85F061DA64ED2F67(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0x25FBB336DF1804CB(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_19(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_366(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[(iVar22 + iVar28)]), func_23(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[(iVar22 + iVar28)]), func_23(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0xCD015E5BB0D96A57(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCD015E5BB0D96A57((fVar34 + fVar40), fVar35, 0);
											if (func_357() && unk_0x2C83A9DA6BFFC4F9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_359(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													unk_0x07C837F9A01C34C9(0f, (0.35f * 0.7f));
													unk_0xBE6B23FFA53FB442(255, 255, 255, 150);
													unk_0x3A618A217E5154F0((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar74), unk_0xF34EE736CF047844(fVar74), unk_0xF34EE736CF047844(fVar74), unk_0xF34EE736CF047844(fVar75), false);
													unk_0x25FBB336DF1804CB(&cVar73);
													unk_0x03B504CF259931BC((Global_23150.f_6129 + iVar30));
													unk_0xCD015E5BB0D96A57((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_366(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0x03B504CF259931BC(Global_23150.f_4309[iVar20]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_356((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_355((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_19(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_366(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_26(26), func_23(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
											if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_366(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_26(27), func_23(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_19(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(Global_23150.f_4824[iVar22], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
												unk_0xE7FFAE5EBF23D890(func_26(Global_23150.f_4824[iVar22]), func_23(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_354(Global_23150.f_4824[iVar22])), (fVar37 * func_354(Global_23150.f_4824[iVar22])), 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = unk_0x9CD27B0045628463();
	unk_0x55598D21339CB998(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_41(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0x6806C51AD12B83B8(10);
	}
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(8);
	if (bParam0)
	{
		func_205(1);
	}
	unk_0xE3A3DB414A373DAB();
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_355(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xE7DCB5B874BCD96E(fParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_356(float fParam0, float fParam1, char* sParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

bool func_357()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

void func_358(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[0], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	else
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[1], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
}

void func_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_360(Global_23150.f_6402[iParam4], &bVar0, &bVar1, &bVar2);
			if ((bVar0 < 20 && bVar1 < 20) && bVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7C9C91AB74A0360F(1, &bVar0, &bVar1, &bVar2, &bVar3);
				}
			}
			else if ((bVar0 > 230 && bVar1 > 230) && bVar2 > 230)
			{
				if (bParam0)
				{
					bVar0 = false;
					bVar1 = false;
					bVar2 = false;
				}
			}
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7C9C91AB74A0360F(14, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
			else
			{
				unk_0x7C9C91AB74A0360F(12, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
		else
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(false, false, false, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7C9C91AB74A0360F(1, &bVar0, &bVar1, &bVar2, &bVar3);
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	else
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0x4E096588B13FFECA(1);
	if (bParam5)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(4);
	}
	else if (bParam6)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(6);
	}
	else
	{
		unk_0x66E0276CC5F6B9DA(0);
	}
	unk_0x63145D9C883A1A70(0f, 1f);
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_360(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_361(int* iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_376(bParam4, bParam8))
	{
		return;
	}
	if (func_364())
	{
		return;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_362(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0 || unk_0x5FCF4D7069B09026())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[bVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_23150.f_5417[bVar1], true), 64);
				}
				else if (Global_23150.f_5430[bVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_23150.f_5430[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_23150.f_5472 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_5355[bVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(bVar1);
					func_13(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_13(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_12(&(Global_23150.f_5355[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_23150.f_5404[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(bVar3, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(bVar3);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_23150.f_5417[bVar1] != 363 && BitTest(Global_23150.f_5443, bVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_23150.f_5417[bVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(363);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				bVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_23150.f_5160);
				func_13(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_12(&(Global_4539885.f_16));
				}
				else
				{
					bVar4 = Global_23150.f_5404[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					unk_0x80338406F3475E55(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bVar4, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bVar4);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0xC3D0841A0CC546A6(true);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(false);
			}
			unk_0xC6796A8FFA375E53();
			Global_23150.f_5161 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(bVar1);
					unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			bVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(bVar1);
				unk_0x80338406F3475E55(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(bParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(bParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x450930E616475D0D(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_23150.f_5446)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_362(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_363(-1, 0) == 8;
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

int func_363(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
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

int func_364()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_365())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_365()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_366(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	unk_0x7C9C91AB74A0360F(1, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		
		case 54:
			*bParam5 = 100;
			break;
		
		case 62:
			*bParam5 = 100;
			break;
		
		case 55:
			unk_0x7C9C91AB74A0360F(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_367(float fParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(1, &bVar0, &bVar1, &bVar2, &bVar3);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xA50ABC31E3CDFAFF(2);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_368(float fParam0, float fParam1, char* sParam2, bool bParam3, bool bParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0x03B504CF259931BC(bParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_369(char* sParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_370();
	unk_0x54CE8AC98E120CAB(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_370()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(1, &bVar0, &bVar1, &bVar2, &bVar3);
	if (Global_23150.f_8783)
	{
		bVar0 = Global_23150.f_8779;
		bVar1 = Global_23150.f_8780;
		bVar2 = Global_23150.f_8781;
		bVar3 = Global_23150.f_8782;
	}
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_371(float fParam0, float fParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, bParam4, bParam5, bParam6, bParam7, false);
}

void func_372(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!unk_0xCA042B6957743895(sParam1) && !unk_0xAC09CA973C564252(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_375(Global_23150.f_5609, 1);
	}
	else
	{
		func_375(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_374(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_19(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_373(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_373(char* sParam0)
{
	if (!unk_0xAC09CA973C564252(sParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_374(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_359(0, 1, 0, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(sParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_375(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam0) / 32f));
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
}

int func_376(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_378(8, -1) && func_377() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_78579) || Global_23150.f_8807) || unk_0xE18B138FABC53103()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_377()
{
	return Global_1574991;
}

var func_378(int iParam0, int iParam1)
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

int func_379(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_380(bool bParam0, int iParam1, int iParam2)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_401(0) == 1 && Global_4539961 == iParam1)
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

void func_381(bool bParam0)
{
	if (!func_426(bParam0))
	{
		func_441(bParam0);
	}
}

int func_382(bool bParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xA571D46727E2B718(2))
	{
		fVar0 = unk_0xEC3C9B8D5327B563(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0xF3A21BCD95725A4A(2, 190)) || unk_0xE2587F8CBBD87B1D(2, 190))
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

void func_383(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_351(0, 0);
	unk_0x7C9C91AB74A0360F(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_396(uVar0, uVar1, uVar2, uVar3, 1);
	func_395(1, 2, 0, 0, 0);
	func_394(1, 2, 1, 1, 1);
	func_393(0, 1, 0, 0, 0);
	func_392("DARTS_TITLE");
	func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, func_379(uParam0->f_662 + 1, 1), 0);
	func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, func_379(uParam0->f_664 + 1, 0), 0);
	func_386(2, 141, 141, 1);
	func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_385(0);
	func_404(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_403(func_115(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_384(201, "ITEM_SELECT", -1, 0);
	func_384(202, "IB_QUIT", -1, 0);
}

void func_384(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_385(int iParam0)
{
	Global_23150.f_6129 = iParam0;
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_23150.f_8804 = iParam3;
	Global_23150.f_8801[0] = iParam1;
	Global_23150.f_8801[1] = iParam2;
	Global_23150.f_8805 = iParam0;
}

void func_387(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 2)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 2)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_23150.f_4309[Global_23150.f_5613] = bParam1;
	Global_23150.f_5613++;
	fVar1 = func_389("NUMBER", bParam1);
	if (Global_23150.f_5466[Global_23150.f_5610])
	{
		func_19(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
	{
		Global_23150.f_5459[Global_23150.f_5610] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_388("NUMBER", bParam1);
		if (fVar4 > Global_23150.f_6136[iParam0])
		{
			Global_23150.f_6136[iParam0] = fVar4;
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 2;
}

float func_388(char* sParam0, bool bParam1)
{
	if (!unk_0xAC09CA973C564252(sParam0))
	{
	}
	if (bParam1 == 0)
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_389(char* sParam0, bool bParam1)
{
	if (!unk_0xAC09CA973C564252(sParam0))
	{
		return 0f;
	}
	func_359(1, 1, 0, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(sParam0);
	unk_0x03B504CF259931BC(bParam1);
	return unk_0x85F061DA64ED2F67(true);
}

void func_390(int iParam0, char* sParam1, char* sParam2)
{
	Global_23150 = iParam0;
	func_391(29, sParam1, sParam2);
}

void func_391(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_392(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_396(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = uParam0;
	Global_23150.f_8775 = uParam1;
	Global_23150.f_8776 = uParam2;
	Global_23150.f_8777 = uParam3;
}

int func_397(bool bParam0, int iParam1, int iParam2)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_401(0) == -1 && Global_4539961 == iParam1)
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

int func_398(bool bParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xA571D46727E2B718(2))
	{
		fVar0 = unk_0xEC3C9B8D5327B563(2, 218);
	}
	if (fVar0 < -0.8f || unk_0xF3A21BCD95725A4A(2, 189))
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

int func_399(bool bParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xA571D46727E2B718(2))
	{
		fVar0 = unk_0xEC3C9B8D5327B563(2, 219);
	}
	if (fVar0 > 0.8f || unk_0xF3A21BCD95725A4A(2, 187))
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

int func_400(bool bParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xA571D46727E2B718(2))
	{
		fVar0 = unk_0xEC3C9B8D5327B563(2, 219);
	}
	if (fVar0 < -0.8f || unk_0xF3A21BCD95725A4A(2, 188))
	{
		if (!func_426(bParam0))
		{
			func_381(bParam0);
			return 1;
		}
		else if (func_7(bParam0) > 0.25f)
		{
			func_441(bParam0);
			return 1;
		}
	}
	else if (func_426(bParam0))
	{
		func_427(bParam0);
	}
	return 0;
}

int func_401(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_23149);
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4539955 >= fVar0 && Global_4539955 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4539955 >= fVar0 && Global_4539955 < fVar4)
	{
		return -1;
	}
	if (Global_4539955 >= fVar4 && Global_4539955 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_402()
{
	if (unk_0xA571D46727E2B718(2))
	{
		return unk_0xE2587F8CBBD87B1D(2, 237);
	}
	return 0;
}

void func_403(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = unk_0x9CD27B0045628463();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_405()
{
	if (unk_0xA571D46727E2B718(2))
	{
		if (Global_4539961 > -1)
		{
			if (unk_0x580417101DDB492F(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xAAE7CE1D63167423();
	}
	if (Global_4539961 == -6)
	{
		unk_0x8DB8CFFD58B62552(4);
		if (iParam0 && unk_0xF3A21BCD95725A4A(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || unk_0x3D9ACB1EB139E702())
	{
		unk_0x8DB8CFFD58B62552(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (unk_0xF3A21BCD95725A4A(2, 237))
		{
			unk_0x8DB8CFFD58B62552(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			unk_0x8DB8CFFD58B62552(3);
			return 0;
		}
	}
	unk_0x8DB8CFFD58B62552(1);
	return 0;
}

void func_407(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	fVar6 = (0.034722f / 2f);
	bVar13 = -1;
	if (!unk_0xA571D46727E2B718(2))
	{
		Global_4539961 = -1;
		return;
	}
	unk_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	func_409();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_408(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_408(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		bVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			bVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		bVar10 = (32 + (iVar11 - (iVar12 * bVar13)));
		if (bParam3)
		{
			if (!bParam1 || bVar13 != 0)
			{
				unk_0xB8A850F20A067EB6(76, 84);
				unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_371(fVar4, (fVar5 + (IntToFloat(bVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
				unk_0xE3A3DB414A373DAB();
			}
		}
		Global_4539961 = Global_23150.f_8429[bVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_408(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		bVar3 = 48;
	}
	else
	{
		bVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_371(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_371(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_409()
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = unk_0x11E65974A982637C(2, 239);
	Global_4539956 = unk_0x11E65974A982637C(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

float func_410(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_411(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_351(0, 0);
	unk_0x7C9C91AB74A0360F(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_396(uVar0, uVar1, uVar2, uVar3, 1);
	func_395(1, 2, 0, 0, 0);
	func_394(1, 2, 1, 1, 1);
	func_393(0, 1, 0, 0, 0);
	func_392("DARTS_TITLE");
	func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, 1, 0);
	func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, 1, 0);
	func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_386(2, 141, 141, 1);
	func_385(0);
	func_404(0, 1, 1);
	func_403("DARTS_LEGD", 0, 0);
	func_412();
	func_384(201, "ITEM_SELECT", -1, 0);
	func_384(202, "IB_QUIT", -1, 0);
}

void func_412()
{
	if (unk_0x48AF36444B965238())
	{
		unk_0xFC695459D4D0E219(0.325f, 0.3f);
	}
}

int func_413(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_437() && unk_0x9CD27B0045628463() >= iLocal_164 + 1000) && *iParam0 != 8)
	{
		if (!unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
		{
			unk_0x891B5B39AC6302AF(500);
		}
	}
	if (unk_0xB16FCE9DDC7BA182() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_164 = unk_0x9CD27B0045628463();
						func_421(uParam1->f_1, uParam1->f_4, func_423(2), func_422(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_292(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_279(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
							iLocal_31++;
							func_441(bParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_429(bParam5) > 1f && !func_309("DARTS_DOUBLE_T"))
					{
						func_424("DARTS_DOUBLE_T", -1);
					}
					if (func_429(bParam5) > 5f)
					{
						func_441(bParam5);
						unk_0x8DFCED7A656F8802(true);
						func_415(uParam1->f_1, uParam1->f_4, func_423(3), func_422(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x036F97C908C2B52C(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_292(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_31++;
								func_441(bParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_429(bParam5) > 1f && !func_309("DARTS_TRIPLE_T"))
					{
						func_424("DARTS_TRIPLE_T", -1);
					}
					if (func_429(bParam5) > 5f)
					{
						func_441(bParam5);
						unk_0x8DFCED7A656F8802(true);
						func_421(uParam1->f_1, uParam1->f_4, func_423(4), func_422(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x036F97C908C2B52C(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_292(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x8D8686B622B88120(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_31++;
								func_441(bParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_429(bParam5) > 1f && !func_309("DARTS_BULL_T"))
					{
						func_424("DARTS_BULL_T", -1);
					}
					if (func_429(bParam5) > 5f)
					{
						func_441(bParam5);
						unk_0x8DFCED7A656F8802(true);
						unk_0x67C540AA08E4A6F5(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
						func_415(uParam1->f_1, uParam1->f_4, func_423(5), func_422(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x036F97C908C2B52C(iLocal_83) && !func_309("DARTS_DBL_WIN"))
			{
				func_424("DARTS_DBL_WIN", -1);
			}
			if (func_429(bParam5) > 6f)
			{
				func_441(bParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x67C540AA08E4A6F5(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
			unk_0x9FBDA379383A52A4(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x036F97C908C2B52C(iLocal_75))
			{
				iLocal_31 = 0;
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_414(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0xB16FCE9DDC7BA182())
			{
				iLocal_31 = 0;
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_414(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x026FB97D0A425F84(iLocal_75, true);
				unk_0xD4E8E24955024033(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_414(int* iParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x06843DA7060A026B(*iParam0, Var0, true, false, false, true);
		unk_0x3AE22DEB5BA5A3E6(iParam0);
		unk_0x539E0AE3E6634B9F(iParam0);
	}
}

void func_415(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, bool bParam4)
{
	unk_0xF33AB75780BA57DE(iLocal_83);
	unk_0xB13C14F66A00D047(iLocal_83, 35f);
	unk_0x4D41783FB745E42E(iLocal_83, unk_0x163E252DE035A133(Param0, fParam1, Param2));
	unk_0x85973643155D0B07(iLocal_83, Vector(fParam1, 0f, 0f) - Param3, 2);
	unk_0x9FBDA379383A52A4(iLocal_83, iLocal_82, bParam4, 1, 1);
}

int func_416(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_426(&(uParam0->f_2)))
	{
		func_441(&(uParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	if (!bParam2)
	{
		unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_427(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_417(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	char* sVar0;
	
	sVar0 = func_418(iParam5);
	unk_0xF6E48914C7A8694E(*uParam0, "RESET_MOVIE");
	unk_0xC6796A8FFA375E53();
	unk_0xF6E48914C7A8694E(*uParam0, sVar0);
	unk_0x80338406F3475E55("STRING");
	unk_0x39BBF623FC803EAC(iParam4);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x362E2D3FE93A9959();
	if (!unk_0xCA042B6957743895(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0xC3D0841A0CC546A6(100);
		unk_0xC58424BA936EB458(true);
	}
	unk_0xC6796A8FFA375E53();
	if (bParam6)
	{
		unk_0xF6E48914C7A8694E(*uParam0, "TRANSITION_UP");
		unk_0xD69736AAE04DB51A(fParam7);
		unk_0xC6796A8FFA375E53();
	}
	func_441(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_419()
{
	unk_0x026FB97D0A425F84(iLocal_75, true);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	if (unk_0xDFB2B516207D3534(iLocal_82))
	{
		unk_0x026FB97D0A425F84(iLocal_82, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_77))
	{
		unk_0x026FB97D0A425F84(iLocal_77, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_78))
	{
		unk_0x026FB97D0A425F84(iLocal_78, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_79))
	{
		unk_0x026FB97D0A425F84(iLocal_79, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_80))
	{
		unk_0x026FB97D0A425F84(iLocal_80, false);
	}
	if (unk_0xDFB2B516207D3534(iLocal_81))
	{
		unk_0x026FB97D0A425F84(iLocal_81, false);
	}
}

char* func_420(int iParam0)
{
	if (iLocal_175 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_175 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_421(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)
{
	unk_0xF33AB75780BA57DE(iLocal_82);
	unk_0xB13C14F66A00D047(iLocal_82, 35f);
	unk_0x4D41783FB745E42E(iLocal_82, unk_0x163E252DE035A133(Param0, fParam1, Param2));
	unk_0x85973643155D0B07(iLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		unk_0x026FB97D0A425F84(iLocal_82, true);
	}
	else
	{
		unk_0x9FBDA379383A52A4(iLocal_82, iLocal_83, bParam4, 1, 1);
	}
}

Vector3 func_422(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_424(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_425(int iParam0)
{
	if (!unk_0x5F9532F3B5CC2551(func_504(), false))
	{
		func_4(func_504(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_426(bool bParam0)
{
	return BitTest(*bParam0, 1);
}

void func_427(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_428(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_6(iParam2), true);
}

float func_429(bool bParam0)
{
	if (func_426(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_430(bool bParam0)
{
	if (!func_426(bParam0))
	{
		func_381(bParam0);
	}
	else
	{
		func_441(bParam0);
	}
}

void func_431()
{
	Global_20471 = 0;
	func_432();
}

void func_432()
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

void func_433(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_436())
		{
			func_435(1, 1);
		}
		else
		{
			func_435(0, 0);
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
	if (!func_434())
	{
		Global_20266.f_1 = 3;
	}
}

int func_434()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_435(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

bool func_436()
{
	return BitTest(Global_1958711, 5);
}

int func_437()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_438(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x7239B21A38F536BA(iVar0))
	{
		if (!func_439(iVar0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x751B70C3D034E187(iVar0, unk_0xD80958FC74E988A6(), Local_137, false, true, 0))
			{
				unk_0xACFB2463CC22BED2(iVar0);
				unk_0x1A9205C1B9EE827F(iVar0, false, false);
				unk_0xEA1C610A04DB6BBB(iVar0, false, false);
				unk_0x428CA6DBD1094446(iVar0, true);
				unk_0xAD738C3085FE7E11(iVar0, true, true);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_440(var uParam0, bool bParam1)
{
	bParam1++;
	unk_0xF6E48914C7A8694E(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0xC3D0841A0CC546A6(bParam1);
	unk_0xC6796A8FFA375E53();
}

void func_441(bool bParam0)
{
	func_442(bParam0, 0f);
}

void func_442(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_8(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_443(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_444(var uParam0, char* sParam1, char* sParam2)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(sParam1);
	func_37(sParam2);
	unk_0xC6796A8FFA375E53();
}

void func_445(float fParam0, struct<4> Param1, var uParam2, var uParam3, var* uParam4, var uParam5)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(func_504()) && !unk_0x84A2DD9AC37C35C1(func_504()))
	{
		unk_0xED74007FFB146BC2(func_504());
	}
	else
	{
		if (unk_0x7239B21A38F536BA(uParam5->f_5) && !unk_0x84A2DD9AC37C35C1(uParam5->f_5))
		{
			unk_0xAD738C3085FE7E11(uParam5->f_5, true, true);
			iLocal_138[1] = uParam5->f_5;
			unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
		}
		else if (func_447(uParam4))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_138[1]);
		}
		else
		{
			iLocal_138[1] = unk_0xD49F9B0955C367DE(26, bLocal_172, Param1.f_3, fParam0, true, true);
		}
		if (unk_0x05661B80A8C9165F(iLocal_138[1], "Darts_name"))
		{
			iVar0 = unk_0xA06C969B02A97298(iLocal_138[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_220 = func_451("RAYMOND");
				bLocal_221 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_220 = func_451("JOHAN");
				bLocal_221 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_220 = func_451("STAN");
				bLocal_221 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_220 = func_451("VINCE");
				bLocal_221 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_220 = func_451("KRISTY");
				bLocal_221 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_220 = func_451("MARLENE");
				bLocal_221 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_220 = func_451("LORIE");
				bLocal_221 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_220 = func_451("SHELLEY");
				bLocal_221 = -863218904;
			}
		}
		unk_0x0CE3AA5E1CA19E10(iLocal_138[1], "Darts_name", bLocal_221);
	}
	bVar1 = unk_0x9F47B058362C84B5(iLocal_138[1]);
	func_446(bVar1);
	unk_0x5AD23D40115353AC(iLocal_138[1], iLocal_138[0], 0);
	unk_0x5AD23D40115353AC(iLocal_138[0], iLocal_138[1], 0);
}

void func_446(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(false, 2);
	switch (bParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_447(var* uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), uParam0, -1))
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			if ((((((unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x9F47B058362C84B5((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xAD738C3085FE7E11((*uParam0)[iVar0], true, true);
				iLocal_138[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_448(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar2 = (func_450() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_449(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_449(int iParam0)
{
	if (!func_93(iParam0))
	{
		return func_95(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_450()
{
	if (Global_31959 == 0 || Global_31959 == 2)
	{
		return 187;
	}
	return 161;
}

char* func_451(char* sParam0)
{
	if (unk_0x2BDD44CC428A7EAE() == 7)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x0C515FAB3FF9EA92(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_452(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x7239B21A38F536BA(*uParam0))
	{
		uParam0->f_4 = unk_0xE83D4F9BA2A38914(*uParam0);
	}
	if (!bParam3)
	{
		func_454(uParam1, uParam0);
	}
	Local_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	Local_41 = { Local_41 + Local_35 };
	Local_40 = { unk_0x163E252DE035A133(uParam0->f_1, uParam0->f_4, Local_41) };
	func_453(uParam2, uParam0);
}

void func_453(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_35 };
	*uParam0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_454(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { unk_0x163E252DE035A133(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_455(var uParam0, var uParam1)
{
	if (!unk_0x2F844A8B08D76685("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!unk_0x2F844A8B08D76685("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x98A4EB5D89A0C952(bLocal_28) || !unk_0x98A4EB5D89A0C952(bLocal_29)) || !unk_0x98A4EB5D89A0C952(bLocal_37)) || !unk_0x98A4EB5D89A0C952(bLocal_172)) || !unk_0x85F01B8D5B90570E(*uParam0)) || !unk_0x85F01B8D5B90570E(uParam1->f_645)) || !unk_0x85F01B8D5B90570E(uParam1->f_57)) || !unk_0x85F01B8D5B90570E(uParam1->f_62)) || !unk_0x02245FE4BED318B8(3)) || !unk_0x0145F696AAAAD2E4("Darts")) || !unk_0xD031A9162D01088C(sLocal_222)) || !unk_0xD031A9162D01088C(sLocal_223)) || !func_456(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_456(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_348(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xDFA2EF8E04127DD5("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x0145F696AAAAD2E4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_457(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_457(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_458(var uParam0, var uParam1)
{
	unk_0x963D27A58DF860AC(bLocal_28);
	unk_0x963D27A58DF860AC(bLocal_29);
	unk_0x963D27A58DF860AC(bLocal_37);
	unk_0x963D27A58DF860AC(bLocal_172);
	unk_0xDFA2EF8E04127DD5("Darts", false);
	unk_0xDFA2EF8E04127DD5("ShopUI_Title_Darts", false);
	unk_0xD3BD40951412FEF6(sLocal_222);
	unk_0xD3BD40951412FEF6(sLocal_223);
	*uParam0 = unk_0x11FE353CF9733E6F("darts_scoreboard");
	uParam1->f_645 = func_200();
	uParam1->f_57 = func_460();
	uParam1->f_62 = func_459();
	unk_0x71A78003C8E71424("DARTS", 3);
}

int func_459()
{
	return unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
}

int func_460()
{
	return unk_0x11FE353CF9733E6F("MP_BIG_MESSAGE_FREEMODE");
}

void func_461(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			iParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		iParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		iParam0->f_21 = { 180f, 0f, 252.555f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		iParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		iParam0->f_21 = { 180f, 0f, 87.77f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_462(Param2) && fParam3 != 0f)
	{
		iParam0->f_18 = { unk_0x163E252DE035A133(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		iParam0->f_21 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	iParam0->f_27 = 0.885f;
	iParam0->f_28 = 0.244f;
	iParam0->f_29 = 0.17f;
	iParam0->f_30 = 0.415f;
}

int func_462(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_463(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38.f_0 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (unk_0x30CF4BDA4FCB1905())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39.f_0 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_464(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = bLocal_28;
	}
	else
	{
		uParam0->f_1 = bLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_465()
{
	int iVar0;
	
	unk_0xD4B02A6B476E1FDC();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_466(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	fLocal_89 = unk_0xF1307EF624A80D87(false);
	fVar7 = 30f;
	fVar7 = func_410(fLocal_89);
	Var8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (unk_0x30CF4BDA4FCB1905())
	{
		Var11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		Var11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	Var14 = { 0.261599f, -0.750354f, -0.392929f };
	Var16 = { 0.281314f, -0.573735f, -0.39603f };
	Var1 = { unk_0x163E252DE035A133(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { unk_0x163E252DE035A133(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { unk_0x163E252DE035A133(Param0, fParam1, Var14) };
	Var5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	Var15 = { unk_0x163E252DE035A133(Param0, fParam1, Var16) };
	Var6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	iLocal_75 = unk_0x6ABFA3E16460F22D(26379945, Var0, Var2, fVar7, false, 2);
	iLocal_76 = unk_0x6ABFA3E16460F22D(26379945, Var1, Var3, fVar7, false, 2);
	iLocal_77 = unk_0x6ABFA3E16460F22D(26379945, Var4, Var5, 65f, false, 2);
	iLocal_78 = unk_0x6ABFA3E16460F22D(26379945, Var15, Var6, 65f, false, 2);
	iLocal_79 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_80 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_82 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_83 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_81 = unk_0x6ABFA3E16460F22D(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, false, 2);
	unk_0xB13C14F66A00D047(iLocal_77, 43.35f);
	unk_0xB13C14F66A00D047(iLocal_78, 42.35f);
	unk_0x6A25241C340D3822(iLocal_77, "HAND_SHAKE", 0.1f);
	unk_0x6A25241C340D3822(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_467(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x7239B21A38F536BA(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_468()
{
	Global_23011.f_6 = 1;
}

void func_469(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_32207, bParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_32207, bParam0);
	}
}

var func_470(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_471(iParam0, iParam1);
	unk_0x767FBC2AC802EF3D(iVar1, &uVar0, -1);
	return uVar0;
}

var func_471(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_472(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_472(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_473(bool bParam0)
{
	if (bParam0)
	{
		func_474();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_42(0))
		{
			func_433(0);
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

void func_474()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_475(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x276B6CE369C33678(true);
	func_271(8);
	func_324();
	if (bLocal_146)
	{
		func_492(&uLocal_162);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_414(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0xE532F5D78798DAAB(bLocal_28);
	unk_0xE532F5D78798DAAB(bLocal_29);
	if (!unk_0x84A2DD9AC37C35C1(iLocal_138[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_138[1]))
	{
		unk_0x0F804F1DB19B9689(iLocal_138[0]);
		unk_0x0F804F1DB19B9689(iLocal_138[1]);
	}
	func_491();
	unk_0xE532F5D78798DAAB(bLocal_37);
	func_490();
	func_489(uParam1->f_645);
	func_488(&(uParam1->f_57));
	if (!unk_0x5F9532F3B5CC2551(func_504(), false))
	{
		unk_0x9F3480FE65DB31B5(func_504(), func_487());
		func_486(iLocal_170, iLocal_171);
	}
	else
	{
		func_484(&(iLocal_138[1]));
	}
	func_473(0);
	func_483(uParam2, 0);
	func_39(0);
	unk_0x450930E616475D0D(15);
	if (unk_0xF25D331DC2627BBC())
	{
		if (iParam0->f_460 && !iLocal_160)
		{
			func_482(190, 0);
		}
	}
	func_105();
	func_465();
	func_97(&(uParam1->f_72), 0);
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_153)
	{
		func_479(130, 0, 0);
		func_476();
	}
	func_469(23, 0);
	unk_0x1090044AD1DA76FA();
}

void func_476()
{
	func_477();
}

int func_477()
{
	if (func_478(0))
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

int func_478(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_479(int iParam0, int iParam1, int iParam2)
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
		func_66((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_480();
	}
}

void func_480()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
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
	fVar8 = Global_113386.f_10194.f_3853;
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
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_86(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_481() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_477();
				}
			}
		}
	}
}

int func_481()
{
	return Global_31959;
}

void func_482(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0xF25D331DC2627BBC())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x0BCA1D2C47B0D269(103, iLocal_106[1], 0f);
		unk_0x0BCA1D2C47B0D269(99, iLocal_106[2], 0f);
		unk_0x0BCA1D2C47B0D269(109, iLocal_106[3], 0f);
		unk_0x0BCA1D2C47B0D269(106, iLocal_106[5], 0f);
		unk_0x0BCA1D2C47B0D269(2, iLocal_106[10], 0f);
		unk_0x0BCA1D2C47B0D269(107, iLocal_106[8], 0f);
		unk_0x0BCA1D2C47B0D269(116, iLocal_106[6], 0f);
	}
}

void func_483(var uParam0, int iParam1)
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
				if (unk_0xB16FCE9DDC7BA182() && !func_478(0))
				{
					unk_0xD4E8E24955024033(800);
				}
			}
		}
	}
	func_39(0);
}

void func_484(var uParam0)
{
	if (unk_0x7239B21A38F536BA(*uParam0) && !unk_0x84A2DD9AC37C35C1(*uParam0))
	{
		unk_0x3841422E9C488D8C(&iLocal_173);
		unk_0xE8854A4326B9E12B(&iLocal_173);
		if (unk_0x7239B21A38F536BA(iLocal_138[0]))
		{
			unk_0x69F4BE8C8CC4796C(0, iLocal_138[0], 8000, 2049, 3);
		}
		unk_0x919BE13EED931959(0, 1000);
		if (bLocal_151)
		{
			if (!BitTest(Global_113347, 10))
			{
				unk_0x15D3A79D4E44B913(0, func_485(iLocal_175 == 2, Local_210, Local_212), 1f, 20000, 0.25f, false, func_124(iLocal_175 == 2, fLocal_214, fLocal_216));
			}
			else
			{
				unk_0x15D3A79D4E44B913(0, func_485(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, false, func_124(iLocal_175 == 2, fLocal_213, fLocal_215));
			}
			unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
		}
		else
		{
			unk_0x15D3A79D4E44B913(0, func_485(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, false, func_124(iLocal_175 == 2, 172.6813f, 142.6717f));
			unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
		}
		unk_0x39E72BC99E6360CB(iLocal_173);
		unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_173);
		unk_0x971D38760FBC02EF(*uParam0, true);
	}
	unk_0xE532F5D78798DAAB(bLocal_172);
}

Vector3 func_485(bool bParam0, struct<3> Param1, struct<3> Param2)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_486(int iParam0, var uParam1)
{
	if (Global_96267 == iParam0)
	{
		Global_96268 = Global_96267;
		Global_96269 = uParam1;
		Global_96267 = 23;
	}
}

int func_487()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_488(int* iParam0)
{
	if (unk_0x85F01B8D5B90570E(*iParam0))
	{
		unk_0x1D132D614DD86811(iParam0);
		*iParam0 = 0;
	}
}

void func_489(var uParam0)
{
	unk_0x1D132D614DD86811(&uParam0);
}

void func_490()
{
	unk_0x8DFCED7A656F8802(true);
	unk_0x8E5FB15663F79120(false);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	unk_0xA0EBB943C300E693(true);
}

void func_491()
{
	if (unk_0x7239B21A38F536BA(iLocal_36))
	{
		unk_0x539E0AE3E6634B9F(&iLocal_36);
	}
}

void func_492(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x7239B21A38F536BA(iVar0))
	{
		if (!func_439(iVar0))
		{
			unk_0x1A9205C1B9EE827F(iVar0, true, false);
			unk_0xEA1C610A04DB6BBB(iVar0, true, false);
			unk_0x428CA6DBD1094446(iVar0, false);
		}
	}
}

void func_493()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_478(0))
	{
		if (!func_501())
		{
			iVar0 = func_500();
			if (iVar0 != -1)
			{
				if (!func_495(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_494();
		}
	}
}

void func_494()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 25);
	}
}

int func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_494();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_499(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6(), 0);
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
	func_496(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xDA66D2796BA33F12(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_496(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_498(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_497(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_497(var uParam0)
{
	*uParam0 = -15;
}

int func_498(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_498(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_498(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_499(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

int func_500()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_501()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_502(int iParam0, bool bParam1)
{
	if (unk_0x84A2DD9AC37C35C1(func_504()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x9BB01E3834671191(func_504(), func_487()))
		{
			return;
		}
		if (!unk_0x84A2DD9AC37C35C1(func_503()))
		{
			if (!unk_0x9BB01E3834671191(func_503(), func_487()))
			{
				return;
			}
		}
	}
	if (Global_96267 == 23)
	{
		Global_96269 = 10;
		Global_96267 = iParam0;
	}
}

var func_503()
{
	return Global_96274;
}

int func_504()
{
	return Global_96273;
}

void func_505()
{
	if (iLocal_135 == 1)
	{
		return;
	}
	func_324();
	unk_0x3D42B92563939375("Darts");
	iLocal_135 = 1;
}

int func_506(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_94(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

