#region Local Var
	int iLocal_0 = 0;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48[9];
	float fLocal_49[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_82[2] = { 0, 0 };
	int iLocal_83[4] = { 0, 0, 0, 0 };
	int iLocal_84[4] = { 0, 0, 0, 0 };
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_88[4] = { 0, 0, 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_93[4] = { 0, 0, 0, 0 };
	bool bLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95[4] = { 0, 0, 0, 0 };
	var uLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	int iLocal_99[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104[5];
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	struct<3> Local_279 = { 0, 0, 0 } ;
	struct<3> Local_280[4];
	struct<3> Local_281 = { 0, 0, 0 } ;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	struct<2> Local_284 = { 0, 5 } ;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = 3;
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
	Local_100 = { -1635.648f, 4737.801f, 52.4304f };
	Local_101 = { -1640.745f, 4696.386f, 39.279f };
	Local_47 = { ScriptParam_284.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		func_178();
	}
	if (func_136(Local_47, -1, 0, 0, 0))
	{
		func_133(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if ((unk_0xC5042CC6F5E3D450() || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_132())
			{
				if (func_131())
				{
					func_178();
				}
			}
			unk_0x208784099002BC30("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_282)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_119())
						{
							func_178();
						}
						func_116();
					}
					break;
				
				case 1:
					func_115();
					func_104();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_115();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_115();
							func_79();
							if (iLocal_46 >= 6)
							{
								if (!func_78())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_110)
										{
											func_77(&(iLocal_83[iVar0]), &(bLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
											func_72(iLocal_88[0], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_88[1], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 2f, 0f, 1000, 0f);
											func_67(&(iLocal_83[iVar0]), &(bLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_107)
										{
											func_77(&(iLocal_83[iVar0]), &(bLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
											func_72(iLocal_86[0], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_86[1], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_83[iVar0]), &(bLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_108)
										{
											func_77(&(iLocal_84[iVar0]), &(bLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
											func_72(iLocal_87[0], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_87[1], unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_56, &uLocal_59, &Local_61, &bLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_84[iVar0]), &(bLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_44();
								}
							}
							if (((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) || unk_0x9134873537FA419C(unk_0xD80958FC74E988A6())) && !unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_100, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_44();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_178();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xD37401D78A929A49();
		unk_0x020E5F00CDA207BA(1f);
		if (unk_0xA6DB27D19ECBB7DA(bLocal_89))
		{
			unk_0x86A652570E5F25DD(&bLocal_89);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
		{
			unk_0x86A652570E5F25DD(&bLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_93[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_93[iVar0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_95[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
					{
						if (unk_0x751B70C3D034E187(iLocal_83[iVar0], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_94[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_94[iVar0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_96[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar0]))
					{
						if (unk_0x751B70C3D034E187(iLocal_84[iVar0], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xDC0F817884CDD856(5, true);
			unk_0xDC0F817884CDD856(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_38(), 1, 25000);
		}
		iLocal_105 = 1;
	}
	if (!unk_0xE33D59DA70B58FDF(Local_100, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x4F8644AF03D0E0D6()), Local_100) > 300f)
	{
		func_178();
	}
}

Vector3 func_2(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

int func_3(int iParam0, int iParam1, bool bParam2)
{
	if (func_37(iParam0) == 3)
	{
		return 0;
	}
	if (func_37(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_37(iParam0), 0, iParam1, bParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_36();
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
					func_35(99, 1);
					func_34(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_34(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_34(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_property"), bParam3);
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
									func_34(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_14(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_35(95, bParam3);
					break;
				
				case 1:
					func_35(97, bParam3);
					break;
				
				case 2:
					func_35(96, bParam3);
					break;
			}
			func_35(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
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
					func_34(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_total_cash_earned"), bParam3);
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
	func_6(iParam0);
	if (Global_43052 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_9() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_9() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_8(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_8(bool bParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574918;
}

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_12();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_14(int iParam0)
{
	func_35(93, iParam0);
	func_35(29, iParam0);
	func_35(30, iParam0);
}

int func_15(int iParam0)
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
		return func_17(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_16(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_16(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_16(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_16(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_16(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_16(8277, -1, 0);
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
	return BitTest(Global_2359296[func_9() /*5567*/].f_681.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_17(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_12();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_18(bool bParam0)
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
		func_33(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (func_32(14) && !func_31(iParam0))
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
	if (func_30(&Global_4541529))
	{
		if (func_28(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_4541529, iParam0))
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

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_25(uParam0, iVar0);
		iVar0++;
	}
	func_26(uParam0, (Global_4541528 - 0.5f));
}

void func_25(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_26(var uParam0, float fParam1)
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

float func_27(var uParam0)
{
	return uParam0->f_80;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_31(int iParam0)
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

bool func_32(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_33(int iParam0, bool bParam1)
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

void func_34(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_35(int iParam0, int iParam1)
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

void func_36()
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

int func_37(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_38()
{
	func_39();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_39()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_42(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_41(unk_0xD80958FC74E988A6());
			if (func_40(iVar0) && (!func_32(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_40(Global_113386.f_2363.f_539.f_4321))
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

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return func_43(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_44()
{
	while (func_66())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (!func_65())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	func_48(-1, 0);
	func_45();
	iLocal_45 = 3;
}

void func_45()
{
	func_46();
}

int func_46()
{
	if (func_47(0))
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

int func_47(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_48(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_62(iParam0))
	{
		func_61(iParam0, bParam1);
		if (!func_60(51))
		{
			func_56("RE_REWARD", 1, 0, 4000, 10000, func_59(), 0, 138, 0);
			func_55(51);
		}
		if (func_54(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_53(iParam0, bParam1) != 322)
		{
			func_50(func_53(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_49(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_49(7);
			}
			else
			{
				func_49(1);
			}
		}
	}
}

void func_49(int iParam0)
{
	Global_113372 = iParam0;
}

void func_50(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_51();
	}
}

void func_51()
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
		func_33(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_52() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_46();
				}
			}
		}
	}
}

int func_52()
{
	return Global_31959;
}

int func_53(int iParam0, bool bParam1)
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

int func_54(int iParam0)
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

void func_55(int iParam0)
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

void func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_57(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_57(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_58();
	}
}

void func_58()
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

int func_59()
{
	func_39();
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

int func_60(int iParam0)
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

void func_61(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_62(int iParam0)
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

int func_63()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_64(Var0);
	return uVar1;
}

int func_64(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_65()
{
	return 1;
}

int func_66()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (unk_0x7239B21A38F536BA(*uParam2))
	{
		if (unk_0x4C241E39B23DF959(*uParam2, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(*uParam0))
			{
				if (unk_0xA3EE4A07279BB9DB(*uParam0, *uParam2, false))
				{
					if (unk_0xA6DB27D19ECBB7DA(*bParam1))
					{
						unk_0x86A652570E5F25DD(bParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xA6DB27D19ECBB7DA(*bParam1))
				{
					*bParam1 = func_70(*uParam0, 1, 145);
				}
			}
			if (!unk_0xA6DB27D19ECBB7DA(*bParam3))
			{
				if (iVar0 == 1)
				{
					*bParam3 = func_68(unk_0x3FEF770D40960D5A(*uParam2, true), 0);
					unk_0x03D7FB09E75D6B7E(*bParam3, true);
					unk_0xAE9FC9EF6A9FAC79(*bParam3, 9);
					unk_0xEAA0FFE120D92784(*bParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x586AFE3FF72D996E(*bParam3) };
				Var2 = { unk_0x3FEF770D40960D5A(*uParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var2.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var2.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var2.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xAE2AF67E9D9AF65D(*bParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x86A652570E5F25DD(bParam3);
				}
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(*bParam3))
			{
				unk_0x86A652570E5F25DD(bParam3);
			}
			if (!unk_0x84A2DD9AC37C35C1(*uParam0))
			{
				if (!unk_0xA6DB27D19ECBB7DA(*bParam1))
				{
					*bParam1 = func_70(*uParam0, 1, 145);
				}
			}
		}
	}
}

bool func_68(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_70(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_71(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_71(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

void func_72(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9)
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (((((((unk_0x7239B21A38F536BA(bParam1) && bParam0 != bParam1) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(bParam1))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(bParam1))) && unk_0xB104CD1BABF302E2(bParam1)) && func_76(bParam0))
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *bParam5;
				*uParam2 = { unk_0x163E252DE035A133(*uParam2, *uParam3, Param7) };
				func_75(bParam1, uParam4, bParam5);
			}
			if (!unk_0xE31C2C72B8692B64(bParam0))
			{
				*uParam6 = unk_0x9CD27B0045628463();
			}
			else if ((unk_0x9CD27B0045628463() - *uParam6) > iParam8)
			{
				if (func_74(bParam0, bParam1, 1) > fParam9 && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam1, true), *uParam2, true) > 20f)
				{
					if (!func_73(*uParam2))
					{
						if (!unk_0xE33D59DA70B58FDF(*uParam2, 3f))
						{
							unk_0xBE31FD6CE464AC59(*uParam2, 1.5f, 0);
							unk_0x01C7B9B38428AEB6(*uParam2, 3f, false, false, false, false, false, false, 0);
							unk_0x06843DA7060A026B(bParam0, *uParam2, true, false, false, true);
							unk_0x8E2530AA8ADA980E(bParam0, *uParam3);
							unk_0x49733E92263139D1(bParam0, 5f);
							unk_0xAB54A438726D25D5(bParam0, 10f);
							unk_0x2497C4717C8B881E(bParam0, true, true, false);
							*uParam6 = unk_0x9CD27B0045628463();
						}
						else
						{
							Var0 = { unk_0x163E252DE035A133(Local_61, bLocal_60, Param7) };
							if (!func_73(Var0))
							{
								if (!unk_0xE33D59DA70B58FDF(Var0, 2f))
								{
									unk_0xBE31FD6CE464AC59(Var0, 1.5f, 0);
									unk_0x01C7B9B38428AEB6(Var0, 3f, false, false, false, false, false, false, 0);
									unk_0x06843DA7060A026B(bParam0, Var0, true, false, false, true);
									unk_0x8E2530AA8ADA980E(bParam0, bLocal_60);
									unk_0x49733E92263139D1(bParam0, 5f);
									unk_0xAB54A438726D25D5(bParam0, 10f);
									unk_0x2497C4717C8B881E(bParam0, true, true, false);
									*uParam6 = unk_0x9CD27B0045628463();
									return;
								}
							}
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

int func_73(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_74(bool bParam0, bool bParam1, bool bParam2)
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

void func_75(bool bParam0, var uParam1, var uParam2)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			*uParam1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			*uParam2 = unk_0xE83D4F9BA2A38914(bParam0);
		}
	}
}

int func_76(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (!unk_0x22AC59A870E6A669(bParam0, -1, false))
			{
				bVar0 = unk_0xBB40DD2270B65366(bParam0, -1, false);
				if (unk_0x7239B21A38F536BA(bVar0))
				{
					if (!unk_0x5F9532F3B5CC2551(bVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_77(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0x84A2DD9AC37C35C1(*bParam0))
		{
			if (unk_0xA6DB27D19ECBB7DA(*bParam1))
			{
				unk_0x86A652570E5F25DD(bParam1);
			}
			unk_0x2595DD4236549CE3(bParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x997ABD671D25CA0B(*bParam0, false))
			{
			}
			else if (unk_0x7239B21A38F536BA(*bParam2))
			{
				if (unk_0x4C241E39B23DF959(*bParam2, false))
				{
					if (unk_0xA3EE4A07279BB9DB(*bParam0, *bParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(*bParam2))
	{
		if (unk_0x4C241E39B23DF959(*bParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x8386BFB614D06749(*bParam2);
				unk_0xC53EB42A499A7E90(*bParam2);
				unk_0x18EB48CFC41F2EA0(*bParam2, 0f);
				unk_0x629BFA74418D6239(bParam2);
				if (unk_0xA6DB27D19ECBB7DA(*bParam3))
				{
					unk_0x86A652570E5F25DD(bParam3);
				}
			}
		}
		else
		{
			unk_0x8386BFB614D06749(*bParam2);
			unk_0xC53EB42A499A7E90(*bParam2);
			unk_0x18EB48CFC41F2EA0(*bParam2, 0f);
			unk_0x629BFA74418D6239(bParam2);
			if (unk_0xA6DB27D19ECBB7DA(*bParam3))
			{
				unk_0x86A652570E5F25DD(bParam3);
			}
		}
	}
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_283)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x7239B21A38F536BA(iLocal_83[iVar1]))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar1]))
			{
				if (unk_0x751B70C3D034E187(iLocal_83[iVar1], unk_0xD80958FC74E988A6(), 200f, 200f, 200f, false, true, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x7239B21A38F536BA(iLocal_84[iVar1]))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar1]))
			{
				if (unk_0x751B70C3D034E187(iLocal_84[iVar1], unk_0xD80958FC74E988A6(), 200f, 200f, 200f, false, true, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_79()
{
	int iVar0;
	
	if (bLocal_283)
	{
		if (bLocal_110)
		{
		}
		else if (bLocal_107)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_83[0]) && !unk_0x5F9532F3B5CC2551(iLocal_86[0], false))
			{
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_83[1]) && !unk_0x5F9532F3B5CC2551(iLocal_86[1], false))
			{
			}
		}
		else
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84[0]) && !unk_0x5F9532F3B5CC2551(iLocal_87[0], false))
			{
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84[1]) && !unk_0x5F9532F3B5CC2551(iLocal_87[1], false))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xED3F346429CCD659(iLocal_99[iVar0]);
			if (unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_93[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(bLocal_93[iVar0]));
					iLocal_68++;
				}
			}
			else if (!unk_0x997ABD671D25CA0B(iLocal_83[iVar0], false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_93[iVar0]))
				{
					bLocal_93[iVar0] = func_70(iLocal_83[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xED3F346429CCD659(iLocal_99[iVar0]);
			if (unk_0x84A2DD9AC37C35C1(iLocal_84[iVar0]))
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_94[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(bLocal_94[iVar0]));
					iLocal_69++;
				}
			}
			else if (!unk_0x997ABD671D25CA0B(iLocal_84[iVar0], false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_94[iVar0]))
				{
					bLocal_94[iVar0] = func_70(iLocal_84[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_68 >= 4 && iLocal_69 >= 4)
		{
			func_44();
		}
	}
	func_100();
	func_99();
	switch (iLocal_46)
	{
		case 0:
			if (((unk_0x5FC472C501CCADB3(unk_0x4F8644AF03D0E0D6()) || !unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_100 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_110)
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_110 = true;
					}
				}
				if (unk_0x240A18690AE96513(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), &Local_102, 1, 3f, 0f))
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_102, 20f, 20f, 20f, false, true, 0))
					{
						unk_0xDC0F817884CDD856(5, true);
						unk_0xDC0F817884CDD856(3, true);
						unk_0xC1B1E9A034A63A62(false);
						func_97();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 5000 || bLocal_110)
			{
				unk_0xC1B1E9A034A63A62(false);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_110)
			{
				if (unk_0x83666F9FB8FEBD4B() > 3500)
				{
					if (((!unk_0x5F9532F3B5CC2551(iLocal_88[0], false) && !unk_0x5F9532F3B5CC2551(iLocal_88[1], false)) && !unk_0x84A2DD9AC37C35C1(iLocal_83[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_83[1]))
					{
						unk_0xF75B0D629E1C063D(iLocal_83[0], iLocal_88[0], -1);
						unk_0xF75B0D629E1C063D(iLocal_83[1], iLocal_88[1], -1);
						unk_0x9F7794730795E019(iLocal_83[0], 3, false);
						unk_0x9F7794730795E019(iLocal_83[1], 3, false);
						unk_0x560A43136EB58105(iLocal_83[0], false);
						unk_0x560A43136EB58105(iLocal_83[1], false);
						iLocal_46 = 5;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (!unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			Local_103 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			bLocal_76 = unk_0xD53343AA4FB7DD28(10, 15);
			if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0xE50E52416CCF948B(Local_103, bLocal_76, &(Local_280[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_280[1 /*3*/] = { Local_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xE33D59DA70B58FDF(Local_280[0 /*3*/], 7f) && !unk_0xE33D59DA70B58FDF(Local_280[1 /*3*/], 7f))
					{
						if (unk_0x4C241E39B23DF959(iLocal_86[0], false))
						{
							unk_0x06843DA7060A026B(iLocal_86[0], Local_280[0 /*3*/], true, false, false, true);
							func_96(iLocal_86[0], iLocal_83[0]);
						}
						if (unk_0x4C241E39B23DF959(iLocal_86[1], false))
						{
							unk_0x06843DA7060A026B(iLocal_86[1], Local_280[1 /*3*/], true, false, false, true);
							func_96(iLocal_86[1], iLocal_83[1]);
						}
						if (func_38() == 0)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 1)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 2)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_107 = true;
						unk_0xC1B1E9A034A63A62(false);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_103 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			bLocal_76 = unk_0xD53343AA4FB7DD28(30, 35);
			if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0xE50E52416CCF948B(Local_103, bLocal_76, &(Local_280[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_280[1 /*3*/] = { Local_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0xE33D59DA70B58FDF(Local_280[0 /*3*/], 7f) && !unk_0xE33D59DA70B58FDF(Local_280[1 /*3*/], 7f))
					{
						if (unk_0x4C241E39B23DF959(iLocal_87[0], false))
						{
							unk_0x06843DA7060A026B(iLocal_87[0], Local_280[0 /*3*/], true, false, false, true);
							func_96(iLocal_87[0], iLocal_84[0]);
						}
						if (unk_0x4C241E39B23DF959(iLocal_87[1], false))
						{
							unk_0x06843DA7060A026B(iLocal_87[1], Local_280[1 /*3*/], true, false, false, true);
							func_96(iLocal_87[1], iLocal_84[1]);
						}
						if (func_38() == 0)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 1)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_38() == 2)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						unk_0xC1B1E9A034A63A62(false);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_103 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			bLocal_76 = unk_0xD53343AA4FB7DD28(5, 10);
			if (unk_0xE50E52416CCF948B(Local_103, bLocal_76, &(Local_280[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_280[1 /*3*/] = { Local_280[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0xE33D59DA70B58FDF(Local_280[0 /*3*/], 7f) && !unk_0xE33D59DA70B58FDF(Local_280[1 /*3*/], 7f))
				{
					if (unk_0x4C241E39B23DF959(iLocal_88[0], false))
					{
						unk_0x06843DA7060A026B(iLocal_88[0], Local_280[0 /*3*/], true, false, false, true);
						func_96(iLocal_88[0], iLocal_83[0]);
					}
					if (unk_0x4C241E39B23DF959(iLocal_88[1], false))
					{
						unk_0x06843DA7060A026B(iLocal_88[1], Local_280[1 /*3*/], true, false, false, true);
						func_96(iLocal_88[1], iLocal_83[1]);
					}
					if (func_38() == 0)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_38() == 1)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_38() == 2)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_107 = true;
					unk_0xC1B1E9A034A63A62(false);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_66())
			{
				bLocal_64 = unk_0x313CE5879CEB6FCD(1.5f, 2.5f);
				bLocal_65 = unk_0x313CE5879CEB6FCD(2f, 4f);
				bLocal_66 = unk_0x313CE5879CEB6FCD(0.1f, 2f);
				if (iLocal_78 < 5 && iLocal_79 < unk_0x9CD27B0045628463())
				{
					Local_50 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
					unk_0x867654CBC7606F2C((Local_50.f_0 + bLocal_64), (Local_50.f_1 + bLocal_65), (Local_50.f_2 + bLocal_66), (Local_50.f_0 - bLocal_64), (Local_50.f_1 - bLocal_65), Local_50.f_2, 10, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
					iLocal_79 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(200, 500));
					iLocal_78++;
				}
			}
			if (iLocal_78 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_80(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_81(sParam2, iParam3, 0);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
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
					func_94();
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
		if (func_93(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_92();
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
				func_91();
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
				if (func_90())
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
			if (func_89())
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
			func_88();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_87();
		func_82();
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
		func_94();
	}
	return 0;
}

void func_82()
{
	if (!func_83())
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

int func_83()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_86())
	{
		return 0;
	}
	if (func_84(unk_0x4F8644AF03D0E0D6()))
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

bool func_84(bool bParam0)
{
	return func_85(bParam0, 20);
}

var func_85(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_86()
{
	return -1;
}

void func_87()
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

void func_88()
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

int func_89()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_90()
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

void func_91()
{
	if (func_32(14))
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
		Global_20266 = func_38();
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

void func_92()
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

bool func_93(int iParam0, int iParam1)
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

void func_94()
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_96(bool bParam0, bool bParam1)
{
	unk_0x428CA6DBD1094446(bParam0, false);
	unk_0x49733E92263139D1(bParam0, 5f);
	Local_279 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	Local_281 = { Local_103 - Local_279 };
	unk_0x8E2530AA8ADA980E(bParam0, unk_0x2FFB6B224F4B2926(Local_281.f_0, Local_281.f_1));
	if (bLocal_110)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam1))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				unk_0x3C08A8E30363B353(bParam1, unk_0xD80958FC74E988A6());
				unk_0x4EDE34FBADD967A6(true);
				if (!unk_0x84A2DD9AC37C35C1(bParam1))
				{
					unk_0xCC665AAC360D31E7(bParam1, 32, true);
				}
			}
			else
			{
				unk_0x9454528DF15D657A(bParam1, bParam0, unk_0xD80958FC74E988A6(), 6, 20f, 786469, -1f, -1f, true);
			}
			if (!unk_0x5F9532F3B5CC2551(bParam0, false))
			{
				unk_0xAB54A438726D25D5(bParam0, unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()));
			}
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(bParam1))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x3C08A8E30363B353(bParam1, unk_0xD80958FC74E988A6());
		}
		else
		{
			unk_0x9454528DF15D657A(bParam1, bParam0, unk_0xD80958FC74E988A6(), 2, 100f, 786469, -1f, -1f, true);
		}
		unk_0xAB54A438726D25D5(bParam0, unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()));
	}
}

void func_97()
{
	int iVar0;
	
	iLocal_86[0] = unk_0xAF35D0D2583051B0(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_86[0], true, false);
	unk_0x2497C4717C8B881E(iLocal_86[0], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_86[0], 2);
	unk_0x79F020FF9EDC0748(iLocal_86[0], true);
	unk_0x428CA6DBD1094446(iLocal_86[0], true);
	unk_0x95A88F0B409CDA47(iLocal_86[0], "49GNL112");
	iLocal_86[1] = unk_0xAF35D0D2583051B0(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_86[1], true, false);
	unk_0x2497C4717C8B881E(iLocal_86[1], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_86[1], 2);
	unk_0x79F020FF9EDC0748(iLocal_86[1], true);
	unk_0x428CA6DBD1094446(iLocal_86[1], true);
	unk_0x95A88F0B409CDA47(iLocal_86[1], "47TMS703");
	iLocal_88[0] = unk_0xAF35D0D2583051B0(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_88[0], true, false);
	unk_0x2497C4717C8B881E(iLocal_88[0], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_88[0], 2);
	unk_0x79F020FF9EDC0748(iLocal_88[0], true);
	unk_0x428CA6DBD1094446(iLocal_88[0], true);
	unk_0x95A88F0B409CDA47(iLocal_88[0], "49GNL112");
	iLocal_88[1] = unk_0xAF35D0D2583051B0(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_88[1], true, false);
	unk_0x2497C4717C8B881E(iLocal_88[1], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_88[1], 2);
	unk_0x79F020FF9EDC0748(iLocal_88[1], true);
	unk_0x428CA6DBD1094446(iLocal_88[1], true);
	unk_0x95A88F0B409CDA47(iLocal_88[1], "47TMS703");
	iLocal_83[0] = unk_0x7DD959874C1FD534(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), -1, true, true);
	iLocal_83[1] = unk_0x7DD959874C1FD534(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), -1, true, true);
	if (!bLocal_110)
	{
		iLocal_83[2] = unk_0x7DD959874C1FD534(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), false, true, true);
		iLocal_83[3] = unk_0x7DD959874C1FD534(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), false, true, true);
	}
	iLocal_87[0] = unk_0xAF35D0D2583051B0(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_87[0], true, false);
	unk_0x2497C4717C8B881E(iLocal_87[0], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_87[0], 2);
	unk_0x79F020FF9EDC0748(iLocal_87[0], true);
	unk_0x428CA6DBD1094446(iLocal_87[0], true);
	unk_0x95A88F0B409CDA47(iLocal_87[0], "49GNL112");
	iLocal_87[1] = unk_0xAF35D0D2583051B0(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	unk_0xAD738C3085FE7E11(iLocal_87[1], true, false);
	unk_0x2497C4717C8B881E(iLocal_87[1], true, true, false);
	unk_0x34E710FF01247C5A(iLocal_87[1], 2);
	unk_0x79F020FF9EDC0748(iLocal_87[1], true);
	unk_0x428CA6DBD1094446(iLocal_87[1], true);
	unk_0x95A88F0B409CDA47(iLocal_87[1], "47TMS703");
	iLocal_84[0] = unk_0x7DD959874C1FD534(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), -1, true, true);
	iLocal_84[1] = unk_0x7DD959874C1FD534(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), -1, true, true);
	iLocal_84[2] = unk_0x7DD959874C1FD534(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), false, true, true);
	iLocal_84[3] = unk_0x7DD959874C1FD534(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), false, true, true);
	unk_0xF372BC22FCB88606("RE_deal1", &iLocal_111);
	unk_0xF372BC22FCB88606("RE_deal2", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
		{
			unk_0xC80A74AC829DDD92(iLocal_83[iVar0], iLocal_111);
			unk_0xAD738C3085FE7E11(iLocal_83[iVar0], true, false);
			if (bLocal_110)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_83[1]))
				{
					unk_0xBF0FD6E56C964FCB(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0x7AEFB85C1D49DEB6(iLocal_83[iVar0], 15);
				unk_0x9F7794730795E019(iLocal_83[iVar0], 3, false);
			}
			else
			{
				unk_0xBF0FD6E56C964FCB(iLocal_83[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0x7AEFB85C1D49DEB6(iLocal_83[iVar0], 13);
			}
			unk_0x9F7794730795E019(iLocal_83[iVar0], 13, true);
			unk_0x9F7794730795E019(iLocal_83[iVar0], 2, true);
			unk_0x9F7794730795E019(iLocal_83[iVar0], 1, true);
			func_98(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
		{
			unk_0xC80A74AC829DDD92(iLocal_84[iVar0], iLocal_112);
			unk_0xAD738C3085FE7E11(iLocal_84[iVar0], true, false);
			if (bLocal_110)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_83[1]))
				{
					unk_0xBF0FD6E56C964FCB(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0x7AEFB85C1D49DEB6(iLocal_83[iVar0], 15);
				unk_0x9F7794730795E019(iLocal_83[iVar0], 3, false);
				func_98(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0xBF0FD6E56C964FCB(iLocal_84[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0x7AEFB85C1D49DEB6(iLocal_84[iVar0], 13);
				func_98(&uLocal_114, 5, iLocal_84[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x9F7794730795E019(iLocal_84[iVar0], 13, true);
			unk_0x9F7794730795E019(iLocal_84[iVar0], 2, true);
			unk_0x9F7794730795E019(iLocal_84[iVar0], 1, true);
		}
		iVar0++;
	}
	unk_0xBF25EB89375A37AD(3, iLocal_111, iLocal_112);
	unk_0xBF25EB89375A37AD(3, iLocal_112, iLocal_111);
	unk_0xBF25EB89375A37AD(3, iLocal_111, joaat("player"));
	unk_0xBF25EB89375A37AD(3, iLocal_112, joaat("player"));
	unk_0xE532F5D78798DAAB(joaat("g_m_m_chigoon_02"));
	unk_0xE532F5D78798DAAB(joaat("g_m_y_salvagoon_03"));
	unk_0xE532F5D78798DAAB(joaat("rebel"));
	unk_0xE532F5D78798DAAB(joaat("bobcatxl"));
	unk_0xE532F5D78798DAAB(joaat("sanchez"));
	unk_0xE532F5D78798DAAB(joaat("a_c_rottweiler"));
	bLocal_283 = true;
	iLocal_44 = 1;
}

void func_98(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_74)
	{
		case 0:
			if (bLocal_107)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_83[iVar0], 100f, 100f, 20f, false, true, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_108)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar1]))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_84[iVar1], 100f, 100f, 20f, false, true, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xBF25EB89375A37AD(5, iLocal_111, iLocal_112);
			unk_0xBF25EB89375A37AD(5, iLocal_112, iLocal_111);
			unk_0xBF25EB89375A37AD(5, iLocal_111, joaat("player"));
			unk_0xBF25EB89375A37AD(5, iLocal_112, joaat("player"));
			if (bLocal_107)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar2]))
					{
						if ((!unk_0x4859F1FC66A6278E(iLocal_83[iVar2], false) && unk_0x77F1BEB8863288D5(iLocal_83[iVar2], 579380604) != 1) && unk_0x77F1BEB8863288D5(iLocal_83[iVar2], 579380604) != 0)
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_83[iVar2]);
							unk_0xF166E48407BAC484(iLocal_83[iVar2], unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x971D38760FBC02EF(iLocal_83[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_80(&uLocal_114, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x9CD27B0045628463();
					iLocal_74 = 4;
				}
			}
			if (bLocal_108)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar3]))
					{
						if ((!unk_0x4859F1FC66A6278E(iLocal_84[iVar3], false) && unk_0x77F1BEB8863288D5(iLocal_84[iVar3], 579380604) != 1) && unk_0x77F1BEB8863288D5(iLocal_84[iVar3], 579380604) != 0)
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_84[iVar3]);
							unk_0xF166E48407BAC484(iLocal_84[iVar3], unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x971D38760FBC02EF(iLocal_84[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_80(&uLocal_114, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x9CD27B0045628463();
					iLocal_74 = 4;
				}
			}
			break;
	}
}

void func_100()
{
	switch (iLocal_72)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_101, 7f, 7f, 10f, false, true, 0))
				{
					func_102();
					unk_0x4EDE34FBADD967A6(false);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x69F4BE8C8CC4796C(bLocal_80, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_90))
					{
						bLocal_90 = func_101(iLocal_97);
					}
					iLocal_71 = unk_0x9CD27B0045628463();
					iLocal_72++;
				}
			}
			else
			{
				iLocal_72++;
			}
			break;
	}
	switch (iLocal_73)
	{
		case 1:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_80, 10f, 10f, 6f, false, true, 0))
				{
					if (!func_66())
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
						{
							unk_0x69F4BE8C8CC4796C(bLocal_80, unk_0xD80958FC74E988A6(), -1, 2048, 2);
							unk_0x5AE11BC36633DE4E(false);
							iLocal_73++;
						}
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(false);
				iLocal_73++;
			}
			break;
		
		case 2:
			if (!func_66() || unk_0xC9D9444186B5A374() > 4000)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
				{
					unk_0x6B76DC1F3AE6E6A3(bLocal_80, false, false);
					unk_0x86A652570E5F25DD(&bLocal_91);
				}
				if (unk_0xC9D9444186B5A374() > 7000)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_81[6]))
					{
						unk_0x6B76DC1F3AE6E6A3(bLocal_81[6], false, false);
						unk_0x86A652570E5F25DD(&(bLocal_92[6]));
					}
				}
				if (unk_0xC9D9444186B5A374() > 9000)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
					{
						unk_0x6B76DC1F3AE6E6A3(bLocal_81[7], false, false);
						unk_0x86A652570E5F25DD(&(bLocal_92[7]));
					}
					iLocal_73++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_81[6]))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_81[6], false, false);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_81[7], false, false);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_80, false, false);
			}
			break;
	}
}

bool func_101(int iParam0)
{
	bool bVar0;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	bVar0 = unk_0xBE339365C863BD36(iParam0);
	unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	return bVar0;
}

void func_102()
{
	Global_20471 = 0;
	func_103();
}

void func_103()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_104()
{
	int iVar0;
	
	if (unk_0x80EC48E6679313F9(iLocal_97))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_89))
		{
			unk_0x86A652570E5F25DD(&bLocal_89);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
		{
			unk_0x86A652570E5F25DD(&bLocal_90);
		}
		iLocal_73 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		unk_0x020E5F00CDA207BA(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(bLocal_81[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_81[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(bLocal_92[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(bLocal_92[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < bLocal_82)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_82[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_132())
		{
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_48[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_89))
				{
					unk_0x86A652570E5F25DD(&bLocal_89);
				}
				if ((!unk_0xA6DB27D19ECBB7DA(bLocal_91) && !unk_0xA6DB27D19ECBB7DA(bLocal_92[6])) && !unk_0xA6DB27D19ECBB7DA(bLocal_92[7]))
				{
					bLocal_91 = func_70(bLocal_80, 1, 145);
					bLocal_92[6] = func_70(bLocal_81[6], 1, 145);
					bLocal_92[7] = func_70(bLocal_81[7], 1, 145);
				}
				unk_0x75A16C3DA34F1245(bLocal_91, false);
				unk_0x75A16C3DA34F1245(bLocal_92[6], false);
				unk_0x75A16C3DA34F1245(bLocal_92[7], false);
				func_105(1);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_81[6]))
		{
			if (((((unk_0x77F1BEB8863288D5(bLocal_81[6], 1785177548) != 1 && unk_0x77F1BEB8863288D5(bLocal_81[6], 1785177548) != 0) || unk_0x28D3FED7190D3A0B(bLocal_81[6])) || unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_81[6])) || unk_0x605F5A140F202491(bLocal_81[6])) || unk_0x95EB9964FF5C5C65(bLocal_81[6]))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_81[6], false, false);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
		{
			if (((((unk_0x77F1BEB8863288D5(bLocal_81[7], 1785177548) != 1 && unk_0x77F1BEB8863288D5(bLocal_81[7], 1785177548) != 0) || unk_0x28D3FED7190D3A0B(bLocal_81[7])) || unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_81[7])) || unk_0x605F5A140F202491(bLocal_81[7])) || unk_0x95EB9964FF5C5C65(bLocal_81[7]))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_81[7], false, false);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
		{
			if (((((unk_0x77F1BEB8863288D5(bLocal_80, 1785177548) != 1 && unk_0x77F1BEB8863288D5(bLocal_80, 1785177548) != 0) || unk_0x28D3FED7190D3A0B(bLocal_80)) || unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_80)) || unk_0x605F5A140F202491(bLocal_80)) || unk_0x95EB9964FF5C5C65(bLocal_80))
			{
				unk_0x6B76DC1F3AE6E6A3(bLocal_80, false, false);
			}
		}
		if (!bLocal_106)
		{
		}
	}
	func_100();
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_81[6]))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(bLocal_81[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && unk_0x0267D00AF114F17A(unk_0xD80958FC74E988A6(), bLocal_81[6]))
				{
					unk_0x69F4BE8C8CC4796C(bLocal_81[6], unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_81[6], 4000, 2048, 2);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_71 = unk_0x9CD27B0045628463();
					iLocal_75 = 1;
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(bLocal_81[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && unk_0x0267D00AF114F17A(unk_0xD80958FC74E988A6(), bLocal_81[7]))
				{
					unk_0x69F4BE8C8CC4796C(bLocal_81[7], unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_81[7], 4000, 2048, 2);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_71 = unk_0x9CD27B0045628463();
					iLocal_75 = 1;
				}
			}
			if (unk_0x84A2DD9AC37C35C1(bLocal_81[6]) && unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
			{
				iLocal_75 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(bLocal_91))
			{
				unk_0x75A16C3DA34F1245(bLocal_91, true);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_92[6]))
			{
				unk_0x75A16C3DA34F1245(bLocal_92[6], true);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_92[7]))
			{
				unk_0x75A16C3DA34F1245(bLocal_92[7], true);
			}
			iLocal_70 = unk_0x9CD27B0045628463();
			if ((iLocal_70 - iLocal_71) > 6000 && !func_66())
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_81[6]))
				{
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_81[7]))
				{
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_90))
				{
					bLocal_90 = func_101(iLocal_97);
				}
				unk_0x020E5F00CDA207BA(0f);
				if (!func_132())
				{
					func_105(1);
				}
				iLocal_75 = 2;
			}
			break;
	}
}

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_54(Global_113375))
		{
			func_106(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_54(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_107(func_108(iParam0), -1);
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
					func_107(func_108(iParam0), -1);
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
					func_107(func_108(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_107(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
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

int func_109()
{
	switch (func_110(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_114(0))
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
		if (!func_112(iParam2))
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
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
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

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_43052);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(iLocal_85[0], false))
	{
		if (unk_0xBB40DD2270B65366(iLocal_85[0], -1, false) == bLocal_81[8])
		{
			unk_0x9D3AF56E94C9AE98(iLocal_85[0], 60000f);
			unk_0x9C11908013EA4715(iLocal_85[0]);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_80))
	{
		if (unk_0x47E4E977581C5B55(bLocal_80))
		{
			unk_0x6B76DC1F3AE6E6A3(bLocal_80, false, false);
		}
	}
	else if (unk_0xA6DB27D19ECBB7DA(bLocal_91))
	{
		unk_0x86A652570E5F25DD(&bLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE33D59DA70B58FDF(Local_100, 30f) && unk_0x2A488C176D52CCA5(func_2(unk_0x4F8644AF03D0E0D6()), Local_100) > 300f)
		{
			if (unk_0x7239B21A38F536BA(bLocal_81[iVar0]))
			{
				unk_0x2595DD4236549CE3(&(bLocal_81[iVar0]));
			}
		}
		if (unk_0x84A2DD9AC37C35C1(bLocal_81[iVar0]))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_92[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_92[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_116()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	unk_0x963D27A58DF860AC(joaat("g_m_m_chigoon_02"));
	unk_0x963D27A58DF860AC(joaat("g_m_y_salvagoon_03"));
	unk_0x963D27A58DF860AC(joaat("rebel"));
	unk_0x963D27A58DF860AC(joaat("bobcatxl"));
	unk_0x963D27A58DF860AC(joaat("sanchez"));
	unk_0x963D27A58DF860AC(joaat("a_c_rottweiler"));
	unk_0x963D27A58DF860AC(joaat("prop_security_case_01"));
	unk_0xD3BD40951412FEF6("random@dealgonewrong");
	unk_0xD3BD40951412FEF6("random@dealgonewrongdead_peds");
	if ((((((((unk_0x98A4EB5D89A0C952(joaat("g_m_m_chigoon_02")) && unk_0x98A4EB5D89A0C952(joaat("g_m_y_salvagoon_03"))) && unk_0x98A4EB5D89A0C952(joaat("rebel"))) && unk_0x98A4EB5D89A0C952(joaat("bobcatxl"))) && unk_0x98A4EB5D89A0C952(joaat("sanchez"))) && unk_0x98A4EB5D89A0C952(joaat("a_c_rottweiler"))) && unk_0x98A4EB5D89A0C952(joaat("prop_security_case_01"))) && unk_0xD031A9162D01088C("random@dealgonewrong")) && unk_0xD031A9162D01088C("random@dealgonewrongdead_peds"))
	{
		unk_0x1B5C85C612E5256E(Local_100 - Vector(150f, 150f, 150f), Local_100 + Vector(150f, 150f, 150f), false, true, true, true);
		unk_0x0FC2D89AC25A5814(joaat("bobcatxl"), true);
		unk_0x0FC2D89AC25A5814(joaat("rebel"), true);
		unk_0xDC0F817884CDD856(5, false);
		unk_0xDC0F817884CDD856(3, false);
		iLocal_85[0] = unk_0xAF35D0D2583051B0(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		unk_0xAD738C3085FE7E11(iLocal_85[0], true, false);
		unk_0x49733E92263139D1(iLocal_85[0], 5f);
		unk_0x2497C4717C8B881E(iLocal_85[0], true, true, false);
		unk_0x34E710FF01247C5A(iLocal_85[0], 2);
		unk_0x45F6D8EEF34ABEF1(iLocal_85[0], 500f);
		unk_0x70DB57649FA8D0D8(iLocal_85[0], 500f);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[0], true, true);
		unk_0xEC6A202EE4960385(iLocal_85[0], false, false, 1000f);
		unk_0x9E5B5E4D2CCD2259(iLocal_85[0], 6);
		unk_0x1B9C0099CB942AC6(iLocal_85[0], "RADIO_06_COUNTRY");
		unk_0x95A88F0B409CDA47(iLocal_85[0], "76JON418");
		unk_0x3B988190C0AA6C0B(iLocal_85[0], true);
		iLocal_85[1] = unk_0xAF35D0D2583051B0(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, true, true, false);
		unk_0xAD738C3085FE7E11(iLocal_85[1], true, false);
		unk_0x49733E92263139D1(iLocal_85[1], 5f);
		unk_0x2497C4717C8B881E(iLocal_85[1], true, true, false);
		unk_0x34E710FF01247C5A(iLocal_85[1], 2);
		unk_0x45F6D8EEF34ABEF1(iLocal_85[1], 600f);
		unk_0x70DB57649FA8D0D8(iLocal_85[1], 400f);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[1], true, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[1], 2, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[1], 3, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[1], 4, false);
		unk_0x9E5B5E4D2CCD2259(iLocal_85[1], 6);
		unk_0x1B9C0099CB942AC6(iLocal_85[1], "RADIO_06_COUNTRY");
		unk_0x95A88F0B409CDA47(iLocal_85[1], "79ERK121");
		unk_0x3B988190C0AA6C0B(iLocal_85[1], true);
		unk_0xBB6F1CAEC68B0BCE(iLocal_85[1], true);
		iLocal_85[2] = unk_0xAF35D0D2583051B0(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, true, true, false);
		unk_0x95A88F0B409CDA47(iLocal_85[2], "83JOH802");
		unk_0xAD738C3085FE7E11(iLocal_85[2], true, false);
		unk_0x49733E92263139D1(iLocal_85[2], 5f);
		unk_0x2497C4717C8B881E(iLocal_85[2], true, true, false);
		unk_0x34E710FF01247C5A(iLocal_85[2], 2);
		unk_0x45F6D8EEF34ABEF1(iLocal_85[2], 60f);
		unk_0x70DB57649FA8D0D8(iLocal_85[2], 1000f);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[2], true, false);
		unk_0xEC6A202EE4960385(iLocal_85[2], true, false, 1000f);
		iLocal_85[3] = unk_0xAF35D0D2583051B0(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		unk_0x95A88F0B409CDA47(iLocal_85[3], "85TOR114");
		unk_0xAD738C3085FE7E11(iLocal_85[3], true, false);
		unk_0x49733E92263139D1(iLocal_85[3], 5f);
		unk_0x2497C4717C8B881E(iLocal_85[3], true, true, false);
		unk_0x34E710FF01247C5A(iLocal_85[3], 2);
		unk_0x45F6D8EEF34ABEF1(iLocal_85[3], 500f);
		unk_0x70DB57649FA8D0D8(iLocal_85[3], 500f);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[3], true, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[3], 2, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[3], 3, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_85[3], 4, false);
		unk_0xEC6A202EE4960385(iLocal_85[3], false, false, 1000f);
		unk_0xEC6A202EE4960385(iLocal_85[3], 5, false, 1000f);
		if (!unk_0xAFC1CA75AD4074D1(iLocal_97))
		{
			bVar0 = false;
			unk_0x933D6A9EEC1BACD0(&bVar0, true);
			unk_0x933D6A9EEC1BACD0(&bVar0, 3);
			unk_0x933D6A9EEC1BACD0(&bVar0, 4);
			iLocal_97 = unk_0x891804727E0A98B7(joaat("pickup_money_case"), Local_101, -72f, 0f, 42.48f, bVar0, 25000, 2, true, joaat("prop_security_case_01"));
			unk_0xE532F5D78798DAAB(joaat("prop_security_case_01"));
		}
		Local_104[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_104[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_104[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_104[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_104[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xAFC1CA75AD4074D1(iLocal_98[iVar1]))
			{
				bVar2 = false;
				unk_0x933D6A9EEC1BACD0(&bVar2, 3);
				unk_0x933D6A9EEC1BACD0(&bVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_98[iVar1] = unk_0xFBA08C503DD5FA58(joaat("pickup_weapon_sawnoffshotgun"), Local_104[iVar1 /*3*/], bVar2, -1, true, false);
				}
				else if (iVar1 == 4)
				{
					iLocal_98[iVar1] = unk_0x891804727E0A98B7(joaat("pickup_weapon_assaultrifle"), Local_104[iVar1 /*3*/], 90f, 50f, 0f, false, 50, 2, true, false);
				}
				else
				{
					iLocal_98[iVar1] = unk_0xFBA08C503DD5FA58(joaat("pickup_weapon_pistol"), Local_104[iVar1 /*3*/], bVar2, -1, true, false);
				}
			}
			iVar1++;
		}
		Local_48[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_49[0] = 177.0024f;
		Local_48[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_49[1] = 146.9645f;
		Local_48[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_49[2] = 48.6546f;
		Local_48[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_49[3] = 155.0678f;
		Local_48[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_49[4] = 278.3085f;
		Local_48[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_49[5] = 270.3501f;
		Local_48[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_49[7] = 352.9167f;
		Local_48[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_49[6] = 34.1111f;
		Local_63 = { -1641.735f, 4692.13f, 39.394f };
		bLocal_67 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				bLocal_81[iVar1] = unk_0xD49F9B0955C367DE(22, joaat("g_m_y_salvagoon_03"), Local_48[iVar1 /*3*/], fLocal_49[iVar1], true, true);
				unk_0x1913FE4CBF41C463(bLocal_81[iVar1], 227, true);
			}
			else
			{
				bLocal_81[iVar1] = unk_0xD49F9B0955C367DE(22, joaat("g_m_m_chigoon_02"), Local_48[iVar1 /*3*/], fLocal_49[iVar1], true, true);
			}
			iVar1++;
		}
		bLocal_82[0] = unk_0xD49F9B0955C367DE(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, true, true);
		bLocal_82[1] = unk_0xD49F9B0955C367DE(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, true, true);
		iVar1 = 0;
		while (iVar1 < bLocal_82)
		{
			unk_0xB128377056A54E2A(bLocal_82[iVar1], true);
			unk_0x1A9205C1B9EE827F(bLocal_82[iVar1], true, false);
			unk_0x1913FE4CBF41C463(bLocal_82[iVar1], 227, true);
			Local_50 = { unk_0x3FEF770D40960D5A(bLocal_82[iVar1], true) };
			Local_51 = { Local_50.f_0, (Local_50.f_1 - 2f), (Local_50.f_2 - 0.5f) };
			Local_52 = { Local_50.f_0, (Local_50.f_1 + 50f), (Local_50.f_2 - 0.5f) };
			unk_0x867654CBC7606F2C(Local_51, Local_52, 100, true, joaat("weapon_assaultrifle"), false, true, true, -1f);
			iVar1++;
		}
		unk_0x83CDB10EA29B370B(bLocal_81[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_81[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_81[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_81[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_81[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_81[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_82[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x83CDB10EA29B370B(bLocal_82[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, false, 2, false);
		unk_0x46D1A61A21F566FC(50f);
		func_118();
		unk_0x46D1A61A21F566FC(1f);
		if (unk_0x4C241E39B23DF959(iLocal_85[0], false))
		{
			bLocal_81[8] = unk_0x7DD959874C1FD534(iLocal_85[0], 26, joaat("g_m_y_salvagoon_03"), -1, true, true);
			unk_0xAD738C3085FE7E11(bLocal_81[8], true, false);
			unk_0x94D94BF1A75AED3D(bLocal_81[8], true);
			unk_0x6B76DC1F3AE6E6A3(bLocal_81[8], false, false);
		}
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_89))
		{
		}
		unk_0xF372BC22FCB88606("re_DealGoneWrong", &iLocal_113);
		bLocal_81[6] = unk_0xD49F9B0955C367DE(22, joaat("g_m_m_chigoon_02"), Local_48[6 /*3*/], fLocal_49[6], true, true);
		func_98(&uLocal_114, 4, bLocal_81[6], "REDGWChinese", 0, 1);
		unk_0x9F8AA94D6D97DBF4(bLocal_81[6], true);
		unk_0x79F020FF9EDC0748(bLocal_81[6], true);
		unk_0xC80A74AC829DDD92(bLocal_81[6], iLocal_113);
		bVar3 = unk_0x8C18E0F9080ADD73(Local_48[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, false);
		unk_0xEEA929141F699854(bLocal_81[6], bVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1000f, 0);
		unk_0xD9A897A4C6C2974F(bVar3, true);
		unk_0x971D38760FBC02EF(bLocal_81[6], true);
		unk_0x1913FE4CBF41C463(bLocal_81[6], 227, true);
		bLocal_81[7] = unk_0xD49F9B0955C367DE(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_49[7], true, true);
		func_98(&uLocal_114, 5, bLocal_81[7], "REDGWSalvadoran", 0, 1);
		unk_0x9F8AA94D6D97DBF4(bLocal_81[7], true);
		unk_0x79F020FF9EDC0748(bLocal_81[7], true);
		unk_0xC80A74AC829DDD92(bLocal_81[7], iLocal_113);
		bVar4 = unk_0x8C18E0F9080ADD73(Local_48[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, false);
		unk_0xEEA929141F699854(bLocal_81[7], bVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1000f, 0);
		unk_0xD9A897A4C6C2974F(bVar4, true);
		unk_0x734292F4F0ABF6D0(bVar4, 0.5f);
		unk_0x971D38760FBC02EF(bLocal_81[7], true);
		unk_0x1913FE4CBF41C463(bLocal_81[7], 227, true);
		bLocal_80 = unk_0xD49F9B0955C367DE(22, joaat("g_m_m_chigoon_02"), Local_63, bLocal_67, true, true);
		func_98(&uLocal_114, 4, bLocal_80, "REDGWChinese", 0, 1);
		unk_0x9F8AA94D6D97DBF4(bLocal_80, true);
		unk_0xC80A74AC829DDD92(bLocal_80, iLocal_113);
		bVar5 = unk_0x8C18E0F9080ADD73(Local_63, 7.5f, -12.75f, 51.5f, false);
		unk_0xEEA929141F699854(bLocal_80, bVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1000f, 0);
		unk_0xD9A897A4C6C2974F(bVar5, true);
		unk_0x8524A8B0171D5E07(bLocal_80, 4f, 18f, 326.7277f, 0, true);
		unk_0x971D38760FBC02EF(bLocal_80, true);
		unk_0x1913FE4CBF41C463(bLocal_80, 227, true);
		unk_0xBF25EB89375A37AD(5, iLocal_113, joaat("player"));
		if (func_38() == 0)
		{
			func_98(&uLocal_114, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		}
		if (func_38() == 1)
		{
			func_98(&uLocal_114, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
		}
		if (func_38() == 2)
		{
			func_98(&uLocal_114, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
		}
		iLocal_99[0] = unk_0xB302244A1839BDAD(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[1] = unk_0xB302244A1839BDAD(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[2] = unk_0xB302244A1839BDAD(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[3] = unk_0xB302244A1839BDAD(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[4] = unk_0xB302244A1839BDAD(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[5] = unk_0xB302244A1839BDAD(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[6] = unk_0xB302244A1839BDAD(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[7] = unk_0xB302244A1839BDAD(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[8] = unk_0xB302244A1839BDAD(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[9] = unk_0xB302244A1839BDAD(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		unk_0x4EDE34FBADD967A6(false);
		iLocal_99[10] = unk_0xB302244A1839BDAD(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_117(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_81[iVar1], false))
			{
				unk_0xB128377056A54E2A(bLocal_81[iVar1], true);
				unk_0x816F6981C60BF53B(bLocal_81[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x816F6981C60BF53B(bLocal_81[iVar1], 0, 0.65f, 0.6f, 3);
				unk_0x4EDE34FBADD967A6(unk_0xD53343AA4FB7DD28(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_92[iVar1]))
					{
						unk_0x86A652570E5F25DD(&(bLocal_92[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
		{
			if (!unk_0x0A7B270912999B3C(unk_0xB6997A7EB3F5C8C0()))
			{
				unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
			}
		}
		iLocal_282 = 1;
	}
}

Vector3 func_117(struct<3> Param0)
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

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (unk_0x7239B21A38F536BA(iLocal_85[iVar0]))
		{
			Local_53 = { unk_0x1899F328B0E12848(iLocal_85[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_77 = 0;
		while (iLocal_77 < 5)
		{
			bLocal_64 = unk_0x313CE5879CEB6FCD(1.5f, 2.5f);
			bLocal_65 = unk_0x313CE5879CEB6FCD(2f, 4f);
			bLocal_66 = unk_0x313CE5879CEB6FCD(0.1f, 2f);
			unk_0x4EDE34FBADD967A6(false);
			Local_54 = { (Local_53.f_0 - bLocal_64), (Local_53.f_1 - bLocal_65), (Local_53.f_2 + bLocal_66) };
			Local_55 = { (Local_53.f_0 + bLocal_64), (Local_53.f_1 + bLocal_65), Local_53.f_2 };
			unk_0x867654CBC7606F2C(Local_54, Local_55, 1, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
			Local_54 = { (Local_53.f_0 + bLocal_64), (Local_53.f_1 + bLocal_65), (Local_53.f_2 + bLocal_66) };
			Local_55 = { (Local_53.f_0 - bLocal_64), (Local_53.f_1 - bLocal_65), Local_53.f_2 };
			unk_0x867654CBC7606F2C(Local_54, Local_55, 1, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
			Local_54 = { (Local_53.f_0 + bLocal_64), (Local_53.f_1 - bLocal_65), (Local_53.f_2 + bLocal_66) };
			Local_55 = { (Local_53.f_0 - bLocal_64), (Local_53.f_1 + bLocal_65), Local_53.f_2 };
			unk_0x867654CBC7606F2C(Local_54, Local_55, 1, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
			Local_54 = { (Local_53.f_0 - bLocal_64), (Local_53.f_1 + bLocal_65), (Local_53.f_2 + bLocal_66) };
			Local_55 = { (Local_53.f_0 + bLocal_64), (Local_53.f_1 - bLocal_65), Local_53.f_2 };
			unk_0x867654CBC7606F2C(Local_54, Local_55, 1, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
			Local_54 = { Local_53.f_0, (Local_53.f_1 + bLocal_65), (Local_53.f_2 + bLocal_66) };
			Local_55 = { Local_53.f_0, (Local_53.f_1 - bLocal_65), Local_53.f_2 };
			unk_0x867654CBC7606F2C(Local_54, Local_55, 1, false, joaat("weapon_assaultrifle"), false, true, true, -1f);
			iLocal_77++;
		}
		iVar0++;
	}
}

int func_119()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_130())
		{
			return 0;
		}
	}
	if (func_126())
	{
		return 1;
	}
	if (func_120(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_120(float fParam0, bool bParam1)
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
		if (func_40(func_38()))
		{
			iVar5 = func_59();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_121(iVar1, &Var0);
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

void func_121(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_122(uParam1, "Abigail1", func_124(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 1:
			func_122(uParam1, "Abigail2", func_124(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 2:
			func_122(uParam1, "Barry1", func_124(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 3:
			func_122(uParam1, "Barry2", func_124(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 4:
			func_122(uParam1, "Barry3", func_124(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 5:
			func_122(uParam1, "Barry3A", func_124(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 6:
			func_122(uParam1, "Barry3C", func_124(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 7:
			func_122(uParam1, "Barry4", func_124(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_123(iParam0), 0, 0);
			break;
		
		case 8:
			func_122(uParam1, "Dreyfuss1", func_124(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 9:
			func_122(uParam1, "Epsilon1", func_124(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 10:
			func_122(uParam1, "Epsilon2", func_124(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 11:
			func_122(uParam1, "Epsilon3", func_124(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 12:
			func_122(uParam1, "Epsilon4", func_124(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 13:
			func_122(uParam1, "Epsilon5", func_124(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 14:
			func_122(uParam1, "Epsilon6", func_124(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 15:
			func_122(uParam1, "Epsilon7", func_124(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 16:
			func_122(uParam1, "Epsilon8", func_124(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 17:
			func_122(uParam1, "Extreme1", func_124(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 18:
			func_122(uParam1, "Extreme2", func_124(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 19:
			func_122(uParam1, "Extreme3", func_124(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 20:
			func_122(uParam1, "Extreme4", func_124(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 21:
			func_122(uParam1, "Fanatic1", func_124(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_123(iParam0), 1, 0);
			break;
		
		case 22:
			func_122(uParam1, "Fanatic2", func_124(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_123(iParam0), 1, 0);
			break;
		
		case 23:
			func_122(uParam1, "Fanatic3", func_124(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_123(iParam0), 0, 1);
			break;
		
		case 24:
			func_122(uParam1, "Hao1", func_124(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_123(iParam0), 0, 1);
			break;
		
		case 25:
			func_122(uParam1, "Hunting1", func_124(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 26:
			func_122(uParam1, "Hunting2", func_124(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 27:
			func_122(uParam1, "Josh1", func_124(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 28:
			func_122(uParam1, "Josh2", func_124(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 29:
			func_122(uParam1, "Josh3", func_124(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 30:
			func_122(uParam1, "Josh4", func_124(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 31:
			func_122(uParam1, "Maude1", func_124(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 32:
			func_122(uParam1, "Minute1", func_124(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 33:
			func_122(uParam1, "Minute2", func_124(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 34:
			func_122(uParam1, "Minute3", func_124(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 35:
			func_122(uParam1, "MrsPhilips1", func_124(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 36:
			func_122(uParam1, "MrsPhilips2", func_124(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 37:
			func_122(uParam1, "Nigel1", func_124(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 38:
			func_122(uParam1, "Nigel1A", func_124(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 39:
			func_122(uParam1, "Nigel1B", func_124(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 40:
			func_122(uParam1, "Nigel1C", func_124(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 41:
			func_122(uParam1, "Nigel1D", func_124(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_123(iParam0), 1, 1);
			break;
		
		case 42:
			func_122(uParam1, "Nigel2", func_124(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 43:
			func_122(uParam1, "Nigel3", func_124(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 1);
			break;
		
		case 44:
			func_122(uParam1, "Omega1", func_124(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 45:
			func_122(uParam1, "Omega2", func_124(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 46:
			func_122(uParam1, "Paparazzo1", func_124(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 47:
			func_122(uParam1, "Paparazzo2", func_124(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 48:
			func_122(uParam1, "Paparazzo3", func_124(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 49:
			func_122(uParam1, "Paparazzo3A", func_124(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 50:
			func_122(uParam1, "Paparazzo3B", func_124(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 51:
			func_122(uParam1, "Paparazzo4", func_124(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 52:
			func_122(uParam1, "Rampage1", func_124(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 54:
			func_122(uParam1, "Rampage3", func_124(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 55:
			func_122(uParam1, "Rampage4", func_124(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 56:
			func_122(uParam1, "Rampage5", func_124(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_123(iParam0), 0, 0);
			break;
		
		case 53:
			func_122(uParam1, "Rampage2", func_124(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_123(iParam0), 1, 0);
			break;
		
		case 57:
			func_122(uParam1, "TheLastOne", func_124(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 58:
			func_122(uParam1, "Tonya1", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 59:
			func_122(uParam1, "Tonya2", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 60:
			func_122(uParam1, "Tonya3", func_124(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 61:
			func_122(uParam1, "Tonya4", func_124(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		case 62:
			func_122(uParam1, "Tonya5", func_124(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_123(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_122(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_123(int iParam0)
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

struct<2> func_124(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_125(iParam0) };
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

struct<2> func_125(int iParam0)
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

int func_126()
{
	if (func_129() && !func_130())
	{
		return 1;
	}
	if (func_128() && func_127())
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_113104 > 0;
}

int func_128()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_130()
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

int func_131()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_126())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_130())
		{
			return 0;
		}
	}
	if (func_120(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	if ((Global_113375 == func_63() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_135(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_134();
}

void func_134()
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

void func_135(int iParam0)
{
	Global_113375 = iParam0;
}

int func_136(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_63();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_177())
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
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_130())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_47(0))
		{
			return 0;
		}
		if (func_126())
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_120(100f, 1) != -1)
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
		if (!func_175(iParam1))
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_174(func_38()) == 4 || func_174(func_38()) == 5)
			{
				return 0;
			}
		}
		if (func_40(func_38()))
		{
			if (!func_173(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_172(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_171())
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
		if (!func_162(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_161(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_161(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_175(30) && !func_161(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_40(func_38()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_160(bVar4))
				{
					if (func_138(iVar2))
					{
						if (!func_137(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_38() != iVar2)
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

bool func_137(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_138(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_139(bVar0);
}

int func_139(bool bParam0)
{
	return func_140(bParam0, 1);
}

int func_140(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_160(bParam0))
	{
		return 0;
	}
	func_141(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_141(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_142(func_153(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_142(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_152(bParam0, bParam1))
	{
		bVar0 = func_151(bParam1);
		iVar1 = func_149(bParam0);
		iVar2 = (func_149(bParam0) - func_149(bParam1));
		iVar3 = (func_151(bParam0) - func_151(bParam1));
		iVar4 = (func_148(bParam0) - func_148(bParam1));
		iVar5 = (func_147(bParam0) - func_147(bParam1));
		iVar6 = (func_146(bParam0) - func_146(bParam1));
		iVar7 = (func_145(bParam0) - func_145(bParam1));
	}
	else
	{
		bVar0 = func_151(bParam0);
		iVar1 = func_149(bParam1);
		iVar2 = (func_149(bParam1) - func_149(bParam0));
		iVar3 = (func_151(bParam1) - func_151(bParam0));
		iVar4 = (func_148(bParam1) - func_148(bParam0));
		iVar5 = (func_147(bParam1) - func_147(bParam0));
		iVar6 = (func_146(bParam1) - func_146(bParam0));
		iVar7 = (func_145(bParam1) - func_145(bParam0));
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
		iVar4 = (iVar4 + func_144(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_143(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_143(bool bParam0, float fParam1, float fParam2)
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

int func_144(int iParam0, int iParam1)
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

int func_145(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_146(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_147(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_148(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_149(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_150(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_150(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_151(bool bParam0)
{
	return (bParam0 && 15);
}

int func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_160(bParam1) || !func_160(bParam0))
	{
		return 1;
	}
	iVar0 = func_149(bParam0);
	iVar1 = func_149(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(bParam0);
	iVar1 = func_151(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(bParam0);
	iVar1 = func_148(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(bParam0);
	iVar1 = func_147(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(bParam0);
	iVar1 = func_146(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(bParam0);
	iVar1 = func_145(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	var uVar0;
	
	func_159(&uVar0, unk_0x494E97C2EF27C470());
	func_158(&uVar0, unk_0x13D2B8ADD79640F2());
	func_157(&uVar0, unk_0x25223CA6B4D20B7F());
	func_156(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_155(&uVar0, unk_0xBBC72712E80257A1());
	func_154(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
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

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_151(*uParam0);
	iVar1 = func_149(*uParam0);
	if (bParam1 < 1 || bParam1 > func_144(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_157(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_158(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_160(bool bParam0)
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
	iVar0 = func_145(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_146(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_147(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_149(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_151(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_148(bParam0);
	if (iVar5 < 1 || iVar5 > func_144(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_38();
				if (!func_40(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_168()) || func_167()) || func_166()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_170()) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_168()) || func_167()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_170() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_93(8, -1)) || func_165()) || func_164()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_93(8, -1) || func_168()) || func_167()) || func_164()) || func_163())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_170()) || Global_31962) || func_169()) || func_93(8, -1)) || func_167()) || func_166()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_170()) || func_167()) || Global_112433) || Global_31962) || func_169()) || Global_44238) || func_93(8, -1)) || func_166()) || func_164()) || func_165()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_170()) || Global_112433) || Global_31962) || func_169()) || func_93(8, -1)) || func_166()) || func_164()) || func_168()) || func_167()) || func_165())
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

var func_163()
{
	return Global_100480.f_1;
}

int func_164()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_165()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_166()
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

bool func_167()
{
	return Global_100493.f_376 > 0;
}

bool func_168()
{
	return Global_100493.f_375 > 0;
}

var func_169()
{
	return Global_1575058;
}

int func_170()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_171()
{
	func_91();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_172(bool bParam0)
{
	return func_152(func_153(), bParam0);
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_38();
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

int func_174(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_177())
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

int func_176()
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

int func_177()
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

void func_178()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xD37401D78A929A49();
		unk_0x020E5F00CDA207BA(1f);
		if (unk_0xA6DB27D19ECBB7DA(bLocal_89))
		{
			unk_0x86A652570E5F25DD(&bLocal_89);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
		{
			unk_0x86A652570E5F25DD(&bLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_93[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_93[iVar0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_95[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_83[iVar0]))
					{
						if (unk_0x751B70C3D034E187(iLocal_83[iVar0], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_94[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_94[iVar0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_96[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84[iVar0]))
					{
						if (unk_0x751B70C3D034E187(iLocal_84[iVar0], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xDC0F817884CDD856(5, true);
			unk_0xDC0F817884CDD856(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_38(), 1, 25000);
		}
	}
	func_179(-1);
	unk_0x1090044AD1DA76FA();
}

void func_179(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_132())
	{
		func_183(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_182(30000);
		StringCopy(&cVar0, func_181(Global_113375, 1), 64);
		if (func_62(Global_113375) > 0)
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
	func_180(&Global_32019);
	Global_113376 = 0;
	func_135(-1);
}

void func_180(var uParam0)
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

char* func_181(int iParam0, bool bParam1)
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

void func_182(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_183(int iParam0)
{
	func_184(iParam0, 0, func_189(iParam0));
}

void func_184(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_153();
	func_187(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_186(iParam0, &uVar0);
	Var1 = { func_185(&uVar0) };
}

struct<16> func_185(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_146(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_145(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_148(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_151(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_149(*uParam0), 64);
	return Var0;
}

void func_186(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_151(*uParam0);
	bVar2 = func_148(*uParam0);
	bVar3 = func_147(*uParam0);
	bVar4 = func_146(*uParam0);
	bVar5 = func_145(*uParam0);
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
	iVar6 = func_144(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_144(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_188(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_188(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_159(uParam0, bParam1);
	func_158(uParam0, bParam2);
	func_157(uParam0, bParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, bParam4);
	func_154(uParam0, iParam6);
}

int func_189(int iParam0)
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

