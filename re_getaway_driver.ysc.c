#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	struct<3> Local_244 = { 0, 0, 0 } ;
	struct<3> Local_245 = { 0, 0, 0 } ;
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[2] = { 0, 0 };
	bool bLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	bool bLocal_259[5] = { 0, 0, 0, 0, 0 };
	int iLocal_260[3] = { 0, 0, 0 };
	int iLocal_261[2] = { 0, 0 };
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 8;
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
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 1;
	struct<2> Local_418 = { 0, 5 } ;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
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
	iLocal_47 = unk_0x4A9923385BDB9DAD();
	iLocal_48 = unk_0x186E5D252FA50E7D();
	fLocal_50 = -1f;
	iLocal_218 = 1;
	iLocal_227 = -1;
	iLocal_228 = -1;
	Local_236 = { 370.2576f, -1597.488f, 35.94954f };
	Local_237 = { 824.992f, -1289.267f, 27.24564f };
	Local_238 = { 450.1889f, -981.6754f, 42.69174f };
	Local_239 = { -1088.37f, -842.2911f, 30.27554f };
	Local_240 = { 608.9076f, 0.806411f, 100.2497f };
	Local_241 = { -562.0159f, -130.8113f, 37.4369f };
	Local_242 = { 1855.237f, 3683.236f, 33.29165f };
	Local_243 = { -443.5063f, 6016.231f, 30.71787f };
	Local_244 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar2 = 0;
	Local_232 = { ScriptParam_418.f_1[0 /*3*/] };
	Var1.f_0 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_258[0]))
			{
				unk_0xED74007FFB146BC2(iLocal_258[0]);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_258[1]))
			{
				unk_0xED74007FFB146BC2(iLocal_258[1]);
			}
		}
		func_246(Var1, &iLocal_258, bVar4);
	}
	func_245(&uLocal_270, 3);
	if (func_214(Local_232, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (iVar0 != 7)
	{
		bVar8 = false;
		func_208(&uLocal_270);
		if (!unk_0xC5042CC6F5E3D450() && !func_207())
		{
			bVar8 = false;
			iVar0 = 7;
			func_246(Var1, &iLocal_258, bVar4);
		}
		if (!func_207())
		{
			if (func_206() || func_205(7))
			{
				bVar8 = false;
				iVar0 = 7;
				func_246(Var1, &iLocal_258, bVar4);
			}
		}
		unk_0x208784099002BC30("RE_GD", 0);
		if (func_204())
		{
			if (unk_0x7239B21A38F536BA(iLocal_258[0]))
			{
				unk_0x9614299DCB53E54B(&(iLocal_258[0]));
			}
			if (unk_0x7239B21A38F536BA(iLocal_258[1]))
			{
				unk_0x9614299DCB53E54B(&(iLocal_258[1]));
			}
			while (!func_203())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			func_199(9, 0);
			func_190(-1, 0);
			func_187();
			bVar8 = false;
			iVar0 = 7;
			func_246(Var1, &iLocal_258, bVar4);
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) && !unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0x16EC4839969F9F5E(func_186(unk_0x4F8644AF03D0E0D6()) - Vector(10f, 20f, 20f), func_186(unk_0x4F8644AF03D0E0D6()) + Vector(10f, 20f, 20f)) || unk_0x7EEF65D5F153E26A(func_186(unk_0x4F8644AF03D0E0D6()) - Vector(10f, 20f, 20f), func_186(unk_0x4F8644AF03D0E0D6()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1])) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false)) && unk_0xA3EE4A07279BB9DB(iLocal_258[0], unk_0xB6997A7EB3F5C8C0(), false)) && unk_0xA3EE4A07279BB9DB(iLocal_258[1], unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 0.2f)
					{
						if (iLocal_228 == -1)
						{
							iLocal_228 = unk_0x9CD27B0045628463();
						}
					}
					else
					{
						iLocal_228 = -1;
					}
					if (iLocal_228 != -1 && unk_0x9CD27B0045628463() > iLocal_228 + 1000)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_228 != -1 && unk_0x9CD27B0045628463() > iLocal_228 + 10000)
						{
							func_169();
							unk_0x4EDE34FBADD967A6(false);
							func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
							{
								unk_0xE8854A4326B9E12B(&iLocal_265);
								unk_0x504D54DF3F6F2247(false, false, 0);
								unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								unk_0x39E72BC99E6360CB(iLocal_265);
								unk_0x5ABA3986D90D8A3B(iLocal_258[0], iLocal_265);
								unk_0x3841422E9C488D8C(&iLocal_265);
								unk_0x971D38760FBC02EF(iLocal_258[0], true);
							}
							if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
							{
								unk_0xE8854A4326B9E12B(&iLocal_265);
								unk_0x504D54DF3F6F2247(false, 500, 0);
								unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								unk_0x39E72BC99E6360CB(iLocal_265);
								unk_0x5ABA3986D90D8A3B(iLocal_258[1], iLocal_265);
								unk_0x3841422E9C488D8C(&iLocal_265);
								unk_0x971D38760FBC02EF(iLocal_258[1], true);
							}
							bVar8 = false;
							iVar0 = 7;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
				}
			}
		}
		if (iVar2 > 1)
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
			{
				unk_0xBF25EB89375A37AD(255, iLocal_266, -1033021910);
				unk_0xBF25EB89375A37AD(255, iLocal_266, 1166638144);
				unk_0xBF25EB89375A37AD(255, -1033021910, iLocal_266);
				unk_0xBF25EB89375A37AD(255, 1166638144, iLocal_266);
			}
			else
			{
				unk_0xBF25EB89375A37AD(1, iLocal_266, -1033021910);
				unk_0xBF25EB89375A37AD(1, iLocal_266, 1166638144);
				unk_0xBF25EB89375A37AD(1, -1033021910, iLocal_266);
				unk_0xBF25EB89375A37AD(1, 1166638144, iLocal_266);
			}
		}
		if ((iVar2 > 1 && iVar2 < 7) && !iLocal_253)
		{
			if (unk_0x7239B21A38F536BA(bLocal_257))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_257, unk_0xD80958FC74E988A6(), true))
				{
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
					{
						unk_0x22B0D0E37CCB840D(iLocal_258[0], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
					{
						unk_0x22B0D0E37CCB840D(iLocal_258[1], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					}
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if ((iVar2 > 7 && iVar2 < 18) && !iLocal_253)
		{
			if (unk_0x7239B21A38F536BA(iLocal_258[0]) && unk_0x7239B21A38F536BA(iLocal_258[1]))
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_258[1]) || !unk_0x751B70C3D034E187(iLocal_258[0], unk_0xD80958FC74E988A6(), 80f, 80f, 80f, false, true, 0))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(iLocal_258[0], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(iLocal_258[0], true);
						func_169();
						unk_0x4EDE34FBADD967A6(false);
						func_171(&uLocal_53, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (unk_0x84A2DD9AC37C35C1(iLocal_258[0]) || !unk_0x751B70C3D034E187(iLocal_258[1], unk_0xD80958FC74E988A6(), 80f, 80f, 80f, false, true, 0))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(iLocal_258[1], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(iLocal_258[1], true);
						func_169();
						unk_0x4EDE34FBADD967A6(false);
						func_171(&uLocal_53, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if (func_168(&iLocal_258, unk_0xB6997A7EB3F5C8C0(), 180f))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_258[0], unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(iLocal_258[0], unk_0xD80958FC74E988A6(), true))
			{
				iLocal_253 = 1;
			}
			if (iLocal_253)
			{
				if (!bLocal_248)
				{
					func_167();
				}
				if (!bLocal_249)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						if (unk_0x1F0B79228E461EC9(bLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0x1F0B79228E461EC9(bLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0xEA47FE3719165B94(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, false, false, false);
						}
						unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2052, 4);
						unk_0x6A071245EB0D1882(false, unk_0xD80958FC74E988A6(), -1, 5f, 3f, 2f, 0);
						unk_0xEA47FE3719165B94(false, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, false, false, false, false);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 3000);
						unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_STAND_MOBILE", 0, true);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(bLocal_257, iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(bLocal_257, true);
						bLocal_249 = true;
					}
				}
			}
			else
			{
				bVar8 = false;
				iVar0 = 7;
				func_246(Var1, &iLocal_258, bVar4);
			}
			if (bLocal_248)
			{
				unk_0x020E5F00CDA207BA(1f);
				unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_260[0]))
				{
					if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
					{
						if (unk_0x751B70C3D034E187(iLocal_260[0], unk_0xD80958FC74E988A6(), 4f, 4f, 4f, false, true, 0))
						{
							if (!func_185())
							{
								unk_0x69F4BE8C8CC4796C(iLocal_260[0], unk_0xD80958FC74E988A6(), 1000, 2052, 4);
								func_171(&uLocal_53, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(false);
							}
							else
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_260[0]))
								{
									unk_0x9F8AA94D6D97DBF4(iLocal_260[0], false);
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_260[1]))
								{
									unk_0x9F8AA94D6D97DBF4(iLocal_260[1], false);
								}
								if (unk_0xC9D9444186B5A374() > 3000)
								{
									while (!func_203())
									{
										unk_0x4EDE34FBADD967A6(false);
									}
									func_199(9, 0);
									func_166(5);
									func_190(-1, 0);
									func_187();
									bVar8 = false;
									iVar0 = 7;
									func_246(Var1, &iLocal_258, bVar4);
								}
							}
						}
						else if (!unk_0x751B70C3D034E187(iLocal_260[0], unk_0xD80958FC74E988A6(), 120f, 120f, 120f, false, true, 0))
						{
							bVar8 = false;
							iVar0 = 7;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_260[0]);
						func_169();
						unk_0x4EDE34FBADD967A6(false);
						bVar8 = false;
						iVar0 = 7;
						func_246(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x84A2DD9AC37C35C1(bLocal_257))
				{
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
			if (bLocal_249)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
				{
					if (unk_0x751B70C3D034E187(bLocal_257, unk_0xD80958FC74E988A6(), 4f, 4f, 4f, false, true, 0))
					{
						if (!func_185())
						{
							unk_0x69F4BE8C8CC4796C(bLocal_257, unk_0xD80958FC74E988A6(), 3000, 2048, 2);
							func_171(&uLocal_53, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
							{
								unk_0x63F58F7C80513AAD(bLocal_257, true);
							}
							while (func_185())
							{
								unk_0x4EDE34FBADD967A6(false);
							}
							while (!func_203())
							{
								unk_0x4EDE34FBADD967A6(false);
							}
							unk_0xEAABE8FDFA21274C(true);
							func_199(9, 0);
							func_166(5);
							func_190(-1, 0);
							func_187();
							bVar8 = false;
							iVar0 = 7;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
					else if (!unk_0x751B70C3D034E187(bLocal_257, unk_0xD80958FC74E988A6(), 120f, 120f, 120f, false, true, 0))
					{
						bVar8 = false;
						iVar0 = 7;
						func_246(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x84A2DD9AC37C35C1(iLocal_260[0]))
				{
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_154())
				{
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (func_142(1, Var1))
				{
					bVar8 = false;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_130(3))
				{
					iLocal_269 = 1;
					func_129(1);
					iVar7 = unk_0x9CD27B0045628463();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				bVar8 = false;
				break;
			
			case 4:
				bVar8 = false;
				unk_0x933D6A9EEC1BACD0(&uVar3, 4);
				unk_0x933D6A9EEC1BACD0(&uVar3, true);
				unk_0x933D6A9EEC1BACD0(&uVar3, 5);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
					{
						if (func_128())
						{
							if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
							{
								if ((unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), false, false) && unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), 2, false)) && unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), true, false))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				unk_0xFF071FB798B803B0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), &uVar5, &uVar6, 1, 3f, 0);
				if (func_127(iVar7, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar2 > 1)
				{
					if (!func_207())
					{
						if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							bVar8 = false;
							iVar0 = 6;
							break;
						}
						if (!iLocal_252)
						{
							if (unk_0x7E9DFE24AC1E58EF(unk_0xD80958FC74E988A6(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), false, true))
							{
								iVar9 = 0;
								while (iVar9 < bLocal_259)
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_259[iVar9]))
									{
										unk_0x22B0D0E37CCB840D(bLocal_259[iVar9], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
										unk_0x971D38760FBC02EF(bLocal_259[iVar9], true);
									}
									iVar9++;
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
								{
									unk_0x22B0D0E37CCB840D(bLocal_257, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
									unk_0x971D38760FBC02EF(bLocal_257, true);
								}
								iLocal_252 = 1;
							}
						}
					}
				}
				else if (func_154())
				{
					bVar8 = false;
					iVar0 = 7;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, &iLocal_258, &bVar8, &bVar4))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				bVar8 = false;
				iVar0 = 7;
				func_246(Var1, &iLocal_258, bVar4);
				break;
				break;
			
			case 7:
				bVar8 = false;
				break;
		}
		if (iVar0 != 7)
		{
			unk_0x4EDE34FBADD967A6(bVar8);
		}
	}
	func_246(Var1, &iLocal_258, bVar4);
}

int func_1(int iParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	int iVar0;
	struct<3> Var1[2];
	float fVar2[2];
	struct<3> Var3;
	bool bVar4;
	struct<3> Var5[5];
	float fVar6;
	struct<3> Var7[5];
	int iVar8;
	struct<3> Var9;
	int iVar10[3];
	struct<3> Var11;
	struct<3> Var12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	
	Var5[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	Var5[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	Var5[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	Var5[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	Var5[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	Var7[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	Var7[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	Var7[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	Var7[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	Var7[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_126(Local_232, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam7 = 0;
			func_120(39, 1);
			func_120(40, 1);
			func_120(41, 1);
			func_120(42, 1);
			func_120(43, 1);
			func_120(44, 1);
			if (func_119() == 0)
			{
				func_118(&uLocal_53, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
			}
			else if (func_119() == 1)
			{
				func_118(&uLocal_53, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
			}
			else if (func_119() == 2)
			{
				func_118(&uLocal_53, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
			}
			if (unk_0x2A488C176D52CCA5(Local_232, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				Var1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar2[0] = 58.2967f;
				Var1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar2[1] = 92.7793f;
				Var3 = { 939.2422f, 3649.755f, 31.3536f };
				bVar4 = 260.4475f;
			}
			else if (unk_0x2A488C176D52CCA5(Local_232, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				Var1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar2[0] = 198.4093f;
				Var1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar2[1] = 254.133f;
				Var3 = { 68.4259f, -1569.067f, 28.6027f };
				bVar4 = 64.1114f;
			}
			iLocal_231 = unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6());
			unk_0xC12321827687FE4D(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), false, true);
			unk_0x1B5C85C612E5256E(Local_232 - Vector(50f, 50f, 50f), Local_232 + Vector(50f, 50f, 50f), false, true, true, true);
			unk_0x34F060F4BF92E018(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), false, 0);
			unk_0xBF1A602B5BA52FEE(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), false, true);
			unk_0x963D27A58DF860AC(joaat("picador"));
			unk_0x963D27A58DF860AC(joaat("stanier"));
			unk_0x963D27A58DF860AC(joaat("patriot"));
			while ((!unk_0x98A4EB5D89A0C952(joaat("picador")) || !unk_0x98A4EB5D89A0C952(joaat("stanier"))) || !unk_0x98A4EB5D89A0C952(joaat("patriot")))
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			iVar10[0] = unk_0xAF35D0D2583051B0(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, true, true, false);
			iVar10[1] = unk_0xAF35D0D2583051B0(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, true, true, false);
			iVar10[2] = unk_0xAF35D0D2583051B0(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, true, true, false);
			unk_0x49733E92263139D1(iVar10[0], 5f);
			unk_0x49733E92263139D1(iVar10[1], 5f);
			unk_0x49733E92263139D1(iVar10[2], 5f);
			if (iLocal_229 == 0)
			{
			}
			unk_0xF372BC22FCB88606("reCriminals", &iLocal_266);
			unk_0xF372BC22FCB88606("reShopKeep", &iLocal_267);
			unk_0xF372BC22FCB88606("reCops", &iLocal_268);
			unk_0xBF25EB89375A37AD(5, iLocal_266, joaat("COP"));
			unk_0xBF25EB89375A37AD(5, iLocal_268, iLocal_266);
			unk_0xBF25EB89375A37AD(5, joaat("COP"), iLocal_266);
			unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_268);
			unk_0xBF25EB89375A37AD(1, iLocal_268, joaat("COP"));
			(*uParam6)[0] = unk_0xD49F9B0955C367DE(22, Param1.f_0, Var1[0 /*3*/], fVar2[0], true, true);
			unk_0x9F8AA94D6D97DBF4((*uParam6)[0], true);
			unk_0xE532F5D78798DAAB(Param1.f_0);
			unk_0xC80A74AC829DDD92((*uParam6)[0], iLocal_266);
			unk_0xBF0FD6E56C964FCB((*uParam6)[0], joaat("weapon_appistol"), -1, true, true);
			unk_0xA9C8960E8684C1B5((*uParam6)[0], unk_0xD53343AA4FB7DD28(800, 2000));
			unk_0x1913FE4CBF41C463((*uParam6)[0], 206, true);
			unk_0x70A2D1137C8ED7C9((*uParam6)[0], 2, false);
			unk_0x70A2D1137C8ED7C9((*uParam6)[0], 1024, true);
			unk_0x70A2D1137C8ED7C9((*uParam6)[0], 65536, true);
			unk_0x262B14F48D29DE80((*uParam6)[0], 9, true, false, 0);
			func_118(&uLocal_53, 2, (*uParam6)[0], "REGETRobber2", 0, 1);
			(*uParam6)[1] = unk_0xD49F9B0955C367DE(22, Param1.f_1, Var1[1 /*3*/], fVar2[1], true, true);
			unk_0x9F8AA94D6D97DBF4((*uParam6)[1], true);
			unk_0xE532F5D78798DAAB(Param1.f_1);
			unk_0xC80A74AC829DDD92((*uParam6)[1], iLocal_266);
			unk_0xBF0FD6E56C964FCB((*uParam6)[1], joaat("weapon_pistol"), -1, true, true);
			unk_0xA9C8960E8684C1B5((*uParam6)[1], unk_0xD53343AA4FB7DD28(800, 2000));
			unk_0x1913FE4CBF41C463((*uParam6)[1], 206, true);
			unk_0x70A2D1137C8ED7C9((*uParam6)[1], 2, false);
			unk_0x70A2D1137C8ED7C9((*uParam6)[1], 1024, true);
			unk_0x70A2D1137C8ED7C9((*uParam6)[1], 65536, true);
			unk_0x262B14F48D29DE80((*uParam6)[1], 0, 5, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 1, true, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 2, true, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 3, 6, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 4, 6, 2, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 6, true, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 8, false, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 9, false, false, 0);
			unk_0x262B14F48D29DE80((*uParam6)[1], 10, true, false, 0);
			unk_0x6C8065A3B780185B((*uParam6)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_118(&uLocal_53, 1, (*uParam6)[1], "PACKIE", 0, 1);
			bLocal_257 = unk_0xD49F9B0955C367DE(4, Param1.f_2, Var3, bVar4, true, true);
			unk_0xE532F5D78798DAAB(Param1.f_2);
			unk_0x9F8AA94D6D97DBF4(bLocal_257, true);
			unk_0xC80A74AC829DDD92(bLocal_257, iLocal_267);
			unk_0x6C8065A3B780185B(bLocal_257, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_118(&uLocal_53, 3, bLocal_257, "StoreOwner", 0, 1);
			bLocal_259[0] = unk_0xD49F9B0955C367DE(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, true, true);
			unk_0xE532F5D78798DAAB(Param1.f_3);
			unk_0x9F7794730795E019(bLocal_259[0], 17, true);
			unk_0x3EB1FE9E8E908E15(bLocal_259[0], -1);
			bLocal_259[2] = unk_0xD49F9B0955C367DE(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, true, true);
			unk_0xE532F5D78798DAAB(Param1.f_3);
			unk_0x9F7794730795E019(bLocal_259[2], 17, true);
			unk_0x142A02425FF02BD9(bLocal_259[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, false);
			bLocal_259[3] = unk_0xD49F9B0955C367DE(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, true, true);
			unk_0xE532F5D78798DAAB(Param1.f_4);
			unk_0x9F7794730795E019(bLocal_259[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0x5F9532F3B5CC2551(bLocal_257, false) && !unk_0x5F9532F3B5CC2551(bLocal_259[0], false)) && !unk_0x5F9532F3B5CC2551(bLocal_259[2], false)) && !unk_0x5F9532F3B5CC2551(bLocal_259[3], false)) && !unk_0x5F9532F3B5CC2551((*uParam6)[0], false)) && !unk_0x5F9532F3B5CC2551((*uParam6)[1], false))
			{
				if (((((unk_0x7350823473013C02(bLocal_257) && unk_0x7350823473013C02(bLocal_259[0])) && unk_0x7350823473013C02(bLocal_259[2])) && unk_0x7350823473013C02(bLocal_259[3])) && unk_0x7350823473013C02((*uParam6)[0])) && unk_0x7350823473013C02((*uParam6)[1]))
				{
					unk_0xD3BD40951412FEF6("random@getawaydriver@thugs");
					unk_0xD3BD40951412FEF6("combat@gestures@pistol@halt");
					unk_0xD3BD40951412FEF6("misslamar1ig_20");
					unk_0xD3BD40951412FEF6("random@getawaydriver");
					while (((!unk_0xD031A9162D01088C("random@getawaydriver@thugs") || !unk_0xD031A9162D01088C("combat@gestures@pistol@halt")) || !unk_0xD031A9162D01088C("misslamar1ig_20")) || !unk_0xD031A9162D01088C("random@getawaydriver"))
					{
						unk_0x4EDE34FBADD967A6(false);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						unk_0xF2EAB31979A7F910(bLocal_257, -1, false, -1, false);
						if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]))
						{
							unk_0xEA47FE3719165B94((*uParam6)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, false, false, false, false);
							unk_0x69F4BE8C8CC4796C((*uParam6)[0], unk_0xD80958FC74E988A6(), -1, 2052, 4);
						}
						if (!unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
						{
							unk_0xEA47FE3719165B94((*uParam6)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, false, false, false, false);
							unk_0x69F4BE8C8CC4796C((*uParam6)[1], unk_0xD80958FC74E988A6(), -1, 2052, 4);
						}
					}
					unk_0xC1B1E9A034A63A62(false);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 0)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_259[0]))
				{
					func_116(bLocal_259[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_259[2]))
				{
					func_116(bLocal_259[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_259[3]))
				{
					func_116(bLocal_259[3], "GENERIC_FRIGHTENED_HIGH", 24);
					unk_0xC1B1E9A034A63A62(false);
				}
			}
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, false, true, 0))
			{
				if (!iLocal_252)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_259[0]))
					{
						unk_0x94587F17E9C365D5(bLocal_259[0], Local_232, 200f, -1, false, false);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_259[2]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0xE73A266DB0CA9042(false, 250);
						unk_0x94587F17E9C365D5(false, Local_232, 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(bLocal_259[2], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_259[3]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0xE73A266DB0CA9042(false, 500);
						unk_0x94587F17E9C365D5(false, Local_232, 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(bLocal_259[3], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
					}
					iLocal_252 = 1;
				}
			}
			if (func_75(uParam6, unk_0xB6997A7EB3F5C8C0()))
			{
				*iParam0 = 4;
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			if (unk_0x16EC4839969F9F5E(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f)) || unk_0x7EEF65D5F153E26A(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0x22B0D0E37CCB840D((*uParam6)[0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					unk_0x22B0D0E37CCB840D((*uParam6)[1], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_185())
			{
				if ((!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1])) && !unk_0x84A2DD9AC37C35C1(bLocal_257))
				{
				}
				if (unk_0x7239B21A38F536BA(bLocal_257))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0x69F4BE8C8CC4796C((*uParam6)[0], unk_0xD80958FC74E988A6(), 10000, 2052, 4);
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0xEA47FE3719165B94(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, false, false, false);
						unk_0xEA47FE3719165B94(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, false, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(bLocal_257, iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
					}
					*iParam0 = 5;
				}
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			if (((unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6())) || unk_0x16EC4839969F9F5E(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f))) || unk_0x7EEF65D5F153E26A(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0x22B0D0E37CCB840D((*uParam6)[0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					unk_0x22B0D0E37CCB840D((*uParam6)[1], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x84A2DD9AC37C35C1(bLocal_257))
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0x5AD23D40115353AC((*uParam6)[0], unk_0xD80958FC74E988A6(), -1);
					unk_0x5AD23D40115353AC((*uParam6)[1], unk_0xD80958FC74E988A6(), -1);
				}
			}
			else if (unk_0x77F1BEB8863288D5(bLocal_257, 242628503) != 1 && unk_0x77F1BEB8863288D5(bLocal_257, 242628503) != 0)
			{
				unk_0xE8854A4326B9E12B(&iLocal_265);
				unk_0xEA47FE3719165B94(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, false, false, false);
				unk_0xEA47FE3719165B94(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, false, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_265);
				unk_0x5ABA3986D90D8A3B(bLocal_257, iLocal_265);
				unk_0x3841422E9C488D8C(&iLocal_265);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
					{
						if (unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 0.1f)
						{
							if (func_128() && unk_0xB104CD1BABF302E2(unk_0xB6997A7EB3F5C8C0()))
							{
								unk_0x81A15811460FAB3A(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()), 3);
								if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
								{
									Local_245 = { unk_0x3FEF770D40960D5A(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) };
									Var11 = { unk_0x1899F328B0E12848(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -1.5f, -1.5f, 0f) };
									Var12 = { unk_0x1899F328B0E12848(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 1.5f, 0f, 0f) };
									unk_0xE8854A4326B9E12B(&iLocal_265);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2096, 4);
									unk_0x9B53BB6E8943AF53(false, bLocal_257, 1500, false);
									unk_0xB2A16444EAD9AE47(false, Var11, bLocal_257, 3f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2096, 4);
									unk_0x39E72BC99E6360CB(iLocal_265);
									unk_0x5ABA3986D90D8A3B(iLocal_258[0], iLocal_265);
									unk_0x3841422E9C488D8C(&iLocal_265);
									unk_0xE8854A4326B9E12B(&iLocal_265);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2096, 4);
									unk_0x9B53BB6E8943AF53(false, bLocal_257, 2500, false);
									unk_0xB2A16444EAD9AE47(false, Var12, bLocal_257, 3f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 10000, 2096, 4);
									unk_0x39E72BC99E6360CB(iLocal_265);
									unk_0x5ABA3986D90D8A3B(iLocal_258[1], iLocal_265);
									unk_0x3841422E9C488D8C(&iLocal_265);
								}
								else
								{
									unk_0x9F3480FE65DB31B5(iLocal_258[0], func_73());
									unk_0x9F3480FE65DB31B5(iLocal_258[1], func_73());
									unk_0x0BDDB8D9EC6BCF3C(iLocal_258[0], true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_258[1], false);
									if (unk_0x9F47B058362C84B5(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6())) == joaat("bus"))
									{
										if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false))
										{
											bVar13 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false);
											if (!unk_0x0A7B270912999B3C(bVar13))
											{
												unk_0xAD738C3085FE7E11(bVar13, true, false);
												unk_0x9614299DCB53E54B(&bVar13);
											}
										}
										if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false))
										{
											bVar13 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false);
											if (!unk_0x0A7B270912999B3C(bVar13))
											{
												unk_0xAD738C3085FE7E11(bVar13, true, false);
												unk_0x9614299DCB53E54B(&bVar13);
											}
										}
									}
									unk_0x3DBFC55D5C9BB447(iLocal_258[0], true);
									unk_0x3DBFC55D5C9BB447(iLocal_258[1], true);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_250)
							{
								if (!func_185())
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0x69F4BE8C8CC4796C(iLocal_258[1], unk_0xD80958FC74E988A6(), -1, 2096, 4);
									iLocal_250 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), (*uParam6)[1], 10f, 10f, 10f, false, true, 0))
				{
					if (!iLocal_250)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0x69F4BE8C8CC4796C(iLocal_258[1], unk_0xD80958FC74E988A6(), -1, 2096, 4);
							iLocal_250 = 1;
						}
					}
				}
			}
			if (iLocal_250 || iLocal_251)
			{
				if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 0.2f)
				{
					if (iLocal_228 == -1)
					{
						iLocal_228 = unk_0x9CD27B0045628463();
					}
				}
				else
				{
					iLocal_228 = -1;
				}
				if (iLocal_228 != -1 && unk_0x9CD27B0045628463() > iLocal_228 + 10000)
				{
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
					{
						unk_0x22B0D0E37CCB840D(iLocal_258[0], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x971D38760FBC02EF(iLocal_258[0], true);
						unk_0x4EDE34FBADD967A6(false);
						unk_0x2595DD4236549CE3(&(iLocal_258[0]));
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
					{
						unk_0x22B0D0E37CCB840D(iLocal_258[1], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x971D38760FBC02EF(iLocal_258[1], true);
						unk_0x4EDE34FBADD967A6(false);
						unk_0x2595DD4236549CE3(&(iLocal_258[1]));
					}
					*iParam7 = 0;
					*iParam0 = 20;
				}
			}
			func_72(uParam6, 120f);
			if (func_74())
			{
				*iParam0 = 18;
			}
			if (((unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6())) || unk_0x16EC4839969F9F5E(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f))) || unk_0x7EEF65D5F153E26A(Local_232 - Vector(40f, 40f, 40f), Local_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0x22B0D0E37CCB840D((*uParam6)[0], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x22B0D0E37CCB840D((*uParam6)[1], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam7 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (!func_71(uParam6, unk_0xB6997A7EB3F5C8C0(), 120f) || !bLocal_246)
				{
					if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_245, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
							{
								if (func_128() && unk_0xB104CD1BABF302E2(unk_0xB6997A7EB3F5C8C0()))
								{
									unk_0x81A15811460FAB3A(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0()), 3);
									while (!unk_0x1BBE0523B8DB9A21(unk_0x9F47B058362C84B5(unk_0xB6997A7EB3F5C8C0())))
									{
										unk_0x4EDE34FBADD967A6(false);
									}
									if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
									{
										if (!unk_0x5891CAC5D4ACFF74(iLocal_258[0]) && !unk_0x5891CAC5D4ACFF74(iLocal_258[1]))
										{
											unk_0xE1EF3C1216AFF2CD(iLocal_258[0]);
											unk_0xE1EF3C1216AFF2CD(iLocal_258[1]);
											unk_0x69F4BE8C8CC4796C(iLocal_258[1], unk_0xD80958FC74E988A6(), 10000, 2052, 4);
											unk_0x9F3480FE65DB31B5(iLocal_258[0], func_73());
											unk_0x9F3480FE65DB31B5(iLocal_258[1], func_73());
											unk_0x0BDDB8D9EC6BCF3C(iLocal_258[0], true);
											unk_0x0BDDB8D9EC6BCF3C(iLocal_258[1], false);
											if (unk_0x9F47B058362C84B5(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6())) == joaat("bus"))
											{
												if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false))
												{
													bVar14 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false);
													if (!unk_0x0A7B270912999B3C(bVar14))
													{
														unk_0xAD738C3085FE7E11(bVar14, true, false);
														unk_0x9614299DCB53E54B(&bVar14);
													}
												}
												if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false))
												{
													bVar14 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false);
													if (!unk_0x0A7B270912999B3C(bVar14))
													{
														unk_0xAD738C3085FE7E11(bVar14, true, false);
														unk_0x9614299DCB53E54B(&bVar14);
													}
												}
											}
											unk_0x3DBFC55D5C9BB447(iLocal_258[0], true);
											unk_0x3DBFC55D5C9BB447(iLocal_258[1], true);
										}
									}
								}
								else if (!iLocal_250)
								{
									if (!func_185())
									{
										func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
							else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), (*uParam6)[1], 10f, 10f, 10f, false, true, 0))
							{
								if (!iLocal_250)
								{
									if (!func_185())
									{
										func_171(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
			{
				if (!unk_0x5891CAC5D4ACFF74(iLocal_258[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
						{
							if ((unk_0x77F1BEB8863288D5(iLocal_258[0], 242628503) != 1 && unk_0x77F1BEB8863288D5(iLocal_258[0], 242628503) != 0) || unk_0x77F1BEB8863288D5(iLocal_258[0], 242628503) == 7)
							{
								unk_0x9F3480FE65DB31B5(iLocal_258[0], func_73());
								unk_0x3DBFC55D5C9BB447(iLocal_258[0], true);
							}
						}
					}
					else
					{
						unk_0x9F3480FE65DB31B5(iLocal_258[0], func_73());
						unk_0x3DBFC55D5C9BB447(iLocal_258[0], true);
					}
				}
				else
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((!unk_0xBB062B2B5722478E(iLocal_258[0]) && !unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x20B60995556D004F(iLocal_258[0], unk_0x3FEF770D40960D5A(unk_0xB6997A7EB3F5C8C0(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							unk_0x01A898D26E2333DD(iLocal_258[0], 2f);
						}
					}
					if (unk_0x77F1BEB8863288D5(iLocal_258[0], -875674219) == 1 || unk_0x77F1BEB8863288D5(iLocal_258[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
			{
				if (!unk_0x5891CAC5D4ACFF74(iLocal_258[1]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
						{
							if ((unk_0x77F1BEB8863288D5(iLocal_258[1], 242628503) != 1 && unk_0x77F1BEB8863288D5(iLocal_258[1], 242628503) != 0) || unk_0x77F1BEB8863288D5(iLocal_258[1], 242628503) == 7)
							{
								unk_0x9F3480FE65DB31B5(iLocal_258[1], func_73());
								unk_0x3DBFC55D5C9BB447(iLocal_258[1], true);
							}
						}
					}
					else
					{
						unk_0x9F3480FE65DB31B5(iLocal_258[1], func_73());
						unk_0x3DBFC55D5C9BB447(iLocal_258[1], true);
					}
				}
				else
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((!unk_0xBB062B2B5722478E(iLocal_258[1]) && !unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x20B60995556D004F(iLocal_258[1], unk_0x3FEF770D40960D5A(unk_0xB6997A7EB3F5C8C0(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							unk_0x01A898D26E2333DD(iLocal_258[1], 2f);
						}
					}
					if (unk_0x77F1BEB8863288D5(iLocal_258[1], -875674219) == 1 || unk_0x77F1BEB8863288D5(iLocal_258[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_246)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if ((!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && !unk_0x84A2DD9AC37C35C1(iLocal_258[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
					{
						if ((unk_0xA3EE4A07279BB9DB(iLocal_258[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && !unk_0xA3EE4A07279BB9DB(iLocal_258[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_258[1], 20f, 20f, 20f, false, true, 0))
						{
							bLocal_246 = true;
						}
						if ((unk_0xA3EE4A07279BB9DB(iLocal_258[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && !unk_0xA3EE4A07279BB9DB(iLocal_258[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_258[0], 20f, 20f, 20f, false, true, 0))
						{
							bLocal_246 = true;
						}
					}
				}
			}
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (func_71(uParam6, unk_0xB6997A7EB3F5C8C0(), 120f) || bLocal_246)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
					{
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0xEA47FE3719165B94(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, false, false, false);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(bLocal_257, iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(bLocal_257, true);
						unk_0x2595DD4236549CE3(&bLocal_257);
					}
					func_70();
					if (!unk_0xE33D59DA70B58FDF(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						bLocal_263 = unk_0xAF35D0D2583051B0(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, true, true, false);
						iLocal_261[0] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), -1, true, true);
						iLocal_261[1] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), false, true, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x0703B9079823DA4A(iLocal_261[0], 0);
					}
					if (!unk_0xE33D59DA70B58FDF(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						bLocal_263 = unk_0xAF35D0D2583051B0(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, true, true, false);
						iLocal_261[0] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), -1, true, true);
						iLocal_261[1] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), false, true, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x0703B9079823DA4A(iLocal_261[0], 0);
					}
					if (!unk_0xE33D59DA70B58FDF(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						bLocal_263 = unk_0xAF35D0D2583051B0(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, true, true, false);
						iLocal_261[0] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), -1, true, true);
						iLocal_261[1] = unk_0x7DD959874C1FD534(bLocal_263, 6, joaat("s_m_y_cop_01"), false, true, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0xBF0FD6E56C964FCB(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0x0703B9079823DA4A(iLocal_261[0], 0);
					}
					unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0xF7EC25A3EBEEC726(unk_0xB6997A7EB3F5C8C0(), true);
					unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
					unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
					unk_0x9B0BB33B04405E7A(unk_0x4F8644AF03D0E0D6(), 0f);
					unk_0xBF25EB89375A37AD(5, joaat("COP"), iLocal_266);
					unk_0xBF25EB89375A37AD(5, iLocal_266, joaat("COP"));
					unk_0x4EDE34FBADD967A6(1000);
					if (!bLocal_246)
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
					{
						unk_0xA72CD9CA74A5ECBA((*uParam6)[iVar8]);
					}
					iLocal_222 = unk_0x9CD27B0045628463();
					*iParam0 = 8;
				}
			}
			if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, false, true, 0))
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0x22B0D0E37CCB840D((*uParam6)[0], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x22B0D0E37CCB840D((*uParam6)[1], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_72(uParam6, 120f);
			func_69();
			if (func_74())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_68(bLocal_51);
			if (func_127(iLocal_222, 3000))
			{
				*iParam0 = 9;
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_67(uParam6);
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
			{
				unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_266);
				unk_0xBF25EB89375A37AD(1, iLocal_266, joaat("COP"));
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
				{
					unk_0xF7EC25A3EBEEC726(unk_0xB6997A7EB3F5C8C0(), false);
				}
				if (!unk_0x5F9532F3B5CC2551(bLocal_263, false))
				{
					unk_0x629BFA74418D6239(&bLocal_263);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_261[0]))
				{
					unk_0x2595DD4236549CE3(&(iLocal_261[0]));
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_261[1]))
				{
					unk_0x2595DD4236549CE3(&(iLocal_261[1]));
				}
				func_68(bLocal_51);
				*iParam0 = 10;
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false) && !unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
				{
					if (!unk_0xA808AA1D79230FC2((*uParam6)[iVar8], unk_0xB6997A7EB3F5C8C0()))
					{
						if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_65((*uParam6)[iVar8], 0, 145);
							func_68(bLocal_51);
						}
					}
				}
				iVar8++;
			}
			func_72(uParam6, 120f);
			func_69();
			if (func_63())
			{
				*iParam0 = 12;
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				unk_0xBF25EB89375A37AD(5, joaat("COP"), iLocal_266);
				unk_0xBF25EB89375A37AD(5, iLocal_266, joaat("COP"));
				func_68(bLocal_51);
				*iParam0 = 8;
			}
			else
			{
				unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_266);
				unk_0xBF25EB89375A37AD(1, iLocal_266, joaat("COP"));
				Var9 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				fVar6 = 9999f;
				iVar15 = 0;
				while (iVar15 < Var5.f_0)
				{
					if (unk_0x2A488C176D52CCA5(Var9, Var5[iVar15 /*3*/]) < fVar6)
					{
						fVar6 = unk_0x2A488C176D52CCA5(Var9, Var5[iVar15 /*3*/]);
						iLocal_221 = iVar15;
					}
					iVar15++;
				}
				if (func_62(Var5[iLocal_221 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_221 = 0;
				}
				bLocal_51 = func_60(Var5[iLocal_221 /*3*/], 1);
				if (func_119() == 2 && !func_59())
				{
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_256))
					{
						bLocal_256 = func_60(Local_244, 0);
						unk_0xDF735600A4696DAF(bLocal_256, 269);
						func_57();
					}
				}
				iLocal_222 = unk_0x9CD27B0045628463();
				if (!iLocal_220)
				{
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					func_171(&uLocal_53, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_220 = 1;
				}
				*iParam0 = 11;
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam7 = 0;
			func_56(uParam6);
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				func_68(bLocal_51);
				*iParam0 = 8;
			}
			else
			{
				if (func_55(Var5[iLocal_221 /*3*/]))
				{
					func_171(&uLocal_53, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_53())
				{
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					if (func_52())
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
				{
					if ((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Var5[iLocal_221 /*3*/], Global_19, true, true, 0) && unk_0x20B60995556D004F(iLocal_258[0], Var5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0)) && unk_0x20B60995556D004F(iLocal_258[1], Var5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_68(bLocal_51);
						iVar8 = 0;
						while (iVar8 <= (*uParam6 - 1))
						{
							if (iLocal_218)
							{
								unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 2, false);
								unk_0x4EDE34FBADD967A6(1000);
								iLocal_218 = 0;
							}
							if (!unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
							{
								unk_0xA72CD9CA74A5ECBA((*uParam6)[iVar8]);
								unk_0xED74007FFB146BC2((*uParam6)[iVar8]);
								unk_0x8EB2F69076AF7053(iLocal_231);
							}
							iVar8++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false) && !unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
				{
					if (!unk_0xA808AA1D79230FC2((*uParam6)[iVar8], unk_0xB6997A7EB3F5C8C0()))
					{
						if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_65((*uParam6)[iVar8], 0, 145);
						}
					}
				}
				iVar8++;
			}
			func_72(uParam6, 120f);
			func_69();
			if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 0.2f)
			{
				if (iLocal_228 == -1)
				{
					iLocal_228 = unk_0x9CD27B0045628463();
				}
			}
			else
			{
				iLocal_228 = -1;
			}
			if (iLocal_228 != -1 && unk_0x9CD27B0045628463() > (iLocal_228 + 60000))
			{
				func_169();
				unk_0x4EDE34FBADD967A6(false);
				func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
				{
					unk_0x22B0D0E37CCB840D(iLocal_258[0], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_258[0], true);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
				{
					unk_0x22B0D0E37CCB840D(iLocal_258[1], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_258[1], true);
				}
				*iParam7 = 0;
				*iParam0 = 20;
			}
			if (func_63())
			{
				*iParam0 = 12;
			}
			if (func_74())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_167();
			if (bLocal_248)
			{
				unk_0xED74007FFB146BC2(iLocal_258[0]);
				unk_0xED74007FFB146BC2(iLocal_258[1]);
				unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
				func_169();
				unk_0x4EDE34FBADD967A6(false);
				func_171(&uLocal_53, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]))
				{
					unk_0xE8854A4326B9E12B(&iLocal_265);
					unk_0x504D54DF3F6F2247(false, false, 4194304);
					unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_265);
					unk_0x5ABA3986D90D8A3B((*uParam6)[0], iLocal_265);
					unk_0x3841422E9C488D8C(&iLocal_265);
					unk_0x971D38760FBC02EF((*uParam6)[0], true);
				}
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					unk_0xE8854A4326B9E12B(&iLocal_265);
					unk_0x504D54DF3F6F2247(false, 500, 4194304);
					unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_265);
					unk_0x5ABA3986D90D8A3B((*uParam6)[1], iLocal_265);
					unk_0x3841422E9C488D8C(&iLocal_265);
					unk_0x971D38760FBC02EF((*uParam6)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 5f)
			{
				iVar8 = 0;
				while (iVar8 <= (*uParam6 - 1))
				{
					if (!unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
					{
						if (unk_0x77F1BEB8863288D5((*uParam6)[iVar8], 242628503) != 1 || unk_0x77F1BEB8863288D5((*uParam6)[iVar8], 242628503) != 0)
						{
							if (!unk_0x84A2DD9AC37C35C1((*uParam6)[iVar8]))
							{
								iVar0 = 0;
								iLocal_226 = iVar8;
							}
						}
					}
					iVar8++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]))
				{
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), (*uParam6)[iVar8], 4000, 2048, 2);
					unk_0xE8854A4326B9E12B(&iVar0);
					unk_0x504D54DF3F6F2247(false, false, 4194816);
					unk_0x15D3A79D4E44B913(false, Var7[iLocal_221 /*3*/], 2f, -1, 0.25f, false, 1193033728);
					unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B((*uParam6)[0], iVar0);
					unk_0x3841422E9C488D8C(&iVar0);
					if (!unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
					{
						unk_0xE8854A4326B9E12B(&iVar0);
						unk_0x504D54DF3F6F2247(false, 2000, 4194816);
						unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 3000, 2052, 2);
						unk_0x15D3A79D4E44B913(false, Var7[iLocal_221 /*3*/], 2f, -1, 0.25f, false, 1193033728);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar0);
						unk_0x5ABA3986D90D8A3B((*uParam6)[1], iVar0);
						unk_0x3841422E9C488D8C(&iVar0);
					}
					iVar0 = 0;
					unk_0x971D38760FBC02EF((*uParam6)[iVar8], true);
					unk_0x69F4BE8C8CC4796C((*uParam6)[iVar8], unk_0xD80958FC74E988A6(), 4000, 2052, 2);
					func_169();
					unk_0x4EDE34FBADD967A6(false);
					if (iLocal_226 > 0)
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar8++;
			}
			break;
		
		case 15:
			if (!*bParam8)
			{
				if (!unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
				{
					if (!iLocal_218)
					{
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
						iLocal_218 = 1;
					}
					func_18(func_119(), 1, 1000, 0, 1);
					*bParam8 = 1;
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1((*uParam6)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam6)[1]))
			{
				if (!unk_0x997ABD671D25CA0B((*uParam6)[0], false) && !unk_0x997ABD671D25CA0B((*uParam6)[1], false))
				{
					unk_0xCC33FA791322B9D9();
					unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
					while (!func_203())
					{
						unk_0x4EDE34FBADD967A6(false);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_199(9, 0);
					}
					func_166(6);
					func_190(-1, 0);
					func_187();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam8 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_253 = 1;
			unk_0xBF25EB89375A37AD(5, iLocal_266, joaat("player"));
			unk_0xBF25EB89375A37AD(1, iLocal_266, iLocal_266);
			unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
			unk_0x020E5F00CDA207BA(0f);
			unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[iVar16]))
				{
					if (unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar16]))
					{
						unk_0x86A652570E5F25DD(&(uLocal_255[iVar16]));
						if (unk_0x997ABD671D25CA0B(iLocal_258[iVar16], false))
						{
							unk_0x504D54DF3F6F2247(iLocal_258[iVar16], false, 0);
						}
						if (unk_0xA6DB27D19ECBB7DA(bLocal_51))
						{
							unk_0x86A652570E5F25DD(&bLocal_51);
						}
						unk_0xED74007FFB146BC2(iLocal_258[iVar16]);
						unk_0xF166E48407BAC484(iLocal_258[iVar16], unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x971D38760FBC02EF(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			func_169();
			unk_0x4EDE34FBADD967A6(false);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
			{
				func_171(&uLocal_53, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]))
			{
				func_171(&uLocal_53, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_249)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
				{
					unk_0x63F58F7C80513AAD(bLocal_257, false);
					unk_0xEA47FE3719165B94(bLocal_257, "random@getawaydriver", "base", 4f, -4f, -1, 1, false, false, false, false);
				}
			}
			iVar16 = 0;
			while (iVar16 < bLocal_259)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_259[iVar16]))
				{
					unk_0x22B0D0E37CCB840D(bLocal_259[iVar16], unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x971D38760FBC02EF(bLocal_259[iVar16], true);
				}
				iVar16++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0xBF25EB89375A37AD(5, iLocal_266, joaat("player"));
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_258[iVar16]))
				{
					if (unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar16]))
					{
						unk_0x86A652570E5F25DD(&(uLocal_255[iVar16]));
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[iVar16]))
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar16]))
					{
						uLocal_255[iVar16] = func_65(iLocal_258[iVar16], 1, 145);
					}
					if (unk_0x5891CAC5D4ACFF74(iLocal_258[iVar16]))
					{
						unk_0xED74007FFB146BC2(iLocal_258[iVar16]);
					}
					if (unk_0x997ABD671D25CA0B(iLocal_258[iVar16], false))
					{
						unk_0x504D54DF3F6F2247(iLocal_258[iVar16], false, 0);
						unk_0xF166E48407BAC484(iLocal_258[iVar16], unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x971D38760FBC02EF(iLocal_258[iVar16], true);
					}
					else
					{
						unk_0xF166E48407BAC484(iLocal_258[iVar16], unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x971D38760FBC02EF(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_51))
			{
				unk_0x86A652570E5F25DD(&bLocal_51);
			}
			break;
		
		case 20:
			if (!func_185())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_3(bool bParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_1.f_116), bParam0);
	switch (bParam0)
	{
		case 10:
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_1.f_119), 14);
			break;
		
		case 13:
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_1.f_119), 16);
			break;
		
		case 12:
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_1.f_119), 15);
			break;
		
		case 11:
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_17(bParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_15(bParam0);
		unk_0x202709F4C58A0424("FEED_CREW_U");
		unk_0xC63CD5D2920ACBE7(func_15(bParam0));
		unk_0x1CCD9A37359072CF(sVar1, sVar1, false, iVar0, "", 0);
		if (!func_14(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_6();
	}
}

void func_6()
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

int func_7()
{
	func_8();
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

void func_8()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_12(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_11(unk_0xD80958FC74E988A6());
			if (func_10(iVar0) && (!func_9(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_10(Global_113386.f_2363.f_539.f_4321))
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

bool func_9(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_14(int iParam0)
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

var func_15(bool bParam0)
{
	return func_16(bParam0);
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

int func_17(bool bParam0)
{
	return Global_96316[bParam0 /*5*/];
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_51(iParam0) == 3)
	{
		return;
	}
	if (func_51(iParam0) == 4)
	{
		return;
	}
	func_19(func_51(iParam0), 1, iParam1, bParam2, 0);
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

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_50();
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
					func_49(99, 1);
					func_48(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_33(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_30(5))
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
							func_48(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_30(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_48(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_property"), bParam3);
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
									func_48(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_30(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_29(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_49(95, bParam3);
					break;
				
				case 1:
					func_49(97, bParam3);
					break;
				
				case 2:
					func_49(96, bParam3);
					break;
			}
			func_49(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_22(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_22(bVar1);
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
					func_48(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_total_cash_earned"), bParam3);
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
	func_21(iParam0);
	if (Global_43052 == 15)
	{
		func_20(0);
	}
	return 1;
}

void func_20(bool bParam0)
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

void func_21(int iParam0)
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

void func_22(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_28(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_28(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_28(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_28(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_25(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_25(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_25(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_25(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_25(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_25(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_24() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_24() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_23(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_23(bool bParam0)
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

int func_24()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_25(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1574918;
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_27();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_29(int iParam0)
{
	func_49(93, iParam0);
	func_49(29, iParam0);
	func_49(30, iParam0);
}

int func_30(int iParam0)
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
		return func_32(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_32(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_32(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_32(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_31(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_31(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_31(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_31(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_31(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_31(8277, -1, 0);
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
	return BitTest(Global_2359296[func_24() /*5567*/].f_681.f_10, iParam0);
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_26(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_32(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_33(bool bParam0)
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
		func_47(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_9(14) && !func_46(iParam0))
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
	if (func_45(&Global_4541529))
	{
		if (func_43(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4541529, iParam0))
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

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4541528 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
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

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
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

int func_47(int iParam0, bool bParam1)
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

void func_48(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_49(int iParam0, int iParam1)
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

void func_50()
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

int func_51(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_52()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_53()
{
	if (func_119() == 2)
	{
		if (func_54())
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

bool func_54()
{
	return Global_32197;
}

int func_55(struct<3> Param0)
{
	if (func_119() == 2)
	{
		if (func_54() && !Global_32200)
		{
			if (fLocal_50 == -1f)
			{
				fLocal_50 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0) > (fLocal_50 + 200f) || unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_56(var uParam0)
{
	if (!unk_0x84A2DD9AC37C35C1((*uParam0)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam0)[1]))
	{
		if (unk_0x751B70C3D034E187((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, false, true, 0) && unk_0x751B70C3D034E187((*uParam0)[0], unk_0xD80958FC74E988A6(), 15f, 15f, 15f, false, true, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_224 = unk_0x9CD27B0045628463();
					iLocal_225++;
					break;
				
				case 1:
					if (func_127(iLocal_224, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_57()
{
	if (func_119() == 2)
	{
		if (!Global_32199)
		{
			func_58("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_58(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_59()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_60(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_61(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_62(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_63()
{
	if (func_64())
	{
		if (((((((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_236, 50f, 50f, 50f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_237, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_238, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_239, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_240, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_241, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_242, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_243, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_64()
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
			{
				if (unk_0xA3EE4A07279BB9DB(iLocal_258[0], bVar0, false) && unk_0xA3EE4A07279BB9DB(iLocal_258[1], bVar0, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_65(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_66(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_66(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_61(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_61(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_61(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

void func_67(var uParam0)
{
	if (!unk_0x84A2DD9AC37C35C1((*uParam0)[0]) && !unk_0x84A2DD9AC37C35C1((*uParam0)[1]))
	{
		if (unk_0x751B70C3D034E187((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, false, true, 0) && unk_0x751B70C3D034E187((*uParam0)[0], unk_0xD80958FC74E988A6(), 15f, 15f, 15f, false, true, 0))
		{
			switch (iLocal_223)
			{
				case 0:
					iLocal_224 = unk_0x9CD27B0045628463();
					iLocal_223++;
					break;
				
				case 1:
					if (func_127(iLocal_224, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_223++;
						}
					}
					break;
				
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_223++;
					}
					break;
				}
			}
	}
}

void func_68(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		unk_0x86A652570E5F25DD(&bParam0);
	}
}

void func_69()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_258[iVar0]))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (!func_128())
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_258[iVar0], true);
					if (unk_0x5891CAC5D4ACFF74(iLocal_258[iVar0]))
					{
						unk_0xED74007FFB146BC2(iLocal_258[iVar0]);
					}
					if (unk_0x77F1BEB8863288D5(iLocal_258[iVar0], 1227113341) != 1 && unk_0x77F1BEB8863288D5(iLocal_258[iVar0], 1227113341) != 0)
					{
						unk_0x6A071245EB0D1882(iLocal_258[iVar0], unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
					}
					if (unk_0x997ABD671D25CA0B(iLocal_258[iVar0], false))
					{
						unk_0x504D54DF3F6F2247(iLocal_258[iVar0], false, 0);
					}
					if (!iLocal_251)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_251 = 1;
						}
					}
				}
				else
				{
					iLocal_251 = 0;
					unk_0x9F8AA94D6D97DBF4(iLocal_258[iVar0], false);
					if (unk_0x77F1BEB8863288D5(iLocal_258[iVar0], 1227113341) == 1 && unk_0x77F1BEB8863288D5(iLocal_258[iVar0], 1227113341) == 0)
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_258[iVar0]);
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
					{
						unk_0x0BDDB8D9EC6BCF3C(iLocal_258[0], true);
						unk_0x0BDDB8D9EC6BCF3C(iLocal_258[1], false);
						if (unk_0x9F47B058362C84B5(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6())) == joaat("bus"))
						{
							if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false))
							{
								bVar1 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true, false);
								if (!unk_0x0A7B270912999B3C(bVar1))
								{
									unk_0xAD738C3085FE7E11(bVar1, true, false);
									unk_0x9614299DCB53E54B(&bVar1);
								}
							}
							if (!unk_0x22AC59A870E6A669(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false))
							{
								bVar2 = unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false, false);
								if (!unk_0x0A7B270912999B3C(bVar2))
								{
									unk_0xAD738C3085FE7E11(bVar2, true, false);
									unk_0x9614299DCB53E54B(&bVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0x5891CAC5D4ACFF74(iLocal_258[iVar0]))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_258[iVar0]);
				unk_0x9F3480FE65DB31B5(iLocal_258[iVar0], func_73());
				unk_0x3DBFC55D5C9BB447(iLocal_258[iVar0], true);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
				{
					unk_0x0BDDB8D9EC6BCF3C(iLocal_258[0], true);
					unk_0x0BDDB8D9EC6BCF3C(iLocal_258[1], false);
				}
			}
		}
		iVar0++;
	}
}

void func_70()
{
	if (!func_59())
	{
		if (func_119() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_71(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			if (!unk_0xA3EE4A07279BB9DB((*uParam0)[iVar0], bParam1, false))
			{
				if (fParam2 > 0f)
				{
					if (unk_0x751B70C3D034E187((*uParam0)[iVar0], unk_0xD80958FC74E988A6(), fParam2, fParam2, fParam2, false, true, 0))
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
		iVar0++;
	}
	return 1;
}

void func_72(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			if (unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_255[iVar0]));
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if (unk_0xA3EE4A07279BB9DB((*uParam0)[iVar0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
					{
						if (unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
						{
							unk_0x86A652570E5F25DD(&(uLocal_255[iVar0]));
						}
					}
					else if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
					{
						uLocal_255[iVar0] = func_65((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
			{
				uLocal_255[iVar0] = func_65((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0x751B70C3D034E187((*uParam0)[iVar0], unk_0xD80958FC74E988A6(), fParam1, fParam1, fParam1, false, true, 0))
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_255[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_73()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (unk_0x7239B21A38F536BA(iLocal_258[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_258[iVar0]))
			{
				if (!unk_0x5891CAC5D4ACFF74(iLocal_258[iVar0]))
				{
					if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
					{
						if (unk_0x0267D00AF114F17A(iLocal_258[iVar0], unk_0xD80958FC74E988A6()))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_258[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_258[1]))
							{
								if (((unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_258[0]) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_258[0])) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_258[1])) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_258[1]))
								{
									if (iLocal_227 == -1)
									{
										iLocal_227 = unk_0x9CD27B0045628463();
									}
								}
								else
								{
									iLocal_227 = -1;
								}
							}
						}
					}
					if (!iLocal_254)
					{
						if (iLocal_227 != -1 && unk_0x9CD27B0045628463() > iLocal_227 + 1000)
						{
							func_169();
							unk_0x4EDE34FBADD967A6(false);
							func_171(&uLocal_53, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_254 = 1;
						}
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
					{
						if (unk_0xC86D67D52A707CF8(iLocal_258[iVar0], unk_0xB6997A7EB3F5C8C0(), true))
						{
							return 1;
						}
					}
					if ((unk_0xC86D67D52A707CF8(iLocal_258[iVar0], unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_258[iVar0]) < 190) || (iLocal_227 != -1 && unk_0x9CD27B0045628463() > iLocal_227 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (unk_0xC86D67D52A707CF8(iLocal_258[iVar0], unk_0xB6997A7EB3F5C8C0(), true))
					{
						return 1;
					}
				}
				if (unk_0xC86D67D52A707CF8(iLocal_258[iVar0], unk_0xD80958FC74E988A6(), true))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_75(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!iLocal_219)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, false, true, 0) && !unk_0xE31C2C72B8692B64((*uParam0)[iVar0])) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, false, true, 0))
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_255[iVar0]))
					{
						if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
						{
							if (!func_207())
							{
								func_106(1);
								func_105(1);
								if (!unk_0x5F9532F3B5CC2551(bLocal_264, false))
								{
									if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_264, false) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_264, 50f, 50f, 50f, false, true, 0))
									{
										func_78(bLocal_264, 0, 145);
									}
								}
							}
							uLocal_255[iVar0] = func_65((*uParam0)[iVar0], 0, 145);
							unk_0x75A16C3DA34F1245(uLocal_255[iVar0], false);
							func_68(bLocal_52);
						}
					}
					if (!func_185())
					{
						if (iLocal_230 < unk_0x9CD27B0045628463())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_230 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 4000));
						}
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, false, true, 0))
					{
						func_76();
						if (!unk_0x5F9532F3B5CC2551(bParam1, false))
						{
							if (!func_185())
							{
								if (func_128() && unk_0xB104CD1BABF302E2(unk_0xB6997A7EB3F5C8C0()))
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								else
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								if (unk_0xA6DB27D19ECBB7DA(uLocal_255[0]))
								{
									unk_0x75A16C3DA34F1245(uLocal_255[0], true);
								}
								if (unk_0xA6DB27D19ECBB7DA(uLocal_255[1]))
								{
									unk_0x75A16C3DA34F1245(uLocal_255[1], true);
								}
								if (!unk_0x84A2DD9AC37C35C1((*uParam0)[1]) && !unk_0x84A2DD9AC37C35C1(bLocal_257))
								{
									unk_0xC1E8A365BF3B29F2((*uParam0)[1], 156, true);
									unk_0xE8854A4326B9E12B(&iLocal_265);
									unk_0xEA47FE3719165B94(false, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, false, false, false, false);
									unk_0xEA47FE3719165B94(false, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, false, false, false, false);
									unk_0x9B53BB6E8943AF53(false, bLocal_257, -1, false);
									unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2096, 4);
									unk_0x39E72BC99E6360CB(iLocal_265);
									unk_0x5ABA3986D90D8A3B((*uParam0)[1], iLocal_265);
									unk_0x3841422E9C488D8C(&iLocal_265);
								}
								unk_0x69F4BE8C8CC4796C((*uParam0)[iVar0], unk_0xD80958FC74E988A6(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_76()
{
	Global_20471 = 0;
	func_77();
}

void func_77()
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

int func_78(bool bParam0, int iParam1, int iParam2)
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
	func_79(bParam0, iParam2);
	return 1;
}

void func_79(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_85(bParam0))
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
	func_80(bParam0, &(Global_113386.f_32749.f_5510));
}

void func_80(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_84(uParam1);
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
		if (uParam1->f_65 == -1 && !func_83(uParam1->f_66))
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
		func_82(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_81(iVar0 + 1));
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

int func_81(int iParam0)
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

int func_82(bool bParam0, var uParam1, var uParam2)
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

int func_83(int iParam0)
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

void func_84(var uParam0)
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

int func_85(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_103(bParam0, 0, 0)) || func_103(bParam0, 1, 0)) || func_103(bParam0, 2, 0)) || func_102(bParam0) != 145) || func_101(bParam0)) || func_100(bParam0)) || func_99(bParam0)) || func_98(bParam0)) || !func_86(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_100(bParam0))
		{
		}
		if (func_100(bParam0))
		{
		}
		if (func_103(bParam0, 0, 0))
		{
		}
		if (func_103(bParam0, 1, 0))
		{
		}
		if (func_103(bParam0, 2, 0))
		{
		}
		if (func_102(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_86(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_87(bParam0, 0))
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

int func_87(bool bParam0, bool bParam1)
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
		if (!func_97())
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
		if ((((!func_96() && !func_95()) && !func_94()) && !func_93()) && !func_97())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_92() || unk_0x48AF36444B965238()) || func_91())
		{
		}
		else if (!func_94())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_90(bParam0))
		{
			return 0;
		}
	}
	if (!func_88(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_89())
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

int func_89()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_90(bool bParam0)
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

bool func_91()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_92()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_93()
{
	return 0;
}

int func_94()
{
	return 1;
}

int func_95()
{
	return 1;
}

int func_96()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_97()
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

int func_98(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_87(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0)
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

int func_100(bool bParam0)
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

int func_101(bool bParam0)
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

int func_102(bool bParam0)
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

int func_103(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_104(iParam1, iVar0, &sVar1, &iVar2))
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

int func_104(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_105(bool bParam0)
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

int func_106(int iParam0)
{
	if (func_110())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_109(Global_113375))
		{
			func_107(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_109(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_58(func_108(iParam0), -1);
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
					func_58(func_108(iParam0), -1);
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
					func_58(func_108(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_108(int iParam0)
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

int func_109(int iParam0)
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

int func_110()
{
	switch (func_111(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_115(0))
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
		if (!func_113(iParam2))
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
			func_112(uParam0, iParam4);
		}
	}
	return 2;
}

void func_112(var uParam0, int iParam1)
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

bool func_113(int iParam0)
{
	return func_114(iParam0, Global_43052);
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_116(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_117(iParam2), true);
}

int func_117(int iParam0)
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

void func_118(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_119()
{
	func_8();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_120(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_125(iParam0, 2, 1))
		{
			func_124(iParam0, 2, 1);
		}
	}
	else if (func_125(iParam0, 2, 1))
	{
		func_121(iParam0, 2, 1);
	}
}

void func_121(int iParam0, bool bParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			bVar0 = func_31(func_122(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_25(func_122(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_122(int iParam0)
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

int func_123()
{
	return Global_31959;
}

void func_124(int iParam0, bool bParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			bVar0 = func_31(func_122(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_25(func_122(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_125(int iParam0, int iParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			return BitTest(func_31(func_122(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_126(struct<3> Param0, bool bParam1, int iParam2)
{
	if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param0, bParam1, bParam1, bParam1, false, true, 0))
	{
		if (iParam2 == 0)
		{
			if (unk_0xE33D59DA70B58FDF(Param0, 5f))
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

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9CD27B0045628463();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (((((!unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()) && !unk_0x9134873537FA419C(unk_0xD80958FC74E988A6())) && !unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= 2)
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

void func_129(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_130(int iParam0)
{
	if (unk_0xC5042CC6F5E3D450())
	{
		if (func_131(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_131(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_113(5))
			{
				if (func_132(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_119();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_141()) || Global_112433) || Global_31962) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_141()) || Global_31962) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_141()) || Global_112433) || Global_31962) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_141()) || Global_112433) || Global_31962) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_139(8, -1)) || func_135()) || func_134()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_139(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_141()) || Global_31962) || func_140()) || func_139(8, -1)) || func_137()) || func_136()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_141()) || func_137()) || Global_112433) || Global_31962) || func_140()) || Global_44238) || func_139(8, -1)) || func_136()) || func_134()) || func_135()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_141()) || Global_112433) || Global_31962) || func_140()) || func_139(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
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

var func_133()
{
	return Global_100480.f_1;
}

int func_134()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_135()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_136()
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

bool func_137()
{
	return Global_100493.f_376 > 0;
}

bool func_138()
{
	return Global_100493.f_375 > 0;
}

bool func_139(int iParam0, int iParam1)
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

var func_140()
{
	return Global_1575058;
}

int func_141()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_142(int iParam0, struct<7> Param1, var uParam2, var uParam3)
{
	if (iParam0 == 1)
	{
		func_152(&uLocal_270, Param1.f_0);
		func_152(&uLocal_270, Param1.f_1);
		func_152(&uLocal_270, Param1.f_2);
		func_152(&uLocal_270, Param1.f_3);
		func_152(&uLocal_270, Param1.f_4);
		func_152(&uLocal_270, Param1.f_5);
		func_152(&uLocal_270, Param1.f_6);
		if (func_149(&uLocal_270))
		{
			return 1;
		}
	}
	else
	{
		func_143(&uLocal_270, 0);
	}
	return 0;
}

void func_143(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_145(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_144(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_144(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_145(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_146(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_146(var uParam0)
{
	func_147(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		switch (func_148(bParam0))
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

int func_148(var uParam0)
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

int func_149(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_150(var uParam0)
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_148(bParam0))
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

void func_152(var uParam0, int iParam1)
{
	func_153(uParam0, 0, iParam1, "NULL", 0);
}

void func_153(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x0C515FAB3FF9EA92(sParam3, "NULL"))
					{
						if (unk_0x0C515FAB3FF9EA92(&((uParam0[iVar0 /*18*/])->f_2), bParam3))
						{
							return;
						}
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), bParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], bParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_154()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_49) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_155(float fParam0, bool bParam1)
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
		if (func_10(func_119()))
		{
			iVar5 = func_7();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_156(iVar1, &Var0);
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

void func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_158(int iParam0)
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

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_160(iParam0) };
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

struct<2> func_160(int iParam0)
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

int func_161()
{
	if (func_164() && !func_165())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_113104 > 0;
}

int func_163()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()
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

void func_166(int iParam0)
{
	Global_113372 = iParam0;
}

void func_167()
{
	if (!bLocal_248)
	{
		unk_0xE50E52416CCF948B(func_186(unk_0x4F8644AF03D0E0D6()) - Vector(0f, 10f, 0f), unk_0xD53343AA4FB7DD28(5, 15), &Local_235, 1, 1077936128, 0);
		if (!unk_0xE33D59DA70B58FDF(Local_235, 10f))
		{
			Local_233 = { Local_235 };
			bLocal_247 = true;
		}
		else
		{
			unk_0xE50E52416CCF948B(func_186(unk_0x4F8644AF03D0E0D6()) + Vector(0f, 10f, 0f), unk_0xD53343AA4FB7DD28(5, 15), &Local_235, 1, 1077936128, 0);
			if (!unk_0xE33D59DA70B58FDF(Local_235, 10f))
			{
				Local_233 = { Local_235 };
				bLocal_247 = true;
			}
			if (bLocal_247)
			{
				if (!unk_0x7239B21A38F536BA(iLocal_260[0]))
				{
					iLocal_260[0] = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), Local_233 + Vector(0f, 5f, 0f), 0f, true, true);
					if (func_63())
					{
						unk_0xBF0FD6E56C964FCB(iLocal_260[0], joaat("weapon_pistol"), -1, true, true);
						unk_0xC80A74AC829DDD92(iLocal_260[0], iLocal_268);
						unk_0x9F8AA94D6D97DBF4(iLocal_260[0], true);
						unk_0x7BF835BB9E2698C8(iLocal_260[0], 50f, 0);
						unk_0x971D38760FBC02EF(iLocal_260[0], true);
					}
					else
					{
						unk_0x9F8AA94D6D97DBF4(iLocal_260[0], true);
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0x6A071245EB0D1882(false, unk_0xD80958FC74E988A6(), -1, 6f, 3f, 2f, 0);
						unk_0xEA47FE3719165B94(false, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, false, false, false);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
						unk_0x919BE13EED931959(false, 3000);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(iLocal_260[0], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(iLocal_260[0], true);
						func_118(&uLocal_53, 4, iLocal_260[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0x7239B21A38F536BA(iLocal_260[1]))
				{
					iLocal_260[1] = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), Local_233 - Vector(0f, 5f, 0f), 0f, true, true);
					if (func_63())
					{
						unk_0xBF0FD6E56C964FCB(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
						unk_0xC80A74AC829DDD92(iLocal_260[1], iLocal_268);
						unk_0x9F8AA94D6D97DBF4(iLocal_260[1], true);
						unk_0x7BF835BB9E2698C8(iLocal_260[1], 50f, 0);
						unk_0x971D38760FBC02EF(iLocal_260[1], true);
					}
					else
					{
						unk_0x9F8AA94D6D97DBF4(iLocal_260[1], true);
						unk_0x5BC448CB78FA3E88(iLocal_260[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, false, 786603, -1f);
						unk_0x971D38760FBC02EF(iLocal_260[1], true);
					}
				}
				if (!unk_0x7239B21A38F536BA(bLocal_262))
				{
					bLocal_262 = unk_0xAF35D0D2583051B0(joaat("police3"), Local_233, false, true, true, false);
					Local_234 = { func_186(unk_0x4F8644AF03D0E0D6()) - unk_0x3FEF770D40960D5A(bLocal_262, true) };
					unk_0x8E2530AA8ADA980E(bLocal_262, unk_0x2FFB6B224F4B2926(Local_234.f_0, Local_234.f_1));
					unk_0xF4924635A19EB37D(bLocal_262, true);
				}
				if (!unk_0x7239B21A38F536BA(iLocal_260[2]))
				{
					iLocal_260[2] = unk_0x7DD959874C1FD534(bLocal_262, 6, joaat("s_m_y_cop_01"), -1, true, true);
					if (func_63())
					{
						unk_0xBF0FD6E56C964FCB(iLocal_260[2], joaat("weapon_pistol"), -1, true, true);
						unk_0xC80A74AC829DDD92(iLocal_260[2], iLocal_268);
						unk_0x9F7794730795E019(iLocal_260[2], 1, true);
						unk_0x9F7794730795E019(iLocal_260[2], 3, false);
						unk_0x9F8AA94D6D97DBF4(iLocal_260[2], true);
						unk_0x9454528DF15D657A(iLocal_260[2], bLocal_262, iLocal_258[1], 6, 15f, 2, -1f, -1f, true);
						unk_0x971D38760FBC02EF(iLocal_260[2], true);
					}
					else
					{
						unk_0x9F8AA94D6D97DBF4(iLocal_260[2], true);
						unk_0xE8854A4326B9E12B(&iLocal_265);
						unk_0xE2A2AA2F659D77A7(false, bLocal_262, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0x919BE13EED931959(false, 5000);
						unk_0x39E72BC99E6360CB(iLocal_265);
						unk_0x5ABA3986D90D8A3B(iLocal_260[2], iLocal_265);
						unk_0x3841422E9C488D8C(&iLocal_265);
						unk_0x971D38760FBC02EF(iLocal_260[2], true);
					}
				}
				bLocal_248 = true;
			}
		}
	}
}

int func_168(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x7239B21A38F536BA((*uParam0)[iVar0]))
		{
			if (unk_0x7239B21A38F536BA(bParam1))
			{
				if (unk_0x4C241E39B23DF959(bParam1, false))
				{
					if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
					{
						if (unk_0xA3EE4A07279BB9DB((*uParam0)[iVar0], bParam1, false))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0x751B70C3D034E187((*uParam0)[iVar0], unk_0xD80958FC74E988A6(), fParam2, fParam2, fParam2, false, true, 0))
							{
								return 0;
							}
						}
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
		iVar0++;
	}
	return 1;
}

void func_169()
{
	Global_20471 = 0;
	func_170();
}

void func_170()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_184(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_172(sParam2, iParam3, 0);
}

int func_172(char* sParam0, int iParam1, bool bParam2)
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
					func_77();
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
		if (func_139(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_183();
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
				func_182();
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
				if (func_181())
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
			if (func_180())
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
			func_179();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_178();
		func_173();
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
		func_77();
	}
	return 0;
}

void func_173()
{
	if (!func_174())
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

int func_174()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_177())
	{
		return 0;
	}
	if (func_175(unk_0x4F8644AF03D0E0D6()))
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

bool func_175(bool bParam0)
{
	return func_176(bParam0, 20);
}

var func_176(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_177()
{
	return -1;
}

void func_178()
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

void func_179()
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

int func_180()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_181()
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

void func_182()
{
	if (func_9(14))
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
		Global_20266 = func_119();
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

void func_183()
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

void func_184(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_185()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

Vector3 func_186(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_187()
{
	func_188();
}

int func_188()
{
	if (func_189(0))
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

int func_189(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_190(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_196(iParam0))
	{
		func_195(iParam0, bParam1);
		if (!func_14(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_194(51);
		}
		if (func_109(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_193(iParam0, bParam1) != 322)
		{
			func_191(func_193(iParam0, bParam1), Local_49.f_0, Local_49.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_166(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_166(7);
			}
			else
			{
				func_166(1);
			}
		}
	}
}

void func_191(int iParam0, var uParam1, var uParam2)
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
		func_28((891 + iParam0), 1, -1);
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
		func_192();
	}
}

void func_192()
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
		func_47(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_123() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_188();
				}
			}
		}
	}
}

int func_193(int iParam0, bool bParam1)
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

void func_194(int iParam0)
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

void func_195(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_196(int iParam0)
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

int func_197()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_198(Var0);
	return uVar1;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_199(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (bVar0 >= 0 && bVar0 <= 31)
	{
		if (!func_202(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_26434.f_1), bVar0);
			if (!bParam1)
			{
				func_200(func_201(iParam0));
			}
		}
	}
}

void func_200(char* sParam0)
{
	unk_0x202709F4C58A0424("");
	unk_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR", sParam0);
}

char* func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_202(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return BitTest(Global_113386.f_26434.f_1, iParam0);
	}
	return 0;
}

int func_203()
{
	return 1;
}

int func_204()
{
	if (Global_32198)
	{
		func_166(4);
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	return func_125(iParam0, 5, 1);
}

int func_206()
{
	if (!func_113(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if ((Global_113375 == func_197() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_208(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_209(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_209(bool bParam0)
{
	func_210(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_210(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_148(*bParam0))
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

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_212();
}

void func_212()
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

void func_213(int iParam0)
{
	Global_113375 = iParam0;
}

int func_214(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_197();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_97())
		{
			return 0;
		}
	}
	Local_49 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_165())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_189(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_244())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_10(func_119()))
		{
			if (func_155(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_49.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_243(iParam1))
		{
			return 0;
		}
		if (func_10(func_119()))
		{
			if (func_242(func_119()) == 4 || func_242(func_119()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_119()))
		{
			if (!func_241(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_240(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_239())
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
		if (!func_132(4))
		{
			return 0;
		}
		if (!func_113(5))
		{
			return 0;
		}
		if (func_238(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_243(30) && !func_238(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_119()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_237(bVar4))
				{
					if (func_215(iVar2))
					{
						if (!func_62(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_119() != iVar2)
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

bool func_215(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_216(bVar0);
}

int func_216(bool bParam0)
{
	return func_217(bParam0, 1);
}

int func_217(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(bParam0))
	{
		return 0;
	}
	func_218(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_229(bParam0, bParam1))
	{
		bVar0 = func_228(bParam1);
		iVar1 = func_226(bParam0);
		iVar2 = (func_226(bParam0) - func_226(bParam1));
		iVar3 = (func_228(bParam0) - func_228(bParam1));
		iVar4 = (func_225(bParam0) - func_225(bParam1));
		iVar5 = (func_224(bParam0) - func_224(bParam1));
		iVar6 = (func_223(bParam0) - func_223(bParam1));
		iVar7 = (func_222(bParam0) - func_222(bParam1));
	}
	else
	{
		bVar0 = func_228(bParam0);
		iVar1 = func_226(bParam1);
		iVar2 = (func_226(bParam1) - func_226(bParam0));
		iVar3 = (func_228(bParam1) - func_228(bParam0));
		iVar4 = (func_225(bParam1) - func_225(bParam0));
		iVar5 = (func_224(bParam1) - func_224(bParam0));
		iVar6 = (func_223(bParam1) - func_223(bParam0));
		iVar7 = (func_222(bParam1) - func_222(bParam0));
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
		iVar4 = (iVar4 + func_221(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_220(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_220(bool bParam0, float fParam1, float fParam2)
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

int func_221(int iParam0, int iParam1)
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

int func_222(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_223(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_224(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_225(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_226(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_227(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_228(bool bParam0)
{
	return (bParam0 && 15);
}

int func_229(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(bParam1) || !func_237(bParam0))
	{
		return 1;
	}
	iVar0 = func_226(bParam0);
	iVar1 = func_226(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(bParam0);
	iVar1 = func_228(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(bParam0);
	iVar1 = func_225(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(bParam0);
	iVar1 = func_224(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(bParam0);
	iVar1 = func_223(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(bParam0);
	iVar1 = func_222(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_230()
{
	var uVar0;
	
	func_236(&uVar0, unk_0x494E97C2EF27C470());
	func_235(&uVar0, unk_0x13D2B8ADD79640F2());
	func_234(&uVar0, unk_0x25223CA6B4D20B7F());
	func_233(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_232(&uVar0, unk_0xBBC72712E80257A1());
	func_231(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
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

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (bParam1 < 1 || bParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_235(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_237(bool bParam0)
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
	iVar0 = func_222(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(bParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	func_182();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_240(bool bParam0)
{
	return func_229(func_230(), bParam0);
}

int func_241(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_119();
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

int func_242(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_97())
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

int func_244()
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

void func_245(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_246(struct<9> Param0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iLocal_269)
	{
		func_259(0);
		if (Global_32201)
		{
			unk_0x706D57B0F50DA710("AC_STOP");
		}
		func_258();
		func_105(0);
		unk_0xC12321827687FE4D(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), true, true);
		unk_0xD37401D78A929A49();
		unk_0xE04B48F2CC926253(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), 0);
		unk_0x1EE7063B80FFC77C(Local_232 - Vector(20f, 20f, 20f), Local_232 + Vector(20f, 20f, 20f), true);
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		unk_0x020E5F00CDA207BA(1f);
		if (!unk_0x5F9532F3B5CC2551(bLocal_264, false))
		{
			func_78(bLocal_264, 0, 145);
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_257))
		{
			if (unk_0x1F0B79228E461EC9(bLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0x1F0B79228E461EC9(bLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0xE8854A4326B9E12B(&iLocal_265);
				unk_0xEA47FE3719165B94(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, false, false, false);
				if (!unk_0x84A2DD9AC37C35C1((*iParam1)[0]))
				{
					unk_0x22B0D0E37CCB840D(false, (*iParam1)[0], 150f, -1, false, false);
				}
				else if (!unk_0x84A2DD9AC37C35C1((*iParam1)[1]))
				{
					unk_0x22B0D0E37CCB840D(false, (*iParam1)[1], 150f, -1, false, false);
				}
				unk_0x39E72BC99E6360CB(iLocal_265);
				unk_0x5ABA3986D90D8A3B(bLocal_257, iLocal_265);
				unk_0x3841422E9C488D8C(&iLocal_265);
				unk_0x971D38760FBC02EF(bLocal_257, true);
			}
			unk_0x176CECF6F920D707(bLocal_257);
			unk_0x9F7794730795E019(bLocal_257, 17, true);
			unk_0x9F8AA94D6D97DBF4(bLocal_257, false);
		}
		if (!unk_0x84A2DD9AC37C35C1((*iParam1)[0]))
		{
			unk_0x1913FE4CBF41C463((*iParam1)[0], 317, true);
			unk_0x9F7794730795E019((*iParam1)[0], 17, true);
			unk_0xED74007FFB146BC2((*iParam1)[0]);
			unk_0x63F58F7C80513AAD((*iParam1)[0], true);
			unk_0x9F8AA94D6D97DBF4((*iParam1)[0], false);
		}
		if (!unk_0x84A2DD9AC37C35C1((*iParam1)[1]))
		{
			unk_0x1913FE4CBF41C463((*iParam1)[1], 317, true);
			unk_0x9F7794730795E019((*iParam1)[1], 17, true);
			unk_0xED74007FFB146BC2((*iParam1)[1]);
			unk_0x63F58F7C80513AAD((*iParam1)[1], true);
			unk_0x9F8AA94D6D97DBF4((*iParam1)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < bLocal_259)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_259[iVar0]))
			{
				unk_0x9F8AA94D6D97DBF4(bLocal_259[iVar0], false);
			}
			iVar0++;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_260[0]))
		{
			unk_0xBF0FD6E56C964FCB(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
			unk_0x9F8AA94D6D97DBF4(iLocal_260[0], false);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_260[1]))
		{
			unk_0xBF0FD6E56C964FCB(iLocal_260[1], joaat("weapon_pistol"), -1, false, true);
			unk_0x9F8AA94D6D97DBF4(iLocal_260[1], false);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_260[2]))
		{
			unk_0xBF0FD6E56C964FCB(iLocal_260[2], joaat("weapon_pistol"), -1, false, true);
			unk_0x9F8AA94D6D97DBF4(iLocal_260[2], false);
		}
		if (!bParam2)
		{
			if (!unk_0x84A2DD9AC37C35C1((*iParam1)[0]))
			{
				unk_0x94587F17E9C365D5((*iParam1)[0], func_186(unk_0x4F8644AF03D0E0D6()), 200f, -1, false, false);
			}
			if (!unk_0x84A2DD9AC37C35C1((*iParam1)[1]))
			{
				unk_0x94587F17E9C365D5((*iParam1)[1], func_186(unk_0x4F8644AF03D0E0D6()), 200f, -1, false, false);
			}
		}
		if (!iLocal_218)
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			iLocal_218 = 1;
		}
		func_68(bLocal_51);
		if (unk_0xA6DB27D19ECBB7DA(bLocal_256))
		{
			unk_0x86A652570E5F25DD(&bLocal_256);
		}
		func_68(bLocal_52);
		func_129(0);
		func_142(0, Param0);
	}
	func_247(-1);
	unk_0x1090044AD1DA76FA();
}

void func_247(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_207())
	{
		func_251(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_250(30000);
		StringCopy(&cVar0, func_249(Global_113375, 1), 64);
		if (func_196(Global_113375) > 0)
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
	func_248(&Global_32019);
	Global_113376 = 0;
	func_213(-1);
}

void func_248(var uParam0)
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

char* func_249(int iParam0, bool bParam1)
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

void func_250(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_251(int iParam0)
{
	func_252(iParam0, 0, func_257(iParam0));
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_230();
	func_255(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_254(iParam0, &uVar0);
	Var1 = { func_253(&uVar0) };
}

struct<16> func_253(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_224(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_223(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_222(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_225(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_228(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_254(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	bVar2 = func_225(*uParam0);
	bVar3 = func_224(*uParam0);
	bVar4 = func_223(*uParam0);
	bVar5 = func_222(*uParam0);
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
	iVar6 = func_221(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_256(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_256(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_236(uParam0, bParam1);
	func_235(uParam0, bParam2);
	func_234(uParam0, bParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, bParam4);
	func_231(uParam0, iParam6);
}

int func_257(int iParam0)
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

void func_258()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_259(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_120(iVar0, bParam0);
		iVar0++;
	}
}

