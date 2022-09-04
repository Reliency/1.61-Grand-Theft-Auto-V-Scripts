#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				unk_0x4EDE34FBADD967A6(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0x1090044AD1DA76FA();
}

void func_1(bool bParam0)
{
	if (unk_0xAB58C27C2E6123C6("DISPLAY_DATA_SLOT"))
	{
		unk_0xC3D0841A0CC546A6(bParam0);
		unk_0xC6796A8FFA375E53();
	}
}

void func_2(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (unk_0xAB58C27C2E6123C6("SET_DATA_SLOT"))
	{
		unk_0xC3D0841A0CC546A6(bParam0);
		unk_0xC3D0841A0CC546A6(bParam1);
		unk_0xC3D0841A0CC546A6(bParam2);
		unk_0xC3D0841A0CC546A6(bParam3);
		unk_0xC3D0841A0CC546A6(false);
		unk_0xC3D0841A0CC546A6(false);
		if (bParam4)
		{
			unk_0xC3D0841A0CC546A6(true);
		}
		else
		{
			unk_0xC3D0841A0CC546A6(false);
		}
		func_3(bParam5);
		unk_0xC6796A8FFA375E53();
	}
}

void func_3(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

