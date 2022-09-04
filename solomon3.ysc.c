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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_128 = 0;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	bool bLocal_134 = 0;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	bool bLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	bool bLocal_172 = 0;
	struct<3> Local_173[175];
	struct<3> Local_174[15];
	struct<3> Local_175[35];
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
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
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	bool bLocal_228 = 0;
	bool bLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	bool bLocal_250 = 0;
	bool bLocal_251 = 0;
	bool bLocal_252 = 0;
	bool bLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	bool bLocal_256 = 0;
	bool bLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	bool bLocal_260 = 0;
	bool bLocal_261 = 0;
	bool bLocal_262 = 0;
	int iLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265[4] = { 0, 0, 0, 0 };
	bool bLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	bool bLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_269 = 0;
	bool bLocal_270 = 0;
	bool bLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	bool bLocal_281 = 0;
	bool bLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	bool bLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	bool bLocal_289 = 0;
	bool bLocal_290 = 0;
	bool bLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	bool bLocal_296 = 0;
	bool bLocal_297 = 0;
	bool bLocal_298 = 0;
	bool bLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	bool bLocal_302 = 0;
	bool bLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	bool bLocal_319 = 0;
	bool bLocal_320 = 0;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	bool bLocal_323 = 0;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	int iLocal_667[3] = { 0, 0, 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = unk_0x4A9923385BDB9DAD();
	iLocal_74 = unk_0x186E5D252FA50E7D();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	bLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	bLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0.3f;
	fLocal_147 = 0.5f;
	fLocal_148 = 50f;
	bLocal_159 = -1;
	iLocal_167 = -1;
	iLocal_168 = -1;
	Local_306 = { -1024.1f, -485.3321f, 35.9816f };
	Local_307 = { -428.0263f, -2153.577f, 9.2997f };
	Local_308 = { -498.7f, -2136.5f, 8.4f };
	Local_316 = { -272.8615f, -2186.932f, 9.3174f };
	bLocal_319 = 209.7233f;
	bLocal_320 = 90.947f;
	bLocal_323 = 46.7161f;
	if (func_443(0))
	{
		func_436(24, 0);
	}
	unk_0xC6ED9D5092438D91(0);
	unk_0xFB5045B7C42B75BF("EXTRASUNNY", 20f);
	if (unk_0xC968670BFACE42D9(3))
	{
		func_434(unk_0xD80958FC74E988A6(), 0);
		unk_0x706D57B0F50DA710("TRV4_FAIL");
		func_432();
		func_430();
	}
	func_429(1);
	unk_0xC4301E5121A0ED73(true);
	iLocal_223 = 0;
	iLocal_222 = 0;
	while (true)
	{
		unk_0x208784099002BC30("M_LegalTrouble", 0);
		if (iLocal_249 > unk_0x9CD27B0045628463())
		{
			unk_0xAF66DCEE6609B148();
		}
		func_425();
		func_424();
		func_422();
		func_418();
		func_417();
		switch (iLocal_222)
		{
			case 0:
				func_413();
				break;
			
			case 1:
				func_368();
				break;
			
			case 2:
				func_362();
				break;
			
			case 3:
				func_359();
				break;
			
			case 4:
				func_259();
				break;
			
			case 5:
				func_247();
				break;
			
			case 6:
				func_241();
				break;
			
			case 7:
				func_231();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		unk_0x4EDE34FBADD967A6(false);
		func_1();
	}
}

void func_1()
{
	if (iLocal_411 == 0)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			func_4(unk_0xD80958FC74E988A6(), 476);
			iLocal_411 = 1;
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (iLocal_412 == 0)
			{
				bLocal_289 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0x7239B21A38F536BA(bLocal_289))
				{
					if (unk_0x4C241E39B23DF959(bLocal_289, false))
					{
						func_3(bLocal_289, -1);
						func_4(bLocal_289, 479);
						iLocal_412 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_412 == 1)
			{
				iLocal_412 = 0;
			}
		}
	}
	if (iLocal_413[0] == 0)
	{
		if (unk_0x7239B21A38F536BA(uLocal_267[0]))
		{
			if (unk_0x84A2DD9AC37C35C1(uLocal_267[0]))
			{
				iLocal_233++;
				iLocal_413[0] = 1;
			}
		}
	}
	if (iLocal_413[1] == 0)
	{
		if (unk_0x7239B21A38F536BA(uLocal_267[1]))
		{
			if (unk_0x84A2DD9AC37C35C1(uLocal_267[1]))
			{
				iLocal_233++;
				iLocal_413[1] = 1;
			}
		}
	}
	if (iLocal_413[2] == 0)
	{
		if (unk_0x7239B21A38F536BA(uLocal_267[2]))
		{
			if (unk_0x84A2DD9AC37C35C1(uLocal_267[2]))
			{
				iLocal_233++;
				iLocal_413[2] = 1;
			}
		}
	}
	if (iLocal_413[3] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[0]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[0]))
			{
				iLocal_233++;
				iLocal_413[3] = 1;
			}
		}
	}
	if (iLocal_413[4] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[1]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[1]))
			{
				iLocal_233++;
				iLocal_413[4] = 1;
			}
		}
	}
	if (iLocal_413[5] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[2]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[2]))
			{
				iLocal_233++;
				iLocal_413[5] = 1;
			}
		}
	}
	if (iLocal_413[6] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[3]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[3]))
			{
				iLocal_233++;
				iLocal_413[6] = 1;
			}
		}
	}
	if (iLocal_413[7] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[4]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[4]))
			{
				iLocal_233++;
				iLocal_413[7] = 1;
			}
		}
	}
	if (iLocal_413[8] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[5]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[5]))
			{
				iLocal_233++;
				iLocal_413[8] = 1;
			}
		}
	}
	if (iLocal_413[9] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[6]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[6]))
			{
				iLocal_233++;
				iLocal_413[9] = 1;
			}
		}
	}
	if (iLocal_413[10] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[7]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[7]))
			{
				iLocal_233++;
				iLocal_413[10] = 1;
			}
		}
	}
	if (iLocal_413[11] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[8]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[8]))
			{
				iLocal_233++;
				iLocal_413[11] = 1;
			}
		}
	}
	if (iLocal_413[12] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[9]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[9]))
			{
				iLocal_233++;
				iLocal_413[12] = 1;
			}
		}
	}
	if (iLocal_413[13] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[10]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_268[10]))
			{
				iLocal_233++;
				iLocal_413[13] = 1;
			}
		}
	}
	if (iLocal_413[14] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_272))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_272))
			{
				iLocal_233++;
				iLocal_413[14] = 1;
			}
		}
	}
	if (iLocal_413[15] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_273))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_273))
			{
				iLocal_233++;
				iLocal_413[15] = 1;
			}
		}
	}
	if (iLocal_413[16] == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_274))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_274))
			{
				iLocal_233++;
				iLocal_413[16] = 1;
			}
		}
	}
	if (iLocal_413[17] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_275[0]))
		{
			if (unk_0x84A2DD9AC37C35C1(iLocal_275[0]))
			{
				iLocal_233++;
				iLocal_413[17] = 1;
			}
		}
	}
	if (iLocal_222 == 8)
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			if (iLocal_414 == 0)
			{
				func_2(482, 0);
				iLocal_414 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(bool bParam0, int iParam1)
{
	Global_63165 = bParam0;
	Global_63166 = iParam1;
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = bParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != bParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = bParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		if (unk_0x7239B21A38F536BA(bLocal_285))
		{
			unk_0x7C65DAC73C35C862(bLocal_285, false, false, true);
		}
	}
	if (iLocal_223 > 0)
	{
		func_229();
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_423 = 0;
		iLocal_426 = 0;
		iLocal_227 = 0;
		unk_0xD3BD40951412FEF6("Misssolomon_3");
		unk_0x963D27A58DF860AC(joaat("oracle2"));
		unk_0x963D27A58DF860AC(joaat("baller2"));
		if (unk_0xA6DB27D19ECBB7DA(bLocal_297))
		{
			unk_0x86A652570E5F25DD(&bLocal_297);
		}
		if (unk_0xCB4E8BE8A0063C5D("Trev4_5"))
		{
			unk_0x5A353B8E6B1095B5("Trev4_5", false, 1f, 1f);
			unk_0xFF1B8B4AA1C25DC8("Trev4_5");
		}
		if (unk_0x7239B21A38F536BA(bLocal_279))
		{
			unk_0x629BFA74418D6239(&bLocal_279);
		}
		unk_0xC1B1E9A034A63A62(false);
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (!func_24())
			{
				unk_0x4448EB75B4904BDB(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x5A859503B0C08678())
		{
			unk_0xD4E8E24955024033(800);
		}
		if (unk_0x7239B21A38F536BA(bLocal_266))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
			{
				unk_0x63F58F7C80513AAD(bLocal_266, true);
				unk_0x9F8AA94D6D97DBF4(bLocal_266, false);
			}
		}
		unk_0x706D57B0F50DA710("TRV4_LOSE_COPS");
		if (!unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS"))
		{
			unk_0x013A80FC08F6E4F2("SOL_3_LOSE_COPS");
		}
		unk_0xCC33FA791322B9D9();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0xB65B60556E2A9225("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xDFE8422B3B94E688("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_263 = unk_0xFCD5C8E06E502F5A(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, false, 7);
		if (unk_0x7239B21A38F536BA(bLocal_284))
		{
			if (unk_0x4C241E39B23DF959(bLocal_284, false))
			{
				unk_0x21115BCD6E44656A(bLocal_284, false);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_285))
		{
			if (unk_0x4C241E39B23DF959(bLocal_285, false))
			{
				unk_0x21115BCD6E44656A(bLocal_285, false);
			}
		}
		unk_0xAA5F02DB48D704B9(5);
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 3, false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		unk_0xB9EFD5C25018725A("PoliceScannerDisabled", false);
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_418 == 0)
		{
			if (!unk_0x7239B21A38F536BA(iLocal_293[0]))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("oracle2")))
				{
					iLocal_293[0] = unk_0xAF35D0D2583051B0(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, true, true, false);
					unk_0x0DC7CABAB1E9B67E(iLocal_293[0], true, 1);
					unk_0x49733E92263139D1(iLocal_293[0], 5f);
					unk_0xE532F5D78798DAAB(joaat("oracle2"));
					iLocal_418 = 1;
				}
			}
		}
		if (iLocal_419 == 0)
		{
			if (!unk_0x7239B21A38F536BA(iLocal_293[1]))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("baller2")))
				{
					iLocal_293[1] = unk_0xAF35D0D2583051B0(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, true, true, false);
					unk_0x0DC7CABAB1E9B67E(iLocal_293[1], true, 1);
					unk_0x49733E92263139D1(iLocal_293[1], 5f);
					unk_0xE532F5D78798DAAB(joaat("baller2"));
					iLocal_419 = 1;
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_293[0]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_293[0], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_293[0], false))
				{
					if (!unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x013A80FC08F6E4F2("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xD80958FC74E988A6(), iLocal_293[0], 1) > 200f || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_293[0], false))
			{
				unk_0x629BFA74418D6239(&(iLocal_293[0]));
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_293[1]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_293[1], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_293[1], false))
				{
					if (!unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x013A80FC08F6E4F2("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xD80958FC74E988A6(), iLocal_293[1], 1) > 200f || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_293[1], false))
			{
				unk_0x629BFA74418D6239(&(iLocal_293[1]));
			}
		}
		if (iLocal_398 == 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_268[0]))
			{
				func_14(bLocal_268[0], "SURROUNDED", 24);
				iLocal_398 = 1;
			}
		}
		if (iLocal_367 == 0)
		{
			if (unk_0x83666F9FB8FEBD4B() > 8000)
			{
				if (unk_0x4C241E39B23DF959(iLocal_286[0], false))
				{
					unk_0x3F878F92B3A7A071(iLocal_286[0], 68, "BB_Chase", true);
					unk_0x796A877E459B99EA(iLocal_286[0], 0f, 0f, 0.15f);
				}
				if (unk_0x4C241E39B23DF959(iLocal_286[1], false))
				{
					unk_0x3F878F92B3A7A071(iLocal_286[1], 69, "BB_Chase", true);
					unk_0x796A877E459B99EA(iLocal_286[1], 0f, 0f, 0.15f);
				}
				iLocal_367 = 1;
			}
		}
		else
		{
			if (unk_0x4C241E39B23DF959(iLocal_286[0], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_286[0]))
				{
					if (unk_0x5746F3A7AB7FE544(iLocal_286[0]) > 5000f)
					{
						if (unk_0x5721B434AD84D57A(iLocal_286[0]))
						{
							unk_0x54833611C17ABDEA(iLocal_286[0]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_268[6]))
					{
						unk_0x9F8AA94D6D97DBF4(bLocal_268[6], false);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_268[7]))
					{
						unk_0x9F8AA94D6D97DBF4(bLocal_268[7], false);
					}
					iLocal_368 = 1;
				}
			}
			if (unk_0x4C241E39B23DF959(iLocal_286[1], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_286[1]))
				{
					if (unk_0x5746F3A7AB7FE544(iLocal_286[1]) > 5000f)
					{
						if (unk_0x5721B434AD84D57A(iLocal_286[1]))
						{
							unk_0x54833611C17ABDEA(iLocal_286[1]);
						}
					}
				}
				else if (iLocal_369 == 0)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_268[8]))
					{
						unk_0x9F8AA94D6D97DBF4(bLocal_268[8], false);
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_268[9]))
					{
						unk_0x9F8AA94D6D97DBF4(bLocal_268[9], false);
					}
					iLocal_369 = 1;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_285))
			{
				if (unk_0x4C241E39B23DF959(bLocal_285, false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_285, false))
					{
						unk_0x706D57B0F50DA710("TRV4_JET_ENTERED");
						if (!unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x013A80FC08F6E4F2("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x293220DA1B46CEBC(4f, 15f, 4);
						unk_0x629BFA74418D6239(&bLocal_285);
						iLocal_423 = 1;
					}
					else if (func_16(unk_0xD80958FC74E988A6(), bLocal_285, 1) > 200f)
					{
						unk_0x629BFA74418D6239(&bLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 1)
		{
			if (unk_0x7239B21A38F536BA(bLocal_285))
			{
				if (unk_0x4C241E39B23DF959(bLocal_285, false))
				{
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_285, false))
					{
						if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x706D57B0F50DA710("TRV4_LOSE_COPS");
						iLocal_423 = 0;
					}
				}
			}
		}
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
		{
			if (iLocal_426 == 0)
			{
				iLocal_235 = unk_0x9CD27B0045628463();
				iLocal_426 = 1;
			}
		}
		if (iLocal_426 == 1)
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_235 + 3500)
				{
					if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS"))
					{
						unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS");
					}
					if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x706D57B0F50DA710("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_233, 0);
	func_7(0, 0);
	func_430();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_443(0) && Global_78565.f_1 == 1) && func_9(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_443(0))
	{
		iVar0 = func_8();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 4);
		unk_0x933D6A9EEC1BACD0(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = unk_0x9CD27B0045628463();
	}
}

int func_8()
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

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75250[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75250[iVar0 /*9*/] != -1)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75250[iVar0 /*9*/].f_1 > 1)
			{
				Global_75250[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75250[iVar0 /*9*/].f_1 < 0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_231 = 0;
	while (iLocal_231 <= 9)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[iLocal_231]))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_268[iLocal_231]))
			{
				if (!unk_0x997ABD671D25CA0B(bLocal_268[iLocal_231], false))
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[iLocal_231]) > 200f)
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_268[iLocal_231]);
							unk_0x2595DD4236549CE3(&(bLocal_268[iLocal_231]));
						}
						else if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[iLocal_231]) > 20f)
						{
							if (unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], -1207174364) != 1 && unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], -1207174364) != 0)
							{
								unk_0x97465886D35210E9(bLocal_268[iLocal_231], unk_0xD80958FC74E988A6(), unk_0xD80958FC74E988A6(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], 780511057) != 1 && unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], 780511057) != 0)
						{
							unk_0xF166E48407BAC484(bLocal_268[iLocal_231], unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x9F7794730795E019(bLocal_268[iLocal_231], 50, true);
						}
					}
					else if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[iLocal_231]) > 200f)
					{
						unk_0x2595DD4236549CE3(&(bLocal_268[iLocal_231]));
					}
					else if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[iLocal_231]) > 5f)
					{
						if (unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], -1207174364) != 1 && unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], -1207174364) != 0)
						{
							unk_0x97465886D35210E9(bLocal_268[iLocal_231], unk_0xD80958FC74E988A6(), unk_0xD80958FC74E988A6(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], 780511057) != 1 && unk_0x77F1BEB8863288D5(bLocal_268[iLocal_231], 780511057) != 0)
					{
						unk_0xF166E48407BAC484(bLocal_268[iLocal_231], unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x9F7794730795E019(bLocal_268[iLocal_231], 50, true);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (unk_0x7239B21A38F536BA(iLocal_286[0]))
			{
				if (unk_0x4C241E39B23DF959(iLocal_286[0], false))
				{
					if (unk_0x1C8A4C2C19E68EEC(iLocal_286[0]))
					{
					}
					else
					{
						if (unk_0x7239B21A38F536BA(bLocal_268[6]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_268[6]))
							{
								unk_0x9F8AA94D6D97DBF4(bLocal_268[6], false);
								unk_0xE1EF3C1216AFF2CD(bLocal_268[6]);
								unk_0xE8854A4326B9E12B(&iLocal_304);
								unk_0xD3DBCE61A490BE02(false, iLocal_286[0], 256);
								unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x39E72BC99E6360CB(iLocal_304);
								unk_0x5ABA3986D90D8A3B(bLocal_268[6], iLocal_304);
								unk_0x3841422E9C488D8C(&iLocal_304);
							}
						}
						if (unk_0x7239B21A38F536BA(bLocal_268[7]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_268[7]))
							{
								unk_0x9F8AA94D6D97DBF4(bLocal_268[7], false);
								unk_0xE1EF3C1216AFF2CD(bLocal_268[7]);
								unk_0xE8854A4326B9E12B(&iLocal_304);
								unk_0xD3DBCE61A490BE02(false, iLocal_286[0], 256);
								unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x39E72BC99E6360CB(iLocal_304);
								unk_0x5ABA3986D90D8A3B(bLocal_268[7], iLocal_304);
								unk_0x3841422E9C488D8C(&iLocal_304);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
		else if (iLocal_399 == 0)
		{
			if (unk_0x7239B21A38F536BA(iLocal_286[0]))
			{
				if (unk_0x4C241E39B23DF959(iLocal_286[0], false))
				{
					if (unk_0x7239B21A38F536BA(bLocal_268[6]))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_268[6]))
						{
							if (!unk_0xA3EE4A07279BB9DB(bLocal_268[6], iLocal_286[0], false))
							{
								if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[6]) < 20f)
								{
									func_14(bLocal_268[6], "DRAW_GUN", 24);
									iLocal_399 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0)
		{
			if (unk_0x7239B21A38F536BA(iLocal_286[1]))
			{
				if (unk_0x4C241E39B23DF959(iLocal_286[1], false))
				{
					if (unk_0x1C8A4C2C19E68EEC(iLocal_286[1]))
					{
					}
					else
					{
						if (unk_0x7239B21A38F536BA(bLocal_268[8]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_268[8]))
							{
								unk_0x9F8AA94D6D97DBF4(bLocal_268[8], false);
								unk_0xE1EF3C1216AFF2CD(bLocal_268[8]);
								unk_0xE8854A4326B9E12B(&iLocal_304);
								unk_0xD3DBCE61A490BE02(false, iLocal_286[1], 256);
								unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x39E72BC99E6360CB(iLocal_304);
								unk_0x5ABA3986D90D8A3B(bLocal_268[8], iLocal_304);
								unk_0x3841422E9C488D8C(&iLocal_304);
							}
						}
						if (unk_0x7239B21A38F536BA(bLocal_268[9]))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_268[9]))
							{
								unk_0x9F8AA94D6D97DBF4(bLocal_268[9], false);
								unk_0xE1EF3C1216AFF2CD(bLocal_268[9]);
								unk_0xE8854A4326B9E12B(&iLocal_304);
								unk_0xD3DBCE61A490BE02(false, iLocal_286[1], 256);
								unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x39E72BC99E6360CB(iLocal_304);
								unk_0x5ABA3986D90D8A3B(bLocal_268[9], iLocal_304);
								unk_0x3841422E9C488D8C(&iLocal_304);
							}
						}
						iLocal_345 = 1;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_268[10]))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_268[10]))
			{
				if (func_13(unk_0xD80958FC74E988A6(), bLocal_268[10]) > 200f)
				{
					unk_0x2595DD4236549CE3(&(bLocal_268[iLocal_231]));
					unk_0xF66A602F829E2A06("misssolomon_3");
				}
				else if (unk_0xD031A9162D01088C("misssolomon_3"))
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_268[10]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_268[10]);
							unk_0xE8854A4326B9E12B(&iLocal_304);
							unk_0xEA47FE3719165B94(false, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, false, false, false, false);
							unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_304);
							unk_0x5ABA3986D90D8A3B(bLocal_268[10], iLocal_304);
							unk_0x3841422E9C488D8C(&iLocal_304);
							iLocal_346 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(bool bParam0, bool bParam1)
{
	return func_16(bParam0, bParam1, 1);
}

void func_14(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_15(iParam2), true);
}

int func_15(int iParam0)
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

float func_16(bool bParam0, bool bParam1, bool bParam2)
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

void func_17(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(bool bParam0, bool bParam1)
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			unk_0xE80492A9AC099A93(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

int func_19(bool bParam0)
{
	if (BitTest(Global_32118, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(bParam1, true);
}

void func_21(bool bParam0, bool bParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_100436 != 6)
		{
			unk_0x4EDE34FBADD967A6(false);
		}
		unk_0x577D1284D6873711(false);
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
			}
		}
		if (bParam0 != 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x7239B21A38F536BA(bParam0))
				{
					if (unk_0x4C241E39B23DF959(bParam0, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam0, false))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), bParam0, bParam1);
							unk_0x6D0858B8EDFD2B7D(0f, 1f);
							unk_0xB4EC2312F4E5B1F1(0f);
							unk_0x4EDE34FBADD967A6(false);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		unk_0xB4EDDC19532BFB85();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_100441.f_20), 13);
	}
}

int func_23()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return BitTest(Global_100441.f_20, 13);
}

void func_25(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x0C515FAB3FF9EA92("FinaleC2", unk_0x442E0A7EDE4A738A()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_119(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = func_117(unk_0x442E0A7EDE4A738A(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_115(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xC900596A63978C1D(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = func_110(unk_0x442E0A7EDE4A738A(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_109(iVar4)}, 4);
				unk_0xC900596A63978C1D(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = func_108(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_26(iParam0, bParam1, bParam4, iParam5);
		if (unk_0x0C515FAB3FF9EA92(bParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_26(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	func_27(&Global_106934, unk_0x442E0A7EDE4A738A(), iParam0, uParam1, iParam3, bParam2);
}

void func_27(var uParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_107();
	uParam0->f_1 = func_96();
	unk_0xF3BBE884A14BB413(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(unk_0xD80958FC74E988A6());
		func_60(unk_0xD80958FC74E988A6(), 0);
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_50(unk_0xD80958FC74E988A6(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	
	if (bParam2 == 0)
	{
		bParam2 = unk_0xD80958FC74E988A6();
	}
	if (unk_0x7239B21A38F536BA(bParam2))
	{
		uParam1->f_5 = func_47(bParam2);
	}
	if (func_44(bParam2, &bVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, bVar0, iParam4);
	}
	else if (unk_0x7239B21A38F536BA(bVar0))
	{
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x423E8DE37D934D89(bVar0, joaat("skylift")) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bVar0, false))
			{
				func_30(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x4C241E39B23DF959(bParam2, false))
	{
		func_32(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_31(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, int iParam2)
{
	func_39(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(bParam1, 145, 0);
	uParam0->f_11 = func_34(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		uParam0->f_6 = unk_0xE83D4F9BA2A38914(bParam1);
		uParam0->f_3 = { unk_0x4805D2B1D8CF94A9(bParam1) };
		if (unk_0x51210CED3DA1C78A(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if (bParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(bool bParam0)
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

int func_35(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || unk_0x9F47B058362C84B5(bParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_43(uParam1);
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
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
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
		func_41(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar0 + 1));
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

int func_40(int iParam0)
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

int func_41(bool bParam0, var uParam1, var uParam2)
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

int func_42(int iParam0)
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

void func_43(var uParam0)
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

int func_44(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			if (bParam0 == unk_0xD80958FC74E988A6())
			{
				*uParam1 = unk_0xB6997A7EB3F5C8C0();
			}
			else
			{
				*uParam1 = unk_0x9A9112A0FE9A4713(bParam0, true);
			}
			if (unk_0x7239B21A38F536BA(*uParam1))
			{
				if (unk_0x4C241E39B23DF959(*uParam1, false))
				{
					if (iParam2 == 0 || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(*uParam1, true), unk_0x3FEF770D40960D5A(bParam0, true), true) < 100f)
					{
						if (unk_0x423E8DE37D934D89(*uParam1, joaat("taxi")))
						{
							if (unk_0xBB40DD2270B65366(*uParam1, -1, false) != bParam0 && unk_0xBB40DD2270B65366(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_107(), 1))
						{
							bVar0 = unk_0x442E0A7EDE4A738A();
							if (!unk_0x0C515FAB3FF9EA92(bVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x997ABD671D25CA0B(bParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x05661B80A8C9165F(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xDACE671663F2F5DB(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x423E8DE37D934D89(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar2))
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

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_47(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_50(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		iVar0 = func_47(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_56(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_55(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x10FAB35428CCC9D7() && unk_0x9F47B058362C84B5(bParam0) == unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
			uParam1->f_60 = func_51(754, iParam3, 0);
			uParam1->f_61 = func_51(755, iParam3, 0);
		}
		if (unk_0x10FAB35428CCC9D7() && bParam0 == unk_0xD80958FC74E988A6())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_52(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1574918;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = unk_0x898CC20EA75BACD8(bParam0, bParam1);
		*uParam3 = unk_0xE131A28626F81AB2(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (unk_0xF33BDFE19B309B19(bParam0) && unk_0x451294E859ECC018(bParam0) != -1)
				{
					*uParam2 = unk_0x451294E859ECC018(bParam0);
					*uParam3 = unk_0x9D728C1E12BF5518(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = unk_0x67F3780DD425D4FC(bParam0, bParam1);
		*uParam3 = unk_0x04A355E041E004E6(bParam0, bParam1);
		*uParam4 = unk_0xE3DD5F2A84B42281(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_48(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_47(unk_0xD80958FC74E988A6());
			if (func_38(iVar0) && (!func_59(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_38(Global_113386.f_2363.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_60(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = func_47(bParam0);
	if (func_38(iVar0) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (bParam0 == unk_0xD80958FC74E988A6())
		{
			func_61(bParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xA48931185F0536FE();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6E9C742F340CE5A2(unk_0x4F8644AF03D0E0D6(), &bVar3);
			if (iVar0 == 0)
			{
				unk_0xB3271D7AB655B441(joaat("sp0_parachute_current_tint"), bVar3, true);
			}
			else if (iVar0 == 1)
			{
				unk_0xB3271D7AB655B441(joaat("sp1_parachute_current_tint"), bVar3, true);
			}
			else if (iVar0 == 2)
			{
				unk_0xB3271D7AB655B441(joaat("sp2_parachute_current_tint"), bVar3, true);
			}
		}
	}
}

void func_61(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xEFFED78E9011134D(bParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x015A522136D7F951(bParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x2B9EEDC07BD06B9F(bParam0, Var4.f_0);
					Var4.f_4 = unk_0xA2C9AC24B4061285(bParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(bParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_64(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC593212475FAE340(bParam0, Var4.f_0, iVar2))
						{
							unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_64(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_63(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0xD4D7B033C3AA243C(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x015A522136D7F951(bParam0, Var4.f_0);
					if (unk_0x8DECB02F88F428BC(bParam0, Var4.f_0, false))
					{
						Var4.f_3 = unk_0x2B9EEDC07BD06B9F(bParam0, Var4.f_0);
						Var4.f_4 = unk_0xA2C9AC24B4061285(bParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(bParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, bVar1, &Var8))
						{
							if (!func_62(Var8.f_3))
							{
								if (unk_0xC593212475FAE340(bParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8DECB02F88F428BC(bParam0, Var4.f_0, false))
					{
						Var4.f_0 = false;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case -610080759:
			case 1853742572:
			case -774507221:
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < unk_0x405425358A7D61FE(iVar1))
					{
						if (unk_0x6CF598A2957C2BF8(iVar1, bVar2, &Var5))
						{
							if (!func_62(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var* uParam1)
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

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_67(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_47(bParam0);
	if (func_38(iVar0) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = unk_0x9483AF821605B1D8(bParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	uParam0->f_3 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
	uParam0->f_5 = unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6());
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		uParam0->f_4 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x2C83A9DA6BFFC4F9(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0x05B7A89BD78797FC(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = func_107();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_69(struct<3> Param0, bool bParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEEA5AC2EDA7C33E8(Param0))
	{
		iVar0 = unk_0x05B7A89BD78797FC(Param2, bParam1);
		if (!unk_0x26B0E73D7EAAF4D3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xEC4CF9FCB29A4424(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_72(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_95())
		{
			*uParam0 = func_78(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			return BitTest(func_51(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
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

int func_76()
{
	return Global_31959;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_94(iVar0))
		{
			if (!bParam3 || func_93(iVar0))
			{
				fVar1 = unk_0xF1B760881820C952(Param0, func_79(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_90(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_89())
			{
				if (func_88(Global_1853185))
				{
					return func_81(2, 2);
				}
				else if (func_80(Global_1853185))
				{
					return func_81(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_80(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_81(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_89())
	{
		if (iParam1 == 3)
		{
			if (func_82(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_82(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_82(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_87(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_87(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_85(iParam0) };
	}
	else
	{
		Var2 = { func_84(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_83(Var3, -Var0.f_3.f_2) };
	Var3 = { func_83(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0x163E252DE035A133(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_83(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x0BADBFA3B172435F(bParam1);
	fVar2 = unk_0xD0FFB162F40A139C(bParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_85(int iParam0)
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_89()
{
	return -1;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_91() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_91()
{
	return func_92(unk_0x4F8644AF03D0E0D6());
}

int func_92(bool bParam0)
{
	return unk_0x53158863FCC0893A(Global_2689235[bParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_93(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_95()
{
	return Global_100493.f_375 > 0;
}

var func_96()
{
	var uVar0;
	
	func_106(&uVar0, unk_0x494E97C2EF27C470());
	func_105(&uVar0, unk_0x13D2B8ADD79640F2());
	func_104(&uVar0, unk_0x25223CA6B4D20B7F());
	func_99(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_98(&uVar0, unk_0xBBC72712E80257A1());
	func_97(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_97(var uParam0, int iParam1)
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

void func_98(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(*uParam0);
	iVar1 = func_101(*uParam0);
	if (bParam1 < 1 || bParam1 > func_100(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_100(int iParam0, int iParam1)
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

int func_101(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_102(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_103(bool bParam0)
{
	return (bParam0 && 15);
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_107()
{
	func_58();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_108(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92("BailBond1", bParam0))
	{
		return 0;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond2", bParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond3", bParam0))
	{
		return 2;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond4", bParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_109(int iParam0)
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

int func_110(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = unk_0xD24D37CC275948CC(bParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_111(iVar0, &bVar1);
		if (unk_0xD24D37CC275948CC(bVar1) == bVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(uParam1, "Abigail1", func_114(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 1:
			func_112(uParam1, "Abigail2", func_114(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 2:
			func_112(uParam1, "Barry1", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 3:
			func_112(uParam1, "Barry2", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 4:
			func_112(uParam1, "Barry3", func_114(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 5:
			func_112(uParam1, "Barry3A", func_114(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 6:
			func_112(uParam1, "Barry3C", func_114(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 7:
			func_112(uParam1, "Barry4", func_114(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		
		case 8:
			func_112(uParam1, "Dreyfuss1", func_114(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 9:
			func_112(uParam1, "Epsilon1", func_114(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 10:
			func_112(uParam1, "Epsilon2", func_114(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 11:
			func_112(uParam1, "Epsilon3", func_114(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 12:
			func_112(uParam1, "Epsilon4", func_114(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 13:
			func_112(uParam1, "Epsilon5", func_114(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 14:
			func_112(uParam1, "Epsilon6", func_114(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 15:
			func_112(uParam1, "Epsilon7", func_114(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 16:
			func_112(uParam1, "Epsilon8", func_114(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 17:
			func_112(uParam1, "Extreme1", func_114(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 18:
			func_112(uParam1, "Extreme2", func_114(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 19:
			func_112(uParam1, "Extreme3", func_114(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 20:
			func_112(uParam1, "Extreme4", func_114(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 21:
			func_112(uParam1, "Fanatic1", func_114(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 22:
			func_112(uParam1, "Fanatic2", func_114(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 23:
			func_112(uParam1, "Fanatic3", func_114(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		
		case 24:
			func_112(uParam1, "Hao1", func_114(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		
		case 25:
			func_112(uParam1, "Hunting1", func_114(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 26:
			func_112(uParam1, "Hunting2", func_114(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 27:
			func_112(uParam1, "Josh1", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 28:
			func_112(uParam1, "Josh2", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 29:
			func_112(uParam1, "Josh3", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 30:
			func_112(uParam1, "Josh4", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 31:
			func_112(uParam1, "Maude1", func_114(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 32:
			func_112(uParam1, "Minute1", func_114(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 33:
			func_112(uParam1, "Minute2", func_114(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 34:
			func_112(uParam1, "Minute3", func_114(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 35:
			func_112(uParam1, "MrsPhilips1", func_114(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 36:
			func_112(uParam1, "MrsPhilips2", func_114(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 37:
			func_112(uParam1, "Nigel1", func_114(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 38:
			func_112(uParam1, "Nigel1A", func_114(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 39:
			func_112(uParam1, "Nigel1B", func_114(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 40:
			func_112(uParam1, "Nigel1C", func_114(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 41:
			func_112(uParam1, "Nigel1D", func_114(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 42:
			func_112(uParam1, "Nigel2", func_114(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 43:
			func_112(uParam1, "Nigel3", func_114(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 44:
			func_112(uParam1, "Omega1", func_114(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 45:
			func_112(uParam1, "Omega2", func_114(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 46:
			func_112(uParam1, "Paparazzo1", func_114(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 47:
			func_112(uParam1, "Paparazzo2", func_114(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 48:
			func_112(uParam1, "Paparazzo3", func_114(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 49:
			func_112(uParam1, "Paparazzo3A", func_114(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 50:
			func_112(uParam1, "Paparazzo3B", func_114(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 51:
			func_112(uParam1, "Paparazzo4", func_114(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 52:
			func_112(uParam1, "Rampage1", func_114(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 54:
			func_112(uParam1, "Rampage3", func_114(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 55:
			func_112(uParam1, "Rampage4", func_114(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 56:
			func_112(uParam1, "Rampage5", func_114(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 53:
			func_112(uParam1, "Rampage2", func_114(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 57:
			func_112(uParam1, "TheLastOne", func_114(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 58:
			func_112(uParam1, "Tonya1", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 59:
			func_112(uParam1, "Tonya2", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 60:
			func_112(uParam1, "Tonya3", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 61:
			func_112(uParam1, "Tonya4", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 62:
			func_112(uParam1, "Tonya5", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_113(int iParam0)
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

struct<2> func_114(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_109(iParam0) };
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_116(Global_113386.f_9085.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_116(Global_113386.f_9085.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_116(Global_113386.f_9085.f_99.f_205[11]);
			break;
		
		case 90:
			return func_116(Global_113386.f_9085.f_99.f_205[7]);
			break;
		
		case 93:
			return func_116(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_117(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xD24D37CC275948CC(bParam0);
	iVar1 = func_118(bVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_118(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91229[iVar0 /*34*/].f_6 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_119(bool bParam0)
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

void func_120()
{
	unk_0x29B487C359E19889("EXTRASUNNY");
	func_228();
	func_200();
	func_122();
	if (!func_24())
	{
		func_121();
	}
	iLocal_349 = 1;
	unk_0xB4EC2312F4E5B1F1(0f);
}

void func_121()
{
	switch (iLocal_222)
	{
		case 2:
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1019.579f, -484.872f, 36.0795f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 93.7701f);
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(bLocal_279, false))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_279, false))
				{
					unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), bLocal_279, -1);
				}
				unk_0x6B76DC1F3AE6E6A3(bLocal_279, 3000, false);
				unk_0xFAEE099C6F890BB8(bLocal_279, false, true, false, false, false, false, false, false);
			}
			break;
		
		case 5:
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -935.4413f, -2928.061f, 12.9451f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 178.466f);
			unk_0x0DC7CABAB1E9B67E(unk_0xD80958FC74E988A6(), true, 1);
			break;
		
		case 8:
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -937.5466f, -2968.713f, 12.9451f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 111.5016f);
			unk_0x0DC7CABAB1E9B67E(unk_0xD80958FC74E988A6(), true, 1);
			break;
	}
}

void func_122()
{
	switch (iLocal_222)
	{
		case 2:
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
			unk_0xA56F01F3765B93A0(-1026.8f, -492.1f, 36f, 18f, true, false, false, false);
			unk_0xC12321827687FE4D(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, true);
			unk_0x46A1E1A299EC4BBA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0x963D27A58DF860AC(joaat("rapidgt"));
			unk_0x963D27A58DF860AC(joaat("surano"));
			unk_0x963D27A58DF860AC(joaat("carbonizzare"));
			while ((!unk_0x98A4EB5D89A0C952(joaat("rapidgt")) || !unk_0x98A4EB5D89A0C952(joaat("surano"))) || !unk_0x98A4EB5D89A0C952(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				unk_0xA56F01F3765B93A0(Local_306, 5f, true, false, false, false);
				bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), Local_306, bLocal_319, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
				unk_0x6B76DC1F3AE6E6A3(bLocal_279, 3000, false);
				unk_0x3E8C8727991A8A0B(bLocal_279, true);
				unk_0xE532F5D78798DAAB(joaat("rapidgt"));
				unk_0x0FC2D89AC25A5814(joaat("rapidgt"), true);
				unk_0x3910051CCECDB00C(bLocal_279, true);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_290))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("surano")))
				{
					unk_0xA56F01F3765B93A0(-1037.398f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					bLocal_290 = unk_0xAF35D0D2583051B0(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					unk_0x4F1D4BE3A7F24601(bLocal_290, false, false);
					unk_0x6B76DC1F3AE6E6A3(bLocal_290, 3000, false);
					unk_0x3E8C8727991A8A0B(bLocal_290, true);
					unk_0xE532F5D78798DAAB(joaat("surano"));
					unk_0x0FC2D89AC25A5814(joaat("surano"), true);
					unk_0x92F0CF722BC4202F(bLocal_290, true);
				}
			}
			if (!unk_0x7239B21A38F536BA(bLocal_291))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("carbonizzare")))
				{
					unk_0xA56F01F3765B93A0(Local_306, 5f, true, false, false, false);
					bLocal_291 = unk_0xAF35D0D2583051B0(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					unk_0x4F1D4BE3A7F24601(bLocal_291, 89, 89);
					unk_0x6B76DC1F3AE6E6A3(bLocal_291, 3000, false);
					unk_0x3E8C8727991A8A0B(bLocal_291, true);
					unk_0xE532F5D78798DAAB(joaat("carbonizzare"));
					unk_0x0FC2D89AC25A5814(joaat("carbonizzare"), true);
					unk_0x92F0CF722BC4202F(bLocal_291, true);
				}
			}
			break;
		
		case 3:
			unk_0x1E5185B72EF5158A("TRV4_CHASE");
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
			func_197();
			unk_0xA56F01F3765B93A0(Local_307, 200f, true, false, false, false);
			if (!unk_0x7239B21A38F536BA(bLocal_278))
			{
				bLocal_278 = unk_0xAF35D0D2583051B0(joaat("cogcabrio"), Local_307, bLocal_320, true, true, false);
				unk_0xFAEE099C6F890BB8(bLocal_278, true, true, true, true, true, false, false, false);
				unk_0x4F1D4BE3A7F24601(bLocal_278, 27, 27);
				unk_0xE532F5D78798DAAB(joaat("cogcabrio"));
				unk_0x153973AB99FE8980(bLocal_278, "SOL_3_MOLLY_CAR_Group", 0f);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_264))
			{
				bLocal_264 = unk_0x7DD959874C1FD534(bLocal_278, 26, joaat("ig_molly"), -1, true, true);
				unk_0xFAEE099C6F890BB8(bLocal_264, true, true, true, true, true, false, false, false);
				unk_0x3882114BDE571AD4(bLocal_264, true);
				unk_0x63F58F7C80513AAD(bLocal_264, false);
				unk_0xE532F5D78798DAAB(joaat("ig_molly"));
				unk_0xC80A74AC829DDD92(bLocal_264, joaat("player"));
			}
			if (func_23())
			{
				if (!unk_0x7239B21A38F536BA(bLocal_279))
				{
					if (func_196())
					{
						if (!unk_0xDCE4334788AF94EA(func_195()) && !unk_0xA0948AB42D7BA0DE(func_195()))
						{
							bLocal_279 = func_145(Local_316, bLocal_323);
							unk_0xE532F5D78798DAAB(func_195());
							unk_0x92F0CF722BC4202F(bLocal_279, true);
						}
						else
						{
							bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), Local_316, bLocal_323, true, true, false);
							unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
						}
					}
					else
					{
						bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), Local_316, bLocal_323, true, true, false);
						unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
					}
					unk_0x6B76DC1F3AE6E6A3(bLocal_279, 3000, false);
					unk_0x3E8C8727991A8A0B(bLocal_279, true);
					unk_0xFAEE099C6F890BB8(bLocal_279, false, true, false, false, false, false, false, false);
					unk_0x3910051CCECDB00C(bLocal_279, true);
					unk_0xE532F5D78798DAAB(joaat("rapidgt"));
					unk_0x92F0CF722BC4202F(bLocal_279, true);
				}
			}
			else if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), Local_316, bLocal_323, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
				unk_0xE532F5D78798DAAB(joaat("rapidgt"));
				unk_0x6B76DC1F3AE6E6A3(bLocal_279, 3000, false);
				unk_0x3E8C8727991A8A0B(bLocal_279, true);
				unk_0xFAEE099C6F890BB8(bLocal_279, false, true, false, false, false, false, false, false);
				unk_0x3910051CCECDB00C(bLocal_279, true);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
			break;
		
		case 5:
			iLocal_350 = 0;
			unk_0xA56F01F3765B93A0(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			unk_0xC1B1E9A034A63A62(false);
			unk_0x963D27A58DF860AC(joaat("jet"));
			unk_0x963D27A58DF860AC(joaat("shamal"));
			unk_0x9EEFB62EB27B5792("BB_MOLLY_2");
			unk_0x963D27A58DF860AC(joaat("s_m_y_airworker"));
			unk_0x963D27A58DF860AC(joaat("s_m_y_cop_01"));
			unk_0x963D27A58DF860AC(joaat("police3"));
			unk_0x963D27A58DF860AC(joaat("ig_molly"));
			unk_0x963D27A58DF860AC(joaat("cogcabrio"));
			unk_0x963D27A58DF860AC(joaat("rapidgt"));
			unk_0x963D27A58DF860AC(joaat("prop_cs_film_reel_01"));
			unk_0xAF514CABE74CBF15(68, "BB_Chase");
			unk_0xAF514CABE74CBF15(69, "BB_Chase");
			unk_0x9EEFB62EB27B5792("Trev4_5");
			unk_0x944955FB2A3935C8();
			unk_0xD3BD40951412FEF6("move_f@film_reel_arms");
			unk_0xD3BD40951412FEF6("misssolomon_3");
			while (((((((((((((((!unk_0x98A4EB5D89A0C952(joaat("jet")) || !unk_0x98A4EB5D89A0C952(joaat("shamal"))) || !unk_0xCB4E8BE8A0063C5D("BB_MOLLY_2")) || !unk_0x98A4EB5D89A0C952(joaat("s_m_y_airworker"))) || !unk_0x98A4EB5D89A0C952(joaat("s_m_y_cop_01"))) || !unk_0x98A4EB5D89A0C952(joaat("police3"))) || !unk_0x98A4EB5D89A0C952(joaat("ig_molly"))) || !unk_0x98A4EB5D89A0C952(joaat("cogcabrio"))) || !unk_0x98A4EB5D89A0C952(joaat("rapidgt"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_cs_film_reel_01"))) || !unk_0x300D614A4C785FC4(68, "BB_Chase")) || !unk_0x300D614A4C785FC4(69, "BB_Chase")) || !unk_0xCB4E8BE8A0063C5D("Trev4_5")) || !unk_0xCA7D9B86ECA7481B()) || !unk_0xD031A9162D01088C("move_f@film_reel_arms")) || !unk_0xD031A9162D01088C("misssolomon_3"))
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_264))
			{
				bLocal_264 = unk_0xD49F9B0955C367DE(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, true, true);
				unk_0x3882114BDE571AD4(bLocal_264, true);
				unk_0x63F58F7C80513AAD(bLocal_264, false);
				unk_0x9F8AA94D6D97DBF4(bLocal_264, true);
				unk_0xE532F5D78798DAAB(joaat("ig_molly"));
				unk_0x0DC7CABAB1E9B67E(bLocal_264, true, 1);
				unk_0xC80A74AC829DDD92(bLocal_264, joaat("player"));
			}
			bLocal_295 = unk_0x509D5878EB39E842(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
			unk_0x6B9BBD38AB0796DF(bLocal_295, bLocal_264, unk_0x3F428D08BE5AAE31(bLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			if (!unk_0x7239B21A38F536BA(bLocal_284))
			{
				bLocal_284 = unk_0xAF35D0D2583051B0(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x60BF608F1B8CD1B6(bLocal_284, 2);
				unk_0x31B927BBC44156CD(bLocal_284, false);
				unk_0x428CA6DBD1094446(bLocal_284, true);
				unk_0xFAEE099C6F890BB8(bLocal_284, true, true, true, true, true, false, false, false);
				unk_0xE532F5D78798DAAB(joaat("jet"));
				unk_0x5927F96A78577363(bLocal_284, 500);
			}
			if (func_23())
			{
				if (func_196())
				{
					func_143();
					while (!func_128())
					{
						unk_0x4EDE34FBADD967A6(false);
					}
				}
				if (!unk_0x7239B21A38F536BA(bLocal_279))
				{
					if (func_196())
					{
						bLocal_279 = func_145(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x3910051CCECDB00C(bLocal_279, true);
						unk_0xE532F5D78798DAAB(func_195());
						unk_0x92F0CF722BC4202F(bLocal_279, true);
					}
					else
					{
						bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
						unk_0x3910051CCECDB00C(bLocal_279, true);
						unk_0xE532F5D78798DAAB(joaat("rapidgt"));
						unk_0x92F0CF722BC4202F(bLocal_279, true);
					}
				}
			}
			else if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
				unk_0xE532F5D78798DAAB(joaat("rapidgt"));
				unk_0x3910051CCECDB00C(bLocal_279, true);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_278))
			{
				bLocal_278 = unk_0xAF35D0D2583051B0(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_278, 27, 27);
				unk_0xE532F5D78798DAAB(joaat("cogcabrio"));
			}
			if (!unk_0x7239B21A38F536BA(iLocal_281))
			{
				bLocal_281 = unk_0xAF35D0D2583051B0(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_272))
			{
				bLocal_272 = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, true, true);
				unk_0xBF0FD6E56C964FCB(bLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_127(bLocal_272, 0);
				unk_0xE532F5D78798DAAB(joaat("s_m_y_cop_01"));
			}
			unk_0xC1B1E9A034A63A62(false);
			func_126(2, 1);
			iLocal_358 = 1;
			break;
		
		case 8:
			unk_0xA56F01F3765B93A0(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			unk_0xC1B1E9A034A63A62(false);
			iLocal_350 = 0;
			iLocal_358 = 0;
			iLocal_337 = 0;
			unk_0x963D27A58DF860AC(joaat("jet"));
			unk_0x963D27A58DF860AC(joaat("s_m_y_airworker"));
			unk_0x963D27A58DF860AC(joaat("shamal"));
			unk_0x963D27A58DF860AC(joaat("s_m_y_cop_01"));
			unk_0x963D27A58DF860AC(joaat("police3"));
			unk_0x963D27A58DF860AC(joaat("cogcabrio"));
			unk_0x963D27A58DF860AC(joaat("rapidgt"));
			unk_0x963D27A58DF860AC(joaat("prop_jet_bloodsplat_01"));
			unk_0xAF514CABE74CBF15(68, "BB_Chase");
			unk_0xAF514CABE74CBF15(69, "BB_Chase");
			unk_0x944955FB2A3935C8();
			while ((((((((((!unk_0x98A4EB5D89A0C952(joaat("jet")) || !unk_0x98A4EB5D89A0C952(joaat("s_m_y_airworker"))) || !unk_0x98A4EB5D89A0C952(joaat("shamal"))) || !unk_0x98A4EB5D89A0C952(joaat("s_m_y_cop_01"))) || !unk_0x98A4EB5D89A0C952(joaat("police3"))) || !unk_0x98A4EB5D89A0C952(joaat("cogcabrio"))) || !unk_0x98A4EB5D89A0C952(joaat("rapidgt"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_jet_bloodsplat_01"))) || !unk_0x300D614A4C785FC4(68, "BB_Chase")) || !unk_0x300D614A4C785FC4(69, "BB_Chase")) || !unk_0xCA7D9B86ECA7481B())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			func_125();
			if (func_23())
			{
				if (func_196())
				{
					func_143();
					while (!func_128())
					{
						unk_0x4EDE34FBADD967A6(false);
					}
				}
				if (!unk_0x7239B21A38F536BA(bLocal_279))
				{
					if (func_196())
					{
						bLocal_279 = func_145(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x3910051CCECDB00C(bLocal_279, true);
						unk_0xE532F5D78798DAAB(func_195());
						unk_0x92F0CF722BC4202F(bLocal_279, true);
					}
					else
					{
						bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
						unk_0x3910051CCECDB00C(bLocal_279, true);
						unk_0xE532F5D78798DAAB(joaat("rapidgt"));
						unk_0x92F0CF722BC4202F(bLocal_279, true);
					}
				}
			}
			else if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
				unk_0xE532F5D78798DAAB(joaat("rapidgt"));
				unk_0x3910051CCECDB00C(bLocal_279, true);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_278))
			{
				bLocal_278 = unk_0xAF35D0D2583051B0(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_278, 27, 27);
				unk_0xE532F5D78798DAAB(joaat("cogcabrio"));
			}
			if (!unk_0x7239B21A38F536BA(bLocal_281))
			{
				bLocal_281 = unk_0xAF35D0D2583051B0(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_272))
			{
				bLocal_272 = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, true, true);
				unk_0xBF0FD6E56C964FCB(bLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_127(bLocal_272, 0);
				unk_0xE532F5D78798DAAB(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x7239B21A38F536BA(bLocal_294))
			{
				bLocal_294 = unk_0x509D5878EB39E842(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
				unk_0x8524A8B0171D5E07(bLocal_294, 0f, 0f, -121.5948f, 2, true);
				unk_0x77B21BE7AC540F07(bLocal_294, 0f, 0f, 0.8729f, -0.4879f);
				unk_0xE532F5D78798DAAB(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x7239B21A38F536BA(bLocal_284))
			{
				bLocal_284 = unk_0xAF35D0D2583051B0(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x60BF608F1B8CD1B6(bLocal_284, 2);
				unk_0x31B927BBC44156CD(bLocal_284, false);
				unk_0x428CA6DBD1094446(bLocal_284, true);
				unk_0xFAEE099C6F890BB8(bLocal_284, true, true, true, true, true, false, false, false);
				unk_0xE532F5D78798DAAB(joaat("jet"));
				iLocal_672 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_damage", bLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
				unk_0x5927F96A78577363(bLocal_284, 500);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_266))
			{
				bLocal_266 = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, true, true);
				func_17(&uLocal_490, 4, bLocal_266, "HangerWorker", 0, 1);
				unk_0xE532F5D78798DAAB(joaat("s_m_y_airworker"));
				unk_0x63F58F7C80513AAD(bLocal_266, true);
				unk_0x9F8AA94D6D97DBF4(bLocal_266, true);
				unk_0x22B0D0E37CCB840D(bLocal_266, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
				unk_0x971D38760FBC02EF(bLocal_266, true);
				unk_0xFAEE099C6F890BB8(bLocal_266, false, false, false, false, false, false, false, false);
				unk_0x2595DD4236549CE3(&bLocal_266);
			}
			if (func_124(0) == 0 || func_124(0) == joaat("weapon_unarmed"))
			{
				func_123(1);
			}
			break;
	}
}

void func_123(bool bParam0)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		bVar0 = unk_0x8483E98E8B888AE2(unk_0xD80958FC74E988A6(), false);
		if (bVar0 != joaat("weapon_unarmed"))
		{
			unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), bVar0, bParam0);
		}
	}
}

int func_124(int iParam0)
{
	if (Global_100478 > 0)
	{
		return Global_106934.f_21[iParam0];
	}
	return Global_103950.f_21[iParam0];
}

void func_125()
{
	if (iLocal_337 == 0)
	{
		if (!unk_0x7239B21A38F536BA(iLocal_286[0]))
		{
			iLocal_286[0] = unk_0xAF35D0D2583051B0(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, true, true, false);
			unk_0x428BACCDF5E26EAD(iLocal_286[0], false);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[0]))
		{
			bLocal_268[0] = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[0], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[0], true, 1);
			unk_0x9B53BB6E8943AF53(bLocal_268[0], unk_0xD80958FC74E988A6(), -1, true);
			func_127(bLocal_268[0], 0);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_285))
		{
			bLocal_285 = unk_0xAF35D0D2583051B0(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
			unk_0x49733E92263139D1(bLocal_285, 5f);
			unk_0xE532F5D78798DAAB(joaat("shamal"));
			unk_0x6B76DC1F3AE6E6A3(bLocal_285, 2000, false);
			unk_0x7C65DAC73C35C862(bLocal_285, false, false, true);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[6]))
		{
			bLocal_268[6] = unk_0x7DD959874C1FD534(iLocal_286[0], 6, joaat("s_m_y_cop_01"), false, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[6], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[6], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[6], true, 1);
			unk_0x9F8AA94D6D97DBF4(bLocal_268[6], true);
			func_127(bLocal_268[6], 0);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[7]))
		{
			bLocal_268[7] = unk_0x7DD959874C1FD534(iLocal_286[0], 6, joaat("s_m_y_cop_01"), -1, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[7], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[7], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[7], true, 1);
			unk_0x9F8AA94D6D97DBF4(bLocal_268[7], true);
			func_127(bLocal_268[7], 0);
		}
		if (!unk_0x7239B21A38F536BA(iLocal_286[1]))
		{
			iLocal_286[1] = unk_0xAF35D0D2583051B0(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, true, true, false);
			unk_0x428BACCDF5E26EAD(iLocal_286[1], false);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[8]))
		{
			bLocal_268[8] = unk_0x7DD959874C1FD534(iLocal_286[1], 6, joaat("s_m_y_cop_01"), false, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[8], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[8], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[8], true, 1);
			unk_0x9F8AA94D6D97DBF4(bLocal_268[8], true);
			func_127(bLocal_268[8], 0);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[9]))
		{
			bLocal_268[9] = unk_0x7DD959874C1FD534(iLocal_286[1], 6, joaat("s_m_y_cop_01"), -1, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[9], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[9], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[9], true, 1);
			unk_0x9F8AA94D6D97DBF4(bLocal_268[9], true);
			func_127(bLocal_268[9], 0);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[10]))
		{
			bLocal_268[10] = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, true, true);
			unk_0xBF0FD6E56C964FCB(bLocal_268[10], joaat("weapon_pistol"), 1000, true, true);
			unk_0x7AEFB85C1D49DEB6(bLocal_268[10], 20);
			unk_0x0DC7CABAB1E9B67E(bLocal_268[10], true, 1);
			unk_0x9F8AA94D6D97DBF4(bLocal_268[10], true);
			func_127(bLocal_268[10], 0);
			unk_0x030983CA930B692D(bLocal_268[10], true);
		}
		iLocal_337 = 1;
	}
}

void func_126(bool bParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&Global_32118, bParam0);
	StringCopy(&(Global_32119[bParam0 /*6*/]), unk_0x442E0A7EDE4A738A(), 24);
	Global_32174[bParam0] = iParam1;
}

void func_127(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63184[iVar0 /*2*/] != 0)
			{
				if (Global_63184[iVar0 /*2*/] == bParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63183)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63184[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63184[iVar1 /*2*/] = bParam0;
	Global_63184[iVar1 /*2*/].f_1 = 7;
	Global_63183++;
}

bool func_128()
{
	return func_129(&(Global_106934.f_2890));
}

int func_129(var uParam0)
{
	if (func_130(uParam0))
	{
		if (unk_0x98A4EB5D89A0C952(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_130(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_132(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_131(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_131(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1)
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
		if (!func_142())
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
		if ((((!func_141() && !func_140()) && !func_139()) && !func_138()) && !func_142())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_137() || unk_0x48AF36444B965238()) || func_136())
		{
		}
		else if (!func_139())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_135(bParam0))
		{
			return 0;
		}
	}
	if (!func_133(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_133(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
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

int func_134()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_135(bool bParam0)
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

bool func_136()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_137()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_138()
{
	return 0;
}

int func_139()
{
	return 1;
}

int func_140()
{
	return 1;
}

int func_141()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_142()
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

void func_143()
{
	func_144(&(Global_106934.f_2890));
}

void func_144(var uParam0)
{
	if (func_130(uParam0))
	{
		unk_0x963D27A58DF860AC(uParam0->f_12.f_66);
	}
}

bool func_145(struct<3> Param0, bool bParam1)
{
	return func_146(&(Global_106934.f_2890), Param0, bParam1, 0);
}

bool func_146(var uParam0, struct<3> Param1, bool bParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_130(uParam0))
	{
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			bParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x2A70BAE8883E4C81(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				bParam2 = 89.5f;
			}
		}
		if (func_129(uParam0))
		{
			unk_0xA56F01F3765B93A0(Param1, 5f, true, false, false, false);
			func_194(Param1, 5f, 0);
			bVar0 = unk_0xAF35D0D2583051B0(uParam0->f_12.f_66, Param1, bParam2, true, true, false);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				Var1 = { unk_0x3FEF770D40960D5A(bVar0, true) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x239A3351AC1DA385(bVar0, Param1, false, false, true);
				}
				func_167(bVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x45A9187928F4B9E3(uParam0->f_12.f_66) || unk_0x9537097412CF75FE(uParam0->f_12.f_66))
				{
					if (!unk_0xFFA5D878809819DB(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x49733E92263139D1(bVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bVar0)))
						{
							func_166(uParam0->f_11, 1);
						}
						else if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bVar0)))
						{
							func_166(uParam0->f_11, 2);
						}
					}
					unk_0xAB04325045427AAE(bVar0, false);
					unk_0x428BACCDF5E26EAD(bVar0, false);
					unk_0x92F0CF722BC4202F(bVar0, true);
					func_165(bVar0, uParam0->f_11);
				}
				else if ((!func_163(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x0C515FAB3FF9EA92(unk_0x442E0A7EDE4A738A(), "startup_positioning"))
				{
					iVar4 = func_162(bVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_157(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (unk_0xD24D37CC275948CC(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_154(24, 0);
							func_157(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_147(bVar0, uParam0->f_11);
				}
				unk_0xE532F5D78798DAAB(uParam0->f_12.f_66);
				Var1 = { unk_0x3FEF770D40960D5A(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

void func_147(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_148(bParam0))
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
	func_39(bParam0, &(Global_113386.f_32749.f_5510));
}

int func_148(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_45(bParam0, 0, 0)) || func_45(bParam0, 1, 0)) || func_45(bParam0, 2, 0)) || func_34(bParam0) != 145) || func_153(bParam0)) || func_152(bParam0)) || func_151(bParam0)) || func_150(bParam0)) || !func_149(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_152(bParam0))
		{
		}
		if (func_152(bParam0))
		{
		}
		if (func_45(bParam0, 0, 0))
		{
		}
		if (func_45(bParam0, 1, 0))
		{
		}
		if (func_45(bParam0, 2, 0))
		{
		}
		if (func_34(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_149(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_132(bParam0, 0))
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

int func_150(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_132(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_151(bool bParam0)
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

int func_152(bool bParam0)
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

int func_153(bool bParam0)
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

void func_154(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_156(iParam0, 0))
		{
			func_155(iParam0, 1, 0);
			func_155(iParam0, 2, 0);
			func_155(iParam0, 3, 0);
			func_155(iParam0, 4, 0);
			func_155(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_155(iParam0, 0, 0);
	}
}

void func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_156(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_157(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_161(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x4C241E39B23DF959(Global_77137.f_139[iParam0], false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
				unk_0xEA386986E786A54F(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_156(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_159(0, Global_77137.f_555[0 /*21*/].f_12) || !func_159(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_158(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_154(iParam0, 0);
		}
	}
}

void func_158(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_160(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_132(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_160(var uParam0)
{
	return *uParam0;
}

int func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_142())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), true);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_142())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), true);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_71(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_71(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_71(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_162(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]) && !unk_0x5F9532F3B5CC2551(Global_77137.f_484[iVar0], false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[iVar0], false))
		{
			unk_0xA19435F193E081AC(bParam0, &iVar1, &iVar2);
			unk_0xA19435F193E081AC(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x9F47B058362C84B5(bParam0) == unk_0x9F47B058362C84B5(Global_77137.f_484[iVar0]) && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_163(bool bParam0, struct<3> Param1, bool bParam2)
{
	bool bVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	switch (bVar0)
	{
		case joaat("cargobob"):
			if (func_164(bParam0, Global_77137.f_139[38], 0))
			{
				func_157(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_164(bParam0, Global_77137.f_139[43], 1))
			{
				func_157(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xCFF869CBFA210D82(unk_0xD80958FC74E988A6(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_164(bParam0, uVar1[iVar3], 1) && func_131(unk_0x3FEF770D40960D5A(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_71(Param1, 0f, 0f, 0f, 0)) || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(uVar1[iVar3], true), true) < 10f)
					{
						unk_0xEA386986E786A54F(&bParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x7239B21A38F536BA(Global_77137.f_484[14]) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[14], false))
			{
				if (unk_0x9F47B058362C84B5(Global_77137.f_484[14]) == joaat("luxor2") && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[14]))
				{
					func_157(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x7239B21A38F536BA(Global_77137.f_484[20]) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[20], false))
			{
				if (unk_0x9F47B058362C84B5(Global_77137.f_484[20]) == joaat("swift2") && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[20]))
				{
					func_157(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x7239B21A38F536BA(bParam1) && !unk_0x5F9532F3B5CC2551(bParam1, false)) && unk_0x4C241E39B23DF959(bParam1, false))
	{
		if (bParam2)
		{
			unk_0xA19435F193E081AC(bParam0, &iVar0, &iVar1);
			unk_0xA19435F193E081AC(bParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_165(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = bParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = unk_0x9F47B058362C84B5(bParam0);
			if (unk_0x7F6DB52EEFC96DF8(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x9F47B058362C84B5(Global_97772[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_97772[iVar0], false))
					{
						unk_0xAD738C3085FE7E11(Global_97772[iVar0], false, true);
						unk_0xEA386986E786A54F(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_167(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_186(bParam0))
		{
			if (unk_0xD24D37CC275948CC(&(uParam1->f_1)) != 0)
			{
				unk_0x95A88F0B409CDA47(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x4C4D6B2644F458CB())
			{
				unk_0x9088EB5A43FFB0A1(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_40(4)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x772960298DA26FDB(bParam0, 10) != 0)
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_40(iVar5)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_40(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x1087BC8EC540DAEB(bParam0, false);
			if (unk_0x772960298DA26FDB(bParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(bParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x7141766F91D15BEA(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x55E1D2758F34E437(bParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x36CED73BFED89754(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x5FFBDEEC3E8E2009(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_184(uParam1->f_5) || func_184(uParam1->f_6))
			{
			}
			else
			{
				unk_0x4F1D4BE3A7F24601(bParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x2036F561ADD12E33(bParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_183(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_182())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xB5BA80F839791C0F(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0x57C51E6BAD752696(bParam0, 0);
		}
		else
		{
			unk_0x57C51E6BAD752696(bParam0, 0);
			unk_0x57C51E6BAD752696(bParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0xEB9DC3C7D8596C46(bParam0, false);
			unk_0x5AC79C98C5C17F05(bParam0, false);
		}
		if (bParam2)
		{
			unk_0xB664292EAECF7FA6(bParam0, uParam1->f_70);
		}
		unk_0x8E0A582209A62695(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2AA720E4287BF269(bParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0x2AA720E4287BF269(bParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0x2AA720E4287BF269(bParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0x2AA720E4287BF269(bParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0x67B2C79AA7FF5738(bParam0, BitTest(uParam1->f_77, 10));
		if (unk_0x87B63E25A529D526(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x60BF608F1B8CD1B6(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(bParam0)))
			{
				if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_181(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_181(bParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8F5FB35D7E88FC70(bParam0, true);
			}
			else
			{
				unk_0xDED51F703D0FA83D(bParam0, true);
			}
		}
		if (bParam3)
		{
			func_174(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDCE4334788AF94EA(uParam1->f_66) && !unk_0x45A9187928F4B9E3(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_40(iVar6 + 1)))
				{
					if (!unk_0xD2E6822DBFD6C8BD(bParam0, iVar6 + 1))
					{
						unk_0x7EE3A3C5E4A40CC9(bParam0, iVar6 + 1, false);
					}
				}
				else if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar6 + 1))
				{
					unk_0x7EE3A3C5E4A40CC9(bParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((unk_0x9F47B058362C84B5(bParam0) == joaat("sheava") || unk_0x9F47B058362C84B5(bParam0) == joaat("omnis")) || unk_0x9F47B058362C84B5(bParam0) == joaat("le7b"))
		{
			if (unk_0x772960298DA26FDB(bParam0, false) == -1)
			{
				unk_0x7EE3A3C5E4A40CC9(bParam0, true, false);
			}
		}
		if (((func_168() && unk_0xA0948AB42D7BA0DE(uParam1->f_66)) && unk_0xE43701C36CAFF1A4(bParam0)) && !unk_0x423E8DE37D934D89(bParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0xCFC8BE9A5E1FE575(bParam0, 2);
				}
				else
				{
					unk_0xCFC8BE9A5E1FE575(bParam0, 3);
				}
			}
			else
			{
				unk_0xCFC8BE9A5E1FE575(bParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0x6B1E8E2ED1335B71(bParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			unk_0x6B1E8E2ED1335B71(bParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_168()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_172(7))
	{
		if (func_170(Global_2703735.f_4.f_16) || func_169(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_169(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_170(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_171(iParam0, 9);
	}
	return 0;
}

var func_171(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_172(int iParam0)
{
	return func_173(&(Global_2703735.f_169), iParam0);
}

var func_173(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_174(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
	{
		return 0;
	}
	unk_0x1F2AA07F00B3217A(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		bVar1 = iVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, (*uParam1)[iVar0] > 0);
		}
		else if (bVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*bParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, false);
			}
		}
		else if (unk_0x772960298DA26FDB(*bParam0, bVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x92D619E420858204(*bParam0, bVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (bVar1 == 23)
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (bVar1 == 24)
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_179(*bParam0, bVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_178(unk_0x9F47B058362C84B5(*bParam0), 1) && unk_0x772960298DA26FDB(*bParam0, 24) != func_177(*bParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6AF0636DDEDCB6DD(*bParam0, 24, func_177(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_176(bParam0);
	if (func_175(*bParam0))
	{
		unk_0x3E8C8727991A8A0B(*bParam0, true);
		unk_0x92F0CF722BC4202F(*bParam0, true);
	}
	return 1;
}

int func_175(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[32];
	
	if ((unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
	{
		unk_0x1F2AA07F00B3217A(bParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			bVar1 = iVar0;
			if (((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21) || bVar1 == 22)
			{
			}
			else if (unk_0x772960298DA26FDB(bParam0, bVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x8935624F8C5592CC(bParam0, bVar1, unk_0x772960298DA26FDB(bParam0, bVar1)), 32);
				bVar2 = unk_0xD24D37CC275948CC(&cVar3);
				if (bVar2 != 0)
				{
					if (bVar2 == unk_0xD24D37CC275948CC("MNU_CAGE") || bVar2 == unk_0xD24D37CC275948CC("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_176(var uParam0)
{
	switch (unk_0x9F47B058362C84B5(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x772960298DA26FDB(*uParam0, 4) == 0)
			{
				unk_0x6AF0636DDEDCB6DD(*uParam0, 13, false, false);
			}
			else
			{
				unk_0x92D619E420858204(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6AF0636DDEDCB6DD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_177(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x9F47B058362C84B5(bParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		bVar0 = unk_0xE38E9162A2500646(bParam0, 38);
		bVar1 = unk_0xE38E9162A2500646(bParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(bVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= bVar0)
		{
			iVar3 = (bVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_178(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_180() && unk_0x00834EAC4A96E010(bParam0, bParam1, bParam2))
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	return 0;
}

void func_181(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
	{
		unk_0x1F2AA07F00B3217A(bParam0, 0);
		bVar0 = unk_0x772960298DA26FDB(bParam0, 24);
		bVar1 = unk_0xB3924ECD70E095DC(bParam0, 24);
		unk_0x487EB21CC7295BA1(bParam0, iParam1);
		if (unk_0x9F47B058362C84B5(bParam0) == joaat("tornado6") || unk_0x9F47B058362C84B5(bParam0) == joaat("peyote2"))
		{
			return;
		}
		if (bVar0 == -1)
		{
			unk_0x92D619E420858204(bParam0, 24);
		}
		else
		{
			unk_0x6AF0636DDEDCB6DD(bParam0, 24, bVar0, bVar1 == 1);
		}
	}
}

bool func_182()
{
	return unk_0x812595A0644CE1DE(joaat("mpindependence"));
}

int func_183(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0x4F14F9F870D6FBC8("MPBitset", 3))
			{
				if (unk_0x05661B80A8C9165F(bParam0, "MPBitset"))
				{
					iVar0 = unk_0xA06C969B02A97298(bParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	if (!func_180() && func_185(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_186(bool bParam0)
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!func_192(unk_0x4F8644AF03D0E0D6(), -1))
		{
			bParam0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
	}
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	if (func_188(unk_0x4F8644AF03D0E0D6()) == 3)
	{
		if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (func_187(bParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_187(bool bParam0)
{
	if (unk_0x4F14F9F870D6FBC8("FMDeliverableID", 3))
	{
		if (unk_0x05661B80A8C9165F(bParam0, "FMDeliverableID"))
		{
			return unk_0xA06C969B02A97298(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_188(bool bParam0)
{
	if (func_191(bParam0) == 233)
	{
		return func_189(bParam0);
	}
	return -1;
}

int func_189(int iParam0)
{
	if (func_190(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_190(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (func_190(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_192(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (func_193(bParam0, 1, 1))
	{
		if (unk_0x997ABD671D25CA0B(unk_0x43A66C31C68491C0(bParam0), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0x43A66C31C68491C0(bParam0), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0xD80958FC74E988A6() == unk_0xBB40DD2270B65366(bVar0, bParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_193(bool bParam0, bool bParam1, bool bParam2)
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

void func_194(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_161(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF1B760881820C952(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_157(iVar0);
			}
		}
		iVar0++;
	}
}

var func_195()
{
	return Global_106934.f_2890.f_12.f_66;
}

bool func_196()
{
	return func_130(&(Global_106934.f_2890));
}

void func_197()
{
	iLocal_305 = unk_0x11FE353CF9733E6F("BREAKING_NEWS");
	unk_0x963D27A58DF860AC(joaat("jet"));
	unk_0x963D27A58DF860AC(joaat("police3"));
	unk_0x963D27A58DF860AC(joaat("maverick"));
	unk_0x963D27A58DF860AC(joaat("bison"));
	unk_0x963D27A58DF860AC(joaat("blista"));
	unk_0x963D27A58DF860AC(joaat("ig_molly"));
	unk_0x963D27A58DF860AC(joaat("cogcabrio"));
	unk_0x963D27A58DF860AC(joaat("rapidgt"));
	unk_0xAF514CABE74CBF15(45, "BB_Chase");
	unk_0xAF514CABE74CBF15(35, "BB_Chase");
	unk_0xAF514CABE74CBF15(2, "BB_Chase");
	unk_0xAF514CABE74CBF15(54, "BB_Chase");
	unk_0xAF514CABE74CBF15(55, "BB_Chase");
	unk_0xAF514CABE74CBF15(67, "BB_Chase");
	func_199(1, "BB_Chase");
	if (func_23())
	{
		if (func_196())
		{
			if (!unk_0xDCE4334788AF94EA(func_195()) && !unk_0xA0948AB42D7BA0DE(func_195()))
			{
				func_143();
				while (!func_128())
				{
					unk_0x4EDE34FBADD967A6(false);
				}
			}
		}
	}
	while (((((((!unk_0x98A4EB5D89A0C952(joaat("jet")) || !unk_0x98A4EB5D89A0C952(joaat("police3"))) || !unk_0x98A4EB5D89A0C952(joaat("maverick"))) || !unk_0x98A4EB5D89A0C952(joaat("bison"))) || !unk_0x98A4EB5D89A0C952(joaat("blista"))) || !unk_0x98A4EB5D89A0C952(joaat("ig_molly"))) || !unk_0x98A4EB5D89A0C952(joaat("cogcabrio"))) || !unk_0x98A4EB5D89A0C952(joaat("rapidgt")))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (!unk_0x85F01B8D5B90570E(iLocal_305) || !func_198(1, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (((((!unk_0x300D614A4C785FC4(45, "BB_Chase") || !unk_0x300D614A4C785FC4(35, "BB_Chase")) || !unk_0x300D614A4C785FC4(2, "BB_Chase")) || !unk_0x300D614A4C785FC4(54, "BB_Chase")) || !unk_0x300D614A4C785FC4(55, "BB_Chase")) || !unk_0x300D614A4C785FC4(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
}

bool func_198(bool bParam0, bool bParam1)
{
	return unk_0x300D614A4C785FC4(bParam0, bParam1);
}

void func_199(bool bParam0, bool bParam1)
{
	unk_0xAF514CABE74CBF15(bParam0, bParam1);
}

void func_200()
{
	func_226();
	func_224();
	unk_0xCC33FA791322B9D9();
	unk_0xC5F0A8EBD3F361CE(0);
	unk_0x72751156E7678833(false);
	unk_0x51669F7D1FB53D9F(true);
	if (unk_0xC153C43EA202C8C1(bLocal_262))
	{
		unk_0x464D8E1427156FE4(bLocal_262, 0);
	}
	if (unk_0x0EAEB0DB4B132399(iLocal_263))
	{
		unk_0x46399A7895957C0E(iLocal_263);
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1019.579f, -484.872f, 36.0795f, true, false, false, true);
		unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 93.7701f);
	}
	if (unk_0x7239B21A38F536BA(bLocal_279))
	{
		if (unk_0x4C241E39B23DF959(bLocal_279, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bLocal_279))
			{
				unk_0x54833611C17ABDEA(bLocal_279);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_278))
	{
		if (unk_0x4C241E39B23DF959(bLocal_278, false))
		{
			unk_0x18EB48CFC41F2EA0(bLocal_278, 0f);
			if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
			{
				unk_0x54833611C17ABDEA(bLocal_278);
			}
		}
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_668))
	{
		unk_0x8F75998877616996(iLocal_668, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_669))
	{
		unk_0x8F75998877616996(iLocal_669, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_670))
	{
		unk_0x8F75998877616996(iLocal_670, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_671))
	{
		unk_0x8F75998877616996(iLocal_671, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_672))
	{
		unk_0x8F75998877616996(iLocal_672, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[0]))
	{
		unk_0x8F75998877616996(iLocal_667[0], false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[1]))
	{
		unk_0x8F75998877616996(iLocal_667[1], false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[2]))
	{
		unk_0x8F75998877616996(iLocal_667[2], false);
	}
	unk_0x88C6814073DD4A73();
	if (unk_0x7239B21A38F536BA(bLocal_264))
	{
		unk_0x9614299DCB53E54B(&bLocal_264);
	}
	if (unk_0x7239B21A38F536BA(bLocal_266))
	{
		unk_0x9614299DCB53E54B(&bLocal_266);
	}
	if (unk_0x7239B21A38F536BA(bLocal_269))
	{
		unk_0x9614299DCB53E54B(&bLocal_269);
	}
	if (unk_0x7239B21A38F536BA(bLocal_270))
	{
		unk_0x9614299DCB53E54B(&bLocal_270);
	}
	if (unk_0x7239B21A38F536BA(bLocal_271))
	{
		unk_0x9614299DCB53E54B(&bLocal_271);
	}
	if (unk_0x7239B21A38F536BA(bLocal_272))
	{
		unk_0x9614299DCB53E54B(&bLocal_272);
	}
	if (unk_0x7239B21A38F536BA(bLocal_273))
	{
		unk_0x9614299DCB53E54B(&bLocal_273);
	}
	if (unk_0x7239B21A38F536BA(bLocal_274))
	{
		unk_0x9614299DCB53E54B(&bLocal_274);
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[0]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_265[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[1]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_265[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[2]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_265[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[3]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_265[3]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[0]))
	{
		unk_0x9614299DCB53E54B(&(uLocal_267[0]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[1]))
	{
		unk_0x9614299DCB53E54B(&(uLocal_267[1]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[2]))
	{
		unk_0x9614299DCB53E54B(&(uLocal_267[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[0]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[1]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[2]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[3]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[3]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[4]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[4]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[5]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[5]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[6]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[6]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[7]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[7]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[8]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[8]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[9]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[9]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[10]))
	{
		unk_0x9614299DCB53E54B(&(bLocal_268[10]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_275[0]))
	{
		unk_0x9614299DCB53E54B(&(iLocal_275[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_276[0]))
	{
		unk_0x9614299DCB53E54B(&(iLocal_276[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_276[1]))
	{
		unk_0x9614299DCB53E54B(&(iLocal_276[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_278))
	{
		unk_0xEA386986E786A54F(&bLocal_278);
	}
	if (unk_0x7239B21A38F536BA(bLocal_279))
	{
		if (!unk_0x0A7B270912999B3C(bLocal_279))
		{
			unk_0xAD738C3085FE7E11(bLocal_279, true, false);
		}
		unk_0xEA386986E786A54F(&bLocal_279);
	}
	if (unk_0x7239B21A38F536BA(bLocal_282))
	{
		unk_0xEA386986E786A54F(&bLocal_282);
	}
	if (unk_0x7239B21A38F536BA(bLocal_283))
	{
		unk_0xEA386986E786A54F(&bLocal_283);
	}
	if (unk_0x7239B21A38F536BA(bLocal_284))
	{
		unk_0xEA386986E786A54F(&bLocal_284);
	}
	if (unk_0x7239B21A38F536BA(bLocal_285))
	{
		unk_0xEA386986E786A54F(&bLocal_285);
	}
	if (unk_0x7239B21A38F536BA(bLocal_287))
	{
		unk_0xEA386986E786A54F(&bLocal_287);
	}
	if (unk_0x7239B21A38F536BA(bLocal_289))
	{
		unk_0xEA386986E786A54F(&bLocal_289);
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[0]))
	{
		unk_0xEA386986E786A54F(&(iLocal_293[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[1]))
	{
		unk_0xEA386986E786A54F(&(iLocal_293[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[0]))
	{
		unk_0xEA386986E786A54F(&(iLocal_280[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[1]))
	{
		unk_0xEA386986E786A54F(&(iLocal_280[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[0]))
	{
		unk_0xEA386986E786A54F(&(iLocal_293[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[1]))
	{
		unk_0xEA386986E786A54F(&(iLocal_293[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_286[0]))
	{
		unk_0xEA386986E786A54F(&(iLocal_286[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_286[1]))
	{
		unk_0xEA386986E786A54F(&(iLocal_286[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_288[0]))
	{
		unk_0xEA386986E786A54F(&(iLocal_288[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_281))
	{
		unk_0xEA386986E786A54F(&bLocal_281);
	}
	if (unk_0x7239B21A38F536BA(bLocal_294))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_294);
	}
	if (unk_0x7239B21A38F536BA(bLocal_295))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_295);
	}
	if (unk_0x7239B21A38F536BA(bLocal_296))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_296);
	}
	unk_0x7A2D8AD0A9EB9C3F();
	if (unk_0xB65B60556E2A9225("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_MAIN_CHASE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_MAIN_CHASE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_CHOPPER_CAM"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_CHOPPER_CAM");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0xB65B60556E2A9225("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xDFE8422B3B94E688("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0xA3B0C41BA5CC0BB5(iLocal_253);
	unk_0xA3B0C41BA5CC0BB5(bLocal_255);
	unk_0xA3B0C41BA5CC0BB5(bLocal_256);
	unk_0xA3B0C41BA5CC0BB5(bLocal_257);
	unk_0xA3B0C41BA5CC0BB5(bLocal_258);
	unk_0xA3B0C41BA5CC0BB5(bLocal_259);
	unk_0xA3B0C41BA5CC0BB5(bLocal_260);
	unk_0xA3B0C41BA5CC0BB5(bLocal_261);
	unk_0xA3B0C41BA5CC0BB5(bLocal_254);
	func_222(&uLocal_28, 0, 0);
	if (unk_0xA7A932170592B50E(bLocal_301))
	{
		unk_0x865908C81A2C22E9(bLocal_301, false);
	}
	if (unk_0xA7A932170592B50E(bLocal_302))
	{
		unk_0x865908C81A2C22E9(bLocal_302, false);
	}
	if (unk_0xA7A932170592B50E(bLocal_303))
	{
		unk_0x865908C81A2C22E9(bLocal_303, false);
	}
	func_201(1, 1);
	unk_0xF66A602F829E2A06("misssolomon_3");
	unk_0xF66A602F829E2A06("amb@world_human_clipboard@male@base");
	unk_0xF66A602F829E2A06("missheist_agency3aig_lift_waitped_a");
	unk_0xF1160ACCF98A3FC8(true, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(2, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(9, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(35, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(45, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(54, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(55, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(61, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(63, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(64, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(67, "BB_Chase");
	unk_0xF1160ACCF98A3FC8(68, "BB_CHASE");
	unk_0xF1160ACCF98A3FC8(69, "BB_Chase");
	unk_0x1D132D614DD86811(&iLocal_305);
	unk_0xBE2CACCF5A8AA805("digitalOverlay");
}

void func_201(bool bParam0, bool bParam1)
{
	if (!unk_0xCA042B6957743895(&cLocal_185))
	{
		iLocal_91 = 0;
		func_221();
		unk_0xB6BA2444AB393DA2(iLocal_194);
		unk_0x1EE7063B80FFC77C(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xCA7DC8329F0A1E9E(unk_0x4F8644AF03D0E0D6(), 1f);
			unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
			unk_0x102E68B2024D536D(true);
		}
		if (bLocal_107)
		{
			unk_0xE532F5D78798DAAB(func_220());
		}
		unk_0xE532F5D78798DAAB(func_219());
		unk_0xE532F5D78798DAAB(func_218());
		unk_0xE532F5D78798DAAB(func_217());
		if (!unk_0xB16FCE9DDC7BA182() && !bParam0)
		{
			func_216();
			func_215();
			func_212();
		}
		else
		{
			func_208();
			func_207();
		}
		if (bParam1)
		{
			func_202(0);
		}
	}
}

void func_202(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_203(iVar0, bParam0);
		iVar0++;
	}
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_206(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_204(iParam0, 2, 1);
	}
}

void func_204(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			bVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_205(func_75(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_205(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

void func_206(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			bVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_205(func_75(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_207()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_201[iVar0] = 0;
		Local_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_202[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_203[iVar0] = 0;
		Local_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iLocal_158 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_204[iVar0] = 0;
		Local_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
}

void func_208()
{
	func_211();
	func_210();
	func_209();
}

void func_209()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[iVar0]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_204[iVar0]))
				{
					unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
				}
				bVar1 = unk_0xBB40DD2270B65366(iLocal_204[iVar0], -1, false);
				if (unk_0x7239B21A38F536BA(bVar1) && bVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(bVar1))
					{
						unk_0x9614299DCB53E54B(&bVar1);
					}
				}
			}
			if (unk_0x0A7B270912999B3C(iLocal_204[iVar0]))
			{
				unk_0xEA386986E786A54F(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0xF1160ACCF98A3FC8(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x7239B21A38F536BA(iLocal_203[iVar0]))
		{
			if (unk_0x0A7B270912999B3C(iLocal_203[iVar0]))
			{
				unk_0xEA386986E786A54F(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_211()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x7239B21A38F536BA(iLocal_201[iVar0]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_201[iVar0], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_201[iVar0]))
				{
					unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
				}
				bVar1 = unk_0xBB40DD2270B65366(iLocal_201[iVar0], -1, false);
				if (unk_0x7239B21A38F536BA(bVar1) && bVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(bVar1))
					{
						unk_0x9614299DCB53E54B(&bVar1);
					}
				}
			}
			if (unk_0x0A7B270912999B3C(iLocal_201[iVar0]))
			{
				unk_0xEA386986E786A54F(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0xF1160ACCF98A3FC8(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_212()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[iVar0]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_204[iVar0]))
				{
					unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
				}
			}
			func_214(iLocal_204[iVar0]);
			func_213(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0xF1160ACCF98A3FC8(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0;
}

void func_213(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		unk_0x629BFA74418D6239(&bParam0);
	}
}

void func_214(bool bParam0)
{
	float fVar0;
	bool bVar1;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		bVar1 = unk_0xBB40DD2270B65366(bParam0, -1, false);
		if (!unk_0x84A2DD9AC37C35C1(bVar1))
		{
			if (!bVar1 == unk_0xD80958FC74E988A6())
			{
				fVar0 = unk_0xD5037BA82E12416F(bParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x659427E0EF36BCDE(bVar1, bParam0, false, 1, fVar0, 786603, 5f, 5f, true);
				unk_0x70A2D1137C8ED7C9(bVar1, 8192, true);
				if (bLocal_108)
				{
					unk_0x70A2D1137C8ED7C9(bVar1, 65536, true);
					unk_0x70A2D1137C8ED7C9(bVar1, 2, false);
				}
				unk_0x9F7794730795E019(bVar1, 6, false);
			}
		}
	}
}

void func_215()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x7239B21A38F536BA(iLocal_203[iVar0]))
		{
			if (!unk_0x5F9532F3B5CC2551(iLocal_203[iVar0], false))
			{
				unk_0x1A9205C1B9EE827F(iLocal_203[iVar0], true, false);
			}
			func_213(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_216()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x7239B21A38F536BA(iLocal_201[iVar0]))
		{
			if (!unk_0x5F9532F3B5CC2551(iLocal_201[iVar0], false))
			{
				unk_0x1A9205C1B9EE827F(iLocal_201[iVar0], true, false);
			}
			if (unk_0x4C241E39B23DF959(iLocal_201[iVar0], false))
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_201[iVar0]))
				{
					unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
				}
			}
			func_214(iLocal_201[iVar0]);
			func_213(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0xF1160ACCF98A3FC8(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0xE532F5D78798DAAB(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

int func_217()
{
	return joaat("s_m_y_cop_01");
}

int func_218()
{
	return joaat("police");
}

int func_219()
{
	return joaat("sultan");
}

int func_220()
{
	if (iLocal_198 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_198;
}

void func_221()
{
	unk_0x34AD89078831A4BC();
	unk_0xCAA15F13EBD417FF(-1);
	unk_0x2AFD795EEAC8D30D(true);
	unk_0x608207E7A8FB787C(true);
	unk_0x245A6883D966D537(1f);
	unk_0xCB9E1EB3BE2AF4E9(3);
	unk_0x8C95333CFC3340F3(3);
}

void func_222(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", false, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_223(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_223(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_223(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_224()
{
	Global_20471 = 0;
	func_225();
}

void func_225()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_226()
{
	Global_20471 = 0;
	func_227();
}

void func_227()
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

void func_228()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_297))
	{
		unk_0x86A652570E5F25DD(&bLocal_297);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_298))
	{
		unk_0x86A652570E5F25DD(&bLocal_298);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_299))
	{
		unk_0x86A652570E5F25DD(&bLocal_299);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_300))
	{
		unk_0x86A652570E5F25DD(&bLocal_300);
	}
}

void func_229()
{
	if (iLocal_486 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_266))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_266, unk_0xD80958FC74E988A6(), false))
				{
					iLocal_486 = 1;
				}
			}
		}
	}
	if (iLocal_486 == 0)
	{
		if (iLocal_456 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_266))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
				{
					if (unk_0x7239B21A38F536BA(bLocal_264))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
						{
							if (unk_0xE03B3F2D3DC59B64(bLocal_264))
							{
								if (unk_0x2720AAA75001E094(bLocal_264) > 18)
								{
									if (unk_0x7239B21A38F536BA(bLocal_296))
									{
										if (unk_0xB346476EF1A64897(bLocal_296))
										{
											unk_0x961AC54BF0613F5D(bLocal_296, true, true);
										}
									}
									bLocal_252 = unk_0x8C18E0F9080ADD73(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0xEEA929141F699854(bLocal_266, bLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1000f, 0);
									unk_0x69F4BE8C8CC4796C(bLocal_266, unk_0xD80958FC74E988A6(), 9000, 1024, 3);
									iLocal_456 = 1;
									iLocal_457 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 1 && iLocal_458 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_266))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
				{
					if (unk_0x25D39B935A038A26(bLocal_252))
					{
						if (!iLocal_457)
						{
							if (unk_0xE4A310B1D7FA73CC(bLocal_252) > 0.25f)
							{
								func_17(&uLocal_490, 4, bLocal_266, "HangerWorker", 0, 1);
								func_230(bLocal_266, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_457 = 1;
							}
						}
						if (unk_0xE4A310B1D7FA73CC(bLocal_252) > 0.99f)
						{
							bLocal_252 = unk_0x8C18E0F9080ADD73(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0xEEA929141F699854(bLocal_266, bLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1000f, 0);
							iLocal_458 = 1;
						}
					}
				}
			}
		}
		if (iLocal_458 == 1 && iLocal_461 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_266))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
				{
					if (unk_0x25D39B935A038A26(bLocal_252))
					{
						if (unk_0xEAF4CD9EA3E7E922(bLocal_266, unk_0xD24D37CC275948CC("ENDS_IN_RUN")))
						{
							unk_0xE8854A4326B9E12B(&iLocal_304);
							unk_0x4F056E1AFFEF17AB(0, joaat("MotionState_Sprint"), false);
							unk_0xD76B57B44F1E6F8B(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
							unk_0x39E72BC99E6360CB(iLocal_304);
							unk_0x5ABA3986D90D8A3B(bLocal_266, iLocal_304);
							unk_0x3841422E9C488D8C(&iLocal_304);
							unk_0xF28965D04F570DCA(bLocal_266, joaat("MotionState_Sprint"), false, 0, false);
							iLocal_461 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_266))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
			{
				unk_0xE8854A4326B9E12B(&iLocal_304);
				unk_0xD76B57B44F1E6F8B(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
				unk_0x39E72BC99E6360CB(iLocal_304);
				unk_0x5ABA3986D90D8A3B(bLocal_266, iLocal_304);
				unk_0x3841422E9C488D8C(&iLocal_304);
				iLocal_461 = 1;
			}
		}
	}
}

void func_230(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x3523634255FC3318(bParam0, bParam1, bParam2, func_15(iParam3), false);
}

void func_231()
{
	if (iLocal_223 == 0)
	{
		iLocal_225 = 0;
		bLocal_253 = unk_0x430386FE9BF80B45();
		unk_0x7A86743F475D9E09("TRV_4_MCS_2", 8);
		unk_0x963D27A58DF860AC(joaat("prop_jet_bloodsplat_01"));
		if (unk_0xCB4E8BE8A0063C5D("Trev4_5"))
		{
			unk_0x5A353B8E6B1095B5("Trev4_5", false, 0.5f, 1f);
		}
		if (!unk_0x5A859503B0C08678())
		{
			unk_0xD4E8E24955024033(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		switch (iLocal_225)
		{
			case 0:
				while (!unk_0xC59F528E9AB9F339())
				{
					unk_0x4EDE34FBADD967A6(false);
				}
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					unk_0xE40C1C56DF95C2E8(bLocal_264, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
				{
					unk_0xE40C1C56DF95C2E8(bLocal_266, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0x4C241E39B23DF959(bLocal_284, false))
				{
					unk_0xE40C1C56DF95C2E8(bLocal_284, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_232(1, 1, 1, 0, 0, 0, 0);
				unk_0x706D57B0F50DA710("TRV4_SUCK_CS");
				unk_0x186D5CB5E7B0FF7B(0);
				iLocal_225++;
				break;
			
			case 1:
				func_125();
				if (unk_0x4C6A6451C79E4662("JET_TRV4", joaat("jet")))
				{
					if (unk_0x4C241E39B23DF959(bLocal_284, false))
					{
						if (!unk_0x5F9532F3B5CC2551(bLocal_284, false))
						{
							unk_0x428CA6DBD1094446(bLocal_284, true);
						}
					}
				}
				if (unk_0x4C6A6451C79E4662("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
					{
						unk_0x9F8AA94D6D97DBF4(bLocal_266, true);
						unk_0x22B0D0E37CCB840D(bLocal_266, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
						unk_0x3882114BDE571AD4(bLocal_266, false);
						unk_0x63F58F7C80513AAD(bLocal_266, true);
						unk_0xFAEE099C6F890BB8(bLocal_266, false, false, false, false, false, false, false, false);
					}
				}
				if (unk_0x4C6A6451C79E4662("Michael", false))
				{
					func_125();
					func_123(1);
				}
				if (!unk_0x991251AFC3981F84())
				{
					iLocal_336 = 1;
					if (!unk_0x7239B21A38F536BA(bLocal_294))
					{
						if (unk_0x98A4EB5D89A0C952(joaat("prop_jet_bloodsplat_01")))
						{
							bLocal_294 = unk_0x509D5878EB39E842(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
							unk_0x8524A8B0171D5E07(bLocal_294, 0f, 0f, -121.5948f, 2, true);
							unk_0x77B21BE7AC540F07(bLocal_294, 0f, 0f, 0.8729f, -0.4879f);
							unk_0xE532F5D78798DAAB(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0xC61B86C9F61EB404(false);
					func_232(0, 1, 1, 0, 0, 0, 0);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					if (!unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), false, 2))
					{
						unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("weapon_smg"), 150, true, true);
					}
					iLocal_223 = 2;
				}
				break;
			}
	}
	if (iLocal_223 == 2)
	{
		iLocal_223 = 0;
		iLocal_222 = 8;
	}
}

void func_232(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_240(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_239())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_238(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_240(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_238(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_236(unk_0x4F8644AF03D0E0D6())) && !func_234(unk_0x4F8644AF03D0E0D6(), 0)) && !func_233()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_236(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_233()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_234(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_235(-1, 0) == 8;
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

int func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_236(bool bParam0)
{
	if (func_234(bParam0, 0))
	{
		return 1;
	}
	if (func_237())
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

bool func_237()
{
	return BitTest(Global_2621446, 3);
}

int func_238(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_239()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_240(int iParam0)
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

void func_241()
{
	if (iLocal_442 == 0)
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, false, true, 0))
		{
			iLocal_442 = 1;
		}
	}
	else if (iLocal_446 == 0)
	{
		unk_0xFE99B66D079CF6BC(0, 22, true);
		unk_0xFE99B66D079CF6BC(0, 25, true);
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, false, true, 0))
		{
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.975f);
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), fLocal_324);
		}
	}
	if (iLocal_223 > 0)
	{
		func_229();
	}
	if (iLocal_223 == 0)
	{
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_342 = 0;
		iLocal_358 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_428 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447[0] = 0;
		iLocal_448[0] = 0;
		iLocal_447[1] = 0;
		iLocal_448[1] = 0;
		iLocal_447[2] = 0;
		iLocal_456 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_464 = 0;
		iLocal_484 = 0;
		iLocal_486 = 0;
		iLocal_487[3] = 0;
		unk_0x963D27A58DF860AC(joaat("prop_jet_bloodsplat_01"));
		unk_0xAF348AFCB575A441("V_60_HangerRm");
		unk_0xAA5F02DB48D704B9(5);
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 3, false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		if (unk_0x7239B21A38F536BA(bLocal_264))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
			{
				if (unk_0xE03B3F2D3DC59B64(bLocal_264))
				{
					unk_0x7D7D2B47FA788E85(bLocal_264, 3f, true);
				}
			}
		}
		if (!unk_0x5A859503B0C08678())
		{
			unk_0xD4E8E24955024033(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_428 == 0)
		{
			if (unk_0x2F844A8B08D76685("Trv_4_747", false, -1))
			{
				iLocal_428 = 1;
			}
		}
		if (iLocal_420 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (unk_0xE03B3F2D3DC59B64(bLocal_264))
					{
						if (unk_0x2720AAA75001E094(bLocal_264) > 20)
						{
							if (unk_0x7239B21A38F536BA(bLocal_284))
							{
								if (unk_0x4C241E39B23DF959(bLocal_284, false))
								{
									func_246(&bLocal_284);
									unk_0x8D8686B622B88120(bLocal_253, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, false, false, 0, false);
									unk_0x2497C4717C8B881E(bLocal_284, true, false, false);
									iLocal_420 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (unk_0xE03B3F2D3DC59B64(bLocal_264))
					{
						if (unk_0x2720AAA75001E094(bLocal_264) > 23)
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_264);
							if (unk_0x7239B21A38F536BA(bLocal_284))
							{
								if (unk_0x4C241E39B23DF959(bLocal_284, false))
								{
									if (!unk_0xB65B60556E2A9225("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0x013A80FC08F6E4F2("SOL_3_ENGINE_DEATH_SCENE");
									}
									bLocal_251 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x272E4723B56A3B96(bLocal_251, bLocal_284, unk_0xFB71170B7E76ACBA(bLocal_284, "chassis_Control"));
									unk_0xEEA929141F699854(bLocal_264, bLocal_251, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1000f, 0);
									unk_0x394B9CD12435C981(bLocal_251, true);
									iLocal_443 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (iLocal_443 == 1)
					{
						Local_318 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
						if (Local_318.f_1 < -2965f)
						{
							unk_0x189E955A8313E298(bLocal_264, 0f, 0f, 0f, true, 6000, 1000, 2000, 0);
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
							unk_0x5AD23D40115353AC(unk_0xD80958FC74E988A6(), bLocal_264, false);
							unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_264, 4000, 48, 4);
							iLocal_444 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0)
		{
			if (!unk_0x7239B21A38F536BA(bLocal_264))
			{
				unk_0xF46C581C61718916(false);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				if (unk_0x7239B21A38F536BA(bLocal_268[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_268[0]))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_268[0]);
						unk_0x9F8AA94D6D97DBF4(bLocal_268[0], false);
					}
				}
				iLocal_445 = 1;
			}
		}
		if (iLocal_422 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (unk_0x7239B21A38F536BA(bLocal_295))
					{
						if (unk_0xEFBE71898A993728(bLocal_295, bLocal_264))
						{
							if (unk_0x1F0B79228E461EC9(bLocal_264, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0xE4A310B1D7FA73CC(bLocal_251) > 0.59f)
								{
									unk_0x961AC54BF0613F5D(bLocal_295, true, true);
									if (unk_0xA6DB27D19ECBB7DA(bLocal_297))
									{
										unk_0x86A652570E5F25DD(&bLocal_297);
									}
									if (!unk_0xA6DB27D19ECBB7DA(bLocal_300))
									{
										func_230(bLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0xB65B60556E2A9225("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xDFE8422B3B94E688("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0xB65B60556E2A9225("SOL_3_LOSE_COPS"))
										{
											unk_0x013A80FC08F6E4F2("SOL_3_LOSE_COPS");
										}
										unk_0x5AE11BC36633DE4E(false);
										iLocal_422 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0)
		{
			if (iLocal_422 == 1 && unk_0xC9D9444186B5A374() > 2500)
			{
				bLocal_300 = func_243(bLocal_295);
				func_20("SOL3_GOD1", 7500, -1);
				unk_0x5AE11BC36633DE4E(false);
				iLocal_446 = 1;
			}
		}
		if (iLocal_487[3] == 0)
		{
			if (iLocal_446 == 1 && iLocal_445 == 1)
			{
				if (unk_0xC9D9444186B5A374() > 2500)
				{
					unk_0x293220DA1B46CEBC(10f, 2f, 3);
					iLocal_487[3] = 1;
				}
			}
		}
		if (iLocal_421 == 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_264, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0xE4A310B1D7FA73CC(bLocal_251) > 0.89f)
					{
						if (unk_0x7239B21A38F536BA(bLocal_284))
						{
							if (unk_0x4C241E39B23DF959(bLocal_284, false))
							{
								unk_0x9614299DCB53E54B(&bLocal_264);
								unk_0x0D53A3B8DA0809D2("scr_trev4_747_blood_impact", bLocal_284, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, false, false, false);
								iLocal_673 = unk_0x1AE42C1660FD6517("scr_trev4_747_exhaust_plane_misfire", bLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
								unk_0x8D8686B622B88120(bLocal_254, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, false, false, 0, false);
								iLocal_234 = unk_0x9CD27B0045628463();
								iLocal_421 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x9CD27B0045628463() > iLocal_234 + 574)
			{
				if (!unk_0x7239B21A38F536BA(bLocal_294))
				{
					if (unk_0x98A4EB5D89A0C952(joaat("prop_jet_bloodsplat_01")))
					{
						bLocal_294 = unk_0x509D5878EB39E842(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
						unk_0x8524A8B0171D5E07(bLocal_294, 0f, 0f, -121.5948f, 2, true);
						unk_0x77B21BE7AC540F07(bLocal_294, 0f, 0f, 0.8729f, -0.4879f);
						unk_0xE532F5D78798DAAB(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0)
				{
					if (unk_0x7239B21A38F536BA(bLocal_284))
					{
						if (unk_0x4C241E39B23DF959(bLocal_284, false))
						{
							unk_0x0D53A3B8DA0809D2("scr_trev4_747_engine_debris", bLocal_284, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, false, false, false);
							unk_0x2497C4717C8B881E(bLocal_284, false, false, false);
							func_242();
							unk_0xA3B0C41BA5CC0BB5(bLocal_253);
							iLocal_484 = 1;
						}
					}
				}
			}
			if (iLocal_447[0] == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_234 + 300)
				{
					if (unk_0x74AFEF0D2E1E409B(iLocal_673))
					{
						unk_0x8F75998877616996(iLocal_673, false);
					}
					iLocal_447[0] = 1;
				}
			}
			else if (iLocal_448[0] == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_234 + 700)
				{
					if (unk_0x7239B21A38F536BA(bLocal_284))
					{
						if (unk_0x4C241E39B23DF959(bLocal_284, false))
						{
							iLocal_673 = unk_0x1AE42C1660FD6517("scr_trev4_747_exhaust_plane_misfire", bLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_448[0] = 1;
						}
					}
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_234 + 1000)
				{
					if (unk_0x74AFEF0D2E1E409B(iLocal_673))
					{
						unk_0x8F75998877616996(iLocal_673, false);
					}
					iLocal_447[1] = 1;
				}
			}
			else if (iLocal_448[1] == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_234 + 1400)
				{
					if (unk_0x7239B21A38F536BA(bLocal_284))
					{
						if (unk_0x4C241E39B23DF959(bLocal_284, false))
						{
							iLocal_673 = unk_0x1AE42C1660FD6517("scr_trev4_747_exhaust_plane_misfire", bLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_672 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_damage", bLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
							iLocal_448[1] = 1;
						}
					}
				}
			}
			else if (iLocal_447[2] == 0)
			{
				if (unk_0x9CD27B0045628463() > iLocal_234 + 3500)
				{
					if (unk_0x74AFEF0D2E1E409B(iLocal_673))
					{
						unk_0x8F75998877616996(iLocal_673, false);
					}
					if (unk_0x7239B21A38F536BA(bLocal_284))
					{
						if (unk_0x4C241E39B23DF959(bLocal_284, false))
						{
							unk_0xFAEE099C6F890BB8(bLocal_284, false, false, false, false, false, false, false, false);
						}
					}
					iLocal_447[2] = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if (iLocal_422 == 1)
			{
				if (iLocal_460 == 0)
				{
					if (!unk_0x886E37EC497200B6(bLocal_295))
					{
						iLocal_244 = unk_0x9CD27B0045628463();
						iLocal_460 = 1;
					}
				}
				else if (unk_0x9CD27B0045628463() > iLocal_244 + 2000)
				{
					unk_0x428CA6DBD1094446(bLocal_295, true);
					iLocal_459 = 1;
				}
			}
		}
		if (iLocal_464 == 0)
		{
			if (!unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (unk_0x7239B21A38F536BA(bLocal_284))
				{
					unk_0x428CA6DBD1094446(bLocal_284, false);
					iLocal_464 = 1;
				}
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_295))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_300))
			{
				if (func_16(unk_0xD80958FC74E988A6(), bLocal_295, 1) < 1.5f && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					unk_0x67C540AA08E4A6F5(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					unk_0x86A652570E5F25DD(&bLocal_300);
					unk_0x539E0AE3E6634B9F(&bLocal_295);
					func_125();
					iLocal_223 = 0;
					iLocal_222 = 8;
				}
			}
		}
	}
}

void func_242()
{
	if (unk_0x74AFEF0D2E1E409B(iLocal_668))
	{
		unk_0x8F75998877616996(iLocal_668, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_669))
	{
		unk_0x8F75998877616996(iLocal_669, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_670))
	{
		unk_0x8F75998877616996(iLocal_670, false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_671))
	{
		unk_0x8F75998877616996(iLocal_671, false);
	}
}

bool func_243(bool bParam0)
{
	return func_244(bParam0, 1, 0);
}

bool func_244(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_245(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_245(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_245(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_245(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_246(bool bParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!unk_0x5F9532F3B5CC2551(*bParam0, false))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var1 = { 12.6349f, 7.89711f, -7.09742f };
		Var2 = { -22.5879f, -2.2931f, -6.22542f };
		Var3 = { -12.6675f, 8.15519f, -6.98833f };
		Var4 = { 180f, 0f, 0f };
		iLocal_668 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_heathaze", *bParam0, Var0, Var4, 1f, false, false, false);
		iLocal_669 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_heathaze", *bParam0, Var1, Var4, 1f, false, false, false);
		iLocal_670 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_heathaze", *bParam0, Var2, Var4, 1f, false, false, false);
		iLocal_671 = unk_0x1AE42C1660FD6517("scr_trev4_747_engine_heathaze", *bParam0, Var3, Var4, 1f, false, false, false);
	}
}

void func_247()
{
	if (unk_0x7239B21A38F536BA(bLocal_264))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
		{
			if (unk_0xE03B3F2D3DC59B64(bLocal_264))
			{
				if (func_16(unk_0xD80958FC74E988A6(), bLocal_264, 1) < 17f)
				{
					unk_0x7D7D2B47FA788E85(bLocal_264, 3f, true);
				}
				if (func_16(unk_0xD80958FC74E988A6(), bLocal_264, 1) < 22f && func_16(unk_0xD80958FC74E988A6(), bLocal_264, 1) > 17f)
				{
					unk_0x7D7D2B47FA788E85(bLocal_264, 2f, true);
				}
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -921.7f, -2946.4f, 13.4f, true) > 8f && !unk_0xE659E47AF827484B(bLocal_264))
				{
					if (func_16(unk_0xD80958FC74E988A6(), bLocal_264, 1) > 22f)
					{
						unk_0x7D7D2B47FA788E85(bLocal_264, 1f, true);
					}
				}
				else if (func_16(unk_0xD80958FC74E988A6(), bLocal_264, 1) > 22f)
				{
					unk_0x7D7D2B47FA788E85(bLocal_264, 2f, true);
				}
			}
		}
	}
	if (iLocal_223 > 0)
	{
		if (iLocal_442 == 0)
		{
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, false, true, 0))
			{
				iLocal_442 = 1;
			}
		}
		else
		{
			unk_0xFE99B66D079CF6BC(0, 22, true);
			unk_0xFE99B66D079CF6BC(0, 25, true);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.98f);
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), fLocal_324);
		}
		if (!unk_0x7239B21A38F536BA(bLocal_284))
		{
			unk_0x963D27A58DF860AC(joaat("jet"));
			if (unk_0x98A4EB5D89A0C952(joaat("jet")))
			{
				bLocal_284 = unk_0xAF35D0D2583051B0(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x60BF608F1B8CD1B6(bLocal_284, 2);
				unk_0x31B927BBC44156CD(bLocal_284, false);
				unk_0x428CA6DBD1094446(bLocal_284, true);
				unk_0xFAEE099C6F890BB8(bLocal_284, true, true, true, true, true, false, false, false);
				unk_0xE532F5D78798DAAB(joaat("jet"));
				unk_0x5927F96A78577363(bLocal_284, 500);
			}
		}
		if (!unk_0x7239B21A38F536BA(bLocal_266))
		{
			unk_0x963D27A58DF860AC(joaat("s_m_y_airworker"));
			unk_0xD3BD40951412FEF6("misssolomon_3");
			unk_0x963D27A58DF860AC(joaat("p_amb_clipboard_01"));
			if ((unk_0x98A4EB5D89A0C952(joaat("s_m_y_airworker")) && unk_0xD031A9162D01088C("misssolomon_3")) && unk_0x98A4EB5D89A0C952(joaat("p_amb_clipboard_01")))
			{
				bLocal_266 = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, true, true);
				unk_0xFAEE099C6F890BB8(bLocal_266, false, false, false, false, false, false, false, false);
				unk_0x63F58F7C80513AAD(bLocal_266, false);
				unk_0x9F8AA94D6D97DBF4(bLocal_266, true);
				func_17(&uLocal_490, 4, bLocal_266, "HangerWorker", 0, 1);
				bLocal_296 = unk_0x509D5878EB39E842(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, true, true, false);
				unk_0x6B9BBD38AB0796DF(bLocal_296, bLocal_266, unk_0x3F428D08BE5AAE31(bLocal_264, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				bLocal_252 = unk_0x8C18E0F9080ADD73(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0xEEA929141F699854(bLocal_266, bLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1000f, 0);
				unk_0xE532F5D78798DAAB(joaat("s_m_y_airworker"));
				unk_0xE532F5D78798DAAB(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x7239B21A38F536BA(bLocal_268[0]))
		{
			unk_0x963D27A58DF860AC(joaat("s_m_y_cop_01"));
			if (unk_0x98A4EB5D89A0C952(joaat("s_m_y_cop_01")))
			{
				bLocal_268[0] = unk_0xD49F9B0955C367DE(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, true, true);
				unk_0xBF0FD6E56C964FCB(bLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
				unk_0x7AEFB85C1D49DEB6(bLocal_268[0], 20);
				unk_0x0DC7CABAB1E9B67E(bLocal_268[0], true, 1);
				unk_0x9F8AA94D6D97DBF4(bLocal_268[0], true);
				unk_0x9B53BB6E8943AF53(bLocal_268[0], unk_0xD80958FC74E988A6(), -1, true);
				func_127(bLocal_268[0], 0);
			}
		}
		if (!unk_0x7239B21A38F536BA(bLocal_285))
		{
			unk_0x963D27A58DF860AC(joaat("shamal"));
			if (unk_0x98A4EB5D89A0C952(joaat("shamal")))
			{
				bLocal_285 = unk_0xAF35D0D2583051B0(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
				unk_0x7C65DAC73C35C862(bLocal_285, false, false, true);
				unk_0x49733E92263139D1(bLocal_285, 5f);
				unk_0xE532F5D78798DAAB(joaat("shamal"));
				unk_0x6B76DC1F3AE6E6A3(bLocal_285, 2000, false);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_285))
		{
			if (unk_0x4C241E39B23DF959(bLocal_285, false))
			{
				if (func_16(unk_0xD80958FC74E988A6(), bLocal_285, 1) > 5f)
				{
					unk_0x7C65DAC73C35C862(bLocal_285, false, false, false);
				}
			}
		}
	}
	if (iLocal_223 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_343 == 1)
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				unk_0x891B5B39AC6302AF(false);
			}
			func_120();
			func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
			iLocal_343 = 0;
		}
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_442 = 0;
		fLocal_324 = 3f;
		iLocal_227 = 0;
		func_201(0, 1);
		unk_0xF1160ACCF98A3FC8(45, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(35, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(2, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(54, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(true, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(9, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(61, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(63, "BB_CHASE");
		unk_0xF1160ACCF98A3FC8(64, "BB_CHASE");
		unk_0x1D132D614DD86811(&iLocal_305);
		unk_0xBE2CACCF5A8AA805("digitalOverlay");
		if (unk_0x7239B21A38F536BA(bLocal_278))
		{
			unk_0x18EB48CFC41F2EA0(bLocal_278, 0f);
			unk_0x629BFA74418D6239(&bLocal_278);
		}
		if (unk_0x7239B21A38F536BA(bLocal_287))
		{
			unk_0xEA386986E786A54F(&bLocal_287);
		}
		if (unk_0x7239B21A38F536BA(iLocal_276[0]))
		{
			unk_0x9614299DCB53E54B(&(iLocal_276[0]));
		}
		if (unk_0x7239B21A38F536BA(iLocal_280[0]))
		{
			unk_0xEA386986E786A54F(&(iLocal_280[0]));
		}
		unk_0x1454F2448DE30163(0);
		unk_0xF7F26C6E9CC9EBB8(true);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
		{
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_297))
			{
				bLocal_297 = unk_0x5CDE92C702A8FCE7(bLocal_264);
				unk_0x6F6F290102C02AB4(bLocal_297, true);
			}
		}
		unk_0xB9EFD5C25018725A("PoliceScannerDisabled", true);
		if (iLocal_363[2] == 1)
		{
			if (!unk_0xFCBDCE714A7C88E5(bLocal_261))
			{
				unk_0xA3B0C41BA5CC0BB5(bLocal_261);
			}
			unk_0x353FC880830B88FA(bLocal_261);
			iLocal_390 = 0;
			iLocal_363[2] = 0;
		}
		unk_0xAA5F02DB48D704B9(5);
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 3, false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x706D57B0F50DA710("TRV4_RUN");
		if (!unk_0x7239B21A38F536BA(bLocal_284))
		{
			unk_0x963D27A58DF860AC(joaat("jet"));
		}
		if (!unk_0x7239B21A38F536BA(bLocal_266))
		{
			unk_0x963D27A58DF860AC(joaat("s_m_y_airworker"));
		}
		unk_0x963D27A58DF860AC(joaat("shamal"));
		unk_0x963D27A58DF860AC(joaat("s_m_y_cop_01"));
		unk_0x963D27A58DF860AC(joaat("police3"));
		unk_0x963D27A58DF860AC(joaat("p_amb_clipboard_01"));
		unk_0xAF514CABE74CBF15(68, "BB_Chase");
		unk_0xAF514CABE74CBF15(69, "BB_Chase");
		unk_0xD3BD40951412FEF6("misssolomon_3");
		unk_0xC1B1E9A034A63A62(false);
		if (unk_0xCB4E8BE8A0063C5D("Trev4_5"))
		{
			unk_0x5A353B8E6B1095B5("Trev4_5", true, 1f, 1f);
		}
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (!func_24())
			{
				unk_0x4448EB75B4904BDB(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x5A859503B0C08678())
		{
			unk_0xD4E8E24955024033(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_248("TRV4_FAIL1");
		}
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_248("TRV4_FAIL1");
		}
		if (unk_0x83666F9FB8FEBD4B() > 15000)
		{
			func_248("TRV4_FAIL1");
		}
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
			{
				if (!unk_0xE03B3F2D3DC59B64(bLocal_264))
				{
					unk_0x0759591819534F7B(bLocal_264, "BB_MOLLY_2", 10, 4, -1);
					unk_0xEA47FE3719165B94(bLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, false, false, false);
				}
			}
			unk_0xC1B1E9A034A63A62(false);
			iLocal_223 = 3;
		}
	}
	if (iLocal_223 == 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
		{
			if (unk_0xE03B3F2D3DC59B64(bLocal_264))
			{
				if (unk_0x2720AAA75001E094(bLocal_264) > 18 && iLocal_405 == 0)
				{
					iLocal_350 = 0;
					unk_0x7D7D2B47FA788E85(bLocal_264, 3f, true);
					iLocal_223 = 0;
					iLocal_222 = 6;
				}
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > 50000)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
			{
				unk_0xAAA34F8A7CB32098(bLocal_264);
				unk_0x06843DA7060A026B(bLocal_264, -932.5f, -2964.1f, 13.4f, true, false, false, true);
				unk_0x0759591819534F7B(bLocal_264, "BB_MOLLY_2", 18, 4, -1);
				unk_0xEA47FE3719165B94(bLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, false, false, false);
				iLocal_350 = 0;
				iLocal_223 = 0;
				iLocal_222 = 6;
			}
		}
	}
}

void func_248(char* sParam0)
{
	if (iLocal_405 == 0)
	{
		if (iLocal_334)
		{
			func_238(0, 1, 1, 0);
			unk_0x026FB97D0A425F84(bLocal_301, false);
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0xA0EBB943C300E693(true);
			if (unk_0xB65B60556E2A9225("SOL_3_CHOPPER_CAM"))
			{
				unk_0xDFE8422B3B94E688("SOL_3_CHOPPER_CAM");
			}
			unk_0xA3B0C41BA5CC0BB5(bLocal_261);
			func_258();
			unk_0xF7F26C6E9CC9EBB8(true);
			iLocal_363[2] = 0;
			iLocal_334 = 0;
		}
		unk_0x706D57B0F50DA710("TRV4_FAIL");
		sLocal_489 = sParam0;
		unk_0xCC33FA791322B9D9();
		func_226();
		func_224();
		func_249(sLocal_489);
		iLocal_405 = 1;
	}
}

void func_249(char* sParam0)
{
	func_257(sParam0);
	func_250(0);
}

void func_250(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_443(0))
	{
		iVar0 = func_8();
		if (!func_251(iVar0))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_256();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_255(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6(), 0);
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
	func_252(&(Global_113386.f_2363.f_539), iVar1);
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

void func_252(var uParam0, int iParam1)
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
			if (!func_254(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_253(&(uParam0->f_2296[iVar0]));
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

void func_253(var uParam0)
{
	*uParam0 = -15;
}

int func_254(int iParam0, var uParam1, float fParam2)
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
			return func_254(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_254(8, uParam1, fParam2);
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

void func_255(int iParam0, bool bParam1)
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

void func_256()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_107())
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
			switch (func_107())
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

void func_257(bool bParam0)
{
	if (!unk_0xCA042B6957743895(sParam0))
	{
		if (unk_0xF030907CCBB8A9FD(bParam0) <= 16)
		{
			StringCopy(&Global_78551, bParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x1897CA71995A90B4())
			{
				unk_0x071A5197D6AFC8B3();
			}
		}
	}
}

void func_258()
{
	Global_63161 = 0;
}

void func_259()
{
	if (!unk_0x7239B21A38F536BA(bLocal_284))
	{
		if (unk_0x7239B21A38F536BA(bLocal_278))
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 30000f)
					{
						unk_0x963D27A58DF860AC(joaat("jet"));
						if (unk_0x98A4EB5D89A0C952(joaat("jet")))
						{
							bLocal_284 = unk_0xAF35D0D2583051B0(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
							unk_0x60BF608F1B8CD1B6(bLocal_284, 2);
							unk_0x31B927BBC44156CD(bLocal_284, false);
							unk_0x428CA6DBD1094446(bLocal_284, true);
							unk_0xFAEE099C6F890BB8(bLocal_284, true, true, true, true, true, false, false, false);
							unk_0xE532F5D78798DAAB(joaat("jet"));
							unk_0x5927F96A78577363(bLocal_284, 500);
						}
					}
				}
			}
		}
	}
	func_358();
	if (unk_0xA6DB27D19ECBB7DA(bLocal_297))
	{
		func_357(bLocal_297, bLocal_264, 300f, 0.9f, 0);
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_224 < 2)
		{
			unk_0xC11C18092C5530DC(unk_0xD80958FC74E988A6(), false);
		}
		func_356();
		func_324();
		if (iLocal_395 == 0)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[20]))
			{
				if (unk_0x4C241E39B23DF959(iLocal_204[20], false))
				{
					unk_0x2497C4717C8B881E(iLocal_204[20], true, true, false);
					unk_0xA178472EBB8AE60D(iLocal_204[20]);
					iLocal_395 = 1;
				}
			}
		}
		func_323();
		func_322();
		if (iLocal_347 == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						func_321(bLocal_301, bLocal_287, "BB_Chase", 1);
						iLocal_347 = 1;
					}
				}
			}
		}
		else if (unk_0x4C241E39B23DF959(bLocal_278, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
			{
				func_320(bLocal_301, bLocal_287, fLocal_321);
				unk_0xB13C14F66A00D047(bLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0)
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if ((unk_0x5746F3A7AB7FE544(bLocal_278) > 15000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 125464f) && func_312(1, 0, 0))
					{
						iLocal_350 = 1;
						if (iLocal_405 == 0)
						{
							unk_0x8DFCED7A656F8802(true);
							func_311("TRV4_HELP1", -1);
							func_304(1);
							func_222(&uLocal_28, 0, 0);
							unk_0x51669F7D1FB53D9F(false);
							iLocal_335 = 1;
						}
					}
				}
			}
		}
		else if (unk_0x4C241E39B23DF959(bLocal_278, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
			{
				if (unk_0x85F01B8D5B90570E(iLocal_305) && func_198(1, "BB_Chase"))
				{
					if (((unk_0x5746F3A7AB7FE544(bLocal_278) > 15000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 125464f) && iLocal_405 == 0) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						func_282();
					}
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 125464f || !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (iLocal_334)
						{
							unk_0x8DFCED7A656F8802(true);
							func_238(0, 1, 1, 0);
							unk_0x026FB97D0A425F84(bLocal_301, false);
							unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
							unk_0xA0EBB943C300E693(true);
							if (unk_0xB65B60556E2A9225("SOL_3_CHOPPER_CAM"))
							{
								unk_0xDFE8422B3B94E688("SOL_3_CHOPPER_CAM");
							}
							unk_0xA3B0C41BA5CC0BB5(bLocal_261);
							func_258();
							unk_0xF7F26C6E9CC9EBB8(true);
							iLocal_363[2] = 0;
							iLocal_334 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_487[0] == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 44255f && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -1187.3f, -2847.8f, 13.6f, true) < 100f)
							{
								unk_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_487[0] = 1;
							}
						}
					}
				}
				if (iLocal_487[1] == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 52875f && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -1349f, -2720f, 14f, true) < 50f)
							{
								unk_0x293220DA1B46CEBC(6f, 2f, 3);
								iLocal_487[1] = 1;
							}
						}
					}
				}
				if (iLocal_487[2] == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 87085f && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -1507f, -2520f, 14f, true) < 70f)
							{
								unk_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_487[2] = 1;
							}
						}
					}
				}
				func_281();
				func_280();
				if (!unk_0xB65B60556E2A9225("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 64280f && unk_0x5746F3A7AB7FE544(bLocal_278) < 72000f)
								{
									if (unk_0xF1B760881820C952(-1149.6f, -2323.7f, 22.5f, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) < 130f)
									{
										unk_0x013A80FC08F6E4F2("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 72500f)
							{
								unk_0xDFE8422B3B94E688("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0xB65B60556E2A9225("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 78000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 85000f)
								{
									unk_0x013A80FC08F6E4F2("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 85500f)
							{
								unk_0xDFE8422B3B94E688("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0xB65B60556E2A9225("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 100000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 107000f)
								{
									unk_0x013A80FC08F6E4F2("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 107500f)
							{
								unk_0xDFE8422B3B94E688("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) < 10000f)
							{
								func_279();
							}
						}
					}
				}
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) < 30000f)
						{
							func_278(bLocal_278, unk_0x5746F3A7AB7FE544(bLocal_278));
						}
					}
				}
				if (iLocal_408 == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 22000f)
							{
								unk_0x1E5185B72EF5158A("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 1;
							}
						}
					}
				}
				else if (iLocal_409 == 0)
				{
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, false, true, 0))
					{
						unk_0x706D57B0F50DA710("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 1;
					}
				}
				if (iLocal_341 == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (func_16(bLocal_278, unk_0xD80958FC74E988A6(), 1) < 170f && unk_0xE659E47AF827484B(bLocal_278))
						{
							if (unk_0xA6DB27D19ECBB7DA(bLocal_299))
							{
								unk_0x86A652570E5F25DD(&bLocal_299);
							}
							if (unk_0xB65B60556E2A9225("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xDFE8422B3B94E688("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0xB65B60556E2A9225("SOL_3_MAIN_CHASE"))
							{
								unk_0x013A80FC08F6E4F2("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xA6DB27D19ECBB7DA(bLocal_297))
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
								{
									bLocal_297 = unk_0x5CDE92C702A8FCE7(bLocal_264);
									unk_0x6F6F290102C02AB4(bLocal_297, true);
								}
							}
							unk_0x67EEDEA1B9BAFD94();
							if (!unk_0x7984C03AA5CC2F41())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x706D57B0F50DA710("TRV4_CHASE");
								iLocal_341 = 1;
							}
						}
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, false, true, 0))
					{
						if (unk_0xA6DB27D19ECBB7DA(bLocal_299))
						{
							unk_0x86A652570E5F25DD(&bLocal_299);
						}
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_297))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
							{
								bLocal_297 = unk_0x5CDE92C702A8FCE7(bLocal_264);
								unk_0x6F6F290102C02AB4(bLocal_297, true);
							}
						}
						unk_0x67EEDEA1B9BAFD94();
						if (!unk_0x7984C03AA5CC2F41())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x706D57B0F50DA710("TRV4_CHASE");
							iLocal_341 = 1;
						}
					}
				}
				else if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0)
				{
					unk_0x963D27A58DF860AC(joaat("jet"));
					if (unk_0x98A4EB5D89A0C952(joaat("jet")))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 18490f)
								{
									iLocal_280[1] = unk_0xAF35D0D2583051B0(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, true, true, false);
									unk_0x3F878F92B3A7A071(iLocal_280[1], 2, "BB_Chase", true);
									unk_0xE532F5D78798DAAB(joaat("jet"));
									iLocal_326 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_280[1]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_280[1], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_280[1]))
						{
							unk_0x6683AB880E427778(iLocal_280[1], fLocal_321);
							if (unk_0x5746F3A7AB7FE544(iLocal_280[1]) > 20000f)
							{
								if (func_16(unk_0xD80958FC74E988A6(), iLocal_280[1], 1) > 200f && !unk_0xE659E47AF827484B(iLocal_280[1]))
								{
									unk_0x54833611C17ABDEA(iLocal_280[1]);
									if (unk_0x7239B21A38F536BA(iLocal_276[1]))
									{
										unk_0x9614299DCB53E54B(&(iLocal_276[1]));
									}
									unk_0xEA386986E786A54F(&(iLocal_280[1]));
									iLocal_249 = unk_0x9CD27B0045628463() + 1000;
								}
							}
							if (unk_0x7239B21A38F536BA(iLocal_280[1]))
							{
								if (unk_0x5746F3A7AB7FE544(iLocal_280[1]) > 31543f)
								{
									unk_0x54833611C17ABDEA(iLocal_280[1]);
									unk_0x428CA6DBD1094446(iLocal_280[1], true);
								}
							}
						}
						else if (func_16(unk_0xD80958FC74E988A6(), iLocal_280[1], 1) > 200f && !unk_0xE659E47AF827484B(iLocal_280[1]))
						{
							if (unk_0x7239B21A38F536BA(iLocal_276[1]))
							{
								unk_0x9614299DCB53E54B(&(iLocal_276[1]));
							}
							unk_0xEA386986E786A54F(&(iLocal_280[1]));
							iLocal_249 = unk_0x9CD27B0045628463() + 1000;
						}
					}
				}
				if (iLocal_432 == 0)
				{
					if (!unk_0x7239B21A38F536BA(bLocal_283))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 23000f)
								{
									unk_0x963D27A58DF860AC(joaat("tanker"));
									if (unk_0x98A4EB5D89A0C952(joaat("tanker")))
									{
										bLocal_283 = unk_0xAF35D0D2583051B0(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, true, true, false);
										unk_0xE532F5D78798DAAB(joaat("tanker"));
										unk_0x4F1D4BE3A7F24601(bLocal_283, 57, 57);
										iLocal_432 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[1]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[1], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[1]))
						{
							if (unk_0x5746F3A7AB7FE544(iLocal_204[1]) > 13000f)
							{
								if (iLocal_370 == 0)
								{
									fLocal_123[1] = 0.5f;
									bLocal_269 = unk_0xBB40DD2270B65366(iLocal_204[1], -1, false);
									iLocal_370 = 1;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0)
				{
					unk_0xC9156DC11411A9EA(-1325f, -2779f, 14f);
					if (unk_0x7239B21A38F536BA(iLocal_204[1]))
					{
						if (iLocal_361 == 0)
						{
							unk_0x4F1D4BE3A7F24601(iLocal_204[1], 57, 57);
							iLocal_361 = 1;
						}
						if (unk_0x7239B21A38F536BA(bLocal_283))
						{
							if (!unk_0x5F9532F3B5CC2551(iLocal_204[1], false))
							{
								if (!unk_0x5F9532F3B5CC2551(bLocal_283, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(iLocal_204[1]))
									{
										unk_0x3C7D42D58F770B54(iLocal_204[1], bLocal_283, 1f);
									}
								}
							}
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_283))
					{
						if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 41430f)
									{
										unk_0x961AC54BF0613F5D(bLocal_283, true, true);
										iLocal_332 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[1], false))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 42700f)
								{
									if (unk_0x7239B21A38F536BA(bLocal_269))
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_269))
										{
											unk_0x6B76DC1F3AE6E6A3(bLocal_269, false, false);
										}
									}
									if (unk_0x1C8A4C2C19E68EEC(iLocal_204[1]))
									{
										unk_0x54833611C17ABDEA(iLocal_204[1]);
										iLocal_373 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (iLocal_467 == 0)
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 38000f)
								{
									if (unk_0x7239B21A38F536BA(iLocal_204[1]) && unk_0x4C241E39B23DF959(iLocal_204[1], false))
									{
										unk_0xE65F427EB70AB1ED(-1, "Trevor_4_747_Tanker_Horn", iLocal_204[1], false, false, 0);
										iLocal_467 = 1;
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 39000f)
								{
									if (!unk_0xB65B60556E2A9225("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x013A80FC08F6E4F2("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										unk_0xFAEE099C6F890BB8(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, true, true, false, false, false, false, false);
									}
									iLocal_363[1] = 1;
								}
							}
							if (iLocal_403 == 0)
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 41611f)
								{
									if (unk_0x7239B21A38F536BA(bLocal_283))
									{
										if (!unk_0x5F9532F3B5CC2551(bLocal_283, false))
										{
											if (unk_0x7239B21A38F536BA(iLocal_204[7]))
											{
												if (!unk_0x5F9532F3B5CC2551(iLocal_204[7], false))
												{
													unk_0xE65F427EB70AB1ED(-1, "Trevor_4_747_Tanker_Explosion", bLocal_283, false, false, 0);
													unk_0x54833611C17ABDEA(iLocal_204[7]);
													unk_0xBA71116ADF5B514C(iLocal_204[7], true, false);
													unk_0xBA71116ADF5B514C(bLocal_283, true, false);
													unk_0xE3AD2BDBAEE269AC(-1221f, -2852f, 17f, 14, 1f, true, false, 1f, false);
													unk_0xE3AD2BDBAEE269AC(-1212f, -2855f, 14.34f, 14, 1f, true, false, 1f, false);
													unk_0x629BFA74418D6239(&bLocal_283);
													unk_0x629BFA74418D6239(&(iLocal_204[1]));
													iLocal_403 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[1] == 0)
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 43204f)
								{
									if (unk_0xB65B60556E2A9225("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xDFE8422B3B94E688("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x77ED170667F50170("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										unk_0xFAEE099C6F890BB8(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, false, false, false, false, false, false, false);
									}
									iLocal_364[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0xB65B60556E2A9225("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[0]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[0], false))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 36000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 40000f)
										{
											unk_0x013A80FC08F6E4F2("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_204[0]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[0], false))
					{
						if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 43204f)
									{
										unk_0xDFE8422B3B94E688("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0)
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 60500f)
							{
								unk_0x963D27A58DF860AC(joaat("jet"));
							}
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 66500f)
							{
								if (unk_0x98A4EB5D89A0C952(joaat("jet")))
								{
									iLocal_280[0] = unk_0xAF35D0D2583051B0(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, true, true, false);
									unk_0x3882114BDE571AD4(iLocal_280[0], true);
									unk_0x60BF608F1B8CD1B6(iLocal_280[0], 2);
									unk_0x3F878F92B3A7A071(iLocal_280[0], 35, "BB_Chase", true);
									unk_0x9438F7AD68771A20(iLocal_280[0], 3491f);
									unk_0xE532F5D78798DAAB(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_280[0]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_280[0], false))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x1C8A4C2C19E68EEC(iLocal_280[0]))
								{
									unk_0x6683AB880E427778(iLocal_280[0], fLocal_321);
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 80000f)
									{
										if (func_16(iLocal_280[0], unk_0xD80958FC74E988A6(), 1) > 200f)
										{
											unk_0x54833611C17ABDEA(iLocal_280[0]);
										}
									}
								}
								else if (unk_0x5746F3A7AB7FE544(bLocal_278) > 80000f)
								{
									if (func_16(iLocal_280[0], unk_0xD80958FC74E988A6(), 1) > 200f && !unk_0xE659E47AF827484B(iLocal_280[0]))
									{
										if (unk_0x7239B21A38F536BA(iLocal_276[0]))
										{
											unk_0x9614299DCB53E54B(&(iLocal_276[0]));
										}
										unk_0xEA386986E786A54F(&(iLocal_280[0]));
										iLocal_249 = unk_0x9CD27B0045628463() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0)
				{
					if (iLocal_391 == 0)
					{
						if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 50000f)
									{
										unk_0x963D27A58DF860AC(joaat("s_m_y_airworker"));
										unk_0xD3BD40951412FEF6("misstrevor4");
										if (unk_0x98A4EB5D89A0C952(joaat("s_m_y_airworker")))
										{
											bLocal_270 = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, true, true);
											bLocal_271 = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, true, true);
											unk_0x9F8AA94D6D97DBF4(bLocal_270, true);
											unk_0x9F8AA94D6D97DBF4(bLocal_271, true);
											unk_0xE532F5D78798DAAB(joaat("s_m_y_airworker"));
											iLocal_391 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 58000f)
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_270))
									{
										if (unk_0xD031A9162D01088C("misstrevor4"))
										{
											if (!unk_0x1F0B79228E461EC9(bLocal_270, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0xEA47FE3719165B94(bLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, false, false, false, false);
											}
										}
									}
									if (!unk_0x84A2DD9AC37C35C1(bLocal_271))
									{
										if (unk_0xD031A9162D01088C("misstrevor4"))
										{
											if (!unk_0x1F0B79228E461EC9(bLocal_271, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0xEA47FE3719165B94(bLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, false, false, false, false);
											}
										}
									}
									iLocal_392 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(bLocal_270))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_270))
					{
						if (!unk_0x1F0B79228E461EC9(bLocal_270, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x7239B21A38F536BA(bLocal_271))
							{
								if (!unk_0x84A2DD9AC37C35C1(bLocal_271))
								{
									if (!unk_0x1F0B79228E461EC9(bLocal_271, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0xF66A602F829E2A06("misstrevor4");
										unk_0x2595DD4236549CE3(&bLocal_270);
										unk_0x2595DD4236549CE3(&bLocal_271);
									}
								}
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[8]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[8]))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 50200f)
										{
											if (iLocal_328 == 0)
											{
												unk_0x6683AB880E427778(iLocal_204[8], 1f);
												if (func_16(unk_0xD80958FC74E988A6(), iLocal_204[8], 1) < 100f)
												{
													unk_0x1D408577D440E81E(0.3f);
													iLocal_366 = 0;
													if (!unk_0xB65B60556E2A9225("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0x013A80FC08F6E4F2("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xA2297E18F3E71C2E(iLocal_204[8], 0f, 0f, 0f, true, 1500, 500, 100);
												}
												unk_0x0DC7CABAB1E9B67E(iLocal_204[8], true, 1);
												unk_0xD4D4F6A4AB575A33(iLocal_204[8], true, false);
												unk_0xE65F427EB70AB1ED(bLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[8], false, false, 0);
												unk_0x5AE11BC36633DE4E(false);
												iLocal_328 = 1;
											}
										}
										if (iLocal_328 == 1)
										{
											if (unk_0xC9D9444186B5A374() > 662)
											{
												if (unk_0xB65B60556E2A9225("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xDFE8422B3B94E688("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x1D408577D440E81E(1f);
												iLocal_366 = 1;
											}
											if (unk_0xC9D9444186B5A374() > 1872)
											{
												unk_0x54833611C17ABDEA(iLocal_204[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 50200f)
									{
										if (!unk_0x886E37EC497200B6(iLocal_204[8]))
										{
											if (iLocal_378 == 0)
											{
												unk_0xE65F427EB70AB1ED(bLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[8], false, false, 0);
												unk_0xBA71116ADF5B514C(iLocal_204[8], true, false);
												iLocal_378 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0)
					{
						if (iLocal_328 == 1)
						{
							if (unk_0xC9D9444186B5A374() > 662)
							{
								if (unk_0xB65B60556E2A9225("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xDFE8422B3B94E688("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x1D408577D440E81E(1f);
								iLocal_366 = 1;
							}
						}
					}
				}
				else if (iLocal_366 == 0)
				{
					if (iLocal_328 == 1)
					{
						if (unk_0xC9D9444186B5A374() > 662)
						{
							if (unk_0xB65B60556E2A9225("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xDFE8422B3B94E688("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x1D408577D440E81E(1f);
							iLocal_366 = 1;
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[11]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[11], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[11]))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 82683f)
										{
											if (iLocal_329 == 0)
											{
												unk_0xE65F427EB70AB1ED(bLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[11], false, false, 0);
												iLocal_329 = 1;
												unk_0x5AE11BC36633DE4E(false);
											}
											if (iLocal_329 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1872)
												{
													if (!unk_0x886E37EC497200B6(iLocal_204[11]))
													{
														unk_0x54833611C17ABDEA(iLocal_204[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!unk_0x886E37EC497200B6(iLocal_204[11]))
								{
									unk_0xE65F427EB70AB1ED(bLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[11], false, false, 0);
									unk_0xBA71116ADF5B514C(iLocal_204[11], true, false);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[12]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[12], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[12]))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 82463f)
										{
											if (iLocal_330 == 0)
											{
												unk_0xE65F427EB70AB1ED(bLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[12], false, false, 0);
												iLocal_330 = 1;
												unk_0x5AE11BC36633DE4E(false);
											}
											if (iLocal_330 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1000)
												{
													if (!unk_0x886E37EC497200B6(iLocal_204[12]))
													{
														unk_0x54833611C17ABDEA(iLocal_204[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0)
							{
								if (unk_0x1C8A4C2C19E68EEC(iLocal_204[12]))
								{
									if (unk_0x5746F3A7AB7FE544(iLocal_204[12]) > 22216f && func_16(bLocal_279, iLocal_204[12], 1) < 90f)
									{
										unk_0x1D408577D440E81E(0.3f);
										unk_0xA2297E18F3E71C2E(iLocal_204[12], 0f, 0f, 0f, true, 2000, 1000, 500);
										iLocal_245 = unk_0x9CD27B0045628463();
										iLocal_463 = 1;
									}
								}
							}
						}
						else if (iLocal_330 == 1)
						{
							if (iLocal_380 == 0)
							{
								if (!unk_0x886E37EC497200B6(iLocal_204[12]))
								{
									unk_0xE65F427EB70AB1ED(bLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[12], false, false, 0);
									unk_0xBA71116ADF5B514C(iLocal_204[12], true, false);
									iLocal_380 = 1;
								}
							}
						}
					}
				}
				if (iLocal_463 == 1)
				{
				}
				if (iLocal_462 == 0 && iLocal_463 == 1)
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[12]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[12], false))
						{
							Local_317 = { unk_0x3FEF770D40960D5A(iLocal_204[12], true) };
						}
					}
					Local_318 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
					if (unk_0x9CD27B0045628463() > iLocal_245 + 1579 || Local_318.f_1 < Local_317.f_1)
					{
						unk_0x1D408577D440E81E(1f);
						unk_0xF46C581C61718916(false);
						iLocal_462 = 1;
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 105000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 113000f)
							{
								unk_0xC9156DC11411A9EA(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[13]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[13], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[13]))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 108830f)
										{
											unk_0x59BF8C3D52C92F66(iLocal_204[13], false);
											unk_0x0DC7CABAB1E9B67E(iLocal_204[13], true, 1);
											unk_0x3910051CCECDB00C(iLocal_204[13], false);
											unk_0xC1B1E9A034A63A62(false);
											iLocal_431 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 1)
						{
							unk_0x6B76DC1F3AE6E6A3(iLocal_204[13], false, false);
							unk_0x8ABA6AF54B942B95(iLocal_204[13], true);
							unk_0x6B76DC1F3AE6E6A3(unk_0xBB40DD2270B65366(iLocal_204[13], -1, false), false, false);
						}
					}
				}
				if (iLocal_427 == 0)
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[5]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[5], false))
						{
							unk_0x60BF608F1B8CD1B6(iLocal_204[5], false);
							unk_0x3882114BDE571AD4(iLocal_204[5], true);
							iLocal_427 = 1;
						}
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_204[15]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[15], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[15]))
						{
							if (unk_0x7239B21A38F536BA(bLocal_278))
							{
								if (unk_0x4C241E39B23DF959(bLocal_278, false))
								{
									if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 104989f)
										{
											unk_0x54833611C17ABDEA(iLocal_204[15]);
											func_276(iLocal_204[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_276(iLocal_204[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0xBA71116ADF5B514C(iLocal_204[15], true, false);
											unk_0x293220DA1B46CEBC(4f, 4f, 4);
											unk_0xE65F427EB70AB1ED(-1, "Trevor_4_747_Carsplosion", iLocal_204[15], false, false, 0);
											unk_0x77ED170667F50170("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_278))
				{
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) > 112000f)
							{
								unk_0x9EEFB62EB27B5792("BB_MOLLY_2");
								unk_0xD3BD40951412FEF6("misssolomon_3");
								unk_0xD3BD40951412FEF6("move_f@film_reel_arms");
								iLocal_224 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_439 == 0)
				{
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, false, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_288[0]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_288[0], false))
					{
						unk_0x18EB48CFC41F2EA0(iLocal_288[0], 0f);
						unk_0x629BFA74418D6239(&(iLocal_288[0]));
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_275[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_275[0]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_275[0]);
						unk_0x2595DD4236549CE3(&(iLocal_275[0]));
					}
				}
				if (iLocal_394 == 0)
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 115000f)
								{
									unk_0x9EEFB62EB27B5792("Trev4_5");
									unk_0x963D27A58DF860AC(joaat("prop_cs_film_reel_01"));
									if (!unk_0xA41A05B6CB741B85())
									{
										unk_0xACCFB4ACF53551B0(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 120000f)
								{
									if (!unk_0xB65B60556E2A9225("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0x013A80FC08F6E4F2("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0xA6E9FDCB2C76785E(bLocal_278);
								}
								if (unk_0x5746F3A7AB7FE544(bLocal_278) > 125513f)
								{
									unk_0x54833611C17ABDEA(bLocal_278);
									unk_0x428CA6DBD1094446(bLocal_278, true);
									func_275();
									unk_0x2E05208086BA0651();
									unk_0x34F060F4BF92E018(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									unk_0xDFE8422B3B94E688("TREVOR_4_MAIN_CHASE");
									if (!unk_0xA7A932170592B50E(bLocal_303))
									{
										bLocal_303 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!unk_0xA7A932170592B50E(bLocal_302))
									{
										bLocal_302 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_236 = unk_0x9CD27B0045628463();
									unk_0x51669F7D1FB53D9F(true);
									unk_0xC5F0A8EBD3F361CE(0);
									iLocal_224 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_318 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				unk_0xA6E9FDCB2C76785E(bLocal_278);
				if (iLocal_439 == 0)
				{
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, false, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0xF1B760881820C952(Local_318, -930.7f, -2916.9f, 13.4f, true) < 45f)
					{
						iLocal_224 = 3;
					}
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0xE659E47AF827484B(bLocal_278))
						{
							if (iLocal_439 == 1)
							{
								iLocal_224 = 3;
							}
						}
					}
					if (unk_0x9CD27B0045628463() > iLocal_236 + 5000 && iLocal_439 == 1)
					{
						iLocal_224 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xA41A05B6CB741B85())
				{
					unk_0xC197616D221FF4A4();
				}
				unk_0xA6E9FDCB2C76785E(bLocal_278);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_415 == 0)
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (!unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (unk_0xD031A9162D01088C("misssolomon_3"))
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
									{
										if (!unk_0x7239B21A38F536BA(bLocal_295))
										{
											if (unk_0x98A4EB5D89A0C952(joaat("prop_cs_film_reel_01")))
											{
												bLocal_295 = unk_0x509D5878EB39E842(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
												unk_0x6B9BBD38AB0796DF(bLocal_295, bLocal_264, unk_0x3F428D08BE5AAE31(bLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
											}
										}
										if (!unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x428CA6DBD1094446(bLocal_278, false);
											bLocal_250 = unk_0x8C18E0F9080ADD73(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0xC77720A12FE14A86(bLocal_278, bLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0xEEA929141F699854(bLocal_264, bLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1000f, 0);
											unk_0x394B9CD12435C981(bLocal_250, false);
											unk_0x706D57B0F50DA710("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0)
				{
					if (iLocal_415 == 1)
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
						{
							if (unk_0x51210CED3DA1C78A(bLocal_264, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, false, true, 0))
							{
								if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x43D3807C077261E3(bLocal_264, -1000f, true);
								}
								unk_0xAAA34F8A7CB32098(bLocal_264);
								unk_0x9F8AA94D6D97DBF4(bLocal_264, true);
								unk_0x06843DA7060A026B(bLocal_264, -934.8388f, -2932.831f, 12.9649f, true, false, false, true);
								unk_0x8E2530AA8ADA980E(bLocal_264, 236.5739f);
								unk_0x0759591819534F7B(bLocal_264, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0xD031A9162D01088C("move_f@film_reel_arms"))
								{
									unk_0xEA47FE3719165B94(bLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, false, false, false);
								}
								iLocal_417 = 1;
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (iLocal_425 == 0)
					{
						if (iLocal_424 == 0)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
							{
								if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0xE4A310B1D7FA73CC(bLocal_250) > 0.18f || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -930.7f, -2916.9f, 13.4f, true) < 10f)
									{
										iLocal_225 = 0;
										iLocal_424 = 1;
									}
								}
							}
						}
						while (iLocal_424 == 1)
						{
							unk_0x208784099002BC30("M_LegalTrouble", 0);
							switch (iLocal_225)
							{
								case 0:
									unk_0xBFD8727AEA3CCEBA(bLocal_303, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, false, 1, 1, 2);
									unk_0xBFD8727AEA3CCEBA(bLocal_302, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, false, 1, 1, 2);
									unk_0x9FBDA379383A52A4(bLocal_302, bLocal_303, 4000, 1, 1);
									unk_0xA0EBB943C300E693(false);
									unk_0xA6294919E56FF02A(false);
									unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
									if (unk_0x7239B21A38F536BA(bLocal_287))
									{
										unk_0xEA386986E786A54F(&bLocal_287);
									}
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										unk_0x06843DA7060A026B(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -918.6157f, -2926.646f, 12.9667f, true, false, false, true);
										unk_0x8E2530AA8ADA980E(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 47.9465f);
									}
									else
									{
										unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -918.6157f, -2926.646f, 12.9667f, true, false, false, true);
										unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 47.9465f);
									}
									if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
									{
										func_17(&uLocal_490, 2, bLocal_264, "MOLLY", 0, 1);
										unk_0x129466ED55140F8D(bLocal_264, true);
									}
									unk_0x293220DA1B46CEBC(4f, 0f, 3);
									unk_0x48621C9FCA3EBD28(4);
									unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
									iLocal_451 = 0;
									iLocal_225++;
									break;
								
								case 1:
									if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
									{
										if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_451 == 0)
											{
												if (unk_0xE4A310B1D7FA73CC(bLocal_250) > 0.3f)
												{
													if (func_274(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x293220DA1B46CEBC(6f, 7f, 4);
														iLocal_451 = 1;
													}
												}
											}
											if (unk_0xE4A310B1D7FA73CC(bLocal_250) > 0.5f)
											{
												unk_0xBFD8727AEA3CCEBA(bLocal_303, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, false, 1, 1, 2);
												unk_0xBFD8727AEA3CCEBA(bLocal_302, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, false, 1, 1, 2);
												unk_0x9FBDA379383A52A4(bLocal_302, bLocal_303, 4000, 1, 1);
												iLocal_248 = unk_0x9CD27B0045628463();
												iLocal_225++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
									{
										if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_248 != -1 && unk_0xEE778F8C7E1142E2(0) == 4) && (unk_0x9CD27B0045628463() - iLocal_248) >= 2230)
											{
												unk_0x2206BF9A37B7F724("CamPushInNeutral", false, false);
												unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_248 = -1;
											}
											if (unk_0xE4A310B1D7FA73CC(bLocal_250) > 0.85f)
											{
												unk_0xA6294919E56FF02A(true);
												unk_0xA0EBB943C300E693(true);
												unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
												unk_0xB4EC2312F4E5B1F1(0f);
												bLocal_262 = 346732587;
												unk_0x6F8838D03D1DC226(bLocal_262, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, true, true, false);
												unk_0xB6E6FBA95C7324AC(bLocal_262, 1f, false, true);
												unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
												if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
												{
													unk_0xD3DBCE61A490BE02(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 0);
													if (unk_0xEE778F8C7E1142E2(1) != 4 && unk_0xEE778F8C7E1142E2(0) == 4)
													{
														unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), true, false);
													}
												}
												unk_0x129466ED55140F8D(bLocal_264, false);
												unk_0x81CBAE94390F9F89();
												unk_0x293220DA1B46CEBC(0f, 4f, 3);
												iLocal_237 = unk_0x9CD27B0045628463();
												iLocal_424 = 0;
												iLocal_425 = 1;
												iLocal_225++;
											}
										}
									}
									break;
							}
							unk_0x4EDE34FBADD967A6(false);
						}
					}
				}
				if (iLocal_425 == 1)
				{
					unk_0x6BAB9442830C7F53(bLocal_262, 5, false, true);
					if (iLocal_468 == 0)
					{
						if (unk_0x7239B21A38F536BA(bLocal_264))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
							{
								if (unk_0x20B60995556D004F(bLocal_264, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
								{
									unk_0x8D8686B622B88120(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, false, false, 0, false);
									iLocal_468 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0xB65B60556E2A9225("SOL_3_MAIN_CHASE"))
					{
						unk_0xDFE8422B3B94E688("SOL_3_MAIN_CHASE");
					}
					if (unk_0xB65B60556E2A9225("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xDFE8422B3B94E688("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0xB65B60556E2A9225("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0x013A80FC08F6E4F2("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					func_260();
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, false, true, 1))
				{
					if (iLocal_417 == 0)
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
						{
							if (unk_0x1F0B79228E461EC9(bLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x43D3807C077261E3(bLocal_264, -1000f, true);
							}
							unk_0xAAA34F8A7CB32098(bLocal_264);
							unk_0x9F8AA94D6D97DBF4(bLocal_264, true);
							unk_0x06843DA7060A026B(bLocal_264, -934.8388f, -2932.831f, 12.9649f, true, false, false, true);
							unk_0x8E2530AA8ADA980E(bLocal_264, 236.5739f);
							unk_0x0759591819534F7B(bLocal_264, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0xD031A9162D01088C("move_f@film_reel_arms"))
							{
								unk_0xEA47FE3719165B94(bLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, false, false, false);
							}
							iLocal_417 = 1;
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_284))
					{
						unk_0xEA386986E786A54F(&bLocal_284);
					}
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 5;
				}
				break;
			}
	}
}

void func_260()
{
	if (iLocal_401 == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[14]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[14], false))
			{
				bLocal_272 = unk_0xBB40DD2270B65366(iLocal_204[14], -1, false);
				unk_0xBF0FD6E56C964FCB(bLocal_272, joaat("weapon_pistol"), 1000, true, true);
				unk_0xAD738C3085FE7E11(bLocal_272, true, false);
				unk_0x9F8AA94D6D97DBF4(bLocal_272, true);
				unk_0x7AEFB85C1D49DEB6(bLocal_272, 5);
				unk_0x6B76DC1F3AE6E6A3(bLocal_272, 150, false);
				func_17(&uLocal_490, 3, bLocal_272, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_401 = 1;
	}
	else if (iLocal_400 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_272))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_272))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_272);
				unk_0x9D3151A373974804(bLocal_272, unk_0x3FEF770D40960D5A(bLocal_272, true), 5f, false, false);
				unk_0xE8854A4326B9E12B(&iLocal_304);
				unk_0x504D54DF3F6F2247(false, false, 0);
				unk_0x84D32B3BEC531324(false, unk_0xD80958FC74E988A6(), 5000, true);
				unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x39E72BC99E6360CB(iLocal_304);
				unk_0x5ABA3986D90D8A3B(bLocal_272, iLocal_304);
				unk_0x3841422E9C488D8C(&iLocal_304);
				iLocal_400 = 1;
			}
		}
	}
	else if (iLocal_434 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_272))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_272))
			{
				if (!unk_0x997ABD671D25CA0B(bLocal_272, false) && func_13(unk_0xD80958FC74E988A6(), bLocal_272) < 20f)
				{
					if (!func_273())
					{
						if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
						{
							func_17(&uLocal_490, 4, bLocal_272, "SOL3COP", 0, 1);
							if (func_261(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_434 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_261(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_272(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_262(sParam2, iParam4, 0);
}

int func_262(char* sParam0, int iParam1, bool bParam2)
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
					func_227();
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
		if (func_271(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_270();
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
				func_269();
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
				if (func_268())
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
			if (func_239())
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
			func_267();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_266();
		func_263();
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
		func_227();
	}
	return 0;
}

void func_263()
{
	if (!func_264())
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

int func_264()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_89())
	{
		return 0;
	}
	if (func_265(unk_0x4F8644AF03D0E0D6()))
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

bool func_265(bool bParam0)
{
	return func_171(bParam0, 20);
}

void func_266()
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

void func_267()
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

int func_268()
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

void func_269()
{
	if (func_59(14))
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
		Global_20266 = func_107();
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

void func_270()
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

bool func_271(int iParam0, int iParam1)
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

void func_272(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_273()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

bool func_274(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_272(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_262(sParam2, iParam3, 0);
}

void func_275()
{
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[0]))
	{
		unk_0x8F75998877616996(iLocal_667[0], false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[1]))
	{
		unk_0x8F75998877616996(iLocal_667[1], false);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_667[2]))
	{
		unk_0x8F75998877616996(iLocal_667[2], false);
	}
	if (iLocal_381 == 1)
	{
		unk_0x353FC880830B88FA(bLocal_259);
		iLocal_389 = 0;
	}
}

void func_276(bool bParam0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x1C8A4C2C19E68EEC(bParam0))
		{
			unk_0x54833611C17ABDEA(bParam0);
		}
		Var1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
		if (bParam4)
		{
			Var0 = { unk_0x1899F328B0E12848(bParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var2 = { func_277(Var0 - Var1) };
		Var2 = { Var2 * Vector(fParam3, fParam3, fParam3) };
		unk_0xC5F68BE9613E2D18(bParam0, 3, Var2, Param2, 0, false, true, true, false, true);
	}
}

Vector3 func_277(struct<3> Param0)
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

void func_278(bool bParam0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_166 < 15)
	{
		if (iLocal_166 == 0)
		{
			Local_181 = { 99999.9f, 99999.9f, 99999.9f };
			Local_182 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bParam0))
			{
				iVar0 = unk_0x42BC05C27A946054(bParam0);
				Var1 = { unk_0x92523B76657A517D(iVar0, (fParam1 + (unk_0xBBDA792448DB5A89((iLocal_166 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_181.f_0)
				{
					Local_181.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_181.f_1)
				{
					Local_181.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_181.f_2)
				{
					Local_181.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_182.f_0)
				{
					Local_182.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_182.f_1)
				{
					Local_182.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_182.f_2)
				{
					Local_182.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		unk_0x1EE7063B80FFC77C(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, true);
		Local_181 = { Local_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		Local_179 = { Local_181 };
		Local_180 = { Local_182 };
		unk_0xBF1A602B5BA52FEE(Local_179, Local_180, false, false);
		iLocal_166 = 0;
	}
}

void func_279()
{
	iLocal_89 = 1;
}

void func_280()
{
	if (iLocal_331 == 0)
	{
		if (unk_0x7239B21A38F536BA(bLocal_278))
		{
			if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
			{
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 55000f)
				{
					unk_0x963D27A58DF860AC(joaat("firetruk"));
					unk_0x963D27A58DF860AC(joaat("s_m_y_fireman_01"));
					unk_0xD3BD40951412FEF6("missheist_agency3aig_lift_waitped_a");
					if ((unk_0x98A4EB5D89A0C952(joaat("firetruk")) && unk_0x98A4EB5D89A0C952(joaat("s_m_y_fireman_01"))) && unk_0xD031A9162D01088C("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x7239B21A38F536BA(bLocal_282))
						{
							unk_0xA56F01F3765B93A0(-1129.566f, -2319.888f, 12.9445f, 10f, false, false, false, false);
							bLocal_282 = unk_0xAF35D0D2583051B0(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, true, true, false);
						}
						iLocal_667[0] = unk_0xE184F4F0DC5910E7("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (iLocal_381 == 0)
						{
							unk_0x8D8686B622B88120(bLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, false, false, 0, false);
							iLocal_381 = 1;
						}
						iLocal_667[1] = unk_0xE184F4F0DC5910E7("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, false, false, false, false);
						iLocal_667[2] = unk_0xE184F4F0DC5910E7("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (!unk_0x7239B21A38F536BA(bLocal_265[0]))
						{
							bLocal_265[0] = unk_0x7DD959874C1FD534(bLocal_282, 21, joaat("s_m_y_fireman_01"), -1, true, true);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[0], true);
							unk_0x971D38760FBC02EF(bLocal_265[0], true);
							unk_0x5190796ED39C9B6D(bLocal_265[0], -1147.07f, -2320.65f, 18.93f, 20f);
						}
						if (!unk_0x7239B21A38F536BA(bLocal_265[1]))
						{
							bLocal_265[1] = unk_0xD49F9B0955C367DE(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, true, true);
							unk_0xEA47FE3719165B94(bLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, false, false, false, false);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[1], true);
							unk_0x971D38760FBC02EF(bLocal_265[1], true);
						}
						if (!unk_0x7239B21A38F536BA(bLocal_265[2]))
						{
							bLocal_265[2] = unk_0xD49F9B0955C367DE(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, true, true);
							unk_0xEA47FE3719165B94(bLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, false, false, false, false);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[2], true);
							unk_0x971D38760FBC02EF(bLocal_265[2], true);
						}
						if (!unk_0x7239B21A38F536BA(bLocal_265[3]))
						{
							bLocal_265[3] = unk_0xD49F9B0955C367DE(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, true, true);
							unk_0xEA47FE3719165B94(bLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, false, false, false, false);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[3], true);
							unk_0x971D38760FBC02EF(bLocal_265[3], true);
						}
						unk_0xE532F5D78798DAAB(joaat("s_m_y_fireman_01"));
						unk_0xE532F5D78798DAAB(joaat("firetruk"));
						iLocal_331 = 1;
					}
				}
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (iLocal_465[0] == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_265[1]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_265[1]))
				{
					if (iLocal_466[0] == 0)
					{
						if (unk_0x1F0B79228E461EC9(bLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_466[0] = 1;
						}
					}
					if (iLocal_466[0] == 1)
					{
						if (!unk_0x1F0B79228E461EC9(bLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0x3EB1FE9E8E908E15(bLocal_265[1], -1);
							unk_0x971D38760FBC02EF(bLocal_265[1], true);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[1], false);
							iLocal_465[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[1] == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_265[2]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_265[2]))
				{
					if (iLocal_466[1] == 0)
					{
						if (unk_0x1F0B79228E461EC9(bLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_466[1] = 1;
						}
					}
					if (iLocal_466[1] == 1)
					{
						if (!unk_0x1F0B79228E461EC9(bLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0x3EB1FE9E8E908E15(bLocal_265[2], -1);
							unk_0x971D38760FBC02EF(bLocal_265[2], true);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[2], false);
							iLocal_465[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[2] == 0)
		{
			if (unk_0x7239B21A38F536BA(bLocal_265[3]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_265[3]))
				{
					if (iLocal_466[2] == 0)
					{
						if (unk_0x1F0B79228E461EC9(bLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_466[2] = 1;
						}
					}
					if (iLocal_466[2] == 1)
					{
						if (!unk_0x1F0B79228E461EC9(bLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0x3EB1FE9E8E908E15(bLocal_265[3], -1);
							unk_0x971D38760FBC02EF(bLocal_265[3], true);
							unk_0x9F8AA94D6D97DBF4(bLocal_265[3], false);
							iLocal_465[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_281()
{
	if (iLocal_402 == 0)
	{
		unk_0x963D27A58DF860AC(joaat("police3"));
		unk_0x963D27A58DF860AC(joaat("s_m_y_cop_01"));
		unk_0xAF514CABE74CBF15(true, "BB_AIChase");
		if (unk_0x98A4EB5D89A0C952(joaat("police3")) && unk_0x98A4EB5D89A0C952(joaat("s_m_y_cop_01")))
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 15500f)
					{
						unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
						iLocal_288[0] = unk_0xAF35D0D2583051B0(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, true, true, false);
						iLocal_275[0] = unk_0x7DD959874C1FD534(iLocal_288[0], 6, joaat("s_m_y_cop_01"), -1, true, true);
						unk_0x9F8AA94D6D97DBF4(iLocal_275[0], true);
						unk_0x153973AB99FE8980(iLocal_288[0], "SOL_3_POLICE_CARS_Group", 0f);
						func_127(iLocal_275[0], 0);
						unk_0x2497C4717C8B881E(iLocal_288[0], true, true, false);
						unk_0x3F878F92B3A7A071(iLocal_288[0], true, "BB_AIChase", true);
						unk_0xBF0FD6E56C964FCB(iLocal_275[0], joaat("weapon_pistol"), 1000, true, true);
						unk_0xF4924635A19EB37D(iLocal_288[0], true);
						unk_0xE532F5D78798DAAB(joaat("police3"));
						unk_0xE532F5D78798DAAB(joaat("s_m_y_cop_01"));
						iLocal_402 = 1;
					}
				}
			}
		}
	}
	if (iLocal_402 == 1)
	{
		if (iLocal_429[0] == 0)
		{
			if (unk_0x7239B21A38F536BA(iLocal_288[0]))
			{
				if (unk_0x4C241E39B23DF959(iLocal_288[0], false))
				{
					if (unk_0x1C8A4C2C19E68EEC(iLocal_288[0]))
					{
						unk_0x6683AB880E427778(iLocal_288[0], fLocal_321);
						if (unk_0x5746F3A7AB7FE544(iLocal_288[0]) > 13000f)
						{
							unk_0x54833611C17ABDEA(iLocal_288[0]);
						}
					}
					else if (unk_0x7239B21A38F536BA(iLocal_275[0]))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_275[0]))
						{
							unk_0x9F8AA94D6D97DBF4(iLocal_275[0], true);
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								unk_0x3C08A8E30363B353(iLocal_275[0], unk_0xD80958FC74E988A6());
								unk_0x971D38760FBC02EF(iLocal_275[0], true);
							}
							else
							{
								unk_0xF166E48407BAC484(iLocal_275[0], unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x971D38760FBC02EF(iLocal_275[0], true);
							}
							unk_0xF1160ACCF98A3FC8(true, "BB_AIChase");
							iLocal_238 = unk_0x9CD27B0045628463();
							iLocal_429[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_430[0] == 0)
		{
			if (iLocal_429[0] == 1)
			{
				if (unk_0x9CD27B0045628463() > iLocal_238 + 500)
				{
					if (unk_0x7239B21A38F536BA(iLocal_275[0]))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_275[0]))
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								unk_0xCC665AAC360D31E7(iLocal_275[0], 16, true);
								unk_0xCC665AAC360D31E7(iLocal_275[0], 1, true);
								iLocal_430[0] = 1;
							}
							else
							{
								iLocal_430[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_282()
{
	if (!iLocal_333)
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[20], false))
		{
			bLocal_301 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
			unk_0x026FB97D0A425F84(bLocal_301, true);
			iLocal_334 = 0;
			iLocal_333 = 1;
		}
	}
	else if (func_297(&uLocal_28, 1, 0, 0) && iLocal_405 == 0)
	{
		if (unk_0x4D79439A6B55AC67())
		{
			unk_0x8DFCED7A656F8802(true);
		}
		if (func_273())
		{
			unk_0xCC33FA791322B9D9();
			func_224();
		}
		if (iLocal_363[2] == 0)
		{
			if (!unk_0xB65B60556E2A9225("SOL_3_CHOPPER_CAM"))
			{
				unk_0x013A80FC08F6E4F2("SOL_3_CHOPPER_CAM");
			}
			unk_0x67C540AA08E4A6F5(bLocal_261, "Trevor_4_747_TV", false, true);
			iLocal_363[2] = 1;
		}
		func_288(1, 1, 30, 5, 0);
		if (iLocal_352 == 0)
		{
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_TEXT");
			func_287("TRV4_NEWS1");
			func_287("");
			unk_0xC6796A8FFA375E53();
			iLocal_352 = 1;
		}
		if (iLocal_353 == 0)
		{
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(1f);
			unk_0xD69736AAE04DB51A(0f);
			func_287("TRV4_NEWS2");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(0f);
			unk_0xD69736AAE04DB51A(0f);
			func_287("TRV4_NEWS6");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(0f);
			unk_0xD69736AAE04DB51A(1f);
			func_287("TRV4_NEWS7");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(0f);
			unk_0xD69736AAE04DB51A(2f);
			func_287("TRV4_NEWS8");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(0f);
			unk_0xD69736AAE04DB51A(3f);
			func_287("TRV4_NEWS9");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(0f);
			unk_0xD69736AAE04DB51A(4f);
			func_287("TRV4_NEWS10");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(iLocal_305, "DISPLAY_SCROLL_TEXT");
			unk_0xD69736AAE04DB51A(1f);
			unk_0xD69736AAE04DB51A(0f);
			unk_0xC6796A8FFA375E53();
			iLocal_243 = (unk_0x9CD27B0045628463() - 5000);
			iLocal_353 = 1;
		}
		if (unk_0x9CD27B0045628463() > iLocal_243 + 5000)
		{
			func_286();
			iLocal_243 = unk_0x9CD27B0045628463();
		}
		if (iLocal_354 == 0)
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 25000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 50000f)
					{
						unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(1f);
						func_287("TRV4_NEWS5");
						unk_0xC6796A8FFA375E53();
						unk_0xF6E48914C7A8694E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(1f);
						unk_0xC6796A8FFA375E53();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 77600f && unk_0x5746F3A7AB7FE544(bLocal_278) < 115000f)
					{
						unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(2f);
						func_287("TRV4_NEWS3");
						unk_0xC6796A8FFA375E53();
						unk_0xF6E48914C7A8694E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(2f);
						unk_0xC6796A8FFA375E53();
						iLocal_355 = 1;
					}
				}
			}
		}
		if (iLocal_356 == 0)
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 115000f)
					{
						unk_0xF6E48914C7A8694E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(3f);
						func_287("TRV4_NEWS4");
						unk_0xC6796A8FFA375E53();
						unk_0xF6E48914C7A8694E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD69736AAE04DB51A(1f);
						unk_0xD69736AAE04DB51A(3f);
						unk_0xC6796A8FFA375E53();
						iLocal_356 = 1;
					}
				}
			}
		}
		unk_0x5F15302936E07111(iLocal_226);
		unk_0x0DF606929C105BE1(iLocal_305, 255, 255, 255, false, 0);
		if (iLocal_334 == 0)
		{
			func_238(1, 1, 1, 0);
			unk_0x6A25241C340D3822(bLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x026FB97D0A425F84(bLocal_301, true);
			unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			unk_0xA0EBB943C300E693(false);
			unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
			func_285();
			iLocal_334 = 1;
		}
		func_283();
		unk_0x6806C51AD12B83B8(6);
		unk_0x6806C51AD12B83B8(7);
		unk_0x6806C51AD12B83B8(8);
		unk_0x6806C51AD12B83B8(9);
		unk_0x6806C51AD12B83B8(1);
		unk_0x6806C51AD12B83B8(2);
		unk_0x6806C51AD12B83B8(15);
		unk_0x6806C51AD12B83B8(3);
		unk_0xFE99B66D079CF6BC(0, 85, true);
		unk_0xF7F26C6E9CC9EBB8(false);
	}
	else if (iLocal_334)
	{
		func_238(0, 1, 1, 0);
		unk_0x026FB97D0A425F84(bLocal_301, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0xA0EBB943C300E693(true);
		if (unk_0xB65B60556E2A9225("SOL_3_CHOPPER_CAM"))
		{
			unk_0xDFE8422B3B94E688("SOL_3_CHOPPER_CAM");
		}
		unk_0xA3B0C41BA5CC0BB5(bLocal_261);
		func_258();
		unk_0xF7F26C6E9CC9EBB8(true);
		iLocal_363[2] = 0;
		iLocal_334 = 0;
	}
}

void func_283()
{
	unk_0xEB2D525B57F42B40();
	func_284();
}

void func_284()
{
	Global_23011.f_134 = 1;
}

void func_285()
{
	Global_63161 = 1;
}

void func_286()
{
	if (bLocal_228 > 4)
	{
		bLocal_228 = false;
	}
	unk_0xF6E48914C7A8694E(iLocal_305, "DISPLAY_SCROLL_TEXT");
	unk_0xC3D0841A0CC546A6(false);
	unk_0xC3D0841A0CC546A6(bLocal_228);
	unk_0xC6796A8FFA375E53();
	bLocal_228++;
}

void func_287(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_288(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_296())
	{
		func_296();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_295(1, 200);
		if (bLocal_48 <= bParam2 && iLocal_43 == 0)
		{
			bLocal_48++;
			func_292(1, bLocal_48);
			if (bLocal_48 == bParam2)
			{
				iLocal_43 = 1;
				bLocal_49 = unk_0xD53343AA4FB7DD28(bParam3, bParam2);
			}
		}
		else if (bLocal_48 > 0)
		{
			if (bLocal_48 > bLocal_49)
			{
				bLocal_48 = (bLocal_48 - 1);
				func_292(1, bLocal_48);
				if (bLocal_48 == bLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_289(1, 40, 1, 1, 1);
		}
	}
}

void func_289(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_296())
	{
		func_296();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_291(0))
			{
				func_290(0);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, bParam1, false, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_291(1))
			{
				func_290(1);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, bParam1, false, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_291(2))
			{
				func_290(2);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, bParam1, false, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_290(bool bParam0)
{
	if (bParam0 < 32)
	{
		unk_0x933D6A9EEC1BACD0(&uLocal_54, bParam0);
	}
}

int func_291(bool bParam0)
{
	if (BitTest(uLocal_54, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_292(bool bParam0, bool bParam1)
{
	if (!func_296())
	{
		func_296();
	}
	else if (bParam0)
	{
		iLocal_46 = func_294(5);
		bLocal_45 = unk_0xD53343AA4FB7DD28(false, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_294(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_291(3))
			{
				func_290(3);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_293(bLocal_40)), (1f * func_293(bLocal_41)), 0f, 255, 255, 255, bParam1, false, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_291(4))
			{
				func_290(4);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_293(bLocal_40)), (1f * func_293(bLocal_41)), 0f, 255, 255, 255, bParam1, false, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_291(5))
			{
				func_290(5);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_293(bLocal_40)), (1f * func_293(bLocal_41)), 0f, 255, 255, 255, bParam1, false, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_291(6))
			{
				func_290(6);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_293(bLocal_40)), (1f * func_293(bLocal_41)), 0f, 255, 255, 255, bParam1, false, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_291(7))
			{
				func_290(7);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_293(bLocal_40)), (1f * func_293(bLocal_41)), 0f, 255, 255, 255, bParam1, false, 0);
			}
		}
	}
}

float func_293(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

bool func_294(bool bParam0)
{
	if (unk_0xD53343AA4FB7DD28(false, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0xD53343AA4FB7DD28(false, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0xD53343AA4FB7DD28(false, bParam0);
}

void func_295(bool bParam0, bool bParam1)
{
	if (!func_296())
	{
		func_296();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_291(8))
			{
				func_290(8);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, bParam1, false, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_291(8))
			{
				func_290(8);
			}
			else
			{
				unk_0xE7FFAE5EBF23D890("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, bParam1, false, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_296()
{
	unk_0xDFA2EF8E04127DD5("digitalOverlay", false);
	if (unk_0x0145F696AAAAD2E4("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_297(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_303(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_302(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_302(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_303(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_301(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_303(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_302(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_302(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_303(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_303(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_302(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_302(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_303(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_300(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_300(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_301(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_312(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_298();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_298()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

int func_299(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_312(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_300(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_312(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_302(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_312(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_312(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_304(bool bParam0)
{
	if (bParam0)
	{
		func_310();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_309(0))
		{
			func_305(0);
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

void func_305(int iParam0)
{
	if (func_308())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_307())
		{
			func_306(1, 1);
		}
		else
		{
			func_306(0, 0);
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
	if (!func_239())
	{
		Global_20266.f_1 = 3;
	}
}

void func_306(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_309(0))
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

bool func_307()
{
	return BitTest(Global_1958711, 5);
}

bool func_308()
{
	return BitTest(Global_1958711, 19);
}

int func_309(int iParam0)
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

void func_310()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_311(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_312(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_309(0))
	{
		return 0;
	}
	if (func_319())
	{
		return 0;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	if ((func_318() || func_317(Global_4718592.f_168757)) || func_316())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_315(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_314(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_313(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_313(bool bParam0)
{
	if (bParam0 != func_89())
	{
		if (func_193(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_193(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_314(bool bParam0, bool bParam1)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
		{
			switch (bParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xE38E9162A2500646(bParam0, bParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

bool func_315(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x997ABD671D25CA0B(bParam0, bParam1))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam0, bParam1);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				bVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(bVar0));
				if (bVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < bVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!unk_0x22AC59A870E6A669(bVar0, bVar3, false))
					{
						if (unk_0xBB40DD2270B65366(bVar0, bVar3, false) == bParam0)
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

var func_316()
{
	return Global_2714762.f_19;
}

bool func_317(int iParam0)
{
	return iParam0 == 51;
}

var func_318()
{
	return Global_2714762.f_18;
}

bool func_319()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

void func_320(bool bParam0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		if (unk_0x1C8A4C2C19E68EEC(bParam1))
		{
			unk_0x6683AB880E427778(bParam1, fParam2);
			Var0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
			Var1 = { unk_0xAFBD61CC738D9EB9(bParam1, 2) };
			unk_0x4D41783FB745E42E(bParam0, Var0);
			unk_0x85973643155D0B07(bParam0, Var1, 2);
		}
	}
}

void func_321(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		unk_0xEA1C610A04DB6BBB(bParam1, false, false);
		unk_0x1A9205C1B9EE827F(bParam1, false, false);
		unk_0x3882114BDE571AD4(bParam1, true);
		unk_0xFAEE099C6F890BB8(bParam1, true, true, true, true, true, false, false, false);
		unk_0x3F878F92B3A7A071(bParam1, bParam3, bParam2, true);
		Var0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		unk_0x4D41783FB745E42E(bParam0, Var0);
		unk_0x85973643155D0B07(bParam0, unk_0xAFBD61CC738D9EB9(bParam1, 2), 2);
	}
}

void func_322()
{
	if (bLocal_260 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_374 == 0)
			{
				unk_0x353FC880830B88FA(bLocal_260);
				iLocal_384 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (bLocal_255 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_376 == 0)
			{
				unk_0x353FC880830B88FA(bLocal_255);
				iLocal_385 = 0;
				iLocal_376 = 1;
			}
		}
	}
	if (bLocal_256 != -1)
	{
		if (iLocal_383 == 1)
		{
			if (iLocal_365 == 0)
			{
				unk_0x353FC880830B88FA(bLocal_256);
				iLocal_386 = 0;
				iLocal_365 = 1;
			}
		}
	}
	if (bLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_375 == 0)
			{
				unk_0x353FC880830B88FA(bLocal_257);
				iLocal_387 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (bLocal_258 != -1)
	{
		if (iLocal_380 == 1)
		{
			if (iLocal_377 == 0)
			{
				unk_0x353FC880830B88FA(bLocal_258);
				iLocal_388 = 0;
				iLocal_377 = 1;
			}
		}
	}
}

void func_323()
{
	if (unk_0x7239B21A38F536BA(iLocal_204[19]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[19], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[19]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[19], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[7]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[7], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[7]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[7], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[8]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[8], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[8]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[8], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[9]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[9], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[9]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[9], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[10]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[10], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[10]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[10], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[11]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[11], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[11]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[11], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[13]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[13], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[13]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[13], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[14]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[14], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[14]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[14], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[15]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[15], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[15]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[15], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[16]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[16], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[16]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[16], true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[17]))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_204[17], false))
		{
			if (!unk_0x4C9BF537BE2634B2(iLocal_204[17]))
			{
				unk_0xF4924635A19EB37D(iLocal_204[17], true);
			}
		}
	}
}

void func_324()
{
	if (func_355())
	{
		fLocal_322 = 0.5f;
	}
	else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x53AF99BAA671CA47(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > 40f)
		{
			fLocal_322 = 0.85f;
		}
		else
		{
			fLocal_322 = 0.9f;
		}
	}
	else
	{
		fLocal_322 = 0.9f;
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_278, false))
	{
		if (unk_0x4C241E39B23DF959(bLocal_278, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
			{
				if (iLocal_357 == 0)
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) < 10000f)
					{
						if (func_16(unk_0xD80958FC74E988A6(), bLocal_278, 1) < 100f || unk_0xE659E47AF827484B(bLocal_278))
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
						else
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
					}
				}
				else if (func_16(unk_0xD80958FC74E988A6(), bLocal_278, 1) > 175f)
				{
					fLocal_321 = 0.6f;
					unk_0x6683AB880E427778(bLocal_278, fLocal_321);
					func_325(bLocal_278, fLocal_321);
				}
				else if (unk_0x5746F3A7AB7FE544(bLocal_278) < 10000f)
				{
					func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_322, 0);
					unk_0x6683AB880E427778(bLocal_278, fLocal_321);
					func_325(bLocal_278, fLocal_321);
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 10000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 23000f)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
					{
						func_351(iLocal_204[8], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 23000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 32000f)
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[7]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[7], false))
						{
							func_351(iLocal_204[7], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
						else if (unk_0x7239B21A38F536BA(iLocal_204[8]))
						{
							if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
							{
								func_351(iLocal_204[8], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
								unk_0x6683AB880E427778(bLocal_278, fLocal_321);
								func_325(bLocal_278, fLocal_321);
							}
							else
							{
								func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
								unk_0x6683AB880E427778(bLocal_278, fLocal_321);
								func_325(bLocal_278, fLocal_321);
							}
						}
						else
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
					}
					else if (unk_0x7239B21A38F536BA(iLocal_204[8]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
						{
							func_351(iLocal_204[8], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
						else
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 32000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 39000f)
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[7]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[7], false))
						{
							func_351(iLocal_204[7], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
						else
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 39000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 56000f)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
					{
						func_351(iLocal_204[8], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 56000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 65000f)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[11], false))
					{
						func_351(iLocal_204[11], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 65000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 90000f)
				{
					if (unk_0x7239B21A38F536BA(iLocal_204[13]))
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[13], false))
						{
							func_351(iLocal_204[13], unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
						else
						{
							func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
							unk_0x6683AB880E427778(bLocal_278, fLocal_321);
							func_325(bLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x6683AB880E427778(bLocal_278, fLocal_321);
						func_325(bLocal_278, fLocal_321);
					}
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 90000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 110000f)
				{
					func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_322, 1);
					unk_0x6683AB880E427778(bLocal_278, fLocal_321);
					func_325(bLocal_278, fLocal_321);
				}
				if (unk_0x5746F3A7AB7FE544(bLocal_278) > 110000f)
				{
					func_351(bLocal_278, unk_0xD80958FC74E988A6(), &fLocal_321, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_322, 0);
					unk_0x6683AB880E427778(bLocal_278, fLocal_321);
					func_325(bLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_325(bool bParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	fVar0 = unk_0x15C40837039FFAF7();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_350();
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				unk_0xA56F01F3765B93A0(Var1, 1000f, true, false, false, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_221();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0x245A6883D966D537(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bParam0))
			{
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					if (func_349(unk_0xD80958FC74E988A6(), bParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_130 = unk_0x5746F3A7AB7FE544(bParam0);
				unk_0x6683AB880E427778(bParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_348(bParam0, fLocal_130);
					func_347(bParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0)
						{
							func_346(bParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_172) * 2000f));
						func_345(bParam0, fVar0, bLocal_134);
						bLocal_172++;
						if (bLocal_172 > 2)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						bLocal_172 = false;
						fLocal_135 = (fLocal_135 + (unk_0x15C40837039FFAF7() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(bParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_130 == 0f || unk_0xB16FCE9DDC7BA182())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_342(bParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_341(bParam0);
			}
			if (!iLocal_75)
			{
				func_328(bParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					bLocal_206 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					Local_176 = { unk_0x3FEF770D40960D5A(bLocal_206, true) };
					unk_0x7B3703D2D32DFA18(bLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0x7239B21A38F536BA(bLocal_206))
			{
				func_213(bLocal_207);
				bLocal_207 = bLocal_206;
			}
			if (unk_0x4C241E39B23DF959(bLocal_207, false))
			{
				unk_0x06843DA7060A026B(bLocal_207, Local_176, true, false, false, true);
				unk_0x77B21BE7AC540F07(bLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_326(&bParam0, fLocal_129))
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_326(bool bParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_208();
		if (unk_0x4C241E39B23DF959(*bParam0, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(*bParam0))
			{
				unk_0x54833611C17ABDEA(*bParam0);
				unk_0x115722B1B9C14C1C(*bParam0);
			}
			if (!bLocal_159 == -1)
			{
				while (!func_327(bParam0, bLocal_159, fParam1, 1, 0, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(false);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_133 = 0f;
					iLocal_160 = 0;
					iLocal_162 = 0;
					iLocal_161 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_158 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
					iLocal_165 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0x4C241E39B23DF959(*bParam0, false))
		{
			if (unk_0x1C8A4C2C19E68EEC(*bParam0))
			{
				unk_0x6683AB880E427778(*bParam0, ((1f * fLocal_131) * fLocal_133));
				func_327(bParam0, bLocal_159, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0;
		iLocal_169 = 0;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_328(*bParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_342(*bParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_341(*bParam0);
		if ((iLocal_163 == 0 && iLocal_164 == 0) && iLocal_165 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_327(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (bParam1 > 0)
	{
		unk_0xAF514CABE74CBF15(bParam1, &cLocal_185);
		if (unk_0x300D614A4C785FC4(bParam1, &cLocal_185))
		{
			if (unk_0x4C241E39B23DF959(*uParam0, false))
			{
				if (!unk_0x1C8A4C2C19E68EEC(*uParam0))
				{
					unk_0x428CA6DBD1094446(*uParam0, false);
					if (bParam4)
					{
						unk_0x29DE5FA52D00428C(*uParam0, bParam1, &cLocal_185, 10f, 786603);
					}
					else
					{
						if (bParam1 != iLocal_167 && bParam1 != iLocal_168)
						{
							if (bParam7)
							{
								unk_0x7D80FD645D4DA346(*uParam0, bParam1, &cLocal_185, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x7D80FD645D4DA346(*uParam0, bParam1, &cLocal_185, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x3F878F92B3A7A071(*uParam0, bParam1, &cLocal_185, true);
							}
						}
						else
						{
							unk_0x3F878F92B3A7A071(*uParam0, bParam1, &cLocal_185, true);
						}
						unk_0x9438F7AD68771A20(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x1F2E4E06DEA8992B(*uParam0, true);
						}
						return 1;
					}
				}
				else if (unk_0x42BC05C27A946054(*uParam0) == unk_0x21543C612379DB3C(bParam1, &cLocal_185))
				{
					fVar0 = unk_0x5746F3A7AB7FE544(*uParam0);
					unk_0x9438F7AD68771A20(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x54833611C17ABDEA(*uParam0);
						unk_0xAF514CABE74CBF15(bParam1, &cLocal_185);
					}
					if (bParam5)
					{
						unk_0x1F2E4E06DEA8992B(*uParam0, true);
					}
					return 1;
				}
				else
				{
					unk_0x54833611C17ABDEA(*uParam0);
					unk_0x428CA6DBD1094446(*uParam0, false);
					if (bParam4)
					{
						unk_0x29DE5FA52D00428C(*uParam0, bParam1, &cLocal_185, 10f, 786603);
					}
					else if (bParam1 != iLocal_167 && bParam1 != iLocal_168)
					{
						if (bParam7)
						{
							unk_0x7D80FD645D4DA346(*uParam0, bParam1, &cLocal_185, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x7D80FD645D4DA346(*uParam0, bParam1, &cLocal_185, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x3F878F92B3A7A071(*uParam0, bParam1, &cLocal_185, true);
						}
					}
					else
					{
						unk_0x3F878F92B3A7A071(*uParam0, bParam1, &cLocal_185, true);
					}
					unk_0x9438F7AD68771A20(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x1F2E4E06DEA8992B(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_328(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6());
	bVar10 = unk_0xB8EB95E5B4E56978();
	bVar11 = unk_0xEACEEDA81751915C();
	bVar12 = false;
	if (bVar9)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar2 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
		Var5 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 35)
		{
			if (iLocal_153[iVar0] != 99)
			{
				if (iLocal_153[iVar0] == 0)
				{
					if (iLocal_152[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (func_340(iLocal_197[iVar0]))
								{
									unk_0x933D6A9EEC1BACD0(&(iLocal_154[iVar0]), false);
								}
								else if (unk_0xB50C0B0CEDC6CE84(iLocal_197[iVar0]))
								{
									unk_0x933D6A9EEC1BACD0(&(iLocal_154[iVar0]), 2);
								}
								unk_0xE80492A9AC099A93(&(iLocal_154[iVar0]), true);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_339(iLocal_152[iVar0]))
								{
									if (func_340(iLocal_197[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_154[iVar0]), false);
									}
									else if (unk_0xB50C0B0CEDC6CE84(iLocal_197[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_154[iVar0]), 2);
									}
									unk_0xE80492A9AC099A93(&(iLocal_154[iVar0]), true);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 99;
					}
				}
				else if (iLocal_153[iVar0] == 1)
				{
					bVar8 = false;
					unk_0xAF514CABE74CBF15(iLocal_152[iVar0], &cLocal_185);
					if (BitTest(iLocal_154[iVar0], 0))
					{
						unk_0x963D27A58DF860AC(func_217());
						bVar8 = unk_0x98A4EB5D89A0C952(func_217());
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && bVar10) || (BitTest(iLocal_154[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						unk_0x963D27A58DF860AC(func_220());
						bVar8 = unk_0x98A4EB5D89A0C952(func_220());
					}
					if (bVar8)
					{
						if (!unk_0x7239B21A38F536BA(iLocal_204[iVar0]))
						{
							unk_0x963D27A58DF860AC(iLocal_197[iVar0]);
							if (unk_0x98A4EB5D89A0C952(iLocal_197[iVar0]) && unk_0x300D614A4C785FC4(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_338(Local_175[iVar0 /*3*/], Var5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_337(Local_175[iVar0 /*3*/], Var5, bLocal_134);
										}
										iLocal_204[iVar0] = unk_0xAF35D0D2583051B0(iLocal_197[iVar0], Local_175[iVar0 /*3*/], false, false, false, false);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											unk_0x60BF608F1B8CD1B6(iLocal_204[iVar0], false);
										}
										if (uLocal_98 && !BitTest(iLocal_154[iVar0], 0))
										{
											func_336(iLocal_204[iVar0]);
										}
										if (BitTest(iLocal_154[iVar0], 3))
										{
											unk_0x3910051CCECDB00C(iLocal_204[iVar0], true);
										}
										unk_0x239A3351AC1DA385(iLocal_204[iVar0], Local_175[iVar0 /*3*/], false, false, true);
										unk_0x77B21BE7AC540F07(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (unk_0x7F6DB52EEFC96DF8(iLocal_197[iVar0]) || unk_0xB50C0B0CEDC6CE84(iLocal_197[iVar0]))
										{
											unk_0x49733E92263139D1(iLocal_204[iVar0], 5f);
										}
										if (!BitTest(iLocal_154[iVar0], 0))
										{
											unk_0x2497C4717C8B881E(iLocal_204[iVar0], true, true, false);
											if (unk_0x25223CA6B4D20B7F() > 19 || unk_0x25223CA6B4D20B7F() < 7)
											{
												unk_0x34E710FF01247C5A(iLocal_204[iVar0], 3);
											}
										}
										unk_0x428CA6DBD1094446(iLocal_204[iVar0], true);
										unk_0xE532F5D78798DAAB(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 1);
										iLocal_153[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x5F9532F3B5CC2551(iLocal_204[iVar0], false) && unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
						{
							unk_0x239A3351AC1DA385(iLocal_204[iVar0], Local_175[iVar0 /*3*/], false, false, true);
							unk_0x77B21BE7AC540F07(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (unk_0x7F6DB52EEFC96DF8(iLocal_197[iVar0]) || unk_0xB50C0B0CEDC6CE84(iLocal_197[iVar0]))
							{
								unk_0x49733E92263139D1(iLocal_204[iVar0], 5f);
							}
							unk_0x428CA6DBD1094446(iLocal_204[iVar0], true);
							unk_0xE532F5D78798DAAB(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 1);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 2)
				{
					unk_0xAF514CABE74CBF15(iLocal_152[iVar0], &cLocal_185);
					if (!BitTest(iLocal_154[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_154[iVar0], 0))
						{
							unk_0x963D27A58DF860AC(func_217());
							bVar8 = unk_0x98A4EB5D89A0C952(func_217());
							iVar13 = 2;
						}
						else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && bVar10) || (BitTest(iLocal_154[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							unk_0x963D27A58DF860AC(func_220());
							bVar8 = unk_0x98A4EB5D89A0C952(func_220());
							iVar13 = 0;
						}
						if (!unk_0x5F9532F3B5CC2551(iLocal_204[iVar0], false))
						{
							if (!bLocal_106 && unk_0x22AC59A870E6A669(iLocal_204[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_204[iVar0], true), Var5) < 10000f || bParam2) || iLocal_89)
									{
										func_334(&(iLocal_204[iVar0]), iVar13, 1);
										unk_0x933D6A9EEC1BACD0(&(iLocal_154[iVar0]), true);
									}
								}
							}
						}
					}
					if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (14 > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (unk_0x300D614A4C785FC4(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < unk_0x0E48D1C262390950(iLocal_152[iVar0], &cLocal_185))
									{
										Var3 = { unk_0x3FEF770D40960D5A(iLocal_204[iVar0], true) };
										Var4 = { unk_0xD242728AA6F0FBA2(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_338(Var3, Var5, 5f, fLocal_141) && func_338(Var4, Var5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!BitTest(iLocal_154[iVar0], 1))
											{
												func_334(&(iLocal_204[iVar0]), iVar13, 1);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || BitTest(iLocal_154[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_327(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0x6683AB880E427778(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
												{
													if (BitTest(iLocal_154[iVar0], 0))
													{
														unk_0x2497C4717C8B881E(iLocal_204[iVar0], true, true, false);
														unk_0xF4924635A19EB37D(iLocal_204[iVar0], true);
														unk_0x34E710FF01247C5A(iLocal_204[iVar0], 2);
														if (!unk_0xB50C0B0CEDC6CE84(iLocal_197[iVar0]))
														{
															unk_0x1FEF0683B96EBCF2(iLocal_204[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_154[iVar0], 1))
												{
													func_334(&(iLocal_204[iVar0]), iVar13, 1);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_154[iVar0], 1))
										{
											func_334(&(iLocal_204[iVar0]), iVar13, 1);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_154[iVar0], 1))
								{
									func_334(&(iLocal_204[iVar0]), iVar13, 1);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_154[iVar0], 1))
						{
							func_334(&(iLocal_204[iVar0]), iVar13, 1);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 3)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_204[iVar0]))
						{
							bVar1 = unk_0xBB40DD2270B65366(iLocal_204[iVar0], -1, false);
							if (!unk_0x84A2DD9AC37C35C1(bVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_204[iVar0])) || func_333(iLocal_204[iVar0])))
									{
										if (unk_0x7239B21A38F536BA(bVar2))
										{
											bVar8 = false;
											if (bLocal_97)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = unk_0xD5037BA82E12416F(bVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (unk_0x73D57CFFDD12C355((fVar7 - unk_0xD5037BA82E12416F(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_332(iLocal_204[iVar0], bVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_330(bVar2, iLocal_204[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_329(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x6683AB880E427778(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 4)
				{
					if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							bVar1 = unk_0xBB40DD2270B65366(iLocal_204[iVar0], -1, false);
							if (!unk_0x84A2DD9AC37C35C1(bVar1))
							{
								unk_0x6683AB880E427778(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
							}
							if (unk_0x300D614A4C785FC4(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + unk_0x0E48D1C262390950(iLocal_152[iVar0], &cLocal_185)))
								{
									unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
								}
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 5)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (unk_0x4C241E39B23DF959(iLocal_204[iVar0], false))
						{
							bVar1 = unk_0xBB40DD2270B65366(iLocal_204[iVar0], -1, false);
							if (!unk_0x84A2DD9AC37C35C1(bVar1))
							{
								iVar14 = unk_0x77F1BEB8863288D5(bVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = unk_0xD5037BA82E12416F(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									unk_0x5C9B84BD7D31D908(bVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0)
							{
								unk_0xF1160ACCF98A3FC8(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_213(iLocal_204[iVar0]);
							}
						}
						else if (unk_0x7239B21A38F536BA(iLocal_204[iVar0]))
						{
							unk_0xEA386986E786A54F(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 1);
					iLocal_153[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_212();
	}
}

void func_329(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_214(bParam0);
		unk_0xA549C3B37EA28131(bParam0, 786603);
	}
}

int func_330(bool bParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	if (unk_0x4C241E39B23DF959(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		if (bParam2)
		{
			Var5 = { unk_0x4805D2B1D8CF94A9(bParam1) };
			Var4 = { Var5 / FtoV(unk_0x652D2EEEF1D3E62C(Var5)) };
		}
		else
		{
			Var2 = { unk_0x1899F328B0E12848(bParam1, 0f, 5f, 0f) };
			Var4 = { Var2 - Var1 };
		}
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	if (func_331(Var3, Var4) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_331(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_332(bool bParam0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(bParam0, false) };
	}
	else
	{
		return 0;
	}
	if (unk_0x4C241E39B23DF959(bParam1, false))
	{
		Var1 = { unk_0x9A8D700A51CB7B0D(bParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_331(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = unk_0x186FC4BE848E1C92(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_333(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bLocal_101)
	{
		bVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(bVar1, false))
		{
			bVar2 = unk_0x9F47B058362C84B5(bVar1);
			if (bVar2 == joaat("phantom"))
			{
				if (unk_0xE7CF3C4F9F489F0C(bVar1))
				{
					if (unk_0x1CDD6BADC297830D(bVar1, &bVar0))
					{
						if (unk_0x4C241E39B23DF959(bVar0, false))
						{
							if (unk_0x17FFC1B2BA35A494(bVar0, bParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_334(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x5F9532F3B5CC2551(*uParam0, false))
	{
		if (unk_0x22AC59A870E6A669(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				bVar0 = unk_0x7DD959874C1FD534(*uParam0, 6, func_217(), -1, false, false);
				unk_0xC80A74AC829DDD92(bVar0, iLocal_194);
				unk_0xE532F5D78798DAAB(func_217());
			}
			else if (iParam1 == 1)
			{
				bVar0 = unk_0x9B62392B474F44A0(*uParam0, true);
				if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(*uParam0)))
				{
					unk_0x54C7C4A94367717E(bVar0, true, 4096, -1);
				}
			}
			else
			{
				bVar0 = unk_0x7DD959874C1FD534(*uParam0, 4, func_220(), -1, false, false);
				if (bLocal_107)
				{
					unk_0xE532F5D78798DAAB(func_220());
				}
			}
			if (bParam2)
			{
				unk_0x79F020FF9EDC0748(bVar0, true);
				unk_0xEBD76F2359F190AC(bVar0, false);
				unk_0x1913FE4CBF41C463(bVar0, 32, false);
			}
			if (bLocal_108)
			{
				unk_0x70A2D1137C8ED7C9(bVar0, 8192, true);
				unk_0x70A2D1137C8ED7C9(bVar0, 65536, true);
				unk_0x70A2D1137C8ED7C9(bVar0, 2, false);
				unk_0x25367DE49D64CF16(*uParam0, true);
			}
			unk_0x9F8AA94D6D97DBF4(bVar0, true);
			func_335(bVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_335(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		unk_0x2595DD4236549CE3(&bParam0);
	}
}

void func_336(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xD53343AA4FB7DD28(false, 12);
	if (iLocal_199 >= -1 && iLocal_200 >= -1)
	{
		while (bVar0 == iLocal_199 || bVar0 == iLocal_200)
		{
			bVar0++;
		}
	}
	else if (iLocal_199 >= -1)
	{
		if (bVar0 == iLocal_199)
		{
			bVar0++;
		}
	}
	bVar1 = bVar0;
	switch (bVar1)
	{
		case 0:
			unk_0x4F1D4BE3A7F24601(bParam0, false, false);
			break;
		
		case 1:
			unk_0x4F1D4BE3A7F24601(bParam0, 2, 2);
			break;
		
		case 2:
			unk_0x4F1D4BE3A7F24601(bParam0, 4, 4);
			break;
		
		case 3:
			unk_0x4F1D4BE3A7F24601(bParam0, 27, 27);
			break;
		
		case 4:
			unk_0x4F1D4BE3A7F24601(bParam0, 7, 7);
			break;
		
		case 5:
			unk_0x4F1D4BE3A7F24601(bParam0, 73, 73);
			break;
		
		case 6:
			unk_0x4F1D4BE3A7F24601(bParam0, 68, 68);
			break;
		
		case 7:
			unk_0x4F1D4BE3A7F24601(bParam0, 62, 62);
			break;
		
		case 8:
			unk_0x4F1D4BE3A7F24601(bParam0, 132, 132);
			break;
		
		case 9:
			unk_0x4F1D4BE3A7F24601(bParam0, 117, false);
			break;
		
		case 10:
			unk_0x4F1D4BE3A7F24601(bParam0, 52, 52);
			break;
		
		case 11:
			unk_0x4F1D4BE3A7F24601(bParam0, 88, 88);
			break;
		
		case 12:
			unk_0x4F1D4BE3A7F24601(bParam0, true, true);
			break;
		
		case 13:
			unk_0x4F1D4BE3A7F24601(bParam0, 36, 36);
			break;
		
		case 14:
			unk_0x4F1D4BE3A7F24601(bParam0, 95, 95);
			break;
		
		default:
			unk_0x4F1D4BE3A7F24601(bParam0, 73, 73);
			break;
	}
}

void func_337(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_338(Param0, Param1, bParam2, 200f))
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				bVar1 = unk_0xB6997A7EB3F5C8C0();
				if (!unk_0x5F9532F3B5CC2551(bVar1, false))
				{
					if (unk_0x20B60995556D004F(bVar1, Param0, bParam2, bParam2, bParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x01C7B9B38428AEB6(Param0, bParam2, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_338(struct<3> Param0, struct<3> Param1, bool bParam2, float fParam3)
{
	if (!unk_0xB16FCE9DDC7BA182())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (unk_0xA8CEACB4F35AE058(Param1 - Param0) - bParam2) < (fParam3 * fParam3)
				{
					if (unk_0xE33D59DA70B58FDF(Param0, bParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_339(bool bParam0)
{
	float fVar0;
	
	unk_0xAF514CABE74CBF15(bParam0, &cLocal_185);
	while (!unk_0x300D614A4C785FC4(bParam0, &cLocal_185))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	fVar0 = unk_0x0E48D1C262390950(bParam0, &cLocal_185);
	unk_0xF1160ACCF98A3FC8(bParam0, &cLocal_185);
	return fVar0;
}

int func_340(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_341(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_161;
		while (iVar0 < 15)
		{
			switch (iLocal_155[iVar0])
			{
				case 0:
					if (!iLocal_196[iVar0] == 0)
					{
						if (unk_0x20B60995556D004F(bParam0, Local_174[iVar0 /*3*/], bLocal_128, bLocal_128, bLocal_128, false, true, 0))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_158)
					{
						if (!unk_0x7239B21A38F536BA(iLocal_203[iVar0]))
						{
							unk_0x963D27A58DF860AC(iLocal_196[iVar0]);
							if (unk_0x98A4EB5D89A0C952(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_338(Local_174[iVar0 /*3*/], Var1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_337(Local_174[iVar0 /*3*/], Var1, bLocal_134);
									}
									iLocal_203[iVar0] = unk_0xAF35D0D2583051B0(iLocal_196[iVar0], Local_174[iVar0 /*3*/], false, false, false, false);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										unk_0x60BF608F1B8CD1B6(iLocal_203[iVar0], false);
									}
									unk_0x77B21BE7AC540F07(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									unk_0xE532F5D78798DAAB(iLocal_196[iVar0]);
									if (unk_0x423E8DE37D934D89(iLocal_203[iVar0], func_218()))
									{
										unk_0xF4924635A19EB37D(iLocal_203[iVar0], true);
										if (!unk_0xB50C0B0CEDC6CE84(iLocal_196[iVar0]))
										{
											unk_0x1FEF0683B96EBCF2(iLocal_203[iVar0], true);
										}
									}
									if (unk_0x423E8DE37D934D89(iLocal_203[iVar0], func_219()))
									{
										unk_0x4F1D4BE3A7F24601(iLocal_203[iVar0], false, false);
									}
									unk_0x3910051CCECDB00C(iLocal_203[iVar0], true);
									iLocal_163 = (iLocal_163 - 1);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 1);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (unk_0x4C241E39B23DF959(iLocal_203[iVar0], false))
						{
							Var2 = { unk_0x3FEF770D40960D5A(iLocal_203[iVar0], true) };
						}
						if (fLocal_142 == 0f || unk_0xB7A628320EFF8E47(Var1, Var2) < (fLocal_142 * fLocal_142))
						{
							if (!func_330(iLocal_203[iVar0], bParam0, 0))
							{
								if (!bLocal_77)
								{
									func_213(iLocal_203[iVar0]);
								}
								else
								{
									unk_0xEA386986E786A54F(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 1);
								iLocal_155[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_215();
	}
}

void func_342(bool bParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	
	bVar5 = false;
	bVar12 = unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6());
	bVar13 = unk_0xB8EB95E5B4E56978();
	bVar14 = unk_0xEACEEDA81751915C();
	if (bVar12)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar5 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
		Var8 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	iVar1 = 0;
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x1C8A4C2C19E68EEC(bParam0))
		{
			fLocal_130 = unk_0x5746F3A7AB7FE544(bParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_150[iVar0] != 99)
			{
				if (iLocal_150[iVar0] == 0)
				{
					if (iLocal_149[iVar0] > 0 && iLocal_195[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (func_340(iLocal_195[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_151[iVar0]), false);
									}
									else if (unk_0xB50C0B0CEDC6CE84(iLocal_195[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_151[iVar0]), 2);
									}
									unk_0xE80492A9AC099A93(&(iLocal_151[iVar0]), true);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_344(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_339(iLocal_149[iVar0]))
								{
									if (func_340(iLocal_195[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_151[iVar0]), false);
									}
									else if (unk_0xB50C0B0CEDC6CE84(iLocal_195[iVar0]))
									{
										unk_0x933D6A9EEC1BACD0(&(iLocal_151[iVar0]), 2);
									}
									unk_0xE80492A9AC099A93(&(iLocal_151[iVar0]), true);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_344(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_344(iVar0, 1090519040);
					}
				}
				else if (iLocal_150[iVar0] == 1)
				{
					unk_0xAF514CABE74CBF15(iLocal_149[iVar0], &cLocal_185);
					bVar11 = false;
					if (BitTest(iLocal_151[iVar0], 0))
					{
						unk_0x963D27A58DF860AC(func_217());
						if (unk_0x98A4EB5D89A0C952(func_217()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && bVar13) || (BitTest(iLocal_151[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						unk_0x963D27A58DF860AC(func_220());
						bVar11 = unk_0x98A4EB5D89A0C952(func_220());
					}
					if (!unk_0x7239B21A38F536BA(iLocal_201[iVar0]))
					{
						unk_0x963D27A58DF860AC(iLocal_195[iVar0]);
						if ((unk_0x98A4EB5D89A0C952(iLocal_195[iVar0]) && unk_0x300D614A4C785FC4(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_338(Local_173[iVar0 /*3*/], Var8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_337(Local_173[iVar0 /*3*/], Var8, bLocal_134);
									}
									iLocal_201[iVar0] = unk_0xAF35D0D2583051B0(iLocal_195[iVar0], Local_173[iVar0 /*3*/], false, false, false, false);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										unk_0x60BF608F1B8CD1B6(iLocal_201[iVar0], false);
									}
									if (uLocal_98 && !BitTest(iLocal_151[iVar0], 0))
									{
										func_336(iLocal_201[iVar0]);
									}
									unk_0x239A3351AC1DA385(iLocal_201[iVar0], Local_173[iVar0 /*3*/], false, false, true);
									unk_0x77B21BE7AC540F07(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (unk_0x7F6DB52EEFC96DF8(iLocal_195[iVar0]) || unk_0xB50C0B0CEDC6CE84(iLocal_195[iVar0]))
									{
										unk_0x49733E92263139D1(iLocal_201[iVar0], 5f);
									}
									if (BitTest(iLocal_151[iVar0], 3))
									{
										unk_0x3910051CCECDB00C(iLocal_201[iVar0], true);
									}
									if (!BitTest(iLocal_151[iVar0], 0))
									{
										unk_0x2497C4717C8B881E(iLocal_201[iVar0], true, true, false);
										if (unk_0x25223CA6B4D20B7F() > 19 || unk_0x25223CA6B4D20B7F() < 7)
										{
											unk_0x34E710FF01247C5A(iLocal_201[iVar0], 3);
										}
									}
									unk_0x428CA6DBD1094446(iLocal_201[iVar0], true);
									unk_0x79F020FF9EDC0748(iLocal_201[iVar0], true);
									unk_0xE532F5D78798DAAB(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 1);
									iLocal_150[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 1);
									func_344(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_171 || iLocal_171 == 0)) || iLocal_89) || iParam2)
					{
						if (!BitTest(iLocal_151[iVar0], 1))
						{
							if (BitTest(iLocal_151[iVar0], 0))
							{
								unk_0x963D27A58DF860AC(func_217());
								bVar11 = unk_0x98A4EB5D89A0C952(func_217());
								iVar15 = 2;
							}
							else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && bVar13) || (BitTest(iLocal_151[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								unk_0x963D27A58DF860AC(func_220());
								bVar11 = unk_0x98A4EB5D89A0C952(func_220());
								iVar15 = 0;
							}
							if (!unk_0x5F9532F3B5CC2551(iLocal_201[iVar0], false))
							{
								if (!bLocal_106 && unk_0x22AC59A870E6A669(iLocal_201[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_201[iVar0], true), Var8) < 10000f || iParam2) || iLocal_89)
										{
											func_334(&(iLocal_201[iVar0]), iVar15, 0);
											unk_0x933D6A9EEC1BACD0(&(iLocal_151[iVar0]), true);
										}
									}
								}
							}
						}
						if (unk_0x4C241E39B23DF959(iLocal_201[iVar0], false))
						{
							unk_0xAF514CABE74CBF15(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (12 > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (unk_0x300D614A4C785FC4(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < unk_0x0E48D1C262390950(iLocal_149[iVar0], &cLocal_185))
										{
											Var6 = { unk_0x3FEF770D40960D5A(iLocal_201[iVar0], true) };
											Var7 = { unk_0xD242728AA6F0FBA2(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_338(Var6, Var8, 5f, fLocal_141) && func_338(Var7, Var8, 5f, fLocal_141))
											{
												if (!BitTest(iLocal_151[iVar0], 1))
												{
													func_334(&(iLocal_201[iVar0]), iVar15, 0);
												}
												func_344(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || BitTest(iLocal_151[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_327(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 1, 0, 0, 1, bLocal_103))
												{
													if (!BitTest(iLocal_151[iVar0], 1))
													{
														func_334(&(iLocal_201[iVar0]), iVar15, 0);
													}
													unk_0x1A9205C1B9EE827F(iLocal_201[iVar0], true, false);
													unk_0x6683AB880E427778(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_151[iVar0], 1))
											{
												func_334(&(iLocal_201[iVar0]), iVar15, 0);
											}
											func_344(iVar0, 1090519040);
										}
									}
									else if (fVar9 > unk_0x0E48D1C262390950(iLocal_149[iVar0], &cLocal_185))
									{
										if (!BitTest(iLocal_151[iVar0], 1))
										{
											func_334(&(iLocal_201[iVar0]), iVar15, 0);
										}
										func_344(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_151[iVar0], 1))
									{
										func_334(&(iLocal_201[iVar0]), iVar15, 0);
									}
									func_344(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!BitTest(iLocal_151[iVar0], 1))
								{
									func_334(&(iLocal_201[iVar0]), iVar15, 0);
								}
								func_344(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_151[iVar0], 1))
							{
								func_334(&(iLocal_201[iVar0]), iVar15, 0);
							}
							func_344(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 3)
				{
					if (unk_0x4C241E39B23DF959(iLocal_201[iVar0], false))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_201[iVar0]))
						{
							bVar4 = unk_0xBB40DD2270B65366(iLocal_201[iVar0], -1, false);
							if (!unk_0x84A2DD9AC37C35C1(bVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_333(iLocal_201[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_170 || iLocal_170 == 0))
											{
												if (!unk_0x5F9532F3B5CC2551(bVar5, false))
												{
													bVar11 = false;
													if (!func_343(iLocal_201[iVar0], bVar5) || func_330(bVar5, iLocal_201[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !BitTest(iLocal_151[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_170 || iLocal_170 == 0))
										{
											Var19 = { unk_0x2274BC1C4885E333(bParam0, unk_0x3FEF770D40960D5A(iLocal_201[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (unk_0x73D57CFFDD12C355(Var19.f_1) > unk_0x73D57CFFDD12C355(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_329(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										unk_0x6683AB880E427778(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 4)
				{
					if (unk_0x4C241E39B23DF959(iLocal_201[iVar0], false))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							bVar4 = unk_0xBB40DD2270B65366(iLocal_201[iVar0], -1, false);
							if (!unk_0x84A2DD9AC37C35C1(bVar4))
							{
								unk_0x6683AB880E427778(iLocal_201[iVar0], fParam1);
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
							}
							if (unk_0x300D614A4C785FC4(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + unk_0x0E48D1C262390950(iLocal_149[iVar0], &cLocal_185)))
								{
									unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
								}
							}
							else
							{
								unk_0x54833611C17ABDEA(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 5)
				{
					if (!unk_0x5F9532F3B5CC2551(iLocal_201[iVar0], false))
					{
						fVar10 = unk_0xD5037BA82E12416F(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 1);
					func_344(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_170 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_171 = 0;
		}
	}
	else
	{
		func_216();
	}
}

int func_343(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(bParam0, false) };
	}
	else
	{
		return 0;
	}
	if (unk_0x4C241E39B23DF959(bParam1, false))
	{
		Var1 = { unk_0x9A8D700A51CB7B0D(bParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_331(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_344(int iParam0, float fParam1)
{
	bool bVar0;
	
	if (!iLocal_195[iParam0] == 0)
	{
		unk_0xE532F5D78798DAAB(iLocal_195[iParam0]);
	}
	if (!unk_0x5F9532F3B5CC2551(iLocal_201[iParam0], false))
	{
		unk_0x1A9205C1B9EE827F(iLocal_201[iParam0], true, false);
		unk_0x428CA6DBD1094446(iLocal_201[iParam0], false);
		bVar0 = unk_0xBB40DD2270B65366(iLocal_201[iParam0], -1, false);
		if (!unk_0x84A2DD9AC37C35C1(bVar0) && bVar0 != unk_0xD80958FC74E988A6())
		{
			unk_0x9F8AA94D6D97DBF4(bVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x659427E0EF36BCDE(bVar0, iLocal_201[iParam0], false, 1, fParam1, 786603, 5f, 5f, true);
			unk_0x70A2D1137C8ED7C9(bVar0, 8192, true);
			if (bLocal_108)
			{
				unk_0x70A2D1137C8ED7C9(bVar0, 65536, true);
				unk_0x70A2D1137C8ED7C9(bVar0, 2, false);
			}
			unk_0x9F7794730795E019(bVar0, 6, false);
			unk_0x5C9B84BD7D31D908(bVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_335(bVar0);
			func_213(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (unk_0x7239B21A38F536BA(bVar0))
		{
			unk_0x9614299DCB53E54B(&bVar0);
		}
		if (unk_0x7239B21A38F536BA(iLocal_201[iParam0]))
		{
			unk_0xEA386986E786A54F(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0)
		{
			unk_0xF1160ACCF98A3FC8(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 99;
}

void func_345(bool bParam0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		Var4 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x1C8A4C2C19E68EEC(bParam0))
		{
			iVar0 = unk_0x42BC05C27A946054(bParam0);
			Var1 = { unk_0x92523B76657A517D(iVar0, fParam1) };
			Var2 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			Var3 = { Var2 - Var1 };
			bVar5 = unk_0x652D2EEEF1D3E62C(Var3);
			if (bVar5 > fParam2)
			{
				bVar5 = fParam2;
			}
			func_337(Var1, Var4, bVar5);
		}
	}
}

void func_346(bool bParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > (fParam1 * fParam1))
				{
					unk_0xCB9E1EB3BE2AF4E9(1);
				}
				else
				{
					unk_0xCB9E1EB3BE2AF4E9(0);
				}
			}
		}
	}
}

void func_347(bool bParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > (fParam1 * fParam1))
				{
					unk_0x245A6883D966D537(1f);
				}
				else
				{
					unk_0x245A6883D966D537(0f);
				}
			}
		}
	}
}

void func_348(bool bParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false) && unk_0x1C8A4C2C19E68EEC(bParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x42BC05C27A946054(bParam0);
			if (fVar1 <= unk_0x102D125411A7B6E6(iVar0))
			{
				if (iLocal_166 == 0)
				{
					Local_181 = { unk_0x92523B76657A517D(iVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 1)
				{
					Local_182 = { unk_0x92523B76657A517D(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (Local_181.f_0 > Local_182.f_0)
					{
						fVar3 = Local_181.f_0;
						Local_181.f_0 = Local_182.f_0;
						Local_182.f_0 = fVar3;
					}
					if (Local_181.f_1 > Local_182.f_1)
					{
						fVar3 = Local_181.f_1;
						Local_181.f_1 = Local_182.f_1;
						Local_182.f_1 = fVar3;
					}
					if (Local_181.f_2 > Local_182.f_2)
					{
						fVar3 = Local_181.f_2;
						Local_181.f_2 = Local_182.f_2;
						Local_182.f_2 = fVar3;
					}
					Local_181 = { Local_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					unk_0xBF1A602B5BA52FEE(Local_181, Local_182, false, false);
					fLocal_144 = fVar1;
					iLocal_166 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x42BC05C27A946054(bParam0);
			if (iLocal_169 == 0)
			{
				Local_183 = { unk_0x92523B76657A517D(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 1)
			{
				Local_184 = { unk_0x92523B76657A517D(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (Local_183.f_0 > Local_184.f_0)
				{
					fVar3 = Local_183.f_0;
					Local_183.f_0 = Local_184.f_0;
					Local_184.f_0 = fVar3;
				}
				if (Local_183.f_1 > Local_184.f_1)
				{
					fVar3 = Local_183.f_1;
					Local_183.f_1 = Local_184.f_1;
					Local_184.f_1 = fVar3;
				}
				if (Local_183.f_2 > Local_184.f_2)
				{
					fVar3 = Local_183.f_2;
					Local_183.f_2 = Local_184.f_2;
					Local_184.f_2 = fVar3;
				}
				Local_183 = { Local_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				Local_184 = { Local_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				unk_0x1EE7063B80FFC77C(Local_183, Local_184, true);
				fLocal_145 = fVar2;
				iLocal_169 = 0;
			}
		}
	}
}

int func_349(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam1, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bParam0, bParam1, false))
			{
				return 0;
			}
		}
	}
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	if (unk_0x4C241E39B23DF959(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		Var2 = { unk_0x1899F328B0E12848(bParam1, 0f, 5f, 0f) };
		Var4 = { Var2 - Var1 };
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	fVar5 = func_331(Var3, Var4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_350()
{
	unk_0xC12321827687FE4D(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
	unk_0xCAA15F13EBD417FF(0);
	unk_0x2AFD795EEAC8D30D(false);
	unk_0x608207E7A8FB787C(false);
	unk_0x245A6883D966D537(0f);
	unk_0xCB9E1EB3BE2AF4E9(0);
	unk_0x8C95333CFC3340F3(3);
}

void func_351(bool bParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	bool bVar9;
	bool bVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_354(bParam0, bParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		if (func_349(bParam1, bParam0))
		{
			if (unk_0x997ABD671D25CA0B(bParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_353(bParam0, bParam1) < fParam5)
			{
				fVar1 = func_352(bParam0, bParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x15C40837039FFAF7();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x15C40837039FFAF7();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam1))
		{
			if (unk_0x997ABD671D25CA0B(bParam1, false))
			{
				bVar9 = unk_0x9A9112A0FE9A4713(bParam1, false);
				if (!unk_0x5F9532F3B5CC2551(bVar9, false))
				{
					bVar10 = unk_0x9F47B058362C84B5(bVar9);
					if (unk_0x7F6DB52EEFC96DF8(bVar10) || unk_0xB50C0B0CEDC6CE84(bVar10))
					{
						if (unk_0x4C241E39B23DF959(bVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							unk_0xCA7DC8329F0A1E9E(unk_0x4F8644AF03D0E0D6(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

float func_352(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	bool bVar5;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0.f_0 = unk_0x8BB4EF4214E0E6D5(bParam0);
		Var0.f_1 = unk_0x866A4A5FAE349510(bParam0);
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		if (unk_0x997ABD671D25CA0B(bParam1, false))
		{
			bVar5 = unk_0x9A9112A0FE9A4713(bParam1, false);
			Var3.f_0 = unk_0x8BB4EF4214E0E6D5(bVar5);
			Var3.f_1 = unk_0x866A4A5FAE349510(bVar5);
		}
		else
		{
			Var2 = { unk_0x1899F328B0E12848(bParam1, 0f, 5f, 0f) };
			Var3 = { Var2 - Var1 };
		}
	}
	fVar4 = unk_0x186FC4BE848E1C92(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	return fVar4;
}

float func_353(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	Var2 = { Var1 - Var0 };
	Var2.f_2 = 0f;
	fVar3 = unk_0x652D2EEEF1D3E62C(Var2);
	return fVar3;
}

float func_354(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		Var0.f_0 = unk_0x8BB4EF4214E0E6D5(bParam0);
		Var0.f_1 = unk_0x866A4A5FAE349510(bParam0);
		Var2 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var3 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	Var1 = { Var3 - Var2 };
	bVar4 = unk_0x186FC4BE848E1C92(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1);
	bVar4 = (bVar4 + -90f);
	if (bVar4 < 0f)
	{
		bVar4 = (bVar4 * -1f);
	}
	Var1.f_2 = 0f;
	return (unk_0x652D2EEEF1D3E62C(Var1) * unk_0x0BADBFA3B172435F(bVar4));
}

int func_355()
{
	if (unk_0x7239B21A38F536BA(bLocal_278))
	{
		if (unk_0x4C241E39B23DF959(bLocal_278, false))
		{
			if (!unk_0xE659E47AF827484B(bLocal_278))
			{
				iLocal_396 = 1;
			}
			else
			{
				iLocal_396 = 0;
			}
		}
		else
		{
			iLocal_396 = 1;
		}
	}
	else
	{
		iLocal_396 = 1;
	}
	iLocal_232 = 0;
	while (iLocal_232 <= 24)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[iLocal_232]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[iLocal_232], false))
			{
				if (!unk_0xE659E47AF827484B(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 1;
				}
				else
				{
					iLocal_397[iLocal_232] = 0;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 1;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 1;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 1 && iLocal_397[0] == 1) && iLocal_397[1] == 1) && iLocal_397[2] == 1) && iLocal_397[3] == 1) && iLocal_397[4] == 1) && iLocal_397[5] == 1) && iLocal_397[6] == 1) && iLocal_397[7] == 1) && iLocal_397[8] == 1) && iLocal_397[9] == 1) && iLocal_397[10] == 1) && iLocal_397[11] == 1) && iLocal_397[12] == 1) && iLocal_397[13] == 1) && iLocal_397[14] == 1) && iLocal_397[15] == 1) && iLocal_397[16] == 1) && iLocal_397[17] == 1) && iLocal_397[18] == 1) && iLocal_397[19] == 1) && iLocal_397[20] == 1) && iLocal_397[21] == 1) && iLocal_397[22] == 1) && iLocal_397[23] == 1) && iLocal_397[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_356()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (unk_0x7239B21A38F536BA(iLocal_204[4]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[4], false))
		{
			if (unk_0x1C8A4C2C19E68EEC(iLocal_204[4]))
			{
				Local_309 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				Var1 = { unk_0x3FEF770D40960D5A(iLocal_204[4], true) };
				if (Local_309.f_0 < (Var1.f_0 - 10f) && !unk_0xE659E47AF827484B(iLocal_204[4]))
				{
					unk_0x54833611C17ABDEA(iLocal_204[4]);
					unk_0x629BFA74418D6239(&(iLocal_204[4]));
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[3]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[3], false))
		{
			if (unk_0x1C8A4C2C19E68EEC(iLocal_204[3]))
			{
				Local_309 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				Var0 = { unk_0x3FEF770D40960D5A(iLocal_204[3], true) };
				if (Local_309.f_0 < (Var0.f_0 - 10f) && !unk_0xE659E47AF827484B(iLocal_204[3]))
				{
					unk_0x54833611C17ABDEA(iLocal_204[3]);
					unk_0x629BFA74418D6239(&(iLocal_204[3]));
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[21]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[21], false))
		{
			if (unk_0x1C8A4C2C19E68EEC(iLocal_204[21]))
			{
				Local_309 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				Var2 = { unk_0x3FEF770D40960D5A(iLocal_204[21], true) };
				if (Local_309.f_0 < (Var2.f_0 - 10f) && !unk_0xE659E47AF827484B(iLocal_204[21]))
				{
					unk_0x54833611C17ABDEA(iLocal_204[21]);
					unk_0x629BFA74418D6239(&(iLocal_204[21]));
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[0]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[0], false))
		{
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) > 50000f && !unk_0xE659E47AF827484B(iLocal_204[0]))
						{
							if (unk_0x1C8A4C2C19E68EEC(iLocal_204[0]))
							{
								unk_0x54833611C17ABDEA(iLocal_204[0]);
							}
							unk_0x629BFA74418D6239(&(iLocal_204[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_282))
	{
		if (unk_0x4C241E39B23DF959(bLocal_282, false))
		{
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) > 90000f && !unk_0xE659E47AF827484B(bLocal_282))
						{
							unk_0x8F75998877616996(iLocal_667[0], false);
							unk_0x8F75998877616996(iLocal_667[1], false);
							unk_0x8F75998877616996(iLocal_667[2], false);
							if (unk_0x7239B21A38F536BA(bLocal_265[0]))
							{
								unk_0x2595DD4236549CE3(&(bLocal_265[0]));
							}
							if (unk_0x7239B21A38F536BA(bLocal_265[1]))
							{
								unk_0x2595DD4236549CE3(&(bLocal_265[1]));
							}
							if (unk_0x7239B21A38F536BA(bLocal_265[2]))
							{
								unk_0x2595DD4236549CE3(&(bLocal_265[2]));
							}
							if (unk_0x7239B21A38F536BA(bLocal_265[3]))
							{
								unk_0x2595DD4236549CE3(&(bLocal_265[3]));
							}
							unk_0x629BFA74418D6239(&bLocal_282);
							unk_0xF66A602F829E2A06("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_357(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		if ((unk_0x7239B21A38F536BA(bParam1) && unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x6AC7003FA6E5575E(bParam1))
			{
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam1), false))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						bVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (bVar0 <= 0)
						{
							bVar0 = false;
						}
						if (bVar0 >= 255)
						{
							bVar0 = 255;
						}
						unk_0xB14552383D39CE3E(bParam0, true);
						unk_0x45FF974EEE1C8734(bParam0, (255 - bVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(bParam0, false);
						unk_0x45FF974EEE1C8734(bParam0, 255);
					}
				}
			}
			else if (unk_0x524AC5ECEA15343E(bParam1))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam1)))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						bVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (bVar0 <= 0)
						{
							bVar0 = false;
						}
						if (bVar0 >= 255)
						{
							bVar0 = 255;
						}
						unk_0xB14552383D39CE3E(bParam0, true);
						unk_0x45FF974EEE1C8734(bParam0, (255 - bVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(bParam0, false);
						unk_0x45FF974EEE1C8734(bParam0, 255);
					}
				}
			}
		}
	}
}

void func_358()
{
	if (unk_0x7239B21A38F536BA(iLocal_204[2]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[2], false))
		{
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) < 50530f)
						{
							if (!unk_0xAE31E7DF9B5B132E(iLocal_204[2]))
							{
								unk_0x2497C4717C8B881E(iLocal_204[2], true, true, false);
							}
						}
						else if (unk_0xAE31E7DF9B5B132E(iLocal_204[2]))
						{
							unk_0x2497C4717C8B881E(iLocal_204[2], false, false, false);
						}
					}
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_204[5]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_204[5], false))
		{
			if (!unk_0xAE31E7DF9B5B132E(iLocal_204[5]))
			{
				unk_0x2497C4717C8B881E(iLocal_204[5], true, true, false);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[0]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_280[0], false))
		{
			if (!unk_0xAE31E7DF9B5B132E(iLocal_280[0]))
			{
				unk_0x2497C4717C8B881E(iLocal_280[0], true, true, false);
			}
			if (unk_0x22AC59A870E6A669(iLocal_280[0], -1, false))
			{
				if (!unk_0x7239B21A38F536BA(iLocal_276[0]))
				{
					unk_0x963D27A58DF860AC(joaat("s_m_m_gentransport"));
					if (unk_0x98A4EB5D89A0C952(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0] = unk_0x7DD959874C1FD534(iLocal_280[0], 26, joaat("s_m_m_gentransport"), -1, true, true);
						unk_0xE532F5D78798DAAB(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[1]))
	{
		if (unk_0x4C241E39B23DF959(iLocal_280[1], false))
		{
			if (!unk_0xAE31E7DF9B5B132E(iLocal_280[1]))
			{
				unk_0x2497C4717C8B881E(iLocal_280[1], true, true, false);
			}
			if (unk_0x22AC59A870E6A669(iLocal_280[1], -1, false))
			{
				if (!unk_0x7239B21A38F536BA(iLocal_276[1]))
				{
					unk_0x963D27A58DF860AC(joaat("s_m_m_gentransport"));
					if (unk_0x98A4EB5D89A0C952(joaat("s_m_m_gentransport")))
					{
						iLocal_276[1] = unk_0x7DD959874C1FD534(iLocal_280[1], 26, joaat("s_m_m_gentransport"), -1, true, true);
						unk_0xE532F5D78798DAAB(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_359()
{
	if (iLocal_223 == 0)
	{
		unk_0x2F844A8B08D76685("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		unk_0x2F844A8B08D76685("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		unk_0x2F844A8B08D76685("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		unk_0x2F844A8B08D76685("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_385 == 0)
		{
			bLocal_255 = unk_0x430386FE9BF80B45();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			bLocal_256 = unk_0x430386FE9BF80B45();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			bLocal_257 = unk_0x430386FE9BF80B45();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			bLocal_258 = unk_0x430386FE9BF80B45();
			iLocal_388 = 1;
		}
		if (iLocal_389 == 0)
		{
			bLocal_259 = unk_0x430386FE9BF80B45();
			iLocal_389 = 1;
		}
		if (iLocal_384 == 0)
		{
			bLocal_260 = unk_0x430386FE9BF80B45();
			iLocal_384 = 1;
		}
		if (iLocal_390 == 0)
		{
			bLocal_261 = unk_0x430386FE9BF80B45();
			iLocal_390 = 1;
		}
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		if (!unk_0xA7A932170592B50E(bLocal_301))
		{
			bLocal_301 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", true);
			unk_0xB13C14F66A00D047(bLocal_301, 40f);
		}
		iLocal_341 = 0;
		iLocal_335 = 0;
		iLocal_347 = 0;
		iLocal_331 = 0;
		iLocal_326 = 0;
		iLocal_332 = 0;
		iLocal_325 = 0;
		iLocal_361 = 0;
		iLocal_363[0] = 0;
		iLocal_364[0] = 0;
		iLocal_363[1] = 0;
		iLocal_364[1] = 0;
		iLocal_363[2] = 0;
		iLocal_365 = 0;
		iLocal_366 = 0;
		iLocal_329 = 0;
		iLocal_330 = 0;
		iLocal_328 = 0;
		iLocal_370 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_376 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_383 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_467 = 0;
		iLocal_349 = 1;
		iLocal_350 = 1;
		iLocal_358 = 1;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_415 = 0;
		iLocal_417 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_427 = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430[0] = 0;
		iLocal_430[1] = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_434 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_468 = 0;
		iLocal_227 = 0;
		iLocal_240 = 0;
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_465[iLocal_231] = 0;
			iLocal_466[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_487[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 6)
		{
			iLocal_435[iLocal_231] = 0;
			iLocal_436[iLocal_231] = 0;
			iLocal_231++;
		}
		unk_0x944955FB2A3935C8();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_296();
		iLocal_226 = unk_0x52F0982D7FD156B6();
		unk_0xA56F01F3765B93A0(-823.71f, -2548.2f, 13.75f, 20f, true, false, false, false);
		unk_0xEE01041D559983EA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x34F060F4BF92E018(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		unk_0xBF1A602B5BA52FEE(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, true);
		func_126(2, 1);
		func_361("BB_Chase", 45, 0, 1);
		unk_0xAA5F02DB48D704B9(3);
		func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (!func_24())
			{
				unk_0x4448EB75B4904BDB(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
			}
			func_21(bLocal_279, -1, 1);
		}
		iLocal_224 = 0;
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		func_360();
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (!unk_0x7239B21A38F536BA(bLocal_287))
		{
			bLocal_287 = unk_0xAF35D0D2583051B0(joaat("blista"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!unk_0x300D614A4C785FC4(45, "BB_Chase"))
		{
			unk_0x4EDE34FBADD967A6(false);
		}
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (unk_0x4C241E39B23DF959(bLocal_279, false))
			{
				unk_0x2497C4717C8B881E(bLocal_279, true, true, false);
				unk_0xAB54A438726D25D5(bLocal_279, 30f);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_278))
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				unk_0x3F878F92B3A7A071(bLocal_278, 45, "BB_Chase", true);
				unk_0x5AE11BC36633DE4E(false);
				func_279();
				unk_0xC5F0A8EBD3F361CE(2);
				if (unk_0x7239B21A38F536BA(bLocal_279))
				{
					if (unk_0x4C241E39B23DF959(bLocal_279, false))
					{
						unk_0x629BFA74418D6239(&bLocal_279);
					}
				}
				if (!unk_0x5A859503B0C08678())
				{
					unk_0xD4E8E24955024033(800);
				}
				iLocal_223 = 0;
				iLocal_222 = 4;
			}
		}
	}
}

void func_360()
{
	Local_174[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_124[0] = -0.0003f;
	fLocal_125[0] = -0.0085f;
	fLocal_126[0] = 0.9998f;
	fLocal_127[0] = 0.0158f;
	iLocal_196[0] = joaat("blista");
	Local_173[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_110[4] = -0.0003f;
	fLocal_111[4] = -0.2526f;
	fLocal_112[4] = 0.9676f;
	iLocal_149[4] = 50;
	fLocal_113[4] = 20310f;
	iLocal_195[4] = joaat("manana");
	Local_174[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_124[1] = 0.0032f;
	fLocal_125[1] = -0.0003f;
	fLocal_126[1] = -0.0255f;
	fLocal_127[1] = 0.9997f;
	iLocal_196[1] = joaat("bison2");
	Local_175[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_118[0] = 0.0018f;
	fLocal_119[0] = 0.0123f;
	fLocal_120[0] = 0.9644f;
	fLocal_121[0] = 0.2642f;
	iLocal_152[0] = 9;
	fLocal_122[0] = 22357f;
	fLocal_123[0] = 1f;
	iLocal_197[0] = joaat("buzzard");
	Local_175[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_118[1] = -0.0012f;
	fLocal_119[1] = 0.0013f;
	fLocal_120[1] = 0.8439f;
	fLocal_121[1] = -0.5365f;
	iLocal_152[1] = 10;
	fLocal_122[1] = 27135f;
	fLocal_123[1] = 1f;
	iLocal_197[1] = joaat("packer");
	Local_175[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_118[2] = 0.0057f;
	fLocal_119[2] = -0.0014f;
	fLocal_120[2] = -0.2451f;
	fLocal_121[2] = 0.9695f;
	iLocal_152[2] = 11;
	fLocal_122[2] = 35135f;
	fLocal_123[2] = 1f;
	iLocal_197[2] = joaat("jet");
	Local_175[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_118[3] = 0.0065f;
	fLocal_119[3] = 0.0191f;
	fLocal_120[3] = -0.2629f;
	fLocal_121[3] = 0.9646f;
	iLocal_152[3] = 3;
	fLocal_122[3] = 6764f;
	fLocal_123[3] = 1f;
	iLocal_197[3] = joaat("bus");
	Local_175[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_118[4] = 0.0043f;
	fLocal_119[4] = 0.0331f;
	fLocal_120[4] = -0.3125f;
	fLocal_121[4] = 0.9493f;
	iLocal_152[4] = 4;
	fLocal_122[4] = 2102f;
	fLocal_123[4] = 1f;
	iLocal_197[4] = joaat("bison");
	Local_175[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_118[5] = 0.0056f;
	fLocal_119[5] = 0.0029f;
	fLocal_120[5] = 0.4915f;
	fLocal_121[5] = 0.8708f;
	iLocal_152[5] = 21;
	fLocal_122[5] = 92500f;
	fLocal_123[5] = 1f;
	iLocal_197[5] = joaat("jet");
	Local_175[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_118[7] = 0.0072f;
	fLocal_119[7] = 0.0176f;
	fLocal_120[7] = 0.9739f;
	fLocal_121[7] = -0.2263f;
	iLocal_152[7] = 54;
	fLocal_122[7] = 0f;
	fLocal_123[7] = 1f;
	iLocal_197[7] = joaat("police3");
	Local_175[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_118[8] = -0.027f;
	fLocal_119[8] = 0.0016f;
	fLocal_120[8] = 0.9169f;
	fLocal_121[8] = -0.3981f;
	iLocal_152[8] = 108;
	fLocal_122[8] = 150f;
	fLocal_123[8] = 1f;
	iLocal_197[8] = joaat("police3");
	Local_175[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_118[11] = -0.0022f;
	fLocal_119[11] = -0.0019f;
	fLocal_120[11] = 0.928f;
	fLocal_121[11] = -0.3726f;
	iLocal_152[11] = 111;
	fLocal_122[11] = 36000f;
	fLocal_123[11] = 1f;
	iLocal_197[11] = joaat("police3");
	Local_175[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_118[12] = -0.0083f;
	fLocal_119[12] = -0.0054f;
	fLocal_120[12] = 0.55f;
	fLocal_121[12] = 0.8351f;
	iLocal_152[12] = 112;
	fLocal_122[12] = 60000f;
	fLocal_123[12] = 1f;
	iLocal_197[12] = joaat("police3");
	Local_175[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_118[13] = -0.0086f;
	fLocal_119[13] = -0.005f;
	fLocal_120[13] = 0.5052f;
	fLocal_121[13] = 0.8629f;
	iLocal_152[13] = 113;
	fLocal_122[13] = 60000f;
	fLocal_123[13] = 1f;
	iLocal_197[13] = joaat("police3");
	Local_175[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_118[14] = -0.0083f;
	fLocal_119[14] = -0.0057f;
	fLocal_120[14] = 0.6469f;
	fLocal_121[14] = 0.7625f;
	iLocal_152[14] = 61;
	fLocal_122[14] = 80000f;
	fLocal_123[14] = 1f;
	iLocal_197[14] = joaat("police3");
	Local_175[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_118[15] = -0.0041f;
	fLocal_119[15] = -0.0091f;
	fLocal_120[15] = 0.9133f;
	fLocal_121[15] = 0.4072f;
	iLocal_152[15] = 62;
	fLocal_122[15] = 80000f;
	fLocal_123[15] = 1f;
	iLocal_197[15] = joaat("police3");
	Local_175[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_118[19] = 0.0002f;
	fLocal_119[19] = 0.0018f;
	fLocal_120[19] = 0.9611f;
	fLocal_121[19] = -0.2763f;
	iLocal_152[19] = 66;
	fLocal_122[19] = 55125f;
	fLocal_123[19] = 1f;
	iLocal_197[19] = joaat("firetruk");
	Local_175[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_118[20] = -0.0005f;
	fLocal_119[20] = 0.0018f;
	fLocal_120[20] = 0.9559f;
	fLocal_121[20] = 0.2938f;
	iLocal_152[20] = 67;
	fLocal_122[20] = 0f;
	fLocal_123[20] = 1f;
	iLocal_197[20] = joaat("maverick");
	Local_175[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_118[21] = -0.0252f;
	fLocal_119[21] = -0.0034f;
	fLocal_120[21] = 0.9369f;
	fLocal_121[21] = 0.3487f;
	iLocal_152[21] = 5;
	fLocal_122[21] = 3834f;
	fLocal_123[21] = 1f;
	iLocal_197[21] = joaat("blista");
	Local_175[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_118[22] = 0.001f;
	fLocal_119[22] = -0.0004f;
	fLocal_120[22] = 0.8616f;
	fLocal_121[22] = 0.5075f;
	iLocal_152[22] = 6;
	fLocal_122[22] = 20176f;
	fLocal_123[22] = 1f;
	iLocal_197[22] = joaat("airtug");
	Local_175[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_118[23] = 0.001f;
	fLocal_119[23] = -0.0001f;
	fLocal_120[23] = 0.9749f;
	fLocal_121[23] = -0.2228f;
	iLocal_152[23] = 7;
	fLocal_122[23] = 48538f;
	fLocal_123[23] = 1f;
	iLocal_197[23] = joaat("airtug");
	Local_175[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_118[24] = -0.0001f;
	fLocal_119[24] = 0.0018f;
	fLocal_120[24] = 0.5344f;
	fLocal_121[24] = 0.8452f;
	iLocal_152[24] = 8;
	fLocal_122[24] = 75112f;
	fLocal_123[24] = 1f;
	iLocal_197[24] = joaat("airtug");
}

void func_361(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	bLocal_159 = iParam1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_166 = 0;
	iLocal_169 = 0;
	iLocal_167 = -1;
	iLocal_168 = -1;
	iLocal_170 = 0;
	iLocal_171 = 0;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0;
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		Local_177.f_0 = (Var0.f_0 - 100f);
		Local_177.f_1 = (Var0.f_1 - 100f);
		Local_177.f_2 = (Var0.f_2 - 100f);
		Local_178.f_0 = (Var0.f_0 + 100f);
		Local_178.f_1 = (Var0.f_1 + 100f);
		Local_178.f_2 = (Var0.f_2 + 100f);
		unk_0xBF1A602B5BA52FEE(Local_177, Local_178, false, false);
		if (bParam2)
		{
			unk_0x01C7B9B38428AEB6(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	unk_0xF372BC22FCB88606("rgh_traffic", &iLocal_194);
	func_350();
	if (bParam3)
	{
		func_202(1);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x102E68B2024D536D(false);
	}
	func_207();
}

void func_362()
{
	if (iLocal_223 == 0)
	{
		unk_0x293220DA1B46CEBC(0f, 14f, 4);
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_372 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_329 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_341 = 0;
		iLocal_350 = 0;
		iLocal_348 = 0;
		iLocal_407 = 0;
		iLocal_410 = 0;
		iLocal_449 = 0;
		iLocal_371 = 0;
		iLocal_349 = 1;
		iLocal_227 = 0;
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iLocal_359 = 1;
		}
		else
		{
			iLocal_359 = 0;
		}
		func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		unk_0x72751156E7678833(true);
		unk_0xBF1A602B5BA52FEE(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, true);
		iLocal_230 = unk_0x9CD27B0045628463();
		if (unk_0xB16FCE9DDC7BA182())
		{
			if (!func_24())
			{
				unk_0x4448EB75B4904BDB(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
			}
			func_21(0, -1, 1);
			unk_0x629BFA74418D6239(&bLocal_279);
			unk_0x629BFA74418D6239(&bLocal_290);
			unk_0x629BFA74418D6239(&bLocal_291);
		}
		if (!unk_0x5A859503B0C08678())
		{
			unk_0xD4E8E24955024033(800);
		}
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_299))
		{
			bLocal_299 = func_367(Local_308, 0);
		}
		unk_0x706D57B0F50DA710("TRV4_GAMEPLAY_START");
		Local_318 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_348 == 0 && iLocal_362 == 1)
		{
			if (!func_273() || !unk_0xAD6DACA4BA53E0A4())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_348 = 1;
			}
		}
		if (iLocal_371 == 0 && !func_366())
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_308, true) < 800f)
			{
				bLocal_229 = unk_0xD53343AA4FB7DD28(false, 2);
				if (bLocal_229 == 0)
				{
					unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_371 = 1;
				}
				if (bLocal_229 == 1)
				{
					unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_371 = 1;
				}
			}
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_308, true) < 600f)
		{
			if (!unk_0x7239B21A38F536BA(bLocal_278))
			{
				unk_0x963D27A58DF860AC(joaat("cogcabrio"));
				if (unk_0x98A4EB5D89A0C952(joaat("cogcabrio")))
				{
					bLocal_278 = unk_0xAF35D0D2583051B0(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, true, true, false);
					unk_0xFAEE099C6F890BB8(bLocal_278, false, true, true, true, false, false, false, false);
					unk_0x4F1D4BE3A7F24601(bLocal_278, 27, 27);
					unk_0xE532F5D78798DAAB(joaat("cogcabrio"));
					unk_0x153973AB99FE8980(bLocal_278, "SOL_3_MOLLY_CAR_Group", 0f);
				}
			}
			if (!unk_0x7239B21A38F536BA(bLocal_264))
			{
				unk_0x963D27A58DF860AC(joaat("ig_molly"));
				if (unk_0x98A4EB5D89A0C952(joaat("ig_molly")))
				{
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							bLocal_264 = unk_0x7DD959874C1FD534(bLocal_278, 26, joaat("ig_molly"), -1, true, true);
							unk_0x3882114BDE571AD4(bLocal_264, true);
							unk_0x63F58F7C80513AAD(bLocal_264, false);
							unk_0xE532F5D78798DAAB(joaat("cogcabrio"));
							unk_0xE532F5D78798DAAB(joaat("ig_molly"));
							unk_0xC80A74AC829DDD92(bLocal_264, joaat("player"));
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				unk_0x9614299DCB53E54B(&bLocal_264);
			}
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				unk_0xEA386986E786A54F(&bLocal_278);
			}
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_308, true) < 500f)
		{
			if (iLocal_360 == 0)
			{
				iLocal_305 = unk_0x11FE353CF9733E6F("BREAKING_NEWS");
				unk_0x963D27A58DF860AC(joaat("police3"));
				unk_0x963D27A58DF860AC(joaat("maverick"));
				unk_0x963D27A58DF860AC(joaat("bison"));
				unk_0x963D27A58DF860AC(joaat("blista"));
				unk_0xAF514CABE74CBF15(45, "BB_Chase");
				unk_0xAF514CABE74CBF15(35, "BB_Chase");
				unk_0xAF514CABE74CBF15(2, "BB_Chase");
				unk_0xAF514CABE74CBF15(54, "BB_Chase");
				unk_0xAF514CABE74CBF15(55, "BB_Chase");
				unk_0xAF514CABE74CBF15(67, "BB_Chase");
				func_199(1, "BB_Chase");
				unk_0x1E5185B72EF5158A("TRV4_CHASE");
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			unk_0xE532F5D78798DAAB(joaat("police3"));
			unk_0xE532F5D78798DAAB(joaat("maverick"));
			unk_0xE532F5D78798DAAB(joaat("bison"));
			unk_0xE532F5D78798DAAB(joaat("blista"));
			unk_0xF1160ACCF98A3FC8(45, "BB_Chase");
			unk_0xF1160ACCF98A3FC8(35, "BB_Chase");
			unk_0xF1160ACCF98A3FC8(2, "BB_Chase");
			unk_0xF1160ACCF98A3FC8(54, "BB_Chase");
			unk_0xF1160ACCF98A3FC8(55, "BB_Chase");
			unk_0xF1160ACCF98A3FC8(67, "BB_Chase");
			func_365(1, "BB_Chase");
			unk_0x5B17A90291133DA5("TRV4_CHASE");
			iLocal_360 = 0;
		}
		if (iLocal_372 == 0)
		{
			if (unk_0x9CD27B0045628463() > (iLocal_230 + 135000))
			{
				unk_0xCC33FA791322B9D9();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_230 = unk_0x9CD27B0045628463();
				iLocal_372 = 1;
			}
		}
		if (iLocal_372 == 1)
		{
			if (unk_0x9CD27B0045628463() > (iLocal_230 + 135000))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0xB65B60556E2A9225("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0x013A80FC08F6E4F2("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0)
			{
				unk_0x706D57B0F50DA710("TRV4_CAR_ENTERED");
				iLocal_407 = 1;
			}
			if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				bLocal_279 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				unk_0xFAEE099C6F890BB8(bLocal_279, false, true, false, false, false, false, false, false);
				unk_0xB72E26D81006005B(bLocal_279);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
		}
		else if (unk_0x7239B21A38F536BA(bLocal_279))
		{
			if (unk_0x4C241E39B23DF959(bLocal_279, false))
			{
				if (iLocal_359 == 0)
				{
					unk_0xFAEE099C6F890BB8(bLocal_279, false, false, false, false, false, false, false, false);
					iLocal_359 = 1;
				}
				if (iLocal_351 == 1)
				{
					unk_0xC53EB42A499A7E90(bLocal_279);
					iLocal_351 = 0;
				}
				if (unk_0xDDE6DF5AE89981D2(bLocal_279, true))
				{
					unk_0x629BFA74418D6239(&bLocal_279);
				}
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (iLocal_410 == 0)
			{
				unk_0x3D3D15AF7BCAAF83(156, true, false);
				unk_0xA905192A6781C41B(-244f, -1842.74f, 28.48f);
				unk_0xA905192A6781C41B(-1.5f, -2014.4f, 11.5f);
				unk_0xA905192A6781C41B(-498.7f, -2136.5f, 8.4f);
				unk_0x3DDA37128DD1ACA8(true);
				iLocal_410 = 1;
			}
		}
		else if (iLocal_410 == 1)
		{
			unk_0x3DDA37128DD1ACA8(false);
			iLocal_410 = 0;
		}
		if ((iLocal_360 == 1 && unk_0x7239B21A38F536BA(bLocal_278)) && unk_0x7239B21A38F536BA(bLocal_264))
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x131D401334815E94(bLocal_278, func_364(unk_0xD80958FC74E988A6()), 0))
				{
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_278))
				{
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(bLocal_278, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_357 = 0;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_357 = 1;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					unk_0x67EEDEA1B9BAFD94();
					unk_0x72751156E7678833(false);
					iLocal_357 = 1;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
		}
	}
}

void func_363()
{
	while (((!unk_0x98A4EB5D89A0C952(joaat("police3")) || !unk_0x98A4EB5D89A0C952(joaat("maverick"))) || !unk_0x98A4EB5D89A0C952(joaat("bison"))) || !unk_0x98A4EB5D89A0C952(joaat("blista")))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (((((!unk_0x300D614A4C785FC4(45, "BB_Chase") || !unk_0x300D614A4C785FC4(35, "BB_Chase")) || !unk_0x300D614A4C785FC4(2, "BB_Chase")) || !unk_0x300D614A4C785FC4(54, "BB_Chase")) || !unk_0x300D614A4C785FC4(55, "BB_Chase")) || !unk_0x300D614A4C785FC4(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
}

var func_364(bool bParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(bParam0, &uVar0, true);
	return uVar0;
}

void func_365(bool bParam0, bool bParam1)
{
	unk_0xF1160ACCF98A3FC8(bParam0, bParam1);
}

int func_366()
{
	if (Global_21605 == 4)
	{
		if (unk_0x7497D2CE2C30D24C())
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

bool func_367(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_245(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

void func_368()
{
	if (iLocal_223 == 0)
	{
		iLocal_336 = 1;
		iLocal_416 = 0;
		iLocal_433 = 0;
		iLocal_437 = 0;
		while (iLocal_336 == 1)
		{
			unk_0x208784099002BC30("M_LegalTrouble", 0);
			switch (iLocal_225)
			{
				case 0:
					unk_0x7A86743F475D9E09("sol_3_int", 8);
					if (func_412())
					{
						while (!func_384(61, &uLocal_655, 0, 1, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(false);
						}
						iLocal_406 = 0;
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
						func_232(1, 1, 1, 0, 0, 0, 0);
						unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "Michael", 0, false, 0);
						if (unk_0x7239B21A38F536BA(Global_96938[0]))
						{
							if (unk_0x4C241E39B23DF959(Global_96938[0], false))
							{
								unk_0xAD738C3085FE7E11(Global_96938[0], true, true);
								bLocal_279 = Global_96938[0];
							}
						}
						if (unk_0x7239B21A38F536BA(Global_96938[1]))
						{
							if (unk_0x4C241E39B23DF959(Global_96938[1], false))
							{
								unk_0xAD738C3085FE7E11(Global_96938[1], true, true);
								bLocal_290 = Global_96938[1];
							}
						}
						if (unk_0x7239B21A38F536BA(Global_96938[2]))
						{
							if (unk_0x4C241E39B23DF959(Global_96938[2], false))
							{
								unk_0xAD738C3085FE7E11(Global_96938[2], true, true);
								bLocal_291 = Global_96938[2];
							}
						}
						if (unk_0x7239B21A38F536BA(Global_96938[3]))
						{
							if (unk_0x4C241E39B23DF959(Global_96938[3], false))
							{
								unk_0xAD738C3085FE7E11(Global_96938[3], true, true);
								bLocal_292 = Global_96938[3];
							}
						}
						unk_0x186D5CB5E7B0FF7B(0);
						unk_0x48621C9FCA3EBD28(4);
						func_383();
						if (!unk_0x5A859503B0C08678())
						{
							unk_0xD4E8E24955024033(250);
						}
						iLocal_225++;
					}
					break;
				
				case 1:
					if (iLocal_416 == 0)
					{
						if (unk_0x991251AFC3981F84())
						{
							if (iLocal_437 == 0)
							{
								if (unk_0x7239B21A38F536BA(bLocal_292))
								{
									if (unk_0x4C241E39B23DF959(bLocal_292, false))
									{
										if (unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(bLocal_292)))
										{
											unk_0xCFC8BE9A5E1FE575(bLocal_292, 2);
											unk_0x06843DA7060A026B(bLocal_292, -1048.722f, -506.8387f, 35.0386f, true, false, false, true);
											unk_0x8E2530AA8ADA980E(bLocal_292, 357.1288f);
											unk_0x781B3D62BB013EF5(bLocal_292, true);
											unk_0x49733E92263139D1(bLocal_292, 5f);
											func_373(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_437 = 1;
										}
										if (((unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bLocal_292)) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bLocal_292))) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(bLocal_292))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(bLocal_292)))
										{
											if ((((((((unk_0x9F47B058362C84B5(bLocal_292) != joaat("bus") && unk_0x9F47B058362C84B5(bLocal_292) != joaat("pounder")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("packer")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("airbus")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("ambulance")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("barracks")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("barracks2")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("benson")) && unk_0x9F47B058362C84B5(bLocal_292) != joaat("biff"))
											{
												unk_0x06843DA7060A026B(bLocal_292, -1027.657f, -486.6945f, 35.9571f, true, false, false, true);
												unk_0x8E2530AA8ADA980E(bLocal_292, 207.7515f);
												unk_0x49733E92263139D1(bLocal_292, 5f);
												func_373(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_437 = 1;
											}
										}
										if ((((!unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(bLocal_292)) && !unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bLocal_292))) && !unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bLocal_292))) && !unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(bLocal_292))) && !unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(bLocal_292)))
										{
											unk_0xEA386986E786A54F(&bLocal_292);
											iLocal_437 = 1;
										}
									}
								}
							}
							func_371(&uLocal_655, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_416 = 1;
						}
					}
					if (iLocal_406 == 0)
					{
						unk_0xF372BC22FCB88606("SecGuards", &iLocal_488);
						unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_488);
						unk_0xBF25EB89375A37AD(5, iLocal_488, joaat("player"));
						unk_0x71A78003C8E71424("TREV4", false);
						iLocal_406 = 1;
					}
					if (iLocal_433 == 0)
					{
						if (unk_0xD3C2E180A40F031E())
						{
							unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
							unk_0x8FE22675A5A45817(unk_0xD80958FC74E988A6());
							unk_0x3AC1F7B898F30C05(unk_0xD80958FC74E988A6());
							if (unk_0xE625BEABBAFFDAB9() > 120000)
							{
								unk_0x706D57B0F50DA710("TRV4_START");
								iLocal_433 = 1;
							}
						}
					}
					if (unk_0x4C6A6451C79E4662("Michael", false))
					{
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1012.268f, -480.0742f, 38.9757f, true, false, false, true);
						unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 121.4087f);
						unk_0x477D5D63E63ECA5D(unk_0x4F8644AF03D0E0D6(), 2f, 3000, false, true, false);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
						unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Run"), false, 0, false);
					}
					if (unk_0xB2CBCD0930DFB420(false))
					{
						unk_0xB4EC2312F4E5B1F1(0f);
					}
					if (!unk_0x991251AFC3981F84())
					{
						func_370(61);
						if (iLocal_433 == 0)
						{
							unk_0x706D57B0F50DA710("TRV4_START_CS_SKIP");
							iLocal_433 = 1;
						}
						unk_0x81CBAE94390F9F89();
						func_232(0, 1, 1, 0, 0, 0, 0);
						iLocal_225++;
					}
					break;
				
				case 2:
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					if (unk_0x7239B21A38F536BA(bLocal_279))
					{
						if (unk_0x4C241E39B23DF959(bLocal_279, false))
						{
							if (unk_0xDDE6DF5AE89981D2(bLocal_279, true))
							{
								unk_0x629BFA74418D6239(&bLocal_279);
							}
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_290))
					{
						if (unk_0x4C241E39B23DF959(bLocal_290, false))
						{
							if (unk_0xDDE6DF5AE89981D2(bLocal_290, true))
							{
								unk_0x629BFA74418D6239(&bLocal_290);
							}
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_291))
					{
						if (unk_0x4C241E39B23DF959(bLocal_291, false))
						{
							if (unk_0xDDE6DF5AE89981D2(bLocal_291, true))
							{
								unk_0x629BFA74418D6239(&bLocal_291);
							}
						}
					}
					func_369();
					iLocal_336 = 0;
					iLocal_225 = 0;
					iLocal_223 = 0;
					iLocal_222 = 2;
					break;
			}
			unk_0x4EDE34FBADD967A6(false);
		}
	}
}

void func_369()
{
	Global_63160 = 0;
}

void func_370(int iParam0)
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_371(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	
	if (iParam4 == 1)
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()), 64);
	}
	if (!unk_0xD3C2E180A40F031E())
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
	}
	else
	{
		unk_0x07E5B515DB0636FC(bParam1, bParam2, bParam3, true, false, 0);
	}
	if (bParam1)
	{
		unk_0x8DFCED7A656F8802(true);
	}
	else
	{
		if (unk_0xA7A932170592B50E(uParam0->f_4))
		{
			if (unk_0xDFB2B516207D3534(uParam0->f_4))
			{
				unk_0x026FB97D0A425F84(uParam0->f_4, false);
			}
			unk_0x865908C81A2C22E9(uParam0->f_4, true);
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), true, false);
		}
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (unk_0x7239B21A38F536BA(bVar0))
		{
			unk_0xEA1C610A04DB6BBB(bVar0, true, false);
		}
		unk_0x77ED170667F50170("TIME_LAPSE");
		if (unk_0xB65B60556E2A9225("TOD_SHIFT_SCENE"))
		{
			unk_0xA3B0C41BA5CC0BB5(uParam0->f_10);
			unk_0x77ED170667F50170("TIME_LAPSE");
			unk_0xDFE8422B3B94E688("TOD_SHIFT_SCENE");
		}
	}
	func_232(bParam1, 1, 0, 0, 0, 0, 0);
	func_372();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_7, false, false);
		}
		else
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_8, false, false);
		}
	}
	if (!bParam1)
	{
		if (unk_0xB16FCE9DDC7BA182())
		{
			unk_0xD4E8E24955024033(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = func_96();
		}
	}
}

void func_372()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xBE4390CB40B3E627(Global_113386.f_14141[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_373(struct<3> Param0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x7239B21A38F536BA(Global_103950.f_4))
	{
		if (unk_0x4C241E39B23DF959(Global_103950.f_4, false))
		{
			if (func_382(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_379(unk_0x3FEF770D40960D5A(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						bParam1 = uVar1;
					}
				}
				func_374(Global_103950.f_4, Param0, bParam1, 24, 0);
			}
		}
	}
}

void func_374(bool bParam0, struct<3> Param1, bool bParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x7239B21A38F536BA(Global_77137.f_484[25]) && unk_0x4C241E39B23DF959(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9F243D3919F442FE(bParam0) || unk_0x9F47B058362C84B5(bParam0) == joaat("bus")) || unk_0x9F47B058362C84B5(bParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_378(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(bParam0, &Var0);
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			bParam2 = unk_0xE83D4F9BA2A38914(bParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
			}
		}
		func_376(iParam3, &Var0, Param1, bParam2, func_34(bParam0));
		func_375(iParam3, bParam0, 0);
	}
}

void func_375(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_161(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != unk_0x9F47B058362C84B5(bParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		if (unk_0x4C241E39B23DF959(bParam1, false))
		{
			if (!unk_0x0A7B270912999B3C(bParam1))
			{
				unk_0xAD738C3085FE7E11(bParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_96();
			}
			if (bParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_382(iParam0);
					if ((unk_0x7239B21A38F536BA(bVar0) && unk_0x4C241E39B23DF959(bVar0, false)) && bParam1 != bVar0)
					{
						func_147(bVar0, 145);
					}
				}
				Global_78043 = bParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_376(int iParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4)
{
	if (func_161(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_377(iParam0);
			func_158(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = bParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_154(iParam0, 1);
		}
	}
}

void func_377(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_161(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
			unk_0x629BFA74418D6239(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_154(iParam0, 0);
		}
	}
}

void func_378(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_377(iParam0);
	func_154(iParam0, 0);
}

int func_379(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_380(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_380(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_381(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xF1B760881820C952(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_381(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_382(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

void func_383()
{
	Global_63160 = 1;
}

bool func_384(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_411(iParam0, &Var0);
	func_410(iParam0, &Var0, &(Var0.f_1));
	return func_385(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_385(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_443(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_7, false, false);
		}
		else
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_8, false, false);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_408(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0xFE02FFBED8CA9D99("TIME_LAPSE", false, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0x719FF505F097FD20();
	unk_0x6806C51AD12B83B8(7);
	unk_0x95E3D6257B166CF2(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x865908C81A2C22E9(uParam0->f_4, false);
			uParam0->f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
			unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xB13C14F66A00D047(uParam0->f_4, uParam1->f_14);
			unk_0x026FB97D0A425F84(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), false, false);
				}
				bVar0 = unk_0xB6997A7EB3F5C8C0();
				if (unk_0x7239B21A38F536BA(bVar0))
				{
					if (!unk_0x0A7B270912999B3C(bVar0))
					{
						unk_0xAD738C3085FE7E11(bVar0, true, false);
					}
					unk_0xEA1C610A04DB6BBB(bVar0, false, false);
				}
			}
			bVar1 = unk_0xB60A9CFEB21CA6AA(uParam0->f_4);
			unk_0x23B59D8912F94246();
			unk_0x04F8FC8FCF58F88D(uParam1->f_2, bVar1, 0);
			unk_0xDD19FA1C6D657305(uParam1->f_2, bVar1);
			unk_0x5D6B2D4830A67C62(uParam1->f_2, bVar1);
			if (bParam3)
			{
				unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, true, true, false, false);
			}
			func_407(&(uParam0->f_1), 0, 0, 0, unk_0x3D10BC92A4DB1D35(), unk_0xBBC72712E80257A1(), unk_0x961777E64BDAF717());
			func_371(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_408(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x865908C81A2C22E9(uParam0->f_4, false);
				uParam0->f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xB13C14F66A00D047(uParam0->f_4, uParam1->f_14);
				unk_0x026FB97D0A425F84(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
					{
						unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), false, false);
					}
					bVar2 = unk_0xB6997A7EB3F5C8C0();
					if (unk_0x7239B21A38F536BA(bVar2))
					{
						if (!unk_0x0A7B270912999B3C(bVar2))
						{
							unk_0xAD738C3085FE7E11(bVar2, true, false);
						}
						unk_0xEA1C610A04DB6BBB(bVar2, false, false);
					}
				}
				bVar3 = unk_0xB60A9CFEB21CA6AA(uParam0->f_4);
				unk_0x23B59D8912F94246();
				unk_0x04F8FC8FCF58F88D(uParam1->f_2, bVar3, 0);
				unk_0xDD19FA1C6D657305(uParam1->f_2, bVar3);
				unk_0x5D6B2D4830A67C62(uParam1->f_2, bVar3);
				if (bParam3)
				{
					unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, true, true, false, false);
				}
				func_407(&(uParam0->f_1), 0, 0, 8, unk_0x3D10BC92A4DB1D35(), unk_0xBBC72712E80257A1(), unk_0x961777E64BDAF717());
				func_371(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x77ED170667F50170("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x865908C81A2C22E9(uParam0->f_4, false);
			uParam0->f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
			unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xB13C14F66A00D047(uParam0->f_4, uParam1->f_14);
			unk_0xD1B0F412F109EA5D(uParam0->f_4, 3);
			unk_0x026FB97D0A425F84(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), false, false);
				}
				bVar4 = unk_0xB6997A7EB3F5C8C0();
				if (unk_0x7239B21A38F536BA(bVar4))
				{
					if (!unk_0x0A7B270912999B3C(bVar4))
					{
						unk_0xAD738C3085FE7E11(bVar4, true, false);
					}
					unk_0xEA1C610A04DB6BBB(bVar4, false, false);
				}
			}
			bVar5 = unk_0xB60A9CFEB21CA6AA(uParam0->f_4);
			unk_0x23B59D8912F94246();
			unk_0x04F8FC8FCF58F88D(uParam1->f_2, bVar5, 0);
			unk_0xDD19FA1C6D657305(uParam1->f_2, bVar5);
			unk_0x5D6B2D4830A67C62(uParam1->f_2, bVar5);
			if (bParam3)
			{
				unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, false, true, false, false);
			}
			func_407(&(uParam0->f_1), 0, 0, 0, unk_0x3D10BC92A4DB1D35(), unk_0xBBC72712E80257A1(), unk_0x961777E64BDAF717());
			func_371(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x77ED170667F50170("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (!uParam0->f_5)
		{
			if (func_388(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x9CD27B0045628463();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
					unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xB13C14F66A00D047(uParam0->f_4, uParam1->f_14);
					unk_0xD1B0F412F109EA5D(uParam0->f_4, 3);
					unk_0x026FB97D0A425F84(uParam0->f_4, true);
					uParam0->f_9 = unk_0x9CD27B0045628463();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_388(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x9CD27B0045628463();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0x8609C75EC438FB3B(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xB13C14F66A00D047(uParam0->f_4, uParam1->f_14);
				unk_0xD1B0F412F109EA5D(uParam0->f_4, 3);
				unk_0x026FB97D0A425F84(uParam0->f_4, true);
				uParam0->f_9 = unk_0x9CD27B0045628463();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_386(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x797AC7CB535BA28F())
				{
					unk_0x891B5B39AC6302AF(250);
				}
				if (!unk_0xB16FCE9DDC7BA182())
				{
					unk_0x719FF505F097FD20();
					unk_0x6806C51AD12B83B8(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_388(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (unk_0xA7A932170592B50E(uParam0->f_4) && unk_0x036F97C908C2B52C(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x9CD27B0045628463();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_386(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x797AC7CB535BA28F())
				{
					unk_0x891B5B39AC6302AF(250);
				}
				if (!unk_0xB16FCE9DDC7BA182())
				{
					unk_0x719FF505F097FD20();
					unk_0x6806C51AD12B83B8(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0xA56F01F3765B93A0(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (uParam0->f_9 + 1000 > unk_0x9CD27B0045628463())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
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
			if (func_387())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_387()
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

int func_388(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_96();
			bVar5 = func_96();
			func_104(&bVar5, bParam0);
			func_105(&bVar5, bParam1);
			func_106(&bVar5, 0);
			if (func_405(*uParam4, bVar5))
			{
				func_404(&bVar5, 0, 0, 0, 1, 0, 0);
			}
			func_402(*uParam4, bVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_395((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x5F0F3F56635809EF(0.6f);
				unk_0x80ECBC0C856D3B0B(false);
				unk_0x0AE73D8DF3A762B2(false);
			}
			func_394();
			uParam4->f_10 = unk_0x430386FE9BF80B45();
			unk_0x67C540AA08E4A6F5(uParam4->f_10, "TIME_LAPSE_MASTER", false, true);
			unk_0x013A80FC08F6E4F2("TOD_SHIFT_SCENE");
			func_372();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0xA7A932170592B50E(uParam4->f_4) && unk_0x036F97C908C2B52C(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0xA7A932170592B50E(uParam4->f_4) && unk_0x036F97C908C2B52C(uParam4->f_4))
				{
					fVar0 = unk_0xB5349E36C546509A(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0xD24D37CC275948CC(bParam2) != 0)
						{
							unk_0xFB5045B7C42B75BF(bParam2, fParam8);
						}
						if (unk_0xD24D37CC275948CC(bParam3) != 0)
						{
							unk_0x957E790EA1727B64();
							unk_0xFC4842A34657BFCB(bParam3, 0f);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				bVar5 = *uParam4;
				func_404(&bVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x47C3B5848C3E45D8(func_393(bVar5), func_392(bVar5), func_391(bVar5));
				if (bParam7)
				{
					unk_0x03FC694AE06C5A20();
				}
				unk_0xA3B0C41BA5CC0BB5(uParam4->f_10);
				unk_0x77ED170667F50170("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x0AE73D8DF3A762B2(true);
					unk_0x80ECBC0C856D3B0B(true);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_390(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			bVar4 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar12));
			bVar5 = *uParam4;
			func_404(&bVar5, bVar4, 0, 0, 0, 0, 0);
			unk_0x47C3B5848C3E45D8(func_393(bVar5), func_392(bVar5), func_391(bVar5));
			if (func_389(bVar5) != unk_0x3D10BC92A4DB1D35())
			{
				unk_0xB096419DF0D06CE7(func_389(bVar5), func_103(bVar5), func_101(bVar5));
			}
			func_283();
			unk_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_389(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

float func_390(float fParam0, float fParam1, float fParam2)
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

int func_391(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_392(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_393(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_394()
{
	bool bVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (!unk_0x5F9532F3B5CC2551(bVar0, false))
	{
		return 0;
	}
	unk_0x1B9C0099CB942AC6(bVar0, "OFF");
	return 1;
}

void func_395(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_401(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5)))
		{
			func_396(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_401(&(Global_113386.f_18103.f_362[iVar1 /*3*/])))
		{
			func_396(&(Global_113386.f_18103.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x6DDBBDD98E2E9C25();
}

void func_396(bool bParam0, float fParam1)
{
	if (func_401(bParam0))
	{
		func_397(bParam0, (func_399(bParam0) + fParam1));
	}
}

void func_397(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_398(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_398(bool bParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	if (bParam0)
	{
		bVar0 = unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463());
		fVar1 = (bVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar2 = unk_0x7A5487FE9FAA6B48();
		bVar3 = unk_0xBBDA792448DB5A89(bVar2);
		fVar4 = (bVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

float func_399(var uParam0)
{
	if (func_401(uParam0))
	{
		if (func_400(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_398(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_400(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_401(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_402(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_405(bParam0, bParam1))
	{
		bVar0 = func_103(bParam1);
		iVar1 = func_101(bParam0);
		iVar2 = (func_101(bParam0) - func_101(bParam1));
		iVar3 = (func_103(bParam0) - func_103(bParam1));
		iVar4 = (func_389(bParam0) - func_389(bParam1));
		iVar5 = (func_393(bParam0) - func_393(bParam1));
		iVar6 = (func_392(bParam0) - func_392(bParam1));
		iVar7 = (func_391(bParam0) - func_391(bParam1));
	}
	else
	{
		bVar0 = func_103(bParam0);
		iVar1 = func_101(bParam1);
		iVar2 = (func_101(bParam1) - func_101(bParam0));
		iVar3 = (func_103(bParam1) - func_103(bParam0));
		iVar4 = (func_389(bParam1) - func_389(bParam0));
		iVar5 = (func_393(bParam1) - func_393(bParam0));
		iVar6 = (func_392(bParam1) - func_392(bParam0));
		iVar7 = (func_391(bParam1) - func_391(bParam0));
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
		iVar4 = (iVar4 + func_100(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_403(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_403(bool bParam0, float fParam1, float fParam2)
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

void func_404(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_101(*bParam0);
	iVar1 = func_103(*bParam0);
	bVar2 = func_389(*bParam0);
	bVar3 = func_393(*bParam0);
	bVar4 = func_392(*bParam0);
	bVar5 = func_391(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && bParam1 == 0)
	{
		return;
	}
	if (bParam1 < 0)
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
	bVar5 = (bVar5 + bParam1);
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
	iVar6 = func_100(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_100(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_407(bParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

int func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_406(bParam1) || !func_406(bParam0))
	{
		return 1;
	}
	iVar0 = func_101(bParam0);
	iVar1 = func_101(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_103(bParam0);
	iVar1 = func_103(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_389(bParam0);
	iVar1 = func_389(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_393(bParam0);
	iVar1 = func_393(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_392(bParam0);
	iVar1 = func_392(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_391(bParam0);
	iVar1 = func_391(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_406(bool bParam0)
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
	iVar0 = func_391(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_392(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_393(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_101(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_103(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_389(bParam0);
	if (iVar5 < 1 || iVar5 > func_100(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_407(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_106(uParam0, bParam1);
	func_105(uParam0, bParam2);
	func_104(uParam0, bParam3);
	func_98(uParam0, iParam5);
	func_99(uParam0, bParam4);
	func_97(uParam0, iParam6);
}

bool func_408(int iParam0, int iParam1)
{
	return func_409(unk_0x25223CA6B4D20B7F(), iParam0, iParam1);
}

int func_409(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (bParam0 >= iVar1 && bParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (bParam0 >= iVar1 && bParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_410(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_91229[iParam0 /*34*/].f_14;
			*uParam2 = Global_91229[iParam0 /*34*/].f_13;
			break;
	}
}

void func_411(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_107())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_107())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_107() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0xD24D37CC275948CC("RAIN") == unk_0x564B884A05EC45A3())
	{
		if (unk_0xCA042B6957743895(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xCA042B6957743895(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_412()
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

void func_413()
{
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	if (!func_23())
	{
		if (func_443(0))
		{
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
			unk_0x963D27A58DF860AC(joaat("rapidgt"));
			unk_0x963D27A58DF860AC(joaat("surano"));
			unk_0x963D27A58DF860AC(joaat("carbonizzare"));
			while ((!unk_0x98A4EB5D89A0C952(joaat("rapidgt")) || !unk_0x98A4EB5D89A0C952(joaat("surano"))) || !unk_0x98A4EB5D89A0C952(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_279))
			{
				unk_0xA56F01F3765B93A0(Local_306, 5f, true, false, false, false);
				bLocal_279 = unk_0xAF35D0D2583051B0(joaat("rapidgt"), Local_306, bLocal_319, true, true, false);
				unk_0x4F1D4BE3A7F24601(bLocal_279, 112, 112);
				unk_0x6B76DC1F3AE6E6A3(bLocal_279, 3000, false);
				unk_0x3E8C8727991A8A0B(bLocal_279, true);
				unk_0xE532F5D78798DAAB(joaat("rapidgt"));
				unk_0x0FC2D89AC25A5814(joaat("rapidgt"), true);
				unk_0x3910051CCECDB00C(bLocal_279, true);
				unk_0x92F0CF722BC4202F(bLocal_279, true);
			}
			if (!unk_0x7239B21A38F536BA(bLocal_290))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("surano")))
				{
					unk_0xA56F01F3765B93A0(-1037.398f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					bLocal_290 = unk_0xAF35D0D2583051B0(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					unk_0x4F1D4BE3A7F24601(bLocal_290, false, false);
					unk_0x6B76DC1F3AE6E6A3(bLocal_290, 3000, false);
					unk_0x3E8C8727991A8A0B(bLocal_290, true);
					unk_0xE532F5D78798DAAB(joaat("surano"));
					unk_0x0FC2D89AC25A5814(joaat("surano"), true);
					unk_0x92F0CF722BC4202F(bLocal_290, true);
				}
			}
			if (!unk_0x7239B21A38F536BA(bLocal_291))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("carbonizzare")))
				{
					unk_0xA56F01F3765B93A0(Local_306, 5f, true, false, false, false);
					bLocal_291 = unk_0xAF35D0D2583051B0(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					unk_0x4F1D4BE3A7F24601(bLocal_291, 89, 89);
					unk_0x6B76DC1F3AE6E6A3(bLocal_291, 3000, false);
					unk_0x3E8C8727991A8A0B(bLocal_291, true);
					unk_0xE532F5D78798DAAB(joaat("carbonizzare"));
					unk_0x0FC2D89AC25A5814(joaat("carbonizzare"), true);
					unk_0x92F0CF722BC4202F(bLocal_291, true);
				}
			}
		}
		iLocal_223 = 0;
		iLocal_225 = 0;
		iLocal_343 = 0;
		iLocal_222 = 1;
	}
	else
	{
		unk_0xF372BC22FCB88606("SecGuards", &iLocal_488);
		unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_488);
		unk_0xBF25EB89375A37AD(5, iLocal_488, joaat("player"));
		if (Global_94618 == 1)
		{
			if (func_416() == 0)
			{
				func_415(Local_316, bLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_416() == 1)
			{
				func_415(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_416() == 2)
			{
				func_415(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
			if (func_416() == 3)
			{
				func_415(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_414();
			}
		}
		else
		{
			if (func_416() == 0)
			{
				func_415(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_START_RT");
				iLocal_222 = 2;
			}
			if (func_416() == 1)
			{
				func_415(Local_316, bLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_416() == 2)
			{
				func_415(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_416() == 3)
			{
				func_415(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x706D57B0F50DA710("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
		}
		unk_0x71A78003C8E71424("TREV4", false);
		while (!unk_0x02245FE4BED318B8(false))
		{
			unk_0x4EDE34FBADD967A6(false);
		}
	}
}

void func_414()
{
	if (iLocal_223 == 0)
	{
		unk_0xA56F01F3765B93A0(-920.0547f, -2744.662f, 12.8434f, 20f, true, false, false, false);
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		iLocal_223++;
	}
	if (iLocal_223 == 1)
	{
		unk_0x4448EB75B4904BDB(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0x5A859503B0C08678())
		{
			func_21(0, -1, 1);
			unk_0xD4E8E24955024033(800);
		}
		func_6();
	}
}

void func_415(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_23())
	{
		unk_0xAA391C728106F7AF(false);
		unk_0xE80492A9AC099A93(&(Global_100441.f_20), 2);
		unk_0x577D1284D6873711(true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 14);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 24);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 24);
		}
		func_22(1);
	}
}

int func_416()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

void func_417()
{
	if (iLocal_435[0] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[7]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[7], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[7], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_436[0] == 0)
	{
		if (iLocal_435[0] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[7]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[7], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[7], 0f);
					iLocal_436[0] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[7], 0f);
					iLocal_436[0] = 1;
				}
			}
			else
			{
				iLocal_436[0] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[8]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[8], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[8], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_436[1] == 0)
	{
		if (iLocal_435[1] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[8]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[8], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[8], 0f);
					iLocal_436[1] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[8], 0f);
					iLocal_436[1] = 1;
				}
			}
			else
			{
				iLocal_436[1] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[11]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[11], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[11], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_436[2] == 0)
	{
		if (iLocal_435[2] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[11]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[11], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[11], 0f);
					iLocal_436[2] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[11], 0f);
					iLocal_436[2] = 1;
				}
			}
			else
			{
				iLocal_436[2] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[12]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[12], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[12], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_436[3] == 0)
	{
		if (iLocal_435[3] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[12]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[12], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[12], 0f);
					iLocal_436[3] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[12], 0f);
					iLocal_436[3] = 1;
				}
			}
			else
			{
				iLocal_436[3] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[13]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[13], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[13], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_436[4] == 0)
	{
		if (iLocal_435[4] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[13]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[13], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[13], 0f);
					iLocal_436[4] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[13], 0f);
					iLocal_436[4] = 1;
				}
			}
			else
			{
				iLocal_436[4] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[14]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[14], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[14], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_436[5] == 0)
	{
		if (iLocal_435[5] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[14]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[14], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[14], 0f);
					iLocal_436[5] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[14], 0f);
					iLocal_436[5] = 1;
				}
			}
			else
			{
				iLocal_436[5] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_204[15]))
		{
			if (unk_0x4C241E39B23DF959(iLocal_204[15], false))
			{
				unk_0x153973AB99FE8980(iLocal_204[15], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[6] = 1;
			}
		}
	}
	if (iLocal_436[6] == 0)
	{
		if (iLocal_435[6] == 1)
		{
			if (unk_0x7239B21A38F536BA(iLocal_204[15]))
			{
				if (!unk_0x4C241E39B23DF959(iLocal_204[15], false))
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[15], 0f);
					iLocal_436[6] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x18EB48CFC41F2EA0(iLocal_204[15], 0f);
					iLocal_436[6] = 1;
				}
			}
			else
			{
				iLocal_436[6] = 1;
			}
		}
	}
}

void func_418()
{
	switch (iLocal_222)
	{
		case 2:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_362 = 0;
					iLocal_449 = 0;
					iLocal_472 = 0;
					iLocal_473 = 0;
					func_17(&uLocal_490, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_362 == 0)
					{
						if (unk_0xF1B760881820C952(Local_318, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) > 2f)
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_449 == 0)
					{
						if (unk_0xF1B760881820C952(Local_318, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) > 100f)
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (func_421(&uLocal_490, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x293220DA1B46CEBC(4f, 10f, 4);
									iLocal_449 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0 && iLocal_449 == 1)
					{
						if (func_420())
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_472 = 1;
								}
							}
						}
					}
					if (iLocal_473 == 0)
					{
						if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (func_16(unk_0xD80958FC74E988A6(), bLocal_278, 1) < 200f && unk_0xE659E47AF827484B(bLocal_278))
								{
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x293220DA1B46CEBC(3f, 12f, 4);
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_223 >= 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_450[0] = 0;
					iLocal_450[1] = 0;
					iLocal_450[2] = 0;
					iLocal_450[3] = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_471 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_478 = 0;
					iLocal_241 = unk_0x9CD27B0045628463();
					func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "Michael", 0, 1);
					func_17(&uLocal_490, 4, 0, "SOL3COP", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (unk_0x7239B21A38F536BA(bLocal_278))
						{
							if (unk_0x4C241E39B23DF959(bLocal_278, false))
							{
								if (func_16(unk_0xD80958FC74E988A6(), bLocal_278, 1) < 200f && unk_0xE659E47AF827484B(bLocal_278))
								{
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_278))
					{
						if (unk_0x4C241E39B23DF959(bLocal_278, false))
						{
							if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
							{
								if (iLocal_450[0] == 0)
								{
									if (unk_0x4C241E39B23DF959(iLocal_204[7], false) || unk_0x4C241E39B23DF959(iLocal_204[8], false))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 7000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 28000f)
										{
											if (!func_273())
											{
												if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
												{
													if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_450[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[1] == 0)
								{
									if (unk_0x4C241E39B23DF959(iLocal_204[7], false) || unk_0x4C241E39B23DF959(iLocal_204[8], false))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 28000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 34500f)
										{
											if (!func_273())
											{
												if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
												{
													if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_450[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[2] == 0)
								{
									if (unk_0x4C241E39B23DF959(iLocal_204[7], false) || unk_0x4C241E39B23DF959(iLocal_204[8], false))
									{
										if (unk_0x5746F3A7AB7FE544(bLocal_278) > 36000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 41000f)
										{
											if (!func_273())
											{
												if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
												{
													if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x293220DA1B46CEBC(2f, 4f, 4);
														iLocal_450[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 41000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 43500f)
									{
										if (unk_0x7239B21A38F536BA(bLocal_283) && unk_0xE659E47AF827484B(bLocal_283))
										{
											if (!func_273())
											{
												if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
												{
													if (func_274(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 50509f && unk_0x5746F3A7AB7FE544(bLocal_278) < 50872f)
									{
										if (unk_0x7239B21A38F536BA(bLocal_283) && unk_0xE659E47AF827484B(bLocal_283))
										{
											if (!func_273())
											{
												if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
												{
													if (func_274(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_471 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[3] == 0)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 58000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 68000f)
									{
										if (!func_273())
										{
											if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
											{
												if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_450[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0 && iLocal_450[3] == 1)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) < 76000f)
									{
										if (!func_273())
										{
											if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
											{
												if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_474 = 1;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 80000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 82000f)
									{
										if (unk_0x7239B21A38F536BA(iLocal_280[0]))
										{
											if (unk_0x4C241E39B23DF959(iLocal_280[0], false))
											{
												if (unk_0xE659E47AF827484B(iLocal_280[0]))
												{
													if (!func_273())
													{
														if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
														{
															if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x293220DA1B46CEBC(3f, 10f, 4);
																iLocal_469 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0)
								{
									if (unk_0x5746F3A7AB7FE544(bLocal_278) > 82100f && unk_0x5746F3A7AB7FE544(bLocal_278) < 83500f)
									{
										if (unk_0x7239B21A38F536BA(iLocal_204[11]))
										{
											if (unk_0xE659E47AF827484B(iLocal_204[11]))
											{
												if (!func_273())
												{
													if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
													{
														if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x7239B21A38F536BA(iLocal_204[12]))
										{
											if (unk_0xE659E47AF827484B(iLocal_204[12]))
											{
												if (!func_273())
												{
													if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
													{
														if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0)
								{
									if ((unk_0x5746F3A7AB7FE544(bLocal_278) > 101891f && unk_0x5746F3A7AB7FE544(bLocal_278) < 105000f) && unk_0xE659E47AF827484B(bLocal_278))
									{
										if (!func_273())
										{
											if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
											{
												if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x293220DA1B46CEBC(3f, 10f, 4);
													iLocal_478 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x5746F3A7AB7FE544(bLocal_278) > 105500f && unk_0x5746F3A7AB7FE544(bLocal_278) < 119000f) && unk_0x9CD27B0045628463() > iLocal_241 + 7000) && iLocal_477 == 0)
								{
									if (!func_273())
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x9CD27B0045628463();
												iLocal_477 = 1;
											}
										}
									}
								}
								if (iLocal_476 == 0 && iLocal_477 == 1)
								{
									if (!func_273())
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_476 = 1;
											}
										}
									}
								}
								if (((unk_0x5746F3A7AB7FE544(bLocal_278) > 105500f && unk_0x5746F3A7AB7FE544(bLocal_278) < 119000f) && unk_0x9CD27B0045628463() > iLocal_241 + 7000) && iLocal_476 == 1)
								{
									if (!func_273())
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x9CD27B0045628463();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_452 = 0;
					iLocal_479 = 0;
					iLocal_485 = 0;
					iLocal_480 = 1;
					iLocal_246 = unk_0x9CD27B0045628463();
					func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "Michael", 0, 1);
					if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
					{
						func_17(&uLocal_490, 2, bLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_485 == 0)
					{
						unk_0xED640017ED337E45("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 1;
					}
					if (iLocal_480 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (!func_273())
							{
								if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
								{
									if (func_274(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_242 = unk_0x9CD27B0045628463();
										iLocal_452 = 1;
										iLocal_479 = 1;
										iLocal_480 = 0;
									}
								}
							}
						}
						if (unk_0x9CD27B0045628463() > iLocal_242 + 5000)
						{
							if (!func_273())
							{
								if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
								{
									if (func_274(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_242 = unk_0x9CD27B0045628463();
									}
								}
							}
						}
					}
					if (iLocal_479 == 1 && unk_0x9CD27B0045628463() > iLocal_246 + 4000)
					{
						if (!func_273())
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_246 = unk_0x9CD27B0045628463();
									iLocal_480 = 1;
									iLocal_479 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
					iLocal_481 = 0;
					iLocal_482 = 0;
					func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "Michael", 0, 1);
					if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
					{
						func_17(&uLocal_490, 2, bLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (!func_273())
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_453 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 1 && iLocal_455 == 0)
					{
						if (!func_273())
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_455 = 1;
								}
							}
						}
					}
					if (iLocal_454 == 0)
					{
						if (unk_0x7239B21A38F536BA(bLocal_264))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
							{
								if (unk_0x25D39B935A038A26(bLocal_251))
								{
									if (unk_0xE4A310B1D7FA73CC(bLocal_251) > 0.65f && unk_0xE4A310B1D7FA73CC(bLocal_251) < 0.835f)
									{
										if (!func_273())
										{
											if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
											{
												if (func_274(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x293220DA1B46CEBC(8f, 8f, 4);
													iLocal_454 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0)
					{
						if (!unk_0x7239B21A38F536BA(bLocal_264))
						{
							if (!func_273())
							{
								if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
								{
									if (func_274(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_481 = 1;
									}
								}
							}
						}
					}
					if (iLocal_481 == 1 && iLocal_482 == 0)
					{
						if (!func_273())
						{
							if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
							{
								if (func_274(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_482 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_483 = 0;
					iLocal_247 = unk_0x9CD27B0045628463();
					func_17(&uLocal_490, 0, unk_0xD80958FC74E988A6(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_483 == 0)
					{
						if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							bLocal_277 = func_419(unk_0xD80958FC74E988A6(), joaat("COP"), 0, 0, 28);
							if (unk_0x7239B21A38F536BA(bLocal_277))
							{
								if (func_16(unk_0xD80958FC74E988A6(), bLocal_277, 1) < 40f)
								{
									if (!func_273())
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_483 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 1 && unk_0x9CD27B0045628463() > iLocal_247 + 5000)
					{
						if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							bLocal_277 = func_419(unk_0xD80958FC74E988A6(), joaat("COP"), 0, 0, 28);
							if (unk_0x7239B21A38F536BA(bLocal_277))
							{
								if (func_16(unk_0xD80958FC74E988A6(), bLocal_277, 1) < 40f)
								{
									if (!func_273())
									{
										if (!unk_0x7984C03AA5CC2F41() || !unk_0xAD6DACA4BA53E0A4())
										{
											if (func_274(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_247 = unk_0x9CD27B0045628463();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_419(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0x23F8F5FC7E8C4A6B(bParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x7239B21A38F536BA(iVar0[iVar1]))
			{
				if (!unk_0x84A2DD9AC37C35C1(iVar0[iVar1]))
				{
					if (unk_0x7DBDD04862D95F04(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xE659E47AF827484B(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x7239B21A38F536BA(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x84A2DD9AC37C35C1(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x7DBDD04862D95F04(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xE659E47AF827484B(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_420()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_421(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_272(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_262(sParam3, iParam4, bParam7);
}

void func_422()
{
	if (((iLocal_222 == 4 || iLocal_222 == 5) || iLocal_222 == 8) || iLocal_222 == 6)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (func_423(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 2, 200, 0))
			{
				unk_0xDC64D2C53493ED12(unk_0x4F8644AF03D0E0D6());
				unk_0x4669B3ED80F24B4E(unk_0x4F8644AF03D0E0D6());
			}
		}
	}
	if (iLocal_441 == 0)
	{
		if (iLocal_222 == 4)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (func_423(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 2, 200, 0))
				{
					unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 3, false);
					unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
					iLocal_441 = 1;
				}
			}
		}
	}
}

int func_423(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = false;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x2A70BAE8883E4C81(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], bVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_424()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bLocal_279 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
	}
}

void func_425()
{
	if (iLocal_349 == 1)
	{
		if (iLocal_222 == 4)
		{
			if (iLocal_224 > 1 && iLocal_424 == 0)
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, false, true, 0))
				{
					func_248("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 6)
		{
			if (unk_0x7239B21A38F536BA(bLocal_295))
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_300))
				{
					if (func_16(unk_0xD80958FC74E988A6(), bLocal_295, 1) > 100f)
					{
						func_248("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_224 == 2)
			{
				if (unk_0x9CD27B0045628463() > iLocal_236 + 7000 && iLocal_439 == 0)
				{
					func_248("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0x7239B21A38F536BA(bLocal_278))
			{
				if (unk_0x4C241E39B23DF959(bLocal_278, false))
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
					{
						if (unk_0x5746F3A7AB7FE544(bLocal_278) > 62000f && unk_0x5746F3A7AB7FE544(bLocal_278) < 77000f)
						{
							if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -1219f, -2570f, 13f, true) < 210f)
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
								{
									if (unk_0xE83D4F9BA2A38914(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 200f && unk_0xE83D4F9BA2A38914(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > 125f)
									{
										if (iLocal_438 == 0)
										{
											iLocal_239 = unk_0x9CD27B0045628463();
											iLocal_438 = 1;
										}
										if (iLocal_438 == 1 && unk_0x9CD27B0045628463() > iLocal_239 + 4000)
										{
											func_248("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 1)
									{
										iLocal_438 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 5 || iLocal_222 == 6)
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -928.9f, -2935f, 13f, true) < 5f && !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (func_423(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 2, 200, 0))
				{
					func_248("TRV4_FAIL2");
				}
				else if (!func_223("TRV4_HELP3"))
				{
					func_428("TRV4_HELP3");
				}
			}
			else if (func_223("TRV4_HELP3"))
			{
				unk_0x8DFCED7A656F8802(true);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_278))
		{
			if (!unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x7239B21A38F536BA(bLocal_264))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
					{
						unk_0x3882114BDE571AD4(bLocal_264, false);
						unk_0x6B76DC1F3AE6E6A3(bLocal_264, false, false);
					}
				}
			}
		}
		if (iLocal_358 == 1)
		{
			if (unk_0x7239B21A38F536BA(bLocal_264))
			{
				if (unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					func_248("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_350 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
				{
					if (func_13(unk_0xD80958FC74E988A6(), bLocal_264) > 300f)
					{
						if (iLocal_404 == 1)
						{
							unk_0xCC33FA791322B9D9();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_404 = 0;
						}
					}
					else if (iLocal_404 == 0)
					{
						iLocal_404 = 1;
					}
					if (unk_0x4C241E39B23DF959(bLocal_278, false))
					{
						if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
						{
							if (unk_0x5746F3A7AB7FE544(bLocal_278) < 40000f)
							{
								if (func_13(unk_0xD80958FC74E988A6(), bLocal_264) > 400f)
								{
									func_248("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0xD80958FC74E988A6(), bLocal_264) > 350f)
							{
								func_248("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 3)
			{
				if (iLocal_425 == 1)
				{
					if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -934.4f, -2927.2f, 13.2f, true) > 25f || unk_0x9CD27B0045628463() > iLocal_237 + 12000)
					{
						func_248("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0x4C241E39B23DF959(bLocal_278, false))
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_278))
				{
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 111509f)
					{
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, false, true, 0))
						{
							func_248("TRV4_FAIL1");
						}
					}
					if (unk_0x5746F3A7AB7FE544(bLocal_278) > 122000f)
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (unk_0x1DBD58820FA61D71(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
							{
								if (iLocal_440 == 0)
								{
									iLocal_240 = unk_0x9CD27B0045628463();
									iLocal_440 = 1;
								}
								if (iLocal_440 == 1)
								{
									if (unk_0x9CD27B0045628463() > iLocal_240 + 4000)
									{
										func_248("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 2)
		{
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, false, true, 0))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 1)
		{
			if (func_427())
			{
				func_426();
			}
		}
	}
}

void func_426()
{
	func_434(unk_0xD80958FC74E988A6(), 0);
	func_430();
}

int func_427()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_428(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_429(bool bParam0)
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

void func_430()
{
	func_436(24, 1);
	unk_0xB9EFD5C25018725A("PoliceScannerDisabled", false);
	unk_0xC12321827687FE4D(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, true);
	func_431();
	func_222(&uLocal_28, 0, 0);
	unk_0xC5F0A8EBD3F361CE(0);
	unk_0x72751156E7678833(false);
	unk_0x7A2D8AD0A9EB9C3F();
	if (unk_0x7239B21A38F536BA(bLocal_287))
	{
		unk_0xEA386986E786A54F(&bLocal_287);
	}
	func_429(0);
	if (unk_0x0EAEB0DB4B132399(iLocal_263))
	{
		unk_0x46399A7895957C0E(iLocal_263);
	}
	if (unk_0x7239B21A38F536BA(bLocal_264))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_264))
		{
			unk_0x971D38760FBC02EF(bLocal_264, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_264);
	}
	if (unk_0x7239B21A38F536BA(bLocal_266))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_266))
		{
			unk_0x971D38760FBC02EF(bLocal_266, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_266);
	}
	if (unk_0x7239B21A38F536BA(bLocal_269))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_269))
		{
			unk_0x971D38760FBC02EF(bLocal_269, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_269);
	}
	if (unk_0x7239B21A38F536BA(bLocal_270))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_270))
		{
			unk_0x971D38760FBC02EF(bLocal_270, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_270);
	}
	if (unk_0x7239B21A38F536BA(bLocal_271))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_271))
		{
			unk_0x971D38760FBC02EF(bLocal_271, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_271);
	}
	if (unk_0x7239B21A38F536BA(bLocal_272))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_272))
		{
			unk_0x971D38760FBC02EF(bLocal_272, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_272);
	}
	if (unk_0x7239B21A38F536BA(bLocal_273))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_273))
		{
			unk_0x971D38760FBC02EF(bLocal_273, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_273);
	}
	if (unk_0x7239B21A38F536BA(bLocal_274))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_274))
		{
			unk_0x971D38760FBC02EF(bLocal_274, true);
		}
		unk_0x2595DD4236549CE3(&bLocal_274);
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[0]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_265[0]))
		{
			unk_0x971D38760FBC02EF(bLocal_265[0], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_265[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_265[1]))
		{
			unk_0x971D38760FBC02EF(bLocal_265[1], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_265[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[2]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_265[2]))
		{
			unk_0x971D38760FBC02EF(bLocal_265[2], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_265[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_265[3]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_265[3]))
		{
			unk_0x971D38760FBC02EF(bLocal_265[3], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_265[3]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[0]))
	{
		if (!unk_0x84A2DD9AC37C35C1(uLocal_267[0]))
		{
			unk_0x971D38760FBC02EF(uLocal_267[0], true);
		}
		unk_0x2595DD4236549CE3(&(uLocal_267[0]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(uLocal_267[1]))
		{
			unk_0x971D38760FBC02EF(uLocal_267[1], true);
		}
		unk_0x2595DD4236549CE3(&(uLocal_267[1]));
	}
	if (unk_0x7239B21A38F536BA(uLocal_267[2]))
	{
		if (!unk_0x84A2DD9AC37C35C1(uLocal_267[2]))
		{
			unk_0x971D38760FBC02EF(uLocal_267[2], true);
		}
		unk_0x2595DD4236549CE3(&(uLocal_267[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[0]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[0]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[0], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[1]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[1], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[2]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[2]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[2], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[2]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[3]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[3]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[3], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[3]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[4]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[4]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[4], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[4]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[5]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[5]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[5], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[5]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[6]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[6]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[6], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[6]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[7]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[7]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[7], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[7]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[8]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[8]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[8], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[8]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[9]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[9]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[9], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[9]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_268[10]))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_268[10]))
		{
			unk_0x971D38760FBC02EF(bLocal_268[10], true);
		}
		unk_0x2595DD4236549CE3(&(bLocal_268[10]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_275[0]))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_275[0]))
		{
			unk_0x971D38760FBC02EF(iLocal_275[0], true);
		}
		unk_0x2595DD4236549CE3(&(iLocal_275[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_276[0]))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_276[0]))
		{
			unk_0x971D38760FBC02EF(iLocal_276[0], true);
		}
		unk_0x2595DD4236549CE3(&(iLocal_276[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_276[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_276[1]))
		{
			unk_0x971D38760FBC02EF(iLocal_276[1], true);
		}
		unk_0x2595DD4236549CE3(&(iLocal_276[1]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_278))
	{
		unk_0x629BFA74418D6239(&bLocal_278);
	}
	if (unk_0x7239B21A38F536BA(bLocal_279))
	{
		if (unk_0xDDE6DF5AE89981D2(bLocal_279, false))
		{
			unk_0x629BFA74418D6239(&bLocal_279);
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_282))
	{
		unk_0x629BFA74418D6239(&bLocal_282);
	}
	if (unk_0x7239B21A38F536BA(bLocal_283))
	{
		unk_0x629BFA74418D6239(&bLocal_283);
	}
	if (unk_0x7239B21A38F536BA(bLocal_284))
	{
		unk_0x629BFA74418D6239(&bLocal_284);
	}
	if (unk_0x7239B21A38F536BA(bLocal_285))
	{
		unk_0x629BFA74418D6239(&bLocal_285);
	}
	if (unk_0x7239B21A38F536BA(bLocal_287))
	{
		unk_0x629BFA74418D6239(&bLocal_287);
	}
	if (unk_0x7239B21A38F536BA(bLocal_289))
	{
		if (unk_0xDDE6DF5AE89981D2(bLocal_289, false))
		{
			unk_0x629BFA74418D6239(&bLocal_289);
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[0]))
	{
		unk_0x629BFA74418D6239(&(iLocal_293[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[1]))
	{
		unk_0x629BFA74418D6239(&(iLocal_293[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[0]))
	{
		unk_0x629BFA74418D6239(&(iLocal_280[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_280[1]))
	{
		unk_0x629BFA74418D6239(&(iLocal_280[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[0]))
	{
		unk_0x629BFA74418D6239(&(iLocal_293[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_293[1]))
	{
		unk_0x629BFA74418D6239(&(iLocal_293[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_286[0]))
	{
		unk_0x629BFA74418D6239(&(iLocal_286[0]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_286[1]))
	{
		unk_0x629BFA74418D6239(&(iLocal_286[1]));
	}
	if (unk_0x7239B21A38F536BA(iLocal_288[0]))
	{
		unk_0x629BFA74418D6239(&(iLocal_288[0]));
	}
	if (unk_0x7239B21A38F536BA(bLocal_281))
	{
		unk_0x629BFA74418D6239(&bLocal_281);
	}
	unk_0x5B17A90291133DA5("TRV4_START");
	unk_0x5B17A90291133DA5("TRV4_GAMEPLAY_START");
	unk_0x5B17A90291133DA5("TRV4_START_CS_SKIP");
	unk_0x5B17A90291133DA5("TRV4_START_RT");
	unk_0x5B17A90291133DA5("TRV4_FOOT_CHASE_RT");
	unk_0x5B17A90291133DA5("TRV4_EVADE_RT");
	unk_0x5B17A90291133DA5("TRV4_CAR_ENTERED");
	unk_0x5B17A90291133DA5("TRV4_AIRPORT_ENTERED");
	unk_0x5B17A90291133DA5("TRV4_CHASE");
	unk_0x5B17A90291133DA5("TRV4_JET_ENTERED");
	if (unk_0xC153C43EA202C8C1(bLocal_262))
	{
		unk_0x464D8E1427156FE4(bLocal_262, 0);
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_672))
	{
		unk_0xC401503DFE8D53CF(iLocal_672, false);
	}
	unk_0x67EEDEA1B9BAFD94();
	unk_0x1D132D614DD86811(&iLocal_305);
	unk_0xBE2CACCF5A8AA805("digitalOverlay");
	unk_0xBF1A602B5BA52FEE(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, true);
	unk_0xBF1A602B5BA52FEE(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, true);
	if (unk_0xCB4E8BE8A0063C5D("Trev4_5"))
	{
		unk_0x5A353B8E6B1095B5("Trev4_5", false, 0.5f, 1f);
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	unk_0x1D408577D440E81E(1f);
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	unk_0xF66A602F829E2A06("missheist_agency3aig_lift_waitped_a");
	func_304(0);
	unk_0x51669F7D1FB53D9F(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x1090044AD1DA76FA();
}

void func_431()
{
	int iVar0;
	
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_432()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_443(0))
	{
		if (!func_433())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_251(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_256();
		}
	}
}

int func_433()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_434(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x3A87E44BB9A01D54(bParam0, &iVar0, false))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_435(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_100478 > 0)
	{
		Global_106934.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_103950.f_21[iParam1] = iVar0;
	}
}

int func_435(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_100478 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_436(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_440(iParam0, &iVar1);
	if (!unk_0x0C515FAB3FF9EA92("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xBC5115A5A939DD15(iVar1))
			{
				return;
			}
			if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == iVar1)
			{
				func_439(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xBC5115A5A939DD15(iVar1))
			{
				return;
			}
			if (func_437(iParam0))
			{
				func_439(iParam0, 0);
			}
		}
		unk_0x6170941419D7D8EC(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_437(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_438(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38401[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_438(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_439(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_438(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
}

var func_440(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_441(iParam0) };
	*iParam1 = unk_0x05B7A89BD78797FC(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_441(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_442(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_442(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_442(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_442(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_442(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_442(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_442(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312193[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_442(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_442(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_442(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_442(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_442(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_442(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_442(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_442(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_442(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_442(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_442(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_442(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_442(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_442(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_442(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_442(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_442(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_442(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_442(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_442(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_442(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_442(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_442(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_442(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_442(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_442(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_442(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_442(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_442(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_442(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_442(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_442(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_443(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

