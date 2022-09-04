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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	bool bLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	var uLocal_100 = 16;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	struct<2> Local_287 = { 0, 5 } ;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 5;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
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
	fLocal_43 = 20f;
	iLocal_81 = 1;
	iLocal_272 = 6000;
	Local_50 = { ScriptParam_287.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				unk_0xED74007FFB146BC2(bLocal_51);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_53))
			{
				unk_0xED74007FFB146BC2(bLocal_53);
			}
		}
		func_183();
	}
	if (func_182(283, 1))
	{
		unk_0x1090044AD1DA76FA();
	}
	if (func_153(Local_50, -1, 0, 0, 0))
	{
		if ((unk_0x25223CA6B4D20B7F() > 2 && unk_0x25223CA6B4D20B7F() < 15) && !unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
		}
		else
		{
			unk_0x1090044AD1DA76FA();
		}
		func_150(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (unk_0xC5042CC6F5E3D450() || bLocal_80)
		{
			if (!func_149())
			{
				if (func_148())
				{
					func_183();
				}
			}
			unk_0x208784099002BC30("RE_SDRM", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_136())
					{
						func_183();
					}
					if (iLocal_48)
					{
						iLocal_49 = 1;
						iLocal_46 = 1;
					}
					else
					{
						func_127();
					}
					break;
				
				case 1:
					func_126();
					if (!iLocal_78)
					{
						func_125();
						func_122();
						func_111();
						if (!unk_0x25D39B935A038A26(bLocal_282))
						{
							func_110();
						}
					}
					else
					{
						func_107();
						if (!bLocal_88)
						{
							func_105();
						}
						func_97();
						func_95();
						func_79();
						func_78(bLocal_51, 0);
						if (!bLocal_85)
						{
						}
						if (iLocal_47 == 0 && !bLocal_82)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
						if (iLocal_47 == 3)
						{
							if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_67, true) < 100f)
							{
								if (!unk_0x991251AFC3981F84())
								{
									unk_0x7A86743F475D9E09("sdrm_mcs_2", 8);
								}
								if (unk_0x991251AFC3981F84())
								{
									if (unk_0xB56BBBCC2955D9CB())
									{
										if ((((!unk_0x84A2DD9AC37C35C1(bLocal_51) && !unk_0x84A2DD9AC37C35C1(bLocal_53)) && !unk_0x84A2DD9AC37C35C1(bLocal_52)) && !unk_0x84A2DD9AC37C35C1(bLocal_54)) && !unk_0x5F9532F3B5CC2551(bLocal_96, false))
										{
											unk_0x2A56C06EBEF2B0D9("Groom", bLocal_51, false);
											unk_0x2A56C06EBEF2B0D9("Groomsman", bLocal_53, false);
											unk_0x2A56C06EBEF2B0D9("Bride", bLocal_52, false);
											unk_0x2A56C06EBEF2B0D9("Father_of_the_bride", bLocal_54, false);
										}
									}
								}
							}
							else if (unk_0x991251AFC3981F84())
							{
								unk_0x440AF51A3462B86F();
							}
							if (bLocal_82)
							{
								if (func_66(1, 0, 1))
								{
									func_31();
								}
							}
							else if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
							{
								if (unk_0x997ABD671D25CA0B(bLocal_53, false))
								{
									if (unk_0xA6DB27D19ECBB7DA(bLocal_286))
									{
										unk_0x86A652570E5F25DD(&bLocal_286);
										if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
										{
											unk_0x86A652570E5F25DD(&bLocal_284);
										}
										if (!unk_0xA6DB27D19ECBB7DA(bLocal_284))
										{
											bLocal_284 = func_29(Local_59, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
							{
								unk_0x22B0D0E37CCB840D(bLocal_51, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
							{
								unk_0x22B0D0E37CCB840D(bLocal_53, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_52))
							{
								unk_0x22B0D0E37CCB840D(bLocal_52, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_54))
							{
								unk_0x22B0D0E37CCB840D(bLocal_54, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_183();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_183();
}

int func_3()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			return 1;
		}
		else
		{
			if (unk_0xC86D67D52A707CF8(bLocal_51, unk_0xD80958FC74E988A6(), true) || unk_0xCFB0A0D8EDD145A3(bLocal_51))
			{
				return 1;
			}
			if (bLocal_80)
			{
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
	{
		if ((!unk_0x4C241E39B23DF959(bLocal_55, false) || unk_0xB497F06B288DCFDF(bLocal_55)) || unk_0xCFB0A0D8EDD145A3(bLocal_55))
		{
			func_27();
			if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck")) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck2")))
			{
				if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), bLocal_55))
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_27();
		if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!unk_0x751B70C3D034E187(bLocal_51, unk_0xD80958FC74E988A6(), 150f, 150f, 150f, false, true, 0))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false))
				{
					unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), true, false);
					unk_0x9B0BB33B04405E7A(unk_0x4F8644AF03D0E0D6(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_47 >= 1)
	{
		if (bLocal_87)
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_53))
			{
				func_27();
				return 1;
			}
			else if (unk_0xC86D67D52A707CF8(bLocal_53, unk_0xD80958FC74E988A6(), true))
			{
				func_27();
				return 1;
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
		{
			if (!unk_0x751B70C3D034E187(bLocal_55, unk_0xD80958FC74E988A6(), 20f, 20f, 20f, false, true, 0))
			{
				if (!iLocal_90)
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
			}
			if (!unk_0x751B70C3D034E187(bLocal_55, unk_0xD80958FC74E988A6(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_47 == 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_52) || unk_0x84A2DD9AC37C35C1(bLocal_54))
			{
				return 1;
			}
			else if (unk_0xC86D67D52A707CF8(bLocal_52, unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(bLocal_54, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
		{
			if (!unk_0x751B70C3D034E187(bLocal_53, unk_0xD80958FC74E988A6(), 20f, 20f, 20f, false, true, 0) && iLocal_274)
			{
				if (!iLocal_91)
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
			}
			if (!unk_0x751B70C3D034E187(bLocal_53, unk_0xD80958FC74E988A6(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
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

int func_16()
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

int func_19(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == bVar1)
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_27()
{
	Global_20471 = 0;
	func_28();
}

void func_28()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

bool func_29(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_30(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_30(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_31()
{
	switch (iLocal_95)
	{
		case 0:
			func_27();
			unk_0x4EDE34FBADD967A6(false);
			func_58(1, 1, 1, 0, 0, 0, 0);
			unk_0xF7F26C6E9CC9EBB8(false);
			iLocal_274 = 0;
			iLocal_95++;
			break;
		
		case 1:
			iLocal_95++;
			break;
		
		case 2:
			if ((((!unk_0x84A2DD9AC37C35C1(bLocal_51) && !unk_0x84A2DD9AC37C35C1(bLocal_53)) && !unk_0x84A2DD9AC37C35C1(bLocal_52)) && !unk_0x84A2DD9AC37C35C1(bLocal_54)) && !unk_0x5F9532F3B5CC2551(bLocal_96, false))
			{
				if (func_57())
				{
					unk_0xE40C1C56DF95C2E8(bLocal_96, "SDRM_Car", 0, false, 0);
					unk_0xE40C1C56DF95C2E8(bLocal_51, "Groom", 0, false, 0);
					unk_0xE40C1C56DF95C2E8(bLocal_53, "Groomsman", 0, false, 0);
					unk_0xE40C1C56DF95C2E8(bLocal_52, "Bride", 0, false, 0);
					unk_0xE40C1C56DF95C2E8(bLocal_54, "Father_of_the_bride", 0, false, 0);
					unk_0x186D5CB5E7B0FF7B(4);
					iLocal_95++;
				}
			}
			break;
		
		case 3:
			if (unk_0xB2CBCD0930DFB420(false))
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_96, false))
				{
					unk_0x49733E92263139D1(bLocal_96, 5f);
					unk_0x781B3D62BB013EF5(bLocal_96, true);
					unk_0xA6294919E56FF02A(true);
					unk_0xA0EBB943C300E693(true);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(-7f, 1f);
				}
				iLocal_95++;
			}
			break;
		
		case 4:
			unk_0x9614299DCB53E54B(&bLocal_51);
			unk_0x9614299DCB53E54B(&bLocal_53);
			unk_0x9614299DCB53E54B(&bLocal_52);
			unk_0x9614299DCB53E54B(&bLocal_54);
			func_58(0, 1, 1, 0, 0, 0, 0);
			unk_0xF7F26C6E9CC9EBB8(true);
			func_32();
			break;
	}
}

void func_32()
{
	while (!func_56())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	func_36(-1, 0);
	func_33();
	func_183();
}

void func_33()
{
	func_34();
}

int func_34()
{
	if (func_35(0))
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

int func_35(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_36(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_53(iParam0))
	{
		func_52(iParam0, bParam1);
		if (!func_51(51))
		{
			func_47("RE_REWARD", 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
		if (func_45(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_44(iParam0, bParam1) != 322)
		{
			func_38(func_44(iParam0, bParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_37(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_37(7);
			}
			else
			{
				func_37(1);
			}
		}
	}
}

void func_37(int iParam0)
{
	Global_113372 = iParam0;
}

void func_38(int iParam0, var uParam1, var uParam2)
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
		func_42((891 + iParam0), 1, -1);
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
		func_39();
	}
}

void func_39()
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
		func_41(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_40() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_34();
				}
			}
		}
	}
}

int func_40()
{
	return Global_31959;
}

int func_41(int iParam0, bool bParam1)
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

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_43();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_43()
{
	return Global_1574918;
}

int func_44(int iParam0, bool bParam1)
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

int func_45(int iParam0)
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

void func_46(int iParam0)
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

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_48(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_49();
	}
}

void func_49()
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

int func_50()
{
	func_17();
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

int func_51(int iParam0)
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

void func_52(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_53(int iParam0)
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

int func_54()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_55(Var0);
	return uVar1;
}

int func_55(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_56()
{
	return 1;
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = unk_0xC59F528E9AB9F339();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_65(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_13())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_64(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_65(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_64(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_62(unk_0x4F8644AF03D0E0D6())) && !func_60(unk_0x4F8644AF03D0E0D6(), 0)) && !func_59()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_62(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_59()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_60(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_61(-1, 0) == 8;
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

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_62(bool bParam0)
{
	if (func_60(bParam0, 0))
	{
		return 1;
	}
	if (func_63())
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

bool func_63()
{
	return BitTest(Global_2621446, 3);
}

int func_64(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_65(int iParam0)
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

int func_66(bool bParam0, bool bParam1, bool bParam2)
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

void func_67()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_55, false) && !unk_0x5F9532F3B5CC2551(bLocal_51, false))
	{
		if (!iLocal_81)
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false) && unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false))
			{
				iLocal_81 = 1;
				if (unk_0xA6DB27D19ECBB7DA(bLocal_283))
				{
					unk_0x86A652570E5F25DD(&bLocal_283);
				}
				if (iLocal_86 && !bLocal_82)
				{
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_284))
					{
						bLocal_284 = func_29(Local_59, 1);
					}
				}
				if (!func_71())
				{
				}
			}
		}
		if (!iLocal_81 && !iLocal_83)
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false))
			{
				if (!unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false))
				{
					if (!func_71())
					{
					}
					if (unk_0xA6DB27D19ECBB7DA(bLocal_283))
					{
						unk_0x86A652570E5F25DD(&bLocal_283);
					}
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_283))
					{
						bLocal_283 = func_70(bLocal_51, 0, 145);
						unk_0x6F6F290102C02AB4(bLocal_283, true);
					}
					iLocal_81 = 0;
					iLocal_83 = 1;
				}
			}
		}
		if (iLocal_81)
		{
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false))
			{
				if (!func_71())
				{
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_283))
				{
					bLocal_283 = func_68(bLocal_55, 0, 0);
					unk_0x6F6F290102C02AB4(bLocal_283, true);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
				{
					unk_0x86A652570E5F25DD(&bLocal_284);
				}
				iLocal_81 = 0;
			}
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false) && !unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false))
			{
				if (!func_71())
				{
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_283))
				{
					bLocal_283 = func_68(bLocal_55, 0, 0);
					unk_0x6F6F290102C02AB4(bLocal_283, true);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
				{
					unk_0x86A652570E5F25DD(&bLocal_284);
				}
				iLocal_81 = 0;
			}
		}
	}
}

bool func_68(bool bParam0, bool bParam1, bool bParam2)
{
	return func_69(bParam0, !bParam1, bParam2);
}

bool func_69(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_30(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_30(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_30(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

bool func_70(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_69(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

int func_71()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_72()
{
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0x751B70C3D034E187(bLocal_51, unk_0xD80958FC74E988A6(), 4f, 4f, 4f, false, true, 0))
			{
				if ((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(bLocal_51, false)) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_285))
					{
						unk_0x86A652570E5F25DD(&bLocal_285);
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_284))
						{
							bLocal_284 = func_29(Local_59, 1);
						}
					}
				}
				else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(bLocal_51, false))
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_285))
					{
						unk_0x86A652570E5F25DD(&bLocal_285);
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_284))
						{
							bLocal_284 = func_29(Local_59, 1);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
				{
					unk_0x86A652570E5F25DD(&bLocal_284);
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_285))
					{
						bLocal_285 = func_70(bLocal_51, 0, 145);
					}
				}
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
			{
				unk_0x86A652570E5F25DD(&bLocal_284);
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_285))
				{
					bLocal_285 = func_70(bLocal_51, 0, 145);
				}
			}
			if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_51);
					unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
					unk_0x3DBFC55D5C9BB447(bLocal_51, true);
					unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_51);
					unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
					unk_0x3DBFC55D5C9BB447(bLocal_51, true);
					unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
				}
			}
		}
	}
}

int func_73()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_74()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (!func_77())
			{
				if (unk_0x5891CAC5D4ACFF74(bLocal_51))
				{
					unk_0xED74007FFB146BC2(bLocal_51);
				}
				if (unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) != 1 && unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(bLocal_51, unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(bLocal_51, false))
				{
					unk_0x504D54DF3F6F2247(bLocal_51, false, 0);
				}
				if (!iLocal_89)
				{
					if (!func_71())
					{
						iLocal_89 = 1;
						if (func_76())
						{
							func_75(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_75(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (((unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) == 1 || unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) == 0) || unk_0x77F1BEB8863288D5(bLocal_51, 242628503) == 1) || unk_0x77F1BEB8863288D5(bLocal_51, 242628503) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_51);
					if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
					{
						unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
						unk_0x3DBFC55D5C9BB447(bLocal_51, true);
						unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
					}
				}
			}
		}
		else if (((!unk_0x5891CAC5D4ACFF74(bLocal_51) && !unk_0x997ABD671D25CA0B(bLocal_51, false)) && unk_0x77F1BEB8863288D5(bLocal_51, 242628503) != 1) && unk_0x77F1BEB8863288D5(bLocal_51, 242628503) != 0)
		{
			unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
			unk_0x3DBFC55D5C9BB447(bLocal_51, true);
			unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
		}
	}
}

int func_75(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_5(sParam2, iParam4, 0);
}

int func_76()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true))
		{
			if ((unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true)))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_77()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (((((!unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()) && !unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()), false))
		{
			if ((((!unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && unk_0x826AA586EDB9FEF8(bParam0))
			{
				if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == unk_0x9A9112A0FE9A4713(bParam0, false))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x813A0A7C9D2E831F(bParam0, unk_0xD80958FC74E988A6()))
		{
			if (!bVar0)
			{
				unk_0x69F4BE8C8CC4796C(bParam0, unk_0xD80958FC74E988A6(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x049E937F18F4020C(bParam0))
			{
				unk_0x0F804F1DB19B9689(bParam0);
			}
		}
	}
}

void func_79()
{
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_51, false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (func_93("stagd_chape_1"))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_284))
				{
					bLocal_284 = func_29(Local_59, 1);
				}
				iLocal_86 = 1;
			}
			if (func_93("stagd_chape_3"))
			{
				unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
				if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
				{
					if (unk_0x997ABD671D25CA0B(bLocal_51, false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0x0F804F1DB19B9689(false);
						unk_0x5EE02954A14C69DB(false, 30600);
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
					}
				}
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 13.5f, 13.5f, 13.5f, false, true, 0) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_51, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if (iLocal_47 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_94 == 0)
							{
								if (!func_71())
								{
									func_92();
									if (func_4(&uLocal_100, "stagdau", sLocal_266, 4, 0, 0, 0))
									{
										iLocal_274 = 1;
									}
									bLocal_85 = true;
									iLocal_94++;
									unk_0x5AE11BC36633DE4E(false);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_94 == 1)
							{
								if (!func_71())
								{
									unk_0xA6294919E56FF02A(true);
									unk_0xA0EBB943C300E693(true);
									iLocal_94++;
									unk_0x5AE11BC36633DE4E(false);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_94 == 2)
							{
								if (!func_71())
								{
									func_92();
									if (func_16() == 0)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_16() == 1)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_16() == 2)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_94++;
									unk_0x5AE11BC36633DE4E(false);
								}
							}
						}
					}
					if (!bLocal_88)
					{
						if (iLocal_47 == 3)
						{
							if (!func_71())
							{
								if (iLocal_94 == 0)
								{
									func_4(&uLocal_100, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_94++;
								}
							}
						}
						if (iLocal_47 == 3)
						{
							if (unk_0xC9D9444186B5A374() > 5000)
							{
								if (iLocal_94 == 0)
								{
									if (!func_71())
									{
										iLocal_94++;
									}
								}
							}
						}
						if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_67, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_267 == 0)
							{
								if (iLocal_271 == func_80(func_81()) + 11)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_267 = 1;
									}
								}
							}
							if (iLocal_267 < 2)
							{
								if (iLocal_271 == func_80(func_81()) + 10)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_267 = 2;
									}
								}
							}
							if (iLocal_267 < 3)
							{
								if (iLocal_271 == func_80(func_81()) + 9)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_267 = 3;
									}
								}
							}
							if (iLocal_267 < 4)
							{
								if (iLocal_271 == func_80(func_81()) + 8)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_267 = 4;
									}
								}
							}
							if (iLocal_267 < 5)
							{
								if (iLocal_271 == func_80(func_81()) + 7)
								{
									if (!func_71())
									{
										iLocal_267 = 5;
									}
								}
							}
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										iLocal_267 = 6;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										iLocal_267 = 7;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										iLocal_267 = 8;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 9;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 10;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_80(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

bool func_81()
{
	var uVar0;
	
	func_91(&uVar0, unk_0x494E97C2EF27C470());
	func_90(&uVar0, unk_0x13D2B8ADD79640F2());
	func_89(&uVar0, unk_0x25223CA6B4D20B7F());
	func_84(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_83(&uVar0, unk_0xBBC72712E80257A1());
	func_82(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (bParam1 < 1 || bParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

int func_86(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_87(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_88(bool bParam0)
{
	return (bParam0 && 15);
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

void func_92()
{
	Global_20471 = 0;
	func_25();
}

int func_93(bool bParam0)
{
	var uVar0;
	
	if (func_71())
	{
		MemCopy(&uVar0, {func_94()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_94()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = unk_0x480357EE890C295A();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				if (!iLocal_93 && bLocal_82)
				{
					unk_0xFE99B66D079CF6BC(0, 75, true);
					unk_0xFE99B66D079CF6BC(0, 80, true);
					iVar0 = unk_0x19CAFA3C87F7C2FF();
					if (iVar0 != 0)
					{
						iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
						if (iVar1 != 4)
						{
							unk_0xFE99B66D079CF6BC(0, 79, true);
							unk_0xFE99B66D079CF6BC(0, 286, true);
							unk_0xFE99B66D079CF6BC(0, 287, true);
							unk_0xFE99B66D079CF6BC(0, 26, true);
							unk_0xFE99B66D079CF6BC(0, 273, true);
							unk_0xFE99B66D079CF6BC(0, 4, true);
							unk_0xFE99B66D079CF6BC(0, 270, true);
							unk_0xFE99B66D079CF6BC(0, 5, true);
							unk_0xFE99B66D079CF6BC(0, 1, true);
							unk_0xFE99B66D079CF6BC(0, 271, true);
							unk_0xFE99B66D079CF6BC(0, 6, true);
							unk_0xFE99B66D079CF6BC(0, 2, true);
							unk_0xFE99B66D079CF6BC(0, 272, true);
							unk_0xFE99B66D079CF6BC(0, 3, true);
						}
					}
					if (unk_0x51210CED3DA1C78A(bLocal_51, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_93 = 1;
						unk_0xC1B1E9A034A63A62(false);
						func_58(1, 1, 1, 0, 0, 0, 0);
						unk_0x8DFCED7A656F8802(true);
						unk_0xA6294919E56FF02A(false);
						unk_0xA0EBB943C300E693(false);
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
						unk_0x81A15811460FAB3A(joaat("superd"), 3);
						while (!unk_0x1BBE0523B8DB9A21(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(false);
						}
						bLocal_98 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, false, 2);
						bLocal_99 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, false, 2);
						unk_0x6A25241C340D3822(bLocal_98, "HAND_SHAKE", 0.25f);
						unk_0x6A25241C340D3822(bLocal_99, "HAND_SHAKE", 0.25f);
						unk_0x026FB97D0A425F84(bLocal_98, true);
						unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x9FBDA379383A52A4(bLocal_99, bLocal_98, 4000, 1, 1);
						unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
						unk_0x01C7B9B38428AEB6(Local_71, 10f, false, false, false, false, false, false, 0);
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
						{
							unk_0xA6E9FDCB2C76785E(unk_0xB6997A7EB3F5C8C0());
							if (unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), Local_71, 8f, 8f, 8f, false, true, 0))
							{
								bLocal_97 = unk_0xB6997A7EB3F5C8C0();
								unk_0xAD738C3085FE7E11(bLocal_97, true, false);
								unk_0xEA386986E786A54F(&bLocal_97);
							}
						}
						if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
						{
							unk_0xB664292EAECF7FA6(bLocal_55, 1);
							if (!unk_0xA6DB27D19ECBB7DA(bLocal_283))
							{
								bLocal_283 = func_68(bLocal_55, 0, 0);
								unk_0x6F6F290102C02AB4(bLocal_283, true);
							}
						}
						iLocal_81 = 0;
					}
				}
				if (iLocal_93 && unk_0xA7A932170592B50E(bLocal_98))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_281)
					{
						if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0x8D4D46230B2C353A() == 4) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA4FF579AC0E3AAAE() == 4))
						{
							unk_0x2206BF9A37B7F724("CamPushInNeutral", false, false);
							unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_281 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
						}
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
						unk_0xA6294919E56FF02A(true);
						unk_0xA0EBB943C300E693(true);
						func_58(0, 1, 1, 0, 0, 0, 0);
						unk_0x026FB97D0A425F84(bLocal_98, false);
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						unk_0x865908C81A2C22E9(bLocal_98, false);
						unk_0xF46C581C61718916(false);
					}
				}
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x01C7B9B38428AEB6(Local_67, 5f, false, false, false, false, false, false, 0);
				}
			}
			if (!bLocal_87)
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_73, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x963D27A58DF860AC(joaat("ig_bestmen"));
					if (unk_0x98A4EB5D89A0C952(joaat("ig_bestmen")))
					{
						bLocal_53 = unk_0xD49F9B0955C367DE(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, true, true);
						func_96(&uLocal_100, 4, bLocal_53, "BESTMAN", 0, 1);
						unk_0x262B14F48D29DE80(bLocal_53, 0, false, false, 0);
						unk_0xC80A74AC829DDD92(bLocal_53, joaat("player"));
						unk_0x9F8AA94D6D97DBF4(bLocal_53, true);
						unk_0x1913FE4CBF41C463(bLocal_53, 185, true);
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
						unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(bLocal_53, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
						bLocal_87 = true;
					}
				}
			}
			if (!bLocal_88)
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_63, 20f, 20f, 20f, false, true, 0))
				{
					func_27();
					if (!func_71())
					{
						func_4(&uLocal_100, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_88 = true;
					}
				}
			}
			if (((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_60, Local_61, fLocal_62, false, true, 0) && unk_0x51210CED3DA1C78A(bLocal_51, Local_60, Local_61, bLocal_62, false, true, 0)) || (unk_0x20B60995556D004F(bLocal_51, Local_59, 0f, 0f, 2f, true, true, 0) && func_66(1, 0, 1))) || bLocal_82)
			{
				switch (iLocal_47)
				{
					case 0:
						unk_0x86A652570E5F25DD(&bLocal_284);
						if (!bLocal_82)
						{
							Local_59 = { Local_73 };
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
								{
									unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 4, false);
								}
							}
							if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
							{
								iVar2 = unk_0x19CAFA3C87F7C2FF();
								if (iVar2 != 0)
								{
									iVar3 = unk_0xEE778F8C7E1142E2(iVar2);
									if (iVar3 == 4)
									{
										unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_51, 5000, 0, 2);
									}
									else
									{
										unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_55, 5000, 2052, 4);
										unk_0xA2297E18F3E71C2E(bLocal_55, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
							func_27();
							if (!func_71())
							{
								func_4(&uLocal_100, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
								{
									unk_0xE1EF3C1216AFF2CD(bLocal_51);
									unk_0xE8854A4326B9E12B(&iLocal_77);
									unk_0x15D3A79D4E44B913(false, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 0.25f, false, 1193033728);
									unk_0x15D3A79D4E44B913(false, Local_71, 3f, 20000, 0.25f, false, 1193033728);
									unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
									unk_0x39E72BC99E6360CB(iLocal_77);
									unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
									unk_0x3841422E9C488D8C(&iLocal_77);
									unk_0x971D38760FBC02EF(bLocal_51, true);
								}
								bLocal_82 = true;
								unk_0xC1B1E9A034A63A62(false);
							}
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_51) && !unk_0x5F9532F3B5CC2551(bLocal_55, false))
						{
							if ((bLocal_82 && unk_0x20B60995556D004F(bLocal_51, Local_71, 1f, 1f, 1f, false, true, 0)) && !unk_0x997ABD671D25CA0B(bLocal_51, false))
							{
								if (unk_0x5891CAC5D4ACFF74(bLocal_51))
								{
									if (!func_71())
									{
										if (func_16() == 2)
										{
											func_4(&uLocal_100, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0xED74007FFB146BC2(bLocal_51);
								}
								if (unk_0xE31C2C72B8692B64(bLocal_51))
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
									{
										unk_0xEA1C610A04DB6BBB(bLocal_51, false, false);
										unk_0x1A9205C1B9EE827F(bLocal_51, false, false);
										unk_0x3882114BDE571AD4(bLocal_51, true);
										unk_0x428CA6DBD1094446(bLocal_51, true);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
										{
											unk_0x262B14F48D29DE80(bLocal_51, 2, true, false, 0);
											unk_0x262B14F48D29DE80(bLocal_51, 0, false, true, 0);
											unk_0x262B14F48D29DE80(bLocal_51, 3, true, false, 0);
											unk_0x262B14F48D29DE80(bLocal_51, 4, true, false, 0);
											unk_0x262B14F48D29DE80(bLocal_51, 11, false, false, 0);
											unk_0xEA1C610A04DB6BBB(bLocal_51, true, false);
											unk_0x1A9205C1B9EE827F(bLocal_51, true, false);
											unk_0x3882114BDE571AD4(bLocal_51, false);
											unk_0x428CA6DBD1094446(bLocal_51, false);
											unk_0x06843DA7060A026B(bLocal_51, Local_71, true, false, false, true);
											unk_0x8E2530AA8ADA980E(bLocal_51, 106.5078f);
											unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
											unk_0x9F7794730795E019(bLocal_51, 17, true);
											unk_0xEDF4079F9D54C9A1(bLocal_51, true);
											unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_51, -1, 2048, 4);
											if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
											{
												unk_0xE8854A4326B9E12B(&iLocal_77);
												unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2052, 4);
												unk_0xC20E50AA46D09CA8(false, bLocal_55, -1, false, 2f, 1, 0);
												unk_0x39E72BC99E6360CB(iLocal_77);
												unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
												unk_0x3841422E9C488D8C(&iLocal_77);
											}
										}
										unk_0xC1B1E9A034A63A62(false);
										Local_59 = { Local_73 };
										Local_60 = { Local_74 };
										Local_61 = { Local_75 };
										bLocal_62 = fLocal_76;
										iLocal_47 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_51) && !unk_0x5F9532F3B5CC2551(bLocal_55, false))
						{
							if (unk_0x751B70C3D034E187(bLocal_51, bLocal_55, 5f, 5f, 5f, false, true, 0) && !iLocal_92)
							{
								func_4(&uLocal_100, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
							if (unk_0x997ABD671D25CA0B(bLocal_51, false))
							{
								if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false))
								{
									if (func_4(&uLocal_100, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_47 = 2;
										bLocal_82 = false;
										iLocal_94 = 0;
									}
								}
								else
								{
									if (iLocal_272 == 0)
									{
										iLocal_272 = unk_0x9CD27B0045628463();
									}
									if (iLocal_272 != 0 && unk_0x9CD27B0045628463() > iLocal_272 + 6000)
									{
										func_4(&uLocal_100, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_272 = 0;
									}
									unk_0xC1B1E9A034A63A62(false);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_82)
						{
							func_27();
							if (func_4(&uLocal_100, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
								{
									if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
									{
										bLocal_96 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
										unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 2, false);
									}
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_53) && !unk_0x84A2DD9AC37C35C1(bLocal_51))
								{
									if (unk_0x997ABD671D25CA0B(bLocal_51, false))
									{
										bLocal_96 = unk_0x9A9112A0FE9A4713(bLocal_51, false);
										unk_0xE8854A4326B9E12B(&iLocal_77);
										unk_0xC20E50AA46D09CA8(false, bLocal_96, -1, 2, 1f, 1, 0);
										unk_0x0F804F1DB19B9689(false);
										unk_0x39E72BC99E6360CB(iLocal_77);
										unk_0x5ABA3986D90D8A3B(bLocal_53, iLocal_77);
										unk_0x1913FE4CBF41C463(bLocal_53, 185, false);
									}
									else
									{
										unk_0x6A071245EB0D1882(bLocal_53, bLocal_51, -1, 8f, 2f, 2f, 0);
									}
									if (!unk_0xA6DB27D19ECBB7DA(bLocal_286))
									{
										bLocal_286 = func_70(bLocal_53, 0, 145);
									}
									if (unk_0xA6DB27D19ECBB7DA(bLocal_284))
									{
										unk_0x86A652570E5F25DD(&bLocal_284);
									}
								}
								unk_0xC1B1E9A034A63A62(false);
								iLocal_84 = 1;
								bLocal_82 = true;
							}
						}
						if (bLocal_82 && !unk_0x84A2DD9AC37C35C1(bLocal_51))
						{
							if (unk_0x77F1BEB8863288D5(bLocal_51, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_59 = { Local_63 };
								Local_60 = { Local_64 };
								Local_61 = { Local_65 };
								bLocal_62 = fLocal_66;
								unk_0x963D27A58DF860AC(joaat("ig_bride"));
								unk_0x963D27A58DF860AC(joaat("washington"));
								unk_0x963D27A58DF860AC(joaat("baller2"));
								unk_0x963D27A58DF860AC(joaat("primo"));
								if (((unk_0x98A4EB5D89A0C952(joaat("ig_bride")) && unk_0x98A4EB5D89A0C952(joaat("washington"))) && unk_0x98A4EB5D89A0C952(joaat("baller2"))) && unk_0x98A4EB5D89A0C952(joaat("primo")))
								{
									bLocal_52 = unk_0xD49F9B0955C367DE(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									unk_0x9F8AA94D6D97DBF4(bLocal_52, true);
									unk_0xE8854A4326B9E12B(&iLocal_77);
									unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
									unk_0x39E72BC99E6360CB(iLocal_77);
									unk_0x5ABA3986D90D8A3B(bLocal_52, iLocal_77);
									unk_0x3841422E9C488D8C(&iLocal_77);
									bLocal_54 = unk_0xD49F9B0955C367DE(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, true, true);
									unk_0x9F8AA94D6D97DBF4(bLocal_54, true);
									unk_0x5AD23D40115353AC(bLocal_54, unk_0xD80958FC74E988A6(), -1);
									unk_0x262B14F48D29DE80(bLocal_54, 0, true, false, 0);
									iLocal_56[0] = unk_0xAF35D0D2583051B0(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, true, true, false);
									iLocal_56[1] = unk_0xAF35D0D2583051B0(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									iLocal_56[2] = unk_0xAF35D0D2583051B0(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									iLocal_56[3] = unk_0xAF35D0D2583051B0(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, true, true, false);
									unk_0x4F1D4BE3A7F24601(iLocal_56[0], unk_0xD53343AA4FB7DD28(false, 127), false);
									unk_0x4F1D4BE3A7F24601(iLocal_56[1], unk_0xD53343AA4FB7DD28(false, 127), false);
									unk_0x4F1D4BE3A7F24601(iLocal_56[2], unk_0xD53343AA4FB7DD28(false, 127), false);
									unk_0x4F1D4BE3A7F24601(iLocal_56[3], unk_0xD53343AA4FB7DD28(false, 127), false);
									iLocal_47 = 3;
									bLocal_82 = false;
									iLocal_94 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_82)
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
								{
									unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 2, false);
									bLocal_82 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_27();
									unk_0x4EDE34FBADD967A6(false);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0x5F9532F3B5CC2551(bLocal_51, false))
		{
			func_183();
		}
	}
}

void func_96(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_97()
{
	if ((iLocal_274 && iLocal_271 != func_80(func_81())) && !unk_0xA7A932170592B50E(bLocal_98))
	{
		func_101(((iLocal_271 * 1000 * 60 - func_80(func_81()) * 1000 * 60) + (iLocal_270 * 1000 - func_104(func_81()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iLocal_270 == 0)
	{
		if (iLocal_271 == func_80(func_81()) + 1 && ((((iLocal_270 == (func_104(func_81()) - 55) || iLocal_270 == (func_104(func_81()) - 56)) || iLocal_270 == (func_104(func_81()) - 57)) || iLocal_270 == (func_104(func_81()) - 58)) || iLocal_270 == (func_104(func_81()) - 59)))
		{
			func_100();
		}
	}
	if (iLocal_271 == func_80(func_81()))
	{
		func_100();
		func_98();
		if (!func_71())
		{
			func_4(&uLocal_100, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				unk_0xBD2A8EC3AF4DE7DB(bLocal_51, 1, 1);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52))
			{
				unk_0x22B0D0E37CCB840D(bLocal_52, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_54))
			{
				unk_0x22B0D0E37CCB840D(bLocal_54, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
				{
					unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 3, false);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_51);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_51, 5000, 2048, 2);
				unk_0x69F4BE8C8CC4796C(bLocal_51, unk_0xD80958FC74E988A6(), 5000, 2048, 2);
				unk_0x504D54DF3F6F2247(bLocal_51, false, 0);
				unk_0xED74007FFB146BC2(bLocal_51);
			}
			if (!unk_0x5F9532F3B5CC2551(bLocal_53, false))
			{
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_51, 5000, 0, 2);
				unk_0x504D54DF3F6F2247(bLocal_53, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x5F9532F3B5CC2551(bLocal_55, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_55, false))
				{
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
				}
			}
			if (!unk_0x5F9532F3B5CC2551(bLocal_51, false) && !unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				unk_0xE8854A4326B9E12B(&iLocal_77);
				if (unk_0xB6997A7EB3F5C8C0() == bLocal_55)
				{
					unk_0xC20E50AA46D09CA8(false, bLocal_55, -1, -1, 1f, 8, 0);
					unk_0x9454528DF15D657A(false, bLocal_55, unk_0xD80958FC74E988A6(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
				}
				unk_0x39E72BC99E6360CB(iLocal_77);
				unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
				unk_0x3841422E9C488D8C(&iLocal_77);
				unk_0x971D38760FBC02EF(bLocal_51, true);
				if (!unk_0x5F9532F3B5CC2551(bLocal_53, false))
				{
					unk_0xE8854A4326B9E12B(&iLocal_77);
					if (unk_0xB6997A7EB3F5C8C0() == bLocal_55)
					{
						unk_0xC20E50AA46D09CA8(false, bLocal_55, -1, false, 2f, 1, 0);
						unk_0xE73A266DB0CA9042(false, 100000);
					}
					else
					{
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
					}
					unk_0x39E72BC99E6360CB(iLocal_77);
					unk_0x5ABA3986D90D8A3B(bLocal_53, iLocal_77);
					unk_0x3841422E9C488D8C(&iLocal_77);
					unk_0x971D38760FBC02EF(bLocal_53, true);
				}
			}
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			while (func_71())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			func_2();
		}
	}
}

void func_98()
{
	Global_20471 = 0;
	func_99();
}

void func_99()
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

void func_100()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = unk_0x25223CA6B4D20B7F();
	bVar1 = unk_0x13D2B8ADD79640F2();
	bVar2 = unk_0x494E97C2EF27C470();
	if (iLocal_273 == 0)
	{
		if (bVar1 == 55 && bVar2 >= 30)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 1)
	{
		if (bVar1 == 56 && bVar2 >= 0)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 2)
	{
		if (bVar1 == 56 && bVar2 >= 30)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 3)
	{
		if (bVar1 == 57 && bVar2 >= 0)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 4)
	{
		if (bVar1 == 57 && bVar2 >= 30)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 5)
	{
		if (bVar1 == 58 && bVar2 >= 0)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 6)
	{
		if (bVar1 == 58 && bVar2 >= 15)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 7)
	{
		if (bVar1 == 58 && bVar2 >= 30)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 8)
	{
		if (bVar1 == 58 && bVar2 >= 45)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 9)
	{
		if (bVar1 == 59 && bVar2 >= 0)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 10)
	{
		if (bVar1 == 59 && bVar2 >= 15)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 11)
	{
		if (bVar1 == 59 && bVar2 >= 30)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 12)
	{
		if (bVar1 == 59 && bVar2 >= 45)
		{
			unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 13)
	{
		if (bVar1 >= 0 && bVar0 == iLocal_271)
		{
			unk_0x67C540AA08E4A6F5(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_103(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_102(7, bVar0);
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

void func_102(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_103(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_104(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

void func_105()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_55, false) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false) && unk_0x8BAD02F0368D9E14(bLocal_55))
			{
				if (!func_71())
				{
					if (func_106())
					{
						func_4(&uLocal_100, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0xA3EE4A07279BB9DB(bLocal_51, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0x8BAD02F0368D9E14(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				if (!func_71())
				{
					func_4(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		unk_0x0EB0585D15254740(bLocal_51, false);
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
	{
		unk_0x0EB0585D15254740(bLocal_53, false);
	}
	if (((((unk_0x751B70C3D034E187(bLocal_51, unk_0xD80958FC74E988A6(), 4f, 4f, 4f, false, true, 0) || iLocal_47 == 1) || iLocal_90) || iLocal_91) || iLocal_89) || bLocal_82)
	{
		if ((((((iLocal_47 >= 2 && iLocal_84) && iLocal_47 != 1) && !iLocal_90) && !iLocal_91) && !iLocal_89) && !bLocal_82)
		{
			if (unk_0x751B70C3D034E187(bLocal_53, unk_0xD80958FC74E988A6(), 4f, 4f, 4f, false, true, 0))
			{
				if (func_109())
				{
					func_108(0);
				}
			}
			else if (func_71() && !func_109())
			{
				func_108(1);
			}
		}
		else if (func_109())
		{
			func_108(0);
		}
	}
	else if (func_71() && !func_109())
	{
		func_108(1);
	}
}

void func_108(int iParam0)
{
	Global_22616 = iParam0;
}

int func_109()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	if ((unk_0x25223CA6B4D20B7F() > 2 && unk_0x25223CA6B4D20B7F() < 15) && !unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
	}
	else
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_51);
			func_27();
			unk_0x4EDE34FBADD967A6(false);
			func_4(&uLocal_100, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0x7239B21A38F536BA(bLocal_58))
			{
				unk_0x961AC54BF0613F5D(bLocal_58, true, true);
			}
		}
		while (func_71())
		{
			unk_0x4EDE34FBADD967A6(false);
		}
		func_2();
	}
}

void func_111()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!iLocal_79)
		{
			if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 130f, 60f, 50f, false, true, 0) && !unk_0xE31C2C72B8692B64(bLocal_51)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 10f, 10f, 10f, false, true, 0))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_285))
				{
					bLocal_285 = func_70(bLocal_51, 0, 145);
					unk_0x75A16C3DA34F1245(bLocal_285, false);
					unk_0x69F4BE8C8CC4796C(bLocal_51, unk_0xD80958FC74E988A6(), -1, 2052, 4);
				}
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_285))
					{
						unk_0x75A16C3DA34F1245(bLocal_285, true);
					}
					unk_0x5AE11BC36633DE4E(false);
					func_98();
					while (func_71())
					{
						unk_0x4EDE34FBADD967A6(false);
					}
					if (!func_71())
					{
						if (func_16() == 0)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_16() == 1)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_16() == 2)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_79 = 1;
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				if ((!func_149() && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0)) && unk_0xA6DB27D19ECBB7DA(bLocal_285))
				{
					if (!func_71())
					{
						func_4(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
					{
						bLocal_57 = unk_0xB6997A7EB3F5C8C0();
					}
					func_112(1);
				}
			}
		}
		else if (!iLocal_265)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 25f, 25f, 25f, false, true, 0))
				{
					func_27();
					unk_0x4EDE34FBADD967A6(false);
					func_4(&uLocal_100, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_265 = 1;
				}
			}
		}
	}
}

int func_112(int iParam0)
{
	if (func_116())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_45(Global_113375))
		{
			func_113(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_45(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_114(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
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

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_43052);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(bLocal_51, true), 3f))
			{
				unk_0xAAA34F8A7CB32098(bLocal_51);
				unk_0x6B76DC1F3AE6E6A3(bLocal_51, 99, false);
			}
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (unk_0xD5037BA82E12416F(unk_0xB6997A7EB3F5C8C0()) < 3f)
				{
					unk_0x428CA6DBD1094446(bLocal_51, true);
				}
				else
				{
					unk_0x428CA6DBD1094446(bLocal_51, false);
					if (unk_0x17FFC1B2BA35A494(unk_0xB6997A7EB3F5C8C0(), bLocal_51))
					{
						unk_0xAAA34F8A7CB32098(bLocal_51);
						unk_0x6B76DC1F3AE6E6A3(bLocal_51, 99, false);
					}
				}
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 2f, 2f, 2f, false, true, 0))
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (func_66(1, 0, 1))
					{
						if (!iLocal_275)
						{
							func_112(1);
							func_58(1, 1, 1, 0, 0, 0, 0);
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
							unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
							unk_0x8DFCED7A656F8802(true);
							unk_0xA6294919E56FF02A(false);
							unk_0xA0EBB943C300E693(false);
							if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
							{
								unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(bLocal_51, true), 5f, true, false, false, false);
								unk_0xDD19FA1C6D657305(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 5f);
							}
							if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
							{
								if (unk_0x751B70C3D034E187(unk_0xB6997A7EB3F5C8C0(), bLocal_51, 5f, 5f, 5f, false, true, 0))
								{
									unk_0x06843DA7060A026B(unk_0xB6997A7EB3F5C8C0(), unk_0x3FEF770D40960D5A(bLocal_51, true) - Vector(1.5f, 4f, 3f), true, false, false, true);
									unk_0x49733E92263139D1(unk_0xB6997A7EB3F5C8C0(), 5f);
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
							{
								bLocal_282 = unk_0x8C18E0F9080ADD73(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								bLocal_98 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
								unk_0x734292F4F0ABF6D0(bLocal_282, 0.158f);
								unk_0xE32EFE9AB4A9AA0C(bLocal_98, bLocal_282, "untie_cam", "re@stag_do@");
								unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
								unk_0xAAA34F8A7CB32098(bLocal_51);
								unk_0xEEA929141F699854(bLocal_51, bLocal_282, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
								unk_0x2208438012482A1A(bLocal_51, false, false);
								unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), bLocal_282, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
								unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
								unk_0x026FB97D0A425F84(bLocal_98, true);
								unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
								iLocal_275 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_275 && !iLocal_277)
	{
		func_27();
		unk_0x4EDE34FBADD967A6(false);
		if (func_16() == 0)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_16() == 1)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_16() == 2)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_277 = 1;
	}
	if (iLocal_275 && !iLocal_276)
	{
		if (!iLocal_280)
		{
			if (unk_0xE4A310B1D7FA73CC(bLocal_282) > 0.2f && unk_0xE4A310B1D7FA73CC(bLocal_282) < 0.3f)
			{
				unk_0xE65F427EB70AB1ED(-1, "ROPE_CUT", unk_0xD80958FC74E988A6(), "ROPE_CUT_SOUNDSET", false, 0);
				iLocal_280 = 1;
			}
		}
		if (unk_0xE4A310B1D7FA73CC(bLocal_282) > 0.4647059f && !iLocal_281)
		{
			if (unk_0x8D4D46230B2C353A() == 4)
			{
				unk_0x2206BF9A37B7F724("CamPushInNeutral", false, false);
				unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_281 = 1;
			}
		}
		if (unk_0xE4A310B1D7FA73CC(bLocal_282) > 0.5f)
		{
			iLocal_276 = 1;
		}
		if (func_123(1000))
		{
			unk_0x891B5B39AC6302AF(800);
			while (unk_0x797AC7CB535BA28F())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			iLocal_276 = 1;
			iLocal_279 = 1;
		}
	}
	if (iLocal_276 && !iLocal_278)
	{
		if (unk_0x7239B21A38F536BA(bLocal_58))
		{
			unk_0x961AC54BF0613F5D(bLocal_58, true, true);
		}
		unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -936.6537f, 2767.497f, 24.4289f, true, false, false, true);
		unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 208.4017f);
		unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
		unk_0x026FB97D0A425F84(bLocal_98, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x865908C81A2C22E9(bLocal_98, false);
		unk_0xB4EC2312F4E5B1F1(0f);
		unk_0x6D0858B8EDFD2B7D(-7f, 1f);
		func_58(0, 1, 1, 0, 0, 0, 0);
		unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
		unk_0xA6294919E56FF02A(true);
		unk_0xA0EBB943C300E693(true);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			unk_0x428CA6DBD1094446(bLocal_51, false);
			unk_0xAAA34F8A7CB32098(bLocal_51);
			unk_0xB128377056A54E2A(bLocal_51, true);
			unk_0x06843DA7060A026B(bLocal_51, -935.6716f, 2767.772f, 24.4289f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(bLocal_51, 136.9073f);
			unk_0x2208438012482A1A(bLocal_51, false, false);
		}
		if (iLocal_279)
		{
			unk_0xD4E8E24955024033(800);
			while (unk_0x5C544BC6C57AC575())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			iLocal_279 = 0;
		}
		iLocal_281 = 0;
		iLocal_278 = 1;
	}
	if (iLocal_278 && !unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if ((((((unk_0x751B70C3D034E187(bLocal_51, unk_0xB6997A7EB3F5C8C0(), 20f, 20f, 20f, false, true, 0) && unk_0xA7C4F2C6E744A550(unk_0xB6997A7EB3F5C8C0()) >= 1) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()))) && unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()) != joaat("rhino"))
			{
				unk_0xE8854A4326B9E12B(&iLocal_77);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2048, 3);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 6500);
				unk_0xC20E50AA46D09CA8(false, unk_0xB6997A7EB3F5C8C0(), -1, false, 1f, 1, 0);
				unk_0x39E72BC99E6360CB(iLocal_77);
				unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
				unk_0x3841422E9C488D8C(&iLocal_77);
			}
			else if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
				unk_0x3DBFC55D5C9BB447(bLocal_51, true);
				unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
			}
		}
		else if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
		{
			unk_0x9F3480FE65DB31B5(bLocal_51, func_73());
			unk_0x3DBFC55D5C9BB447(bLocal_51, true);
			unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
		}
		unk_0x9F8AA94D6D97DBF4(bLocal_51, false);
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		bLocal_284 = func_29(Local_59, 1);
		iLocal_78 = 1;
		bLocal_80 = true;
		unk_0xF66A602F829E2A06("re@stag_do@");
		unk_0xF66A602F829E2A06("re@stag_do@idle_a");
		iLocal_269 = func_80(func_81());
		iLocal_271 = iLocal_269 + 5;
		iLocal_268 = func_104(func_81());
		if (iLocal_268 >= 30)
		{
			iLocal_270 = 0;
			iLocal_271++;
		}
		if (iLocal_271 > 24)
		{
			iLocal_271 = (iLocal_271 - 24);
		}
		if (iLocal_271 == 0)
		{
			sLocal_266 = "stagd_ptime0";
		}
		else if (iLocal_271 == 1)
		{
			sLocal_266 = "stagd_ptime1";
		}
		else if (iLocal_271 == 2)
		{
			sLocal_266 = "stagd_ptime2";
		}
		else if (iLocal_271 == 3)
		{
			sLocal_266 = "stagd_ptime3";
		}
		else if (iLocal_271 == 4)
		{
			sLocal_266 = "stagd_ptime4";
		}
		else if (iLocal_271 == 5)
		{
			sLocal_266 = "stagd_ptime5";
		}
		else if (iLocal_271 == 6)
		{
			sLocal_266 = "stagd_ptime6";
		}
		else if (iLocal_271 == 7)
		{
			sLocal_266 = "stagd_ptime7";
		}
		else if (iLocal_271 == 8)
		{
			sLocal_266 = "stagd_ptime8";
		}
		else if (iLocal_271 == 9)
		{
			sLocal_266 = "stagd_ptime9";
		}
		else if (iLocal_271 == 10)
		{
			sLocal_266 = "stagd_ptim10";
		}
		else if (iLocal_271 == 11)
		{
			sLocal_266 = "stagd_ptim11";
		}
		else if (iLocal_271 == 12)
		{
			sLocal_266 = "stagd_ptim12";
		}
		else if (iLocal_271 == 13)
		{
			sLocal_266 = "stagd_ptim13";
		}
		else if (iLocal_271 == 14)
		{
			sLocal_266 = "stagd_ptim14";
		}
		else if (iLocal_271 == 15)
		{
			sLocal_266 = "stagd_ptim15";
		}
		else if (iLocal_271 == 16)
		{
			sLocal_266 = "stagd_ptim16";
		}
		else if (iLocal_271 == 17)
		{
			sLocal_266 = "stagd_ptim17";
		}
		else if (iLocal_271 == 18)
		{
			sLocal_266 = "stagd_ptim18";
		}
		else if (iLocal_271 == 19)
		{
			sLocal_266 = "stagd_ptim19";
		}
		else if (iLocal_271 == 20)
		{
			sLocal_266 = "stagd_ptim20";
		}
		else if (iLocal_271 == 21)
		{
			sLocal_266 = "stagd_ptim21";
		}
		else if (iLocal_271 == 22)
		{
			sLocal_266 = "stagd_ptim22";
		}
		else if (iLocal_271 == 23)
		{
			sLocal_266 = "stagd_ptim23";
		}
	}
}

int func_123(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9CD27B0045628463();
		}
		Global_28 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			if (func_124())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_124()
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

void func_125()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x0A7B270912999B3C(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				unk_0xAD738C3085FE7E11(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true, false);
			}
		}
		bLocal_97 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(bLocal_51, false), 30f, false, 4);
		if (!unk_0x5F9532F3B5CC2551(bLocal_97, false))
		{
			if (!unk_0x22AC59A870E6A669(bLocal_97, -1, false))
			{
				if (unk_0x751B70C3D034E187(bLocal_97, bLocal_51, 30f, 30f, 30f, false, true, 0))
				{
					unk_0xAD738C3085FE7E11(bLocal_97, true, false);
					if (unk_0x4C241E39B23DF959(bLocal_97, false))
					{
						unk_0x9C8C6504B5B63D2C(bLocal_97, 3000, false, false);
						if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
						{
							if (!func_71() && !iLocal_79)
							{
								func_4(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0x629BFA74418D6239(&bLocal_97);
				}
			}
		}
	}
}

void func_126()
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

void func_127()
{
	func_128(39, 1);
	func_128(40, 1);
	func_128(41, 1);
	func_128(42, 1);
	func_128(43, 1);
	func_128(44, 1);
	unk_0x963D27A58DF860AC(joaat("u_m_y_staggrm_01"));
	unk_0x963D27A58DF860AC(joaat("superd"));
	unk_0x963D27A58DF860AC(joaat("prop_stag_do_rope"));
	while ((!unk_0x98A4EB5D89A0C952(joaat("u_m_y_staggrm_01")) || !unk_0x98A4EB5D89A0C952(joaat("superd"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	unk_0xD3BD40951412FEF6("re@stag_do@");
	unk_0xD3BD40951412FEF6("re@stag_do@idle_a");
	unk_0x2F844A8B08D76685("ROPE_CUT", false, -1);
	while ((!unk_0xD031A9162D01088C("re@stag_do@") || !unk_0xD031A9162D01088C("re@stag_do@idle_a")) || !unk_0x2F844A8B08D76685("ROPE_CUT", false, -1))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	bLocal_51 = unk_0xD49F9B0955C367DE(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	unk_0x6C8065A3B780185B(bLocal_51, "GROOM");
	unk_0xC80A74AC829DDD92(bLocal_51, joaat("player"));
	unk_0x9F8AA94D6D97DBF4(bLocal_51, true);
	unk_0xA9C8960E8684C1B5(bLocal_51, false);
	unk_0x262B14F48D29DE80(bLocal_51, 2, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_51, 0, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_51, 3, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_51, 4, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_51, 11, true, false, 0);
	unk_0xEB8517DDA73720DA(bLocal_51, joaat("empty"));
	unk_0x4D9CA1009AFBD057(bLocal_51, 3);
	unk_0x1913FE4CBF41C463(bLocal_51, 206, true);
	unk_0x1913FE4CBF41C463(bLocal_51, 134, true);
	bLocal_58 = unk_0x509D5878EB39E842(joaat("prop_stag_do_rope"), unk_0x3FEF770D40960D5A(bLocal_51, true), true, true, false);
	unk_0x6B9BBD38AB0796DF(bLocal_58, bLocal_51, unk_0x3F428D08BE5AAE31(bLocal_51, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	bLocal_55 = unk_0xAF35D0D2583051B0(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	unk_0x92F0CF722BC4202F(bLocal_55, true);
	unk_0x79D3B596FE44EE8B(bLocal_55, 0f);
	unk_0xB664292EAECF7FA6(bLocal_55, 3);
	unk_0x1F2AA07F00B3217A(bLocal_55, 0);
	unk_0x43FEB945EE7F85B8(bLocal_55, 0, 73, false);
	unk_0x816562BADFDEC83E(bLocal_55, 2, 48);
	unk_0x6AF0636DDEDCB6DD(bLocal_55, 11, true, false);
	unk_0x6AF0636DDEDCB6DD(bLocal_55, 12, true, false);
	unk_0x81A15811460FAB3A(joaat("superd"), 3);
	unk_0x5927F96A78577363(bLocal_55, 10000);
	unk_0x93AE6A61BE015BF1(bLocal_55, 5f);
	unk_0xB72E26D81006005B(bLocal_55);
	Local_63 = { -352.88f, 6164.31f, 30.5f };
	Local_64 = { -355.2565f, 6164.931f, 30.2944f };
	Local_65 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_66 = 25.375f;
	Local_67 = { -343.5804f, 6156.198f, 30.489f };
	Local_68 = { -1991.126f, 457.991f, 101.1808f };
	Local_69 = { -2002.69f, 460.539f, 99.828f };
	Local_70 = { -1997.605f, 445.6651f, 105.0519f };
	Local_71 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_72 = 24.6875f;
	Local_73 = { -2205.351f, 4298.79f, 47.265f };
	Local_74 = { -2207.525f, 4301.697f, 47.1803f };
	Local_75 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_76 = 12.5625f;
	Local_59 = { Local_68 };
	Local_60 = { Local_69 };
	Local_61 = { Local_70 };
	bLocal_62 = fLocal_72;
	unk_0x0FC2D89AC25A5814(joaat("superd"), true);
	unk_0xC12321827687FE4D(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), false, true);
	unk_0x1B5C85C612E5256E(Local_67 - Vector(20f, 20f, 20f), Local_67 + Vector(20f, 20f, 20f), false, true, true, true);
	unk_0x1B5C85C612E5256E(unk_0x3FEF770D40960D5A(bLocal_51, false) - Vector(10f, 10f, 10f), unk_0x3FEF770D40960D5A(bLocal_51, false) + Vector(10f, 10f, 10f), false, true, true, true);
	unk_0x1B5C85C612E5256E(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), false, true, true, true);
	unk_0x1B5C85C612E5256E(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), false, true, true, true);
	unk_0xBE31FD6CE464AC59(unk_0x3FEF770D40960D5A(bLocal_51, true), 10f, 0);
	if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
	{
		unk_0xE8854A4326B9E12B(&iLocal_77);
		unk_0xEA47FE3719165B94(false, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, false, false, false, false);
		unk_0x39E72BC99E6360CB(iLocal_77);
		unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
		unk_0x3841422E9C488D8C(&iLocal_77);
		unk_0x971D38760FBC02EF(bLocal_51, true);
	}
	if (func_16() == 0)
	{
		func_96(&uLocal_100, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1)
	{
		func_96(&uLocal_100, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2)
	{
		func_96(&uLocal_100, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	func_96(&uLocal_100, 3, bLocal_51, "GROOM", 0, 1);
	iLocal_48 = 1;
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_135(iParam0, 2, 1))
		{
			func_134(iParam0, 2, 1);
		}
	}
	else if (func_135(iParam0, 2, 1))
	{
		func_129(iParam0, 2, 1);
	}
}

void func_129(int iParam0, bool bParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			bVar0 = func_132(func_133(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_130(func_133(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_130(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_131(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_133(int iParam0)
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

void func_134(int iParam0, bool bParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			bVar0 = func_132(func_133(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_130(func_133(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			return BitTest(func_132(func_133(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_136()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_137(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar5 = func_50();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_138(iVar1, &Var0);
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

void func_138(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
		
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
		
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
		
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_140(int iParam0)
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

struct<2> func_141(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_142(iParam0) };
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

struct<2> func_142(int iParam0)
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

int func_143()
{
	if (func_146() && !func_147())
	{
		return 1;
	}
	if (func_145() && func_144())
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_113104 > 0;
}

int func_145()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_147()
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

int func_148()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_143())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	if ((Global_113375 == func_54() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_152(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_151();
}

void func_151()
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

void func_152(int iParam0)
{
	Global_113375 = iParam0;
}

int func_153(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_54();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_147())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_35(0))
		{
			return 0;
		}
		if (func_143())
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_137(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_179(iParam1))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_178(func_16()) == 4 || func_178(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_177(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_176(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_175())
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
		if (!func_166(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_165(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_165(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_179(30) && !func_165(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_164(bVar4))
				{
					if (func_155(iVar2))
					{
						if (!func_154(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_16() != iVar2)
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

bool func_154(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_155(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_156(bVar0);
}

int func_156(bool bParam0)
{
	return func_157(bParam0, 1);
}

int func_157(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_164(bParam0))
	{
		return 0;
	}
	func_158(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_159(func_81(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_159(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_163(bParam0, bParam1))
	{
		bVar0 = func_88(bParam1);
		iVar1 = func_86(bParam0);
		iVar2 = (func_86(bParam0) - func_86(bParam1));
		iVar3 = (func_88(bParam0) - func_88(bParam1));
		iVar4 = (func_162(bParam0) - func_162(bParam1));
		iVar5 = (func_80(bParam0) - func_80(bParam1));
		iVar6 = (func_104(bParam0) - func_104(bParam1));
		iVar7 = (func_161(bParam0) - func_161(bParam1));
	}
	else
	{
		bVar0 = func_88(bParam0);
		iVar1 = func_86(bParam1);
		iVar2 = (func_86(bParam1) - func_86(bParam0));
		iVar3 = (func_88(bParam1) - func_88(bParam0));
		iVar4 = (func_162(bParam1) - func_162(bParam0));
		iVar5 = (func_80(bParam1) - func_80(bParam0));
		iVar6 = (func_104(bParam1) - func_104(bParam0));
		iVar7 = (func_161(bParam1) - func_161(bParam0));
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
		iVar4 = (iVar4 + func_85(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_160(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_160(bool bParam0, float fParam1, float fParam2)
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

int func_161(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_162(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_163(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_164(bParam1) || !func_164(bParam0))
	{
		return 1;
	}
	iVar0 = func_86(bParam0);
	iVar1 = func_86(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_88(bParam0);
	iVar1 = func_88(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_162(bParam0);
	iVar1 = func_162(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_80(bParam0);
	iVar1 = func_80(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(bParam0);
	iVar1 = func_104(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_161(bParam0);
	iVar1 = func_161(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_164(bool bParam0)
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
	iVar0 = func_161(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_104(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_80(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_86(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_88(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_162(bParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_174()) || Global_112433) || Global_31962) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_170()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_174()) || Global_31962) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_174()) || Global_112433) || Global_31962) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_174()) || Global_112433) || Global_31962) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_174() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_24(8, -1)) || func_169()) || func_168()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_172()) || func_171()) || func_168()) || func_167())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_174()) || Global_31962) || func_173()) || func_24(8, -1)) || func_171()) || func_170()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_174()) || func_171()) || Global_112433) || Global_31962) || func_173()) || Global_44238) || func_24(8, -1)) || func_170()) || func_168()) || func_169()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_174()) || Global_112433) || Global_31962) || func_173()) || func_24(8, -1)) || func_170()) || func_168()) || func_172()) || func_171()) || func_169())
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

var func_167()
{
	return Global_100480.f_1;
}

int func_168()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_169()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
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

bool func_171()
{
	return Global_100493.f_376 > 0;
}

bool func_172()
{
	return Global_100493.f_375 > 0;
}

var func_173()
{
	return Global_1575058;
}

int func_174()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_175()
{
	func_15();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_176(bool bParam0)
{
	return func_163(func_81(), bParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_178(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_181())
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

int func_180()
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

int func_181()
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

int func_182(int iParam0, int iParam1)
{
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_183()
{
	if (iLocal_49)
	{
		func_221(0);
		unk_0xC12321827687FE4D(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), true, true);
		unk_0xD37401D78A929A49();
		func_27();
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		if (!unk_0x5F9532F3B5CC2551(bLocal_57, false))
		{
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_57, false) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_57, 50f, 50f, 50f, false, true, 0))
			{
				func_195(bLocal_57, 0, 145);
			}
		}
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_67, 100f, 100f, 100f, false, true, 0))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51) && !unk_0x84A2DD9AC37C35C1(bLocal_53))
			{
				unk_0xE8854A4326B9E12B(&iLocal_77);
				unk_0x15D3A79D4E44B913(false, -330.36f, 6154.03f, 31.8f, 1f, -1, 0.25f, false, 1193033728);
				unk_0x8C338E0263E4FD19(false, bLocal_53, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x39E72BC99E6360CB(iLocal_77);
				unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_77);
				unk_0x3841422E9C488D8C(&iLocal_77);
				unk_0xE8854A4326B9E12B(&iLocal_77);
				unk_0x15D3A79D4E44B913(false, -330.36f, 6155.03f, 31.8f, 1f, -1, 0.25f, false, 1193033728);
				unk_0x8C338E0263E4FD19(false, bLocal_51, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x39E72BC99E6360CB(iLocal_77);
				unk_0x5ABA3986D90D8A3B(bLocal_53, iLocal_77);
				unk_0x3841422E9C488D8C(&iLocal_77);
			}
		}
		unk_0x629BFA74418D6239(&bLocal_97);
		unk_0x629BFA74418D6239(&bLocal_55);
		if (!unk_0x424D4687FA1E5652(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			unk_0x1913FE4CBF41C463(bLocal_51, 317, true);
			if (!unk_0xB346476EF1A64897(bLocal_51))
			{
				unk_0x428CA6DBD1094446(bLocal_51, false);
			}
			unk_0xED74007FFB146BC2(bLocal_51);
			unk_0x9F8AA94D6D97DBF4(bLocal_51, false);
		}
		else if (unk_0x7239B21A38F536BA(bLocal_58))
		{
			unk_0x961AC54BF0613F5D(bLocal_58, true, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_51);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
		{
			unk_0x1913FE4CBF41C463(bLocal_53, 317, true);
			unk_0x9F8AA94D6D97DBF4(bLocal_53, false);
		}
		unk_0x2595DD4236549CE3(&bLocal_53);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_52))
		{
			unk_0x9F8AA94D6D97DBF4(bLocal_52, false);
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_54))
		{
			unk_0x9F8AA94D6D97DBF4(bLocal_54, false);
		}
		unk_0x2595DD4236549CE3(&bLocal_52);
	}
	func_184(-1);
	unk_0x1090044AD1DA76FA();
}

void func_184(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_149())
	{
		func_188(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_187(30000);
		StringCopy(&cVar0, func_186(Global_113375, 1), 64);
		if (func_53(Global_113375) > 0)
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
	func_185(&Global_32019);
	Global_113376 = 0;
	func_152(-1);
}

void func_185(var uParam0)
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

char* func_186(int iParam0, bool bParam1)
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

void func_187(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_188(int iParam0)
{
	func_189(iParam0, 0, func_194(iParam0));
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_81();
	func_192(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_191(iParam0, &uVar0);
	Var1 = { func_190(&uVar0) };
}

struct<16> func_190(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_80(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_161(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_162(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_88(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_86(*uParam0), 64);
	return Var0;
}

void func_191(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	bVar2 = func_162(*uParam0);
	bVar3 = func_80(*uParam0);
	bVar4 = func_104(*uParam0);
	bVar5 = func_161(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_193(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_193(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_91(uParam0, bParam1);
	func_90(uParam0, bParam2);
	func_89(uParam0, bParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, bParam4);
	func_82(uParam0, iParam6);
}

int func_194(int iParam0)
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

int func_195(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	
	if (iParam1 == 0)
	{
		bVar1 = unk_0xA6E9C38DB51D7748(bParam0, &uVar0);
		if (!unk_0xCA042B6957743895(bVar1))
		{
			if (unk_0xD24D37CC275948CC(bVar1) == unk_0xD24D37CC275948CC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_196(bParam0, iParam2);
	return 1;
}

void func_196(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_202(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = unk_0xBB40DD2270B65366(bParam0, -1, false);
		if (!unk_0x7239B21A38F536BA(bVar0))
		{
			bVar0 = unk_0x83F969AA1EE2A664(bParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(bVar0) && !unk_0x84A2DD9AC37C35C1(bVar0))
		{
			if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = bParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_197(bParam0, &(Global_113386.f_32749.f_5510));
}

void func_197(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_201(uParam1);
		uParam1->f_66 = unk_0x9F47B058362C84B5(bParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(bParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(bParam0);
		unk_0xA19435F193E081AC(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x0EE21293DAD47C95(bParam0);
		uParam1->f_67 = unk_0x2BB9230590DA5E8A(bParam0);
		uParam1->f_69 = unk_0xB3ED1BFB4BE636DC(bParam0);
		uParam1->f_70 = unk_0x25BC98A59C2EA962(bParam0);
		unk_0x8389CD56CA8072DC(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7619EEE8C886757F(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8C4B92553E4766A5(bParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 28);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 29);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 30);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_200(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			uParam1->f_68 = unk_0xF8C397922FC03F41(bParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_66))
		{
			if (unk_0x4198AB0022B15F87(bParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(bParam0))
				{
					case 3:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 10);
		}
		if (unk_0xF095C0405307B21B(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 13);
			unk_0xB64CF2CCA9D95F52(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x910A32E7AAD2656C(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 12);
		}
		func_199(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_198(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 11);
		}
		if (unk_0x05661B80A8C9165F(bParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(bParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 27);
		}
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_199(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < *uParam1)
	{
		bVar1 = bVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			(*uParam1)[bVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				(*uParam1)[bVar0] = 1;
			}
		}
		else if (bVar1 == 22)
		{
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*bParam0))
				{
					case 255:
						(*uParam1)[bVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[bVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[bVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[bVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[bVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[bVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[bVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[bVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[bVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[bVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[bVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[bVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[bVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[bVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[bVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[bVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[bVar0] = unk_0x772960298DA26FDB(*bParam0, bVar0) + 1;
			if (bVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
			else if (bVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_201(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_202(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_219(bParam0, 0, 0)) || func_219(bParam0, 1, 0)) || func_219(bParam0, 2, 0)) || func_218(bParam0) != 145) || func_217(bParam0)) || func_216(bParam0)) || func_215(bParam0)) || func_214(bParam0)) || !func_203(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_216(bParam0))
		{
		}
		if (func_216(bParam0))
		{
		}
		if (func_219(bParam0, 0, 0))
		{
		}
		if (func_219(bParam0, 1, 0))
		{
		}
		if (func_219(bParam0, 2, 0))
		{
		}
		if (func_218(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_203(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_204(bParam0, 0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)) || unk_0xDCE4334788AF94EA(bParam0)) || unk_0xAB935175B22E822B(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_204(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(bParam0))
	{
		return 0;
	}
	if (((((bParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7()) || (bParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (bParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || bParam0 == joaat("blimp2")) || (bParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7()))
	{
		if (!func_181())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("blimp"))
	{
		if ((((!func_213() && !func_212()) && !func_211()) && !func_210()) && !func_181())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_209() || unk_0x48AF36444B965238()) || func_208())
		{
		}
		else if (!func_211())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_207(bParam0))
		{
			return 0;
		}
	}
	if (!func_205(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_205(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_206())
	{
		return 1;
	}
	unk_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (bParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBD4D7EAF8A30F637(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_207(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	bVar1 = unk_0x9A73240B49945C76();
	if (bParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && bVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && bVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("virgo3") || bParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && bVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && bVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && bVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && bVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && bVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && bVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && bVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && bVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && bVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && bVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && bVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && bVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && bVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && bVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && bVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && bVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && bVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && bVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && bVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && bVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && bVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && bVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && bVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && bVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && bVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && bVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && bVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && bVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && bVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && bVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && bVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && bVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && bVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && bVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && bVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && bVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && bVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && bVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && bVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && bVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && bVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && bVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && bVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && bVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && bVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && bVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && bVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && bVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && bVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && bVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && bVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && bVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && bVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && bVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && bVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && bVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && bVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && bVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && bVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && bVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && bVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && bVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && bVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && bVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && bVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && bVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && bVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && bVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && bVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && bVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && bVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && bVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && bVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && bVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && bVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && bVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && bVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && bVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && bVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && bVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && bVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && bVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && bVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && bVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && bVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && bVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && bVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && bVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && bVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && bVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && bVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && bVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && bVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && bVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && bVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && bVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && bVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && bVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && bVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && bVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && bVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && bVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && bVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && bVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && bVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && bVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && bVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && bVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && bVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && bVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && bVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && bVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && bVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && bVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && bVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && bVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && bVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && bVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && bVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && bVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && bVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && bVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && bVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && bVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && bVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && bVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && bVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && bVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && bVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && bVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && bVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && bVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && bVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && bVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && bVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && bVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && bVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && bVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && bVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && bVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && bVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && bVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && bVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && bVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && bVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && bVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && bVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && bVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && bVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && bVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && bVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && bVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && bVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && bVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && bVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && bVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && bVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && bVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && bVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && bVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("monster3"))
	{
	}
	else if (bParam0 == joaat("cerberus"))
	{
	}
	else if (bParam0 == joaat("cerberus2"))
	{
	}
	else if (bParam0 == joaat("cerberus3"))
	{
	}
	else if (bParam0 == joaat("brutus"))
	{
	}
	else if (bParam0 == joaat("brutus2"))
	{
	}
	else if (bParam0 == joaat("brutus3"))
	{
	}
	else if (bParam0 == joaat("scarab"))
	{
	}
	else if (bParam0 == joaat("scarab2"))
	{
	}
	else if (bParam0 == joaat("scarab3"))
	{
	}
	else if (bParam0 == joaat("imperator"))
	{
	}
	else if (bParam0 == joaat("imperator2"))
	{
	}
	else if (bParam0 == joaat("imperator3"))
	{
	}
	else if (bParam0 == joaat("zr380"))
	{
	}
	else if (bParam0 == joaat("zr3802"))
	{
	}
	else if (bParam0 == joaat("zr3803"))
	{
	}
	else if (bParam0 == joaat("impaler"))
	{
	}
	else if (bParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && bVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && bVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && bVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && bVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && bVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && bVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && bVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && bVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && bVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && bVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && bVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && bVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && bVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && bVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && bVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && bVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && bVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && bVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && bVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && bVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && bVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && bVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && bVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && bVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && bVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && bVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && bVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && bVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && bVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && bVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && bVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && bVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && bVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && bVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && bVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && bVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && bVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && bVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && bVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && bVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && bVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && bVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && bVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && bVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && bVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && bVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && bVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && bVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && bVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && bVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && bVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && bVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && bVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && bVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && bVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && bVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && bVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && bVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && bVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && bVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && bVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && bVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && bVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && bVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && bVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && bVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && bVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && bVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && bVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && bVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && bVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && bVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && bVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && bVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && bVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && bVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && bVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && bVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && bVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && bVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && bVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && bVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && bVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && bVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && bVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && bVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && bVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && bVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && bVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && bVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && bVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && bVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && bVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && bVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && bVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && bVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && bVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && bVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && bVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && bVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && bVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && bVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && bVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && bVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && bVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && bVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && bVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && bVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && bVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && bVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && bVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && bVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && bVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && bVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && bVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && bVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && bVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && bVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && bVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && bVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && bVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && bVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && bVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && bVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && bVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && bVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && bVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && bVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && bVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && bVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && bVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && bVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && bVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && bVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && bVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && bVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && bVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && bVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_208()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_209()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_210()
{
	return 0;
}

int func_211()
{
	return 1;
}

int func_212()
{
	return 1;
}

int func_213()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_214(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_204(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_215(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == bParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_216(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_97772[iVar0]) && unk_0x4C241E39B23DF959(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == bParam0 && unk_0x9F47B058362C84B5(Global_97772[iVar0]) == unk_0x9F47B058362C84B5(bParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_217(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_77137.f_484[24]))
	{
		if (bParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_218(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_219(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_220(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_221(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_128(iVar0, bParam0);
		iVar0++;
	}
}

