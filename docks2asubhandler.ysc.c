#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xC968670BFACE42D9(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3.f_0;
	iLocal_1 = ScriptParam_3.f_1;
	while (!BitTest(uLocal_2, 1))
	{
		if (!BitTest(uLocal_2, 0))
		{
			if (unk_0x7239B21A38F536BA(iLocal_0))
			{
				if (unk_0x4C241E39B23DF959(iLocal_0, false))
				{
					unk_0xAD738C3085FE7E11(iLocal_0, false, true);
					unk_0x428CA6DBD1094446(iLocal_0, true);
					unk_0xFAEE099C6F890BB8(iLocal_0, true, true, true, true, true, false, false, false);
					if (unk_0x7239B21A38F536BA(iLocal_1))
					{
						unk_0xAD738C3085FE7E11(iLocal_1, false, true);
						unk_0x428CA6DBD1094446(iLocal_1, true);
						unk_0xFAEE099C6F890BB8(iLocal_1, true, true, true, true, true, false, false, false);
					}
					unk_0x933D6A9EEC1BACD0(&uLocal_2, false);
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x4C241E39B23DF959(iLocal_0, false))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0x933D6A9EEC1BACD0(&uLocal_2, true);
				}
				else if (fVar0 > 40000f && !unk_0xE659E47AF827484B(iLocal_0))
				{
					unk_0x933D6A9EEC1BACD0(&uLocal_2, true);
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&uLocal_2, true);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x629BFA74418D6239(&iLocal_0);
	unk_0xB736A491E64A32CF(&iLocal_1);
	unk_0x1090044AD1DA76FA();
}

