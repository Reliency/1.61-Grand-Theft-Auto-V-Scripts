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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	struct<3> Local_62[32];
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_146(ScriptParam_237))
		{
			func_140();
		}
	}
	while (true)
	{
		func_139();
		if (func_131())
		{
			func_140();
		}
		if (unk_0xADA24309FE08DACF() != bLocal_67)
		{
			func_140();
		}
		if (unk_0x24FB80D107371267(unk_0xC7B4D79B01FA7A5C()) != Local_60.f_17)
		{
			func_140();
		}
		unk_0x2302C0264EA58D31();
		switch (func_130(unk_0x57A3BDDAD8E5AA0A()))
		{
			case 0:
				if (func_128())
				{
					if (func_127() == 1)
					{
						func_126();
						Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 1;
					}
					else if (func_127() == 4)
					{
						Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_127() == 1)
				{
					func_108();
				}
				else if (func_127() == 4)
				{
					Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_107(&(Local_60.f_21));
				if (func_106(&(Local_60.f_21)))
				{
					Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
			
			case 4:
				func_140();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_127())
			{
				case 0:
					if (func_78())
					{
						Local_60.f_0 = 1;
					}
					break;
				
				case 1:
					func_38();
					if (func_1())
					{
						Local_60.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (BitTest(uLocal_63, 8))
	{
		if (!func_37(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!BitTest(Local_60.f_1, 9))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (BitTest(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!unk_0x18A47D074708FD68(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 1;
			}
			if (func_34(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (BitTest(uLocal_63, 8))
		{
			if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_60.f_6, 250f, 250f, 250f, false, true, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(unk_0x4F8644AF03D0E0D6()) && func_8() != 151) || func_6(unk_0x4F8644AF03D0E0D6(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x38CE16C96BD11344(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		if (!unk_0x4D36070FE0215186(*uParam0))
		{
		}
	}
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xAE3CBE5BF394C9C9(&iVar0);
	}
}

var func_4()
{
	return Global_1574582;
}

var func_5()
{
	return Global_2815059.f_5192;
}

int func_6(bool bParam0, int iParam1)
{
	if (Global_1892703[bParam0 /*599*/] == iParam1)
	{
		return func_7(bParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1920255;
}

int func_9(bool bParam0)
{
	if (func_12(bParam0))
	{
		return 1;
	}
	if (func_10(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(bool bParam0)
{
	return func_11(bParam0, 20);
}

var func_11(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (unk_0x38CE16C96BD11344(Local_60.f_4))
	{
		if (Global_262145.f_20333 > 0)
		{
			func_31(Global_262145.f_20333, 0);
			func_14(Global_262145.f_20333, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var1, func_29(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_28())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4534105[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4534105[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0xF9C812CD7C46E817(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_27()) || unk_0x810E8431C0614BF9())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x3C5FD37B5499582E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x39BE7CEA8D9CC8E6(iVar4))
		{
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_22(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
		{
			if (!bVar0)
			{
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_19(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_19(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_20(&(uParam0->f_14));
	func_20(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_28())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = unk_0xFC8202EFC642E6F2();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_24(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_26(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_25();
		unk_0xA40CC53DF8E50837(1, &Var0, 36, iVar1);
	}
}

void func_25()
{
	unk_0x6EB5F71AA68F2E8E("AM_ARENA_SHP");
}

var func_26(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x933D6A9EEC1BACD0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_27()
{
	return Global_1574918;
}

int func_28()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

char* func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_3 = (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_32(iVar1, 0);
	}
}

int func_34(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

int func_35(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_36(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_36(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(bool bParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_77();
			}
			else
			{
				func_72();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x38CE16C96BD11344(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!unk_0x38CE16C96BD11344(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (unk_0x38CE16C96BD11344(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (unk_0x38CE16C96BD11344(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

void func_40(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0x7C9C91AB74A0360F(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(unk_0xD8515F5FEA14CB3F(iParam0)), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0x28477EC23D892089(2, unk_0x3FEF770D40960D5A(unk_0xD8515F5FEA14CB3F(iParam0), true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, true, true, 2, false, 0, 0, false);
}

void func_41()
{
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_64))
	{
		iLocal_64 = unk_0x5CDE92C702A8FCE7(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
		if (Local_60.f_18)
		{
			unk_0xDF735600A4696DAF(iLocal_64, 84);
			unk_0xD38744167B2FA257(iLocal_64, 1.2f);
			unk_0xEAA0FFE120D92784(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0xDF735600A4696DAF(iLocal_64, 351);
			unk_0xEAA0FFE120D92784(iLocal_64, "AMD_BLIPN");
			unk_0xD38744167B2FA257(iLocal_64, 0.7f);
		}
		unk_0x03D7FB09E75D6B7E(iLocal_64, 2);
		unk_0x45FF974EEE1C8734(iLocal_64, 120);
	}
}

int func_42()
{
	if (!BitTest(Local_60.f_1, 7))
	{
		if (func_35(Local_60.f_2))
		{
			if (unk_0x20B60995556D004F(unk_0x367B936610BA360C(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, false, true, 0))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_128())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()
{
	unk_0x963D27A58DF860AC(Local_60.f_19.f_1);
	if (unk_0x98A4EB5D89A0C952(Local_60.f_19.f_1))
	{
		if (!unk_0x38CE16C96BD11344(Local_60.f_19) && unk_0x38CE16C96BD11344(Local_60.f_4))
		{
			if (unk_0x800DD4721A8B008B(1))
			{
				if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, unk_0x3FEF770D40960D5A(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					unk_0xE05E81A888FA63C8(Local_60.f_19, true);
					unk_0x8E2530AA8ADA980E(unk_0xD8515F5FEA14CB3F(Local_60.f_19), unk_0xE83D4F9BA2A38914(unk_0xD8515F5FEA14CB3F(Local_60.f_4)));
					unk_0x6B9BBD38AB0796DF(unk_0xD8515F5FEA14CB3F(Local_60.f_4), unk_0xD8515F5FEA14CB3F(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
					unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_60.f_19), true);
					unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_60.f_19), false);
					unk_0x710311ADF0E20730(unk_0xD8515F5FEA14CB3F(Local_60.f_19));
					unk_0x1C99BB7B6E96D16F(unk_0xD8515F5FEA14CB3F(Local_60.f_19), 0f, 0f, -0.2f);
					unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_60.f_19), true);
				}
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x800DD4721A8B008B(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x99BFDC94A603E541(unk_0x9A294B2138ABB884(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x99BFDC94A603E541(unk_0x509D5878EB39E842(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0xF1CA12B18AEF5298(unk_0xD8515F5FEA14CB3F(*uParam0), true);
		}
		if (bParam9)
		{
			unk_0xEA1C610A04DB6BBB(unk_0xD8515F5FEA14CB3F(*uParam0), false, false);
		}
		if (unk_0xC7827959479DCC78(unk_0xD8515F5FEA14CB3F(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	unk_0x963D27A58DF860AC(iVar0);
	unk_0x963D27A58DF860AC(joaat("p_cargo_chute_s"));
	if (unk_0x98A4EB5D89A0C952(iVar0) && unk_0x98A4EB5D89A0C952(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x38CE16C96BD11344(Local_60.f_4) && !unk_0x38CE16C96BD11344(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && unk_0x69778E7564BADE6D(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x38CE16C96BD11344(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						unk_0x933D6A9EEC1BACD0(&iVar2, 12);
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x99BFDC94A603E541(unk_0x673966A0C0FD7171(iVar3, unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_60.f_2), true) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, true, true));
					if (Local_60.f_18 == 1)
					{
						func_71(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
						unk_0x31F924B53EADDF65(false);
					}
					unk_0x3882114BDE571AD4(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true);
					unk_0x77F33F2CCF64B3AA(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true);
					unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true);
					unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_60.f_4), false);
					unk_0x710311ADF0E20730(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
					func_70();
					iVar4 = unk_0x430386FE9BF80B45();
					unk_0xE65F427EB70AB1ED(iVar4, "Crate_Beeps", unk_0xD8515F5FEA14CB3F(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", true, 0);
					Local_60.f_16 = unk_0x2DE3F0A134FFBC0D(iVar4);
				}
				if (unk_0x38CE16C96BD11344(Local_60.f_4) && !unk_0x38CE16C96BD11344(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_60.f_2), true) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xE05E81A888FA63C8(Local_60.f_5, true);
						unk_0x6B9BBD38AB0796DF(unk_0xD8515F5FEA14CB3F(Local_60.f_5), unk_0xD8515F5FEA14CB3F(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_60.f_5), true);
						unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_60.f_5), false);
						unk_0x7FB218262B810701(unk_0xD8515F5FEA14CB3F(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						unk_0x40FDEDB72F8293B2(unk_0xD8515F5FEA14CB3F(Local_60.f_5));
					}
				}
				func_68();
				if (!BitTest(uLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						func_67(&uLocal_72, 3, unk_0xBDCD95FC216A8B3E(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x933D6A9EEC1BACD0(&uLocal_63, 15);
				}
			}
		}
	}
	if (unk_0x38CE16C96BD11344(Local_60.f_4) && unk_0x38CE16C96BD11344(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
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
					func_65();
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
		if (func_64(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_63();
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
				func_55();
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
				if (func_54())
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
			if (func_53())
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
			func_52();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_51();
		func_48();
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
		func_65();
	}
	return 0;
}

void func_48()
{
	if (!func_49())
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

int func_49()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_50())
	{
		return 0;
	}
	if (func_10(unk_0x4F8644AF03D0E0D6()))
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

int func_50()
{
	return -1;
}

void func_51()
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

void func_52()
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

int func_53()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
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

void func_55()
{
	if (func_62(14))
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
		Global_20266 = func_56();
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

var func_56()
{
	func_57();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_60(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_59(unk_0xD80958FC74E988A6());
			if (func_58(iVar0) && (!func_62(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_58(Global_113386.f_2363.f_539.f_4321))
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

bool func_58(int iParam0)
{
	return iParam0 < 3;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_61(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_62(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_63()
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

bool func_64(int iParam0, int iParam1)
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

void func_65()
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_67(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_68()
{
	if (func_69())
	{
		if (!unk_0x74AFEF0D2E1E409B(iLocal_66))
		{
			iLocal_66 = unk_0x6F60E89A7B64EE1D("scr_crate_drop_beacon", unk_0xD8515F5FEA14CB3F(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false, 1065353216, 1065353216, 1065353216, 0);
			unk_0x7F8F65877F88783B(iLocal_66, 0.8f, 0.18f, 0.19f, false);
		}
	}
	if (!unk_0x74AFEF0D2E1E409B(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_69()
{
	unk_0x944955FB2A3935C8();
	if (unk_0xCA7D9B86ECA7481B())
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	if (unk_0x75262FD12D0A1C84(Local_60.f_16) != -1)
	{
		if (unk_0x38CE16C96BD11344(Local_60.f_4))
		{
			if (!unk_0xFCBDCE714A7C88E5(unk_0x75262FD12D0A1C84(Local_60.f_16)))
			{
				unk_0xA3B0C41BA5CC0BB5(unk_0x75262FD12D0A1C84(Local_60.f_16));
			}
			unk_0x353FC880830B88FA(unk_0x75262FD12D0A1C84(Local_60.f_16));
		}
		else
		{
			if (!unk_0xFCBDCE714A7C88E5(unk_0x75262FD12D0A1C84(Local_60.f_16)))
			{
				unk_0xA3B0C41BA5CC0BB5(unk_0x75262FD12D0A1C84(Local_60.f_16));
			}
			unk_0x353FC880830B88FA(unk_0x75262FD12D0A1C84(Local_60.f_16));
		}
	}
}

void func_71(int iParam0)
{
	int iVar0;
	
	unk_0x933D6A9EEC1BACD0(&iVar0, unk_0xEE68096F9F37341E());
	unk_0x1E3F1B1B891A2AAA(iParam0, iVar0);
}

void func_72()
{
	int iVar0;
	
	if (!BitTest(uLocal_63, 11))
	{
		if (!unk_0x4D79439A6B55AC67())
		{
			iVar0 = func_76(1191, -1, 0);
			if (!BitTest(iVar0, 10))
			{
				func_75("AMD_HELP1", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 10);
				func_73(1191, iVar0, -1, 1, 0);
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 11);
			}
			else if (!BitTest(iVar0, 11))
			{
				func_75("AMD_HELP2", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 11);
				func_73(1191, iVar0, -1, 1, 0);
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 11);
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 11);
			}
		}
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_74(var uParam0)
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

void func_75(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_77()
{
	int iVar0;
	
	if (!BitTest(uLocal_63, 17))
	{
		if (!unk_0x4D79439A6B55AC67())
		{
			iVar0 = func_76(1191, -1, 0);
			if (!BitTest(iVar0, 24))
			{
				func_75("BALD_HELP1", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 24);
				func_73(1191, iVar0, -1, 1, 0);
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 17);
			}
			else if (!BitTest(iVar0, 25))
			{
				func_75("BALD_HELP2", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 25);
				func_73(1191, iVar0, -1, 1, 0);
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 17);
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&uLocal_63, 17);
			}
		}
	}
}

int func_78()
{
	if (func_105(joaat("cuban800")) && func_105(joaat("s_m_m_pilot_02")))
	{
		if (func_103(&uLocal_70, 4000, 0))
		{
			if (func_81() && func_79())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79()
{
	if ((!unk_0x38CE16C96BD11344(Local_60.f_3) && func_105(joaat("s_m_m_pilot_02"))) && unk_0x38CE16C96BD11344(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_80(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x9F8AA94D6D97DBF4(unk_0xBDCD95FC216A8B3E(Local_60.f_3), true);
				unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_60.f_3), Global_1837194);
				unk_0xC8A9481A01E63C28(unk_0xBDCD95FC216A8B3E(Local_60.f_3), 0);
				unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_60.f_3), true);
				unk_0x6B76DC1F3AE6E6A3(unk_0xBDCD95FC216A8B3E(Local_60.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_164)), 0);
				func_126();
				unk_0x5ABA3986D90D8A3B(unk_0xBDCD95FC216A8B3E(Local_60.f_3), iLocal_65);
				unk_0xB893215D8D4C015B(unk_0x367B936610BA360C(Local_60.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_60.f_3))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_81()
{
	struct<3> Var0;
	float fVar1;
	
	if (!unk_0x38CE16C96BD11344(Local_60.f_2))
	{
		if (func_105(joaat("cuban800")))
		{
			func_100(&Var0, &fVar1);
			if (func_85(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_82(&(Local_60.f_2), joaat("cuban800"), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xB664292EAECF7FA6(unk_0x367B936610BA360C(Local_60.f_2), 2);
					unk_0x428CA6DBD1094446(unk_0x367B936610BA360C(Local_60.f_2), false);
					unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_60.f_2), true);
					unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_60.f_2));
					unk_0xAB54A438726D25D5(unk_0x367B936610BA360C(Local_60.f_2), 60f);
					unk_0xA178472EBB8AE60D(unk_0x367B936610BA360C(Local_60.f_2));
					unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_60.f_2), true, true, false);
					unk_0x983765856F2564F9(unk_0x367B936610BA360C(Local_60.f_2), false);
					unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(Local_60.f_2), false);
					unk_0xCFC8BE9A5E1FE575(unk_0x367B936610BA360C(Local_60.f_2), 3);
					unk_0x87E7F24270732CB1(unk_0x367B936610BA360C(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						unk_0xFAEE099C6F890BB8(unk_0x367B936610BA360C(Local_60.f_2), true, false, true, false, false, false, false, false);
					}
				}
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_60.f_2))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(joaat("cuban800"));
	return 1;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xC0296A2EDF545E92(iParam1))
	{
		return 0;
	}
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x01C7B9B38428AEB6(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0x7239B21A38F536BA(iVar1))
	{
		*uParam0 = unk_0xB4C94523F023419C(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (unk_0x38CE16C96BD11344(*uParam0))
		{
			if (bParam13)
			{
				unk_0xF1CA12B18AEF5298(iVar1, true);
			}
			unk_0x3910051CCECDB00C(iVar1, bParam8);
			if (unk_0xC7827959479DCC78(iVar1))
			{
				if (bParam6)
				{
					unk_0xE05E81A888FA63C8(*uParam0, true);
				}
				else
				{
					unk_0xE05E81A888FA63C8(*uParam0, false);
				}
				if (bParam11)
				{
					unk_0xA8A024587329F36A(*uParam0, unk_0x4F8644AF03D0E0D6(), true);
				}
			}
			unk_0x67B2C79AA7FF5738(iVar1, bParam7);
			unk_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				unk_0xFC40CBF7B90CA77C(iVar1);
				unk_0xF2BFA0430F0A0FCB(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x4F8644AF03D0E0D6(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && unk_0x2A488C176D52CCA5(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_84(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x73D57CFFDD12C355((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x083961498679DC9F(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_94(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_86(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_86(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_37(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF1B760881820C952(func_90(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam1))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_37(bVar1, 1, 1))
		{
			if (!func_88(bVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_87(bVar1) || !bParam8) && !Global_2689235[bVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(bVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x37039302F4E0A008(bVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_90(bVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(bVar1) != iParam6 || unk_0x37039302F4E0A008(bVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_90(bVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(bool bParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_88(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_89(-1, 0) == 8;
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

int func_89(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

Vector3 func_90(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_93() && Global_1853348[iVar0 /*834*/].f_804) && !func_92(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_91(bParam0);
}

Vector3 func_91(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

int func_92(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_93()
{
	return Global_2714762.f_19;
}

int func_94(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x4F8644AF03D0E0D6() != bVar1) || iParam6 == 0)
		{
			if (func_37(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
				{
					if (!bParam5 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(bVar1)) && func_87(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(bVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam7) && bParam4) && func_95(bVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(bVar1)))
							{
								if (unk_0xF1B760881820C952(func_91(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_95(bool bParam0)
{
	if (func_99(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_98(bParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2787505))
	{
		return 1;
	}
	if (func_96(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_97(bParam0);
	if (!iVar0 == func_50())
	{
		if (iVar0 == func_97(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != func_50())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_50();
}

struct<13> func_98(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_99(bool bParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2787505 = { func_98(bParam0) };
		Global_2787518 = { func_98(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2787505))
		{
			if (unk_0xB124B57F571D8F18(&Global_2787518))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2787435, 35, &Global_2787505);
				unk_0xEEE6EACBE8874FBA(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_100(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_101(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0x2FFB6B224F4B2926((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x8ABE8608576D9CE3((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_101(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_102(Var0, unk_0x313CE5879CEB6FCD(fParam1, fParam2)) };
	Var0.f_2 = unk_0x313CE5879CEB6FCD(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_102(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_104(uParam0, bParam2, 0);
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

void func_104(var uParam0, bool bParam1, bool bParam2)
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

bool func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_106(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_107(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x83CD99A1E6061AB5())
		{
			func_104(uParam0, 0, 0);
		}
	}
}

void func_108()
{
	func_117();
	switch (Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_113();
			func_109();
			break;
		
		case 2:
			func_140();
			break;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x38CE16C96BD11344(Local_60.f_4))
	{
		if (func_37(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			iVar1 = func_112(unk_0xD80958FC74E988A6());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1574580;
			}
			unk_0xDC16122C7A20C933(unk_0xD80958FC74E988A6(), iVar1, &iVar0);
			if ((func_111(iVar1) && func_110(iVar1)) && unk_0x015A522136D7F951(unk_0xD80958FC74E988A6(), iVar1) < iVar0)
			{
			}
			else if (unk_0x83CD99A1E6061AB5())
			{
				if (!BitTest(uLocal_63, 12))
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						if (Local_60.f_18)
						{
							func_75("BALD_HELP3", -1);
						}
						else
						{
							func_75("AMD_HELP3", -1);
						}
						unk_0x933D6A9EEC1BACD0(&uLocal_63, 12);
					}
				}
				else if (!BitTest(uLocal_63, 13))
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						if (unk_0x18A47D074708FD68(Local_60.f_4))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), unk_0xD8515F5FEA14CB3F(Local_60.f_4), 10f, 10f, 10f, false, true, 0))
							{
								if (func_103(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_75("AMD_HELP3", -1);
									}
									unk_0x933D6A9EEC1BACD0(&uLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_110(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_112(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

void func_113()
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	
	if (unk_0x18A47D074708FD68(Local_60.f_4))
	{
		if (unk_0x4D36070FE0215186(Local_60.f_4) || (!unk_0xA1607996431332DF(Local_60.f_4) && unk_0x83CD99A1E6061AB5()))
		{
			if (unk_0x18A47D074708FD68(Local_60.f_5))
			{
				if (unk_0x4D36070FE0215186(Local_60.f_5) || (!unk_0xA1607996431332DF(Local_60.f_5) && unk_0x83CD99A1E6061AB5()))
				{
					if (func_116(Local_60.f_4) && func_116(Local_60.f_5))
					{
						if (!BitTest(uLocal_63, 8))
						{
							if (BitTest(uLocal_63, 7))
							{
								if (!unk_0x1F0B79228E461EC9(unk_0xD8515F5FEA14CB3F(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x933D6A9EEC1BACD0(&uLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
									}
								}
							}
						}
						if (!BitTest(uLocal_63, 7))
						{
							if (BitTest(uLocal_63, 6))
							{
								if (unk_0x1F0B79228E461EC9(unk_0xD8515F5FEA14CB3F(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x933D6A9EEC1BACD0(&uLocal_63, 7);
								}
							}
						}
						if (!BitTest(uLocal_63, 6))
						{
							unk_0xEEA3B200A6FEB65B(unk_0xD8515F5FEA14CB3F(Local_60.f_4), 2, 0.0245f);
							if (func_114())
							{
								unk_0x7FB218262B810701(unk_0xD8515F5FEA14CB3F(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
								unk_0x933D6A9EEC1BACD0(&uLocal_63, 6);
								if (unk_0xA6DB27D19ECBB7DA(iLocal_64))
								{
									unk_0x45FF974EEE1C8734(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!BitTest(uLocal_63, 14))
			{
				if (unk_0x18A47D074708FD68(Local_60.f_19))
				{
					if (unk_0x4D36070FE0215186(Local_60.f_19) || (!unk_0xA1607996431332DF(Local_60.f_19) && unk_0x83CD99A1E6061AB5()))
					{
						if (func_116(Local_60.f_19))
						{
							unk_0xEEA3B200A6FEB65B(unk_0xD8515F5FEA14CB3F(Local_60.f_19), 2, 0.1f);
							if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_60.f_19), 0))
							{
								if (unk_0x18A47D074708FD68(Local_60.f_4))
								{
									unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true, true);
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
									}
								}
								unk_0x933D6A9EEC1BACD0(&uLocal_63, 14);
							}
						}
						if (!BitTest(Local_60.f_1, 8) && BitTest(uLocal_63, 8))
						{
							if (func_116(Local_60.f_19))
							{
								if (!unk_0xD05BFF0C0A12C68F(unk_0xD8515F5FEA14CB3F(Local_60.f_19)) && unk_0xE9676F61BC0B3321(unk_0xD8515F5FEA14CB3F(Local_60.f_19)))
								{
									if (unk_0x605F5A140F202491(unk_0xD8515F5FEA14CB3F(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0x886E37EC497200B6(unk_0xD8515F5FEA14CB3F(Local_60.f_19)) && unk_0x1218E6886D3D8327(unk_0xD8515F5FEA14CB3F(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_60.f_19), false);
										unk_0x933D6A9EEC1BACD0(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true) };
			if (Var1.f_2 < -50f && !unk_0xCFB0A0D8EDD145A3(unk_0xD8515F5FEA14CB3F(Local_60.f_4)))
			{
				if (func_116(Local_60.f_4))
				{
					unk_0x06843DA7060A026B(unk_0xD8515F5FEA14CB3F(Local_60.f_4), Local_60.f_6, true, false, false, true);
					if (Local_60.f_18 == 1)
					{
						func_71(unk_0xD8515F5FEA14CB3F(Local_60.f_4));
					}
				}
			}
			if (unk_0x18A47D074708FD68(Local_60.f_4))
			{
				if (unk_0x18A47D074708FD68(Local_60.f_19) && unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(Local_60.f_4)))
				{
					iVar2 = unk_0xD8515F5FEA14CB3F(Local_60.f_19);
				}
				else
				{
					iVar2 = unk_0xD8515F5FEA14CB3F(Local_60.f_4);
				}
			}
			if (unk_0x7239B21A38F536BA(iVar2))
			{
				if (!BitTest(uLocal_63, 16))
				{
					if (unk_0xE81AFC1BC4CC41CE(iVar2) >= 0.9f)
					{
						if (unk_0x75262FD12D0A1C84(Local_60.f_16) != -1)
						{
							unk_0xAD6B3148A78AE9B6(unk_0x75262FD12D0A1C84(Local_60.f_16), "Crate_Underwater", 1f);
						}
						unk_0x933D6A9EEC1BACD0(&uLocal_63, 16);
					}
				}
				else if (unk_0xE81AFC1BC4CC41CE(iVar2) < 0.9f)
				{
					if (unk_0x75262FD12D0A1C84(Local_60.f_16) != -1)
					{
						unk_0xAD6B3148A78AE9B6(unk_0x75262FD12D0A1C84(Local_60.f_16), "Crate_Underwater", 0f);
					}
					unk_0xE80492A9AC099A93(&uLocal_63, 16);
				}
			}
		}
	}
}

int func_114()
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(Local_60.f_19))
	{
		if (!unk_0x886E37EC497200B6(unk_0xD8515F5FEA14CB3F(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (unk_0xCFB0A0D8EDD145A3(unk_0xD8515F5FEA14CB3F(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_115())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_116(Local_60.f_19))
			{
				unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_60.f_19), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0xD45DC2893621E1FE(unk_0xD8515F5FEA14CB3F(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x831E0242595560DF(unk_0xD8515F5FEA14CB3F(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		unk_0xA670B3662FAFFBD0(iParam0);
		return unk_0x4D36070FE0215186(iParam0);
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	iVar0 = unk_0xCF3A965906452031(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !unk_0x38CE16C96BD11344(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_125(Local_60.f_13, 0, 1))
			{
				unk_0x76B02E21ED27A469(Local_60.f_13);
			}
		}
	}
	iVar0 = unk_0x1F13D5AE5CB17E17(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !unk_0x38CE16C96BD11344(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_124(Local_60.f_14, 0, 1))
			{
				unk_0xB60FEBA45333D36F(Local_60.f_14);
			}
		}
	}
	iVar0 = unk_0xAA81B5F10BC43AC2(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_118(Local_60.f_15, 0, 1))
		{
			unk_0x4E5C93BD0C32FBF8(Local_60.f_15);
		}
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(2, iParam0, 1, bParam1, bParam2);
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_123(iParam0) - func_122(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_121(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_122(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_120(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_122(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(0, iParam0, 1, bParam1, bParam2);
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(1, iParam0, 1, bParam1, bParam2);
}

void func_126()
{
	if (!BitTest(uLocal_63, 10))
	{
		if (func_35(Local_60.f_2))
		{
			unk_0xE8854A4326B9E12B(&iLocal_65);
			unk_0xE2A2AA2F659D77A7(0, unk_0x367B936610BA360C(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0xE2A2AA2F659D77A7(0, unk_0x367B936610BA360C(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x39E72BC99E6360CB(iLocal_65);
			unk_0x933D6A9EEC1BACD0(&uLocal_63, 10);
		}
	}
}

int func_127()
{
	return Local_60.f_0;
}

int func_128()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	unk_0x963D27A58DF860AC(iVar0);
	unk_0x963D27A58DF860AC(joaat("p_cargo_chute_s"));
	if ((unk_0x98A4EB5D89A0C952(iVar0) && unk_0x98A4EB5D89A0C952(joaat("p_cargo_chute_s"))) && func_129())
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	unk_0xD3BD40951412FEF6("P_cargo_chute_S");
	if (unk_0xD031A9162D01088C("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_130(bool bParam0)
{
	return Local_62[bParam0 /*3*/];
}

int func_131()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_138())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	if (func_136(159))
	{
		if (!func_135())
		{
			return 1;
		}
	}
	if (func_136(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_132() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_132()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	switch (func_134())
	{
		case 0:
			return func_133();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_133()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_134()
{
	return Global_31959;
}

bool func_135()
{
	return Global_2714762.f_698;
}

int func_136(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_2725403;
}

bool func_138()
{
	return Global_2714762.f_693;
}

void func_139()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA6DB27D19ECBB7DA(iLocal_64))
	{
		unk_0x86A652570E5F25DD(&iLocal_64);
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_60.f_19))
				{
					if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_60.f_19), 0))
					{
						if (func_116(Local_60.f_19))
						{
							unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_60.f_19), false);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_60.f_4))
				{
					if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(Local_60.f_4)))
					{
						if (func_116(Local_60.f_4))
						{
							unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(Local_60.f_4), true, true);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_60.f_5))
				{
					if (func_116(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0++;
		}
		Local_60.f_0 = 4;
		func_144(func_145(1, 1), 8, func_50());
	}
	func_143();
	func_70();
	func_142();
	func_141();
}

void func_141()
{
	unk_0x1090044AD1DA76FA();
}

void func_142()
{
	if (BitTest(uLocal_63, 10))
	{
		unk_0x3841422E9C488D8C(&iLocal_65);
	}
}

void func_143()
{
	if (iLocal_66 != 0)
	{
		if (unk_0x74AFEF0D2E1E409B(iLocal_66))
		{
			unk_0x8F75998877616996(iLocal_66, false);
			iLocal_66 = 0;
		}
	}
}

void func_144(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -1600651275;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 6, iParam0);
	}
}

int func_145(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0x41BD2A6B006AF756(bVar1);
		if (func_37(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
				else if (!func_88(bVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_146(struct<21> Param0)
{
	int iVar0;
	
	func_150(func_151(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(1);
	unk_0x76B02E21ED27A469(1);
	unk_0x4E5C93BD0C32FBF8(2);
	func_148(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_60, 23, 0);
	unk_0x3364AA97340CA215(&Local_62, 97, 0);
	if (!func_147())
	{
		return 0;
	}
	unk_0xAA391C728106F7AF(false);
	if (unk_0x83CD99A1E6061AB5())
	{
		Local_60.f_17 = unk_0x4F8644AF03D0E0D6();
		Local_60.f_6 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = unk_0xD53343AA4FB7DD28(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0xD53343AA4FB7DD28(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_67 = unk_0xADA24309FE08DACF();
	if (unk_0x10FAB35428CCC9D7())
	{
		Local_62[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 0;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_138())
		{
			return 0;
		}
		if (func_136(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
		if (!func_149(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_138())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_136(157))
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_141();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_141();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_149(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_150(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_141();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_152(func_153(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_153(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

