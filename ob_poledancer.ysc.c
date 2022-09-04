#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	bool bLocal_3 = 0;
	bool bLocal_4 = 0;
	bool bLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	bLocal_4 = "Poledance_01";
	bLocal_5 = joaat("a_f_y_beach_01");
	bLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0x7239B21A38F536BA(bScriptParam_8))
	{
		unk_0x428CA6DBD1094446(bScriptParam_8, true);
		Local_2 = { unk_0x1899F328B0E12848(bScriptParam_8, 0f, 0f, 0f) };
		bLocal_3 = unk_0xE83D4F9BA2A38914(bScriptParam_8);
		unk_0x1A9205C1B9EE827F(bScriptParam_8, false, false);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(bScriptParam_8))
		{
			if (unk_0xCCBA154209823057(bScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x1A9205C1B9EE827F(bScriptParam_8, true, false);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x84A2DD9AC37C35C1(bLocal_1))
						{
							unk_0x3EB1FE9E8E908E15(bLocal_1, -1);
							unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
							unk_0x971D38760FBC02EF(bLocal_1, true);
							unk_0x1090044AD1DA76FA();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_1, false))
	{
		if (!unk_0xE659E47AF827484B(bLocal_1))
		{
			unk_0x9614299DCB53E54B(&bLocal_1);
		}
		else
		{
			unk_0x971D38760FBC02EF(bLocal_1, true);
		}
	}
	unk_0x1090044AD1DA76FA();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_1))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_1, Var0, false, true, 0))
			{
				return 1;
			}
			if (unk_0xC86D67D52A707CF8(bLocal_1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_1))
	{
		if (unk_0x77F1BEB8863288D5(bLocal_1, -2017877118) == 7)
		{
			unk_0xEA47FE3719165B94(bLocal_1, bLocal_6, bLocal_4, 8f, -8f, -1, 0, false, false, false, false);
		}
		else if (unk_0x20B711662962B472(bLocal_1, bLocal_6, bLocal_4, 3))
		{
			unk_0xEA47FE3719165B94(bLocal_1, bLocal_6, bLocal_4, 8f, -8f, -1, 0, false, false, false, false);
		}
		else if (!iLocal_7)
		{
			if (unk_0x1F0B79228E461EC9(bLocal_1, bLocal_6, bLocal_4, 3))
			{
				unk_0x4487C259F0F70977(bLocal_1, bLocal_6, bLocal_4, unk_0x313CE5879CEB6FCD(0f, 1065353216));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x5F9532F3B5CC2551(bLocal_1, false))
	{
		bLocal_1 = unk_0xD49F9B0955C367DE(5, bLocal_5, Local_2.f_0, Local_2.f_1, Local_2.f_2, bLocal_3, true, true);
		unk_0xC8A9481A01E63C28(bLocal_1, 0);
		unk_0x63F58F7C80513AAD(bLocal_1, false);
		unk_0x9F8AA94D6D97DBF4(bLocal_1, true);
	}
}

int func_5()
{
	unk_0x963D27A58DF860AC(bLocal_5);
	unk_0xD3BD40951412FEF6(bLocal_6);
	if (unk_0x98A4EB5D89A0C952(bLocal_5) && unk_0xD031A9162D01088C(bLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0x963D27A58DF860AC(bLocal_5);
		unk_0xD3BD40951412FEF6(bLocal_6);
	}
	return 0;
}

