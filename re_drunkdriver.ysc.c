#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	struct<3> Local_62 = { 0, 0, 0 } ;
	bool bLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	bool bLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_72 = 0;
	bool bLocal_73[2] = { 0, 0 };
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<6> Local_117 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_118[24] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	bool bLocal_124 = 0;
	struct<3> Local_125 = { 0, 0, 0 } ;
	var uLocal_126[2] = { 0, 0 };
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	struct<3> Local_129 = { 0, 0, 0 } ;
	int iLocal_130 = 0;
	float fLocal_131 = 0f;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 16;
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
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
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
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	bool bLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<2> Local_311 = { 0, 5 } ;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 5;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	iLocal_49 = unk_0x4A9923385BDB9DAD();
	iLocal_50 = unk_0x186E5D252FA50E7D();
	Local_71 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_104 = -1;
	StringCopy(&Local_117, "", 24);
	iLocal_132 = -1;
	Local_306 = { -1017.345f, -1354.196f, 4.4568f };
	Local_307 = { 2003.456f, 3071.102f, 46.0499f };
	Local_55 = { ScriptParam_311.f_1[0 /*3*/] };
	func_280();
	if (unk_0xC968670BFACE42D9(11))
	{
		func_240();
	}
	if (func_198(Local_55, 27, bLocal_308, 0, 0))
	{
		func_195(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	iLocal_128 = unk_0x9CD27B0045628463();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (unk_0xC5042CC6F5E3D450() || iLocal_58)
		{
			if (!func_194())
			{
				if (func_193())
				{
					func_240();
				}
			}
			unk_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_51)
			{
				case 0:
					if (iLocal_54)
					{
						iLocal_139 = 1;
						iLocal_51 = 1;
					}
					else
					{
						if (func_181())
						{
							func_240();
						}
						if (!bLocal_56)
						{
							func_180();
						}
						if (bLocal_56)
						{
							func_179();
						}
					}
					break;
				
				case 1:
					func_172();
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						func_171();
						func_168();
						if (iLocal_52 == 1 && !unk_0x7239B21A38F536BA(bLocal_73[1]))
						{
							func_76();
							if (func_74() || unk_0x5F9532F3B5CC2551(bLocal_74, false))
							{
								if (unk_0x7239B21A38F536BA(bLocal_73[0]))
								{
									if (!unk_0x5F9532F3B5CC2551(bLocal_73[0], false))
									{
										if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
										{
											unk_0xED74007FFB146BC2(bLocal_73[0]);
										}
										unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
										unk_0x22B0D0E37CCB840D(bLocal_73[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
										func_70(bLocal_73[0], 120000, 0);
										unk_0x971D38760FBC02EF(bLocal_73[0], true);
										func_68();
										unk_0x4EDE34FBADD967A6(false);
										func_67(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_66();
							}
						}
						if (iLocal_52 == 2 || (iLocal_52 == 1 && unk_0x7239B21A38F536BA(bLocal_73[1])))
						{
							func_76();
							if (iLocal_53 != 9)
							{
								if (func_74() || unk_0x5F9532F3B5CC2551(bLocal_74, false))
								{
									if (unk_0x7239B21A38F536BA(bLocal_73[0]))
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
										{
											if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
											{
												unk_0xED74007FFB146BC2(bLocal_73[0]);
											}
											unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
											unk_0x22B0D0E37CCB840D(bLocal_73[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
											func_70(bLocal_73[0], 120000, 0);
											unk_0x971D38760FBC02EF(bLocal_73[0], true);
										}
									}
									if (unk_0x7239B21A38F536BA(bLocal_73[1]))
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
										{
											if (unk_0x5891CAC5D4ACFF74(bLocal_73[1]))
											{
												unk_0xED74007FFB146BC2(bLocal_73[1]);
											}
											unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
											unk_0x22B0D0E37CCB840D(bLocal_73[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
											func_70(bLocal_73[1], 120000, 0);
											unk_0x971D38760FBC02EF(bLocal_73[1], true);
										}
									}
									if (iLocal_52 == 1)
									{
										func_68();
										unk_0x4EDE34FBADD967A6(false);
										func_67(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_52 == 2)
									{
										func_68();
										unk_0x4EDE34FBADD967A6(false);
										func_67(&uLocal_140, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_66();
								}
							}
						}
						if (unk_0x7239B21A38F536BA(bLocal_73[0]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								unk_0x433083750C5E064A(bLocal_73[0], 1f);
							}
						}
						if (unk_0x7239B21A38F536BA(bLocal_73[1]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
							{
								unk_0x433083750C5E064A(bLocal_73[1], 1f);
							}
						}
					}
					if ((func_65() && !func_64()) && iLocal_53 != 9)
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							if (unk_0x20B60995556D004F(bLocal_73[0], Local_71, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_52 == 2)
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
									{
										if (!unk_0x5891CAC5D4ACFF74(bLocal_73[0]) && !unk_0x5891CAC5D4ACFF74(bLocal_73[1]))
										{
											unk_0x9F3480FE65DB31B5(bLocal_73[0], func_63());
											unk_0x9F3480FE65DB31B5(bLocal_73[1], func_63());
										}
									}
								}
								func_62(0);
								unk_0x4EDE34FBADD967A6(false);
								func_68();
								iLocal_53 = 9;
							}
						}
					}
					if (func_61())
					{
						if (unk_0x7239B21A38F536BA(bLocal_73[0]))
						{
							unk_0x9614299DCB53E54B(&(bLocal_73[0]));
						}
						if (unk_0x7239B21A38F536BA(bLocal_73[1]))
						{
							unk_0x9614299DCB53E54B(&(bLocal_73[1]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_240();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_52 == 1 && iLocal_53 == 7) && iLocal_60 == 5) && iLocal_90)
	{
		iLocal_128 = unk_0x9CD27B0045628463();
		if (func_2())
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				Local_129 = { unk_0x9A8D700A51CB7B0D(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (iLocal_52 == 1)
			{
				if (unk_0x7239B21A38F536BA(bLocal_73[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (unk_0x7239B21A38F536BA(bLocal_73[0]) && unk_0x7239B21A38F536BA(bLocal_73[1]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
					{
						if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xA3EE4A07279BB9DB(bLocal_73[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	if (iLocal_52 == 2)
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_74, 200f, 200f, 200f, false, true, 0))
			{
				return 1;
			}
			if (((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_OFFR")) && !func_33("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_AKB")) && !func_33("REDR2_TRY")) && !func_33("REDR2_JIC")) && !func_33("REDR2_CH")) && !func_33("REDR2_WH2")) && !func_33("REDR2_BCK")) && !func_33("REDR2_JIA")) && !func_33("REDR2_JIB")) && !func_33("REDR2_JIC")) && !func_33("REDR2_WHA")) && !func_33("REDR2_WHB")) && !func_33("REDR2_WHC")) && !func_33("REDR2_PSM")) && !func_33("REDR2_PSF")) && !func_33("REDR2_PST")) && !func_33("REDR2_TK"))
			{
				if (unk_0x8BAD02F0368D9E14(bLocal_74) && unk_0xEEF059FAD016D209(bLocal_74) < bLocal_68)
				{
					bLocal_68 = unk_0xEEF059FAD016D209(bLocal_74);
					func_5(0);
					func_68();
					unk_0x4EDE34FBADD967A6(false);
					func_67(&uLocal_140, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0x4C241E39B23DF959(bLocal_74, false) || unk_0xB497F06B288DCFDF(bLocal_74))
			{
				func_68();
				unk_0x4EDE34FBADD967A6(false);
				if (!func_4())
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							unk_0xBB9CE077274F6A1B(bLocal_73[0], 1193033728, 0);
							unk_0x971D38760FBC02EF(bLocal_73[0], true);
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							unk_0x6A071245EB0D1882(bLocal_73[1], bLocal_73[0], -1, 0f, 1f, 2f, 0);
							unk_0x971D38760FBC02EF(bLocal_73[1], true);
						}
						return 1;
					}
				}
			}
			if (unk_0x131D401334815E94(bLocal_74, false, 2) && unk_0xC86D67D52A707CF8(bLocal_74, unk_0xD80958FC74E988A6(), false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
					unk_0x22B0D0E37CCB840D(bLocal_73[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
					unk_0x22B0D0E37CCB840D(bLocal_73[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
				}
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

int func_4()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_116)
		{
			if (func_10(&uLocal_140, "REDR2AU", &cLocal_118, &Local_117, 8, 0, 0))
			{
				iLocal_116 = 0;
			}
		}
	}
	else if ((!iLocal_116 && unk_0x16754C556D2EDE3D()) && !func_33("REDR1_SWV"))
	{
		cLocal_118 = { func_9() };
		Local_117 = { func_8() };
		func_6();
		iLocal_116 = 1;
	}
}

void func_6()
{
	Global_20471 = 0;
	func_7();
}

void func_7()
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

struct<6> func_8()
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

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x4F8644AF03D0E0D6()))
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

bool func_14(bool bParam0)
{
	return func_15(bParam0, 20);
}

var func_15(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

int func_19()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
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

void func_21()
{
	if (func_28(14))
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
		Global_20266 = func_22();
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

int func_22()
{
	func_23();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_26(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_25(unk_0xD80958FC74E988A6());
			if (func_24(iVar0) && (!func_28(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_24(Global_113386.f_2363.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_33(bool bParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (iLocal_52 == 1)
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (iLocal_52 == 1)
	{
		if (!unk_0x7239B21A38F536BA(bLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (!unk_0x7239B21A38F536BA(bLocal_73[0]) && !unk_0x7239B21A38F536BA(bLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_36()
{
	while (!func_60())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	func_40(27, bLocal_308);
	func_37();
	func_240();
}

void func_37()
{
	func_38();
}

int func_38()
{
	if (func_39(0))
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

int func_39(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_40(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_57(iParam0))
	{
		func_56(iParam0, bParam1);
		if (!func_55(51))
		{
			func_51("RE_REWARD", 1, 0, 4000, 10000, func_54(), 0, 138, 0);
			func_50(51);
		}
		if (func_49(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_48(iParam0, bParam1) != 322)
		{
			func_42(func_48(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_41(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_113372 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)
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
		func_46((891 + iParam0), 1, -1);
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
		func_43();
	}
}

void func_43()
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
		func_45(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_44() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_31959;
}

int func_45(int iParam0, bool bParam1)
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

void func_46(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_47();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_47()
{
	return Global_1574918;
}

int func_48(int iParam0, bool bParam1)
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

int func_49(int iParam0)
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

void func_50(int iParam0)
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

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_52(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_53();
	}
}

void func_53()
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

int func_54()
{
	func_23();
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

int func_55(int iParam0)
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

void func_56(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_57(int iParam0)
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

int func_58()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_59(Var0);
	return uVar1;
}

int func_59(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_60()
{
	return 1;
}

int func_61()
{
	if (Global_32198)
	{
		func_41(4);
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
{
	Global_22616 = iParam0;
}

int func_63()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_64()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_32197;
}

void func_66()
{
	func_240();
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_68()
{
	Global_20471 = 0;
	func_69();
}

void func_69()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	iVar0 = func_73(bParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_72(bParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_71();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = bParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (bParam0 == unk_0xD80958FC74E988A6())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_71()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_74()
{
	unk_0xD4B8E3D1917BC86B(true);
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 1;
	}
	if ((unk_0x3F2023999AD51C1F(Local_125, 40f, true) || unk_0x3F2023999AD51C1F(func_75(unk_0x4F8644AF03D0E0D6()), 10f, false)) || unk_0x5270A8FBC098C3F8(Local_125 - Vector(40f, 40f, 40f), Local_125 + Vector(40f, 40f, 40f), false))
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
	{
		if (unk_0xC86D67D52A707CF8(bLocal_73[0], unk_0xD80958FC74E988A6(), true) || unk_0xCFB0A0D8EDD145A3(bLocal_73[0]))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_73[0], unk_0xB6997A7EB3F5C8C0(), true))
			{
				return 1;
			}
		}
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_73[0]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_73[0]))
			{
				if (unk_0x6CD5A433374D4CFB(bLocal_73[0], unk_0xD80958FC74E988A6()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_73[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_73[1], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_73[1], unk_0xB6997A7EB3F5C8C0(), true))
				{
					return 1;
				}
			}
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_73[1]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_73[1]))
				{
					if (unk_0x6CD5A433374D4CFB(bLocal_73[1], unk_0xD80958FC74E988A6()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_75(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_76()
{
	bool bVar0;
	
	switch (iLocal_53)
	{
		case 0:
			if (iLocal_52 == 1)
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && unk_0xE33D59DA70B58FDF(Local_125, 1f)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_125, 15f, 15f, 15f, false, true, 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_124))
					{
						unk_0x86A652570E5F25DD(&bLocal_124);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
						{
							uLocal_126[0] = func_167(bLocal_73[0], 0, 145);
							unk_0x75A16C3DA34F1245(uLocal_126[0], false);
						}
					}
					if (!func_194())
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
						{
							bLocal_75 = unk_0xB6997A7EB3F5C8C0();
						}
						func_166(&uLocal_140, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_157(1);
						func_156(1);
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							func_155();
							unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, false, false, false, false);
							unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, false, false, false, false);
							iLocal_103 = (unk_0x9CD27B0045628463() + 60000);
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
							{
								unk_0x75A16C3DA34F1245(uLocal_126[0], true);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, false, true, 0) && unk_0xE33D59DA70B58FDF(Local_125, 1f)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_125, 15f, 15f, 15f, false, true, 0))
				{
					func_154();
					if (!func_194())
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
						{
							bLocal_75 = unk_0xB6997A7EB3F5C8C0();
						}
						func_157(1);
						func_156(1);
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						func_67(&uLocal_140, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
						{
							unk_0x75A16C3DA34F1245(uLocal_126[0], true);
						}
						if (unk_0xA6DB27D19ECBB7DA(uLocal_126[1]))
						{
							unk_0x75A16C3DA34F1245(uLocal_126[1], true);
						}
						iLocal_103 = (unk_0x9CD27B0045628463() + 120000);
						iLocal_53 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_103 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x5F9532F3B5CC2551(bLocal_74, false))
				{
					unk_0xE8854A4326B9E12B(&iLocal_79);
					unk_0x69F4BE8C8CC4796C(false, bLocal_73[1], 7000, 2060, 4);
					unk_0xE73A266DB0CA9042(false, 2500);
					unk_0xC20E50AA46D09CA8(false, bLocal_74, -1, -1, 1f, 1, 0);
					unk_0x39E72BC99E6360CB(iLocal_79);
					unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
					unk_0x3841422E9C488D8C(&iLocal_79);
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					unk_0xE8854A4326B9E12B(&iLocal_79);
					unk_0x69F4BE8C8CC4796C(false, bLocal_73[0], 7000, 2060, 4);
					unk_0x15D3A79D4E44B913(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, false, 1193033728);
					unk_0x15D3A79D4E44B913(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, true, 1193033728);
					unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
					unk_0x39E72BC99E6360CB(iLocal_79);
					unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
					unk_0x3841422E9C488D8C(&iLocal_79);
				}
				unk_0xC1B1E9A034A63A62(false);
				iLocal_53 = 3;
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 8f, 8f, 4f, false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), bLocal_73[0], 80f))
					{
						bLocal_101 = true;
						unk_0xC1B1E9A034A63A62(false);
						iLocal_53 = 4;
					}
				}
				else if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 30f, 30f, 30f, false, true, 0))
				{
					unk_0xB542DE8C3D1CB210(true);
				}
				else
				{
					unk_0xB542DE8C3D1CB210(false);
				}
			}
			break;
		
		case 3:
			if (iLocal_52 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
					{
						if (func_67(&uLocal_140, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							unk_0xC1B1E9A034A63A62(false);
							iLocal_53 = 4;
						}
					}
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 8f, 8f, 4f, false, true, 0))
					{
						if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), bLocal_73[0], 80f))
						{
							bLocal_101 = true;
							unk_0xC1B1E9A034A63A62(false);
							iLocal_53 = 4;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 30f, 30f, 30f, false, true, 0))
					{
						func_153();
						if (func_152())
						{
							func_62(0);
						}
					}
					else if (func_4())
					{
						func_62(1);
					}
				}
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_62, 15f, 15f, 15f, false, true, 0) && !unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), bLocal_73[0], 80f))
						{
							if (unk_0x6CD5A433374D4CFB(bLocal_73[0], unk_0xD80958FC74E988A6()))
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_79);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2060, 4);
									unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, false, false, false, false);
									unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
									unk_0x39E72BC99E6360CB(iLocal_79);
									unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
									unk_0x3841422E9C488D8C(&iLocal_79);
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
								{
									unk_0x69F4BE8C8CC4796C(bLocal_73[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								}
								unk_0xC1B1E9A034A63A62(false);
								iLocal_53 = 4;
							}
						}
					}
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_79);
						unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2060, 4);
						unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, false, false, false, false);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
						unk_0x39E72BC99E6360CB(iLocal_79);
						unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
						unk_0x3841422E9C488D8C(&iLocal_79);
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							unk_0x69F4BE8C8CC4796C(bLocal_73[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
						}
						unk_0xC1B1E9A034A63A62(false);
						iLocal_53 = 4;
					}
				}
				if (unk_0x4C241E39B23DF959(bLocal_74, false))
				{
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_74, 1.5f, 1.5f, 5f, false, true, 0) && unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
					{
						if (func_152())
						{
							func_62(0);
						}
						func_68();
						unk_0x4EDE34FBADD967A6(false);
						if (func_67(&uLocal_140, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_137 = 2;
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (unk_0xA6DB27D19ECBB7DA(uLocal_126[iLocal_59]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							if (!unk_0xA6DB27D19ECBB7DA(bLocal_127))
							{
								bLocal_127 = func_150(bLocal_74, 0, 0);
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								unk_0xAAA34F8A7CB32098(bLocal_73[0]);
							}
							iLocal_53 = 4;
						}
					}
				}
				if (iLocal_103 < unk_0x9CD27B0045628463())
				{
					if (func_152())
					{
						func_62(0);
					}
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1])) && unk_0x7239B21A38F536BA(bLocal_74))
						{
							unk_0xE8854A4326B9E12B(&iLocal_79);
							unk_0x69F4BE8C8CC4796C(false, bLocal_73[1], -1, 2060, 4);
							unk_0xC20E50AA46D09CA8(false, bLocal_74, -1, -1, 1f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_79);
							unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
							unk_0x3841422E9C488D8C(&iLocal_79);
							unk_0xE8854A4326B9E12B(&iLocal_79);
							unk_0x69F4BE8C8CC4796C(false, bLocal_73[0], -1, 2060, 4);
							unk_0x5AD23D40115353AC(false, bLocal_73[0], false);
							unk_0xC20E50AA46D09CA8(false, bLocal_74, -1, false, 1f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_79);
							unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
							unk_0x3841422E9C488D8C(&iLocal_79);
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (unk_0xA6DB27D19ECBB7DA(uLocal_126[iLocal_59]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_52 == 1)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 8f, 8f, 4f, false, true, 0) || bLocal_101)
							{
								unk_0xB542DE8C3D1CB210(false);
								unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								unk_0x69F4BE8C8CC4796C(bLocal_73[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], -1, 2060, 4);
								if ((unk_0x9CD27B0045628463() + 50000) > iLocal_103 || unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()))
								{
									func_6();
									if (bLocal_101)
									{
										if (!func_4())
										{
											if (func_22() == 0)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(false);
													iLocal_137++;
												}
											}
											else if (func_22() == 1)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(false);
													iLocal_137++;
												}
											}
											else if (func_22() == 2)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(false);
													iLocal_137++;
												}
											}
										}
									}
									else
									{
										iLocal_137++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_149())
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_79);
									unk_0xEA47FE3719165B94(false, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, false, false, false, false);
									unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
									unk_0x39E72BC99E6360CB(iLocal_79);
									unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
									unk_0x3841422E9C488D8C(&iLocal_79);
									if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
									{
										unk_0xE8854A4326B9E12B(&iLocal_79);
										unk_0xEA47FE3719165B94(false, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, false, false, false, false);
										unk_0x5AD23D40115353AC(false, bLocal_73[0], false);
										unk_0xE73A266DB0CA9042(false, 3000);
										unk_0x15D3A79D4E44B913(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, false, 1193033728);
										unk_0x15D3A79D4E44B913(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, true, 1193033728);
										unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
										unk_0x39E72BC99E6360CB(iLocal_79);
										unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
										unk_0x3841422E9C488D8C(&iLocal_79);
									}
									func_148();
								}
							}
							else
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), bLocal_73[0], 80f))
									{
										unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
										unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 10000, 2060, 4);
										func_6();
										unk_0x4EDE34FBADD967A6(false);
										iLocal_137++;
									}
									else
									{
										func_147(bLocal_73[0], &(uLocal_61[0]));
									}
								}
								if (!func_4())
								{
									iLocal_137++;
								}
							}
						}
						break;
					
					case 2:
						if (func_149())
						{
							iLocal_137 = 6;
						}
						else
						{
							iLocal_137++;
						}
						break;
					
					case 3:
						if (!iLocal_84)
						{
							if (unk_0x83666F9FB8FEBD4B() > 1500)
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_79);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2060, 4);
									unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
									unk_0xE73A266DB0CA9042(false, 500);
									unk_0x39E72BC99E6360CB(iLocal_79);
									unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
									unk_0x3841422E9C488D8C(&iLocal_79);
									unk_0xC1B1E9A034A63A62(false);
									iLocal_84 = 1;
								}
							}
						}
						func_147(bLocal_73[0], &(uLocal_61[0]));
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_137++;
							}
						}
						break;
					
					case 4:
						if (!func_149())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
									if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
									{
										unk_0x86A652570E5F25DD(&(uLocal_126[0]));
									}
									if (unk_0xA6DB27D19ECBB7DA(uLocal_126[1]))
									{
										unk_0x86A652570E5F25DD(&(uLocal_126[1]));
									}
									if (unk_0x4C241E39B23DF959(bLocal_74, false))
									{
										unk_0xB664292EAECF7FA6(bLocal_74, 1);
										if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
										{
											unk_0xC20E50AA46D09CA8(bLocal_73[0], bLocal_74, -1, false, 1f, 1, 0);
										}
									}
									iLocal_137++;
								}
							}
						}
						else
						{
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_126[0]));
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[1]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_126[1]));
							}
							iLocal_137++;
						}
						break;
					
					case 5:
						if (func_149())
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								if (!unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
								{
									unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
									unk_0x9F3480FE65DB31B5(bLocal_73[0], func_63());
									unk_0x3DBFC55D5C9BB447(bLocal_73[0], true);
									unk_0x0BDDB8D9EC6BCF3C(bLocal_73[0], false);
								}
								unk_0xBF25EB89375A37AD(255, iLocal_80, joaat("player"));
								func_146();
							}
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != bLocal_74)
								{
									if (!func_4())
									{
										if (func_22() == 0)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_53 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_147(bLocal_73[0], &(uLocal_61[0]));
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (func_149())
							{
								if (!func_4())
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_137 = 10;
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 7:
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (func_149())
							{
								if (!func_4())
								{
									if (func_22() == 0)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(false);
											iLocal_137 = 10;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(false);
											iLocal_137 = 10;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(false);
											iLocal_137 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 10:
						if (func_149())
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								if (!unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
								{
									unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
									unk_0x9F3480FE65DB31B5(bLocal_73[0], func_63());
									unk_0x3DBFC55D5C9BB447(bLocal_73[0], true);
									unk_0x0BDDB8D9EC6BCF3C(bLocal_73[0], false);
								}
								unk_0xBF25EB89375A37AD(255, iLocal_80, joaat("player"));
								func_146();
							}
							iLocal_137++;
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 11:
						iLocal_53 = 7;
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 10f, 10f, 10f, false, true, 0))
							{
								if (unk_0xD71649DB0A545AA3(bLocal_73[0], unk_0xD80958FC74E988A6(), 50f))
								{
									unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], -1, 2060, 4);
									unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), -1, 2060, 4);
									unk_0x69F4BE8C8CC4796C(bLocal_73[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
									if (func_152())
									{
										func_62(0);
									}
									func_6();
									unk_0x4EDE34FBADD967A6(false);
									if (func_67(&uLocal_140, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_137++;
									}
								}
								else
								{
									func_147(bLocal_73[0], &(uLocal_61[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							unk_0xE8854A4326B9E12B(&iLocal_79);
							unk_0xE73A266DB0CA9042(false, 500);
							unk_0x39E72BC99E6360CB(iLocal_79);
							unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
							unk_0x3841422E9C488D8C(&iLocal_79);
							unk_0xC1B1E9A034A63A62(false);
							iLocal_137++;
						}
						break;
					
					case 2:
						func_147(bLocal_73[0], &(uLocal_61[0]));
						if (!unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
						{
							if (unk_0x4C241E39B23DF959(bLocal_74, false))
							{
								unk_0xB664292EAECF7FA6(bLocal_74, 1);
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 8000)
						{
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_126[0]));
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[1]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_126[1]));
							}
							if (!unk_0xA6DB27D19ECBB7DA(bLocal_127))
							{
								if (unk_0x4C241E39B23DF959(bLocal_74, false))
								{
									bLocal_127 = func_150(bLocal_74, 0, 0);
									unk_0xB664292EAECF7FA6(bLocal_74, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 20f, 20f, 20f, false, true, 0) && unk_0x83666F9FB8FEBD4B() > 9500)
								{
									bVar0 = unk_0xD53343AA4FB7DD28(false, 100);
									if (bVar0 < 60)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(false);
										}
									}
									else if (func_67(&uLocal_140, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										unk_0xC1B1E9A034A63A62(false);
									}
								}
							}
						}
						if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
						{
							if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_74, true))
							{
								iLocal_53 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x5F9532F3B5CC2551(bLocal_74, false))
				{
					if (unk_0x83666F9FB8FEBD4B() > 50000 || unk_0xBB40DD2270B65366(bLocal_74, -1, false) == bLocal_73[0])
					{
						if (func_67(&uLocal_140, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0x4C241E39B23DF959(bLocal_74, false) && !unk_0xB497F06B288DCFDF(bLocal_74))
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									if (unk_0x22AC59A870E6A669(bLocal_74, -1, false) && unk_0xA3EE4A07279BB9DB(bLocal_73[0], bLocal_74, false))
									{
										unk_0x7AA80209BDA643EB(bLocal_73[0], bLocal_74, 0);
										iLocal_53 = 2;
									}
									else if (unk_0xBB40DD2270B65366(bLocal_74, -1, false) == bLocal_73[0])
									{
										iLocal_53 = 2;
									}
									else if (unk_0xBB40DD2270B65366(bLocal_74, -1, false) == unk_0xD80958FC74E988A6())
									{
										iLocal_53 = 7;
									}
									else
									{
										func_70(bLocal_73[0], 120000, 0);
										unk_0xBB9CE077274F6A1B(bLocal_73[0], 1193033728, 0);
										unk_0x971D38760FBC02EF(bLocal_73[0], true);
										unk_0x4EDE34FBADD967A6(false);
										func_66();
									}
								}
							}
							else if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								func_70(bLocal_73[0], 120000, 0);
								unk_0xBB9CE077274F6A1B(bLocal_73[0], 1193033728, 0);
								unk_0x971D38760FBC02EF(bLocal_73[0], true);
								unk_0x4EDE34FBADD967A6(false);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 60000)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0x4C241E39B23DF959(bLocal_74, false))
						{
							if (unk_0x22AC59A870E6A669(bLocal_74, -1, false))
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_79);
									unk_0x0F804F1DB19B9689(false);
									unk_0xC20E50AA46D09CA8(false, bLocal_74, -1, -1, 1f, 1, 0);
									unk_0x39E72BC99E6360CB(iLocal_79);
									unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
									unk_0x3841422E9C488D8C(&iLocal_79);
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
							{
								unk_0xE8854A4326B9E12B(&iLocal_79);
								unk_0x0F804F1DB19B9689(false);
								unk_0xC20E50AA46D09CA8(false, bLocal_74, -1, false, 1f, 1, 0);
								unk_0x39E72BC99E6360CB(iLocal_79);
								unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
								unk_0x3841422E9C488D8C(&iLocal_79);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_52 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
					{
						if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], bLocal_74, false))
						{
							if (unk_0x77F1BEB8863288D5(bLocal_73[0], 355471868) != 1 && unk_0x77F1BEB8863288D5(bLocal_73[0], 355471868) != 0)
							{
								unk_0x45F6D8EEF34ABEF1(bLocal_74, 5f);
								unk_0x25367DE49D64CF16(bLocal_74, true);
								unk_0xE8854A4326B9E12B(&iLocal_79);
								unk_0xF0AF20AA7731F8C3(false, bLocal_74, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								unk_0xF0AF20AA7731F8C3(false, bLocal_74, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								unk_0xF0AF20AA7731F8C3(false, bLocal_74, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								unk_0x39E72BC99E6360CB(iLocal_79);
								unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
								unk_0x3841422E9C488D8C(&iLocal_79);
								unk_0x971D38760FBC02EF(bLocal_73[0], true);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (unk_0x4C241E39B23DF959(bLocal_74, false))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
					{
						if (unk_0xA808AA1D79230FC2(bLocal_73[0], bLocal_74) && unk_0xA808AA1D79230FC2(bLocal_73[1], bLocal_74))
						{
							unk_0x25367DE49D64CF16(bLocal_74, true);
							unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
							unk_0x919BE13EED931959(bLocal_73[1], -1);
							unk_0x971D38760FBC02EF(bLocal_73[1], true);
							iLocal_53 = 5;
						}
						if (!iLocal_81)
						{
							if (unk_0xA808AA1D79230FC2(bLocal_73[0], bLocal_74) && !unk_0xA808AA1D79230FC2(bLocal_73[1], bLocal_74))
							{
								unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
								unk_0x919BE13EED931959(bLocal_73[0], -1);
							}
							if (!unk_0xA808AA1D79230FC2(bLocal_73[0], bLocal_74) && unk_0xA808AA1D79230FC2(bLocal_73[1], bLocal_74))
							{
								unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
								unk_0x919BE13EED931959(bLocal_73[1], -1);
							}
							iLocal_81 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x4C241E39B23DF959(bLocal_74, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
					unk_0xE8854A4326B9E12B(&iLocal_79);
					unk_0xE2A2AA2F659D77A7(false, bLocal_74, unk_0x1899F328B0E12848(bLocal_74, 0f, 2f, 0f), 10f, 0, bLocal_78, 262144, 5f, -1f);
					unk_0xC429DCEEB339E129(false, bLocal_74, 24, 500);
					unk_0xC429DCEEB339E129(false, bLocal_74, 9, 1500);
					unk_0xC429DCEEB339E129(false, bLocal_74, 24, 500);
					unk_0xC429DCEEB339E129(false, bLocal_74, 11, 1500);
					unk_0xF0AF20AA7731F8C3(false, bLocal_74, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					unk_0x39E72BC99E6360CB(iLocal_79);
					unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
					unk_0x3841422E9C488D8C(&iLocal_79);
					unk_0x971D38760FBC02EF(bLocal_73[0], true);
				}
			}
			iLocal_53 = 6;
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_73[0], 242628503) == 1)
				{
					if (unk_0x00A9010CFE1E3533(bLocal_73[0]) == 5)
					{
						func_66();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_52 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[1], 50f, 50f, 50f, false, true, 0))
					{
						unk_0x2595DD4236549CE3(&(bLocal_73[1]));
					}
				}
				switch (iLocal_60)
				{
					case 0:
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
							{
								uLocal_126[0] = func_167(bLocal_73[0], 0, 145);
							}
							iLocal_60++;
							unk_0xC1B1E9A034A63A62(false);
						}
						break;
					
					case 1:
						if (unk_0x83666F9FB8FEBD4B() > 1000)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
							{
								if (func_149())
								{
									if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false))
									{
										fLocal_131 = func_145(unk_0xD80958FC74E988A6(), bLocal_73[0], 1);
										iLocal_60++;
									}
								}
								else if (!iLocal_99)
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_99 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_144();
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							if (func_149())
							{
								if (!iLocal_98)
								{
									if (func_145(unk_0xD80958FC74E988A6(), bLocal_73[0], 1) > (fLocal_131 + 5f))
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_98 = 1;
										}
									}
								}
							}
							else if (!iLocal_99)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_99 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0x4C241E39B23DF959(bLocal_74, false))
							{
								unk_0xB664292EAECF7FA6(bLocal_74, 1);
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_126[0]));
							}
							if (func_22() == 2 && !func_64())
							{
								if (!unk_0xA6DB27D19ECBB7DA(bLocal_83))
								{
									bLocal_83 = func_142(Local_71, 0);
									unk_0xDF735600A4696DAF(bLocal_83, 269);
									func_140();
								}
							}
							iLocal_58 = 1;
							iLocal_60++;
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							if (func_145(unk_0xD80958FC74E988A6(), bLocal_73[0], 1) > 50f)
							{
								func_66();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							unk_0x4EDE34FBADD967A6(1500);
							unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
							if (func_22() == 0)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (func_22() == 1)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (func_22() == 2)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_138 = unk_0x9CD27B0045628463();
								iLocal_60++;
							}
						}
						break;
					
					case 5:
						func_139();
						func_138();
						func_144();
						if (!iLocal_90)
						{
							if ((unk_0x9CD27B0045628463() - iLocal_138) > 7000)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_138 = unk_0x9CD27B0045628463();
										iLocal_90 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_89 && !bLocal_88)
							{
								func_137();
							}
							else
							{
								func_134();
								func_133();
								unk_0x51669F7D1FB53D9F(true);
							}
						}
						if (func_132(Local_69))
						{
							func_5(0);
							func_68();
							unk_0x4EDE34FBADD967A6(false);
							func_67(&uLocal_140, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_131())
						{
							func_5(0);
							func_68();
							unk_0x4EDE34FBADD967A6(false);
							func_67(&uLocal_140, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							if (unk_0x20B60995556D004F(bLocal_73[0], Local_69, Global_22, true, true, 0))
							{
								if (unk_0xA6DB27D19ECBB7DA(bLocal_82))
								{
									unk_0x86A652570E5F25DD(&bLocal_82);
								}
								if (unk_0xA6DB27D19ECBB7DA(bLocal_83))
								{
									unk_0x86A652570E5F25DD(&bLocal_83);
								}
								iLocal_53 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_60)
				{
					case 0:
						if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
						{
							if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_74, true))
							{
								if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
								{
									uLocal_126[0] = func_167(bLocal_73[0], 0, 145);
								}
								if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[1]))
								{
									uLocal_126[1] = func_167(bLocal_73[1], 0, 145);
								}
								if (!func_4())
								{
									unk_0xC1B1E9A034A63A62(false);
									if (func_22() == 0)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x5F9532F3B5CC2551(bLocal_74, false))
						{
							unk_0x0F804F1DB19B9689(bLocal_73[0]);
							unk_0xC20E50AA46D09CA8(bLocal_73[0], bLocal_74, 30000, 2, 2f, 1, 0);
						}
						unk_0xC1B1E9A034A63A62(false);
						iLocal_60++;
						break;
					
					case 2:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]) && !unk_0x5F9532F3B5CC2551(bLocal_74, false))
						{
							unk_0xE8854A4326B9E12B(&iLocal_79);
							unk_0x0F804F1DB19B9689(false);
							unk_0x304AE42E357B8C7E(false, bLocal_74, 1.5f, -3f, 0f, 1f, 4000, 0.1f, true);
							unk_0xC20E50AA46D09CA8(false, bLocal_74, 30000, true, 2f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_79);
							unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
							unk_0x3841422E9C488D8C(&iLocal_79);
						}
						unk_0xC1B1E9A034A63A62(false);
						iLocal_60++;
						break;
					
					case 3:
						func_139();
						func_138();
						if (!iLocal_97)
						{
							if (!func_4())
							{
								if (func_67(&uLocal_140, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_97 = 1;
								}
							}
						}
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
							{
								if (!unk_0x5F9532F3B5CC2551(bLocal_73[0], false) && !unk_0x5F9532F3B5CC2551(bLocal_73[1], false))
								{
									if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xA3EE4A07279BB9DB(bLocal_73[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
									{
										unk_0xBF25EB89375A37AD(255, iLocal_80, joaat("player"));
										func_146();
										iLocal_59 = 0;
										while (iLocal_59 <= (iLocal_72 - 1))
										{
											if (unk_0xA6DB27D19ECBB7DA(uLocal_126[iLocal_59]))
											{
												unk_0x86A652570E5F25DD(&(uLocal_126[iLocal_59]));
											}
											iLocal_59++;
										}
										if (unk_0xA6DB27D19ECBB7DA(bLocal_127))
										{
											unk_0x86A652570E5F25DD(&bLocal_127);
										}
										if (func_22() == 2 && !func_64())
										{
											if (!unk_0xA6DB27D19ECBB7DA(bLocal_83))
											{
												bLocal_83 = func_142(Local_71, 0);
												unk_0xDF735600A4696DAF(bLocal_83, 269);
												func_140();
											}
										}
										if (func_22() == 0)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(false);
												iLocal_60++;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(false);
												iLocal_60++;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(false);
												iLocal_60++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_139();
						func_138();
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
								unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
								iLocal_138 = unk_0x9CD27B0045628463();
								iLocal_60++;
							}
						}
						break;
					
					case 5:
						func_139();
						if (iLocal_309 == 0 || iLocal_309 == 9)
						{
							func_138();
						}
						if ((unk_0x9CD27B0045628463() - iLocal_138) > 9000)
						{
							func_125();
						}
						if (iLocal_309 == 9 && ((unk_0x9CD27B0045628463() - iLocal_310) > 6000 && (unk_0x9CD27B0045628463() - iLocal_310) < 6500))
						{
							func_67(&uLocal_140, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_132(Local_69))
						{
							func_5(0);
							func_68();
							unk_0x4EDE34FBADD967A6(false);
							func_67(&uLocal_140, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_131())
						{
							func_5(0);
							func_68();
							unk_0x4EDE34FBADD967A6(false);
							func_67(&uLocal_140, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
						{
							if ((!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1])) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_74, false))
							{
								if (unk_0x20B60995556D004F(bLocal_73[0], Local_69, Global_22, true, true, 0) && unk_0x20B60995556D004F(bLocal_73[1], Local_69, Global_22, false, true, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0xA6DB27D19ECBB7DA(bLocal_82))
						{
							unk_0x86A652570E5F25DD(&bLocal_82);
						}
						if (unk_0xA6DB27D19ECBB7DA(bLocal_83))
						{
							unk_0x86A652570E5F25DD(&bLocal_83);
						}
						iLocal_53 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_59 = 0;
			while (iLocal_59 <= (iLocal_72 - 1))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[iLocal_59]))
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_73[iLocal_59], false);
				}
				iLocal_59++;
			}
			if (iLocal_52 == 1)
			{
				if (func_124(1, 0, 1) && iLocal_104 == -1)
				{
					func_6();
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f - 5f), 2, false);
					}
					if (func_2())
					{
						if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == bLocal_74)
						{
							iLocal_104 = 0;
						}
						else
						{
							iLocal_104 = 1;
						}
					}
					else
					{
						iLocal_104 = 2;
					}
				}
				if (iLocal_104 == 0)
				{
					func_123();
				}
				if (iLocal_104 == 1)
				{
					func_122();
				}
				if (iLocal_104 == 2)
				{
					func_121();
				}
				if (bLocal_110)
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_36();
				}
			}
			if (iLocal_52 == 2)
			{
				if (func_124(1, 0, 1) && iLocal_104 == -1)
				{
					func_68();
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f - 4f), 2, false);
						unk_0xACCFB4ACF53551B0(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						unk_0xACCFB4ACF53551B0(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_113(1, 1, 1, 0, 0, 0, 0);
					while (func_4())
					{
						unk_0x4EDE34FBADD967A6(false);
					}
					if (func_2())
					{
						if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == bLocal_74)
						{
							iLocal_104 = 0;
						}
					}
				}
				if (iLocal_104 == 0)
				{
					func_110();
				}
				else if (iLocal_104 == 1)
				{
					func_109();
				}
				else if (iLocal_104 == 2)
				{
					func_77();
				}
				if (bLocal_110)
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_36();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_77()
{
	switch (iLocal_106)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				unk_0xED74007FFB146BC2(bLocal_73[0]);
				unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 10000, 2060, 4);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
			{
				unk_0xED74007FFB146BC2(bLocal_73[0]);
				unk_0x69F4BE8C8CC4796C(bLocal_73[1], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
			}
			func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_106++;
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					unk_0xD76B57B44F1E6F8B(bLocal_73[0], Local_70, 1f, -1, 1193033728, 0.5f);
					iLocal_105 = unk_0x9CD27B0045628463() + 500;
					iLocal_106++;
				}
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					unk_0x15D3A79D4E44B913(bLocal_73[1], Local_70, 1f, -1, 0.25f, false, 1193033728);
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_108(iParam0) == 3)
	{
		return;
	}
	if (func_108(iParam0) == 4)
	{
		return;
	}
	func_79(func_108(iParam0), 1, iParam1, bParam2, 0);
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

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_107();
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
					func_106(99, 1);
					func_105(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_105(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_105(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
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
							func_105(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_105(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_105(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_105(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_105(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_105(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_105(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_105(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_105(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_105(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_105(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_105(joaat("sp2_money_spent_property"), bParam3);
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
									func_105(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_105(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_105(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_105(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_105(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_105(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_105(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_105(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_105(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_105(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_105(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_105(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_87(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_106(95, bParam3);
					break;
				
				case 1:
					func_106(97, bParam3);
					break;
				
				case 2:
					func_106(96, bParam3);
					break;
			}
			func_106(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_82(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(bVar1);
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
					func_105(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_105(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_105(joaat("sp2_total_cash_earned"), bParam3);
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
	func_81(iParam0);
	if (Global_43052 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)
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

void func_81(int iParam0)
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

void func_82(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_46(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_46(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_46(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_46(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_85(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_85(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_85(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_85(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_85(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_85(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_84() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_84() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_83(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_83(bool bParam0)
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

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_86(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

void func_87(int iParam0)
{
	func_106(93, iParam0);
	func_106(29, iParam0);
	func_106(30, iParam0);
}

int func_88(int iParam0)
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
		return func_90(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_90(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_90(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_90(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_89(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_89(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_89(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_89(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_89(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_89(8277, -1, 0);
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
	return BitTest(Global_2359296[func_84() /*5567*/].f_681.f_10, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_86(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_90(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_47();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_91(bool bParam0)
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
		func_45(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_92(27, 1);
	return 1;
}

int func_92(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_93(iParam0, iParam1);
}

int func_93(int iParam0, int iParam1)
{
	if (func_28(14) && !func_104(iParam0))
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
	if (func_103(&Global_4541529))
	{
		if (func_101(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_94(&Global_4541529, iParam0))
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

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_104(iParam1))
	{
		return 0;
	}
	if (func_101(uParam0, iParam1))
	{
		return 0;
	}
	if (func_100(uParam0) < 0f)
	{
		func_99(uParam0, 0);
	}
	func_97(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_95(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_95(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_104(iParam1))
	{
		return 0;
	}
	if (func_101(uParam0, iParam1))
	{
		return 0;
	}
	if (func_100(uParam0) < 0f)
	{
		func_99(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_96(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_97(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98(uParam0, iVar0);
		iVar0++;
	}
	func_99(uParam0, (Global_4541528 - 0.5f));
}

void func_98(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_99(var uParam0, float fParam1)
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

float func_100(var uParam0)
{
	return uParam0->f_80;
}

bool func_101(var uParam0, int iParam1)
{
	return func_102(uParam0, iParam1) != -1;
}

int func_102(var uParam0, int iParam1)
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

bool func_103(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_104(int iParam0)
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

void func_105(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_106(int iParam0, int iParam1)
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

void func_107()
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

int func_108(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_109()
{
	bool bVar0;
	
	switch (iLocal_106)
	{
		case 0:
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0x5721B434AD84D57A(bVar0))
				{
					if (unk_0x4C241E39B23DF959(bVar0, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
							unk_0xED74007FFB146BC2(bLocal_73[0]);
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
							unk_0xED74007FFB146BC2(bLocal_73[1]);
						}
					}
					func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_79);
				unk_0x504D54DF3F6F2247(false, false, 0);
				unk_0x15D3A79D4E44B913(false, Local_70, 1f, -1, 0.25f, false, 1193033728);
				unk_0x39E72BC99E6360CB(iLocal_79);
				unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
				unk_0x3841422E9C488D8C(&iLocal_79);
				iLocal_105 = unk_0x9CD27B0045628463() + 1500;
				iLocal_106++;
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					unk_0x15D3A79D4E44B913(bLocal_73[0], Local_70, 1f, -1, 0.25f, false, 1193033728);
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (func_22() == 2)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x9CD27B0045628463() + 1000;
					iLocal_106 = 7;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x9CD27B0045628463() + 1500;
					iLocal_106 = 7;
				}
			}
			else if (func_22() == 0)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x9CD27B0045628463() + 750;
					iLocal_106 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_106++;
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x15D3A79D4E44B913(bLocal_73[0], Local_70, 1f, -1, 0.25f, false, 1193033728);
						iLocal_105 = unk_0x9CD27B0045628463() + 3500;
						iLocal_106++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x15D3A79D4E44B913(bLocal_73[0], Local_70, 1f, -1, 0.25f, false, 1193033728);
						iLocal_105 = unk_0x9CD27B0045628463() + 3500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_106++;
			}
			break;
		
		case 8:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_110()
{
	unk_0x719FF505F097FD20();
	switch (iLocal_106)
	{
		case 0:
			unk_0xA6294919E56FF02A(false);
			unk_0xA0EBB943C300E693(false);
			if (unk_0x4C241E39B23DF959(bLocal_74, false))
			{
				if (unk_0x5721B434AD84D57A(bLocal_74))
				{
					if (unk_0x4C241E39B23DF959(bLocal_74, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
							unk_0xED74007FFB146BC2(bLocal_73[0]);
							unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 4000, 2060, 4);
						}
						if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
							unk_0xED74007FFB146BC2(bLocal_73[1]);
						}
					}
					StringCopy(&cLocal_118, "", 24);
					func_68();
					unk_0x4EDE34FBADD967A6(false);
					func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(bLocal_74, false))
			{
				bLocal_108 = unk_0x6ABFA3E16460F22D(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				bLocal_109 = unk_0x6ABFA3E16460F22D(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				unk_0x6A25241C340D3822(bLocal_108, "HAND_SHAKE", 0.3f);
				unk_0x6A25241C340D3822(bLocal_109, "HAND_SHAKE", 0.3f);
				unk_0x9FBDA379383A52A4(bLocal_109, bLocal_108, 2500, 0, 0);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				unk_0xA56F01F3765B93A0(Local_69, 8f, true, false, false, false);
				unk_0x06843DA7060A026B(bLocal_74, 1120.551f, 2647.307f, 36.9963f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(bLocal_74, 179.7675f);
				unk_0x49733E92263139D1(bLocal_74, 5f);
				iLocal_105 = unk_0x9CD27B0045628463() + 2500;
				iLocal_106++;
			}
			break;
		
		case 2:
			if (iLocal_105 - 500) < unk_0x9CD27B0045628463()
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					if (unk_0x997ABD671D25CA0B(bLocal_73[1], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_79);
						unk_0x15D3A79D4E44B913(false, Local_70, 1f, -1, 0.25f, false, 1193033728);
						unk_0x39E72BC99E6360CB(iLocal_79);
						unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
						unk_0x3841422E9C488D8C(&iLocal_79);
						unk_0x971D38760FBC02EF(bLocal_73[1], true);
					}
				}
			}
			if (iLocal_105 - 1000) < unk_0x9CD27B0045628463()
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					if (unk_0x997ABD671D25CA0B(bLocal_73[0], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_79);
						unk_0x15D3A79D4E44B913(false, Local_70 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, false, 1193033728);
						unk_0x39E72BC99E6360CB(iLocal_79);
						unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
						unk_0x3841422E9C488D8C(&iLocal_79);
						unk_0x971D38760FBC02EF(bLocal_73[0], true);
					}
				}
			}
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				unk_0xBFD8727AEA3CCEBA(bLocal_108, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(bLocal_109, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, false, 1, 1, 2);
				unk_0x9FBDA379383A52A4(bLocal_109, bLocal_108, 5000, 0, 0);
				unk_0xC197616D221FF4A4();
				iLocal_105 = unk_0x9CD27B0045628463() + 6000;
				iLocal_106++;
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				unk_0xBFD8727AEA3CCEBA(bLocal_108, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(bLocal_109, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, false, 1, 1, 2);
				unk_0x9FBDA379383A52A4(bLocal_109, bLocal_108, 1500, 1, 1);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					unk_0x06843DA7060A026B(bLocal_73[0], 1141.156f, 2643.205f, 37.1487f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(bLocal_73[0], 262.7369f);
					unk_0x06843DA7060A026B(bLocal_73[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(bLocal_73[1], 262.1522f);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
				}
				if (func_22() == 2)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 1)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 0)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_105 = unk_0x9CD27B0045628463() + 1700;
				iLocal_106++;
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			iLocal_106 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_105 = unk_0x9CD27B0045628463() + 5500;
						iLocal_106++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_105 = unk_0x9CD27B0045628463() + 5500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 7:
			unk_0xC197616D221FF4A4();
			unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
			func_113(0, 1, 1, 0, 0, 0, 0);
			unk_0x9614299DCB53E54B(&(bLocal_73[0]));
			unk_0x9614299DCB53E54B(&(bLocal_73[1]));
			if (unk_0x4C241E39B23DF959(bLocal_74, false))
			{
				unk_0xB664292EAECF7FA6(bLocal_74, 7);
			}
			if (iLocal_111)
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_74, false))
				{
					unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					unk_0x781B3D62BB013EF5(bLocal_74, true);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
			}
			unk_0x026FB97D0A425F84(bLocal_108, false);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(-7f, 1f);
			unk_0xA6294919E56FF02A(true);
			unk_0xA0EBB943C300E693(true);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_78(func_22(), 1, 40, 0, 1);
			bLocal_110 = true;
	}
	if (iLocal_106 != 0)
	{
		if (func_111(1000))
		{
			func_68();
			iLocal_111 = 1;
			iLocal_106 = 7;
		}
	}
}

int func_111(int iParam0)
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
			if (func_112())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_112()
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

void func_113(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_120(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_19())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_119(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_120(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_119(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_117(unk_0x4F8644AF03D0E0D6())) && !func_115(unk_0x4F8644AF03D0E0D6(), 0)) && !func_114()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_117(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_114()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_115(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_116(-1, 0) == 8;
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

int func_116(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_117(bool bParam0)
{
	if (func_115(bParam0, 0))
	{
		return 1;
	}
	if (func_118())
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

bool func_118()
{
	return BitTest(Global_2621446, 3);
}

int func_119(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_120(int iParam0)
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

void func_121()
{
	switch (iLocal_106)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					unk_0xED74007FFB146BC2(bLocal_73[0]);
					unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 10000, 2060, 4);
				}
				if (bLocal_88)
				{
					func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_106++;
			}
			break;
		
		case 1:
			iLocal_105 = unk_0x9CD27B0045628463() + 3000;
			iLocal_106++;
			break;
		
		case 2:
			if (func_22() == 0)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_79);
				unk_0x504D54DF3F6F2247(false, false, 0);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(false, Local_70, 1f, -1, 0.25f, false, 1193033728);
				unk_0xEA47FE3719165B94(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_79);
				unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
				unk_0x3841422E9C488D8C(&iLocal_79);
				unk_0x971D38760FBC02EF(bLocal_73[0], true);
				iLocal_105 = unk_0x9CD27B0045628463() + 2000;
				iLocal_106++;
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_122()
{
	bool bVar0;
	
	switch (iLocal_106)
	{
		case 0:
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0x5721B434AD84D57A(bVar0) && !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
						unk_0xED74007FFB146BC2(bLocal_73[0]);
						unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
						unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			iLocal_106++;
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_79);
				unk_0x504D54DF3F6F2247(false, false, 4194304);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(false, Local_70, 1f, -1, 0.25f, false, 1193033728);
				unk_0xEA47FE3719165B94(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_79);
				unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
				unk_0x3841422E9C488D8C(&iLocal_79);
				unk_0x971D38760FBC02EF(bLocal_73[0], true);
			}
			func_70(bLocal_73[0], 120000, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			iLocal_105 = unk_0x9CD27B0045628463() + 3000;
			iLocal_106++;
			break;
		
		case 4:
			iLocal_105 = unk_0x9CD27B0045628463() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				iLocal_106++;
			}
			break;
		
		case 6:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_123()
{
	switch (iLocal_106)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(bLocal_74, false))
			{
				if (unk_0x5721B434AD84D57A(bLocal_74) && !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
						unk_0xED74007FFB146BC2(bLocal_73[0]);
						unk_0x69F4BE8C8CC4796C(bLocal_73[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
						unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_79);
				unk_0x504D54DF3F6F2247(false, false, 4194304);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(false, Local_70, 1f, -1, 0.25f, false, 1193033728);
				unk_0xEA47FE3719165B94(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_79);
				unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
				unk_0x3841422E9C488D8C(&iLocal_79);
				unk_0x971D38760FBC02EF(bLocal_73[0], true);
				func_70(bLocal_73[0], 120000, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				iLocal_105 = unk_0x9CD27B0045628463() + 3000;
				iLocal_106++;
			}
			break;
		
		case 3:
			iLocal_105 = unk_0x9CD27B0045628463() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x9CD27B0045628463())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			iLocal_106++;
			break;
		
		case 6:
			iLocal_106++;
			break;
		
		case 7:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
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

void func_125()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0x19CAFA3C87F7C2FF();
		if (iVar1 != 0)
		{
			iVar2 = unk_0xEE778F8C7E1142E2(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_130(64) || unk_0xF3A21BCD95725A4A(0, 86)) || unk_0xF3A21BCD95725A4A(0, 71)) || unk_0xF3A21BCD95725A4A(0, 72)) || unk_0xF3A21BCD95725A4A(0, 76)) || unk_0xF3A21BCD95725A4A(0, 73)) || unk_0xF3A21BCD95725A4A(0, 68)) || unk_0xF3A21BCD95725A4A(0, 75)) || iVar0)
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		}
	}
	switch (iLocal_309)
	{
		case 0:
			if (func_129())
			{
				unk_0x69F4BE8C8CC4796C(bLocal_73[0], bLocal_73[1], -1, 2060, 4);
				unk_0x69F4BE8C8CC4796C(bLocal_73[1], bLocal_73[0], -1, 2060, 4);
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0xE8854A4326B9E12B(&iLocal_79);
					unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, false, false, false, false);
					unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, false, false, false, false);
					unk_0x39E72BC99E6360CB(iLocal_79);
					unk_0x5ABA3986D90D8A3B(bLocal_73[0], iLocal_79);
					unk_0x3841422E9C488D8C(&iLocal_79);
					unk_0xE8854A4326B9E12B(&iLocal_79);
					unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, false, false, false, false);
					unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, false, false, false, false);
					unk_0x39E72BC99E6360CB(iLocal_79);
					unk_0x5ABA3986D90D8A3B(bLocal_73[1], iLocal_79);
					unk_0x3841422E9C488D8C(&iLocal_79);
					iLocal_310 = unk_0x9CD27B0045628463();
					iLocal_309++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_310 = unk_0x9CD27B0045628463();
				iLocal_309++;
			}
			break;
		
		case 2:
			if (func_129())
			{
				if ((unk_0x9CD27B0045628463() - iLocal_310) > 5000)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_310 = unk_0x9CD27B0045628463();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - iLocal_310) > 15000)
			{
				if (func_129())
				{
					unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, false, false, false, false);
					unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, false, false, false, false);
					iLocal_309++;
				}
			}
			break;
		
		case 4:
			if (func_129())
			{
				func_127();
				if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, false, false, false, false);
						unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, false, false, false, false);
						iLocal_310 = unk_0x9CD27B0045628463();
						iLocal_309++;
					}
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
				unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
				iLocal_309 = 3;
			}
			break;
		
		case 5:
			if (func_129())
			{
				func_127();
				func_126();
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(bLocal_73[1], false), false))
				{
					if ((unk_0x9CD27B0045628463() - iLocal_310) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0x19CAFA3C87F7C2FF();
						if (iVar4 != 0)
						{
							iVar5 = unk_0xEE778F8C7E1142E2(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0xE8854A4326B9E12B(&iLocal_79);
							unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, false, false, false, false);
							unk_0xEA47FE3719165B94(false, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, false, false, false, false);
							unk_0x39E72BC99E6360CB(iLocal_79);
							unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iLocal_79);
							unk_0x3841422E9C488D8C(&iLocal_79);
						}
						if (func_22() == 0)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x9CD27B0045628463();
								iLocal_309++;
							}
						}
						else if (func_22() == 1)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x9CD27B0045628463();
								iLocal_309++;
							}
						}
						else if (func_22() == 2)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x9CD27B0045628463() + 14000;
								iLocal_309++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_127();
			func_126();
			if ((unk_0x9CD27B0045628463() - iLocal_310) > 5000 && func_129())
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(bLocal_73[1], false), false))
				{
					if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, false, false, false, false);
							}
							unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, false, false, false, false);
							unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, false, false, false, false);
							iLocal_309++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_127();
			if (func_129())
			{
				if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0xC5F68BE9613E2D18(unk_0x9A9112A0FE9A4713(bLocal_73[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_310 = unk_0x9CD27B0045628463();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 8:
			func_127();
			if (func_129())
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(bLocal_73[1], false), false))
				{
					if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, false, false, false, false);
							unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, false, false, false, false);
							iLocal_309 = 6;
						}
					}
				}
			}
			if ((unk_0x9CD27B0045628463() - iLocal_310) > 10000)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
					unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
					iLocal_310 = unk_0x9CD27B0045628463();
					iLocal_309++;
				}
			}
			break;
	}
}

void func_126()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(bLocal_73[0], false), false))
		{
			if (unk_0x1F0B79228E461EC9(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x346D81500D088F42(bLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0xC5F68BE9613E2D18(unk_0x9A9112A0FE9A4713(bLocal_73[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					unk_0xE65F427EB70AB1ED(-1, "SUSPENSION_SCRIPT_FORCE", unk_0x9A9112A0FE9A4713(bLocal_73[0], false), false, false, 0);
				}
			}
		}
	}
}

void func_127()
{
	unk_0xEB2D525B57F42B40();
	func_128();
}

void func_128()
{
	Global_23011.f_134 = 1;
}

int func_129()
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
	{
		if (unk_0x997ABD671D25CA0B(bLocal_73[1], false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bLocal_73[1], false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
				{
					if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], bVar0, false))
					{
						if (unk_0xBB40DD2270B65366(bVar0, 2, false) == bLocal_73[0] && unk_0xBB40DD2270B65366(bVar0, true, false) == bLocal_73[1])
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0xD95E79E8686D2C27(2, 195) - 128);
	iVar1 = (unk_0xD95E79E8686D2C27(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	if (func_22() == 2)
	{
		if (func_65())
		{
			if (unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				if (!Global_32202)
				{
					unk_0x706D57B0F50DA710("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				unk_0x706D57B0F50DA710("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

int func_132(struct<3> Param0)
{
	if (func_22() == 2)
	{
		if (func_65() && !Global_32200)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0) > (fLocal_45 + 200f) || unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_133()
{
	if (!bLocal_88)
	{
		if ((((((((!func_33("REDR1_SWV") && !func_33("REDR1_COM")) && !func_33("REDR1_BANT1")) && !func_33("REDR1_SIK")) && !func_33("REDR2_DC")) && !func_33("REDR1_OFFR")) && !func_33("REDR2_OFFR")) && !func_33("REDR1_CULT")) && !func_33("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_90 && !iLocal_114) && (unk_0x9CD27B0045628463() - iLocal_138) > 9000)
		{
			if (!func_4())
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_115)
	{
		if (!func_4())
		{
			if (func_22() == 0)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_22() == 1)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_22() == 2)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_122 = unk_0x9CD27B0045628463() + 6000;
			iLocal_115 = 1;
		}
	}
	if (!bLocal_88)
	{
		if ((iLocal_114 && !iLocal_113) && iLocal_122 < unk_0x9CD27B0045628463())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_115 = 0;
					iLocal_113 = 1;
				}
			}
		}
	}
	else if ((bLocal_88 && !iLocal_112) && iLocal_122 < unk_0x9CD27B0045628463())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_140, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_115 = 0;
				iLocal_112 = 1;
			}
		}
	}
}

void func_134()
{
	if (func_2() && iLocal_91 < 2)
	{
		if ((unk_0x5D35ECF3A81A0EE0(unk_0x4F8644AF03D0E0D6()) > 0 && unk_0x5D35ECF3A81A0EE0(unk_0x4F8644AF03D0E0D6()) < 100) || unk_0x8BAD02F0368D9E14(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(0);
				func_68();
				unk_0x4EDE34FBADD967A6(false);
				func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_130 += 6;
			}
		}
		func_135(Local_129, (unk_0x9CD27B0045628463() - iLocal_128));
	}
	if (iLocal_130 > 17)
	{
		iLocal_89 = 1;
	}
}

void func_135(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (func_2())
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			Var0 = { unk_0x9A8D700A51CB7B0D(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) };
		}
	}
	Var1 = { Var0 - Param0 };
	Var1 = { func_136(Var1, iParam1) };
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (!unk_0xB104CD1BABF302E2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_132 == -1)
				{
					iLocal_132 = unk_0x9CD27B0045628463() + 400;
				}
				else if (iLocal_132 < unk_0x9CD27B0045628463())
				{
					iLocal_130 += 3;
					func_5(0);
					func_68();
					unk_0x4EDE34FBADD967A6(false);
					func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_132 = -1;
			}
		}
	}
	if (Var1.f_1 > 0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_1 < -0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_0 > 0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_0 < -0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_136(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam1));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam1));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam1));
	return Var0;
}

void func_137()
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
	{
		switch (iLocal_91)
		{
			case 0:
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
					{
						unk_0xA711568EEDB43069(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true);
					}
					unk_0x5AE11BC36633DE4E(false);
					iLocal_91++;
				}
				break;
			
			case 1:
				if (unk_0xC9D9444186B5A374() > 3000 || !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
						unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_1", bLocal_94, 8f, -8f, -1, 0, false, false, false, false);
						iLocal_91++;
					}
				}
				break;
			
			case 2:
				if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_94, 3))
				{
					fVar0 = unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_1", bLocal_94);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_85)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", bLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_85 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_86)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", bLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_86 = 1;
							if (func_22() == 0)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_22() == 1)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_22() == 2)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_87)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", bLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_87 = 1;
						}
					}
					if (unk_0x346D81500D088F42(bLocal_73[0], "random@drunk_driver_1", bLocal_94) > 0.8f)
					{
						iLocal_91++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_94, 3))
				{
				}
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_1", bLocal_93, 2f, -4f, -1, 1, false, false, false, false);
					iLocal_85 = 0;
					iLocal_91++;
				}
				break;
			
			case 4:
				unk_0xA3B0C41BA5CC0BB5(bLocal_92);
				bLocal_88 = true;
				break;
			}
	}
}

void func_138()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_135)
		{
			iLocal_133 = unk_0x9CD27B0045628463();
			iLocal_135 = 1;
		}
		else
		{
			iLocal_134 = unk_0x9CD27B0045628463();
		}
	}
	else
	{
		iLocal_134 = 0;
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_134 - iLocal_133) > 50000 && !iLocal_136)
	{
		if (iLocal_52 == 1)
		{
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_136 = 1;
	}
	if ((iLocal_134 - iLocal_133) > 60000 && iLocal_136)
	{
		if (iLocal_52 == 2)
		{
			func_68();
			unk_0x4EDE34FBADD967A6(false);
			func_67(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
		{
			unk_0xBB9CE077274F6A1B(bLocal_73[0], 1193033728, 0);
			func_70(bLocal_73[0], 120000, 0);
			unk_0x971D38760FBC02EF(bLocal_73[0], true);
			if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
			{
				unk_0xED74007FFB146BC2(bLocal_73[0]);
			}
			unk_0x304AE42E357B8C7E(bLocal_73[1], bLocal_73[0], 0f, 1f, 0f, 1f, -1, 0.1f, true);
			func_70(bLocal_73[1], 120000, 0);
			unk_0x971D38760FBC02EF(bLocal_73[1], true);
			if (unk_0x5891CAC5D4ACFF74(bLocal_73[1]))
			{
				unk_0xED74007FFB146BC2(bLocal_73[1]);
			}
		}
		func_66();
	}
}

void func_139()
{
	if (iLocal_52 == 1)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 150f, 150f, 150f, false, true, 0))
			{
				func_66();
			}
			if (func_149() || unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
				{
					unk_0x9F3480FE65DB31B5(bLocal_73[0], func_63());
					unk_0x3DBFC55D5C9BB447(bLocal_73[0], true);
					unk_0x0BDDB8D9EC6BCF3C(bLocal_73[0], false);
				}
			}
			else if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
			{
				unk_0xED74007FFB146BC2(bLocal_73[0]);
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if ((!unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_93, 3) && !unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_94, 3)) && !unk_0xBB062B2B5722478E(bLocal_73[0]))
					{
						unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_1", bLocal_93, 2f, -4f, -1, 1, false, false, false, false);
					}
					if (func_152())
					{
						func_62(0);
						iLocal_100 = 0;
					}
				}
				else if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_93, 3))
				{
					unk_0xEE08C992D238C5D1(bLocal_73[0], 0, false);
				}
			}
			else
			{
				if (unk_0x997ABD671D25CA0B(bLocal_73[0], false))
				{
					if (unk_0x1F0B79228E461EC9(bLocal_73[0], "random@drunk_driver_1", bLocal_93, 3))
					{
						unk_0xEE08C992D238C5D1(bLocal_73[0], 0, false);
					}
				}
				if (func_4() && !iLocal_100)
				{
					func_62(1);
					iLocal_100 = 1;
				}
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 8f, 8f, 8f, false, true, 0) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_126[0]));
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_82))
				{
					bLocal_82 = func_142(Local_69, 1);
				}
			}
			else
			{
				if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[0]))
				{
					uLocal_126[0] = func_167(bLocal_73[0], 0, 145);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_82))
				{
					unk_0x86A652570E5F25DD(&bLocal_82);
				}
			}
		}
	}
	if (iLocal_52 == 2)
	{
		if ((!unk_0x5F9532F3B5CC2551(bLocal_74, false) && !unk_0x84A2DD9AC37C35C1(bLocal_73[0])) && !unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 150f, 150f, 150f, false, true, 0) || !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[1], 150f, 150f, 150f, false, true, 0))
			{
				if (unk_0x7239B21A38F536BA(bLocal_73[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
					{
						if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
						{
							unk_0xED74007FFB146BC2(bLocal_73[0]);
						}
						unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
						unk_0x22B0D0E37CCB840D(bLocal_73[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
						func_70(bLocal_73[0], 120000, 0);
						unk_0x971D38760FBC02EF(bLocal_73[0], true);
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_73[1]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_73[1]))
					{
						if (unk_0x5891CAC5D4ACFF74(bLocal_73[1]))
						{
							unk_0xED74007FFB146BC2(bLocal_73[1]);
						}
						unk_0xE1EF3C1216AFF2CD(bLocal_73[1]);
						unk_0x22B0D0E37CCB840D(bLocal_73[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
						func_70(bLocal_73[1], 120000, 0);
						unk_0x971D38760FBC02EF(bLocal_73[1], true);
					}
				}
				func_66();
			}
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_74, false))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_73[0], bLocal_74, false) && unk_0xA3EE4A07279BB9DB(bLocal_73[1], bLocal_74, false))
				{
					if (func_152())
					{
						func_62(0);
						iLocal_100 = 0;
					}
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_82))
					{
						bLocal_82 = func_142(Local_69, 1);
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_127))
				{
					unk_0x86A652570E5F25DD(&bLocal_127);
				}
			}
			else
			{
				if ((func_4() && !iLocal_100) && iLocal_60 > 3)
				{
					func_62(1);
					iLocal_100 = 1;
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_127))
				{
					bLocal_127 = func_150(bLocal_74, 0, 0);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_82))
				{
					unk_0x86A652570E5F25DD(&bLocal_82);
				}
			}
		}
	}
}

void func_140()
{
	if (func_22() == 2)
	{
		if (!Global_32199)
		{
			func_141("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_141(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_142(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_143(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_143(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_144()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (!func_149())
			{
				if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
				{
					unk_0xED74007FFB146BC2(bLocal_73[0]);
				}
				if (unk_0x77F1BEB8863288D5(bLocal_73[0], 1227113341) != 1 && unk_0x77F1BEB8863288D5(bLocal_73[0], 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(bLocal_73[0], unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(bLocal_73[0], false))
				{
					unk_0x504D54DF3F6F2247(bLocal_73[0], false, 0);
				}
				if (!iLocal_102)
				{
					if (!func_4())
					{
						func_67(&uLocal_140, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_102 = 1;
					}
				}
			}
			else
			{
				iLocal_102 = 0;
				if (unk_0x77F1BEB8863288D5(bLocal_73[0], 1227113341) == 1 && unk_0x77F1BEB8863288D5(bLocal_73[0], 1227113341) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_73[0]);
				}
			}
		}
		else if (!unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
		{
			unk_0x9F3480FE65DB31B5(bLocal_73[0], func_63());
			unk_0x3DBFC55D5C9BB447(bLocal_73[0], true);
			unk_0x0BDDB8D9EC6BCF3C(bLocal_73[0], false);
		}
	}
}

float func_145(bool bParam0, bool bParam1, bool bParam2)
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

void func_146()
{
	if (!func_64())
	{
		if (func_22() == 2)
		{
			Global_32197 = 1;
		}
	}
}

void func_147(bool bParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bParam0))
			{
				unk_0xE8854A4326B9E12B(&iLocal_79);
				unk_0x0F804F1DB19B9689(false);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2060, 4);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
				unk_0x39E72BC99E6360CB(iLocal_79);
				unk_0x5ABA3986D90D8A3B(bParam0, iLocal_79);
				unk_0x3841422E9C488D8C(&iLocal_79);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x84A2DD9AC37C35C1(bParam0))
			{
				if (unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(bParam0))
			{
				if (!unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_148()
{
	if (func_22() == 0)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(false);
			iLocal_137++;
		}
	}
	else if (func_22() == 1)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(false);
			iLocal_137++;
		}
	}
	else if (func_22() == 2)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(false);
			iLocal_137++;
		}
	}
}

int func_149()
{
	int iVar0;
	
	if (iLocal_52 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_52 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if ((((((!unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()) && !unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= iVar0)
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
			if (((((!unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_150(bool bParam0, bool bParam1, bool bParam2)
{
	return func_151(bParam0, !bParam1, bParam2);
}

bool func_151(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_143(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_143(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_143(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

int func_152()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_153()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_73[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!iLocal_95)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_95 = 1;
				}
			}
			if (!iLocal_96)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_96 = 1;
				}
			}
		}
	}
}

void func_154()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_124))
	{
		unk_0x86A652570E5F25DD(&bLocal_124);
	}
	iLocal_59 = 0;
	while (iLocal_59 <= (iLocal_72 - 1))
	{
		if (!unk_0xA6DB27D19ECBB7DA(uLocal_126[iLocal_59]))
		{
			uLocal_126[iLocal_59] = func_167(bLocal_73[iLocal_59], 0, 145);
			unk_0x75A16C3DA34F1245(uLocal_126[iLocal_59], false);
		}
		iLocal_59++;
	}
}

void func_155()
{
	unk_0x23641AFE870AF385();
	Global_22597 = 0;
}

void func_156(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112442, unk_0x442E0A7EDE4A738A(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

int func_157(int iParam0)
{
	if (func_160())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_49(Global_113375))
		{
			func_158(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_49(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_141(func_159(iParam0), -1);
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
					func_141(func_159(iParam0), -1);
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
					func_141(func_159(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_159(int iParam0)
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

int func_160()
{
	switch (func_161(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_165(0))
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
		if (!func_163(iParam2))
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
			func_162(uParam0, iParam4);
		}
	}
	return 2;
}

void func_162(var uParam0, int iParam1)
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

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_43052);
}

int func_164(int iParam0, int iParam1)
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

int func_165(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_163(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_166(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, 0);
}

bool func_167(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_151(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

void func_168()
{
	if (func_170())
	{
		bLocal_93 = "drunk_idle_van";
		bLocal_94 = "vomit_van";
	}
	else if (func_169())
	{
		bLocal_93 = "drunk_idle_low";
		bLocal_94 = "vomit_low";
	}
	else
	{
		bLocal_93 = "drunk_idle";
		bLocal_94 = "vomit_outside";
	}
}

int func_169()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(bLocal_73[0], false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(bLocal_73[0], false), false))
		{
			iVar0 = unk_0x28D37D4F71AC5C58(unk_0x9A9112A0FE9A4713(bLocal_73[0], false));
			if ((((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1887744178) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(bLocal_73[0], false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(bLocal_73[0], false), false))
		{
			iVar0 = unk_0x28D37D4F71AC5C58(unk_0x9A9112A0FE9A4713(bLocal_73[0], false));
			if (((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184) || iVar0 == 1663892749)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_171()
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

void func_172()
{
	if (!iLocal_57)
	{
		func_174(39, 1);
		func_174(40, 1);
		func_174(41, 1);
		func_174(42, 1);
		func_174(43, 1);
		func_174(44, 1);
		unk_0xA56F01F3765B93A0(Local_62, 8f, true, false, false, false);
		unk_0x1B5C85C612E5256E(Local_62 - Vector(8f, 8f, 8f), Local_62 + Vector(8f, 8f, 8f), false, true, true, true);
		unk_0xC12321827687FE4D(Local_66 - Vector(10f, 15f, 15f), Local_66 + Vector(10f, 15f, 15f), false, true);
		unk_0xC12321827687FE4D(Local_69 - Vector(10f, 15f, 15f), Local_69 + Vector(10f, 15f, 15f), false, true);
		unk_0x933D6A9EEC1BACD0(&uLocal_123, 5);
		if (func_22() == 0)
		{
			func_173(&uLocal_140, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		}
		else if (func_22() == 1)
		{
			func_173(&uLocal_140, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
		}
		else if (func_22() == 2)
		{
			func_173(&uLocal_140, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
		}
		unk_0xF372BC22FCB88606("rghDrunkPeds", &iLocal_80);
		bLocal_74 = unk_0xAF35D0D2583051B0(bLocal_78, Local_66, bLocal_67, true, true, false);
		unk_0xB72E26D81006005B(bLocal_74);
		unk_0x49733E92263139D1(bLocal_74, 5f);
		unk_0x0FC2D89AC25A5814(bLocal_78, true);
		unk_0xB664292EAECF7FA6(bLocal_74, 3);
		unk_0x2B6747FAA9DB9D6B(bLocal_74, true);
		bLocal_68 = unk_0xEEF059FAD016D209(bLocal_74);
		bLocal_73[0] = unk_0xD49F9B0955C367DE(26, bLocal_76, Local_62, bLocal_63, true, true);
		unk_0x9F8AA94D6D97DBF4(bLocal_73[0], true);
		unk_0xC80A74AC829DDD92(bLocal_73[0], iLocal_80);
		unk_0x1913FE4CBF41C463(bLocal_73[0], 185, true);
		unk_0x70A2D1137C8ED7C9(bLocal_73[0], 65536, true);
		unk_0xE532F5D78798DAAB(bLocal_76);
		unk_0x9D64D7405520E3D3(bLocal_73[0], true);
		bLocal_73[1] = unk_0xD49F9B0955C367DE(26, bLocal_77, Local_64, bLocal_65, true, true);
		unk_0x9F8AA94D6D97DBF4(bLocal_73[1], true);
		unk_0xC80A74AC829DDD92(bLocal_73[1], iLocal_80);
		unk_0x1913FE4CBF41C463(bLocal_73[1], 185, true);
		unk_0x70A2D1137C8ED7C9(bLocal_73[1], 65536, true);
		unk_0x9D64D7405520E3D3(bLocal_73[1], true);
		unk_0xBF25EB89375A37AD(5, iLocal_80, joaat("player"));
		unk_0xE532F5D78798DAAB(bLocal_77);
		if (iLocal_52 == 1)
		{
			unk_0xEA47FE3719165B94(bLocal_73[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, false, false, false, false);
			unk_0xEA47FE3719165B94(bLocal_73[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, false, false, false, false);
			unk_0xAF8A94EDE7712BEF(bLocal_73[0], "MOVE_M@DRUNK@VERYDRUNK", 0.25f);
			unk_0xAF8A94EDE7712BEF(bLocal_73[1], "MOVE_M@DRUNK@MODERATEDRUNK", 0.25f);
			unk_0x262B14F48D29DE80(bLocal_73[0], 0, true, 2, 0);
			unk_0x262B14F48D29DE80(bLocal_73[0], 3, false, true, 0);
			unk_0x262B14F48D29DE80(bLocal_73[0], 4, false, true, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 0, true, true, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 3, false, false, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 4, false, true, 0);
			unk_0xA711568EEDB43069(bLocal_74, true);
			unk_0x1913FE4CBF41C463(bLocal_73[0], 206, true);
			unk_0x1913FE4CBF41C463(bLocal_73[0], 299, true);
			unk_0x63F58F7C80513AAD(bLocal_73[0], false);
			unk_0x6C8065A3B780185B(bLocal_73[0], "REDR1Drunk1_AI_Drunk");
			unk_0x6C8065A3B780185B(bLocal_73[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_173(&uLocal_140, 3, bLocal_73[0], "REDR1Drunk1", 0, 1);
			func_173(&uLocal_140, 4, bLocal_73[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_52 == 2)
		{
			unk_0x1B5C85C612E5256E(Local_69 - Vector(10f, 50f, 30f), Local_69 + Vector(10f, 50f, 30f), false, true, true, true);
			unk_0x92F0CF722BC4202F(bLocal_74, true);
			unk_0x262B14F48D29DE80(bLocal_73[1], 0, false, false, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 2, false, 2, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 3, true, true, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 4, true, 2, 0);
			unk_0x262B14F48D29DE80(bLocal_73[1], 8, false, false, 0);
			unk_0x1913FE4CBF41C463(bLocal_73[0], 134, true);
			unk_0x1913FE4CBF41C463(bLocal_73[1], 134, true);
			unk_0x1913FE4CBF41C463(bLocal_73[0], 26, true);
			unk_0x1913FE4CBF41C463(bLocal_73[1], 26, true);
			unk_0x1913FE4CBF41C463(bLocal_73[0], 206, true);
			unk_0x1913FE4CBF41C463(bLocal_73[1], 206, true);
			unk_0x63F58F7C80513AAD(bLocal_73[0], false);
			unk_0x63F58F7C80513AAD(bLocal_73[1], false);
			unk_0x142A02425FF02BD9(bLocal_73[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			unk_0x69F4BE8C8CC4796C(bLocal_73[0], bLocal_73[1], -1, 2060, 4);
			unk_0x142A02425FF02BD9(bLocal_73[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			unk_0x6373D1349925A70E(bLocal_73[1], false);
			unk_0x69F4BE8C8CC4796C(bLocal_73[1], bLocal_73[0], -1, 2060, 4);
			unk_0xAF8A94EDE7712BEF(bLocal_73[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0.25f);
			unk_0xAF8A94EDE7712BEF(bLocal_73[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0.25f);
			unk_0x6C8065A3B780185B(bLocal_73[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x6C8065A3B780185B(bLocal_73[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_173(&uLocal_140, 3, bLocal_73[0], "REDR2DrunkM", 0, 1);
			func_173(&uLocal_140, 4, bLocal_73[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_57 = 1;
	}
}

void func_173(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_174(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_178(iParam0, 2, 1))
		{
			func_177(iParam0, 2, 1);
		}
	}
	else if (func_178(iParam0, 2, 1))
	{
		func_175(iParam0, 2, 1);
	}
}

void func_175(int iParam0, bool bParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			bVar0 = func_89(func_176(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_85(func_176(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_176(int iParam0)
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

void func_177(int iParam0, bool bParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			bVar0 = func_89(func_176(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_85(func_176(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_178(int iParam0, int iParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			return BitTest(func_89(func_176(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_179()
{
	unk_0x963D27A58DF860AC(bLocal_76);
	unk_0x963D27A58DF860AC(bLocal_78);
	unk_0x963D27A58DF860AC(bLocal_77);
	if (iLocal_52 == 1)
	{
		unk_0x944955FB2A3935C8();
		unk_0xD3BD40951412FEF6("random@drunk_driver_1");
		unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@VERYDRUNK");
		unk_0x2F844A8B08D76685("Taxi_Vomit", false, -1);
	}
	else if (iLocal_52 == 2)
	{
		unk_0xD3BD40951412FEF6("random@drunk_driver_2");
		unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0x98A4EB5D89A0C952(bLocal_76) && unk_0x98A4EB5D89A0C952(bLocal_78)) && unk_0xC4EA073D86FB29B0("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0x98A4EB5D89A0C952(bLocal_77))
	{
		if (iLocal_52 == 1)
		{
			if (((unk_0xCA7D9B86ECA7481B() && unk_0xD031A9162D01088C("random@drunk_driver_1")) && unk_0xC4EA073D86FB29B0("MOVE_M@DRUNK@VERYDRUNK")) && unk_0x2F844A8B08D76685("CONSTRUCTION_ACCIDENT_1", false, -1))
			{
				iLocal_54 = 1;
			}
		}
		else if (iLocal_52 == 2)
		{
			if ((unk_0xD031A9162D01088C("random@drunk_driver_2") && unk_0xD031A9162D01088C("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0xD031A9162D01088C("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_54 = 1;
			}
		}
	}
	else
	{
		unk_0x963D27A58DF860AC(bLocal_76);
		unk_0x963D27A58DF860AC(bLocal_78);
		unk_0x963D27A58DF860AC(bLocal_77);
		if (iLocal_52 == 1)
		{
			unk_0x944955FB2A3935C8();
			unk_0xD3BD40951412FEF6("random@drunk_driver_1");
			unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@VERYDRUNK");
			unk_0x2F844A8B08D76685("Taxi_Vomit", false, -1);
		}
		else if (iLocal_52 == 2)
		{
			unk_0xD3BD40951412FEF6("random@drunk_driver_2");
			unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_180()
{
	if (iLocal_52 == 1)
	{
		Local_125 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_72 = 2;
		bLocal_76 = joaat("a_m_y_beachvesp_01");
		bLocal_77 = joaat("a_m_y_beachvesp_02");
		Local_62 = { -1016.762f, -1356.459f, 4.5531f };
		bLocal_63 = 247.8087f;
		Local_64 = { -1015.572f, -1357.081f, 4.552f };
		bLocal_65 = 66.3861f;
		Local_66 = { -1027.762f, -1341.644f, 4.4614f };
		bLocal_67 = 76.9418f;
		bLocal_78 = joaat("baller2");
		Local_69 = { 160.8892f, -111.4167f, 61.2999f };
		Local_70 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_56 = true;
	}
	if (iLocal_52 == 2)
	{
		Local_125 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_72 = 2;
		bLocal_76 = joaat("a_m_y_genstreet_01");
		bLocal_77 = joaat("a_f_y_hipster_03");
		Local_62 = { 1893.856f, 3714.346f, 31.7771f };
		bLocal_63 = 252.0142f;
		Local_64 = { 1894.763f, 3714.16f, 31.7605f };
		bLocal_65 = 86.1102f;
		Local_66 = { 1888.256f, 3717.189f, 31.8394f };
		bLocal_67 = 299.4672f;
		bLocal_78 = joaat("emperor");
		Local_69 = { 1120.551f, 2647.307f, 36.9963f };
		Local_70 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_56 = true;
	}
}

int func_181()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_192())
		{
			return 0;
		}
	}
	if (func_188())
	{
		return 1;
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_182(float fParam0, bool bParam1)
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
		if (func_24(func_22()))
		{
			iVar5 = func_54();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_183(iVar1, &Var0);
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

void func_183(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_184(uParam1, "Abigail1", func_186(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 1:
			func_184(uParam1, "Abigail2", func_186(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 2:
			func_184(uParam1, "Barry1", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 3:
			func_184(uParam1, "Barry2", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 4:
			func_184(uParam1, "Barry3", func_186(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 5:
			func_184(uParam1, "Barry3A", func_186(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 6:
			func_184(uParam1, "Barry3C", func_186(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 7:
			func_184(uParam1, "Barry4", func_186(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_185(iParam0), 0, 0);
			break;
		
		case 8:
			func_184(uParam1, "Dreyfuss1", func_186(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 9:
			func_184(uParam1, "Epsilon1", func_186(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 10:
			func_184(uParam1, "Epsilon2", func_186(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 11:
			func_184(uParam1, "Epsilon3", func_186(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 12:
			func_184(uParam1, "Epsilon4", func_186(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 13:
			func_184(uParam1, "Epsilon5", func_186(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 14:
			func_184(uParam1, "Epsilon6", func_186(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 15:
			func_184(uParam1, "Epsilon7", func_186(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 16:
			func_184(uParam1, "Epsilon8", func_186(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 17:
			func_184(uParam1, "Extreme1", func_186(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 18:
			func_184(uParam1, "Extreme2", func_186(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 19:
			func_184(uParam1, "Extreme3", func_186(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 20:
			func_184(uParam1, "Extreme4", func_186(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 21:
			func_184(uParam1, "Fanatic1", func_186(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 22:
			func_184(uParam1, "Fanatic2", func_186(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 23:
			func_184(uParam1, "Fanatic3", func_186(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_185(iParam0), 0, 1);
			break;
		
		case 24:
			func_184(uParam1, "Hao1", func_186(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_185(iParam0), 0, 1);
			break;
		
		case 25:
			func_184(uParam1, "Hunting1", func_186(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 26:
			func_184(uParam1, "Hunting2", func_186(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 27:
			func_184(uParam1, "Josh1", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 28:
			func_184(uParam1, "Josh2", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 29:
			func_184(uParam1, "Josh3", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 30:
			func_184(uParam1, "Josh4", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 31:
			func_184(uParam1, "Maude1", func_186(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 32:
			func_184(uParam1, "Minute1", func_186(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 33:
			func_184(uParam1, "Minute2", func_186(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 34:
			func_184(uParam1, "Minute3", func_186(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 35:
			func_184(uParam1, "MrsPhilips1", func_186(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 36:
			func_184(uParam1, "MrsPhilips2", func_186(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 37:
			func_184(uParam1, "Nigel1", func_186(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 38:
			func_184(uParam1, "Nigel1A", func_186(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 39:
			func_184(uParam1, "Nigel1B", func_186(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 40:
			func_184(uParam1, "Nigel1C", func_186(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 41:
			func_184(uParam1, "Nigel1D", func_186(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 42:
			func_184(uParam1, "Nigel2", func_186(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 43:
			func_184(uParam1, "Nigel3", func_186(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 44:
			func_184(uParam1, "Omega1", func_186(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 45:
			func_184(uParam1, "Omega2", func_186(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 46:
			func_184(uParam1, "Paparazzo1", func_186(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 47:
			func_184(uParam1, "Paparazzo2", func_186(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 48:
			func_184(uParam1, "Paparazzo3", func_186(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 49:
			func_184(uParam1, "Paparazzo3A", func_186(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 50:
			func_184(uParam1, "Paparazzo3B", func_186(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 51:
			func_184(uParam1, "Paparazzo4", func_186(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 52:
			func_184(uParam1, "Rampage1", func_186(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 54:
			func_184(uParam1, "Rampage3", func_186(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 55:
			func_184(uParam1, "Rampage4", func_186(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 56:
			func_184(uParam1, "Rampage5", func_186(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 53:
			func_184(uParam1, "Rampage2", func_186(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 57:
			func_184(uParam1, "TheLastOne", func_186(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 58:
			func_184(uParam1, "Tonya1", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 59:
			func_184(uParam1, "Tonya2", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 60:
			func_184(uParam1, "Tonya3", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 61:
			func_184(uParam1, "Tonya4", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 62:
			func_184(uParam1, "Tonya5", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_184(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_185(int iParam0)
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

struct<2> func_186(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_187(iParam0) };
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

struct<2> func_187(int iParam0)
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

int func_188()
{
	if (func_191() && !func_192())
	{
		return 1;
	}
	if (func_190() && func_189())
	{
		return 1;
	}
	return 0;
}

bool func_189()
{
	return Global_113104 > 0;
}

int func_190()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_192()
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

int func_193()
{
	if (!func_163(5))
	{
		return 1;
	}
	if (func_188())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_192())
		{
			return 0;
		}
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if ((Global_113375 == func_58() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_197(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_196();
}

void func_196()
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

void func_197(int iParam0)
{
	Global_113375 = iParam0;
}

int func_198(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_58();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_239())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_192())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_39(0))
		{
			return 0;
		}
		if (func_188())
		{
			return 0;
		}
		if (func_238())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_182(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_237(iParam1))
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_236(func_22()) == 4 || func_236(func_22()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_22()))
		{
			if (!func_235(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_234(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_233())
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
		if (!func_224(4))
		{
			return 0;
		}
		if (!func_163(5))
		{
			return 0;
		}
		if (func_223(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_223(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_237(30) && !func_223(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_22()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_222(bVar4))
				{
					if (func_200(iVar2))
					{
						if (!func_199(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_22() != iVar2)
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

bool func_199(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_200(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_201(bVar0);
}

int func_201(bool bParam0)
{
	return func_202(bParam0, 1);
}

int func_202(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_222(bParam0))
	{
		return 0;
	}
	func_203(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_203(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_204(func_215(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_204(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_214(bParam0, bParam1))
	{
		bVar0 = func_213(bParam1);
		iVar1 = func_211(bParam0);
		iVar2 = (func_211(bParam0) - func_211(bParam1));
		iVar3 = (func_213(bParam0) - func_213(bParam1));
		iVar4 = (func_210(bParam0) - func_210(bParam1));
		iVar5 = (func_209(bParam0) - func_209(bParam1));
		iVar6 = (func_208(bParam0) - func_208(bParam1));
		iVar7 = (func_207(bParam0) - func_207(bParam1));
	}
	else
	{
		bVar0 = func_213(bParam0);
		iVar1 = func_211(bParam1);
		iVar2 = (func_211(bParam1) - func_211(bParam0));
		iVar3 = (func_213(bParam1) - func_213(bParam0));
		iVar4 = (func_210(bParam1) - func_210(bParam0));
		iVar5 = (func_209(bParam1) - func_209(bParam0));
		iVar6 = (func_208(bParam1) - func_208(bParam0));
		iVar7 = (func_207(bParam1) - func_207(bParam0));
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
		iVar4 = (iVar4 + func_206(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_205(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_205(bool bParam0, float fParam1, float fParam2)
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

int func_206(int iParam0, int iParam1)
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

int func_207(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_208(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_209(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_210(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_211(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_212(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_212(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_213(bool bParam0)
{
	return (bParam0 && 15);
}

int func_214(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_222(bParam1) || !func_222(bParam0))
	{
		return 1;
	}
	iVar0 = func_211(bParam0);
	iVar1 = func_211(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_213(bParam0);
	iVar1 = func_213(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(bParam0);
	iVar1 = func_210(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(bParam0);
	iVar1 = func_209(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(bParam0);
	iVar1 = func_208(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(bParam0);
	iVar1 = func_207(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	var uVar0;
	
	func_221(&uVar0, unk_0x494E97C2EF27C470());
	func_220(&uVar0, unk_0x13D2B8ADD79640F2());
	func_219(&uVar0, unk_0x25223CA6B4D20B7F());
	func_218(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_217(&uVar0, unk_0xBBC72712E80257A1());
	func_216(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_216(var uParam0, int iParam1)
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

void func_217(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_211(*uParam0);
	if (bParam1 < 1 || bParam1 > func_206(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_219(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_222(bool bParam0)
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
	iVar0 = func_207(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_208(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_209(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_211(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_213(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_210(bParam0);
	if (iVar5 < 1 || iVar5 > func_206(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_22();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_232()) || Global_112433) || Global_31962) || func_231()) || func_30(8, -1)) || func_230()) || func_229()) || func_228()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_232()) || Global_31962) || func_231()) || func_30(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_232()) || Global_112433) || Global_31962) || func_231()) || func_30(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_232()) || Global_112433) || Global_31962) || func_231()) || func_30(8, -1)) || func_230()) || func_229()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_30(8, -1)) || func_227()) || func_226()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_30(8, -1) || func_230()) || func_229()) || func_226()) || func_225())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_31962) || func_231()) || func_30(8, -1)) || func_229()) || func_228()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_232()) || func_229()) || Global_112433) || Global_31962) || func_231()) || Global_44238) || func_30(8, -1)) || func_228()) || func_226()) || func_227()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_112433) || Global_31962) || func_231()) || func_30(8, -1)) || func_228()) || func_226()) || func_230()) || func_229()) || func_227())
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

var func_225()
{
	return Global_100480.f_1;
}

int func_226()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_227()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
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

bool func_229()
{
	return Global_100493.f_376 > 0;
}

bool func_230()
{
	return Global_100493.f_375 > 0;
}

var func_231()
{
	return Global_1575058;
}

int func_232()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_233()
{
	func_21();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_234(bool bParam0)
{
	return func_214(func_215(), bParam0);
}

int func_235(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22();
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

int func_236(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_239())
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

int func_238()
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

int func_239()
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

void func_240()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if ((unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		}
	}
	if (iLocal_139)
	{
		func_279(0);
		if (Global_32201)
		{
			unk_0x706D57B0F50DA710("AC_STOP");
		}
		func_278();
		func_6();
		unk_0xB542DE8C3D1CB210(false);
		unk_0xD37401D78A929A49();
		unk_0xC12321827687FE4D(Local_66 - Vector(10f, 15f, 15f), Local_66 + Vector(10f, 15f, 15f), true, true);
		unk_0xC12321827687FE4D(Local_69 - Vector(10f, 15f, 15f), Local_69 + Vector(10f, 15f, 15f), true, true);
		func_156(0);
		if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (!unk_0x0A7B270912999B3C(unk_0xB6997A7EB3F5C8C0()))
			{
				unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bLocal_75, false))
		{
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_75, false) && func_145(unk_0xD80958FC74E988A6(), bLocal_75, 1) > 50f)
			{
				func_252(bLocal_75, 0, 145);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_73[0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_73[0]))
			{
				unk_0x1913FE4CBF41C463(bLocal_73[0], 317, true);
				if (!unk_0x997ABD671D25CA0B(bLocal_73[0], false))
				{
					unk_0xBB8DE8CF6A8DD8BB(bLocal_73[0]);
				}
				if (unk_0x5891CAC5D4ACFF74(bLocal_73[0]))
				{
					unk_0xED74007FFB146BC2(bLocal_73[0]);
				}
			}
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (unk_0x7239B21A38F536BA(bLocal_73[iLocal_59]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_73[iLocal_59]))
				{
					unk_0x1913FE4CBF41C463(bLocal_73[iLocal_59], 317, true);
					if (!unk_0x997ABD671D25CA0B(bLocal_73[iLocal_59], false))
					{
						unk_0xBB8DE8CF6A8DD8BB(bLocal_73[iLocal_59]);
					}
					unk_0x63F58F7C80513AAD(bLocal_73[iLocal_59], true);
					unk_0xBF25EB89375A37AD(255, iLocal_80, joaat("player"));
					unk_0x9F8AA94D6D97DBF4(bLocal_73[iLocal_59], false);
				}
				unk_0x2595DD4236549CE3(&(bLocal_73[iLocal_59]));
			}
			iLocal_59++;
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (unk_0xA6DB27D19ECBB7DA(uLocal_126[iLocal_59]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_126[iLocal_59]));
			}
			iLocal_59++;
		}
		if (iLocal_52 == 1)
		{
			unk_0x1EE7063B80FFC77C(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, true);
		}
		if (unk_0xA7A932170592B50E(bLocal_107))
		{
			if (unk_0xDFB2B516207D3534(bLocal_107))
			{
				unk_0x026FB97D0A425F84(bLocal_107, false);
			}
		}
	}
	func_241(-1);
	unk_0x1090044AD1DA76FA();
}

void func_241(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_194())
	{
		func_245(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_113375, 1), 64);
		if (func_57(Global_113375) > 0)
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
	func_242(&Global_32019);
	Global_113376 = 0;
	func_197(-1);
}

void func_242(var uParam0)
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

char* func_243(int iParam0, bool bParam1)
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

void func_244(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_245(int iParam0)
{
	func_246(iParam0, 0, func_251(iParam0));
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_215();
	func_249(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &uVar0);
	Var1 = { func_247(&uVar0) };
}

struct<16> func_247(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_209(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_207(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_210(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_213(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_211(*uParam0), 64);
	return Var0;
}

void func_248(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_211(*uParam0);
	iVar1 = func_213(*uParam0);
	bVar2 = func_210(*uParam0);
	bVar3 = func_209(*uParam0);
	bVar4 = func_208(*uParam0);
	bVar5 = func_207(*uParam0);
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
	iVar6 = func_206(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_206(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_250(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_250(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_221(uParam0, bParam1);
	func_220(uParam0, bParam2);
	func_219(uParam0, bParam3);
	func_217(uParam0, iParam5);
	func_218(uParam0, bParam4);
	func_216(uParam0, iParam6);
}

int func_251(int iParam0)
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

int func_252(bool bParam0, int iParam1, int iParam2)
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
	func_253(bParam0, iParam2);
	return 1;
}

void func_253(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_259(bParam0))
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
	func_254(bParam0, &(Global_113386.f_32749.f_5510));
}

void func_254(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_258(uParam1);
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
		if (uParam1->f_65 == -1 && !func_257(uParam1->f_66))
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
		func_256(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_255(iVar0 + 1));
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

int func_255(int iParam0)
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

int func_256(bool bParam0, var uParam1, var uParam2)
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

int func_257(int iParam0)
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

void func_258(var uParam0)
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

int func_259(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_276(bParam0, 0, 0)) || func_276(bParam0, 1, 0)) || func_276(bParam0, 2, 0)) || func_275(bParam0) != 145) || func_274(bParam0)) || func_273(bParam0)) || func_272(bParam0)) || func_271(bParam0)) || !func_260(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_273(bParam0))
		{
		}
		if (func_273(bParam0))
		{
		}
		if (func_276(bParam0, 0, 0))
		{
		}
		if (func_276(bParam0, 1, 0))
		{
		}
		if (func_276(bParam0, 2, 0))
		{
		}
		if (func_275(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_260(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_261(bParam0, 0))
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

int func_261(bool bParam0, bool bParam1)
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
		if (!func_239())
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
		if ((((!func_270() && !func_269()) && !func_268()) && !func_267()) && !func_239())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_266() || unk_0x48AF36444B965238()) || func_265())
		{
		}
		else if (!func_268())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_264(bParam0))
		{
			return 0;
		}
	}
	if (!func_262(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_262(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_263())
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

int func_263()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_264(bool bParam0)
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

bool func_265()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_266()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_267()
{
	return 0;
}

int func_268()
{
	return 1;
}

int func_269()
{
	return 1;
}

int func_270()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_271(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_261(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_272(bool bParam0)
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

int func_273(bool bParam0)
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

int func_274(bool bParam0)
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

int func_275(bool bParam0)
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

int func_276(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_277(iParam1, iVar0, &sVar1, &iVar2))
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

int func_277(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_278()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_279(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_174(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_280()
{
	float fVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_306, true);
		iLocal_305 = 1;
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_307, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_307, true);
			iLocal_305 = 2;
		}
		if (iLocal_305 == 1)
		{
			bLocal_308 = true;
			iLocal_52 = 1;
			return Local_306;
		}
		if (iLocal_305 == 2)
		{
			bLocal_308 = 2;
			iLocal_52 = 2;
			return Local_307;
		}
	}
	return 0f, 0f, 0f;
}

